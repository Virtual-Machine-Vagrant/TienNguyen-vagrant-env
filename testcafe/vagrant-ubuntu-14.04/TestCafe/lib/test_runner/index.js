var EventEmitter = require("events").EventEmitter, util = require("util"), uuid = require("node-uuid"), moment = require("moment"), path = require("path"), childProc = require("child_process"), AssetsManager = require("../server/assets_manager"), cmd = require("../shared/service_msg_cmd"), Const = require("../server/const"), ERR = require("./../server/server_errs"), Reporter = require("./reporter"), Upload = require("../upload"), WorkerPool = require("./worker_pool");

var testRunCounter = 0;

var screenshotsQueue = [];

var QUARANTINE_TEST_RUN_COUNT = 5, MAX_SCREENSHOT_ATTEMPTS_COUNT = 3;

var WIN_PLATFORM = /^win/.test(process.platform), MAC_PLATFORM = process.platform === "darwin";

function proxyErrRes(proxyCtx, resBody) {
    proxyCtx.res.statusCode = 500;
    if (resBody) {
        proxyCtx.res.setHeader("content-type", "text/html");
        proxyCtx.res.end(resBody);
    } else proxyCtx.res.end();
}

var TestRunner = module.exports = function(hammerhead, config) {
    EventEmitter.call(this);
    this.workerPool = new WorkerPool(config);
    this.reporter = new Reporter(config.reportsPath);
    this.hammerhead = hammerhead;
    this.tasks = {};
    this.testRuns = {};
    this.workerPool.on("workerDisconnectedError", this._onWorkerDisconnectedError.bind(this));
    this.workerPool.on("workerRestart", this._onWorkerRestarted.bind(this));
    var proxyEvents = this.hammerhead.proxyEvents.for(Const.TEST_RUNNER_JOB_OWNER_TOKEN), serviceEvents = this.hammerhead.serviceEvents.for(Const.TEST_RUNNER_JOB_OWNER_TOKEN), crossDomainServiceEvents = this.hammerhead.crossDomainServiceEvents.for(Const.TEST_RUNNER_JOB_OWNER_TOKEN);
    proxyEvents.listen("authCredentialsRequested", this._onAuthCredentialsRequested.bind(this));
    proxyEvents.listen("originResponse", this._onOriginResponse.bind(this));
    proxyEvents.listen("error", this._onProxyError.bind(this));
    proxyEvents.listen("injectionError", this._onInjectionError.bind(this));
    serviceEvents.listen("getUploadedFiles", this._onUploadedFilesRequired.bind(this));
    serviceEvents.listen("serviceMsg", this._onServiceMsg.bind(this));
    serviceEvents.listen("taskScriptRequested", this._onTaskScriptRequest.bind(this));
    crossDomainServiceEvents.listen("taskScriptRequested", this._onIFrameTaskScriptRequest.bind(this));
    crossDomainServiceEvents.listen("getUploadedFiles", this._onUploadedFilesRequired.bind(this));
};

util.inherits(TestRunner, EventEmitter);

TestRunner.MAX_TEST_RUN_RESTARTS = 3;

TestRunner.prototype._onUploadedFilesRequired = function(jobUid, filePaths, callback) {
    var testRun = this.testRuns[jobUid];
    if (testRun) {
        var workingDir = testRun.fixture.workingDir;
        Upload.getFiles(filePaths, workingDir, callback);
    }
};

TestRunner.prototype._onAuthCredentialsRequested = function(proxyCtx, callback) {
    var testRun = this.testRuns[proxyCtx.jobInfo.uid];
    callback(testRun ? testRun.authCredentials : null);
};

TestRunner.prototype._onInjectionError = function(ctx, err) {
    var testRun = this.testRuns[ctx.jobInfo.uid];
    testRun.halted = true;
    this._addTestError(testRun, err);
    this.workerPool.redirectToWorkerIdle(ctx, testRun.workerName);
};

TestRunner.prototype._onOriginResponse = function(ctx, callback) {
    var testRun = this.testRuns[ctx.jobInfo.uid];
    if (!testRun) {
        proxyErrRes(ctx);
        return;
    }
    if (ctx.originRes.statusCode >= 400 && ctx.originResContentInfo.isPage && !ctx.isIFrame) {
        var err = {
            code: ERR.TEST_RUNNER_RESOURCE_ERROR_HTTP_STATUS_CODE,
            url: ctx.originResourceInfo.url,
            statusCode: ctx.originRes.statusCode
        };
        this._addTestError(testRun, err);
        testRun.halted = true;
        this.workerPool.redirectToWorkerIdle(ctx, testRun.workerName);
        return;
    }
    if (ctx.originResContentInfo.isPage && ctx.originRes.statusCode === 200) {
        if (testRun.halted) this.workerPool.redirectToWorkerIdle(ctx, testRun.workerName); else callback();
    } else {
        if (ctx.originResContentInfo && ctx.originResContentInfo.isFileDownloading) testRun.isFileDownloading = true;
        callback();
    }
};

TestRunner.prototype._onProxyError = function(proxyCtx, err) {
    var testRun = this.testRuns[proxyCtx.jobInfo.uid];
    if (testRun) {
        if (proxyCtx.originResContentInfo && proxyCtx.originResContentInfo.isPage || err.code === this.hammerhead.SERVER_ERRS.PROXY_CANT_RESOLVE_ORIGIN_URL) {
            this._addTestError(testRun, err);
            testRun.halted = true;
            this.workerPool.redirectToWorkerIdle(proxyCtx, testRun.workerName);
        } else if (proxyCtx.isPageReqCandidate) {
            if (!testRun.proxyErrors) testRun.proxyErrors = {};
            testRun.proxyErrors[proxyCtx.originResourceInfo.url] = err;
            this.hammerhead.injectInPage(proxyCtx, [], "", "utf-8", function(err, html) {
                proxyErrRes(proxyCtx, html);
            });
        } else proxyErrRes(proxyCtx);
    }
};

TestRunner.prototype._onTaskScriptRequest = function(refererInfo, cookie, callback) {
    var isIFrame = refererInfo.resourceType === "iframe";
    if (isIFrame) return this._onIFrameTaskScriptRequest(refererInfo, cookie, callback);
    var runner = this, testRun = this.testRuns[refererInfo.jobInfo.uid];
    if (!testRun) {
        callback("");
        return;
    }
    if (testRun.proxyErrors && testRun.proxyErrors[refererInfo.originResourceInfo.url]) {
        var errHandlerScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.TEST_RUN_ERR_HANDLER, {
            workerIdleUrl: this.workerPool.getWorkerIdleUrl(testRun.workerName),
            jobUid: testRun.uid,
            jobOwnerToken: Const.TEST_RUNNER_JOB_OWNER_TOKEN,
            error: JSON.stringify(testRun.proxyErrors[refererInfo.originResourceInfo.url])
        });
        callback(errHandlerScript);
        return;
    }
    var sharedJs = "null";
    if (!isIFrame) {
        var requireJs = testRun.suite.requireJsMap[testRun.fixture.requireJsMapKey];
        sharedJs = requireJs + testRun.fixture.remainderJs;
    }
    var task = this.tasks[testRun.taskUid];
    var iFrameTestRunScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.IFRAME_TEST_RUN, {
        sharedJs: sharedJs,
        workerIdleUrl: runner.workerPool.getWorkerIdleUrl(testRun.workerName),
        jobUid: testRun.uid,
        jobOwnerToken: Const.TEST_RUNNER_JOB_OWNER_TOKEN,
        cookie: cookie.replace(/'/g, "\\'"),
        originHost: refererInfo.originResourceInfo.host,
        originProtocol: refererInfo.originResourceInfo.protocol,
        originHostname: refererInfo.originResourceInfo.hostname,
        originPort: refererInfo.originResourceInfo.port || "",
        takeScreenshotOnFails: task.takeScreenshotOnFails,
        failOnJsErrors: task.failOnJsErrors,
        nativeDialogsInfo: JSON.stringify(testRun.nativeDialogsInfo)
    }), testRunScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.TEST_RUN, {
        stepNames: isIFrame ? "null" : JSON.stringify(testRun.test.stepData.names),
        testSteps: isIFrame ? "null" : testRun.test.stepData.js,
        sharedJs: isIFrame ? "null" : sharedJs,
        nextStep: testRun.actionTargetWaiting ? testRun.nextStep - 1 : testRun.nextStep,
        testError: testRun.testError ? JSON.stringify(testRun.testError) : null,
        workerIdleUrl: runner.workerPool.getWorkerIdleUrl(testRun.workerName),
        restartTestRunUrl: runner.workerPool.getRestartTestRunUrl(testRun.workerName),
        halted: testRun.halted,
        jobUid: testRun.uid,
        jobOwnerToken: Const.TEST_RUNNER_JOB_OWNER_TOKEN,
        cookie: cookie.replace(/'/g, "\\'"),
        originHost: refererInfo.originResourceInfo.host,
        originProtocol: refererInfo.originResourceInfo.protocol,
        originHostname: refererInfo.originResourceInfo.hostname,
        originPort: refererInfo.originResourceInfo.port || "",
        takeScreenshotOnFails: task.takeScreenshotOnFails,
        failOnJsErrors: task.failOnJsErrors,
        nativeDialogsInfo: JSON.stringify(testRun.nativeDialogsInfo),
        iFrameTestRunScript: JSON.stringify(iFrameTestRunScript)
    });
    testRun.actionTargetWaiting = false;
    callback(testRunScript);
};

TestRunner.prototype._onIFrameTaskScriptRequest = function(refererInfo, cookie, callback) {
    var runner = this, testRun = this.testRuns[refererInfo.jobInfo.uid];
    if (!testRun) {
        callback("");
        return;
    }
    var requireJs = testRun.suite.requireJsMap[testRun.fixture.requireJsMapKey], sharedJs = requireJs + testRun.fixture.remainderJs, task = this.tasks[testRun.taskUid];
    var testRunScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.IFRAME_TEST_RUN, {
        sharedJs: sharedJs,
        workerIdleUrl: runner.workerPool.getWorkerIdleUrl(testRun.workerName),
        jobUid: testRun.uid,
        jobOwnerToken: Const.TEST_RUNNER_JOB_OWNER_TOKEN,
        cookie: cookie.replace(/'/g, "\\'"),
        originHost: refererInfo.originResourceInfo.host,
        originProtocol: refererInfo.originResourceInfo.protocol,
        originHostname: refererInfo.originResourceInfo.hostname,
        originPort: refererInfo.originResourceInfo.port || "",
        takeScreenshotOnFails: task.takeScreenshotOnFails,
        failOnJsErrors: task.failOnJsErrors,
        nativeDialogsInfo: JSON.stringify(testRun.nativeDialogsInfo)
    });
    callback(testRunScript);
};

TestRunner.prototype._getWindowShotPath = function(testRun, cb) {
    this.reporter.getReportPathByUid(testRun.taskUid, function(reportsDir) {
        var imageExtension = ".png";
        cb({
            path: path.join(reportsDir, Reporter.SCREENSHOTS_DIR_NAME, "./"),
            fileName: uuid.v4() + imageExtension
        });
    });
};

function addToScreenshotsQueue(action) {
    screenshotsQueue.push(action);
    if (screenshotsQueue.length === 1) action();
}

function shiftScreenshotsQueue() {
    screenshotsQueue.shift();
    if (screenshotsQueue.length) screenshotsQueue[0]();
}

TestRunner.prototype._takeScreenshot = function(options, callback) {
    var testRunner = this, testRun = options.testRun, windowMark = options.windowMark, browserName = options.browserName, pageUrl = options.pageUrl, isFailedStep = options.isFailedStep, withoutStepName = options.withoutStepName, closeWindowExecPath = "", proc = null, stepName = testRun.test.stepData.names[testRun.nextStep - 1], screenshot = {
        workerName: testRun.workerName,
        isFailedStep: isFailedStep,
        filePath: null
    };
    if (!withoutStepName) screenshot.stepName = stepName;
    this._getWindowShotPath(testRun, function(shotPath) {
        if (WIN_PLATFORM) {
            closeWindowExecPath = path.join(__dirname, "./shot_window.exe");
            proc = childProc.execFile(closeWindowExecPath, [ windowMark, browserName, pageUrl, shotPath.path, shotPath.fileName, Reporter.SCREENSHOT_THUMBNAILS_DIR_NAME, Reporter.SCREENSHOT_THUMBNAILS_WIDTH, Reporter.SCREENSHOT_THUMBNAILS_HEIGHT ], function() {
                if (proc.exitCode < 0) {
                    if (--options.maxAttemptsCount > 0) {
                        setTimeout(function() {
                            testRunner._takeScreenshot(options, callback);
                        }, 300);
                    } else callback();
                } else {
                    screenshot.filePath = path.join(shotPath.path, shotPath.fileName);
                    testRunner.reporter.addScreenToReport(testRun.taskUid, testRun.test.uid, screenshot);
                    callback();
                }
            });
        } else if (MAC_PLATFORM) {
            closeWindowExecPath = path.join(__dirname, "./shot_window");
            proc = childProc.execFile(closeWindowExecPath, [ windowMark, shotPath.path, shotPath.fileName, Reporter.SCREENSHOT_THUMBNAILS_DIR_NAME, Reporter.SCREENSHOT_THUMBNAILS_WIDTH, Reporter.SCREENSHOT_THUMBNAILS_HEIGHT ], function() {
                if (proc.exitCode !== 0) {
                    if (--options.maxAttemptsCount > 0) {
                        setTimeout(function() {
                            testRunner._takeScreenshot(options, callback);
                        }, 300);
                    } else callback();
                } else {
                    screenshot.filePath = path.join(shotPath.path, shotPath.fileName);
                    testRunner.reporter.addScreenToReport(testRun.taskUid, testRun.test.uid, screenshot);
                    callback();
                }
            });
        } else {
            callback();
        }
    });
};

TestRunner.prototype._onServiceMsg = function(msg, callback) {
    var testRunner = this, res = null, expectedInactivityDuration = null, testRun = this.testRuns[msg.jobUid];
    if (testRun && !testRun.halted) {
        switch (msg.cmd) {
          case cmd.TEST_FAIL:
            this._addTestError(testRun, msg.err);
            testRun.halted = true;
            break;

          case cmd.ASSERTION_FAILED:
            this._addTestError(testRun, msg.err);
            break;

          case cmd.TEST_COMPLETE:
            testRun.halted = true;
            break;

          case cmd.SET_STEPS_SHARED_DATA:
            testRun.stepsSharedData = msg.stepsSharedData;
            break;

          case cmd.GET_STEPS_SHARED_DATA:
            res = testRun.stepsSharedData;
            break;

          case cmd.SET_NEXT_STEP:
            testRun.nextStep = msg.nextStep;
            break;

          case cmd.SET_ACTION_TARGET_WAITING:
            testRun.actionTargetWaiting = msg.value;
            break;

          case cmd.SET_TEST_ERROR:
            testRun.testError = msg.err;
            break;

          case cmd.INACTIVITY_EXPECTED:
            expectedInactivityDuration = msg.duration;
            break;

          case cmd.GET_AND_UNCHECK_FILE_DOWNLOADING_FLAG:
            res = testRun.isFileDownloading;
            testRun.isFileDownloading = false;
            break;

          case cmd.UNCHECK_FILE_DOWNLOADING_FLAG:
            testRun.isFileDownloading = false;
            break;

          case cmd.TAKE_SCREENSHOT:
            addToScreenshotsQueue(testRunner._takeScreenshot.bind(testRunner, {
                testRun: testRun,
                windowMark: msg.windowMark,
                browserName: msg.browserName,
                pageUrl: msg.url,
                maxAttemptsCount: MAX_SCREENSHOT_ATTEMPTS_COUNT,
                isFailedStep: msg.isFailedStep,
                withoutStepName: msg.withoutStepName
            }, function() {
                callback();
                shiftScreenshotsQueue();
            }));
            return;

          case cmd.NATIVE_DIALOGS_INFO_SET:
            if (msg.timeStamp >= testRun.nativeDialogsInfoTimeStamp) {
                testRun.nativeDialogsInfoTimeStamp = msg.timeStamp;
                testRun.nativeDialogsInfo = msg.info;
            }
            break;

          default:
            break;
        }
        this.workerPool.workerHeartbeat(testRun.workerName, expectedInactivityDuration);
    }
    callback(res);
};

TestRunner.prototype._addTestError = function(testRun, err) {
    if (err.__sourceIndex !== void 0 && err.__sourceIndex !== null) {
        var task = this.tasks[testRun.taskUid];
        err.relatedSourceCode = task.sourceIndex[err.__sourceIndex];
        delete err.__sourceIndex;
    }
    testRun.errs.push(err);
};

TestRunner.prototype._getNextTestRunUrl = function(worker) {
    var testRunUid = worker.testRuns.length && worker.testRuns[0];
    if (testRunUid) {
        var testRun = this.testRuns[testRunUid], task = this.tasks[testRun.taskUid];
        if (!task.started) this.reporter.taskStarted(testRun.taskUid);
        task.started = true;
        testRun.startTime = moment();
        worker.currentTest = {
            name: testRun.test.name,
            filename: testRun.fixture.fileName,
            path: testRun.fixture.path
        };
        try {
            return this.hammerhead.getProxyUrl(testRun.fixture.page, testRunUid, Const.TEST_RUNNER_JOB_OWNER_TOKEN);
        } catch (err) {
            this._addTestError(testRun, err);
            this._completeTestRun(testRun);
        }
    }
    return "";
};

TestRunner.prototype.getWorkerStatus = function(workerName) {
    var worker = this.workerPool.get(workerName);
    if (!worker) return;
    this._completeHaltedTestRun(worker);
    var testRunUrl = this._getNextTestRunUrl(worker);
    return this.workerPool.getWorkerStatus(workerName, encodeURI(testRunUrl));
};

TestRunner.prototype.addTask = function(name, suite, testUids, workerNames, options) {
    var runner = this, browserVersions = {}, taskUid = uuid.v4(), task = {
        pendingTestRunCount: 0,
        started: false,
        quarantineMode: options.quarantineMode,
        reportFormat: options.reportFormat,
        reportPath: options.reportPath,
        sourceIndex: suite.sourceIndex,
        failOnJsErrors: options.failOnJsErrors,
        takeScreenshotOnFails: options.takeScreenshotOnFails
    };
    workerNames.forEach(function(workerName) {
        var worker = runner.workerPool.get(workerName);
        browserVersions[workerName] = worker.browserVersion;
        testUids.forEach(function(testUid) {
            var testRunUid = ++testRunCounter, test = suite.tests[testUid], fixture = suite.fixtures[test.fixtureUid];
            runner.testRuns[testRunUid] = {
                authCredentials: fixture.authCredentials,
                errs: [],
                fixture: fixture,
                suite: suite,
                halted: false,
                nextStep: 0,
                actionTargetWaiting: 0,
                testError: null,
                restartCount: 0,
                stepsSharedData: {
                    __workerName: workerName
                },
                nativeDialogsInfo: null,
                nativeDialogsInfoTimeStamp: 0,
                taskUid: taskUid,
                test: test,
                uid: testRunUid,
                workerUid: worker.uid,
                browserVersion: worker.browserVersion,
                workerName: workerName,
                quarantine: {
                    succeeded: 0,
                    failed: 0
                }
            };
            worker.testRuns.push(testRunUid);
            task.pendingTestRunCount++;
        });
    });
    this.tasks[taskUid] = task;
    this.reporter.taskAdded(taskUid, name, testUids.length, workerNames, browserVersions, options.quarantineMode, options);
    var taskReport = runner.reporter.getTaskReportByUid(taskUid);
    workerNames.forEach(function(workerName) {
        var worker = runner.workerPool.get(workerName);
        worker.taskReport = taskReport;
    });
    this.emit("taskAdded", workerNames);
    return taskUid;
};

TestRunner.prototype._completeHaltedTestRun = function(worker) {
    var testRunUid = worker.testRuns.length && worker.testRuns[0];
    if (testRunUid) {
        var testRun = this.testRuns[testRunUid];
        if (testRun.halted) this._completeTestRun(testRun);
    }
};

TestRunner.prototype._quarantine = function(testRun) {
    var runNumber = testRun.quarantine.succeeded + testRun.quarantine.failed + 1;
    if (testRun.errs.length) {
        if (testRun.errs[0] && testRun.errs[0].code === ERR.WORKER_POOL_WORKER_DISCONNECTED) return false;
        if (!testRun.quarantine.runErrs) testRun.quarantine.runErrs = {};
        testRun.quarantine.runErrs["testRun" + runNumber + "Errs"] = testRun.errs;
        testRun.quarantine.failed++;
    } else testRun.quarantine.succeeded++;
    if (testRun.quarantine.failed > 0) {
        if (testRun.quarantine.succeeded + testRun.quarantine.failed < QUARANTINE_TEST_RUN_COUNT) {
            this._resetTestRun(testRun);
            return true;
        } else testRun.errs = !testRun.quarantine.succeeded ? testRun.errs : [];
    }
    return false;
};

TestRunner.prototype._completeTestRun = function(testRun) {
    var task = this.tasks[testRun.taskUid], workerName = testRun.workerName, worker = this.workerPool.get(workerName);
    if (testRun.workerUid !== worker.uid) return;
    if (task.quarantineMode && this._quarantine(testRun)) return;
    this.hammerhead.removeCookies({
        ownerToken: Const.TEST_RUNNER_JOB_OWNER_TOKEN,
        uid: testRun.uid
    });
    this.reporter.testRunCompleted(testRun);
    worker.testRuns.splice(worker.testRuns.indexOf(testRun.uid), 1);
    if (!worker.testRuns.length) this.workerPool.onWorkerTaskComplete(worker, testRun.taskUid);
    delete this.testRuns[testRun.uid];
    task.pendingTestRunCount--;
    if (!task.pendingTestRunCount) {
        this.reporter.taskCompleted(testRun.taskUid);
        delete this.tasks[testRun.taskUid];
    } else worker.taskReport = this.reporter.getTaskReportByUid(testRun.taskUid);
};

TestRunner.prototype._onWorkerDisconnectedError = function(err, worker) {
    var runner = this, runsToComplete = worker.testRuns.slice(0);
    runsToComplete.forEach(function(testRunUid) {
        var testRun = runner.testRuns[testRunUid];
        runner._addTestError(testRun, err);
        runner._completeTestRun(testRun);
    });
};

TestRunner.prototype._onWorkerRestarted = function(workerName, uid) {
    var testRunner = this, worker = this.workerPool.get(workerName);
    worker.testRuns.forEach(function(testRunUid) {
        testRunner.testRuns[testRunUid].workerUid = uid;
    });
    this._resetTestRun(this.testRuns[worker.testRuns[0]]);
};

TestRunner.prototype._resetTestRun = function(testRun) {
    testRun.errs = [];
    testRun.halted = false;
    testRun.nextStep = 0;
    testRun.actionTargetWaiting = false;
    testRun.testError = null;
    testRun.stepsSharedData = {
        __workerName: testRun.workerName
    };
    testRun.startTime = moment();
    testRun.nativeDialogsInfo = null;
    testRun.nativeDialogsInfoTimeStamp = 0;
    this.hammerhead.removeCookies({
        ownerToken: Const.TEST_RUNNER_JOB_OWNER_TOKEN,
        uid: testRun.uid
    });
};

TestRunner.prototype.restartCurrentTestRun = function(workerName) {
    var worker = this.workerPool.get(workerName), testRunUid = worker.testRuns.length && worker.testRuns[0], testRun = this.testRuns[testRunUid];
    if (testRun) {
        if (++testRun.restartCount > TestRunner.MAX_TEST_RUN_RESTARTS) {
            this._addTestError(testRun, {
                code: ERR.TEST_RUNNER_MAX_TEST_RUN_RESTARTS
            });
            testRun.halted = true;
        } else this._resetTestRun(testRun);
    }
};