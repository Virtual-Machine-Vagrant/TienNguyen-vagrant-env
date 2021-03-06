var util = require("util"), markdown = require("markdown").markdown, msgBuilderUtil = require("./util");

var STEP_NAME_PATTERN = "`%s`{:.go-to-code-btn .step-name}", LINK_PATTERN = "[%s](%s)", GOTO_CODE_LINK = "`%s`{:.go-to-code-btn .language-javascript}", ASSERT_ICON = "****{:.assert-icon}", CODE_CLASS = "{:.language-javascript}", HTML_ESCAPE_CODES = {
    "<": "&lt;",
    ">": "&gt;",
    "&": "&amp;"
};

var ERR_TYPE = exports.ERR_TYPE = {
    JS_ERROR: "JS_ERROR",
    ACTION_ERROR: "ACTION_ERROR",
    NATIVE_DIALOG_ERROR: "NATIVE_DIALOG_ERROR",
    TIMEOUT_ERROR: "TIMEOUT_ERROR"
};

var ERR_ICONS_MARKDOWN = {};

ERR_ICONS_MARKDOWN[ERR_TYPE.JS_ERROR] = "****{:.js-error-icon}";

ERR_ICONS_MARKDOWN[ERR_TYPE.ACTION_ERROR] = "****{:.action-icon}";

ERR_ICONS_MARKDOWN[ERR_TYPE.NATIVE_DIALOG_ERROR] = "****{:.native-dialog-icon}";

ERR_ICONS_MARKDOWN[ERR_TYPE.TIMEOUT_ERROR] = "****{:.timeout-icon}";

var unwrapParagraph = function(str) {
    return str.replace(/^<p>/, "").replace(/<\/p>$/, "");
};

var buildMarkdown = function(str) {
    return markdown.toHTML(str, "Maruku");
};

var highlightedCode = function(code) {
    return util.format("`%s`" + CODE_CLASS, code);
};

var formatHtml = function(args, htmlEscaping) {
    if (htmlEscaping) for (var index = 1, length = args.length; index < length; index++) {
        args[index] = escapeHtml(args[index]);
    }
    return util.format.apply(this, args);
};

var escapeHtml = exports.escapeHtml = function(str) {
    if (typeof str === "string") return str.replace(/[<>&]/g, function(m) {
        return HTML_ESCAPE_CODES[m];
    }); else return str;
};

var formatAndBuildMarkdown = exports.formatMarkdown = function() {
    var args = Array.prototype.slice.call(arguments);
    args[0] = buildMarkdown(args[0]);
    return formatHtml(args, true);
};

exports.formatPreparedMarkdown = function(errType, args) {
    args[0] = buildMarkdown(ERR_ICONS_MARKDOWN[errType] + args[0]);
    return formatHtml(args, false);
};

exports.buildNotOkAssert = function(err) {
    var expectedMarkdown = util.format("%s, %s, %s, %s or %s", highlightedCode("null"), highlightedCode("undefined"), highlightedCode("false"), highlightedCode("NaN"), highlightedCode("''")), messagePrefix = typeof err.message !== "undefined" && err.message !== null ? '"' + err.message + '" assertion' : "Assertion";
    return formatAndBuildMarkdown(ASSERT_ICON + '%s failed at step "' + STEP_NAME_PATTERN + '": ' + GOTO_CODE_LINK + "\n" + "**Expected:** " + expectedMarkdown + "\n" + "**Actual:** `%s`" + CODE_CLASS + "\n", messagePrefix, err.stepName, err.relatedSourceCode, err.actual);
};

exports.buildOkAssert = function(err) {
    var expectedMarkdown = util.format("not %s, not %s, not %s, not %s and not %s", highlightedCode("null"), highlightedCode("undefined"), highlightedCode("false"), highlightedCode("NaN"), highlightedCode("''")), messagePrefix = typeof err.message !== "undefined" && err.message !== null ? '"' + err.message + '" assertion' : "Assertion";
    return formatAndBuildMarkdown(ASSERT_ICON + '%s failed at step "' + STEP_NAME_PATTERN + '": ' + GOTO_CODE_LINK + "\n" + "**Expected:** " + expectedMarkdown + "\n" + "**Actual:** `%s`" + CODE_CLASS + "\n", messagePrefix, err.stepName, err.relatedSourceCode, err.actual);
};

exports.buildNotEqAssert = function(err) {
    var expected = util.format("not %s", err.actual), messagePrefix = typeof err.message !== "undefined" && err.message !== null ? '"' + err.message + '" assertion' : "Assertion";
    return formatAndBuildMarkdown(ASSERT_ICON + '%s failed at step "' + STEP_NAME_PATTERN + '": ' + GOTO_CODE_LINK + "\n" + "**Expected:** `%s`" + CODE_CLASS + "\n" + "**Actual:** `%s`" + CODE_CLASS + "\n", messagePrefix, err.stepName, err.relatedSourceCode, expected, err.actual);
};

exports.buildEqAssert = function(err) {
    var actual = err.actual, expected = err.expected, actualMsgPattern = "**Actual:** `%s`" + CODE_CLASS + "\n", expectedMsgPattern = "**Expected:** `%s`" + CODE_CLASS + "\n", messagePrefix = typeof err.message !== "undefined" && err.message !== null ? '"' + err.message + '" assertion' : "Assertion", markerString = "", arrayIndexStr = "";
    if (err.isArrays) arrayIndexStr = [ "[", err.key, "]: " ].join("");
    if (err.isDates || err.diffType && err.diffType.isDates) {
        actual = msgBuilderUtil.formatDateTime(actual);
        expected = msgBuilderUtil.formatDateTime(expected);
    } else if ((err.isStrings || err.diffType && err.diffType.isStrings) && expected.length > msgBuilderUtil.EMPTY_STRING_LENGTH && actual.length > msgBuilderUtil.EMPTY_STRING_LENGTH) {
        var stringOutputOffset = 0, diffIndex = 0;
        if (err.isArrays) {
            stringOutputOffset = arrayIndexStr.length;
            if (err.diffType && err.diffType.isStrings) diffIndex = err.diffType.diffIndex + 1;
        } else diffIndex = err.key + 1;
        var formattedDiff = msgBuilderUtil.formatOverflowDiffString(actual, expected, diffIndex, stringOutputOffset, true, stringOutputOffset);
        expected = formattedDiff.expected;
        actual = formattedDiff.actual;
        markerString = formattedDiff.key;
    } else {
        actual = msgBuilderUtil.cutOverflowString(actual);
        expected = msgBuilderUtil.cutOverflowString(expected);
    }
    if (err.isArrays) {
        return formatAndBuildMarkdown(ASSERT_ICON + '%s failed at step "' + STEP_NAME_PATTERN + '":' + GOTO_CODE_LINK + "\n" + "\n\nArrays differ at index `%s`" + CODE_CLASS + ":\n\n" + "**Expected:** **%s**`%s`" + CODE_CLASS + "\n" + "**Actual:** **%s**`%s`" + CODE_CLASS + "\n" + markerString, messagePrefix, err.stepName, err.relatedSourceCode, err.key, arrayIndexStr, expected, arrayIndexStr, actual);
    } else if (err.isObjects) {
        return formatAndBuildMarkdown(ASSERT_ICON + '%s failed at step "' + STEP_NAME_PATTERN + '":' + GOTO_CODE_LINK + "\n" + "\n\nObjects differ at the `%s`" + CODE_CLASS + " field:\n\n" + expectedMsgPattern + actualMsgPattern + markerString, messagePrefix, err.stepName, err.relatedSourceCode, err.key, expected, actual);
    } else if (err.isStrings) {
        return formatAndBuildMarkdown(ASSERT_ICON + '%s failed at step "' + STEP_NAME_PATTERN + '":' + GOTO_CODE_LINK + "\n" + "\n\nStrings differ at index `%s`" + CODE_CLASS + ":\n\n" + expectedMsgPattern + actualMsgPattern + markerString, messagePrefix, err.stepName, err.relatedSourceCode, err.key, expected, actual);
    } else {
        return formatAndBuildMarkdown(ASSERT_ICON + '%s failed at step "' + STEP_NAME_PATTERN + '": ' + GOTO_CODE_LINK + "\n" + expectedMsgPattern + actualMsgPattern, messagePrefix, err.stepName, err.relatedSourceCode, expected, actual);
    }
};

exports.wrapCodeBtn = function(code) {
    return util.format(unwrapParagraph(buildMarkdown(GOTO_CODE_LINK)), code);
};

exports.wrapCode = function(code) {
    return util.format(unwrapParagraph(buildMarkdown("`%s`" + CODE_CLASS)), escapeHtml(code));
};

exports.wrapLink = function(link) {
    return util.format(unwrapParagraph(buildMarkdown(LINK_PATTERN)), link, link);
};

exports.wrapStepName = function(stepName) {
    return util.format(unwrapParagraph(buildMarkdown(STEP_NAME_PATTERN)), stepName);
};