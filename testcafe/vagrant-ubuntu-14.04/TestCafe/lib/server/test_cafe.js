var EventEmitter = require("events").EventEmitter, ChildProcess = require("child_process"), moment = require("moment"), os = require("os"), util = require("util"), Api = require("./api").Api, AssetsManager = require("./assets_manager"), Config = require("./../config"), ControlPanel = require("./../../control_panel"), ERR = require("./server_errs"), ErrMsgBuilder = require("../err_msg_builder"), Hammerhead = require("./../../hammerhead").Hammerhead, Recorder = require("./recorder").Recorder, TestRunner = require("../test_runner"), UXLog = require("./uxlog"), VirtualFS = require("../vfs");

var GREETING = "DevExpress TestCafe - functional testing for the web.\n" + "Copyright (C) 2012 - %s Developer Express Inc.\n" + "-----------------------------------------------\n", CONTROL_PANEL_URL_INFO_PATTERN = "Control Panel URL - http://%s\n\n", SHUTDOWN_MSG_PATTERN = "%s - Error:\n%s\n";

var TestCafe = module.exports = function(startupCfg, standalone) {
    EventEmitter.call(this);
    this.controlPanel = null;
    this.hammerhead = null;
    this.testRunner = null;
    this.vfs = null;
    this.recorder = null;
    this.errMsgBuilder = ErrMsgBuilder;
    this._init(startupCfg, standalone);
};

util.inherits(TestCafe, Api);

TestCafe.TestCafe = TestCafe;

TestCafe.prototype._fatalError = function(errMsg, standalone) {
    var shutDownMsg = util.format(SHUTDOWN_MSG_PATTERN, moment().format("L LT"), errMsg);
    this.uxlog.addEntry(this.uxlog.FATAL_ERROR_ACTION_KIND, errMsg);
    this.uxlog.sendCollectedData();
    this.close();
    if (standalone) {
        util.error(shutDownMsg);
        setTimeout(function() {
            process.exit(1);
        }, 200);
    } else {
        process.removeAllListeners("uncaughtException");
        throw shutDownMsg;
    }
};

TestCafe.prototype.close = function() {
    if (this.vfs) this.vfs.removeFSWatchers();
    if (this.testRunner && this.testRunner.workerPool) this.testRunner.workerPool.removeAllWorkers();
    if (this.hammerhead) {
        try {
            this.hammerhead.close();
        } catch (err) {}
    }
    if (this.controlPanel) {
        try {
            this.controlPanel.close();
        } catch (err) {}
    }
    if (this.uxlog) this.uxlog.shutDown();
};

TestCafe.prototype._init = function(startupCfg, standalone) {
    var testCafe = this;
    if (standalone) util.print(util.format(GREETING, new Date().getFullYear())); else if (!startupCfg) this._fatalError(ErrMsgBuilder.build({
        code: ERR.TESTCAFE_CONFIG_NOT_SPECIFIED
    }), standalone);
    testCafe.config = new Config();
    testCafe.config.initConfig(startupCfg, function(err) {
        testCafe.uxlog = new UXLog(testCafe.config);
        if (err) {
            var messages = ErrMsgBuilder.build(util.isArray(err) ? err : [ err ]);
            testCafe._fatalError(messages.join("\n"), standalone);
        }
        var hammerheadOptions = {
            staticResources: AssetsManager.getStaticResources()
        };
        testCafe.hammerhead = new Hammerhead(testCafe.config.servicePort, testCafe.config.servicePort2, testCafe.config.hostname, hammerheadOptions);
        testCafe.hammerhead.proxyEvents.broadcast.listen("fatalError", function(err) {
            testCafe._fatalError(testCafe.errMsgBuilder.build(err), standalone);
        });
        try {
            testCafe.vfs = new VirtualFS(testCafe.config.testsDir);
        } catch (vfsInitErr) {
            testCafe._fatalError(ErrMsgBuilder.build(vfsInitErr), standalone);
        }
        testCafe.testRunner = new TestRunner(testCafe.hammerhead, testCafe.config);
        testCafe.recorder = new Recorder(testCafe.hammerhead, testCafe.vfs, testCafe.uxlog, testCafe.config.recorder.showSteps, function(show) {
            var changingOptions = {
                recorder: {
                    showSteps: show
                }
            };
            testCafe.config.updateConfig(changingOptions, function() {});
        });
        Api.call(testCafe, testCafe.testRunner, testCafe.vfs, testCafe.config, standalone);
        testCafe.controlPanel = new ControlPanel.Server(testCafe);
        testCafe.controlPanel.on("fatalError", function(err) {
            testCafe._fatalError(ErrMsgBuilder.build(err), standalone);
        });
        testCafe.hammerhead.start();
        testCafe.controlPanel.start();
        if (standalone) {
            var controlPanelHost = testCafe.config.hostname === "127.0.0.1" ? "localhost:" + testCafe.config.controlPanelPort : testCafe.config.controlPanelHost;
            util.print(util.format(CONTROL_PANEL_URL_INFO_PATTERN, controlPanelHost));
            var controlPanelUrl = "";
            testCafe.config.readCfgFile(function(cfg, err) {
                if (!err && cfg && (cfg.controlPanelPort && cfg.controlPanelPort !== testCafe.config.controlPanelPort || cfg.servicePort && cfg.servicePort !== testCafe.config.servicePort || cfg.servicePort2 && cfg.servicePort2 !== testCafe.config.servicePort2)) controlPanelUrl = "http://" + (controlPanelHost + ControlPanel.Const.OPTIONS_ROUTE).replace(/"/, '\\"'); else controlPanelUrl = "http://" + controlPanelHost.replace(/"/, '\\"');
                testCafe._openControlPanel(controlPanelUrl);
            });
        }
        process.removeAllListeners("uncaughtException");
        process.on("uncaughtException", function(err) {
            var msg = err.msg || err.code || err.message || err, stack = err.stack || "";
            testCafe._fatalError(msg + "\n" + stack, standalone);
        });
    });
};

TestCafe.prototype._openControlPanel = function(controlPanelUrl) {
    var platform = os.platform();
    if (platform.match(/^win/)) {
        var spawnedProcess = ChildProcess.spawn("explorer.exe", [ controlPanelUrl ]);
        spawnedProcess.on("error", function() {
            ChildProcess.exec('start "" "' + controlPanelUrl + '"');
        });
    } else if (platform === "darwin") ChildProcess.exec("open " + controlPanelUrl); else ChildProcess.exec("xdg-open " + controlPanelUrl);
};