var async = require("async"), EventEmitter = require("events").EventEmitter, childProc = require("child_process"), path = require("path"), url = require("url"), util = require("util"), userAgentParser = require("useragent"), uuid = require("node-uuid"), ERR = require("./../server/server_errs");

var WIN_PLATFORM = /^win/.test(process.platform), MAC_PLATFORM = process.platform === "darwin", ADD_WORKER_URL_PATHNAME_PATTERN = "/worker/add/%s/", WORKER_IDLE_URL_PATHNAME_PATTERN = "/worker/idle/%s/", CREATE_WORKER_ON_LOCAL_BROWSER_TIMEOUT = 30 * 1e3;

function sanitizeWorkerName(name) {
    return name ? name.replace(/(\r\n|\n|\r)/gm, "").replace(/^\s+/, "").replace(/\s+$/, "") : null;
}

var WorkerPool = module.exports = function(config) {
    EventEmitter.call(this);
    this.config = config;
    this.workerAddedHandlers = {};
    this.workers = {};
};

util.inherits(WorkerPool, EventEmitter);

WorkerPool.WORKER_HEARTBEAT_TIMEOUT = 2 * 60 * 1e3;

WorkerPool.WORKER_RESTART_TIMEOUT = 10 * 1e3;

var WORKER_TYPE = WorkerPool.WORKER_TYPE = {
    CONNECTED: "CONNECTED",
    CONTROL_PANEL_WINDOW: "CONTROL_PANEL_WINDOW",
    NEW_BROWSER_WINDOW: "NEW_BROWSER_WINDOW"
};

WorkerPool.prototype._forEachWorker = function(func) {
    var workerPool = this;
    Object.keys(this.workers).forEach(function(workerName) {
        func(workerName, workerPool.get(workerName));
    });
};

WorkerPool.prototype.get = function(workerName) {
    return this.workers[workerName] || null;
};

WorkerPool.prototype.listConnectedWorkers = function() {
    var names = [];
    this._forEachWorker(function(workerName, worker) {
        if (worker.type === WORKER_TYPE.CONNECTED) names.push(workerName);
    });
    return names;
};

WorkerPool.prototype.getWorkersInfo = function() {
    var workersInfo = [], workers = this.workers;
    for (var workerName in workers) {
        if (workers.hasOwnProperty(workerName)) {
            var currentWorker = workers[workerName], worker = {
                workerName: workerName,
                workerType: currentWorker.type,
                userAgent: currentWorker.userAgent,
                browserVersion: currentWorker.browserVersion,
                taskReport: currentWorker.taskReport,
                currentTest: currentWorker.currentTest,
                connected: currentWorker.connected
            };
            workersInfo.push(worker);
        }
    }
    workersInfo.reverse();
    return workersInfo;
};

WorkerPool.prototype._disconnectWorker = function(workerName) {
    var workerPool = this, worker = this.workers[workerName], testRunUid = worker.testRuns[0];
    if (this.config.initedFromObj && worker.type === WORKER_TYPE.NEW_BROWSER_WINDOW && (!worker.restartInfo[testRunUid] || worker.restartInfo[testRunUid] < 3)) {
        var uid = uuid.v4();
        worker.uid = uid;
        this.emit("workerRestart", workerName, uid);
        worker.restartInfo[testRunUid] = worker.restartInfo[testRunUid] ? worker.restartInfo[testRunUid] + 1 : 1;
        worker.browserProc.kill();
        setTimeout(function() {
            workerPool.execBrowsersAndCreateWorkers([ worker.browserName ], function() {}, true);
        }, WorkerPool.WORKER_RESTART_TIMEOUT);
    } else {
        this.emit("workerDisconnected", workerName);
        this.emit("workerDisconnectedError", {
            code: ERR.WORKER_POOL_WORKER_DISCONNECTED,
            name: workerName
        }, this.get(workerName));
        delete this.workers[workerName];
    }
};

WorkerPool.prototype._watchWorkerHeartbeat = function(workerName, expectedInactivityDuration) {
    var worker = this.get(workerName), workerPool = this;
    worker.heartbeatTimeout = setTimeout(function() {
        if (worker.type === WORKER_TYPE.NEW_BROWSER_WINDOW && !worker.currentTest && worker.testRuns.length) {
            var idleUrl = workerPool.getWorkerIdleUrl(workerName), browser = workerPool.config.browsers[worker.browserName], execParams = workerPool._getBrowserExecParams(browser, idleUrl);
            worker.browserProc.kill();
            worker.browserProc = childProc.execFile(execParams.path, execParams.cmdArr, function(execError) {
                if (execError && execError.code === 127) workerPool._disconnectWorker(workerName); else workerPool._watchWorkerHeartbeat(workerName);
            });
        } else workerPool._disconnectWorker(workerName);
    }, expectedInactivityDuration || WorkerPool.WORKER_HEARTBEAT_TIMEOUT);
};

WorkerPool.prototype.workerHeartbeat = function(workerName, expectedInactivityDuration) {
    var worker = this.get(workerName);
    if (worker) {
        clearTimeout(worker.heartbeatTimeout);
        this._watchWorkerHeartbeat(workerName, expectedInactivityDuration);
    }
};

WorkerPool.prototype._getAddWorkerUrl = function(workerName) {
    return url.format({
        host: this.config.controlPanelHost,
        pathname: util.format(ADD_WORKER_URL_PATHNAME_PATTERN, encodeURIComponent(workerName)),
        protocol: "http",
        query: {
            auto_created: "1",
            type: WORKER_TYPE.NEW_BROWSER_WINDOW
        }
    });
};

WorkerPool.prototype.getRestartTestRunUrl = function(workerName) {
    return url.format({
        host: this.config.controlPanelHost,
        pathname: util.format(WORKER_IDLE_URL_PATHNAME_PATTERN, workerName),
        protocol: "http",
        query: {
            restartTestRun: 1
        }
    });
};

WorkerPool.prototype.getWorkerIdleUrl = function(workerName) {
    return url.format({
        host: this.config.controlPanelHost,
        pathname: util.format(WORKER_IDLE_URL_PATHNAME_PATTERN, workerName),
        protocol: "http"
    });
};

WorkerPool.prototype.redirectToWorkerIdle = function(proxyCtx, workerName) {
    proxyCtx.res.writeHead(302, {
        location: this.getWorkerIdleUrl(workerName)
    });
    proxyCtx.res.end();
};

WorkerPool.prototype.createWorkerFromControlPanelWindow = function(controlPanelUrl, userAgent) {
    var workerName = this.getWorkerNameFromUserAgent(userAgent);
    this._addWorker(workerName, WORKER_TYPE.CONTROL_PANEL_WINDOW, controlPanelUrl, userAgent);
    return workerName;
};

WorkerPool.prototype.createWorkerInNewBrowserWindow = function(name, userAgent) {
    return this._addWorker(name, WORKER_TYPE.NEW_BROWSER_WINDOW, null, userAgent);
};

WorkerPool.prototype.connectWorker = function(name, userAgent) {
    return this._addWorker(name, WORKER_TYPE.CONNECTED, null, userAgent);
};

WorkerPool.prototype._addWorker = function(workerName, type, returnUrl, userAgent) {
    var sanitizedName = sanitizeWorkerName(workerName);
    if (!sanitizedName) throw {
        code: ERR.WORKER_POOL_WORKER_NAME_IS_EMPTY
    };
    if (this.get(sanitizedName)) {
        throw {
            code: ERR.WORKER_POOL_WORKER_NAME_IS_ALREADY_USED,
            name: sanitizedName
        };
    }
    var worker = this.workers[sanitizedName] = {
        uid: uuid.v4(),
        heartbeatTimeout: null,
        type: type,
        utilized: false,
        returnUrl: returnUrl,
        browserProc: null,
        browserName: null,
        userAgent: userAgent,
        browserVersion: this._getBrowserVersion(userAgent),
        taskReport: null,
        currentTest: null,
        testRuns: [],
        lastTask: null,
        restartInfo: {},
        connected: type === WORKER_TYPE.CONNECTED
    };
    this._watchWorkerHeartbeat(sanitizedName);
    if (this.workerAddedHandlers[sanitizedName]) this.workerAddedHandlers[sanitizedName](worker);
    this.emit("workerAdded", sanitizedName);
    return sanitizedName;
};

WorkerPool.prototype.removeAllWorkers = function() {
    this._forEachWorker(function(workerName, worker) {
        clearTimeout(worker.heartbeatTimeout);
    });
};

WorkerPool.prototype.onWorkerTaskComplete = function(worker, taskUid) {
    worker.lastTask = taskUid;
    worker.taskReport = null;
    if (worker.type !== WORKER_TYPE.CONNECTED) worker.utilized = true;
};

WorkerPool.prototype.forceBrowserWindowClose = function(targetWindowMark) {
    if (WIN_PLATFORM) {
        var closeWindowExePath = path.join(__dirname, "./close_window.exe");
        childProc.execFile(closeWindowExePath, [ targetWindowMark ]);
    }
};

WorkerPool.prototype.getWorkerStatus = function(workerName, nextTestRunUrl) {
    var worker = this.get(workerName);
    if (worker.utilized) {
        clearTimeout(worker.heartbeatTimeout);
        delete this.workers[workerName];
        if (worker.type === WORKER_TYPE.NEW_BROWSER_WINDOW && worker.browserProc) {
            if (!WIN_PLATFORM) worker.browserProc.kill();
            return {
                status: "utilized",
                targetWindowMark: "ForceBrowserWindowCloseTargetMark[" + uuid.v4() + "]"
            };
        }
        return {
            status: "utilized",
            returnUrl: worker.returnUrl,
            lastTask: worker.lastTask
        };
    }
    this.workerHeartbeat(workerName);
    if (nextTestRunUrl) return {
        status: "run",
        testRunUrl: nextTestRunUrl
    }; else return {
        status: "idle"
    };
};

WorkerPool.prototype._getBrowserExecParams = function(browser, startupUrl) {
    var cmdArr = browser.cmd ? browser.cmd.split(" ") : [];
    if (MAC_PLATFORM) {
        return {
            cmdArr: [ "-a", browser.path, startupUrl, "--args" ].concat(cmdArr),
            path: "open"
        };
    }
    if (browser.path === "start microsoft-edge:") return {
        cmdArr: [],
        path: browser.path + '"' + startupUrl + '"'
    }; else return {
        cmdArr: cmdArr.concat(startupUrl),
        path: browser.path
    };
};

WorkerPool.prototype.execBrowsersAndCreateWorkers = function(browserNames, callback, restartFlag) {
    var errs = [], starters = [], workerNames = [], workerPool = this;
    browserNames.forEach(function(browserName) {
        starters.push(function(asyncCallback) {
            var workerName = restartFlag ? browserName : workerPool._getUnusedWorkerName(browserName), browser = workerPool.config.browsers[browserName], addWorkerUrl = workerPool._getAddWorkerUrl(workerName), workerIdleUrl = workerPool.getWorkerIdleUrl(workerName), workerUrl = restartFlag ? workerIdleUrl : addWorkerUrl, execParams = workerPool._getBrowserExecParams(browser, workerUrl), added = false, addTimeout = null;
            workerPool.workerAddedHandlers[workerName] = function(worker) {
                clearTimeout(addTimeout);
                added = true;
                workerNames.push(workerName);
                worker.browserProc = browserProc;
                worker.browserName = browserName;
                done();
            };
            var done = function() {
                delete workerPool.workerAddedHandlers[workerName];
                asyncCallback();
            };
            var exec = null;
            if (execParams.path.indexOf("start microsoft-edge:") === 0) exec = childProc.exec.bind(childProc, execParams.path); else exec = childProc.execFile.bind(childProc, execParams.path, execParams.cmdArr);
            var browserProc = exec(function(execError) {
                if (execError && execError.code === 127) {
                    errs.push({
                        code: ERR.WORKER_POOL_FAILED_TO_START_BROWSER,
                        browserName: browserName,
                        path: browser.path
                    });
                    done();
                } else if (!added) {
                    addTimeout = setTimeout(function() {
                        errs.push({
                            code: ERR.WORKER_POOL_FAILED_TO_CREATE_WORKER_IN_BROWSER_WINDOW,
                            browserName: browserName
                        });
                        done();
                    }, CREATE_WORKER_ON_LOCAL_BROWSER_TIMEOUT);
                }
            });
        });
    });
    async.parallel(starters, function() {
        callback(errs.length ? errs : null, workerNames);
    });
};

WorkerPool.prototype.getWorkerNameFromUserAgent = function(userAgent) {
    var agentFamily = userAgentParser.parse(userAgent).family, workerName = agentFamily.replace(/chrome/i, "Google Chrome").replace(/firefox/i, "Mozilla Firefox").replace(/safari/i, "Apple Safari").replace(/android/i, "Google Android").replace(/ie/i, "Internet Explorer").replace(/edge/i, "Microsoft Edge");
    if (agentFamily === "Other" && /Trident\/7.0/i.test(userAgent)) workerName = "Internet Explorer";
    return this._getUnusedWorkerName(workerName);
};

WorkerPool.prototype._getUnusedWorkerName = function(name) {
    if (!this.workers[name]) return name;
    for (var i = 2; ;i++) {
        var workerName = name + " " + i;
        if (!this.workers[workerName]) return workerName;
    }
};

WorkerPool.prototype._getBrowserVersion = function(userAgent) {
    var browserInfo = userAgentParser.parse(userAgent);
    if (browserInfo.family === "Other" && /Trident\/7.0/i.test(userAgent)) {
        browserInfo.major = 11;
        browserInfo.minor = 0;
        browserInfo.patch = 0;
    }
    return [ browserInfo.major, browserInfo.minor, browserInfo.patch ].join(".");
};