(function() {
    var JSParsingTools = {};
    var acornExports = {};
    (function(exports) {
        (function(root, mod) {
            if (typeof exports == "object" && typeof module == "object") return mod(exports);
            if (typeof define == "function" && define.amd) return define([ "exports" ], mod);
            mod(root.acorn || (root.acorn = {}));
        })(this, function(exports) {
            "use strict";
            exports.version = "0.4.1";
            var options, input, inputLen, sourceFile;
            exports.parse = function(inpt, opts) {
                input = String(inpt);
                inputLen = input.length;
                setOptions(opts);
                initTokenState();
                return parseTopLevel(options.program);
            };
            var defaultOptions = exports.defaultOptions = {
                ecmaVersion: 5,
                strictSemicolons: false,
                allowTrailingCommas: true,
                forbidReserved: false,
                locations: false,
                onComment: null,
                ranges: false,
                program: null,
                sourceFile: null,
                directSourceFile: null
            };
            function setOptions(opts) {
                options = opts || {};
                for (var opt in defaultOptions) if (!Object.prototype.hasOwnProperty.call(options, opt)) options[opt] = defaultOptions[opt];
                sourceFile = options.sourceFile || null;
            }
            var getLineInfo = exports.getLineInfo = function(input, offset) {
                for (var line = 1, cur = 0; ;) {
                    lineBreak.lastIndex = cur;
                    var match = lineBreak.exec(input);
                    if (match && match.index < offset) {
                        ++line;
                        cur = match.index + match[0].length;
                    } else break;
                }
                return {
                    line: line,
                    column: offset - cur
                };
            };
            exports.tokenize = function(inpt, opts) {
                input = String(inpt);
                inputLen = input.length;
                setOptions(opts);
                initTokenState();
                var t = {};
                function getToken(forceRegexp) {
                    readToken(forceRegexp);
                    t.start = tokStart;
                    t.end = tokEnd;
                    t.startLoc = tokStartLoc;
                    t.endLoc = tokEndLoc;
                    t.type = tokType;
                    t.value = tokVal;
                    return t;
                }
                getToken.jumpTo = function(pos, reAllowed) {
                    tokPos = pos;
                    if (options.locations) {
                        tokCurLine = 1;
                        tokLineStart = lineBreak.lastIndex = 0;
                        var match;
                        while ((match = lineBreak.exec(input)) && match.index < pos) {
                            ++tokCurLine;
                            tokLineStart = match.index + match[0].length;
                        }
                    }
                    tokRegexpAllowed = reAllowed;
                    skipSpace();
                };
                return getToken;
            };
            var tokPos;
            var tokStart, tokEnd;
            var tokStartLoc, tokEndLoc;
            var tokType, tokVal;
            var tokRegexpAllowed;
            var tokCurLine, tokLineStart;
            var lastStart, lastEnd, lastEndLoc;
            var inFunction, labels, strict;
            function raise(pos, message) {
                var loc = getLineInfo(input, pos);
                message += " (" + loc.line + ":" + loc.column + ")";
                var err = new SyntaxError(message);
                err.pos = pos;
                err.loc = loc;
                err.raisedAt = tokPos;
                throw err;
            }
            var empty = [];
            var _num = {
                type: "num"
            }, _regexp = {
                type: "regexp"
            }, _string = {
                type: "string"
            };
            var _name = {
                type: "name"
            }, _eof = {
                type: "eof"
            };
            var _break = {
                keyword: "break"
            }, _case = {
                keyword: "case",
                beforeExpr: true
            }, _catch = {
                keyword: "catch"
            };
            var _continue = {
                keyword: "continue"
            }, _debugger = {
                keyword: "debugger"
            }, _default = {
                keyword: "default"
            };
            var _do = {
                keyword: "do",
                isLoop: true
            }, _else = {
                keyword: "else",
                beforeExpr: true
            };
            var _finally = {
                keyword: "finally"
            }, _for = {
                keyword: "for",
                isLoop: true
            }, _function = {
                keyword: "function"
            };
            var _if = {
                keyword: "if"
            }, _return = {
                keyword: "return",
                beforeExpr: true
            }, _switch = {
                keyword: "switch"
            };
            var _throw = {
                keyword: "throw",
                beforeExpr: true
            }, _try = {
                keyword: "try"
            }, _var = {
                keyword: "var"
            };
            var _while = {
                keyword: "while",
                isLoop: true
            }, _with = {
                keyword: "with"
            }, _new = {
                keyword: "new",
                beforeExpr: true
            };
            var _this = {
                keyword: "this"
            };
            var _null = {
                keyword: "null",
                atomValue: null
            }, _true = {
                keyword: "true",
                atomValue: true
            };
            var _false = {
                keyword: "false",
                atomValue: false
            };
            var _in = {
                keyword: "in",
                binop: 7,
                beforeExpr: true
            };
            var keywordTypes = {
                "break": _break,
                "case": _case,
                "catch": _catch,
                "continue": _continue,
                "debugger": _debugger,
                "default": _default,
                "do": _do,
                "else": _else,
                "finally": _finally,
                "for": _for,
                "function": _function,
                "if": _if,
                "return": _return,
                "switch": _switch,
                "throw": _throw,
                "try": _try,
                "var": _var,
                "while": _while,
                "with": _with,
                "null": _null,
                "true": _true,
                "false": _false,
                "new": _new,
                "in": _in,
                "instanceof": {
                    keyword: "instanceof",
                    binop: 7,
                    beforeExpr: true
                },
                "this": _this,
                "typeof": {
                    keyword: "typeof",
                    prefix: true,
                    beforeExpr: true
                },
                "void": {
                    keyword: "void",
                    prefix: true,
                    beforeExpr: true
                },
                "delete": {
                    keyword: "delete",
                    prefix: true,
                    beforeExpr: true
                }
            };
            var _bracketL = {
                type: "[",
                beforeExpr: true
            }, _bracketR = {
                type: "]"
            }, _braceL = {
                type: "{",
                beforeExpr: true
            };
            var _braceR = {
                type: "}"
            }, _parenL = {
                type: "(",
                beforeExpr: true
            }, _parenR = {
                type: ")"
            };
            var _comma = {
                type: ",",
                beforeExpr: true
            }, _semi = {
                type: ";",
                beforeExpr: true
            };
            var _colon = {
                type: ":",
                beforeExpr: true
            }, _dot = {
                type: "."
            }, _question = {
                type: "?",
                beforeExpr: true
            };
            var _slash = {
                binop: 10,
                beforeExpr: true
            }, _eq = {
                isAssign: true,
                beforeExpr: true
            };
            var _assign = {
                isAssign: true,
                beforeExpr: true
            };
            var _incDec = {
                postfix: true,
                prefix: true,
                isUpdate: true
            }, _prefix = {
                prefix: true,
                beforeExpr: true
            };
            var _logicalOR = {
                binop: 1,
                beforeExpr: true
            };
            var _logicalAND = {
                binop: 2,
                beforeExpr: true
            };
            var _bitwiseOR = {
                binop: 3,
                beforeExpr: true
            };
            var _bitwiseXOR = {
                binop: 4,
                beforeExpr: true
            };
            var _bitwiseAND = {
                binop: 5,
                beforeExpr: true
            };
            var _equality = {
                binop: 6,
                beforeExpr: true
            };
            var _relational = {
                binop: 7,
                beforeExpr: true
            };
            var _bitShift = {
                binop: 8,
                beforeExpr: true
            };
            var _plusMin = {
                binop: 9,
                prefix: true,
                beforeExpr: true
            };
            var _multiplyModulo = {
                binop: 10,
                beforeExpr: true
            };
            exports.tokTypes = {
                bracketL: _bracketL,
                bracketR: _bracketR,
                braceL: _braceL,
                braceR: _braceR,
                parenL: _parenL,
                parenR: _parenR,
                comma: _comma,
                semi: _semi,
                colon: _colon,
                dot: _dot,
                question: _question,
                slash: _slash,
                eq: _eq,
                name: _name,
                eof: _eof,
                num: _num,
                regexp: _regexp,
                string: _string
            };
            for (var kw in keywordTypes) exports.tokTypes["_" + kw] = keywordTypes[kw];
            function makePredicate(words) {
                words = words.split(" ");
                var f = "", cats = [];
                out: for (var i = 0; i < words.length; ++i) {
                    for (var j = 0; j < cats.length; ++j) if (cats[j][0].length == words[i].length) {
                        cats[j].push(words[i]);
                        continue out;
                    }
                    cats.push([ words[i] ]);
                }
                function compareTo(arr) {
                    if (arr.length == 1) return f += "return str === " + JSON.stringify(arr[0]) + ";";
                    f += "switch(str){";
                    for (var i = 0; i < arr.length; ++i) f += "case " + JSON.stringify(arr[i]) + ":";
                    f += "return true}return false;";
                }
                if (cats.length > 3) {
                    cats.sort(function(a, b) {
                        return b.length - a.length;
                    });
                    f += "switch(str.length){";
                    for (var i = 0; i < cats.length; ++i) {
                        var cat = cats[i];
                        f += "case " + cat[0].length + ":";
                        compareTo(cat);
                    }
                    f += "}";
                } else {
                    compareTo(words);
                }
                return new Function("str", f);
            }
            var isReservedWord3 = makePredicate("abstract boolean byte char class double enum export extends final float goto implements import int interface long native package private protected public short static super synchronized throws transient volatile");
            var isReservedWord5 = makePredicate("class enum extends super const export import");
            var isStrictReservedWord = makePredicate("implements interface let package private protected public static yield");
            var isStrictBadIdWord = makePredicate("eval arguments");
            var isKeyword = makePredicate("break case catch continue debugger default do else finally for function if return switch throw try var while with null true false instanceof typeof void delete new in this");
            var nonASCIIwhitespace = /[\u1680\u180e\u2000-\u200a\u202f\u205f\u3000\ufeff]/;
            var nonASCIIidentifierStartChars = "ªµºÀ-ÖØ-öø-ˁˆ-ˑˠ-ˤˬˮͰ-ʹͶͷͺ-ͽΆΈ-ΊΌΎ-ΡΣ-ϵϷ-ҁҊ-ԧԱ-Ֆՙա-ևא-תװ-ײؠ-يٮٯٱ-ۓەۥۦۮۯۺ-ۼۿܐܒ-ܯݍ-ޥޱߊ-ߪߴߵߺࠀ-ࠕࠚࠤࠨࡀ-ࡘࢠࢢ-ࢬऄ-हऽॐक़-ॡॱ-ॷॹ-ॿঅ-ঌএঐও-নপ-রলশ-হঽৎড়ঢ়য়-ৡৰৱਅ-ਊਏਐਓ-ਨਪ-ਰਲਲ਼ਵਸ਼ਸਹਖ਼-ੜਫ਼ੲ-ੴઅ-ઍએ-ઑઓ-નપ-રલળવ-હઽૐૠૡଅ-ଌଏଐଓ-ନପ-ରଲଳଵ-ହଽଡ଼ଢ଼ୟ-ୡୱஃஅ-ஊஎ-ஐஒ-கஙசஜஞடணதந-பம-ஹௐఅ-ఌఎ-ఐఒ-నప-ళవ-హఽౘౙౠౡಅ-ಌಎ-ಐಒ-ನಪ-ಳವ-ಹಽೞೠೡೱೲഅ-ഌഎ-ഐഒ-ഺഽൎൠൡൺ-ൿඅ-ඖක-නඳ-රලව-ෆก-ะาำเ-ๆກຂຄງຈຊຍດ-ທນ-ຟມ-ຣລວສຫອ-ະາຳຽເ-ໄໆໜ-ໟༀཀ-ཇཉ-ཬྈ-ྌက-ဪဿၐ-ၕၚ-ၝၡၥၦၮ-ၰၵ-ႁႎႠ-ჅჇჍა-ჺჼ-ቈቊ-ቍቐ-ቖቘቚ-ቝበ-ኈኊ-ኍነ-ኰኲ-ኵኸ-ኾዀዂ-ዅወ-ዖዘ-ጐጒ-ጕጘ-ፚᎀ-ᎏᎠ-Ᏼᐁ-ᙬᙯ-ᙿᚁ-ᚚᚠ-ᛪᛮ-ᛰᜀ-ᜌᜎ-ᜑᜠ-ᜱᝀ-ᝑᝠ-ᝬᝮ-ᝰក-ឳៗៜᠠ-ᡷᢀ-ᢨᢪᢰ-ᣵᤀ-ᤜᥐ-ᥭᥰ-ᥴᦀ-ᦫᧁ-ᧇᨀ-ᨖᨠ-ᩔᪧᬅ-ᬳᭅ-ᭋᮃ-ᮠᮮᮯᮺ-ᯥᰀ-ᰣᱍ-ᱏᱚ-ᱽᳩ-ᳬᳮ-ᳱᳵᳶᴀ-ᶿḀ-ἕἘ-Ἕἠ-ὅὈ-Ὅὐ-ὗὙὛὝὟ-ώᾀ-ᾴᾶ-ᾼιῂ-ῄῆ-ῌῐ-ΐῖ-Ίῠ-Ῥῲ-ῴῶ-ῼⁱⁿₐ-ₜℂℇℊ-ℓℕℙ-ℝℤΩℨK-ℭℯ-ℹℼ-ℿⅅ-ⅉⅎⅠ-ↈⰀ-Ⱞⰰ-ⱞⱠ-ⳤⳫ-ⳮⳲⳳⴀ-ⴥⴧⴭⴰ-ⵧⵯⶀ-ⶖⶠ-ⶦⶨ-ⶮⶰ-ⶶⶸ-ⶾⷀ-ⷆⷈ-ⷎⷐ-ⷖⷘ-ⷞⸯ々-〇〡-〩〱-〵〸-〼ぁ-ゖゝ-ゟァ-ヺー-ヿㄅ-ㄭㄱ-ㆎㆠ-ㆺㇰ-ㇿ㐀-䶵一-鿌ꀀ-ꒌꓐ-ꓽꔀ-ꘌꘐ-ꘟꘪꘫꙀ-ꙮꙿ-ꚗꚠ-ꛯꜗ-ꜟꜢ-ꞈꞋ-ꞎꞐ-ꞓꞠ-Ɦꟸ-ꠁꠃ-ꠅꠇ-ꠊꠌ-ꠢꡀ-ꡳꢂ-ꢳꣲ-ꣷꣻꤊ-ꤥꤰ-ꥆꥠ-ꥼꦄ-ꦲꧏꨀ-ꨨꩀ-ꩂꩄ-ꩋꩠ-ꩶꩺꪀ-ꪯꪱꪵꪶꪹ-ꪽꫀꫂꫛ-ꫝꫠ-ꫪꫲ-ꫴꬁ-ꬆꬉ-ꬎꬑ-ꬖꬠ-ꬦꬨ-ꬮꯀ-ꯢ가-힣ힰ-ퟆퟋ-ퟻ豈-舘並-龎ﬀ-ﬆﬓ-ﬗיִײַ-ﬨשׁ-זּטּ-לּמּנּסּףּפּצּ-ﮱﯓ-ﴽﵐ-ﶏﶒ-ﷇﷰ-ﷻﹰ-ﹴﹶ-ﻼＡ-Ｚａ-ｚｦ-ﾾￂ-ￇￊ-ￏￒ-ￗￚ-ￜ";
            var nonASCIIidentifierChars = "̀-ͯ҃-֑҇-ׇֽֿׁׂׅׄؐ-ؚؠ-ىٲ-ۓۧ-ۨۻ-ۼܰ-݊ࠀ-ࠔࠛ-ࠣࠥ-ࠧࠩ-࠭ࡀ-ࡗࣤ-ࣾऀ-ःऺ-़ा-ॏ॑-ॗॢ-ॣ०-९ঁ-ঃ়া-ৄেৈৗয়-ৠਁ-ਃ਼ਾ-ੂੇੈੋ-੍ੑ੦-ੱੵઁ-ઃ઼ા-ૅે-ૉો-્ૢ-ૣ૦-૯ଁ-ଃ଼ା-ୄେୈୋ-୍ୖୗୟ-ୠ୦-୯ஂா-ூெ-ைொ-்ௗ௦-௯ఁ-ఃె-ైొ-్ౕౖౢ-ౣ౦-౯ಂಃ಼ಾ-ೄೆ-ೈೊ-್ೕೖೢ-ೣ೦-೯ംഃെ-ൈൗൢ-ൣ൦-൯ංඃ්ා-ුූෘ-ෟෲෳิ-ฺเ-ๅ๐-๙ິ-ູ່-ໍ໐-໙༘༙༠-༩༹༵༷ཁ-ཇཱ-྄྆-྇ྍ-ྗྙ-ྼ࿆က-ဩ၀-၉ၧ-ၭၱ-ၴႂ-ႍႏ-ႝ፝-፟ᜎ-ᜐᜠ-ᜰᝀ-ᝐᝲᝳក-ឲ៝០-៩᠋-᠍᠐-᠙ᤠ-ᤫᤰ-᤻ᥑ-ᥭᦰ-ᧀᧈ-ᧉ᧐-᧙ᨀ-ᨕᨠ-ᩓ᩠-᩿᩼-᪉᪐-᪙ᭆ-ᭋ᭐-᭙᭫-᭳᮰-᮹᯦-᯳ᰀ-ᰢ᱀-᱉ᱛ-ᱽ᳐-᳒ᴀ-ᶾḁ-ἕ‌‍‿⁀⁔⃐-⃥⃜⃡-⃰ⶁ-ⶖⷠ-ⷿ〡-〨゙゚Ꙁ-ꙭꙴ-꙽ꚟ꛰-꛱ꟸ-ꠀ꠆ꠋꠣ-ꠧꢀ-ꢁꢴ-꣄꣐-꣙ꣳ-ꣷ꤀-꤉ꤦ-꤭ꤰ-ꥅꦀ-ꦃ꦳-꧀ꨀ-ꨧꩀ-ꩁꩌ-ꩍ꩐-꩙ꩻꫠ-ꫩꫲ-ꫳꯀ-ꯡ꯬꯭꯰-꯹ﬠ-ﬨ︀-️︠-︦︳︴﹍-﹏０-９＿";
            var nonASCIIidentifierStart = new RegExp("[" + nonASCIIidentifierStartChars + "]");
            var nonASCIIidentifier = new RegExp("[" + nonASCIIidentifierStartChars + nonASCIIidentifierChars + "]");
            var newline = /[\n\r\u2028\u2029]/;
            var lineBreak = /\r\n|[\n\r\u2028\u2029]/g;
            var isIdentifierStart = exports.isIdentifierStart = function(code) {
                if (code < 65) return code === 36;
                if (code < 91) return true;
                if (code < 97) return code === 95;
                if (code < 123) return true;
                return code >= 170 && nonASCIIidentifierStart.test(String.fromCharCode(code));
            };
            var isIdentifierChar = exports.isIdentifierChar = function(code) {
                if (code < 48) return code === 36;
                if (code < 58) return true;
                if (code < 65) return false;
                if (code < 91) return true;
                if (code < 97) return code === 95;
                if (code < 123) return true;
                return code >= 170 && nonASCIIidentifier.test(String.fromCharCode(code));
            };
            function line_loc_t() {
                this.line = tokCurLine;
                this.column = tokPos - tokLineStart;
            }
            function initTokenState() {
                tokCurLine = 1;
                tokPos = tokLineStart = 0;
                tokRegexpAllowed = true;
                skipSpace();
            }
            function finishToken(type, val) {
                tokEnd = tokPos;
                if (options.locations) tokEndLoc = new line_loc_t();
                tokType = type;
                skipSpace();
                tokVal = val;
                tokRegexpAllowed = type.beforeExpr;
            }
            function skipBlockComment() {
                var startLoc = options.onComment && options.locations && new line_loc_t();
                var start = tokPos, end = input.indexOf("*/", tokPos += 2);
                if (end === -1) raise(tokPos - 2, "Unterminated comment");
                tokPos = end + 2;
                if (options.locations) {
                    lineBreak.lastIndex = start;
                    var match;
                    while ((match = lineBreak.exec(input)) && match.index < tokPos) {
                        ++tokCurLine;
                        tokLineStart = match.index + match[0].length;
                    }
                }
                if (options.onComment) options.onComment(true, input.slice(start + 2, end), start, tokPos, startLoc, options.locations && new line_loc_t());
            }
            function skipLineComment() {
                var start = tokPos;
                var startLoc = options.onComment && options.locations && new line_loc_t();
                var ch = input.charCodeAt(tokPos += 2);
                while (tokPos < inputLen && ch !== 10 && ch !== 13 && ch !== 8232 && ch !== 8233) {
                    ++tokPos;
                    ch = input.charCodeAt(tokPos);
                }
                if (options.onComment) options.onComment(false, input.slice(start + 2, tokPos), start, tokPos, startLoc, options.locations && new line_loc_t());
            }
            function skipSpace() {
                while (tokPos < inputLen) {
                    var ch = input.charCodeAt(tokPos);
                    if (ch === 32) {
                        ++tokPos;
                    } else if (ch === 13) {
                        ++tokPos;
                        var next = input.charCodeAt(tokPos);
                        if (next === 10) {
                            ++tokPos;
                        }
                        if (options.locations) {
                            ++tokCurLine;
                            tokLineStart = tokPos;
                        }
                    } else if (ch === 10 || ch === 8232 || ch === 8233) {
                        ++tokPos;
                        if (options.locations) {
                            ++tokCurLine;
                            tokLineStart = tokPos;
                        }
                    } else if (ch > 8 && ch < 14) {
                        ++tokPos;
                    } else if (ch === 47) {
                        var next = input.charCodeAt(tokPos + 1);
                        if (next === 42) {
                            skipBlockComment();
                        } else if (next === 47) {
                            skipLineComment();
                        } else break;
                    } else if (ch === 160) {
                        ++tokPos;
                    } else if (ch >= 5760 && nonASCIIwhitespace.test(String.fromCharCode(ch))) {
                        ++tokPos;
                    } else {
                        break;
                    }
                }
            }
            function readToken_dot() {
                var next = input.charCodeAt(tokPos + 1);
                if (next >= 48 && next <= 57) return readNumber(true);
                ++tokPos;
                return finishToken(_dot);
            }
            function readToken_slash() {
                var next = input.charCodeAt(tokPos + 1);
                if (tokRegexpAllowed) {
                    ++tokPos;
                    return readRegexp();
                }
                if (next === 61) return finishOp(_assign, 2);
                return finishOp(_slash, 1);
            }
            function readToken_mult_modulo() {
                var next = input.charCodeAt(tokPos + 1);
                if (next === 61) return finishOp(_assign, 2);
                return finishOp(_multiplyModulo, 1);
            }
            function readToken_pipe_amp(code) {
                var next = input.charCodeAt(tokPos + 1);
                if (next === code) return finishOp(code === 124 ? _logicalOR : _logicalAND, 2);
                if (next === 61) return finishOp(_assign, 2);
                return finishOp(code === 124 ? _bitwiseOR : _bitwiseAND, 1);
            }
            function readToken_caret() {
                var next = input.charCodeAt(tokPos + 1);
                if (next === 61) return finishOp(_assign, 2);
                return finishOp(_bitwiseXOR, 1);
            }
            function readToken_plus_min(code) {
                var next = input.charCodeAt(tokPos + 1);
                if (next === code) {
                    if (next == 45 && input.charCodeAt(tokPos + 2) == 62 && newline.test(input.slice(lastEnd, tokPos))) {
                        tokPos += 3;
                        skipLineComment();
                        skipSpace();
                        return readToken();
                    }
                    return finishOp(_incDec, 2);
                }
                if (next === 61) return finishOp(_assign, 2);
                return finishOp(_plusMin, 1);
            }
            function readToken_lt_gt(code) {
                var next = input.charCodeAt(tokPos + 1);
                var size = 1;
                if (next === code) {
                    size = code === 62 && input.charCodeAt(tokPos + 2) === 62 ? 3 : 2;
                    if (input.charCodeAt(tokPos + size) === 61) return finishOp(_assign, size + 1);
                    return finishOp(_bitShift, size);
                }
                if (next == 33 && code == 60 && input.charCodeAt(tokPos + 2) == 45 && input.charCodeAt(tokPos + 3) == 45) {
                    tokPos += 4;
                    skipLineComment();
                    skipSpace();
                    return readToken();
                }
                if (next === 61) size = input.charCodeAt(tokPos + 2) === 61 ? 3 : 2;
                return finishOp(_relational, size);
            }
            function readToken_eq_excl(code) {
                var next = input.charCodeAt(tokPos + 1);
                if (next === 61) return finishOp(_equality, input.charCodeAt(tokPos + 2) === 61 ? 3 : 2);
                return finishOp(code === 61 ? _eq : _prefix, 1);
            }
            function getTokenFromCode(code) {
                switch (code) {
                  case 46:
                    return readToken_dot();

                  case 40:
                    ++tokPos;
                    return finishToken(_parenL);

                  case 41:
                    ++tokPos;
                    return finishToken(_parenR);

                  case 59:
                    ++tokPos;
                    return finishToken(_semi);

                  case 44:
                    ++tokPos;
                    return finishToken(_comma);

                  case 91:
                    ++tokPos;
                    return finishToken(_bracketL);

                  case 93:
                    ++tokPos;
                    return finishToken(_bracketR);

                  case 123:
                    ++tokPos;
                    return finishToken(_braceL);

                  case 125:
                    ++tokPos;
                    return finishToken(_braceR);

                  case 58:
                    ++tokPos;
                    return finishToken(_colon);

                  case 63:
                    ++tokPos;
                    return finishToken(_question);

                  case 48:
                    var next = input.charCodeAt(tokPos + 1);
                    if (next === 120 || next === 88) return readHexNumber();

                  case 49:
                  case 50:
                  case 51:
                  case 52:
                  case 53:
                  case 54:
                  case 55:
                  case 56:
                  case 57:
                    return readNumber(false);

                  case 34:
                  case 39:
                    return readString(code);

                  case 47:
                    return readToken_slash(code);

                  case 37:
                  case 42:
                    return readToken_mult_modulo();

                  case 124:
                  case 38:
                    return readToken_pipe_amp(code);

                  case 94:
                    return readToken_caret();

                  case 43:
                  case 45:
                    return readToken_plus_min(code);

                  case 60:
                  case 62:
                    return readToken_lt_gt(code);

                  case 61:
                  case 33:
                    return readToken_eq_excl(code);

                  case 126:
                    return finishOp(_prefix, 1);
                }
                return false;
            }
            function readToken(forceRegexp) {
                if (!forceRegexp) tokStart = tokPos; else tokPos = tokStart + 1;
                if (options.locations) tokStartLoc = new line_loc_t();
                if (forceRegexp) return readRegexp();
                if (tokPos >= inputLen) return finishToken(_eof);
                var code = input.charCodeAt(tokPos);
                if (isIdentifierStart(code) || code === 92) return readWord();
                var tok = getTokenFromCode(code);
                if (tok === false) {
                    var ch = String.fromCharCode(code);
                    if (ch === "\\" || nonASCIIidentifierStart.test(ch)) return readWord();
                    raise(tokPos, "Unexpected character '" + ch + "'");
                }
                return tok;
            }
            function finishOp(type, size) {
                var str = input.slice(tokPos, tokPos + size);
                tokPos += size;
                finishToken(type, str);
            }
            function readRegexp() {
                var content = "", escaped, inClass, start = tokPos;
                for (;;) {
                    if (tokPos >= inputLen) raise(start, "Unterminated regular expression");
                    var ch = input.charAt(tokPos);
                    if (newline.test(ch)) raise(start, "Unterminated regular expression");
                    if (!escaped) {
                        if (ch === "[") inClass = true; else if (ch === "]" && inClass) inClass = false; else if (ch === "/" && !inClass) break;
                        escaped = ch === "\\";
                    } else escaped = false;
                    ++tokPos;
                }
                var content = input.slice(start, tokPos);
                ++tokPos;
                var mods = readWord1();
                if (mods && !/^[gmsiy]*$/.test(mods)) raise(start, "Invalid regexp flag");
                return finishToken(_regexp, new RegExp(content, mods));
            }
            function readInt(radix, len) {
                var start = tokPos, total = 0;
                for (var i = 0, e = len == null ? Infinity : len; i < e; ++i) {
                    var code = input.charCodeAt(tokPos), val;
                    if (code >= 97) val = code - 97 + 10; else if (code >= 65) val = code - 65 + 10; else if (code >= 48 && code <= 57) val = code - 48; else val = Infinity;
                    if (val >= radix) break;
                    ++tokPos;
                    total = total * radix + val;
                }
                if (tokPos === start || len != null && tokPos - start !== len) return null;
                return total;
            }
            function readHexNumber() {
                tokPos += 2;
                var val = readInt(16);
                if (val == null) raise(tokStart + 2, "Expected hexadecimal number");
                if (isIdentifierStart(input.charCodeAt(tokPos))) raise(tokPos, "Identifier directly after number");
                return finishToken(_num, val);
            }
            function readNumber(startsWithDot) {
                var start = tokPos, isFloat = false, octal = input.charCodeAt(tokPos) === 48;
                if (!startsWithDot && readInt(10) === null) raise(start, "Invalid number");
                if (input.charCodeAt(tokPos) === 46) {
                    ++tokPos;
                    readInt(10);
                    isFloat = true;
                }
                var next = input.charCodeAt(tokPos);
                if (next === 69 || next === 101) {
                    next = input.charCodeAt(++tokPos);
                    if (next === 43 || next === 45) ++tokPos;
                    if (readInt(10) === null) raise(start, "Invalid number");
                    isFloat = true;
                }
                if (isIdentifierStart(input.charCodeAt(tokPos))) raise(tokPos, "Identifier directly after number");
                var str = input.slice(start, tokPos), val;
                if (isFloat) val = parseFloat(str); else if (!octal || str.length === 1) val = parseInt(str, 10); else if (/[89]/.test(str) || strict) raise(start, "Invalid number"); else val = parseInt(str, 8);
                return finishToken(_num, val);
            }
            function readString(quote) {
                tokPos++;
                var out = "";
                for (;;) {
                    if (tokPos >= inputLen) raise(tokStart, "Unterminated string constant");
                    var ch = input.charCodeAt(tokPos);
                    if (ch === quote) {
                        ++tokPos;
                        return finishToken(_string, out);
                    }
                    if (ch === 92) {
                        ch = input.charCodeAt(++tokPos);
                        var octal = /^[0-7]+/.exec(input.slice(tokPos, tokPos + 3));
                        if (octal) octal = octal[0];
                        while (octal && parseInt(octal, 8) > 255) octal = octal.slice(0, -1);
                        if (octal === "0") octal = null;
                        ++tokPos;
                        if (octal) {
                            if (strict) raise(tokPos - 2, "Octal literal in strict mode");
                            out += String.fromCharCode(parseInt(octal, 8));
                            tokPos += octal.length - 1;
                        } else {
                            switch (ch) {
                              case 110:
                                out += "\n";
                                break;

                              case 114:
                                out += "\r";
                                break;

                              case 120:
                                out += String.fromCharCode(readHexChar(2));
                                break;

                              case 117:
                                out += String.fromCharCode(readHexChar(4));
                                break;

                              case 85:
                                out += String.fromCharCode(readHexChar(8));
                                break;

                              case 116:
                                out += "	";
                                break;

                              case 98:
                                out += "\b";
                                break;

                              case 118:
                                out += "";
                                break;

                              case 102:
                                out += "\f";
                                break;

                              case 48:
                                out += "\x00";
                                break;

                              case 13:
                                if (input.charCodeAt(tokPos) === 10) ++tokPos;

                              case 10:
                                if (options.locations) {
                                    tokLineStart = tokPos;
                                    ++tokCurLine;
                                }
                                break;

                              default:
                                out += String.fromCharCode(ch);
                                break;
                            }
                        }
                    } else {
                        if (ch === 13 || ch === 10 || ch === 8232 || ch === 8233) raise(tokStart, "Unterminated string constant");
                        out += String.fromCharCode(ch);
                        ++tokPos;
                    }
                }
            }
            function readHexChar(len) {
                var n = readInt(16, len);
                if (n === null) raise(tokStart, "Bad character escape sequence");
                return n;
            }
            var containsEsc;
            function readWord1() {
                containsEsc = false;
                var word, first = true, start = tokPos;
                for (;;) {
                    var ch = input.charCodeAt(tokPos);
                    if (isIdentifierChar(ch)) {
                        if (containsEsc) word += input.charAt(tokPos);
                        ++tokPos;
                    } else if (ch === 92) {
                        if (!containsEsc) word = input.slice(start, tokPos);
                        containsEsc = true;
                        if (input.charCodeAt(++tokPos) != 117) raise(tokPos, "Expecting Unicode escape sequence \\uXXXX");
                        ++tokPos;
                        var esc = readHexChar(4);
                        var escStr = String.fromCharCode(esc);
                        if (!escStr) raise(tokPos - 1, "Invalid Unicode escape");
                        if (!(first ? isIdentifierStart(esc) : isIdentifierChar(esc))) raise(tokPos - 4, "Invalid Unicode escape");
                        word += input.substr(tokPos - 6, 6);
                    } else {
                        break;
                    }
                    first = false;
                }
                return containsEsc ? word : input.slice(start, tokPos);
            }
            function readWord() {
                var word = readWord1();
                var type = _name;
                if (!containsEsc) {
                    if (isKeyword(word)) type = keywordTypes[word]; else if (options.forbidReserved && (options.ecmaVersion === 3 ? isReservedWord3 : isReservedWord5)(word) || strict && isStrictReservedWord(word)) raise(tokStart, "The keyword '" + word + "' is reserved");
                }
                return finishToken(type, word);
            }
            function next() {
                lastStart = tokStart;
                lastEnd = tokEnd;
                lastEndLoc = tokEndLoc;
                readToken();
            }
            function setStrict(strct) {
                strict = strct;
                tokPos = lastEnd;
                if (options.locations) {
                    while (tokPos < tokLineStart) {
                        tokLineStart = input.lastIndexOf("\n", tokLineStart - 2) + 1;
                        --tokCurLine;
                    }
                }
                skipSpace();
                readToken();
            }
            function node_t() {
                this.type = null;
                this.start = tokStart;
                this.end = null;
            }
            function node_loc_t() {
                this.start = tokStartLoc;
                this.end = null;
                if (sourceFile !== null) this.source = sourceFile;
            }
            function startNode() {
                var node = new node_t();
                if (options.locations) node.loc = new node_loc_t();
                if (options.directSourceFile) node.sourceFile = options.directSourceFile;
                if (options.ranges) node.range = [ tokStart, 0 ];
                return node;
            }
            function startNodeFrom(other) {
                var node = new node_t();
                node.start = other.start;
                if (options.locations) {
                    node.loc = new node_loc_t();
                    node.loc.start = other.loc.start;
                }
                if (options.ranges) node.range = [ other.range[0], 0 ];
                return node;
            }
            function finishNode(node, type) {
                node.type = type;
                node.end = lastEnd;
                if (options.locations) node.loc.end = lastEndLoc;
                if (options.ranges) node.range[1] = lastEnd;
                return node;
            }
            function isUseStrict(stmt) {
                return options.ecmaVersion >= 6 && stmt.type === "ExpressionStatement" && stmt.expression.type === "Literal" && stmt.expression.value === "use strict";
            }
            function eat(type) {
                if (tokType === type) {
                    next();
                    return true;
                }
            }
            function canInsertSemicolon() {
                return !options.strictSemicolons && (tokType === _eof || tokType === _braceR || newline.test(input.slice(lastEnd, tokStart)));
            }
            function semicolon() {
                if (!eat(_semi) && !canInsertSemicolon()) unexpected();
            }
            function expect(type) {
                if (tokType === type) next(); else unexpected();
            }
            function unexpected() {
                raise(tokStart, "Unexpected token");
            }
            function checkLVal(expr) {
                if (expr.type !== "Identifier" && expr.type !== "MemberExpression") raise(expr.start, "Assigning to rvalue");
                if (strict && expr.type === "Identifier" && isStrictBadIdWord(expr.name)) raise(expr.start, "Assigning to " + expr.name + " in strict mode");
            }
            function parseTopLevel(program) {
                lastStart = lastEnd = tokPos;
                if (options.locations) lastEndLoc = new line_loc_t();
                inFunction = strict = null;
                labels = [];
                readToken();
                var node = program || startNode(), first = true;
                if (!program) node.body = [];
                while (tokType !== _eof) {
                    var stmt = parseStatement();
                    node.body.push(stmt);
                    if (first && isUseStrict(stmt)) setStrict(true);
                    first = false;
                }
                return finishNode(node, "Program");
            }
            var loopLabel = {
                kind: "loop"
            }, switchLabel = {
                kind: "switch"
            };
            function parseStatement() {
                if (tokType === _slash || tokType === _assign && tokVal == "/=") readToken(true);
                var starttype = tokType, node = startNode();
                switch (starttype) {
                  case _break:
                  case _continue:
                    next();
                    var isBreak = starttype === _break;
                    if (eat(_semi) || canInsertSemicolon()) node.label = null; else if (tokType !== _name) unexpected(); else {
                        node.label = parseIdent();
                        semicolon();
                    }
                    for (var i = 0; i < labels.length; ++i) {
                        var lab = labels[i];
                        if (node.label == null || lab.name === node.label.name) {
                            if (lab.kind != null && (isBreak || lab.kind === "loop")) break;
                            if (node.label && isBreak) break;
                        }
                    }
                    if (i === labels.length) raise(node.start, "Unsyntactic " + starttype.keyword);
                    return finishNode(node, isBreak ? "BreakStatement" : "ContinueStatement");

                  case _debugger:
                    next();
                    semicolon();
                    return finishNode(node, "DebuggerStatement");

                  case _do:
                    next();
                    labels.push(loopLabel);
                    node.body = parseStatement();
                    labels.pop();
                    expect(_while);
                    node.test = parseParenExpression();
                    semicolon();
                    return finishNode(node, "DoWhileStatement");

                  case _for:
                    next();
                    labels.push(loopLabel);
                    expect(_parenL);
                    if (tokType === _semi) return parseFor(node, null);
                    if (tokType === _var) {
                        var init = startNode();
                        next();
                        parseVar(init, true);
                        finishNode(init, "VariableDeclaration");
                        if (init.declarations.length === 1 && eat(_in)) return parseForIn(node, init);
                        return parseFor(node, init);
                    }
                    var init = parseExpression(false, true);
                    if (eat(_in)) {
                        checkLVal(init);
                        return parseForIn(node, init);
                    }
                    return parseFor(node, init);

                  case _function:
                    next();
                    return parseFunction(node, true);

                  case _if:
                    next();
                    node.test = parseParenExpression();
                    node.consequent = parseStatement();
                    node.alternate = eat(_else) ? parseStatement() : null;
                    return finishNode(node, "IfStatement");

                  case _return:
                    if (!inFunction) raise(tokStart, "'return' outside of function");
                    next();
                    if (eat(_semi) || canInsertSemicolon()) node.argument = null; else {
                        node.argument = parseExpression();
                        semicolon();
                    }
                    return finishNode(node, "ReturnStatement");

                  case _switch:
                    next();
                    node.discriminant = parseParenExpression();
                    node.cases = [];
                    expect(_braceL);
                    labels.push(switchLabel);
                    for (var cur, sawDefault; tokType != _braceR; ) {
                        if (tokType === _case || tokType === _default) {
                            var isCase = tokType === _case;
                            if (cur) finishNode(cur, "SwitchCase");
                            node.cases.push(cur = startNode());
                            cur.consequent = [];
                            next();
                            if (isCase) cur.test = parseExpression(); else {
                                if (sawDefault) raise(lastStart, "Multiple default clauses");
                                sawDefault = true;
                                cur.test = null;
                            }
                            expect(_colon);
                        } else {
                            if (!cur) unexpected();
                            cur.consequent.push(parseStatement());
                        }
                    }
                    if (cur) finishNode(cur, "SwitchCase");
                    next();
                    labels.pop();
                    return finishNode(node, "SwitchStatement");

                  case _throw:
                    next();
                    if (newline.test(input.slice(lastEnd, tokStart))) raise(lastEnd, "Illegal newline after throw");
                    node.argument = parseExpression();
                    semicolon();
                    return finishNode(node, "ThrowStatement");

                  case _try:
                    next();
                    node.block = parseBlock();
                    node.handler = null;
                    if (tokType === _catch) {
                        var clause = startNode();
                        next();
                        expect(_parenL);
                        clause.param = parseIdent();
                        if (strict && isStrictBadIdWord(clause.param.name)) raise(clause.param.start, "Binding " + clause.param.name + " in strict mode");
                        expect(_parenR);
                        clause.guard = null;
                        clause.body = parseBlock();
                        node.handler = finishNode(clause, "CatchClause");
                    }
                    node.guardedHandlers = empty;
                    node.finalizer = eat(_finally) ? parseBlock() : null;
                    if (!node.handler && !node.finalizer) raise(node.start, "Missing catch or finally clause");
                    return finishNode(node, "TryStatement");

                  case _var:
                    next();
                    parseVar(node);
                    semicolon();
                    return finishNode(node, "VariableDeclaration");

                  case _while:
                    next();
                    node.test = parseParenExpression();
                    labels.push(loopLabel);
                    node.body = parseStatement();
                    labels.pop();
                    return finishNode(node, "WhileStatement");

                  case _with:
                    if (strict) raise(tokStart, "'with' in strict mode");
                    next();
                    node.object = parseParenExpression();
                    node.body = parseStatement();
                    return finishNode(node, "WithStatement");

                  case _braceL:
                    return parseBlock();

                  case _semi:
                    next();
                    return finishNode(node, "EmptyStatement");

                  default:
                    var maybeName = tokVal, expr = parseExpression();
                    if (starttype === _name && expr.type === "Identifier" && eat(_colon)) {
                        for (var i = 0; i < labels.length; ++i) if (labels[i].name === maybeName) raise(expr.start, "Label '" + maybeName + "' is already declared");
                        var kind = tokType.isLoop ? "loop" : tokType === _switch ? "switch" : null;
                        labels.push({
                            name: maybeName,
                            kind: kind
                        });
                        node.body = parseStatement();
                        labels.pop();
                        node.label = expr;
                        return finishNode(node, "LabeledStatement");
                    } else {
                        node.expression = expr;
                        semicolon();
                        return finishNode(node, "ExpressionStatement");
                    }
                }
            }
            function parseParenExpression() {
                expect(_parenL);
                var val = parseExpression();
                expect(_parenR);
                return val;
            }
            function parseBlock(allowStrict) {
                var node = startNode(), first = true, strict = false, oldStrict;
                node.body = [];
                expect(_braceL);
                while (!eat(_braceR)) {
                    var stmt = parseStatement();
                    node.body.push(stmt);
                    if (first && allowStrict && isUseStrict(stmt)) {
                        oldStrict = strict;
                        setStrict(strict = true);
                    }
                    first = false;
                }
                if (strict && !oldStrict) setStrict(false);
                return finishNode(node, "BlockStatement");
            }
            function parseFor(node, init) {
                node.init = init;
                expect(_semi);
                node.test = tokType === _semi ? null : parseExpression();
                expect(_semi);
                node.update = tokType === _parenR ? null : parseExpression();
                expect(_parenR);
                node.body = parseStatement();
                labels.pop();
                return finishNode(node, "ForStatement");
            }
            function parseForIn(node, init) {
                node.left = init;
                node.right = parseExpression();
                expect(_parenR);
                node.body = parseStatement();
                labels.pop();
                return finishNode(node, "ForInStatement");
            }
            function parseVar(node, noIn) {
                node.declarations = [];
                node.kind = "var";
                for (;;) {
                    var decl = startNode();
                    decl.id = parseIdent();
                    if (strict && isStrictBadIdWord(decl.id.name)) raise(decl.id.start, "Binding " + decl.id.name + " in strict mode");
                    decl.init = eat(_eq) ? parseExpression(true, noIn) : null;
                    node.declarations.push(finishNode(decl, "VariableDeclarator"));
                    if (!eat(_comma)) break;
                }
                return node;
            }
            function parseExpression(noComma, noIn) {
                var expr = parseMaybeAssign(noIn);
                if (!noComma && tokType === _comma) {
                    var node = startNodeFrom(expr);
                    node.expressions = [ expr ];
                    while (eat(_comma)) node.expressions.push(parseMaybeAssign(noIn));
                    return finishNode(node, "SequenceExpression");
                }
                return expr;
            }
            function parseMaybeAssign(noIn) {
                var left = parseMaybeConditional(noIn);
                if (tokType.isAssign) {
                    var node = startNodeFrom(left);
                    node.operator = tokVal;
                    node.left = left;
                    next();
                    node.right = parseMaybeAssign(noIn);
                    checkLVal(left);
                    return finishNode(node, "AssignmentExpression");
                }
                return left;
            }
            function parseMaybeConditional(noIn) {
                var expr = parseExprOps(noIn);
                if (eat(_question)) {
                    var node = startNodeFrom(expr);
                    node.test = expr;
                    node.consequent = parseExpression(true);
                    expect(_colon);
                    node.alternate = parseExpression(true, noIn);
                    return finishNode(node, "ConditionalExpression");
                }
                return expr;
            }
            function parseExprOps(noIn) {
                return parseExprOp(parseMaybeUnary(), -1, noIn);
            }
            function parseExprOp(left, minPrec, noIn) {
                var prec = tokType.binop;
                if (prec != null && (!noIn || tokType !== _in)) {
                    if (prec > minPrec) {
                        var node = startNodeFrom(left);
                        node.left = left;
                        node.operator = tokVal;
                        var op = tokType;
                        next();
                        node.right = parseExprOp(parseMaybeUnary(), prec, noIn);
                        var exprNode = finishNode(node, op === _logicalOR || op === _logicalAND ? "LogicalExpression" : "BinaryExpression");
                        return parseExprOp(exprNode, minPrec, noIn);
                    }
                }
                return left;
            }
            function parseMaybeUnary() {
                if (tokType.prefix) {
                    var node = startNode(), update = tokType.isUpdate;
                    node.operator = tokVal;
                    node.prefix = true;
                    tokRegexpAllowed = true;
                    next();
                    node.argument = parseMaybeUnary();
                    if (update) checkLVal(node.argument); else if (strict && node.operator === "delete" && node.argument.type === "Identifier") raise(node.start, "Deleting local variable in strict mode");
                    return finishNode(node, update ? "UpdateExpression" : "UnaryExpression");
                }
                var expr = parseExprSubscripts();
                while (tokType.postfix && !canInsertSemicolon()) {
                    var node = startNodeFrom(expr);
                    node.operator = tokVal;
                    node.prefix = false;
                    node.argument = expr;
                    checkLVal(expr);
                    next();
                    expr = finishNode(node, "UpdateExpression");
                }
                return expr;
            }
            function parseExprSubscripts() {
                return parseSubscripts(parseExprAtom());
            }
            function parseSubscripts(base, noCalls) {
                if (eat(_dot)) {
                    var node = startNodeFrom(base);
                    node.object = base;
                    node.property = parseIdent(true);
                    node.computed = false;
                    return parseSubscripts(finishNode(node, "MemberExpression"), noCalls);
                } else if (eat(_bracketL)) {
                    var node = startNodeFrom(base);
                    node.object = base;
                    node.property = parseExpression();
                    node.computed = true;
                    expect(_bracketR);
                    return parseSubscripts(finishNode(node, "MemberExpression"), noCalls);
                } else if (!noCalls && eat(_parenL)) {
                    var node = startNodeFrom(base);
                    node.callee = base;
                    node.arguments = parseExprList(_parenR, false);
                    return parseSubscripts(finishNode(node, "CallExpression"), noCalls);
                } else return base;
            }
            function parseExprAtom() {
                switch (tokType) {
                  case _this:
                    var node = startNode();
                    next();
                    return finishNode(node, "ThisExpression");

                  case _name:
                    return parseIdent();

                  case _num:
                  case _string:
                  case _regexp:
                    var node = startNode();
                    node.value = tokVal;
                    node.raw = input.slice(tokStart, tokEnd);
                    next();
                    return finishNode(node, "Literal");

                  case _null:
                  case _true:
                  case _false:
                    var node = startNode();
                    node.value = tokType.atomValue;
                    node.raw = tokType.keyword;
                    next();
                    return finishNode(node, "Literal");

                  case _parenL:
                    var tokStartLoc1 = tokStartLoc, tokStart1 = tokStart;
                    next();
                    var val = parseExpression();
                    val.start = tokStart1;
                    val.end = tokEnd;
                    if (options.locations) {
                        val.loc.start = tokStartLoc1;
                        val.loc.end = tokEndLoc;
                    }
                    if (options.ranges) val.range = [ tokStart1, tokEnd ];
                    expect(_parenR);
                    return val;

                  case _bracketL:
                    var node = startNode();
                    next();
                    node.elements = parseExprList(_bracketR, true, true);
                    return finishNode(node, "ArrayExpression");

                  case _braceL:
                    return parseObj();

                  case _function:
                    var node = startNode();
                    next();
                    return parseFunction(node, false);

                  case _new:
                    return parseNew();

                  default:
                    unexpected();
                }
            }
            function parseNew() {
                var node = startNode();
                next();
                node.callee = parseSubscripts(parseExprAtom(), true);
                if (eat(_parenL)) node.arguments = parseExprList(_parenR, false); else node.arguments = empty;
                return finishNode(node, "NewExpression");
            }
            function parseObj() {
                var node = startNode(), first = true, sawGetSet = false;
                node.properties = [];
                next();
                while (!eat(_braceR)) {
                    if (!first) {
                        expect(_comma);
                        if (options.allowTrailingCommas && eat(_braceR)) break;
                    } else first = false;
                    var prop = {
                        type: "Property",
                        key: parsePropertyName()
                    }, isGetSet = false, kind;
                    if (eat(_colon)) {
                        prop.value = parseExpression(true);
                        kind = prop.kind = "init";
                    } else if (options.ecmaVersion >= 5 && prop.key.type === "Identifier" && (prop.key.name === "get" || prop.key.name === "set")) {
                        isGetSet = sawGetSet = true;
                        kind = prop.kind = prop.key.name;
                        prop.key = parsePropertyName();
                        if (tokType !== _parenL) unexpected();
                        prop.value = parseFunction(startNode(), false);
                    } else unexpected();
                    if (prop.key.type === "Identifier" && (strict || sawGetSet)) {
                        for (var i = 0; i < node.properties.length; ++i) {
                            var other = node.properties[i];
                            if (other.key.name === prop.key.name) {
                                var conflict = kind == other.kind || isGetSet && other.kind === "init" || kind === "init" && (other.kind === "get" || other.kind === "set");
                                if (conflict && !strict && kind === "init" && other.kind === "init") conflict = false;
                                if (conflict) raise(prop.key.start, "Redefinition of property");
                            }
                        }
                    }
                    node.properties.push(prop);
                }
                return finishNode(node, "ObjectExpression");
            }
            function parsePropertyName() {
                if (tokType === _num || tokType === _string) return parseExprAtom();
                return parseIdent(true);
            }
            function parseFunction(node, isStatement) {
                if (tokType === _name) node.id = parseIdent(); else if (isStatement) unexpected(); else node.id = null;
                node.params = [];
                var first = true;
                expect(_parenL);
                while (!eat(_parenR)) {
                    if (!first) expect(_comma); else first = false;
                    node.params.push(parseIdent());
                }
                var oldInFunc = inFunction, oldLabels = labels;
                inFunction = true;
                labels = [];
                node.body = parseBlock(true);
                inFunction = oldInFunc;
                labels = oldLabels;
                if (strict || node.body.body.length && isUseStrict(node.body.body[0])) {
                    for (var i = node.id ? -1 : 0; i < node.params.length; ++i) {
                        var id = i < 0 ? node.id : node.params[i];
                        if (isStrictReservedWord(id.name) || isStrictBadIdWord(id.name)) raise(id.start, "Defining '" + id.name + "' in strict mode");
                        if (i >= 0) for (var j = 0; j < i; ++j) if (id.name === node.params[j].name) raise(id.start, "Argument name clash in strict mode");
                    }
                }
                return finishNode(node, isStatement ? "FunctionDeclaration" : "FunctionExpression");
            }
            function parseExprList(close, allowTrailingComma, allowEmpty) {
                var elts = [], first = true;
                while (!eat(close)) {
                    if (!first) {
                        expect(_comma);
                        if (allowTrailingComma && options.allowTrailingCommas && eat(close)) break;
                    } else first = false;
                    if (allowEmpty && tokType === _comma) elts.push(null); else elts.push(parseExpression(true));
                }
                return elts;
            }
            function parseIdent(liberal) {
                var node = startNode();
                node.name = tokType === _name ? tokVal : liberal && !options.forbidReserved && tokType.keyword || unexpected();
                tokRegexpAllowed = false;
                next();
                return finishNode(node, "Identifier");
            }
        });
    }).call(acornExports);
    JSParsingTools.parse = acornExports.parse || acornExports.acorn.parse;
    var codeGetExports = {};
    (function(exports) {
        "use strict";
        var isArray, json, renumber, hexadecimal, quotes, escapeless, parentheses, semicolons, safeConcatenation, directive, extra, parse, FORMAT_MINIFY, FORMAT_DEFAULTS;
        var Syntax = {
            AssignmentExpression: "AssignmentExpression",
            ArrayExpression: "ArrayExpression",
            ArrayPattern: "ArrayPattern",
            ArrowFunctionExpression: "ArrowFunctionExpression",
            BlockStatement: "BlockStatement",
            BinaryExpression: "BinaryExpression",
            BreakStatement: "BreakStatement",
            CallExpression: "CallExpression",
            CatchClause: "CatchClause",
            ClassBody: "ClassBody",
            ClassDeclaration: "ClassDeclaration",
            ClassExpression: "ClassExpression",
            ComprehensionBlock: "ComprehensionBlock",
            ComprehensionExpression: "ComprehensionExpression",
            ConditionalExpression: "ConditionalExpression",
            ContinueStatement: "ContinueStatement",
            DirectiveStatement: "DirectiveStatement",
            DoWhileStatement: "DoWhileStatement",
            DebuggerStatement: "DebuggerStatement",
            EmptyStatement: "EmptyStatement",
            ExportBatchSpecifier: "ExportBatchSpecifier",
            ExportDeclaration: "ExportDeclaration",
            ExportSpecifier: "ExportSpecifier",
            ExpressionStatement: "ExpressionStatement",
            ForStatement: "ForStatement",
            ForInStatement: "ForInStatement",
            ForOfStatement: "ForOfStatement",
            FunctionDeclaration: "FunctionDeclaration",
            FunctionExpression: "FunctionExpression",
            GeneratorExpression: "GeneratorExpression",
            Identifier: "Identifier",
            IfStatement: "IfStatement",
            ImportSpecifier: "ImportSpecifier",
            ImportDeclaration: "ImportDeclaration",
            Literal: "Literal",
            LabeledStatement: "LabeledStatement",
            LogicalExpression: "LogicalExpression",
            MemberExpression: "MemberExpression",
            MethodDefinition: "MethodDefinition",
            ModuleDeclaration: "ModuleDeclaration",
            NewExpression: "NewExpression",
            ObjectExpression: "ObjectExpression",
            ObjectPattern: "ObjectPattern",
            Program: "Program",
            Property: "Property",
            ReturnStatement: "ReturnStatement",
            SequenceExpression: "SequenceExpression",
            SpreadElement: "SpreadElement",
            SwitchStatement: "SwitchStatement",
            SwitchCase: "SwitchCase",
            TaggedTemplateExpression: "TaggedTemplateExpression",
            TemplateElement: "TemplateElement",
            TemplateLiteral: "TemplateLiteral",
            ThisExpression: "ThisExpression",
            ThrowStatement: "ThrowStatement",
            TryStatement: "TryStatement",
            UnaryExpression: "UnaryExpression",
            UpdateExpression: "UpdateExpression",
            VariableDeclaration: "VariableDeclaration",
            VariableDeclarator: "VariableDeclarator",
            WhileStatement: "WhileStatement",
            WithStatement: "WithStatement",
            YieldExpression: "YieldExpression"
        };
        var Precedence = {
            Sequence: 0,
            Yield: 1,
            Assignment: 1,
            Conditional: 2,
            ArrowFunction: 2,
            LogicalOR: 3,
            LogicalAND: 4,
            BitwiseOR: 5,
            BitwiseXOR: 6,
            BitwiseAND: 7,
            Equality: 8,
            Relational: 9,
            BitwiseSHIFT: 10,
            Additive: 11,
            Multiplicative: 12,
            Unary: 13,
            Postfix: 14,
            Call: 15,
            New: 16,
            TaggedTemplate: 17,
            Member: 18,
            Primary: 19
        };
        var BinaryPrecedence = {
            "||": Precedence.LogicalOR,
            "&&": Precedence.LogicalAND,
            "|": Precedence.BitwiseOR,
            "^": Precedence.BitwiseXOR,
            "&": Precedence.BitwiseAND,
            "==": Precedence.Equality,
            "!=": Precedence.Equality,
            "===": Precedence.Equality,
            "!==": Precedence.Equality,
            is: Precedence.Equality,
            isnt: Precedence.Equality,
            "<": Precedence.Relational,
            ">": Precedence.Relational,
            "<=": Precedence.Relational,
            ">=": Precedence.Relational,
            "in": Precedence.Relational,
            "instanceof": Precedence.Relational,
            "<<": Precedence.BitwiseSHIFT,
            ">>": Precedence.BitwiseSHIFT,
            ">>>": Precedence.BitwiseSHIFT,
            "+": Precedence.Additive,
            "-": Precedence.Additive,
            "*": Precedence.Multiplicative,
            "%": Precedence.Multiplicative,
            "/": Precedence.Multiplicative
        };
        function getDefaultOptions() {
            return {
                indent: null,
                base: null,
                parse: null,
                format: {
                    indent: {
                        style: "    ",
                        base: 0
                    },
                    newline: "\n",
                    space: " ",
                    json: false,
                    renumber: false,
                    hexadecimal: false,
                    quotes: "single",
                    escapeless: false,
                    compact: false,
                    parentheses: true,
                    semicolons: true,
                    safeConcatenation: false
                },
                directive: false,
                raw: true,
                verbatim: null
            };
        }
        var NON_ASCII_WHITESPACES = [ 5760, 6158, 8192, 8193, 8194, 8195, 8196, 8197, 8198, 8199, 8200, 8201, 8202, 8239, 8287, 12288, 65279 ];
        var NON_ASCII_IDENTIFIER_CHARACTERS_REGEXP = new RegExp("[ªµºÀ-ÖØ-öø-ˁˆ-ˑˠ-ˤˬˮ̀-ʹͶ" + "ͷͺ-ͽΆΈ-ΊΌΎ-ΡΣ-ϵϷ-ҁ҃-҇Ҋ-" + "ԧԱ-Ֆՙա-և֑-ׇֽֿׁׂׅׄא-ת" + "װ-ײؐ-ؚؠ-٩ٮ-ۓە-ۜ۟-۪ۨ-ۼۿܐ-" + "݊ݍ-ޱ߀-ߵߺࠀ-࠭ࡀ-࡛ࢠࢢ-ࢬࣤ-ࣾऀ-" + "ॣ०-९ॱ-ॷॹ-ॿঁ-ঃঅ-ঌএঐও-নপ-" + "রলশ-হ়-ৄেৈো-ৎৗড়ঢ়য়-ৣ০-" + "ৱਁ-ਃਅ-ਊਏਐਓ-ਨਪ-ਰਲਲ਼ਵਸ਼ਸ" + "ਹ਼ਾ-ੂੇੈੋ-੍ੑਖ਼-ੜਫ਼੦-ੵઁ-ઃ" + "અ-ઍએ-ઑઓ-નપ-રલળવ-હ઼-ૅે-ૉ" + "ો-્ૐૠ-ૣ૦-૯ଁ-ଃଅ-ଌଏଐଓ-ନପ-" + "ରଲଳଵ-ହ଼-ୄେୈୋ-୍ୖୗଡ଼ଢ଼ୟ-" + "ୣ୦-୯ୱஂஃஅ-ஊஎ-ஐஒ-கஙசஜஞ" + "டணதந-பம-ஹா-ூெ-ைொ-்ௐௗ௦-" + "௯ఁ-ఃఅ-ఌఎ-ఐఒ-నప-ళవ-హఽ-ౄె-" + "ైొ-్ౕౖౘౙౠ-ౣ౦-౯ಂಃಅ-ಌಎ-" + "ಐಒ-ನಪ-ಳವ-ಹ಼-ೄೆ-ೈೊ-್ೕೖೞ" + "ೠ-ೣ೦-೯ೱೲംഃഅ-ഌഎ-ഐഒ-ഺഽ-ൄ" + "െ-ൈൊ-ൎൗൠ-ൣ൦-൯ൺ-ൿංඃඅ-ඖක-" + "නඳ-රලව-ෆ්ා-ුූෘ-ෟෲෳก-ฺ" + "เ-๎๐-๙ກຂຄງຈຊຍດ-ທນ-ຟມ-" + "ຣລວສຫອ-ູົ-ຽເ-ໄໆ່-ໍ໐-໙" + "ໜ-ໟༀ༘༙༠-༩༹༵༷༾-ཇཉ-ཬཱ-྄" + "྆-ྗྙ-ྼ࿆က-၉ၐ-ႝႠ-ჅჇჍა-ჺჼ-" + "ቈቊ-ቍቐ-ቖቘቚ-ቝበ-ኈኊ-ኍነ-ኰኲ-ኵ" + "ኸ-ኾዀዂ-ዅወ-ዖዘ-ጐጒ-ጕጘ-ፚ፝-፟ᎀ-" + "ᎏᎠ-Ᏼᐁ-ᙬᙯ-ᙿᚁ-ᚚᚠ-ᛪᛮ-ᛰᜀ-ᜌᜎ-" + "᜔ᜠ-᜴ᝀ-ᝓᝠ-ᝬᝮ-ᝰᝲᝳក-៓ៗៜ៝" + "០-៩᠋-᠍᠐-᠙ᠠ-ᡷᢀ-ᢪᢰ-ᣵᤀ-ᤜᤠ-ᤫ" + "ᤰ-᤻᥆-ᥭᥰ-ᥴᦀ-ᦫᦰ-ᧉ᧐-᧙ᨀ-ᨛᨠ-ᩞ" + "᩠-᩿᩼-᪉᪐-᪙ᪧᬀ-ᭋ᭐-᭙᭫-᭳ᮀ-᯳ᰀ-" + "᰷᱀-᱉ᱍ-ᱽ᳐-᳔᳒-ᳶᴀ-ᷦ᷼-ἕἘ-Ἕἠ-" + "ὅὈ-Ὅὐ-ὗὙὛὝὟ-ώᾀ-ᾴᾶ-ᾼιῂ-" + "ῄῆ-ῌῐ-ΐῖ-Ίῠ-Ῥῲ-ῴῶ-ῼ‌‍‿" + "⁀⁔ⁱⁿₐ-ₜ⃐-⃥⃜⃡-⃰ℂℇℊ-ℓℕ" + "ℙ-ℝℤΩℨK-ℭℯ-ℹℼ-ℿⅅ-ⅉⅎⅠ-ↈ" + "Ⰰ-Ⱞⰰ-ⱞⱠ-ⳤⳫ-ⳳⴀ-ⴥⴧⴭⴰ-ⵧⵯ⵿-" + "ⶖⶠ-ⶦⶨ-ⶮⶰ-ⶶⶸ-ⶾⷀ-ⷆⷈ-ⷎⷐ-ⷖⷘ-" + "ⷞⷠ-ⷿⸯ々-〇〡-〯〱-〵〸-〼ぁ-ゖ゙゚" + "ゝ-ゟァ-ヺー-ヿㄅ-ㄭㄱ-ㆎㆠ-ㆺㇰ-ㇿ㐀-䶵" + "一-鿌ꀀ-ꒌꓐ-ꓽꔀ-ꘌꘐ-ꘫꙀ-꙯ꙴ-꙽ꙿ-ꚗ" + "ꚟ-꛱ꜗ-ꜟꜢ-ꞈꞋ-ꞎꞐ-ꞓꞠ-Ɦꟸ-ꠧꡀ-ꡳ" + "ꢀ-꣄꣐-꣙꣠-ꣷꣻ꤀-꤭ꤰ-꥓ꥠ-ꥼꦀ-꧀ꧏ-" + "꧙ꨀ-ꨶꩀ-ꩍ꩐-꩙ꩠ-ꩶꩺꩻꪀ-ꫂꫛ-ꫝꫠ-" + "ꫯꫲ-꫶ꬁ-ꬆꬉ-ꬎꬑ-ꬖꬠ-ꬦꬨ-ꬮꯀ-ꯪ꯬" + "꯭꯰-꯹가-힣ힰ-ퟆퟋ-ퟻ豈-舘並-龎ﬀ-ﬆﬓ-" + "ﬗיִ-ﬨשׁ-זּטּ-לּמּנּסּףּפּצּ-ﮱﯓ-ﴽ" + "ﵐ-ﶏﶒ-ﷇﷰ-ﷻ︀-️︠-︦︳︴﹍-﹏ﹰ-ﹴ" + "ﹶ-ﻼ０-９Ａ-Ｚ＿ａ-ｚｦ-ﾾￂ-ￇￊ-ￏￒ-" + "ￗￚ-ￜ]");
        function isIdentifierCh(cp) {
            if (cp < 128) {
                return cp >= 97 && cp <= 122 || cp >= 65 && cp <= 90 || cp >= 48 && cp <= 57 || cp === 36 || cp === 95 || cp === 92;
            }
            var ch = String.fromCharCode(cp);
            return NON_ASCII_IDENTIFIER_CHARACTERS_REGEXP.test(ch);
        }
        function isLineTerminator(cp) {
            return cp === 10 || cp === 13 || cp === 8232 || cp === 8233;
        }
        function isWhitespace(cp) {
            return cp === 32 || cp === 9 || isLineTerminator(cp) || cp === 11 || cp === 12 || cp === 160 || cp >= 5760 && NON_ASCII_WHITESPACES.indexOf(cp) >= 0;
        }
        function isDecimalDigit(cp) {
            return cp >= 48 && cp <= 57;
        }
        function stringRepeat(str, num) {
            var result = "";
            for (num |= 0; num > 0; num >>>= 1, str += str) {
                if (num & 1) {
                    result += str;
                }
            }
            return result;
        }
        isArray = Array.isArray;
        if (!isArray) {
            isArray = function isArray(array) {
                return Object.prototype.toString.call(array) === "[object Array]";
            };
        }
        function updateDeeply(target, override) {
            var key, val;
            function isHashObject(target) {
                return typeof target === "object" && target instanceof Object && !(target instanceof RegExp);
            }
            for (key in override) {
                if (override.hasOwnProperty(key)) {
                    val = override[key];
                    if (isHashObject(val)) {
                        if (isHashObject(target[key])) {
                            updateDeeply(target[key], val);
                        } else {
                            target[key] = updateDeeply({}, val);
                        }
                    } else {
                        target[key] = val;
                    }
                }
            }
            return target;
        }
        function generateNumber(value) {
            var result, point, temp, exponent, pos;
            if (value === 1 / 0) {
                return json ? "null" : renumber ? "1e400" : "1e+400";
            }
            result = "" + value;
            if (!renumber || result.length < 3) {
                return result;
            }
            point = result.indexOf(".");
            if (!json && result.charCodeAt(0) === 48 && point === 1) {
                point = 0;
                result = result.slice(1);
            }
            temp = result;
            result = result.replace("e+", "e");
            exponent = 0;
            if ((pos = temp.indexOf("e")) > 0) {
                exponent = +temp.slice(pos + 1);
                temp = temp.slice(0, pos);
            }
            if (point >= 0) {
                exponent -= temp.length - point - 1;
                temp = +(temp.slice(0, point) + temp.slice(point + 1)) + "";
            }
            pos = 0;
            while (temp.charCodeAt(temp.length + pos - 1) === 48) {
                --pos;
            }
            if (pos !== 0) {
                exponent -= pos;
                temp = temp.slice(0, pos);
            }
            if (exponent !== 0) {
                temp += "e" + exponent;
            }
            if ((temp.length < result.length || hexadecimal && value > 1e12 && Math.floor(value) === value && (temp = "0x" + value.toString(16)).length < result.length) && +temp === value) {
                result = temp;
            }
            return result;
        }
        function escapeRegExpCharacter(ch, previousIsBackslash) {
            if ((ch & ~1) === 8232) {
                return (previousIsBackslash ? "u" : "\\u") + (ch === 8232 ? "2028" : "2029");
            } else if (ch === 10 || ch === 13) {
                return (previousIsBackslash ? "" : "\\") + (ch === 10 ? "n" : "r");
            }
            return String.fromCharCode(ch);
        }
        function generateRegExp(reg) {
            var match, result, flags, i, iz, ch, characterInBrack, previousIsBackslash;
            result = reg.toString();
            if (reg.source) {
                match = result.match(/\/([^/]*)$/);
                if (!match) {
                    return result;
                }
                flags = match[1];
                result = "";
                characterInBrack = false;
                previousIsBackslash = false;
                for (i = 0, iz = reg.source.length; i < iz; ++i) {
                    ch = reg.source.charCodeAt(i);
                    if (!previousIsBackslash) {
                        if (characterInBrack) {
                            if (ch === 93) {
                                characterInBrack = false;
                            }
                        } else {
                            if (ch === 47) {
                                result += "\\";
                            } else if (ch === 91) {
                                characterInBrack = true;
                            }
                        }
                        result += escapeRegExpCharacter(ch, previousIsBackslash);
                        previousIsBackslash = ch === 92;
                    } else {
                        result += escapeRegExpCharacter(ch, previousIsBackslash);
                        previousIsBackslash = false;
                    }
                }
                return "/" + result + "/" + flags;
            }
            return result;
        }
        function escapeAllowedCharacter(code, next) {
            var hex, result = "\\";
            switch (code) {
              case 8:
                result += "b";
                break;

              case 12:
                result += "f";
                break;

              case 9:
                result += "t";
                break;

              default:
                hex = code.toString(16).toUpperCase();
                if (json || code > 255) {
                    result += "u" + "0000".slice(hex.length) + hex;
                } else if (code === 0 && !isDecimalDigit(next)) {
                    result += "0";
                } else if (code === 11) {
                    result += "x0B";
                } else {
                    result += "x" + "00".slice(hex.length) + hex;
                }
                break;
            }
            return result;
        }
        function escapeDisallowedCharacter(code) {
            var result = "\\";
            switch (code) {
              case 92:
                result += "\\";
                break;

              case 10:
                result += "n";
                break;

              case 13:
                result += "r";
                break;

              case 8232:
                result += "u2028";
                break;

              case 8233:
                result += "u2029";
                break;
            }
            return result;
        }
        function escapeDirective(str) {
            var i, iz, code, quote;
            quote = quotes === "double" ? '"' : "'";
            for (i = 0, iz = str.length; i < iz; ++i) {
                code = str.charCodeAt(i);
                if (code === 39) {
                    quote = '"';
                    break;
                } else if (code === 34) {
                    quote = "'";
                    break;
                } else if (code === 92) {
                    ++i;
                }
            }
            return quote + str + quote;
        }
        function escapeString(str) {
            var result = "", i, len, code, singleQuotes = 0, doubleQuotes = 0, single, quote;
            for (i = 0, len = str.length; i < len; ++i) {
                code = str.charCodeAt(i);
                if (code === 39) {
                    ++singleQuotes;
                } else if (code === 34) {
                    ++doubleQuotes;
                } else if (code === 47 && json) {
                    result += "\\";
                } else if (isLineTerminator(code) || code === 92) {
                    result += escapeDisallowedCharacter(code);
                    continue;
                } else if (json && code < 32 || !(json || escapeless || code >= 32 && code <= 126)) {
                    result += escapeAllowedCharacter(code, str.charCodeAt(i + 1));
                    continue;
                }
                result += String.fromCharCode(code);
            }
            single = !(quotes === "double" || quotes === "auto" && doubleQuotes < singleQuotes);
            quote = single ? "'" : '"';
            if (!(single ? singleQuotes : doubleQuotes)) {
                return quote + result + quote;
            }
            str = result;
            result = quote;
            for (i = 0, len = str.length; i < len; ++i) {
                code = str.charCodeAt(i);
                if (code === 39 && single || code === 34 && !single) {
                    result += "\\";
                }
                result += String.fromCharCode(code);
            }
            return result + quote;
        }
        function join(l, r) {
            if (!l.length) return r;
            if (!r.length) return l;
            var lCp = l.charCodeAt(l.length - 1), rCp = r.charCodeAt(0);
            if (isIdentifierCh(lCp) && isIdentifierCh(rCp) || lCp === rCp && (lCp === 43 || lCp === 45) || lCp === 47 && rCp === 105) {
                return l + _.space + r;
            } else if (isWhitespace(lCp) || isWhitespace(rCp)) return l + r;
            return l + _.optSpace + r;
        }
        function shiftIndent() {
            var prevIndent = _.indent;
            _.indent += _.indentUnit;
            return prevIndent;
        }
        function adoptionPrefix($stmt) {
            if ($stmt.type === Syntax.BlockStatement) return _.optSpace;
            if ($stmt.type === Syntax.EmptyStatement) return "";
            return _.newline + _.indent + _.indentUnit;
        }
        function adoptionSuffix($stmt) {
            if ($stmt.type === Syntax.BlockStatement) return _.optSpace;
            return _.newline + _.indent;
        }
        function generateVerbatim($expr, settings) {
            var verbatim = $expr[extra.verbatim], strVerbatim = typeof verbatim === "string", precedence = !strVerbatim && verbatim.precedence !== void 0 ? verbatim.precedence : Precedence.Sequence, parenthesize = precedence < settings.precedence, content = strVerbatim ? verbatim : verbatim.content, chunks = content.split(/\r\n|\n/), chunkCount = chunks.length;
            if (parenthesize) _.js += "(";
            _.js += chunks[0];
            for (var i = 1; i < chunkCount; i++) _.js += _.newline + _.indent + chunks[i];
            if (parenthesize) _.js += ")";
        }
        function generateFunctionParams($node) {
            var $params = $node.params, $rest = $node.rest, $defaults = $node.defaults, paramCount = $params.length, lastParamIdx = paramCount - 1, hasDefaults = !!$defaults, arrowFuncWithSingleParam = $node.type === Syntax.ArrowFunctionExpression && !$rest && (!hasDefaults || $defaults.length === 0) && paramCount === 1 && $params[0].type === Syntax.Identifier;
            if (arrowFuncWithSingleParam) _.js += $params[0].name; else {
                _.js += "(";
                for (var i = 0; i < paramCount; ++i) {
                    var $param = $params[i];
                    if (hasDefaults && $defaults[i]) {
                        var $fakeAssign = {
                            left: $param,
                            right: $defaults[i],
                            operator: "="
                        };
                        ExprGen.AssignmentExpression($fakeAssign, Preset.e4);
                    } else {
                        if ($params[i].type === Syntax.Identifier) _.js += $param.name; else ExprGen[$param.type]($param, Preset.e4);
                    }
                    if (i !== lastParamIdx) _.js += "," + _.optSpace;
                }
                if ($rest) {
                    if (paramCount) _.js += "," + _.optSpace;
                    _.js += "..." + $rest.name;
                }
                _.js += ")";
            }
        }
        function generateFunctionBody($node) {
            var $body = $node.body;
            generateFunctionParams($node);
            if ($node.type === Syntax.ArrowFunctionExpression) _.js += _.optSpace + "=>";
            if ($node.expression) {
                _.js += _.optSpace;
                var exprJs = exprToJs($body, Preset.e4);
                if (exprJs.charAt(0) === "{") exprJs = "(" + exprJs + ")";
                _.js += exprJs;
            } else {
                _.js += adoptionPrefix($body);
                StmtGen[$body.type]($body, Preset.s8);
            }
        }
        var Preset = {
            e1: function(allowIn) {
                return {
                    precedence: Precedence.Assignment,
                    allowIn: allowIn,
                    allowCall: true,
                    allowUnparenthesizedNew: true
                };
            },
            e2: function(allowIn) {
                return {
                    precedence: Precedence.LogicalOR,
                    allowIn: allowIn,
                    allowCall: true,
                    allowUnparenthesizedNew: true
                };
            },
            e3: {
                precedence: Precedence.Call,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: false
            },
            e4: {
                precedence: Precedence.Assignment,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e5: {
                precedence: Precedence.Sequence,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e6: function(allowUnparenthesizedNew) {
                return {
                    precedence: Precedence.New,
                    allowIn: true,
                    allowCall: false,
                    allowUnparenthesizedNew: allowUnparenthesizedNew
                };
            },
            e7: {
                precedence: Precedence.Unary,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e8: {
                precedence: Precedence.Postfix,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e9: {
                precedence: void 0,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e10: {
                precedence: Precedence.Call,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e11: function(allowCall) {
                return {
                    precedence: Precedence.Call,
                    allowIn: true,
                    allowCall: allowCall,
                    allowUnparenthesizedNew: false
                };
            },
            e12: {
                precedence: Precedence.Primary,
                allowIn: false,
                allowCall: false,
                allowUnparenthesizedNew: true
            },
            e13: {
                precedence: Precedence.Primary,
                allowIn: true,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e14: {
                precedence: Precedence.Sequence,
                allowIn: false,
                allowCall: true,
                allowUnparenthesizedNew: true
            },
            e15: function(allowCall) {
                return {
                    precedence: Precedence.Sequence,
                    allowIn: true,
                    allowCall: allowCall,
                    allowUnparenthesizedNew: true
                };
            },
            e16: function(precedence, allowIn) {
                return {
                    precedence: precedence,
                    allowIn: allowIn,
                    allowCall: true,
                    allowUnparenthesizedNew: true
                };
            },
            e17: function(allowIn) {
                return {
                    precedence: Precedence.Call,
                    allowIn: allowIn,
                    allowCall: true,
                    allowUnparenthesizedNew: true
                };
            },
            e18: function(allowIn) {
                return {
                    precedence: Precedence.Assignment,
                    allowIn: allowIn,
                    allowCall: true,
                    allowUnparenthesizedNew: true
                };
            },
            e19: {
                precedence: Precedence.Sequence,
                allowIn: true,
                allowCall: true,
                semicolonOptional: false
            },
            s1: function(functionBody, semicolonOptional) {
                return {
                    allowIn: true,
                    functionBody: false,
                    directiveContext: functionBody,
                    semicolonOptional: semicolonOptional
                };
            },
            s2: {
                allowIn: true,
                functionBody: false,
                directiveContext: false,
                semicolonOptional: true
            },
            s3: function(allowIn) {
                return {
                    allowIn: allowIn,
                    functionBody: false,
                    directiveContext: false,
                    semicolonOptional: false
                };
            },
            s4: function(semicolonOptional) {
                return {
                    allowIn: true,
                    functionBody: false,
                    directiveContext: false,
                    semicolonOptional: semicolonOptional
                };
            },
            s5: function(semicolonOptional) {
                return {
                    allowIn: true,
                    functionBody: false,
                    directiveContext: true,
                    semicolonOptional: semicolonOptional
                };
            },
            s6: {
                allowIn: false,
                functionBody: false,
                directiveContext: false,
                semicolonOptional: false
            },
            s7: {
                allowIn: true,
                functionBody: false,
                directiveContext: false,
                semicolonOptional: false
            },
            s8: {
                allowIn: true,
                functionBody: true,
                directiveContext: false,
                semicolonOptional: false
            }
        };
        var FLOATING_OR_OCTAL_REGEXP = /[.eExX]|^0[0-9]+/, LAST_DECIMAL_DIGIT_REGEXP = /[0-9]$/;
        function generateLogicalOrBinaryExpression($expr, settings) {
            var op = $expr.operator, precedence = BinaryPrecedence[$expr.operator], parenthesize = precedence < settings.precedence, allowIn = settings.allowIn || parenthesize, operandGenSettings = Preset.e16(precedence, allowIn), exprJs = exprToJs($expr.left, operandGenSettings);
            parenthesize |= op === "in" && !allowIn;
            if (parenthesize) _.js += "(";
            if (exprJs.charCodeAt(exprJs.length - 1) === 47 && isIdentifierCh(op.charCodeAt(0))) exprJs = exprJs + _.space + op; else exprJs = join(exprJs, op);
            operandGenSettings.precedence++;
            var rightJs = exprToJs($expr.right, operandGenSettings);
            if (op === "/" && rightJs.charAt(0) === "/" || op.slice(-1) === "<" && rightJs.slice(0, 3) === "!--") exprJs += _.space + rightJs; else exprJs = join(exprJs, rightJs);
            _.js += exprJs;
            if (parenthesize) _.js += ")";
        }
        function generateArrayPatternOrExpression($expr) {
            var $elems = $expr.elements, elemCount = $elems.length;
            if (elemCount) {
                var lastElemIdx = elemCount - 1, multiline = elemCount > 1, prevIndent = shiftIndent(), itemPrefix = _.newline + _.indent;
                _.js += "[";
                for (var i = 0; i < elemCount; i++) {
                    var $elem = $elems[i];
                    if (multiline) _.js += itemPrefix;
                    if ($elem) ExprGen[$elem.type]($elem, Preset.e4);
                    if (i !== lastElemIdx || !$elem) _.js += ",";
                }
                _.indent = prevIndent;
                if (multiline) _.js += _.newline + _.indent;
                _.js += "]";
            } else _.js += "[]";
        }
        function generateImportOrExportSpecifier($expr) {
            _.js += $expr.id.name;
            if ($expr.name) _.js += _.space + "as" + _.space + $expr.name.name;
        }
        function generateGeneratorOrComprehensionExpression($expr) {
            var $blocks = $expr.blocks, $filter = $expr.filter, isGenerator = $expr.type === Syntax.GeneratorExpression, exprJs = isGenerator ? "(" : "[", bodyJs = exprToJs($expr.body, Preset.e4);
            if ($blocks) {
                var prevIndent = shiftIndent(), blockCount = $blocks.length;
                for (var i = 0; i < blockCount; ++i) {
                    var blockJs = exprToJs($blocks[i], Preset.e5);
                    exprJs = i > 0 ? join(exprJs, blockJs) : exprJs + blockJs;
                }
                _.indent = prevIndent;
            }
            if ($filter) {
                var filterJs = exprToJs($filter, Preset.e5);
                exprJs = join(exprJs, "if" + _.optSpace);
                exprJs = join(exprJs, "(" + filterJs + ")");
            }
            exprJs = join(exprJs, bodyJs);
            exprJs += isGenerator ? ")" : "]";
            _.js += exprJs;
        }
        var ExprRawGen = {
            SequenceExpression: function generateSequenceExpression($expr, settings) {
                var $children = $expr.expressions, childrenCount = $children.length, lastChildIdx = childrenCount - 1, parenthesize = Precedence.Sequence < settings.precedence, exprGenSettings = Preset.e1(settings.allowIn || parenthesize);
                if (parenthesize) _.js += "(";
                for (var i = 0; i < childrenCount; i++) {
                    var $child = $children[i];
                    ExprGen[$child.type]($child, exprGenSettings);
                    if (i !== lastChildIdx) _.js += "," + _.optSpace;
                }
                if (parenthesize) _.js += ")";
            },
            AssignmentExpression: function generateAssignmentExpression($expr, settings) {
                var $left = $expr.left, $right = $expr.right, parenthesize = Precedence.Assignment < settings.precedence, allowIn = settings.allowIn || parenthesize;
                if (parenthesize) _.js += "(";
                ExprGen[$left.type]($left, Preset.e17(allowIn));
                _.js += _.optSpace + $expr.operator + _.optSpace;
                ExprGen[$right.type]($right, Preset.e18(allowIn));
                if (parenthesize) _.js += ")";
            },
            ArrowFunctionExpression: function generateArrowFunctionExpression($expr, settings) {
                var parenthesize = Precedence.ArrowFunction < settings.precedence;
                if (parenthesize) _.js += "(";
                generateFunctionBody($expr);
                if (parenthesize) _.js += ")";
            },
            ConditionalExpression: function generateConditionalExpression($expr, settings) {
                var $test = $expr.test, $conseq = $expr.consequent, $alt = $expr.alternate, parenthesize = Precedence.Conditional < settings.precedence, allowIn = settings.allowIn || parenthesize, testGenSettings = Preset.e2(allowIn), branchGenSettings = Preset.e1(allowIn);
                if (parenthesize) _.js += "(";
                ExprGen[$test.type]($test, testGenSettings);
                _.js += _.optSpace + "?" + _.optSpace;
                ExprGen[$conseq.type]($conseq, branchGenSettings);
                _.js += _.optSpace + ":" + _.optSpace;
                ExprGen[$alt.type]($alt, branchGenSettings);
                if (parenthesize) _.js += ")";
            },
            LogicalExpression: generateLogicalOrBinaryExpression,
            BinaryExpression: generateLogicalOrBinaryExpression,
            CallExpression: function generateCallExpression($expr, settings) {
                var $callee = $expr.callee, $args = $expr["arguments"], argCount = $args.length, lastArgIdx = argCount - 1, parenthesize = !settings.allowCall || Precedence.Call < settings.precedence;
                if (parenthesize) _.js += "(";
                ExprGen[$callee.type]($callee, Preset.e3);
                _.js += "(";
                for (var i = 0; i < argCount; ++i) {
                    var $arg = $args[i];
                    ExprGen[$arg.type]($arg, Preset.e4);
                    if (i !== lastArgIdx) _.js += "," + _.optSpace;
                }
                _.js += ")";
                if (parenthesize) _.js += ")";
            },
            NewExpression: function generateNewExpression($expr, settings) {
                var $args = $expr["arguments"], parenthesize = Precedence.New < settings.precedence, argCount = $args.length, lastArgIdx = argCount - 1, withCall = !settings.allowUnparenthesizedNew || parentheses || argCount > 0, calleeJs = exprToJs($expr.callee, Preset.e6(!withCall));
                if (parenthesize) _.js += "(";
                _.js += join("new", calleeJs);
                if (withCall) {
                    _.js += "(";
                    for (var i = 0; i < argCount; ++i) {
                        var $arg = $args[i];
                        ExprGen[$arg.type]($arg, Preset.e4);
                        if (i !== lastArgIdx) _.js += "," + _.optSpace;
                    }
                    _.js += ")";
                }
                if (parenthesize) _.js += ")";
            },
            MemberExpression: function generateMemberExpression($expr, settings) {
                var $obj = $expr.object, $prop = $expr.property, parenthesize = Precedence.Member < settings.precedence, isNumObj = !$expr.computed && $obj.type === Syntax.Literal && typeof $obj.value === "number";
                if (parenthesize) _.js += "(";
                if (isNumObj) {
                    var numJs = exprToJs($obj, Preset.e11(settings.allowCall)), withPoint = LAST_DECIMAL_DIGIT_REGEXP.test(numJs) && !FLOATING_OR_OCTAL_REGEXP.test(numJs);
                    _.js += withPoint ? numJs + "." : numJs;
                } else ExprGen[$obj.type]($obj, Preset.e11(settings.allowCall));
                if ($expr.computed) {
                    _.js += "[";
                    ExprGen[$prop.type]($prop, Preset.e15(settings.allowCall));
                    _.js += "]";
                } else _.js += "." + $prop.name;
                if (parenthesize) _.js += ")";
            },
            UnaryExpression: function generateUnaryExpression($expr, settings) {
                var parenthesize = Precedence.Unary < settings.precedence, op = $expr.operator, argJs = exprToJs($expr.argument, Preset.e7);
                if (parenthesize) _.js += "(";
                if (_.optSpace === "" || op.length > 2) _.js += join(op, argJs); else {
                    _.js += op;
                    var leftCp = op.charCodeAt(op.length - 1), rightCp = argJs.charCodeAt(0);
                    if (leftCp === rightCp && (leftCp === 43 || leftCp === 45) || isIdentifierCh(leftCp) && isIdentifierCh(rightCp)) {
                        _.js += _.space;
                    }
                    _.js += argJs;
                }
                if (parenthesize) _.js += ")";
            },
            YieldExpression: function generateYieldExpression($expr, settings) {
                var $arg = $expr.argument, js = $expr.delegate ? "yield*" : "yield", parenthesize = Precedence.Yield < settings.precedence;
                if (parenthesize) _.js += "(";
                if ($arg) {
                    var argJs = exprToJs($arg, Preset.e4);
                    js = join(js, argJs);
                }
                _.js += js;
                if (parenthesize) _.js += ")";
            },
            UpdateExpression: function generateUpdateExpression($expr, settings) {
                var $arg = $expr.argument, $op = $expr.operator, prefix = $expr.prefix, precedence = prefix ? Precedence.Unary : Precedence.Postfix, parenthesize = precedence < settings.precedence;
                if (parenthesize) _.js += "(";
                if (prefix) {
                    _.js += $op;
                    ExprGen[$arg.type]($arg, Preset.e8);
                } else {
                    ExprGen[$arg.type]($arg, Preset.e8);
                    _.js += $op;
                }
                if (parenthesize) _.js += ")";
            },
            FunctionExpression: function generateFunctionExpression($expr) {
                var isGenerator = !!$expr.generator;
                _.js += isGenerator ? "function*" : "function";
                if ($expr.id) {
                    _.js += isGenerator ? _.optSpace : _.space;
                    _.js += $expr.id.name;
                } else _.js += _.optSpace;
                generateFunctionBody($expr);
            },
            ExportBatchSpecifier: function generateExportBatchSpecifier() {
                _.js += "*";
            },
            ArrayPattern: generateArrayPatternOrExpression,
            ArrayExpression: generateArrayPatternOrExpression,
            ClassExpression: function generateClassExpression($expr) {
                var $id = $expr.id, $super = $expr.superClass, $body = $expr.body, exprJs = "class";
                if ($id) {
                    var idJs = exprToJs($id, Preset.e9);
                    exprJs = join(exprJs, idJs);
                }
                if ($super) {
                    var superJs = exprToJs($super, Preset.e4);
                    superJs = join("extends", superJs);
                    exprJs = join(exprJs, superJs);
                }
                _.js += exprJs + _.optSpace;
                StmtGen[$body.type]($body, Preset.s2);
            },
            MethodDefinition: function generateMethodDefinition($expr) {
                var exprJs = $expr["static"] ? "static" + _.optSpace : "", keyJs = exprToJs($expr.key, Preset.e5);
                if ($expr.computed) keyJs = "[" + keyJs + "]";
                if ($expr.kind === "get" || $expr.kind === "set") {
                    keyJs = join($expr.kind, keyJs);
                    _.js += join(exprJs, keyJs);
                } else {
                    if ($expr.value.generator) _.js += exprJs + "*" + keyJs; else _.js += join(exprJs, keyJs);
                }
                generateFunctionBody($expr.value);
            },
            Property: function generateProperty($expr) {
                var $val = $expr.value, $kind = $expr.kind, keyJs = exprToJs($expr.key, Preset.e5);
                if ($expr.computed) keyJs = "[" + keyJs + "]";
                if ($kind === "get" || $kind === "set") {
                    _.js += $kind + _.space + keyJs;
                    generateFunctionBody($val);
                } else {
                    if ($expr.shorthand) _.js += keyJs; else if ($expr.method) {
                        _.js += $val.generator ? "*" + keyJs : keyJs;
                        generateFunctionBody($val);
                    } else {
                        _.js += keyJs + ":" + _.optSpace;
                        ExprGen[$val.type]($val, Preset.e4);
                    }
                }
            },
            ObjectExpression: function generateObjectExpression($expr) {
                var $props = $expr.properties, propCount = $props.length;
                if (propCount) {
                    var lastPropIdx = propCount - 1, prevIndent = shiftIndent();
                    _.js += "{";
                    for (var i = 0; i < propCount; i++) {
                        var $prop = $props[i], propType = $prop.type || Syntax.Property;
                        _.js += _.newline + _.indent;
                        ExprGen[propType]($prop, Preset.e5);
                        if (i !== lastPropIdx) _.js += ",";
                    }
                    _.indent = prevIndent;
                    _.js += _.newline + _.indent + "}";
                } else _.js += "{}";
            },
            ObjectPattern: function generateObjectPattern($expr) {
                var $props = $expr.properties, propCount = $props.length;
                if (propCount) {
                    var lastPropIdx = propCount - 1, multiline = false;
                    if (propCount === 1) multiline = $props[0].value.type !== Syntax.Identifier; else {
                        for (var i = 0; i < propCount; i++) {
                            if (!$props[i].shorthand) {
                                multiline = true;
                                break;
                            }
                        }
                    }
                    _.js += multiline ? "{" + _.newline : "{";
                    var prevIndent = shiftIndent(), propSuffix = "," + (multiline ? _.newline : _.optSpace);
                    for (var i = 0; i < propCount; i++) {
                        var $prop = $props[i];
                        if (multiline) _.js += _.indent;
                        ExprGen[$prop.type]($prop, Preset.e5);
                        if (i !== lastPropIdx) _.js += propSuffix;
                    }
                    _.indent = prevIndent;
                    _.js += multiline ? _.newline + _.indent + "}" : "}";
                } else _.js += "{}";
            },
            ThisExpression: function generateThisExpression() {
                _.js += "this";
            },
            Identifier: function generateIdentifier($expr) {
                _.js += $expr.name;
            },
            ImportSpecifier: generateImportOrExportSpecifier,
            ExportSpecifier: generateImportOrExportSpecifier,
            Literal: function generateLiteral($expr) {
                if (extra.raw && $expr.raw !== void 0) _.js += $expr.raw; else if ($expr.value === null) _.js += "null"; else {
                    var valueType = typeof $expr.value;
                    if (valueType === "string") _.js += escapeString($expr.value); else if (valueType === "number") _.js += generateNumber($expr.value); else if (valueType === "boolean") _.js += $expr.value ? "true" : "false"; else _.js += generateRegExp($expr.value);
                }
            },
            GeneratorExpression: generateGeneratorOrComprehensionExpression,
            ComprehensionExpression: generateGeneratorOrComprehensionExpression,
            ComprehensionBlock: function generateComprehensionBlock($expr) {
                var $left = $expr.left, leftJs = void 0, rightJs = exprToJs($expr.right, Preset.e5);
                if ($left.type === Syntax.VariableDeclaration) leftJs = $left.kind + _.space + stmtToJs($left.declarations[0], Preset.s6); else leftJs = exprToJs($left, Preset.e10);
                leftJs = join(leftJs, $expr.of ? "of" : "in");
                _.js += "for" + _.optSpace + "(" + join(leftJs, rightJs) + ")";
            },
            SpreadElement: function generateSpreadElement($expr) {
                var $arg = $expr.argument;
                _.js += "...";
                ExprGen[$arg.type]($arg, Preset.e4);
            },
            TaggedTemplateExpression: function generateTaggedTemplateExpression($expr, settings) {
                var $tag = $expr.tag, $quasi = $expr.quasi, parenthesize = Precedence.TaggedTemplate < settings.precedence;
                if (parenthesize) _.js += "(";
                ExprGen[$tag.type]($tag, Preset.e11(settings.allowCall));
                ExprGen[$quasi.type]($quasi, Preset.e12);
                if (parenthesize) _.js += ")";
            },
            TemplateElement: function generateTemplateElement($expr) {
                _.js += $expr.value.raw;
            },
            TemplateLiteral: function generateTemplateLiteral($expr) {
                var $quasis = $expr.quasis, $childExprs = $expr.expressions, quasiCount = $quasis.length, lastQuasiIdx = quasiCount - 1;
                _.js += "`";
                for (var i = 0; i < quasiCount; ++i) {
                    var $quasi = $quasis[i];
                    ExprGen[$quasi.type]($quasi, Preset.e13);
                    if (i !== lastQuasiIdx) {
                        var $childExpr = $childExprs[i];
                        _.js += "${" + _.optSpace;
                        ExprGen[$childExpr.type]($childExpr, Preset.e5);
                        _.js += _.optSpace + "}";
                    }
                }
                _.js += "`";
            }
        };
        var EXPR_STMT_UNALLOWED_EXPR_REGEXP = /^{|^class(?:\s|{)|^function(?:\s|\*|\()/;
        function generateTryStatementHandlers(stmtJs, $finalizer, handlers) {
            var handlerCount = handlers.length, lastHandlerIdx = handlerCount - 1;
            for (var i = 0; i < handlerCount; ++i) {
                var handlerJs = stmtToJs(handlers[i], Preset.s7);
                stmtJs = join(stmtJs, handlerJs);
                if ($finalizer || i !== lastHandlerIdx) stmtJs += adoptionSuffix(handlers[i].body);
            }
            return stmtJs;
        }
        function generateForStatementIterator($op, $stmt, settings) {
            var $body = $stmt.body, $left = $stmt.left, bodySemicolonOptional = !semicolons && settings.semicolonOptional, prevIndent1 = shiftIndent(), stmtJs = "for" + _.optSpace + "(";
            if ($left.type === Syntax.VariableDeclaration) {
                var prevIndent2 = shiftIndent();
                stmtJs += $left.kind + _.space + stmtToJs($left.declarations[0], Preset.s6);
                _.indent = prevIndent2;
            } else stmtJs += exprToJs($left, Preset.e10);
            stmtJs = join(stmtJs, $op);
            var rightJs = exprToJs($stmt.right, Preset.e5);
            stmtJs = join(stmtJs, rightJs) + ")";
            _.indent = prevIndent1;
            _.js += stmtJs + adoptionPrefix($body);
            StmtGen[$body.type]($body, Preset.s4(bodySemicolonOptional));
        }
        var StmtRawGen = {
            BlockStatement: function generateBlockStatement($stmt, settings) {
                var $body = $stmt.body, len = $body.length, lastIdx = len - 1, prevIndent = shiftIndent();
                _.js += "{" + _.newline;
                if (settings.functionBody && !$body.length) _.js += "/**/";
                for (var i = 0; i < len; i++) {
                    var $item = $body[i];
                    _.js += _.indent;
                    StmtGen[$item.type]($item, Preset.s1(settings.functionBody, i === lastIdx));
                    _.js += _.newline;
                }
                _.indent = prevIndent;
                _.js += _.indent + "}";
            },
            BreakStatement: function generateBreakStatement($stmt, settings) {
                if ($stmt.label) _.js += "break " + $stmt.label.name; else _.js += "break";
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            ContinueStatement: function generateContinueStatement($stmt, settings) {
                if ($stmt.label) _.js += "continue " + $stmt.label.name; else _.js += "continue";
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            ClassBody: function generateClassBody($stmt) {
                var $body = $stmt.body, itemCount = $body.length, lastItemIdx = itemCount - 1, prevIndent = shiftIndent();
                _.js += "{" + _.newline;
                for (var i = 0; i < itemCount; i++) {
                    var $item = $body[i], itemType = $item.type || Syntax.Property;
                    _.js += _.indent;
                    ExprGen[itemType]($item, Preset.e5);
                    if (i !== lastItemIdx) _.js += _.newline;
                }
                _.indent = prevIndent;
                _.js += _.newline + _.indent + "}";
            },
            ClassDeclaration: function generateClassDeclaration($stmt) {
                var $body = $stmt.body, $super = $stmt.superClass, js = "class " + $stmt.id.name;
                if ($super) {
                    var superJs = exprToJs($super, Preset.e4);
                    js += _.space + join("extends", superJs);
                }
                _.js += js + _.optSpace;
                StmtGen[$body.type]($body, Preset.s2);
            },
            DirectiveStatement: function generateDirectiveStatement($stmt, settings) {
                if (extra.raw && $stmt.raw) _.js += $stmt.raw; else _.js += escapeDirective($stmt.directive);
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            DoWhileStatement: function generateDoWhileStatement($stmt, settings) {
                var $body = $stmt.body, $test = $stmt.test, bodyJs = adoptionPrefix($body) + stmtToJs($body, Preset.s7) + adoptionSuffix($body);
                var stmtJs = join("do", bodyJs);
                _.js += join(stmtJs, "while" + _.optSpace + "(");
                ExprGen[$test.type]($test, Preset.e5);
                _.js += ")";
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            CatchClause: function generateCatchClause($stmt) {
                var $param = $stmt.param, $guard = $stmt.guard, $body = $stmt.body, prevIndent = shiftIndent();
                _.js += "catch" + _.optSpace + "(";
                ExprGen[$param.type]($param, Preset.e5);
                if ($guard) {
                    _.js += " if ";
                    ExprGen[$guard.type]($guard, Preset.e5);
                }
                _.indent = prevIndent;
                _.js += ")" + adoptionPrefix($body);
                StmtGen[$body.type]($body, Preset.s7);
            },
            DebuggerStatement: function generateDebuggerStatement($stmt, settings) {
                _.js += "debugger";
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            EmptyStatement: function generateEmptyStatement() {
                _.js += ";";
            },
            ExportDeclaration: function generateExportDeclaration($stmt, settings) {
                var $specs = $stmt.specifiers, $decl = $stmt.declaration, withSemicolon = semicolons || !settings.semicolonOptional;
                if ($stmt["default"]) {
                    var declJs = exprToJs($decl, Preset.e4);
                    _.js += join("export default", declJs);
                    if (withSemicolon) _.js += ";";
                } else if ($specs) {
                    var stmtJs = "export";
                    if ($specs.length === 0) stmtJs += _.optSpace + "{" + _.optSpace + "}"; else if ($specs[0].type === Syntax.ExportBatchSpecifier) {
                        var specJs = exprToJs($specs[0], Preset.e5);
                        stmtJs = join(stmtJs, specJs);
                    } else {
                        var prevIndent = shiftIndent(), specCount = $specs.length, lastSpecIdx = specCount - 1;
                        stmtJs += _.optSpace + "{";
                        for (var i = 0; i < specCount; ++i) {
                            stmtJs += _.newline + _.indent;
                            stmtJs += exprToJs($specs[i], Preset.e5);
                            if (i !== lastSpecIdx) stmtJs += ",";
                        }
                        _.indent = prevIndent;
                        stmtJs += _.newline + _.indent + "}";
                    }
                    if ($stmt.source) {
                        _.js += join(stmtJs, "from" + _.optSpace);
                        ExprGen.Literal($stmt.source);
                    } else _.js += stmtJs;
                    if (withSemicolon) _.js += ";";
                } else if ($decl) {
                    var declJs = stmtToJs($decl, Preset.s4(!withSemicolon));
                    _.js += join("export", declJs);
                }
            },
            ExpressionStatement: function generateExpressionStatement($stmt, settings) {
                var exprJs = exprToJs($stmt.expression, Preset.e5), parenthesize = EXPR_STMT_UNALLOWED_EXPR_REGEXP.test(exprJs) || directive && settings.directiveContext && $stmt.expression.type === Syntax.Literal && typeof $stmt.expression.value === "string";
                if (parenthesize) _.js += "(" + exprJs + ")"; else _.js += exprJs;
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            ImportDeclaration: function generateImportDeclaration($stmt, settings) {
                var $specs = $stmt.specifiers, stmtJs = "import", specCount = $specs.length;
                if (specCount) {
                    var hasBinding = !!$specs[0]["default"], firstNamedIdx = hasBinding ? 1 : 0, lastSpecIdx = specCount - 1;
                    if (hasBinding) stmtJs = join(stmtJs, $specs[0].id.name);
                    if (firstNamedIdx < specCount) {
                        if (hasBinding) stmtJs += ",";
                        stmtJs += _.optSpace + "{";
                        if (firstNamedIdx === lastSpecIdx) stmtJs += _.optSpace + exprToJs($specs[firstNamedIdx], Preset.e5) + _.optSpace; else {
                            var prevIndent = shiftIndent();
                            for (var i = firstNamedIdx; i < specCount; i++) {
                                stmtJs += _.newline + _.indent + exprToJs($specs[i], Preset.e5);
                                if (i !== lastSpecIdx) stmtJs += ",";
                            }
                            _.indent = prevIndent;
                            stmtJs += _.newline + _.indent;
                        }
                        stmtJs += "}" + _.optSpace;
                    }
                    stmtJs = join(stmtJs, "from");
                }
                _.js += stmtJs + _.optSpace;
                ExprGen.Literal($stmt.source);
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            VariableDeclarator: function generateVariableDeclarator($stmt, settings) {
                var $id = $stmt.id, $init = $stmt.init, genSettings = Preset.e1(settings.allowIn);
                if ($init) {
                    ExprGen[$id.type]($id, genSettings);
                    _.js += _.optSpace + "=" + _.optSpace;
                    ExprGen[$init.type]($init, genSettings);
                } else {
                    if ($id.type === Syntax.Identifier) _.js += $id.name; else ExprGen[$id.type]($id, genSettings);
                }
            },
            VariableDeclaration: function generateVariableDeclaration($stmt, settings) {
                var $decls = $stmt.declarations, len = $decls.length, prevIndent = len > 1 ? shiftIndent() : _.indent, declGenSettings = Preset.s3(settings.allowIn);
                _.js += $stmt.kind;
                for (var i = 0; i < len; i++) {
                    var $decl = $decls[i];
                    _.js += i === 0 ? _.space : "," + _.optSpace;
                    StmtGen[$decl.type]($decl, declGenSettings);
                }
                if (semicolons || !settings.semicolonOptional) _.js += ";";
                _.indent = prevIndent;
            },
            ThrowStatement: function generateThrowStatement($stmt, settings) {
                var argJs = exprToJs($stmt.argument, Preset.e5);
                _.js += join("throw", argJs);
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            TryStatement: function generateTryStatement($stmt) {
                var $block = $stmt.block, $finalizer = $stmt.finalizer, stmtJs = "try" + adoptionPrefix($block) + stmtToJs($block, Preset.s7) + adoptionSuffix($block);
                var $handlers = $stmt.handlers || $stmt.guardedHandlers;
                if ($handlers) stmtJs = generateTryStatementHandlers(stmtJs, $finalizer, $handlers);
                if ($stmt.handler) {
                    $handlers = isArray($stmt.handler) ? $stmt.handler : [ $stmt.handler ];
                    stmtJs = generateTryStatementHandlers(stmtJs, $finalizer, $handlers);
                }
                if ($finalizer) {
                    stmtJs = join(stmtJs, "finally" + adoptionPrefix($finalizer));
                    stmtJs += stmtToJs($finalizer, Preset.s7);
                }
                _.js += stmtJs;
            },
            SwitchStatement: function generateSwitchStatement($stmt) {
                var $cases = $stmt.cases, $discr = $stmt.discriminant, prevIndent = shiftIndent();
                _.js += "switch" + _.optSpace + "(";
                ExprGen[$discr.type]($discr, Preset.e5);
                _.js += ")" + _.optSpace + "{" + _.newline;
                _.indent = prevIndent;
                if ($cases) {
                    var caseCount = $cases.length, lastCaseIdx = caseCount - 1;
                    for (var i = 0; i < caseCount; i++) {
                        var $case = $cases[i];
                        _.js += _.indent;
                        StmtGen[$case.type]($case, Preset.s4(i === lastCaseIdx));
                        _.js += _.newline;
                    }
                }
                _.js += _.indent + "}";
            },
            SwitchCase: function generateSwitchCase($stmt, settings) {
                var $conseqs = $stmt.consequent, $firstConseq = $conseqs[0], $test = $stmt.test, i = 0, conseqSemicolonOptional = !semicolons && settings.semicolonOptional, conseqCount = $conseqs.length, lastConseqIdx = conseqCount - 1, prevIndent = shiftIndent();
                if ($test) {
                    var testJs = exprToJs($test, Preset.e5);
                    _.js += join("case", testJs) + ":";
                } else _.js += "default:";
                if (conseqCount && $firstConseq.type === Syntax.BlockStatement) {
                    i++;
                    _.js += adoptionPrefix($firstConseq);
                    StmtGen[$firstConseq.type]($firstConseq, Preset.s7);
                }
                for (;i < conseqCount; i++) {
                    var $conseq = $conseqs[i], semicolonOptional = i === lastConseqIdx && conseqSemicolonOptional;
                    _.js += _.newline + _.indent;
                    StmtGen[$conseq.type]($conseq, Preset.s4(semicolonOptional));
                }
                _.indent = prevIndent;
            },
            IfStatement: function generateIfStatement($stmt, settings) {
                var $conseq = $stmt.consequent, $test = $stmt.test, prevIndent = shiftIndent(), semicolonOptional = !semicolons && settings.semicolonOptional;
                _.js += "if" + _.optSpace + "(";
                ExprGen[$test.type]($test, Preset.e5);
                _.js += ")";
                _.indent = prevIndent;
                _.js += adoptionPrefix($conseq);
                if ($stmt.alternate) {
                    var conseq = stmtToJs($conseq, Preset.s7) + adoptionSuffix($conseq), alt = stmtToJs($stmt.alternate, Preset.s4(semicolonOptional));
                    if ($stmt.alternate.type === Syntax.IfStatement) alt = "else " + alt; else alt = join("else", adoptionPrefix($stmt.alternate) + alt);
                    _.js += join(conseq, alt);
                } else StmtGen[$conseq.type]($conseq, Preset.s4(semicolonOptional));
            },
            ForStatement: function generateForStatement($stmt, settings) {
                var $init = $stmt.init, $test = $stmt.test, $body = $stmt.body, $update = $stmt.update, bodySemicolonOptional = !semicolons && settings.semicolonOptional, prevIndent = shiftIndent();
                _.js += "for" + _.optSpace + "(";
                if ($init) {
                    if ($init.type === Syntax.VariableDeclaration) StmtGen[$init.type]($init, Preset.s6); else {
                        ExprGen[$init.type]($init, Preset.e14);
                        _.js += ";";
                    }
                } else _.js += ";";
                if ($test) {
                    _.js += _.optSpace;
                    ExprGen[$test.type]($test, Preset.e5);
                }
                _.js += ";";
                if ($update) {
                    _.js += _.optSpace;
                    ExprGen[$update.type]($update, Preset.e5);
                }
                _.js += ")";
                _.indent = prevIndent;
                _.js += adoptionPrefix($body);
                StmtGen[$body.type]($body, Preset.s4(bodySemicolonOptional));
            },
            ForInStatement: function generateForInStatement($stmt, settings) {
                generateForStatementIterator("in", $stmt, settings);
            },
            ForOfStatement: function generateForOfStatement($stmt, settings) {
                generateForStatementIterator("of", $stmt, settings);
            },
            LabeledStatement: function generateLabeledStatement($stmt, settings) {
                var $body = $stmt.body, bodySemicolonOptional = !semicolons && settings.semicolonOptional, prevIndent = _.indent;
                _.js += $stmt.label.name + ":" + adoptionPrefix($body);
                if ($body.type !== Syntax.BlockStatement) prevIndent = shiftIndent();
                StmtGen[$body.type]($body, Preset.s4(bodySemicolonOptional));
                _.indent = prevIndent;
            },
            ModuleDeclaration: function generateModuleDeclaration($stmt, settings) {
                _.js += "module" + _.space + $stmt.id.name + _.space + "from" + _.optSpace;
                ExprGen.Literal($stmt.source);
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            Program: function generateProgram($stmt) {
                var $body = $stmt.body, len = $body.length, lastIdx = len - 1;
                if (safeConcatenation && len > 0) _.js += "\n";
                for (var i = 0; i < len; i++) {
                    var $item = $body[i];
                    _.js += _.indent;
                    StmtGen[$item.type]($item, Preset.s5(!safeConcatenation && i === lastIdx));
                    if (i !== lastIdx) _.js += _.newline;
                }
            },
            FunctionDeclaration: function generateFunctionDeclaration($stmt) {
                var isGenerator = !!$stmt.generator;
                _.js += isGenerator ? "function*" + _.optSpace : "function" + _.space;
                _.js += $stmt.id.name;
                generateFunctionBody($stmt);
            },
            ReturnStatement: function generateReturnStatement($stmt, settings) {
                var $arg = $stmt.argument;
                if ($arg) {
                    var argJs = exprToJs($arg, Preset.e5);
                    _.js += join("return", argJs);
                } else _.js += "return";
                if (semicolons || !settings.semicolonOptional) _.js += ";";
            },
            WhileStatement: function generateWhileStatement($stmt, settings) {
                var $body = $stmt.body, $test = $stmt.test, bodySemicolonOptional = !semicolons && settings.semicolonOptional, prevIndent = shiftIndent();
                _.js += "while" + _.optSpace + "(";
                ExprGen[$test.type]($test, Preset.e5);
                _.js += ")";
                _.indent = prevIndent;
                _.js += adoptionPrefix($body);
                StmtGen[$body.type]($body, Preset.s4(bodySemicolonOptional));
            },
            WithStatement: function generateWithStatement($stmt, settings) {
                var $body = $stmt.body, $obj = $stmt.object, bodySemicolonOptional = !semicolons && settings.semicolonOptional, prevIndent = shiftIndent();
                _.js += "with" + _.optSpace + "(";
                ExprGen[$obj.type]($obj, Preset.e5);
                _.js += ")";
                _.indent = prevIndent;
                _.js += adoptionPrefix($body);
                StmtGen[$body.type]($body, Preset.s4(bodySemicolonOptional));
            }
        };
        function generateStatement($stmt, option) {
            StmtGen[$stmt.type]($stmt, option);
        }
        function exprToJs($expr, settings) {
            var savedJs = _.js;
            _.js = "";
            ExprGen[$expr.type]($expr, settings);
            var src = _.js;
            _.js = savedJs;
            return src;
        }
        function stmtToJs($stmt, settings) {
            var savedJs = _.js;
            _.js = "";
            StmtGen[$stmt.type]($stmt, settings);
            var src = _.js;
            _.js = savedJs;
            return src;
        }
        function run($node) {
            _.js = "";
            if (StmtGen[$node.type]) StmtGen[$node.type]($node, Preset.s7); else ExprGen[$node.type]($node, Preset.e19);
            return _.js;
        }
        function wrapExprGen(gen) {
            return function($expr, settings) {
                if (extra.verbatim && $expr.hasOwnProperty(extra.verbatim)) generateVerbatim($expr, settings); else gen($expr, settings);
            };
        }
        function createExprGenWithExtras() {
            var gens = {};
            for (var key in ExprRawGen) {
                if (ExprRawGen.hasOwnProperty(key)) gens[key] = wrapExprGen(ExprRawGen[key]);
            }
            return gens;
        }
        var _ = {
            js: "",
            newline: "\n",
            optSpace: " ",
            space: " ",
            indentUnit: "    ",
            indent: ""
        };
        var ExprGen = void 0, StmtGen = StmtRawGen;
        function generate($node, options) {
            var defaultOptions = getDefaultOptions(), result, pair;
            if (options != null) {
                if (typeof options.indent === "string") {
                    defaultOptions.format.indent.style = options.indent;
                }
                if (typeof options.base === "number") {
                    defaultOptions.format.indent.base = options.base;
                }
                options = updateDeeply(defaultOptions, options);
                _.indentUnit = options.format.indent.style;
                if (typeof options.base === "string") {
                    _.indent = options.base;
                } else {
                    _.indent = stringRepeat(_.indentUnit, options.format.indent.base);
                }
            } else {
                options = defaultOptions;
                _.indentUnit = options.format.indent.style;
                _.indent = stringRepeat(_.indentUnit, options.format.indent.base);
            }
            json = options.format.json;
            renumber = options.format.renumber;
            hexadecimal = json ? false : options.format.hexadecimal;
            quotes = json ? "double" : options.format.quotes;
            escapeless = options.format.escapeless;
            _.newline = options.format.newline;
            _.optSpace = options.format.space;
            if (options.format.compact) _.newline = _.optSpace = _.indentUnit = _.indent = "";
            _.space = _.optSpace ? _.optSpace : " ";
            parentheses = options.format.parentheses;
            semicolons = options.format.semicolons;
            safeConcatenation = options.format.safeConcatenation;
            directive = options.directive;
            parse = json ? null : options.parse;
            extra = options;
            if (extra.verbatim) ExprGen = createExprGenWithExtras(); else ExprGen = ExprRawGen;
            return run($node);
        }
        FORMAT_MINIFY = {
            indent: {
                style: "",
                base: 0
            },
            renumber: true,
            hexadecimal: true,
            quotes: "auto",
            escapeless: true,
            compact: true,
            parentheses: false,
            semicolons: false
        };
        FORMAT_DEFAULTS = getDefaultOptions().format;
        exports.generate = generate;
        exports.Precedence = updateDeeply({}, Precedence);
        exports.browser = false;
        exports.FORMAT_MINIFY = FORMAT_MINIFY;
        exports.FORMAT_DEFAULTS = FORMAT_DEFAULTS;
    })(codeGetExports);
    JSParsingTools.generate = codeGetExports.generate;
    if (typeof module !== "undefined" && module.exports) module.exports = JSParsingTools; else {
        HammerheadClient.define("Shared.JSParsingTools", function() {
            this.exports = JSParsingTools;
        });
    }
})();