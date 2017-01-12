(function() {
    var ServiceCommands = {
        TEST_FAIL: "CMD_TEST_FAIL",
        ASSERTION_FAILED: "CMD_ASSERTION_FAILED",
        TEST_COMPLETE: "CMD_TEST_COMPLETE",
        INACTIVITY_EXPECTED: "CMD_INACTIVITY_EXPECTED",
        SET_STEPS_SHARED_DATA: "CMD_SET_STEPS_SHARED_DATA",
        GET_STEPS_SHARED_DATA: "CMD_GET_STEPS_SHARED_DATA",
        STEPS_INFO_GET: "CMD_STEPS_INFO_GET",
        STEPS_INFO_SET: "CMD_STEPS_INFO_SET",
        WERE_ACTIONS_RECORDED: "CMD_WERE_ACTIONS_RECORDED",
        SET_NEXT_STEP: "CMD_SET_NEXT_STEP",
        SET_ACTION_TARGET_WAITING: "CMD_SET_ACTION_TARGET_WAITING",
        SET_TEST_ERROR: "CMD_SET_TEST_ERROR",
        TOOLBAR_POSITION_SET: "CMD_TOOLBAR_POSITION_SET",
        CHANGE_SHOW_STEPS: "CMD_CHANGE_SHOW_STEPS",
        SET_HAS_UNSAVED_CHANGES: "CMD_SET_HAS_UNSAVED_CHANGES",
        RESTART_RECORDING: "CMD_RESTART_RECORDING",
        GET_AND_UNCHECK_FILE_DOWNLOADING_FLAG: "GET_AND_UNCHECK_FILE_DOWNLOADING_FLAG",
        UNCHECK_FILE_DOWNLOADING_FLAG: "CMD_UNCHECK_FILE_DOWNLOADING_FLAG",
        SAVE_TEST: "CMD_SAVE_TEST",
        EXIT_RECORDING: "CMD_EXIT_RECORDING",
        START_PLAYBACK: "CMD_START_PLAYBACK",
        CANCEL_AUTHENTICATION: "CMD_CANCEL_AUTHENTICATION",
        FAILED_STEP_IN_PLAYBACK: "CMD_FAILED_STEP_IN_PLAYBACK",
        END_PLAYBACK: "CMD_END_PLAYBACK",
        SET_NEXT_STEP_PLAYBACK: "CMD_SET_NEXT_STEP_PLAYBACK",
        SET_ACTION_TARGET_WAITING_PLAYBACK: "CMD_SET_ACTION_TARGET_WAITING_PLAYBACK",
        AUTH_CREDENTIALS_SET: "CMD_AUTH_CREDENTIALS_SET",
        UXLOG: "CMD_UXLOG",
        TAKE_SCREENSHOT: "CMD_TAKE_SCREENSHOT",
        NATIVE_DIALOGS_INFO_SET: "CMD_NATIVE_DIALOGS_INFO_SET",
        SET_NATIVE_DIALOGS_QUEUE: "CMD_SET_NATIVE_DIALOGS_QUEUE"
    };
    if (typeof module !== "undefined" && module.exports) module.exports = ServiceCommands; else {
        TestCafeClient.define("Shared.ServiceCommands", function() {
            this.exports = ServiceCommands;
        });
    }
})();