var path = require("path"), fs = require("fs"), util = require("util"), astProcessor = require("uglify-js").uglify, javascriptParser = require("uglify-js").parser, async = require("async"), Common = require("./common"), Hammerhead = require("./../../hammerhead"), Ast = require("./ast"), CallAnalyzer = require("./analysis/call_analyzer"), StepsAnalyzer = require("./analysis/steps_analyzer"), RequireAnalyzer = require("./analysis/require_analyzer"), ErrCodes = require("./err_codes");

function multySplice(arr, index, deleteCount, itemsToInsert) {
    var args = [ index, deleteCount ].concat(itemsToInsert);
    arr.splice.apply(arr, args);
}

var Compiler = module.exports = function(filename, modules, requiresDescriptorCache, sourceIndex) {
    this.walker = astProcessor.ast_walker();
    this.filename = filename;
    this.src = null;
    this.workingDir = path.dirname(this.filename);
    this.modules = modules;
    this.requiresDescriptorCache = requiresDescriptorCache || {};
    this.sourceIndex = sourceIndex || [];
    this.requires = [];
    this.line = 0;
    this.errs = [];
    this.okFlag = true;
    this.rawTestsStepData = {};
    this.rawMixinsStepData = {};
    this.out = {
        fixture: "",
        page: "",
        authCredentials: null,
        requireJs: "",
        remainderJs: "",
        testsStepData: {},
        workingDir: this.workingDir,
        testGroupMap: {}
    };
    this.testAnalyzer = new StepsAnalyzer(false, this.rawTestsStepData, this.errs, this.sourceIndex);
    this.mixinAnalyzer = new StepsAnalyzer(true, this.rawMixinsStepData, this.errs, this.sourceIndex);
};

Object.defineProperties(Compiler.prototype, {
    ok: {
        get: function() {
            return !this.errs.length && this.okFlag;
        },
        set: function(value) {
            this.okFlag = value;
        }
    }
});

Compiler.prototype._err = function(code, filename, line, additionalFields) {
    this.errs.push(Common.createErrorObj(code, filename, line, additionalFields));
};

Compiler.prototype._fixtureErr = function(code, line, additionalFields) {
    this._err(code, this.filename, line, additionalFields);
};

Compiler.prototype._addRequire = function(require) {
    if (this.requires.indexOf(require) > -1) this._fixtureErr(ErrCodes.REQUIRED_FILE_ALREADY_INCLUDED, this.line, {
        req: require
    }); else this.requires.push(require);
};

Compiler.prototype._compileDirective = function(match) {
    switch (match[1]) {
      case Common.AUTH_DIRECTIVE_LVALUE:
        if (this.out.authCredentials) {
            this._fixtureErr(ErrCodes.AUTH_DIRECTIVE_REDEFINITION, this.line);
            break;
        }
        var credentials = Common.AUTH_CREDENTIALS_REGEXP.exec(match[2]);
        if (!credentials || credentials.length < 3) {
            this._fixtureErr(ErrCodes.INVALID_NETWORK_AUTHENTICATION_CREDENTIALS_FORMAT, this.line);
            break;
        }
        this.out.authCredentials = {
            username: credentials[1],
            password: credentials[2]
        };
        break;

      case Common.FIXTURE_DIRECTIVE_LVALUE:
        if (this.out.fixture) {
            this._fixtureErr(ErrCodes.FIXTURE_DIRECTIVE_REDEFINITION, this.line);
            break;
        }
        this.out.fixture = match[2];
        break;

      case Common.PAGE_DIRECTIVE_LVALUE:
        if (this.out.page) {
            this._fixtureErr(ErrCodes.PAGE_DIRECTIVE_REDEFINITION, this.line);
            break;
        }
        this.out.page = match[2];
        break;

      case Common.REQUIRE_DIRECTIVE_LVALUE:
        if (match[2].indexOf(Common.MODULE_PREFIX) === 0) {
            var moduleName = match[2].slice(1), moduleFiles = this.modules && this.modules[moduleName];
            if (!moduleFiles) {
                this._fixtureErr(ErrCodes.MODULE_NOT_FOUND, this.line, {
                    moduleName: moduleName
                });
                break;
            }
            var compiler = this;
            moduleFiles.forEach(function(moduleFile) {
                compiler._addRequire(moduleFile);
            });
            break;
        }
        var require = path.join(this.workingDir, match[2]);
        this._addRequire(require);
        break;

      default:
        return false;
    }
    if (!Ast.isPathMatch(Common.DIRECTIVE_EXPRESSION_AST_PATH, this.walker.stack())) this._fixtureErr(ErrCodes.MISPLACED_DIRECTIVE, this.line);
    return true;
};

Compiler.prototype._getRemainderCode = function(ast) {
    var remainderAst = Ast.getRemainderAst(ast);
    if (remainderAst) {
        CallAnalyzer.run(remainderAst, this.filename, this.errs, true, this.sourceIndex, this.src);
        if (this.ok) {
            var remainderCode = astProcessor.gen_code(remainderAst, {
                beautify: true
            });
            return Hammerhead.wrapDomAccessors(remainderCode, true);
        }
    }
    return "";
};

Compiler.prototype._analyzeAst = function(ast) {
    var compiler = this;
    this.walker.with_walkers({
        string: function() {
            var astPath = compiler.walker.stack(), topStatement = astPath[1][0];
            compiler.line = Ast.getCurrentSrcLineNum(astPath);
            var isMixinDeclaration = this[1] === Common.MIXIN_DECLARATION_MARKER, isTestDeclaration = this[1] === Common.TEST_DECLARATION_MARKER;
            if (isMixinDeclaration || isTestDeclaration) {
                topStatement.remove = true;
                var analyzer = isMixinDeclaration ? compiler.mixinAnalyzer : compiler.testAnalyzer;
                analyzer.run(compiler.walker.stack(), compiler.filename, compiler.src);
                return;
            }
            var match = Common.DIRECTIVE_EXPRESSION_PATTERN.exec(this[1]);
            if (match) {
                var success = compiler._compileDirective(match);
                topStatement.remove = topStatement.remove || success;
            }
        }
    }, function() {
        compiler.walker.walk(ast);
    });
};

Compiler.prototype._mergeRequireMixins = function(requireDescriptor) {
    var compiler = this;
    Object.keys(requireDescriptor.rawMixinsStepData).forEach(function(name) {
        if (compiler.rawMixinsStepData[name]) {
            compiler._fixtureErr(ErrCodes.DUPLICATE_MIXIN_NAME_IN_REQUIRE, null, {
                name: name,
                defFilename1: requireDescriptor.filename,
                defFilename2: compiler.rawMixinsStepData[name].reqFilename || compiler.filename
            });
        } else {
            compiler.rawMixinsStepData[name] = requireDescriptor.rawMixinsStepData[name];
            compiler.rawMixinsStepData[name].reqFilename = requireDescriptor.filename;
        }
    });
};

Compiler.prototype._analyzeRequires = function(callback) {
    var compiler = this, descriptorReaders = [];
    this.requires.forEach(function(require) {
        descriptorReaders.push(function(readerCallback) {
            if (compiler.requiresDescriptorCache[require]) {
                var descriptor = compiler.requiresDescriptorCache[require];
                compiler.ok = compiler.ok && !descriptor.hasErrs;
                readerCallback(null, descriptor);
            } else {
                RequireAnalyzer.run(require, compiler.filename, compiler.sourceIndex, function(errs, descriptor) {
                    compiler.errs = compiler.errs.concat(errs);
                    compiler.requiresDescriptorCache[require] = descriptor;
                    readerCallback(null, descriptor);
                });
            }
        });
    });
    async.parallel(descriptorReaders, function(asyncErr, requireDescriptors) {
        requireDescriptors.forEach(function(descriptor) {
            compiler._mergeRequireMixins(descriptor);
            if (compiler.ok) compiler.out.requireJs += descriptor.jsCode;
        });
        callback();
    });
};

Compiler.prototype._insertMixins = function(testStepData) {
    var stepCount = testStepData.names.length;
    for (var i = 0; i < stepCount; i++) {
        var ast = testStepData.asts[i];
        if (ast.isMixinInsertionPoint) {
            var mixinStepData = this.rawMixinsStepData[ast.mixinName];
            if (!mixinStepData) {
                this._fixtureErr(ErrCodes.UNDEFINED_MIXIN_USED, ast.line, {
                    mixinName: ast.mixinName
                });
                continue;
            }
            var mixinStepNames = [], stepName = testStepData.names[i];
            for (var j = 0; j < mixinStepData.names.length; j++) mixinStepNames.push(stepName + Common.TEST_MIXIN_STEP_NAME_SEPARATOR + mixinStepData.names[j]);
            multySplice(testStepData.names, i, 1, mixinStepNames);
            multySplice(testStepData.asts, i, 1, mixinStepData.asts);
            i += mixinStepNames.length - 1;
            stepCount = testStepData.names.length;
        }
    }
};

Compiler.prototype._populateTestCases = function(testName, testStepData) {
    var compiler = this, cases = testStepData.testCasesDirectiveAst[1];
    cases.forEach(function(testCase, index) {
        var fields = testCase[1], caseName = null, initStats = [];
        fields.forEach(function(field) {
            var fieldName = field[0];
            if (fieldName === Common.TEST_CASE_NAME_FIELD) caseName = field[1][1]; else initStats.push([ "stat", [ "assign", true, [ "sub", [ "name", "this" ], [ "string", fieldName ] ], field[1] ] ]);
        });
        var initStepAst = [ "function", null, [], initStats ], genStepData = {
            names: [ Common.TEST_CASE_INIT_STEP_NAME ].concat(testStepData.names),
            asts: [ initStepAst ].concat(testStepData.asts)
        }, genTestName = testName + Common.TEST_CASE_NAME_SEPARATOR + (caseName || util.format(Common.TEST_CASE_DEFAULT_NAME_PATTERN, index));
        compiler.out.testGroupMap[genTestName] = testName;
        compiler._addOutputTestStepData(genTestName, genStepData);
    });
};

Compiler.prototype._addOutputTestStepData = function(testName, testStepData) {
    var js = astProcessor.gen_code([ "array", testStepData.asts ], {
        beautify: true
    });
    this.out.testsStepData[testName] = {
        names: testStepData.names,
        js: Hammerhead.wrapDomAccessors(js, true)
    };
};

Compiler.prototype._compileTestsStepData = function() {
    var compiler = this, testNames = Object.keys(this.rawTestsStepData);
    testNames.forEach(function(testName) {
        var testStepData = compiler.rawTestsStepData[testName];
        compiler._insertMixins(testStepData);
        if (compiler.ok) {
            if (testStepData.testCasesDirectiveAst) compiler._populateTestCases(testName, testStepData); else compiler._addOutputTestStepData(testName, testStepData);
        }
    });
};

Compiler.prototype._parseExternalTestCases = function(data) {
    var ast = null;
    try {
        ast = javascriptParser.parse(data.toString().trim(), false, true);
    } catch (parserErr) {
        return null;
    }
    return ast && ast[1] && ast[1][0] && ast[1][0][1];
};

Compiler.prototype._validateTestCase = function(caseAst, filename, namesMap) {
    if (caseAst[0].name !== "object") {
        this._err(ErrCodes.TEST_CASE_IS_NOT_AN_OBJECT, filename, Ast.getCurrentSrcLineNum(caseAst));
        return;
    }
    var fields = caseAst[1];
    if (!fields.length) {
        this._err(ErrCodes.TEST_CASE_DOESNT_CONTAIN_ANY_FIELDS, filename, Ast.getCurrentSrcLineNum(caseAst));
        return;
    }
    var nameField = fields.filter(function(field) {
        return field[0] === Common.TEST_CASE_NAME_FIELD;
    })[0];
    if (nameField) {
        var nameFieldValue = nameField[1];
        if (nameFieldValue[0].name !== "string") {
            this._err(ErrCodes.TEST_CASE_NAME_IS_NOT_A_STRING, filename, Ast.getCurrentSrcLineNum(nameField));
            return;
        }
        var testCaseName = nameFieldValue[1];
        if (namesMap[testCaseName]) this._err(ErrCodes.DUPLICATE_TEST_CASE_NAME, filename, Ast.getCurrentSrcLineNum(nameField), {
            testCaseName: testCaseName
        }); else namesMap[testCaseName] = true;
    }
};

Compiler.prototype._validateTestCaseListAst = function(ast, filename) {
    if (!ast || !ast[0] || ast[0].name !== "array") {
        this._err(ErrCodes.TEST_CASES_LIST_IS_NOT_ARRAY, filename, ast ? Ast.getCurrentSrcLineNum(ast) : 1);
        return;
    }
    var cases = ast[1];
    if (!cases.length) {
        this._err(ErrCodes.TEST_CASES_LIST_IS_EMPTY, filename, Ast.getCurrentSrcLineNum(ast));
        return;
    }
    var compiler = this, namesMap = [];
    cases.forEach(function(caseAst) {
        compiler._validateTestCase(caseAst, filename, namesMap);
    });
};

Compiler.prototype._createExternalTestCasesAnalyzer = function(testCasesPath, refTestsStepData) {
    var compiler = this;
    return function(readerCallback) {
        fs.readFile(testCasesPath, function(readErr, data) {
            if (readErr) compiler._fixtureErr(ErrCodes.FAILED_TO_READ_EXTERNAL_TEST_CASES, 0, {
                testCasesPath: testCasesPath
            }); else {
                var ast = compiler._parseExternalTestCases(data);
                compiler._validateTestCaseListAst(ast, testCasesPath);
                refTestsStepData.forEach(function(testStepData) {
                    testStepData.testCasesDirectiveAst = ast;
                });
            }
            readerCallback();
        });
    };
};

Compiler.prototype._prepareTestCases = function(callback) {
    var compiler = this, externalTestCases = {}, externalTestCasesAnalyzers = [];
    Object.keys(this.rawTestsStepData).forEach(function(testName) {
        var testStepData = compiler.rawTestsStepData[testName];
        if (testStepData.testCasesDirectiveAst) {
            if (testStepData.testCasesDirectiveAst[0].name === "string") {
                var testCasesPath = path.join(compiler.workingDir, testStepData.testCasesDirectiveAst[1]);
                testStepData.testCasesDirectiveAst = testCasesPath;
                if (!externalTestCases[testCasesPath]) externalTestCases[testCasesPath] = [];
                externalTestCases[testCasesPath].push(testStepData);
            } else compiler._validateTestCaseListAst(testStepData.testCasesDirectiveAst, compiler.filename);
        }
    });
    Object.keys(externalTestCases).forEach(function(testCasesPath) {
        externalTestCasesAnalyzers.push(compiler._createExternalTestCasesAnalyzer(testCasesPath, externalTestCases[testCasesPath]));
    });
    async.parallel(externalTestCasesAnalyzers, callback);
};

Compiler.prototype.compile = function(callback) {
    var compiler = this;
    Ast.construct(this.filename, null, function(parseErr, ast, src) {
        if (parseErr) callback([ parseErr ]); else {
            compiler.src = src;
            compiler._analyzeAst(ast);
            if (!compiler.out.fixture) compiler._fixtureErr(ErrCodes.FIXTURE_DIRECTIVE_IS_UNDEFINED);
            if (!compiler.out.page) compiler._fixtureErr(ErrCodes.PAGE_DIRECTIVE_IS_UNDEFINED);
            compiler.out.remainderJs = compiler._getRemainderCode(ast);
            compiler._analyzeRequires(function() {
                compiler._prepareTestCases(function() {
                    compiler._compileTestsStepData();
                    if (compiler.ok) callback(null, compiler.out); else callback(compiler.errs);
                });
            });
        }
    });
};