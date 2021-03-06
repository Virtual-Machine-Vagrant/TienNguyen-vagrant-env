(function() {
    var Errors = typeof module !== "undefined" && module.exports ? exports : TestCafeClient;
    Errors.UNCAUGHT_JS_ERROR = "CLIENT_UNCAUGHT_JS_ERROR";
    Errors.UNCAUGHT_JS_ERROR_IN_TEST_CODE_STEP = "CLIENT_UNCAUGHT_JS_ERROR_IN_TEST_CODE_STEP";
    Errors.STORE_DOM_NODE_OR_JQUERY_OBJECT = "CLIENT_STORE_DOM_NODE_OR_JQUERY_OBJECT";
    Errors.TEST_INACTIVITY = "CLIENT_TEST_INACTIVITY";
    Errors.API_EMPTY_FIRST_ARGUMENT = "CLIENT_API_EMPTY_FIRST_ARGUMENT";
    Errors.API_INVISIBLE_ACTION_ELEMENT = "CLIENT_API_INVISIBLE_ACTION_ELEMENT";
    Errors.API_INCORRECT_DRAGGING_SECOND_ARGUMENT = "CLIENT_API_INCORRECT_DRAGGING_SECOND_ARGUMENT";
    Errors.API_OK_ASSERTION_FAILED = "CLIENT_API_OK_ASSERTION_FAILED";
    Errors.API_EQUAL_ASSERTION_FAILED = "CLIENT_API_EQUAL_ASSERTION_FAILED";
    Errors.API_NOT_OK_ASSERTION_FAILED = "CLIENT_API_NOT_OK_ASSERTION_FAILED";
    Errors.API_NOT_EQUAL_ASSERTION_FAILED = "CLIENT_API_NOT_EQUAL_ASSERTION_FAILED";
    Errors.API_INCORRECT_PRESS_ACTION_ARGUMENT = "CLIENT_API_INCORRECT_PRESS_ACTION_ARGUMENT";
    Errors.API_EMPTY_TYPE_ACTION_ARGUMENT = "CLIENT_API_EMPTY_TYPE_ACTION_ARGUMENT";
    Errors.API_UNEXPECTED_DIALOG = "CLIENT_API_UNEXPECTED_DIALOG";
    Errors.API_EXPECTED_DIALOG_DOESNT_APPEAR = "CLIENT_API_EXPECTED_DIALOG_DOESNT_APPEAR";
    Errors.API_INCORRECT_SELECT_ACTION_ARGUMENTS = "CLIENT_API_INCORRECT_SELECT_ACTION_ARGUMENTS";
    Errors.API_INCORRECT_WAIT_ACTION_MILLISECONDS_ARGUMENT = "CLIENT_API_INCORRECT_WAIT_ACTION_FIRST_ARGUMENT";
    Errors.API_INCORRECT_WAIT_FOR_ACTION_EVENT_ARGUMENT = "CLIENT_API_INCORRECT_WAIT_FOR_ACTION_EVENT_ARGUMENT";
    Errors.API_INCORRECT_WAIT_FOR_ACTION_TIMEOUT_ARGUMENT = "CLIENT_API_INCORRECT_WAIT_FOR_ACTION_TIMEOUT_ARGUMENT";
    Errors.API_WAIT_FOR_ACTION_TIMEOUT_EXCEEDED = "CLIENT_API_WAIT_FOR_ACTION_TIMEOUT_EXCEEDED";
    Errors.API_EMPTY_IFRAME_ARGUMENT = "CLIENT_API_EMPTY_IFRAME_ARGUMENT";
    Errors.API_IFRAME_ARGUMENT_IS_NOT_IFRAME = "CLIENT_API_IFRAME_ARGUMENT_IS_NOT_IFRAME";
    Errors.API_MULTIPLE_IFRAME_ARGUMENT = "CLIENT_API_MULTIPLE_IFRAME_ARGUMENT";
    Errors.API_INCORRECT_IFRAME_ARGUMENT = "CLIENT_API_INCORRECT_IFRAME_ARGUMENT";
    Errors.API_UPLOAD_CAN_NOT_FIND_FILE_TO_UPLOAD = "CLIENT_API_UPLOAD_CAN_NOT_FIND_FILE_TO_UPLOAD";
    Errors.API_UPLOAD_ELEMENT_IS_NOT_FILE_INPUT = "CLIENT_API_UPLOAD_ELEMENT_IS_NOT_FILE_INPUT";
    Errors.API_UPLOAD_INVALID_FILE_PATH_ARGUMENT = "CLIENT_API_UPLOAD_INVALID_FILE_PATH_ARGUMENT";
    Errors.IFRAME_LOADING_TIMEOUT = "CLIENT_IFRAME_LOADING_TIMEOUT";
    Errors.IN_IFRAME_TARGET_LOADING_TIMEOUT = "CLIENT_IN_IFRAME_TARGET_LOADING_TIMEOUT";
    Errors.XHR_REQUEST_TIMEOUT = "CLIENT_XHR_REQUEST_TIMEOUT";
    Errors.hasErrorStepName = function(err) {
        return err.code !== Errors.UNCAUGHT_JS_ERROR && err.code !== Errors.XHR_REQUEST_TIMEOUT && err.code !== Errors.IFRAME_LOADING_TIMEOUT && err.code !== Errors.TEST_INACTIVITY;
    };
    if (typeof module !== "undefined" && module.exports) module.exports = Errors; else {
        TestCafeClient.define("Shared.Errors", function() {
            this.exports = Errors;
        });
    }
})();