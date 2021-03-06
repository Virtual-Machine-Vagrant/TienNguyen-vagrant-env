var astProcessor = require("uglify-js").uglify, SharedConst = require("../../shared/const"), Common = require("./../common"), Ast = require("./../ast"), ErrCodes = require("./../err_codes");

function getLineIndent(line, baseIndent) {
    var lineIndent = 0;
    for (var j = 0; j < line.length && baseIndent >= lineIndent; j++) {
        var ch = line[j];
        if (ch === " " || ch === "	") lineIndent++; else break;
    }
    return Math.min(lineIndent, baseIndent);
}

var CallAnalyzer = function(ast, filename, errs, isSharedCode, sourceIndex, src) {
    this.ast = ast;
    this.src = src;
    this.filename = filename;
    this.errs = errs;
    this.isSharedCode = isSharedCode;
    this.sourceIndex = sourceIndex;
    this.astWasModified = false;
    this.callInfo = {
        astPath: null,
        line: 0,
        calleeName: null,
        calleeOwnerObj: null
    };
};

CallAnalyzer.prototype._walkCalls = function(onCall) {
    var analyzer = this, walker = astProcessor.ast_walker();
    walker.with_walkers({
        call: function() {
            var isDot = Ast.getEntryName(this[1]) === "dot";
            analyzer.callInfo.astEntry = this;
            analyzer.callInfo.astPath = walker.stack();
            analyzer.callInfo.line = Ast.getCurrentSrcLineNum(analyzer.callInfo.astPath);
            analyzer.callInfo.calleeName = isDot ? this[1][2] : this[1][1];
            analyzer.callInfo.calleeOwnerObj = isDot ? this[1][1][1] : null;
            analyzer.callInfo.args = this[2];
            onCall();
        }
    }, function() {
        walker.walk(analyzer.ast);
    });
};

CallAnalyzer.prototype._err = function(code) {
    this.errs.push({
        code: code,
        filename: this.filename,
        line: this.callInfo.line
    });
};

CallAnalyzer.prototype._isAsyncFuncCall = function() {
    return (this.callInfo.calleeOwnerObj === "window" || this.callInfo.calleeOwnerObj === "wnd") && (this.callInfo.calleeName === "setTimeout" || this.callInfo.calleeName === "setInterval");
};

CallAnalyzer.prototype._isActionFuncCall = function() {
    return this.callInfo.calleeOwnerObj === Common.ACTIONS_OWNER_OBJECT_IDENTIFIER && SharedConst.ACTION_FUNC_NAMES.indexOf(this.callInfo.calleeName) > -1;
};

CallAnalyzer.prototype._isAssertionCall = function() {
    return !this.callInfo.calleeOwnerObj && SharedConst.ASSERTION_FUNC_NAMES.indexOf(this.callInfo.calleeName) > -1;
};

CallAnalyzer.prototype._reformatCallSrc = function(callSrc, startPos) {
    var lines = callSrc.split(/\r?\n/);
    if (lines.length > 1) {
        var baseIndent = 0;
        for (var i = startPos - 1; i >= 0; i--) {
            var ch = this.src[i];
            if (ch === " " || ch === "	") baseIndent++; else break;
        }
        if (baseIndent > 0) {
            for (var j = 1; j < lines.length; j++) {
                var lineIndent = getLineIndent(lines[j], baseIndent);
                lines[j] = lines[j].substr(lineIndent);
            }
        }
        callSrc = lines.join("\n");
    }
    return callSrc;
};

CallAnalyzer.prototype._addToSourceIndex = function() {
    var pos = Ast.getSrcCodePosFromEntry(this.callInfo.astEntry), callSrc = this.src.substring(pos.start, pos.end + 1);
    callSrc = this._reformatCallSrc(callSrc, pos.start);
    this.sourceIndex.push(callSrc);
    var idx = this.sourceIndex.length - 1;
    this.callInfo.args.push([ "string", Common.SOURCE_INDEX_ARG_PREFIX + idx ]);
    this.astWasModified = true;
};

CallAnalyzer.prototype._analyzeActionFuncCall = function() {
    if (this.isSharedCode) this._err(ErrCodes.ACTION_FUNC_CALL_IN_SHARED_CODE); else if (!Ast.isPathMatch(Common.ACTION_FUNC_AST_PATH, this.callInfo.astPath, true)) this._err(ErrCodes.ACTION_FUNC_IS_NOT_A_LAST_ENTRY); else this._addToSourceIndex();
};

CallAnalyzer.prototype.run = function() {
    var analyzer = this;
    this._walkCalls(function() {
        if (analyzer._isActionFuncCall()) analyzer._analyzeActionFuncCall(); else if (!analyzer.isSharedCode && analyzer._isAsyncFuncCall()) analyzer._err(ErrCodes.ASYNC_FUNC_CALL); else if (analyzer._isAssertionCall()) analyzer._addToSourceIndex();
    });
    return this.astWasModified;
};

exports.run = function(ast, filename, errs, isSharedCode, sourceIndex, src) {
    var analyzer = new CallAnalyzer(ast, filename, errs, isSharedCode, sourceIndex, src);
    return analyzer.run();
};