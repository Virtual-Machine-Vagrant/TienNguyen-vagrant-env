var util = require("util"), MarkdownFormatter = require("./markdown_formatter"), PlainTextFormatter = require("./plain_text_formatter"), FixtureCode = require("./../fixture_code"), ControlPanel = require("../../control_panel"), ERR = require("./../server/server_errs"), CLIENT_ERR = require("./../shared/client_errs"), Hammerhead = require("../../hammerhead");

exports.UNKNOW_ERR_MSG = "UNKNOWN_ERROR";

var generateMsg = function(err, markdownMode) {
    var msg = exports.UNKNOW_ERR_MSG, m = function() {
        msg = util.format.apply(this, arguments);
    }, buildTestErr = function() {
        var data = Array.prototype.slice.call(arguments, 1), errType = arguments[0];
        if (markdownMode) msg = MarkdownFormatter.formatPreparedMarkdown(errType, data); else m.apply(this, data);
    }, prepareStr = function(str) {
        return markdownMode ? MarkdownFormatter.escapeHtml(str) : str;
    }, formatStepName = function(stepName) {
        return markdownMode ? MarkdownFormatter.wrapStepName(stepName) : stepName;
    }, formatLink = function(link) {
        return markdownMode ? MarkdownFormatter.wrapLink(link) : link;
    }, formatCode = function(code) {
        code = code || "";
        return markdownMode ? MarkdownFormatter.wrapCode(code) : code;
    }, formatCodeBtn = function(code) {
        code = code || "";
        return markdownMode ? MarkdownFormatter.wrapCodeBtn(code) : code;
    };
    switch (err.code) {
      case ERR.TESTCAFE_CONFIG_NOT_SPECIFIED:
        m("TestCafe configuration settings are not specified.");
        break;

      case ERR.API_TESTS_TARGET_NOT_EXIST:
        m('The "%s" test target is empty or not found.', err.source);
        break;

      case ERR.API_UNKNOWN_FIXTURE_TYPE:
        m('The "%s" fixture type is unknown. The allowed fixture types are: "dir", "fixture", and "test".', err.type);
        break;

      case ERR.API_NO_TESTS_TO_RUN:
        m("There are no tests to run.");
        break;

      case ERR.API_TASK_WORKER_DOESNT_EXIST:
        m('Attempt to start the "%s" task on a non-existing worker "%s".', err.taskName, err.workerName);
        break;

      case ERR.API_NO_WORKERS_SPECIFIED_FOR_TASK:
        m("Specify either a browser or a worker to run the test.");
        break;

      case ERR.CONFIG_PROPERTY_CAN_NOT_BE_EMPTY:
        m('The "%s" property value cannot be empty. Please correct the "testcafe_config.json" configuration file.', err.property);
        break;

      case ERR.CONFIG_PROPERTY_IS_NOT_STRING:
        m('The "%s" property value must be of a string type. Please correct the "testcafe_config.json" configuration file.', err.property);
        break;

      case ERR.CONFIG_PROPERTY_IS_REQUIRED:
        m('The "%s" property is required. Please define the property in the "testcafe_config.json" configuration file.', err.property);
        break;

      case ERR.CONFIG_UNSUPPORTED_PROPERTY:
        m('The "%s" property is not supported. Please remove the property from the "testcafe_config.json" configuration file or check its spelling.', err.property);
        break;

      case ERR.CONFIG_PORT_VALUE_IS_NOT_NUMBER:
        m('The "%s" port property value must be of an integer type. Please correct the "testcafe_config.json" configuration file.', err.property);
        break;

      case ERR.CONFIG_PORT_VALUE_IS_OUT_OF_RANGE:
        m('The "%s" port value must be between 0 and 65535. Please correct the "testcafe_config.json" configuration file.', err.property);
        break;

      case ERR.CONFIG_INVALID_PROPERTY_FORMAT:
        m('The "%s" property value has incorrect format. Please check the property format in the "testcafe_config.json" configuration file.', err.property);
        break;

      case ERR.CONFIG_READ_FILE_FAILED:
        m('Failed to read TestCafe configuration from the "testcafe_config.json" file.');
        break;

      case ERR.CONFIG_PARSING_FAILED:
        m('Failed to parse a TestCafe configuration file ("testcafe_config.json"). %s', err.parserErr);
        break;

      case ERR.CONFIG_SAVING_FAILED:
        m("Failed to save TestCafe settings to the testcafe_config.json configuration file.");
        break;

      case ERR.CONFIG_DIR_DOESNT_EXIST:
        m('The "%s" directory does not exist.', err.dirPath);
        break;

      case Hammerhead.SERVER_ERRS.INJECTOR_RESOURCE_DECODING_FAILED:
        m('Failed to decode test page markup using %s decoder suggested by server response "Encoding" ' + "HTTP-header. This problem may occur if a test page server is misconfigured.", err.encoding);
        break;

      case Hammerhead.SERVER_ERRS.INJECTOR_RESOURCE_CHARSET_DECODING_FAILED:
        m('Failed to decode test page markup charset using %s decoder that was suggested by server response "Content-type" ' + "HTTP-header. This problem may occur if a test page server is misconfigured.", err.charset);
        break;

      case Hammerhead.SERVER_ERRS.INJECTOR_DOCUMENT_PARSING_FAILED:
        m("Failed to parse test page HTML-markup. %s", err.msg && err.msg.toString());
        break;

      case Hammerhead.SERVER_ERRS.INJECTOR_RESOURCE_ENCODING_FAILED:
        m("TestCafe failed to encode proxy response body using %s encoder. The reason may be a bug in TestCafe " + "server implementation. Please contact the TestCafe vendor for details.", err.encoding);
        break;

      case Hammerhead.SERVER_ERRS.PROXY_PORT_IS_ALREADY_IN_USE:
        m("Failed to start TestCafe service on port %s. TestCafe has already been started or another process " + 'is using this port. To resolve port conflicts, edit "testcafe_config.json" file.', err.port);
        break;

      case Hammerhead.SERVER_ERRS.PROXY_ORIGIN_SERVER_CONNECTION_TERMINATED:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'Failed to perform a request for the "%s" resource because origin server connection was unexpectedly ' + "terminated.", formatLink(err.originUrl));
        break;

      case Hammerhead.SERVER_ERRS.PROXY_CANT_RESOLVE_ORIGIN_URL:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'Failed to find DNS-record for the "%s" resource.', formatLink(err.originUrl));
        break;

      case Hammerhead.SERVER_ERRS.PROXY_ORIGIN_SERVER_REQUEST_TIMEOUT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.TIMEOUT_ERROR, "The server that hosts the tested page at %s did not respond to a connection request within " + "the timeout period. The problem may be related to local machine's network or firewall settings, " + "server outage, or network problems that make the server inaccessible.", formatLink(err.originUrl));
        break;

      case Hammerhead.SERVER_ERRS.PROXY_XHR_REQUEST_SAME_ORIGIN_POLICY_VIOLATION:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'XMLHttpRequest from page "%s" to URL "%s" violates Same Origin Policy. XMLHttpRequest URL domain ' + "should match the current page domain", err.reqOrigin, formatLink(err.xhrReqUrl));
        break;

      case ControlPanel.Errors.CONTROL_PANEL_PORT_IS_ALREADY_IN_USE:
        m("Failed to start TestCafe Control Panel on the %s port. It seems that another application is now " + 'using this port. Use "testcafe_config.json" file to modify TestCafe Control Panel port.', err.port);
        break;

      case FixtureCode.ErrCodes.READ_FILE_FAILED:
        m('Failed to read test file "%s."', err.filename);
        break;

      case FixtureCode.ErrCodes.JAVASCRIPT_PARSING_FAILED:
        m("(line %s): %s", err.parserErr && err.parserErr.line, err.parserErr && err.parserErr.message);
        break;

      case FixtureCode.ErrCodes.AUTH_DIRECTIVE_REDEFINITION:
        m("(line %s): @auth directive redefinition. @auth directive should be used once per test fixture file.", err.line);
        break;

      case FixtureCode.ErrCodes.FIXTURE_DIRECTIVE_REDEFINITION:
        m("(line %s): @fixture directive redefinition. @fixture directive should be used once per test fixture file.", err.line);
        break;

      case FixtureCode.ErrCodes.PAGE_DIRECTIVE_REDEFINITION:
        m("(line %s): @page directive redefinition. @page directive should be used once per test fixture file.", err.line);
        break;

      case FixtureCode.ErrCodes.INVALID_NETWORK_AUTHENTICATION_CREDENTIALS_FORMAT:
        m("(line %s): network authentication credentials have incorrect format. @auth directive should use the " + 'following format: "@auth username:password".', err.line);
        break;

      case FixtureCode.ErrCodes.REQUIRED_FILE_ALREADY_INCLUDED:
        m('(line %s): Required file "%s" is already included.', err.line, err.req);
        break;

      case FixtureCode.ErrCodes.MISPLACED_DIRECTIVE:
        m("(line %s): Misplaced directive. Directives (@fixture, @page, etc.) should be declared " + "on a global scope.", err.line);
        break;

      case FixtureCode.ErrCodes.MISPLACED_TEST_DECLARATION:
        m("(line %s): Misplaced test directive. Tests should be declared on a global scope.", err.line);
        break;

      case FixtureCode.ErrCodes.DUPLICATE_TEST_NAME:
        m('(line %s): Test with name "%s" is already exists.', err.line, err.name);
        break;

      case FixtureCode.ErrCodes.TEST_NAME_CHANGED_TO_ALREADY_USED:
        m('Test with name "%s" is already exists.', err.testName);
        break;

      case FixtureCode.ErrCodes.EMPTY_TEST_NAME:
        m("(line %s): Test name is not set.", err.line);
        break;

      case FixtureCode.ErrCodes.INVALID_TEST_ASSIGNMENT:
        m("(line %s): Invalid test assignment. Test should be an object.", err.line);
        break;

      case FixtureCode.ErrCodes.ACTION_FUNC_IS_NOT_A_LAST_ENTRY:
        m("(line %s): Action function call is not the last statement. Test step should not contain " + "any statements after a action function call.", err.line);
        break;

      case FixtureCode.ErrCodes.TEST_STEP_IS_EMPTY:
        m("(line %s): Test step doesn't contain any code.", err.line);
        break;

      case FixtureCode.ErrCodes.INIFRAME_FUNCTION_SHOULD_ACCEPT_TWO_ARGS:
        m("(line %s): inIFrame step modifier should accept 2 arguments.", err.line);
        break;

      case FixtureCode.ErrCodes.FIXTURE_DIRECTIVE_IS_UNDEFINED:
        m("%s: Fixture name is undefined. Test file should contain @fixture directive.", err.filename);
        break;

      case FixtureCode.ErrCodes.PAGE_DIRECTIVE_IS_UNDEFINED:
        m("%s: Page URL is undefined. Test file should contain @page directive.", err.filename);
        break;

      case FixtureCode.ErrCodes.ASYNC_FUNC_CALL:
        m("(line %s): Async function call. Test steps should not contain async functions calls, " + "use act.wait() instead.", err.line);
        break;

      case FixtureCode.ErrCodes.ACTION_FUNC_CALL_IN_SHARED_CODE:
        m("(line %s): An action function cannot be called from the shared code. It can be used within a " + "test step only.", err.line);
        break;

      case FixtureCode.ErrCodes.FAILED_LOAD_REQUIRE:
        m('%s: Failed load required file "%s".', err.ownerFilename, err.filename);
        break;

      case FixtureCode.ErrCodes.MODULE_NOT_FOUND:
        m('(line %s): Required module "%s" does not exists.', err.line, err.moduleName);
        break;

      case FixtureCode.ErrCodes.TEST_IS_EMPTY:
        m("(line %s): Test doesn't contain any code.", err.line);
        break;

      case FixtureCode.ErrCodes.WRITE_FILE_FAILED:
        m('Failed to write test fixture code to the "%s" file.', err.filename);
        break;

      case FixtureCode.ErrCodes.INVALID_FILE_FORMAT:
        m('Failed to perform the operation because the "%s" test fixture file is not valid.', err.filename);
        break;

      case FixtureCode.ErrCodes.ELEMENT_SELECTOR_PARSING_FAILED:
        m("Failed to generate test code due to a syntax error in an element selector: %s", err.parserErr && err.parserErr.message);
        break;

      case FixtureCode.ErrCodes.ASSERTION_ARGUMENT_PARSING_FAILED:
        m("Failed to generate test code due to a syntax error in an assertion argument: %s", err.parserErr && err.parserErr.message);
        break;

      case FixtureCode.ErrCodes.TEST_IS_NOT_FOUND:
        m("Test %s is not found in this fixture", err.testName);
        break;

      case FixtureCode.ErrCodes.MISPLACED_MIXIN_DECLARATION:
        m("(line %s): Misplaced mixin directive. Mixin should be declared on a global scope.", err.line);
        break;

      case FixtureCode.ErrCodes.DUPLICATE_MIXIN_NAME:
        m('(line %s): Mixin "%s" is already defined.', err.line, err.name);
        break;

      case FixtureCode.ErrCodes.DUPLICATE_MIXIN_NAME_IN_REQUIRE:
        m('Mixin "%s" defined in the "%s" and "%s" files.', err.name, err.defFilename1, err.defFilename2);
        break;

      case FixtureCode.ErrCodes.EMPTY_MIXIN_NAME:
        m("(line %s): Mixin's name isn't specified.", err.line);
        break;

      case FixtureCode.ErrCodes.INVALID_MIXIN_ASSIGNMENT:
        m("(line %s): Invalid mixin assignment. Mixin should be an object.", err.line);
        break;

      case FixtureCode.ErrCodes.MIXIN_USED_IN_MIXIN:
        m("(line %s): Mixin should not contain another mixin.", err.line);
        break;

      case FixtureCode.ErrCodes.TEST_STEP_IS_NOT_A_FUNCTION_OR_MIXIN:
        m("(line %s): Test step is not a function or a mixin.", err.line);
        break;

      case FixtureCode.ErrCodes.MIXIN_STEP_IS_NOT_A_FUNCTION:
        m("(line %s): Step within mixin is not a function.", err.line);
        break;

      case FixtureCode.ErrCodes.UNDEFINED_MIXIN_USED:
        m('(line %s): Mixin "%s" is undefined.', err.line, err.mixinName);
        break;

      case FixtureCode.ErrCodes.MIXIN_STEP_IS_EMPTY:
        m("(line %s): Step within mixin doesn't contain any code.", err.line);
        break;

      case FixtureCode.ErrCodes.MIXIN_IS_EMPTY:
        m("(line %s): The mixin doesn't contain any code.", err.line);
        break;

      case FixtureCode.ErrCodes.FAILED_TO_READ_EXTERNAL_TEST_CASES:
        m('Failed to load file "%s" containing test cases.', err.testCasesPath);
        break;

      case FixtureCode.ErrCodes.TEST_CASES_LIST_IS_NOT_ARRAY:
        m("(line %s): The list of test cases should be an array.", err.line);
        break;

      case FixtureCode.ErrCodes.TEST_CASES_LIST_IS_EMPTY:
        m("(line %s): The list of test cases doesn't contain any items.", err.line);
        break;

      case FixtureCode.ErrCodes.TEST_CASE_IS_NOT_AN_OBJECT:
        m("(line %s): Test case should be an object.", err.line);
        break;

      case FixtureCode.ErrCodes.TEST_CASE_DOESNT_CONTAIN_ANY_FIELDS:
        m("(line %s): Test case doesn't contain any fields.", err.line);
        break;

      case FixtureCode.ErrCodes.TEST_CASE_NAME_IS_NOT_A_STRING:
        m("(line %s): Test case's name is not a string.", err.line);
        break;

      case FixtureCode.ErrCodes.DUPLICATE_TEST_CASE_NAME:
        m('(line %s): Duplicated test case\'s name "%s". A test case should have an unique name.', err.line, err.testCaseName);
        break;

      case ERR.RECORDER_TARGET_FIXTURE_DOESNT_EXISTS:
        m("The text fixture specified for test recording is not found.");
        break;

      case ERR.RECORDER_RECORDING_IS_EMPTY:
        m("Test doesn't contain any steps.");
        break;

      case ERR.RECORDER_TEST_NAME_IS_EMPTY:
        m("Test name is empty.");
        break;

      case ERR.RECORDER_RECORDING_DOESNT_EXISTS:
        m("Recording does not exist.");
        break;

      case ERR.SUITE_CFG_PROPERTY_IS_NOT_STRING:
        m('The "%s" property value must be of a string type. Please correct the "%s" file.', err.property, err.cfgPath);
        break;

      case ERR.SUITE_CFG_INVALID_PROPERTY_FORMAT:
        m('The "%s" property value has an incorrect format. Please check the property format in the "%s" file.', err.property, err.cfgPath);
        break;

      case ERR.SUITE_CFG_UNSUPPORTED_PROPERTY:
        m('The "%s" property is not supported. Please remove the property from the "%s" file or check its spelling.', err.property, err.cfgPath);
        break;

      case ERR.SUITE_READ_DIR_FAILED:
        m('Failed to read directory "%s"', err.dirPath);
        break;

      case ERR.SUITE_GET_FILE_STATS_FAILED:
        m('Failed to obtain file system statistics for path "%s"', err.filePath);
        break;

      case ERR.SUITE_READ_CFG_FILE_FAILED:
        m('Failed to read the "test_config.json" file at path "%s"', err.dirPath);
        break;

      case ERR.SUITE_CFG_FILE_PARSING_FAILED:
        m('Failed to parse the "test_config.json" file at path "%s". %s', err.dirPath, err.msg);
        break;

      case ERR.SUITE_CFG_MODULE_IS_NOT_ARRAY:
        m('Failed to parse %s file. Module "%s" is not an array of files.', err.cfgPath, err.property);
        break;

      case ERR.TEST_RUNNER_RESOURCE_ERROR_HTTP_STATUS_CODE:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, "Failed to load page resource %s. HTTP status code - %s.", formatLink(err.url), err.statusCode);
        break;

      case ERR.TEST_RUNNER_MAX_TEST_RUN_RESTARTS:
        m("Failed to run the test since the test page loading hangs repetitively.");
        break;

      case ERR.REPORTER_WRITE_REPORT_FAILED:
        m("Failed to write the \"%s\" report file. The path doesn't exist or there aren't enough permissions to write", err.filePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_BASE_PATH_DOESNT_EXISTS:
        m('Tests directory path "%s", which is set in file "testcafe_config.json", does not exist.', err.basePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_BASE_PATH_IS_NOT_DIR:
        m('Tests directory path "%s", which is set in file "testcafe_config.json", does not exist.', err.basePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_CREATE_DIR_FAILED:
        m('Failed to create the "%s" directory.', err.dirPath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_INVALID_DIR_PATH:
        m('The "%s" directory name is not valid.', err.dirPath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_RENAME_DIR_FAILED:
        m('Failed to rename the "%s" directory.', err.dirPath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_DELETE_DIR_FAILED:
        m('Failed to delete the "%s" directory.', err.dirPath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_DIR_ALREADY_EXISTS:
        m('The "%s" directory already exists.', err.dirPath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_DIR_DOESNT_EXIST:
        m('The "%s" directory does not exist.', err.dirPath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_INVALID_FIXTURE_PATH:
        m('The "%s" file name is not valid.', err.filePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_FIXTURE_FILE_ALREADY_EXISTS:
        m("File already exists.");
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_RENAME_FIXTURE_FILE_FAILED:
        m('Failed to rename the "%s" fixture.', err.filePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_FIXTURE_FILE_DOESNT_EXIST:
        m('The "%s" file does not exist.', err.filePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_DELETE_FIXTURE_FILE_FAILED:
        m('Failed to delete the "%s" file.', err.filePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_DIR_DOESNT_READ:
        m('The "%s" directory can\'t be read. It might have been deleted.', err.fsPath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_NODEJS_CANT_GET_DRIVE_LIST:
        m("It is impossible to get the list of local directories.");
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_READ_FIXTURE_FAILED:
        m('Unable to read file "%s".', err.filePath);
        break;

      case ERR.VIRTUAL_FILE_SYSTEM_WRITE_FIXTURE_FAILED:
        m('Unable to save file "%s".', err.filePath);
        break;

      case ERR.WORKER_POOL_WORKER_NAME_IS_EMPTY:
        m("Worker name is empty. The name should contain at least one character which cannot be a blank space.");
        break;

      case ERR.WORKER_POOL_WORKER_NAME_IS_ALREADY_USED:
        m('Worker with name "%s" is already registered. Please choose another name.', err.name);
        break;

      case ERR.WORKER_POOL_WORKER_DISCONNECTED:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'The "%s" worker did not respond to the TestCafe and was deleted. This problem may appear when a ' + "worker browser hangs or is closed, or due to network issues.", err.name);
        break;

      case ERR.WORKER_POOL_FAILED_TO_START_BROWSER:
        m('Failed to start browser "%s" located at path "%s". This may occur if the browser is not ' + 'configured well in the "testcafe_config.json" file.', err.browserName, err.path);
        break;

      case ERR.WORKER_POOL_FAILED_TO_CREATE_WORKER_IN_BROWSER_WINDOW:
        m('Failed to start a worker on browser "%s". This may occur if the browser was closed before the ' + "worker initialization or due to browser hangup.", err.browserName);
        break;

      case ERR.CLI_TIMEOUT_EXCEED:
        m("Test timeout (%s seconds) is exceeded", err.time);
        break;

      case ERR.CLI_UNKNOWN_OPTION:
        m("Unknown option: %s", err.option);
        break;

      case ERR.CLI_SETUP_EXEC_NOT_EXISTS:
        m("Node JS app %s doesn't contains public setupExec method. Use exports.setupExec for the creating setup environment handler.", err.target);
        break;

      case ERR.CLI_SETUP_ENV_PATH_NOT_DEFINED:
        m("Path for the setup environment not defined. Use path parameter for the specifying NodeJS app or Executable file.");
        break;

      case ERR.CLI_TIMEOUT_VALUE_NOT_VALID:
        m('Timeout value "%s" isn\'t valid. Timeout must be unsigned integer value.', err.timeout);
        break;

      case ERR.CLI_HELP_UNKNOWN_OPTION:
        m("Unknown option %s", err.option);
        break;

      case ERR.CLI_CONFIG_FILE_NOT_EXISTS:
        m("Config file %s not exists or can't be read", err.filename);
        break;

      case ERR.CLI_CONFIG_NOT_VALID:
        m("Config file contains not valid JSON object", err.filename);
        break;

      case ERR.CLI_BROWSER_PARAM_NOT_VALID:
        m("Browser definition must contain name and path");
        break;

      case CLIENT_ERR.XHR_REQUEST_TIMEOUT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.TIMEOUT_ERROR, "Abnormally long XMLHttpRequest encountered.");
        break;

      case CLIENT_ERR.IFRAME_LOADING_TIMEOUT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.TIMEOUT_ERROR, "Abnormally long iframe loading encountered.");
        break;

      case CLIENT_ERR.IN_IFRAME_TARGET_LOADING_TIMEOUT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.TIMEOUT_ERROR, 'Error on step "%s": Abnormally long loading time of the IFrame has been occurred.', formatStepName(err.stepName));
        break;

      case Hammerhead.CLIENT_ERRS.URL_UTIL_PROTOCOL_IS_NOT_SUPPORTED:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, "Failed to process the %s resource. TestCafe supports only HTTP and HTTPS protocols.", formatLink(err.originUrl));
        break;

      case CLIENT_ERR.UNCAUGHT_JS_ERROR:
        if (err.pageUrl) {
            buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'Uncaught JavaScript error "%s" on page %s', prepareStr(err.scriptErr), formatLink(err.pageUrl));
        } else {
            buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'Uncaught JavaScript error "%s" on page.', prepareStr(err.scriptErr));
        }
        break;

      case CLIENT_ERR.UNCAUGHT_JS_ERROR_IN_TEST_CODE_STEP:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'Error on step "%s": Uncaught JavaScript error in test code - "%s".', formatStepName(err.stepName), prepareStr(err.scriptErr));
        break;

      case CLIENT_ERR.TEST_INACTIVITY:
        buildTestErr(MarkdownFormatter.ERR_TYPE.TIMEOUT_ERROR, "Abnormal test inactivity encountered. It may be caused by a critical error on a test page.");
        break;

      case CLIENT_ERR.STORE_DOM_NODE_OR_JQUERY_OBJECT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.JS_ERROR, 'Error on step "%s": It is not allowed to share the DOM element, jQuery object or a function between test steps via "this" object.', formatStepName(err.stepName));
        break;

      case CLIENT_ERR.API_EMPTY_FIRST_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nA target element of the "%s" action has not been found in the DOM tree. ' + "If this element should be created after animation or a time-consuming operation is finished, " + "use the act.waitFor action (available for use in code) to pause test execution until this element appears.", formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode), prepareStr(err.action));
        break;

      case CLIENT_ERR.API_INVISIBLE_ACTION_ELEMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nA target element of the "%s" action ("%s") is not visible. ' + "If this element should appear when you are hovering over another element, make sure that you properly recorded the Hover action.", formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode), prepareStr(err.action), formatCode(err.element));
        break;

      case CLIENT_ERR.API_INCORRECT_DRAGGING_SECOND_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\n"%s" action drop target is incorrect.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode), prepareStr(err.action || ""), formatCode(err.element || ""));
        break;

      case CLIENT_ERR.API_INCORRECT_PRESS_ACTION_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\npress action parameter contains incorrect key code.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_EMPTY_TYPE_ACTION_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nThe type action\'s parameter text is empty.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_OK_ASSERTION_FAILED:
        msg = markdownMode ? MarkdownFormatter.buildOkAssert(err) : PlainTextFormatter.buildOkAssert(err);
        break;

      case CLIENT_ERR.API_EQUAL_ASSERTION_FAILED:
        msg = markdownMode ? MarkdownFormatter.buildEqAssert(err) : PlainTextFormatter.buildEqAssert(err);
        break;

      case CLIENT_ERR.API_NOT_OK_ASSERTION_FAILED:
        msg = markdownMode ? MarkdownFormatter.buildNotOkAssert(err) : PlainTextFormatter.buildNotOkAssert(err);
        break;

      case CLIENT_ERR.API_NOT_EQUAL_ASSERTION_FAILED:
        msg = markdownMode ? MarkdownFormatter.buildNotEqAssert(err) : PlainTextFormatter.buildNotEqAssert(err);
        break;

      case CLIENT_ERR.API_UNEXPECTED_DIALOG:
        buildTestErr(MarkdownFormatter.ERR_TYPE.NATIVE_DIALOG_ERROR, 'Error on step "%s": Unexpected system %s dialog "%s" appeared.', formatStepName(err.stepName), prepareStr(err.dialog), prepareStr(err.message));
        break;

      case CLIENT_ERR.API_EXPECTED_DIALOG_DOESNT_APPEAR:
        buildTestErr(MarkdownFormatter.ERR_TYPE.NATIVE_DIALOG_ERROR, 'Error on step "%s": The expected system %s dialog did not appear.', formatStepName(err.stepName), prepareStr(err.dialog));
        break;

      case CLIENT_ERR.API_INCORRECT_SELECT_ACTION_ARGUMENTS:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nselect action\'s parameters contain an incorrect value.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_INCORRECT_WAIT_ACTION_MILLISECONDS_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nwait action\'s "milliseconds" parameter should be a positive number.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_INCORRECT_WAIT_FOR_ACTION_EVENT_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nwaitFor action\'s first parameter should be a function, a CSS selector or an array of CSS selectors.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_INCORRECT_WAIT_FOR_ACTION_TIMEOUT_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nwaitFor action\'s "timeout" parameter should be a positive number.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_WAIT_FOR_ACTION_TIMEOUT_EXCEEDED:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nwaitFor action\'s timeout exceeded.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_EMPTY_IFRAME_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nThe selector within the inIFrame function returns an empty value.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_IFRAME_ARGUMENT_IS_NOT_IFRAME:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nThe selector within the inIFrame function doesn’t return an iframe element.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_MULTIPLE_IFRAME_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nThe selector within the inIFrame function returns more than one iframe element.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_INCORRECT_IFRAME_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nThe inIFrame function contains an invalid argument.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_UPLOAD_CAN_NOT_FIND_FILE_TO_UPLOAD:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nCannot find the following file(s) to upload:\n	%s', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode), prepareStr(err.filePaths ? err.filePaths.join(",\n	") : ""));
        break;

      case CLIENT_ERR.API_UPLOAD_ELEMENT_IS_NOT_FILE_INPUT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nupload action argument does not contain a file input element.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;

      case CLIENT_ERR.API_UPLOAD_INVALID_FILE_PATH_ARGUMENT:
        buildTestErr(MarkdownFormatter.ERR_TYPE.ACTION_ERROR, 'Error on step "%s": %s\nupload action\'s "path" parameter should be a string or an array of strings.', formatStepName(err.stepName), formatCodeBtn(err.relatedSourceCode));
        break;
    }
    return msg;
};

exports.build = function(err, markdownMode) {
    if (util.isArray(err)) {
        var msgs = [];
        err.forEach(function(err) {
            msgs.push(generateMsg(err, markdownMode));
        });
        return msgs;
    } else return generateMsg(err, markdownMode);
};