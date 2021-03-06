var ERR = require("./../server/server_errs"), async = require("async"), child_process = require("child_process"), fs = require("fs"), fsUtil = require("../fs_util"), os = require("os"), dns = require("dns"), path = require("path"), http = require("http"), uuid = require("node-uuid"), InstalledBrowsers = require("./installed_browsers"), TCPPorts = require("./tcp_ports"), Validator = require("./validator");

var CFG_FILE_NAME = "testcafe_config.json", PACKAGE_JSON_FILE_NAME = "package.json", DEFAULT_REPORTS_DIR_NAME = "reports", DEFAULT_CONTROL_PANEL_PORT = 1337, DEFAULT_SERVICE_PORT1 = 1338, DEFAULT_SERVICE_PORT2 = 5555, CHECKING_HOST_PORT = 1400, CHECKING_REQUEST_TIMEOUT = 3e3, WIN_PLATFORM = /^win/.test(process.platform), WIN64_PLATFORM = WIN_PLATFORM && process.arch === "x64", MAC_PLATFORM = process.platform === "darwin", WIN_USER_DIR = WIN_PLATFORM ? path.join(process.env["USERPROFILE"], "Documents", "TestCafe") : "", MAC_USER_DIR = MAC_PLATFORM ? "/Library/Application Support/TestCafe/" + process.env["USER"] : "", WIN_DEFAULT_TESTS_DIR = WIN_PLATFORM ? path.join(WIN_USER_DIR, "Tests") : "", MAC_DEFAULT_TESTS_DIR = MAC_PLATFORM ? path.join(MAC_USER_DIR, "my_tests") : "", EXAMPLES_DIR = path.join(__dirname, "../../examples"), INSTALL_DATE_REG_KEY = "HKEY_CLASSES_ROOT\\Licenses\\6F0F8269-1516-44C6-BD30-0E90BE27871C", LICENSE_DATE_REG_KEY = "HKEY_CLASSES_ROOT\\Licenses\\0378852D-D597-4A32-B6D9-680A16A3CDA6", TRIAL_SEND_INFO_REG_KEY = WIN64_PLATFORM ? "HKEY_LOCAL_MACHINE\\SOFTWARE\\Wow6432Node\\DevExpress" : "HKEY_LOCAL_MACHINE\\SOFTWARE\\DevExpress", USER_ID_REG_KEY = "HKEY_CLASSES_ROOT\\Licenses\\5FCB5B35-D11E-4374-AD58-19A608D8228C", DEFAULT_RECORDER_CONFIG = {
    showSteps: true
};

function getDefaultRecorderConfig() {
    var res = {};
    for (var prop in DEFAULT_RECORDER_CONFIG) {
        if (DEFAULT_RECORDER_CONFIG.hasOwnProperty(prop)) res[prop] = DEFAULT_RECORDER_CONFIG[prop];
    }
    return res;
}

var Config = module.exports = function() {
    this.initedFromObj = false;
    this.hostname = "";
    this.controlPanelHost = "";
    this.controlPanelPort = 0;
    this.servicePort = 0;
    this.servicePort2 = 0;
    this.testsDir = "";
    this.browsers = null;
    this.recorder = getDefaultRecorderConfig();
    this.reportsPath = "";
};

Config.TESTCAFE_DIR = path.join(__dirname, "../../");

Config.REPORT_FILENAME = "report.json";

Config.USER_DIR = WIN_USER_DIR || MAC_USER_DIR || Config.TESTCAFE_DIR;

Config.CFG_FILE_PATH = path.join(Config.USER_DIR, CFG_FILE_NAME);

Config.PACKAGE_JSON_FILE_PATH = path.join(Config.TESTCAFE_DIR, PACKAGE_JSON_FILE_NAME);

Config.VERSION_PATTERN = /^[0-9]+\.[0-9]+\.[0-9]+$/;

Config.HOSTNAME_PATTERN = /^[a-zA-Z0-9\-\.]+$/;

Config.CHECK_NEW_VERSION_REQUEST_CONFIG = {
    hostname: "testcafe.devexpress.com",
    port: 80,
    path: "/version.json",
    method: "GET"
};

Config.prototype.initConfig = function(startupCfg, callback) {
    if (startupCfg) this._initFromObj(startupCfg, callback); else this._initFromFile(callback);
};

Config.prototype._initFromObj = function(cfgObj, callback) {
    this.initedFromObj = true;
    var errs = Validator.validate(cfgObj, true);
    this.hostname = this._getHostname(cfgObj.hostname);
    this.servicePort = cfgObj.servicePort;
    this.servicePort2 = cfgObj.servicePort2 || DEFAULT_SERVICE_PORT2;
    this.controlPanelPort = cfgObj.controlPanelPort;
    this.testsDir = cfgObj.testsDir;
    this.reportsPath = cfgObj.reportsPath || this._getReportsPath();
    this.browsers = cfgObj.browsers;
    this.controlPanelHost = [ this.hostname, ":", this.controlPanelPort ].join("");
    this.recorder = cfgObj.recorder || getDefaultRecorderConfig();
    callback(errs.length ? errs : null);
};

Config.prototype._initFromFile = function(callback) {
    var config = this;
    this.readCfgFile(function(readedCfg, readErr) {
        config._prepareUserCfg(readedCfg || {}, function(validCfg, validErrs) {
            config.controlPanelPort = validCfg.controlPanelPort;
            config.servicePort = validCfg.servicePort;
            config.servicePort2 = validCfg.servicePort2;
            config.testsDir = validCfg.testsDir;
            config.reportsPath = validCfg.reportsPath;
            config.hostname = validCfg.hostname;
            config.browsers = validCfg.browsers;
            config.recorder = validCfg.recorder || getDefaultRecorderConfig();
            config._getConfig(function() {
                var readed = !!readedCfg;
                callback(readed ? readErr || validErrs : null);
            });
        });
    });
};

Config.prototype.setTestsDir = function(testsDir, callback) {
    var configReadErr = {
        code: ERR.CONFIG_READ_FILE_FAILED
    }, configWriteErr = {
        code: ERR.CONFIG_SAVING_FAILED
    };
    if (!this.initedFromObj) {
        var fileCfg = null;
        if (!fs.existsSync(Config.CFG_FILE_PATH)) fs.writeFileSync(Config.CFG_FILE_PATH, "{}");
        try {
            fileCfg = JSON.parse(fs.readFileSync(Config.CFG_FILE_PATH).toString());
        } catch (err) {
            callback(err && configReadErr);
            return;
        }
        if (testsDir) fileCfg.testsDir = this.testsDir = testsDir; else delete fileCfg.testsDir;
        fs.writeFile(Config.CFG_FILE_PATH, JSON.stringify(fileCfg, null, 5), function(err) {
            callback(err && configWriteErr);
        });
    } else {
        this.testsDir = testsDir;
        callback();
    }
};

Config.prototype.validateBrowsers = function(browsers, callback) {
    var result = {}, browserNames = Object.keys(browsers);
    async.forEachSeries(browserNames, function(browserName, done) {
        var browser = browsers[browserName], path = browsers[browserName].path;
        fs.stat(path, function(err, stat) {
            result[browserName] = {
                path: path,
                cmd: browser.cmd,
                icon: browser.icon
            };
            result[browserName].pathExists = WIN_PLATFORM && path.indexOf("start microsoft-edge:") === 0 || !err && (MAC_PLATFORM || stat.isFile());
            done();
        });
    }, function() {
        callback(result);
    });
};

Config.prototype.checkUpdates = function(callback) {
    var newVersion = "", config = this;
    this.getCurrentVersion(function(curVersion) {
        config._getActualVersion(function(version) {
            if (Config.VERSION_PATTERN.test(curVersion) && Config.VERSION_PATTERN.test(version)) {
                var curVersionArr = curVersion.split(".").map(function(number) {
                    return parseInt(number, 10);
                }), actualVersionArr = version.split(".").map(function(number) {
                    return parseInt(number, 10);
                });
                if (curVersionArr[0] < actualVersionArr[0] || curVersionArr[0] === actualVersionArr[0] && (curVersionArr[1] < actualVersionArr[1] || curVersionArr[1] === actualVersionArr[1] && curVersionArr[2].toString() < actualVersionArr[2].toString())) {
                    newVersion = version;
                }
            }
            callback(curVersion, newVersion);
        });
    });
};

Config.prototype.setReportsPath = function(reportsPath, callback) {
    var config = this;
    fs.exists(reportsPath, function(exists) {
        if (exists) {
            config.reportsPath = reportsPath;
            callback();
        } else callback({
            code: ERR.CONFIG_DIR_DOESNT_EXIST,
            dirPath: reportsPath
        });
    });
};

Config.prototype.updateConfig = function(configOptions, callback) {
    var config = this;
    var writeToConfig = function(cfg) {
        Object.keys(cfg).forEach(function(key) {
            if (!cfg[key]) delete cfg[key];
        });
        fs.writeFile(Config.CFG_FILE_PATH, JSON.stringify(cfg, false, 5), function(err) {
            callback(err ? {
                code: ERR.CONFIG_SAVING_FAILED
            } : null);
        });
    };
    fs.exists(Config.CFG_FILE_PATH, function(exists) {
        if (exists) {
            config.readCfgFile(function(cfg, err) {
                if (!err) {
                    Object.keys(configOptions).forEach(function(key) {
                        cfg[key] = configOptions[key];
                    });
                    writeToConfig(cfg);
                } else writeToConfig(configOptions);
            });
        } else writeToConfig(configOptions);
    });
};

Config.prototype.readCfgFile = function(callback) {
    var cfgData = null, cfg = null;
    if (!fs.existsSync(Config.CFG_FILE_PATH)) {
        callback(null);
        return;
    }
    try {
        cfgData = fs.readFileSync(Config.CFG_FILE_PATH).toString();
    } catch (err) {
        callback(null, err);
        return;
    }
    try {
        cfg = JSON.parse(cfgData);
    } catch (parserErr) {
        callback(null, {
            code: ERR.CONFIG_PARSING_FAILED,
            parserErr: parserErr
        });
        return;
    }
    callback(cfg);
};

Config.prototype.isPortFree = function(port, callback) {
    TCPPorts.isPortFree(port, callback);
};

Config.prototype.addInstalledBrowsers = function(callback) {
    var config = this;
    config._getBrowsers(function(browsers) {
        if (browsers && Object.keys(browsers).length) {
            config.updateConfig({
                browsers: browsers
            }, function() {
                callback(browsers);
            });
            config.browsers = browsers;
        } else callback(null);
    });
};

Config.prototype.getCurrentVersion = function(callback) {
    fs.readFile(Config.PACKAGE_JSON_FILE_PATH, "utf8", function(err, jsonData) {
        callback(!err ? JSON.parse(jsonData).version : "");
    });
};

Config.prototype._getActualVersion = function(callback) {
    var version = "", body = "";
    var requestTimeout = setTimeout(function() {
        req.abort();
    }, CHECKING_REQUEST_TIMEOUT);
    var req = http.request(Config.CHECK_NEW_VERSION_REQUEST_CONFIG, function(res) {
        res.on("data", function(chunk) {
            body += chunk;
        });
        res.on("end", function() {
            try {
                version = JSON.parse(body.replace("﻿", "")).version;
            } catch (e) {
                version = "";
            }
            clearTimeout(requestTimeout);
            callback(version);
        });
    });
    req.on("error", function() {
        clearTimeout(requestTimeout);
        callback(version);
    });
    req.end();
};

Config.prototype.getDefaultTestsDir = function() {
    var testsDir = "";
    if (WIN_PLATFORM) testsDir = WIN_DEFAULT_TESTS_DIR; else if (MAC_PLATFORM) testsDir = MAC_DEFAULT_TESTS_DIR; else testsDir = EXAMPLES_DIR;
    return testsDir;
};

Config.prototype._getConfig = function(callback) {
    var config = this;
    this.testsDir = this._getTestsDir(this.testsDir);
    this.reportsPath = this._getReportsPath(this.reportsPath);
    this._getQualifiedHostname(this.hostname, function(hostname) {
        config.hostname = hostname;
        config._initPorts(function(controlPanelPort, servicePort, servicePort2) {
            config.controlPanelPort = controlPanelPort;
            config.servicePort = servicePort;
            config.servicePort2 = servicePort2;
            config.controlPanelHost = [ config.hostname, ":", config.controlPanelPort ].join("");
            config._getBrowsers(function(browsers) {
                if (!config.browsers || !config.browsers.length) {
                    config.updateConfig({
                        browsers: browsers
                    }, function() {
                        config.browsers = browsers;
                        callback();
                    });
                } else {
                    config.browsers = browsers;
                    callback();
                }
            });
        });
    });
};

Config.prototype.getDefaultReportsPath = function() {
    return path.join(Config.USER_DIR, DEFAULT_REPORTS_DIR_NAME);
};

Config.prototype._getReportsPath = function(cfgReportsPath) {
    if (!fs.existsSync(cfgReportsPath)) {
        var defaultPath = this.getDefaultReportsPath();
        if (!fs.existsSync(defaultPath)) fsUtil.mkdirRecursiveSync(defaultPath);
        return defaultPath;
    }
    return cfgReportsPath;
};

Config.prototype._getTestsDir = function(cfgTestsDir) {
    if (!fs.existsSync(cfgTestsDir)) {
        var testsDir = this.getDefaultTestsDir();
        if (!fs.existsSync(testsDir)) {
            fsUtil.mkdirRecursiveSync(testsDir);
            fsUtil.copyDirRecursiveSync(EXAMPLES_DIR, testsDir);
        }
        return testsDir;
    }
    return cfgTestsDir;
};

Config.prototype._checkHostname = function(host, callback) {
    TCPPorts.getFree(CHECKING_HOST_PORT, 0, function(port) {
        var testServer = http.createServer(function(req, res) {
            res.writeHead(200, {
                "Content-Type": "text/plain"
            });
            res.end();
        }).listen(port, host, function() {
            dns.lookup(host, function(err) {
                testServer.close();
                callback(!err);
            });
        });
        testServer.on("error", function() {
            callback(false);
        });
    });
};

Config.prototype._getQualifiedHostname = function(cfgHostname, callback) {
    var hostname = cfgHostname || os.hostname(), config = this;
    config._checkHostname(hostname, function(isHostnameAvailable) {
        if (!isHostnameAvailable) {
            if (MAC_PLATFORM) {
                hostname = [ hostname, ".local" ].join("");
                config._checkHostname(hostname, function(isHostnameAvailable) {
                    if (!isHostnameAvailable) hostname = "127.0.0.1";
                    returnHostname();
                });
            } else {
                hostname = "127.0.0.1";
                returnHostname();
            }
        } else returnHostname();
    });
    function returnHostname() {
        callback(config._getHostname(hostname));
    }
};

Config.prototype._getHostname = function(cfgHostname) {
    var hostname = cfgHostname || os.hostname();
    return hostname && Config.HOSTNAME_PATTERN.test(hostname) ? hostname : "127.0.0.1";
};

Config.prototype._prepareUserCfg = function(cfgObj, callback) {
    var errs = Validator.validate(cfgObj);
    for (var i = errs.length - 1; i >= 0; i--) delete cfgObj[errs[i].property];
    callback(cfgObj, errs.length ? errs : null);
};

Config.prototype._initPorts = function(callback) {
    var controlPanelPort = this.controlPanelPort || DEFAULT_CONTROL_PANEL_PORT, servicePort = this.servicePort || DEFAULT_SERVICE_PORT1, servicePort2 = this.servicePort2 || DEFAULT_SERVICE_PORT2, result = {};
    async.series({
        "Get control panel port": function(done) {
            TCPPorts.isPortFree(controlPanelPort, function(isFree) {
                if (isFree) {
                    result.controlPanelPort = controlPanelPort;
                    done();
                } else {
                    TCPPorts.getFree(controlPanelPort, null, function(port) {
                        result.controlPanelPort = port;
                        done();
                    });
                }
            });
        },
        "Get service port": function(done) {
            TCPPorts.isPortFree(servicePort, function(isFree) {
                if (isFree && servicePort !== result.controlPanelPort) {
                    result.servicePort = servicePort;
                    done();
                } else {
                    TCPPorts.getFree(servicePort, result.controlPanelPort, function(port) {
                        result.servicePort = port;
                        done();
                    });
                }
            });
        },
        "Get service port2": function(done) {
            TCPPorts.isPortFree(servicePort2, function(isFree) {
                if (isFree && servicePort2 !== result.controlPanelPort && servicePort !== result.controlPanelPort) {
                    result.servicePort2 = servicePort2;
                    done();
                } else {
                    TCPPorts.getFree(servicePort2, result.controlPanelPort, function(port) {
                        result.servicePort2 = port;
                        done();
                    });
                }
            });
        }
    }, function() {
        callback(result.controlPanelPort, result.servicePort, result.servicePort2);
    });
};

Config.prototype._getFreeBrowserName = function(name) {
    if (!this.browsers || !this.browsers.hasOwnProperty(name)) return name;
    for (var i = 2; ;i++) {
        var browserName = [ name, i ].join(" ");
        if (!this.browsers.hasOwnProperty(browserName)) return browserName;
    }
};

Config.prototype._getBrowsers = function(callback) {
    var config = this, browsers = config.browsers || {};
    InstalledBrowsers.get(function(installedBrowsers) {
        Object.keys(installedBrowsers).forEach(function(installedBrowserName) {
            var installedBrowserPath = installedBrowsers[installedBrowserName].path, alreadyExists = false;
            Object.keys(browsers).forEach(function(browserName) {
                if (browsers[browserName].path === installedBrowserPath) alreadyExists = true;
            });
            if (!alreadyExists) browsers[config._getFreeBrowserName(installedBrowserName)] = installedBrowsers[installedBrowserName];
        });
        callback(browsers);
    });
};

Config.prototype._getRegistryKeyValue = function(key, field, callback) {
    var cmd = 'reg query "' + key + '"';
    if (field) cmd += " /v " + field;
    child_process.exec(cmd, function(err, stdout) {
        try {
            var fieldString = stdout.split("\r\n")[2].split("    ")[3];
            callback(fieldString);
        } catch (e) {
            callback(null);
        }
    });
};

Config.prototype._setRegistryKeyValue = function(key, field, value, callback) {
    var fieldParam = field ? " /v " + field : "", cmd = [ 'reg add "', key, '"', fieldParam, ' /f /d "', value, '"' ].join("");
    child_process.exec(cmd, function(err, stdout, stderr) {
        callback(err, stdout, stderr);
    });
};

Config.prototype.getInstallDate = function(callback) {
    var config = this;
    if (!WIN_PLATFORM) {
        callback(0);
        return;
    }
    this.getCurrentVersion(function(version) {
        var versionArr = version.split("."), fieldName = [ versionArr[0], versionArr[1] ].join("");
        config._getRegistryKeyValue(LICENSE_DATE_REG_KEY, fieldName, function(license) {
            if (license) callback(0); else {
                config._getRegistryKeyValue(INSTALL_DATE_REG_KEY, fieldName, function(val) {
                    if (!val) {
                        callback(0);
                    } else {
                        val = parseInt(val, 16);
                        var day = Math.floor(val / 1234), month = Math.floor(val % 1234 / 38) - 1, year = Math.floor(2e3 + val % 1234 % 38);
                        val = new Date(year, month, day).getTime();
                        callback(val);
                    }
                });
            }
        });
    });
};

Config.prototype.getLoggingAllowedFlag = function(callback) {
    var config = this;
    if (!WIN_PLATFORM) {
        callback(false);
        return;
    }
    config.getCurrentVersion(function(version) {
        var versionArr = version.split("."), fieldName = [ versionArr[0], versionArr[1] ].join("");
        config._getRegistryKeyValue(LICENSE_DATE_REG_KEY, fieldName, function(isLicense) {
            if (isLicense) callback(false); else config._getRegistryKeyValue(TRIAL_SEND_INFO_REG_KEY, "TrialSendInfo", function(val) {
                callback(val);
            });
        });
    });
};

Config.prototype.getUserID = function(callback) {
    var config = this;
    this._getRegistryKeyValue(USER_ID_REG_KEY, "", function(val) {
        if (!val) {
            var userID = uuid.v4();
            config._setRegistryKeyValue(USER_ID_REG_KEY, "", userID, function() {
                callback(userID);
            });
        } else callback(val);
    });
};

Config.prototype.getHomeDir = function() {
    return WIN_PLATFORM ? process.env.USERPROFILE : process.env.HOME || process.env.HOMEPATH;
};