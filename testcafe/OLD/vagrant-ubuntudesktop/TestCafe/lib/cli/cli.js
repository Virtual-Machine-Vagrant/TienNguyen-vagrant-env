var Config = require("./../config"), ERR = require("./../server/server_errs"), errMsgBuilder = require("./../err_msg_builder"), help = require("./help"), TestCafe = require("./../server/test_cafe"), async = require("async"), execFile = require("child_process").execFile, fs = require("fs"), stream = require("stream"), util = require("util");

var NODE_JS_APP_PATTERN = /\.js$/, CONFIG_OUTPUT_TEXT = "TestCafe config:\n	hostname=%s\n	servicePort=%s\n	testsDir=%s\n";

function isCommandKey(key) {
    return key && key[0] === "/";
}

var Cli = module.exports = function() {
    this.queue = [];
    this.cmd = process.argv.slice(2);
    this.logPath = null;
    this.envSetupAction = null;
    this.timeout = 0;
    this.cfg = null;
};

Cli.prototype.execute = function() {
    this._buildTasks();
    this._runTasks();
};

Cli.prototype._logSync = function(str) {
    var data = new Buffer(str + "\n");
    if (stream.fd) fs.writeSync(stream.fd, data, 0, data.length, stream.pos); else util.print(str);
    if (this.logPath) fs.appendFileSync(this.logPath, str);
};

Cli.prototype._fatalError = function(err) {
    var messages = errMsgBuilder.build(util.isArray(err) ? err : [ err ]);
    messages = messages.join("\n");
    if (this.logPath) fs.appendFileSync(this.logPath, messages);
    util.error(messages);
    process.exit(1);
};

Cli.prototype._getNextCommand = function() {
    var command = {
        type: this.cmd[0],
        params: {}
    };
    if (!this.cmd.length) return false;
    if (!isCommandKey(this.cmd[0])) return command;
    this.cmd.shift();
    while (this.cmd[0] && !isCommandKey(this.cmd[0])) {
        var paramArr = this.cmd.shift().split("="), paramKey = paramArr[0];
        if (paramArr[1] === "false" || paramArr[1] === "true") paramArr[1] = Boolean(paramArr[1]);
        if (typeof paramArr[1] === "string") paramArr[1] = paramArr[1].replace(/^"|^'|"$|'$/g, "");
        command.params[paramKey] = paramArr.length === 2 ? paramArr[1] : "";
    }
    return command;
};

Cli.prototype._buildTasks = function() {
    var command = "";
    while (command = this._getNextCommand()) {
        switch (command.type) {
          case "/runTests":
          case "/r":
            this.queue.push({
                handle: this._getRunTask,
                params: command.params,
                priority: 100
            });
            break;

          case "/browser":
          case "/a":
            this.queue.push({
                handle: this._addBrowserTask,
                params: command.params,
                priority: 10
            });
            break;

          case "/browsers":
          case "/b":
            this.queue.push({
                handle: this._listBrowsersTask,
                param: "",
                priority: 50
            });
            break;

          case "/config":
          case "/c":
            this.queue.push({
                handle: this._configTask,
                params: command.params,
                priority: 10
            });
            break;

          case "/l":
          case "/log":
            this.logPath = command.params.path;
            break;

          case "/help":
          case "/h":
          case "/?":
            this.queue.push({
                handle: this._helpTask,
                params: command.params,
                priority: 1
            });
            break;

          case "/envSetup":
          case "/e":
            this.envSetupAction = this._buildEnvSetupTask(command.params);
            break;

          case "/timeout":
          case "/t":
            this.timeout = command.params.time && parseInt(command.params.time);
            if (this.timeout < 1) this._fatalError({
                code: ERR.CLI_TIMEOUT_VALUE_NOT_VALID
            });
            break;

          default:
            this._fatalError({
                code: ERR.CLI_UNKNOWN_OPTION,
                option: command.type
            });
        }
    }
};

Cli.prototype._runTasks = function() {
    var cli = this;
    this.queue.sort(function(param1, param2) {
        if (param1.priority > param2.priority) return 1; else if (param1.priority < param2.priority) return -1; else return 0;
    });
    cli._buildConfig(function() {
        async.forEachSeries(cli.queue, function(task, taskCallback) {
            task.handle.call(cli, task.params, taskCallback);
        }, function() {
            process.exit(0);
        });
    });
};

Cli.prototype._buildConfig = function(callback) {
    var config = new Config(), cli = this;
    config.initConfig(null, function(err) {
        if (err) cli._fatalError(err);
        cli.cfg = {
            hostname: config.hostname,
            controlPanelPort: config.controlPanelPort,
            servicePort: config.servicePort,
            testsDir: config.testsDir,
            browsers: config.browsers
        };
        callback();
    });
};

Cli.prototype._getRunTask = function(runParams, callback) {
    var cli = this;
    if (cli.timeout) setTimeout(function() {
        cli._fatalError({
            code: ERR.CLI_TIMEOUT_EXCEED,
            time: cli.timeout
        });
    }, cli.timeout);
    async.series({
        envSetup: function(done) {
            if (cli.envSetupAction) cli.envSetupAction(done); else done();
        },
        runTests: function(done) {
            cli._buildConfig(function(startupCfg) {
                var testCafe = new TestCafe(startupCfg, null);
                function handleWorkerParam(param, allValuesHandler) {
                    if (param === "*") return allValuesHandler(); else if (param) return param.split(",");
                }
                runParams.browsers = handleWorkerParam(runParams.browsers, testCafe.listAvailableBrowsers);
                runParams.workers = handleWorkerParam(runParams.workers, testCafe.listConnectedWorkers);
                testCafe.runTests(runParams, function(err) {
                    if (err) throw new Error(JSON.stringify(err));
                    testCafe.on("taskComplete", function(report) {
                        if (!runParams.reportPath) cli._logSync(typeof report === "string" ? report : JSON.stringify(report, null, 4));
                        done();
                    });
                });
            });
        }
    }, function() {
        clearTimeout(cli.timeout);
        callback();
    });
};

Cli.prototype._addBrowserTask = function(browser, callback) {
    if (browser.name && browser.path) {
        this.cfg.browsers[browser.name] = {
            cmd: browser.cmd || "",
            icon: browser.icon || "",
            path: browser.path
        };
        callback();
    } else {
        this._fatalError({
            code: ERR.CLI_BROWSER_PARAM_NOT_VALID
        });
        callback();
    }
};

Cli.prototype._configTask = function(serverConfig, callback) {
    var cli = this;
    function updateConfig(cfg) {
        cli.cfg = {
            hostname: cfg.hostname ? cfg.hostname : cli.cfg.hostname,
            controlPanelPort: cfg.controlPanelPort ? cfg.controlPanelPort : cli.cfg.controlPanelPort,
            servicePort: cfg.servicePort ? cfg.servicePort : cli.cfg.servicePort,
            testsDir: cfg.testsDir ? cfg.testsDir : cli.cfg.testsDir,
            browsers: cfg.browsers ? cfg.browsers : cli.cfg.browsers
        };
    }
    if (Object.keys(serverConfig).length) {
        if (serverConfig.path) fs.readFile(serverConfig.path, "UTF8", function(err, data) {
            if (err) cli._fatalError({
                code: ERR.CLI_CONFIG_FILE_NOT_EXISTS,
                filename: serverConfig.path
            }); else {
                try {
                    updateConfig(JSON.parse(data));
                } catch (e) {
                    cli._fatalError({
                        code: ERR.CLI_CONFIG_NOT_VALID,
                        filename: serverConfig.path
                    });
                }
            }
            callback();
        }); else {
            updateConfig(serverConfig);
            callback();
        }
    } else {
        var configData = util.format(CONFIG_OUTPUT_TEXT, cli.cfg.hostname, cli.cfg.servicePort, cli.cfg.testsDir);
        cli._logSync(configData);
        callback();
    }
};

Cli.prototype._listBrowsersTask = function(param, callback) {
    var browsers = "Browsers:";
    Object.keys(this.cfg.browsers).forEach(function(browserName) {
        browsers += "\n" + browserName;
    });
    this._logSync(browsers);
    callback();
};

Cli.prototype._helpTask = function(param, callback) {
    var cli = this, params = Object.keys(param), option = params.length ? params[0] : "";
    help.getHelp(option, function(helpContent) {
        if (helpContent) {
            cli._logSync(helpContent);
            callback(helpContent);
        } else {
            cli._fatalError({
                code: ERR.CLI_HELP_UNKNOWN_OPTION,
                option: option
            });
            callback();
        }
    });
};

Cli.prototype._buildEnvSetupTask = function(param) {
    var cli = this;
    if (!param.path) cli._fatalError({
        code: ERR.CLI_SETUP_ENV_PATH_NOT_DEFINED
    });
    return function(callback) {
        var executeTarget = param.path, cfg = null;
        if (NODE_JS_APP_PATTERN.test(executeTarget)) {
            if (require(executeTarget) && typeof require(executeTarget).setupExec === "function") require(executeTarget).setupExec(cfg, callback); else cli._fatalError({
                code: ERR.CLI_SETUP_EXEC_NOT_EXISTS,
                target: executeTarget
            });
        } else execFile(executeTarget, function(err) {
            if (!err) callback(); else cli._fatalError(err);
        });
    };
};