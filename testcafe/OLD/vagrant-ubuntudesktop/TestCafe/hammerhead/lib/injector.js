var zlib = require("zlib"), whacko = require("whacko"), iconv = require("iconv-lite"), sharedConst = require("./../shared/const"), pageProc = require("./../shared/page_processor"), ProcessedJsCache = require("./processed_js_cache"), ERR = require("./server_errs");

var jsCache = new ProcessedJsCache();

var ZLIB_INFLATE_INVALID_ENCODING_ERR_CODE = "Z_DATA_ERROR", CHARSET_LIST = [ "iso-8859-1", "iso-8859-2", "iso-8859-3", "iso-8859-4", "iso-8859-5", "iso-8859-6", "iso-8859-7", "iso-8859-8", "iso-8859-9", "iso-8859-10", "iso-8859-11", "iso-8859-12", "iso-8859-13", "iso-8859-14", "iso-8859-15", "iso-8859-16", "windows-1250", "windows-1251", "windows-1252", "windows-1253", "windows-1254", "windows-1255", "windows-1256", "windows-1257", "windows-1258", "windows-874", "windows-866", "koi8-r", "koi8-u", "utf-8", "utf-16", "utf-32", "shift-jis", "x-euc", "big5", "euc-kr" ], BODY_CREATED_EVENT_SCRIPT = [ '<script type="text/javascript" class="' + sharedConst.TEST_CAFE_SCRIPT_CLASSNAME + '">', "if (window.Hammerhead)", "   window.Hammerhead._raiseBodyCreatedEvent();", "var script = document.currentScript || document.scripts[document.scripts.length - 1];", "script.parentNode.removeChild(script);", "</script>" ].join("\n"), DEFAULT_CHARSET = "iso-8859-1", CHARSET_BOM_LIST = [ {
    charset: "utf8",
    bom: [ 239, 187, 191 ]
}, {
    charset: "utf16le",
    bom: [ 255, 254 ]
}, {
    charset: "utf16be",
    bom: [ 254, 255 ]
} ];

function parseCharset(charset) {
    if (charset) {
        for (var i = 0; i < CHARSET_LIST.length; i++) {
            var currentCharset = CHARSET_LIST[i], charsetRegExp = new RegExp(currentCharset.replace(/-/g, ""), "i");
            if (charsetRegExp.test(charset.replace(/-/g, ""))) return currentCharset;
        }
    }
    return charset;
}

function getCharsetFromBOM(resBuf) {
    for (var i = 0; i < CHARSET_BOM_LIST.length; i++) {
        if (checkBOM(resBuf, CHARSET_BOM_LIST[i].bom)) return CHARSET_BOM_LIST[i].charset;
    }
    return null;
}

function checkBOM(resBuf, bom) {
    if (resBuf.length >= bom.length) {
        for (var i = 0; i < bom.length; i++) {
            if (resBuf[i] !== bom[i]) return false;
        }
        return true;
    }
    return false;
}

function concatChunks(chunks) {
    if (chunks.length === 1) return chunks[0];
    var length = 0;
    chunks.forEach(function(chunk) {
        length += chunk.length;
    });
    var data = new Buffer(length), copyPos = 0;
    chunks.forEach(function(chunk) {
        chunk.copy(data, copyPos, 0, chunk.length);
        copyPos += chunk.length;
    });
    return data;
}

function getRawData(chunks, encoding, charsetObj, callback) {
    var encodedData = concatChunks(chunks), decodingCallback = function(err, decodingRes) {
        if (err && !decodingRes) callback({
            code: ERR.INJECTOR_RESOURCE_DECODING_FAILED,
            encoding: encoding
        }); else {
            var rawData = null, charsetFromBOM = getCharsetFromBOM(decodingRes);
            charsetObj.charset = charsetFromBOM || charsetObj.charset;
            if (!charsetObj.charset) {
                charsetObj.charset = DEFAULT_CHARSET;
                charsetObj.isDefault = true;
            }
            if (charsetFromBOM) charsetObj.fromBOM = true;
            try {
                rawData = iconv.decode(decodingRes, charsetObj.charset);
            } catch (decodeErr) {
                callback({
                    code: ERR.INJECTOR_RESOURCE_CHARSET_DECODING_FAILED,
                    charset: charsetObj.charset
                });
                return;
            }
            callback(null, rawData);
        }
    };
    switch (encoding) {
      case "gzip":
        zlib.gunzip(encodedData, decodingCallback);
        break;

      case "deflate":
        zlib.inflate(encodedData, function(err, decodingRes) {
            if (err && err.code === ZLIB_INFLATE_INVALID_ENCODING_ERR_CODE) zlib.inflateRaw(encodedData, decodingCallback); else decodingCallback(err, decodingRes);
        });
        break;

      default:
        decodingCallback(null, encodedData);
        break;
    }
}

function getEncodedData(rawData, encoding, charsetObj, callback) {
    var data = charsetObj.fromBOM ? iconv.encode(rawData, charsetObj.charset, {
        addBOM: true
    }) : iconv.encode(rawData, charsetObj.charset);
    switch (encoding) {
      case "gzip":
        zlib.gzip(data, callback);
        break;

      case "deflate":
        zlib.deflate(data, callback);
        break;

      default:
        callback(null, data);
        break;
    }
}

function inject(chunks, encoding, charset, callback, processor, injectionOptions) {
    var charsetObj = {
        charset: parseCharset(charset),
        isDefault: false,
        fromBOM: false
    };
    getRawData(chunks, encoding, charsetObj, function(decodingErr, rawData) {
        if (decodingErr) {
            callback(decodingErr);
            return;
        }
        var processedData = null;
        try {
            processedData = processor(rawData, charsetObj, injectionOptions);
            if (processedData === null) return;
        } catch (err) {
            callback(err);
            return;
        }
        getEncodedData(processedData, encoding, charsetObj, function(encodingErr, encodedHtml) {
            if (encodingErr) callback({
                code: ERR.INJECTOR_RESOURCE_ENCODING_FAILED,
                encoding: encoding
            }); else callback(null, encodedHtml);
        });
    });
}

exports.injectInPage = function(chunks, encoding, charset, injectionOptions, callback) {
    var parseCharset = function($) {
        var needPragma = null, currentCharset = null;
        $("meta").each(function(index, meta) {
            var $meta = $(meta), httpEquivAttr = $meta.attr("http-equiv"), contentAttr = $meta.attr("content"), charsetAttr = $meta.attr("charset");
            if (needPragma !== false && httpEquivAttr && httpEquivAttr.toLowerCase() === "content-type" && contentAttr) {
                var charsetExec = /charset ?= ?['"]?([^ ;"']*)['"]?/.exec(contentAttr);
                if (charsetExec && charsetExec[1]) {
                    needPragma = true;
                    currentCharset = charsetExec[1];
                }
            }
            if (charsetAttr) {
                needPragma = false;
                currentCharset = charsetAttr;
            }
        });
        return currentCharset;
    };
    var rawDataProcessor = function(rawData, charsetObj, injectionOptions) {
        if (injectionOptions && injectionOptions.iframeImageSrc) rawData = '<html><body><img src="' + injectionOptions.iframeImageSrc + '" /></body></html>';
        var $ = null, bom = pageProc.getBOM(rawData);
        rawData = bom ? rawData.replace(bom, "") : rawData;
        try {
            $ = whacko.load(rawData);
        } catch (parseErrs) {
            throw {
                code: ERR.INJECTOR_DOCUMENT_PARSING_FAILED,
                msg: parseErrs
            };
        }
        if (injectionOptions) {
            if (charsetObj.isDefault) {
                var pageCharset = parseCharset($);
                if (pageCharset && pageCharset.toLowerCase() !== charsetObj.charset.toLowerCase()) {
                    charsetObj.charset = pageCharset;
                    inject(chunks, encoding, charsetObj.charset, callback, rawDataProcessor, injectionOptions);
                    return null;
                }
            }
            var crossDomainProxyPort = injectionOptions.crossDomainProxyPort;
            $('meta[name="referrer"][content="origin"]').remove();
            var handler = function(html, callback) {
                var storedIsIframe = injectionOptions.isIFrame;
                injectionOptions.isIFrame = true;
                var result = rawDataProcessor(html, charsetObj, injectionOptions);
                injectionOptions.isIFrame = storedIsIframe;
                callback(result);
            };
            pageProc.on(pageProc.HTML_PROCESSING_REQUIRED, handler);
            pageProc.processPage($, injectionOptions.urlReplacer, crossDomainProxyPort, injectionOptions.isIFrame);
            pageProc.off(pageProc.HTML_PROCESSING_REQUIRED, handler);
            var injection = [];
            if (injectionOptions.styleUrl) {
                injection.push('<link rel="stylesheet" type="text/css" class="');
                injection.push(sharedConst.TEST_CAFE_UI_STYLESHEET_FULL_CLASSNAME);
                injection.push('"href = "');
                injection.push(injectionOptions.styleUrl);
                injection.push('">');
            }
            if (injectionOptions.scripts) {
                injectionOptions.scripts.forEach(function(scriptUrl) {
                    injection.push('<script type="text/javascript" class="');
                    injection.push(sharedConst.TEST_CAFE_SCRIPT_CLASSNAME);
                    injection.push('" charset="UTF-8" src="');
                    injection.push(scriptUrl);
                    injection.push('">');
                    injection.push("</script>");
                });
            }
            if (injection.length) $("head").prepend(injection.join(""));
            $("body").prepend(BODY_CREATED_EVENT_SCRIPT);
            $('meta[http-equiv="X-UA-Compatible"]').remove();
            $("head").prepend('<meta http-equiv="X-UA-Compatible" content="IE=edge" />');
        }
        return (bom || "") + $.html();
    };
    inject(chunks, encoding, charset, callback, rawDataProcessor, injectionOptions);
};

exports.injectInStylesheet = function(chunks, encoding, charset, urlReplacer, callback) {
    inject(chunks, encoding, charset, callback, function(rawData) {
        return pageProc.processStylesheet(rawData, urlReplacer);
    });
};

exports.injectInScript = function(chunks, encoding, charset, callback) {
    inject(chunks, encoding, charset, callback, function(rawData) {
        var processedJs = jsCache.pick(rawData);
        if (!processedJs) {
            processedJs = pageProc.processScript(rawData);
            jsCache.add(rawData, processedJs);
        }
        return processedJs;
    });
};

exports.injectInManifest = function(chunks, encoding, charset, urlReplacer, callback) {
    inject(chunks, encoding, charset, callback, function(rawData) {
        return pageProc.processManifest(rawData, urlReplacer);
    });
};

exports.injectInJSON = function(chunks, encoding, charset, callback) {
    inject(chunks, encoding, charset, callback, function(rawData) {
        return pageProc.processScript(rawData, true);
    });
};