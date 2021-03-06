var Hammerhead = require("./../../hammerhead"), AssetsManager = require("./assets_manager"), cmd = require("../shared/service_msg_cmd"), Const = require("./const"), ERR = require("./server_errs"), errMsgBuilder = require("../err_msg_builder"), FixtureCode = require("../fixture_code/"), Upload = require("../upload");

var recordingCounter = 0;

var WIN_PLATFORM = /^win/.test(process.platform), MAC_PLATFORM = process.platform === "darwin";

var Recorder = exports.Recorder = function(hammerhead, vfs, uxlog, showSteps, onShowStepsChanged) {
    this.hammerhead = hammerhead;
    this.vfs = vfs;
    this.uxlog = uxlog;
    this.recordings = {};
    this.showSteps = showSteps;
    this.onShowStepsChanged = onShowStepsChanged;
    var proxyEvents = hammerhead.proxyEvents.for(Const.RECORDER_JOB_OWNER_TOKEN), serviceEvents = hammerhead.serviceEvents.for(Const.RECORDER_JOB_OWNER_TOKEN), crossDomainServiceEvents = hammerhead.crossDomainServiceEvents.for(Const.RECORDER_JOB_OWNER_TOKEN);
    proxyEvents.listen("authCredentialsRequested", this._onAuthCredentialsRequested.bind(this));
    proxyEvents.listen("originResponse", this._onOriginResponse.bind(this));
    proxyEvents.listen("injectionError", this._onInjectionError.bind(this));
    proxyEvents.listen("error", this._onProxyError.bind(this));
    serviceEvents.listen("uploadFiles", this._onUploadFiles.bind(this));
    serviceEvents.listen("getUploadedFiles", this._onUploadedFilesRequired.bind(this));
    serviceEvents.listen("serviceMsg", this._onServiceMsg.bind(this));
    serviceEvents.listen("taskScriptRequested", this._onTaskScriptRequest.bind(this));
    crossDomainServiceEvents.listen("taskScriptRequested", this._onIFrameTaskScriptRequest.bind(this));
    crossDomainServiceEvents.listen("uploadFiles", this._onUploadFiles.bind(this));
    crossDomainServiceEvents.listen("getUploadedFiles", this._onUploadedFilesRequired.bind(this));
};

Recorder.prototype._onUploadedFilesRequired = function(jobUid, filePaths, callback) {
    var recording = this.recordings[jobUid];
    if (recording) Upload.getFiles(filePaths, recording.workingDir, callback);
};

Recorder.prototype._onUploadFiles = function(jobUid, data, fileNames, callback) {
    var recording = this.recordings[jobUid];
    if (recording) Upload.saveFiles(fileNames, recording.workingDir, data, callback);
};

Recorder.prototype._onAuthCredentialsRequested = function(proxyCtx, callback) {
    var recording = this.recordings[proxyCtx.jobInfo.uid];
    callback(recording ? recording.authCredentials : null);
};

Recorder.prototype._onOriginResponse = function(ctx, callback) {
    var recording = this.recordings[ctx.jobInfo.uid];
    if (!recording) {
        ctx.res.statusCode = 500;
        ctx.res.end();
        return;
    }
    if (ctx.originRes.statusCode === 401 && ctx.originResContentInfo.isPage) {
        this._redirectToAuthenticationPage(ctx, recording);
        return;
    }
    if (ctx.originRes.statusCode >= 400 && !ctx.isXhr && !ctx.isIFrame) {
        this._redirectToServerErrorPage(ctx, recording.returnUrl);
        return;
    }
    if (ctx.originResContentInfo && ctx.originResContentInfo.isFileDownloading) recording.isFileDownloading = true;
    callback();
};

Recorder.prototype._onInjectionError = function(ctx) {
    var recording = this.recordings[ctx.jobInfo.uid];
    ctx.originRes.statusCode = 500;
    this._redirectToServerErrorPage(ctx, recording.returnUrl);
};

Recorder.prototype._onProxyError = function(proxyCtx, err) {
    var recording = this.recordings[proxyCtx.jobInfo.uid];
    if (recording && (proxyCtx.originResContentInfo && proxyCtx.originResContentInfo.isPage || proxyCtx.isPageReqCandidate)) this._redirectToServerErrorPage(proxyCtx, recording.returnUrl, errMsgBuilder.build(err));
};

Recorder.prototype._onServiceMsg = function(msg, callback) {
    var recorder = this, recording = this.recordings[msg.jobUid], res = null;
    if (recording) {
        switch (msg.cmd) {
          case cmd.STEPS_INFO_GET:
            res = {
                stepsInfo: recording.stepsInfo,
                hasUnsavedChanges: recording.hasUnsavedChanges,
                testSaved: recording.testSaved
            };
            break;

          case cmd.STEPS_INFO_SET:
            recording.stepsInfo = msg.stepsInfo;
            recording.hasUnsavedChanges = msg.hasUnsavedChanges;
            if (msg.getStepsScript) res = Hammerhead.wrapDomAccessors(FixtureCode.CodeGenerator.getTestStepBodies(recording.stepsInfo, true));
            if (!recording.wereActionsRecorded) for (var l = 0; l < recording.stepsInfo.length; l++) if (!recording.stepsInfo[l].isAssertion) {
                recording.wereActionsRecorded = true;
                break;
            }
            break;

          case cmd.WERE_ACTIONS_RECORDED:
            res = recording.wereActionsRecorded;
            break;

          case cmd.TOOLBAR_POSITION_SET:
            recording.toolbarPosition = msg.toolbarPosition;
            break;

          case cmd.CHANGE_SHOW_STEPS:
            recorder.showSteps = msg.show;
            if (typeof recorder.onShowStepsChanged === "function") recorder.onShowStepsChanged(msg.show);
            break;

          case cmd.CANCEL_AUTHENTICATION:
            recording.stepsInfo.splice(-1, 1);
            if (msg.hasErrors) {
                callback({
                    recordingUrl: recording.recordingUrl
                });
                return;
            }
            if (!recording.stepsInfo.length) {
                recorder.getFixtureUid(recording.fixturePath, recording.fixtureFileName, function(uid) {
                    recorder.startRecording(uid, recording.returnUrl, function(err, recordingUrl) {
                        callback({
                            err: err ? errMsgBuilder.build(err) : err,
                            recordingUrl: recordingUrl
                        });
                    }, recording.uid);
                });
            } else {
                this.startPlayback(recording.uid, function(err, recordingUrl) {
                    callback({
                        err: err ? errMsgBuilder.build(err) : err,
                        recordingUrl: recordingUrl
                    });
                });
            }
            return;

          case cmd.START_PLAYBACK:
            this.startPlayback(recording.uid, function(err, recordingUrl) {
                callback({
                    err: err ? errMsgBuilder.build(err) : err,
                    recordingUrl: recordingUrl
                });
            });
            return;

          case cmd.END_PLAYBACK:
            recording.playback.run = false;
            recording.playback.nextStep = 0;
            recording.playback.actionTargetWaiting = false;
            recording.playback.steps = "[]";
            recording.playback.failedSteps = [];
            recording.playback.nativeDialogsInfo = null;
            recording.playback.nativeDialogsInfoTimeStamp = 0;
            callback(msg.error ? {
                errorMessage: errMsgBuilder.build(msg.error)
            } : null);
            return;

          case cmd.SET_NEXT_STEP_PLAYBACK:
            recording.playback.nextStep = msg.nextStep;
            break;

          case cmd.SET_ACTION_TARGET_WAITING_PLAYBACK:
            recording.playback.actionTargetWaiting = msg.value;
            break;

          case cmd.FAILED_STEP_IN_PLAYBACK:
            recording.playback.failedSteps.push(msg.stepNum);
            break;

          case cmd.NATIVE_DIALOGS_INFO_SET:
            if (msg.timeStamp >= recording.playback.nativeDialogsInfoTimeStamp) {
                recording.playback.nativeDialogsInfoTimeStamp = msg.timeStamp;
                recording.playback.nativeDialogsInfo = msg.info;
            }
            break;

          case cmd.SET_NATIVE_DIALOGS_QUEUE:
            recording.nativeDialogsQueue = msg.queue;
            break;

          case cmd.SET_HAS_UNSAVED_CHANGES:
            recording.hasUnsavedChanges = msg.hasUnsavedChanges;
            break;

          case cmd.GET_AND_UNCHECK_FILE_DOWNLOADING_FLAG:
            res = recording.isFileDownloading;
            recording.isFileDownloading = false;
            break;

          case cmd.UNCHECK_FILE_DOWNLOADING_FLAG:
            recording.isFileDownloading = false;
            break;

          case cmd.SAVE_TEST:
            this.saveTest(msg.jobUid, recording.testSaved ? recording.testName : msg.testName, function(res) {
                var err = res.err, fixtureFilename = res.fixtureFileName;
                callback({
                    err: err ? errMsgBuilder.build(err) : err,
                    fixtureFilename: fixtureFilename
                });
            });
            return;

          case cmd.EXIT_RECORDING:
            this.exitRecording(msg.jobUid, function(res) {
                var err = res.err, fixtureFilename = res.fixtureFileName;
                callback({
                    err: err ? errMsgBuilder.build(err) : err,
                    fixtureFilename: fixtureFilename
                });
            });
            return;

          case cmd.RESTART_RECORDING:
            recorder.getFixtureUid(recording.fixturePath, recording.fixtureFileName, function(uid) {
                recorder.startRecording(uid, recording.returnUrl, function(err, recordingUrl) {
                    callback({
                        err: err ? errMsgBuilder.build(err) : err,
                        recordingUrl: recordingUrl
                    });
                }, recording.uid);
            });
            return;

          case cmd.AUTH_CREDENTIALS_SET:
            var vfs = this.vfs;
            vfs.getRealPath(recording.fixturePath, recording.fixtureFileName, function(fileName) {
                var username = msg.username, password = msg.password;
                FixtureCode.CodeGenerator.editDirectives(fileName, {
                    auth: username + ":" + password
                }, function(err) {
                    if (err) {
                        callback(errMsgBuilder.build(err));
                        return;
                    }
                    recording.authCredentials = {
                        username: username,
                        password: password
                    };
                    vfs.forceBuild(function() {
                        callback();
                    });
                });
            });
            return;

          case cmd.UXLOG:
            this.uxlog.addEntry(this.uxlog.RECORDER_ACTION_KIND, msg.msg);
            break;

          default:
            break;
        }
    }
    callback(res);
};

Recorder.prototype._onTaskScriptRequest = function(refererInfo, cookie, callback) {
    var recorder = this, isIFrame = refererInfo.resourceType === "iframe";
    if (isIFrame) {
        this._onIFrameTaskScriptRequest(refererInfo, cookie, callback);
        return;
    }
    var recording = this.recordings[refererInfo.jobInfo.uid];
    if (!recording) {
        callback("");
        return;
    }
    var iFrameRecordingScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.IFRAME_RECORDING, {
        jobUid: recording.uid,
        jobOwnerToken: Const.RECORDER_JOB_OWNER_TOKEN,
        cookie: cookie.replace(/'/g, "\\'"),
        originHost: refererInfo.originResourceInfo.host,
        originProtocol: refererInfo.originResourceInfo.protocol,
        originHostname: refererInfo.originResourceInfo.hostname,
        originPort: refererInfo.originResourceInfo.port || "",
        playback: recording.playback.run,
        nativeDialogsInfo: JSON.stringify(recording.playback.nativeDialogsInfo),
        nativeDialogsQueue: recording.nativeDialogsQueue
    }), recordingScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.RECORDING, {
        returnUrl: recording.returnUrl,
        jobUid: recording.uid,
        jobOwnerToken: Const.RECORDER_JOB_OWNER_TOKEN,
        cookie: cookie.replace(/'/g, "\\'"),
        originHost: refererInfo.originResourceInfo.host,
        originProtocol: refererInfo.originResourceInfo.protocol,
        originHostname: refererInfo.originResourceInfo.hostname,
        originPort: refererInfo.originResourceInfo.port || "",
        toolbarPosLeft: recording.toolbarPosition.left,
        toolbarPosTop: recording.toolbarPosition.top,
        playback: recording.playback.run,
        nextStep: recording.playback.actionTargetWaiting ? recording.playback.nextStep - 1 : recording.playback.nextStep,
        testSteps: recording.playback.steps,
        failedSteps: JSON.stringify(recording.playback.failedSteps),
        nativeDialogsInfo: JSON.stringify(recording.playback.nativeDialogsInfo),
        nativeDialogsQueue: recording.nativeDialogsQueue,
        iFrameRecordingScript: JSON.stringify(iFrameRecordingScript),
        showSteps: recorder.showSteps,
        linuxPlatform: !WIN_PLATFORM && !MAC_PLATFORM
    });
    recording.playback.actionTargetWaiting = false;
    callback(recordingScript);
};

Recorder.prototype._onIFrameTaskScriptRequest = function(refererInfo, cookie, callback) {
    var recording = this.recordings[refererInfo.jobInfo.uid];
    var recordingScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.IFRAME_RECORDING, {
        jobUid: recording.uid,
        jobOwnerToken: Const.RECORDER_JOB_OWNER_TOKEN,
        cookie: cookie.replace(/'/g, "\\'"),
        originHost: refererInfo.originResourceInfo.host,
        originProtocol: refererInfo.originResourceInfo.protocol,
        originHostname: refererInfo.originResourceInfo.hostname,
        originPort: refererInfo.originResourceInfo.port || "",
        playback: recording.playback.run,
        nativeDialogsInfo: JSON.stringify(recording.playback.nativeDialogsInfo)
    });
    callback(recordingScript);
};

Recorder.prototype._redirectToServerErrorPage = function(proxyCtx, returnUrl, errorMessage) {
    var templateOptions = {
        returnUrl: returnUrl,
        originUrl: proxyCtx.originResourceInfo.url,
        errorMessage: errorMessage ? errorMessage.replace(/'/g, "\\'") : ""
    };
    if (proxyCtx.originRes) templateOptions.errorCode = proxyCtx.originRes.statusCode; else templateOptions.errorCode = errorMessage ? "" : 500;
    var errorPageScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.RECORDING_ERR_PAGE, templateOptions), html = this.hammerhead.getProxyPage(proxyCtx, errorPageScript);
    proxyCtx.res.statusCode = 500;
    proxyCtx.res.setHeader("content-type", "text/html");
    proxyCtx.res.end(html);
};

Recorder.prototype._redirectToAuthenticationPage = function(proxyCtx, recording) {
    var hasErrors = false;
    for (var i = 0; i < recording.stepsInfo.length; i++) {
        if (recording.stepsInfo[i].error) {
            hasErrors = true;
            break;
        }
    }
    var authenticationPageScript = AssetsManager.compileTemplate(AssetsManager.TEMPLATES.RECORDING_AUTHENTICATION_PAGE, {
        jobUid: recording.uid,
        jobOwnerToken: Const.RECORDER_JOB_OWNER_TOKEN,
        credentials: recording.authCredentials ? recording.authCredentials.username + ":" + recording.authCredentials.password : "",
        returnUrl: recording.returnUrl,
        targetUrl: proxyCtx.req.url,
        originUrl: proxyCtx.originResourceInfo.url,
        stepsInfoLength: recording.stepsInfo ? recording.stepsInfo.length : 0,
        hasErrors: hasErrors
    });
    var html = this.hammerhead.getProxyPage(proxyCtx, authenticationPageScript);
    proxyCtx.res.statusCode = 401;
    proxyCtx.res.setHeader("content-type", "text/html");
    proxyCtx.res.end(html);
};

Recorder.prototype.startPlayback = function(recordingUid, callback) {
    var recording = this.recordings[recordingUid];
    for (var i = 0; i < recording.stepsInfo.length; i++) {
        var info = recording.stepsInfo[i];
        info.failed = false;
        delete info.jsErrors;
        if (info.isAssertion) {
            for (var j = 0; j < info.blocks.length; j++) {
                for (var k = 0; k < info.blocks[j].assertions.length; k++) info.blocks[j].assertions[k].failed = false;
            }
        }
    }
    recording.playback.run = true;
    recording.playback.nextStep = 0;
    recording.playback.actionTargetWaiting = false;
    recording.playback.steps = Hammerhead.wrapDomAccessors(FixtureCode.CodeGenerator.getTestStepBodies(beautifyStepsInfo(recording.stepsInfo), true));
    recording.playback.failedSteps = [];
    recording.playback.nativeDialogsInfoTimeStamp = 0;
    recording.playback.nativeDialogsInfo = null;
    recording.nativeDialogsQueue = "[]";
    this.hammerhead.removeCookies({
        ownerToken: Const.RECORDER_JOB_OWNER_TOKEN,
        uid: recordingUid
    });
    var recordingUrl = null;
    try {
        recordingUrl = this.hammerhead.getProxyUrl(recording.fixturePage, recordingUid, Const.RECORDER_JOB_OWNER_TOKEN);
    } catch (err) {
        callback(err);
        return;
    }
    callback(null, recordingUrl);
};

Recorder.prototype.startRecording = function(fixtureUid, returnUrl, callback, restartUid) {
    var recorder = this;
    this.vfs.getSuite(function(suite) {
        var fixture = suite.fixtures[fixtureUid];
        if (!fixture) {
            callback({
                code: ERR.RECORDER_TARGET_FIXTURE_DOESNT_EXISTS
            });
            return;
        }
        var recordingUid = restartUid ? restartUid : ++recordingCounter, recording = restartUid ? recorder.recordings[recordingUid] : null;
        recorder.recordings[recordingUid] = {
            authCredentials: fixture.authCredentials,
            workingDir: fixture.workingDir,
            fixtureFileName: fixture.fileName,
            fixturePath: fixture.path,
            fixturePage: fixture.page,
            returnUrl: returnUrl,
            testSaved: recording ? recording.testSaved : false,
            testName: recording ? recording.testName : null,
            stepsInfo: [],
            uid: recordingUid,
            toolbarPosition: {
                left: recording ? recording.toolbarPosition.left : null,
                top: recording ? recording.toolbarPosition.top : null
            },
            playback: {
                run: false,
                nextStep: 0,
                actionTargetWaiting: false,
                steps: "[]",
                failedSteps: [],
                nativeDialogsInfo: null,
                nativeDialogsInfoTimeStamp: 0,
                failed: false
            },
            showSteps: recorder.showSteps,
            recordingUrl: null,
            wereActionsRecorded: false,
            nativeDialogsQueue: "[]"
        };
        var recordingUrl = null;
        try {
            recordingUrl = recorder.hammerhead.getProxyUrl(fixture.page, recordingUid, Const.RECORDER_JOB_OWNER_TOKEN);
        } catch (err) {
            callback(err);
            return;
        }
        recorder.recordings[recordingUid].recordingUrl = recordingUrl;
        callback(null, recordingUrl);
    });
};

Recorder.prototype.getFixtureUid = function(fixturePath, filename, callback) {
    this.vfs.getSuite(function(suite) {
        Object.keys(suite.fixtures).forEach(function(uid) {
            if (suite.fixtures[uid].fileName === filename && suite.fixtures[uid].path.join("/") === fixturePath.join("/")) callback(uid);
        });
        callback(null);
    });
};

function copyObject(obj) {
    var copyObj = {};
    for (var property in obj) {
        if (obj.hasOwnProperty(property)) {
            if (typeof obj[property] !== "object" || obj[property] instanceof Array) copyObj[property] = obj[property]; else copyObj[property] = copyObject(obj[property]);
        }
    }
    return copyObj;
}

function copyActionArgs(args) {
    var copyArgs = [];
    args.forEach(function(prop) {
        copyArgs.push(copyObject(prop));
    });
    return copyArgs;
}

function beautifyStepsInfo(stepsInfo) {
    var copyStepsInfo = [], copyInfo = null, defaultOptions = {
        ctrl: false,
        alt: false,
        shift: false,
        meta: false,
        replace: false
    };
    stepsInfo.forEach(function(info) {
        copyInfo = {};
        for (var infoProperty in info) {
            if (info.hasOwnProperty(infoProperty)) {
                if (infoProperty === "actionArgs") copyInfo[infoProperty] = copyActionArgs(info[infoProperty]); else copyInfo[infoProperty] = info[infoProperty];
            }
        }
        copyStepsInfo.push(copyInfo);
    });
    copyStepsInfo.forEach(function(info) {
        var options = {}, optionsIndex = -1;
        if (/click|rclick|dblclick|hover/.test(info.action)) optionsIndex = 0; else if (info.action === "drag") optionsIndex = 2; else if (info.action === "type") optionsIndex = 1;
        if (optionsIndex > -1) {
            if (info.actionArgs[optionsIndex]) options = info.actionArgs[optionsIndex].options; else return;
            if (isNaN(parseInt(options.caretPos))) delete options.caretPos;
            if (!info.useOffsets) {
                delete options.offsetX;
                delete options.offsetY;
            } else {
                if (isNaN(parseInt(options.offsetX))) delete options.offsetX;
                if (isNaN(parseInt(options.offsetY))) delete options.offsetY;
            }
            var opt = null;
            for (opt in options) {
                if (options.hasOwnProperty(opt) && options[opt] === defaultOptions[opt]) delete options[opt];
            }
            var haveFields = false;
            for (opt in options) {
                if (options.hasOwnProperty(opt)) haveFields = true;
            }
            if (!haveFields) delete info.actionArgs[optionsIndex];
        }
        if (info.action === "upload") {
            var files = info.actionArgs[0].files;
            if (files) {
                if (!files.length) delete info.actionArgs[0];
                if (files.length === 1) info.actionArgs[0].files = files[0];
            }
        }
    });
    return copyStepsInfo;
}

Recorder.prototype.saveTest = function(recordingUid, testName, callback) {
    var recording = this.recordings[recordingUid], vfs = this.vfs;
    if (!recording) {
        callback({
            err: {
                code: ERR.RECORDER_RECORDING_DOESNT_EXISTS
            }
        });
        return;
    }
    vfs.getRealPath(recording.fixturePath, recording.fixtureFileName, function(fileName) {
        if (!recording.testSaved) {
            if (!recording.stepsInfo.length) {
                callback({
                    err: {
                        code: ERR.RECORDER_RECORDING_IS_EMPTY
                    }
                });
                return;
            }
            if (!/[\S]+/.test(testName)) {
                callback({
                    err: {
                        code: ERR.RECORDER_TEST_NAME_IS_EMPTY
                    }
                });
                return;
            }
        }
        vfs.removeFSWatchers();
        var savingCallback = function(err) {
            recording.testSaved = recording.testSaved || !err;
            if (recording.testSaved) recording.testName = testName;
            vfs.forceBuild(function() {
                callback({
                    err: err,
                    fixtureFileName: recording.fixtureFileName
                });
            });
        };
        if (!recording.testSaved) FixtureCode.CodeGenerator.addTest(fileName, testName, beautifyStepsInfo(recording.stepsInfo), savingCallback); else FixtureCode.CodeGenerator.overwriteTest(fileName, testName, beautifyStepsInfo(recording.stepsInfo), savingCallback);
    });
};

Recorder.prototype.exitRecording = function(recordingUid, callback) {
    var recording = this.recordings[recordingUid];
    if (!recording) {
        callback({
            err: {
                code: ERR.RECORDER_RECORDING_DOESNT_EXISTS
            }
        });
        return;
    }
    var recorder = this;
    this.hammerhead.removeCookies({
        ownerToken: Const.RECORDER_JOB_OWNER_TOKEN,
        uid: recordingUid
    });
    if (recorder.recordings[recordingUid]) delete recorder.recordings[recordingUid];
    callback({
        err: null,
        fixtureFileName: recording.fixtureFileName
    });
};