var tslErrorsDomain = require("domain").create(), http = require("http"), https = require("https"), os = require("os"), url = require("url"), util = require("util"), webauth = require("webauth"), ERR = require("./server_errs"), Events = require("./events"), exec = require("child_process").exec, formData = require("./form_data"), injector = require("./injector"), sharedConst = require("./../shared/const"), urlUtil = require("./url_util");

process.env.NODE_TLS_REJECT_UNAUTHORIZED = "0";

var HTTPS_AGENT_CACHE_LIMIT = 1e3, ORIGIN_REQUEST_TIMEOUT = 25 * 1e3;

var httpAgent = new http.Agent(), httpsAgent = new https.Agent(), httpsAgentFallback = new https.Agent(), httpsAgentsCache = {};

httpAgent.maxSockets = httpsAgent.maxSockets = httpsAgentFallback.maxSockets = 256;

httpsAgent.options.secureProtocol = "TLSv1_method";

httpsAgentFallback.options.secureProtocol = "SSLv3_method";

var curUserDomain = "", curUserWorkstation = "", isWin = !!os.platform().match(/^win/);

if (isWin) {
    exec("echo %userdomain%", function(error, domain) {
        if (!error) curUserDomain = domain.replace(/\s/g, "");
    });
    exec("hostname", function(error, hostname) {
        if (!error) curUserWorkstation = hostname.replace(/\s/g, "");
    });
}

tslErrorsDomain.on("error", function(err) {
    if (err.code !== "ECONNRESET") {
        tslErrorsDomain.removeAllListeners("error");
        throw new Error(err);
    }
});

function getContentLength(bodyChunks) {
    var length = 0;
    bodyChunks.forEach(function(chunk) {
        length += chunk.length;
    });
    return length;
}

function testForPageMime(header) {
    return header && /(text\/html)|(application\/xhtml\+xml)|(application\/xml)|(application\/x-ms-application)/gi.test(header);
}

function getCharset(contentTypeHeader) {
    if (contentTypeHeader) {
        var charsetMatch = contentTypeHeader.match(/(?:^|;)\s*charset=(.+)(?:;|$)/i);
        if (charsetMatch) return charsetMatch[1];
    }
    return null;
}

function isSSLProtocolErr(err) {
    return err.message && err.message.indexOf("SSL routines") > -1;
}

function isDNSErr(err) {
    return err.message && err.message.indexOf("ENOTFOUND") > -1;
}

function isCSSResource(contentType, accept) {
    return contentType.indexOf("text/css") !== -1 || accept === "text/css";
}

function isScriptResource(contentType, accept) {
    return contentType.indexOf("application/javascript") !== -1 || contentType.indexOf("text/javascript") !== -1 || contentType.indexOf("application/x-javascript") !== -1 || accept === "application/javascript" || accept === "text/javascript" || accept === "application/x-javascript";
}

function isManifest(contentType) {
    return contentType.indexOf("text/cache-manifest") !== -1;
}

function isJSON(contentType) {
    return contentType.indexOf("application/json") !== -1;
}

var Server = module.exports = function(port, crossDomainProxyPort, hostname, cookieShelf, serviceChannel) {
    this.port = port;
    this.crossDomainProxyPort = crossDomainProxyPort;
    this.hostname = hostname;
    this.events = new Events();
    this.cookieShelf = cookieShelf;
    this.serviceChannel = serviceChannel;
    this.originReqTimeout = ORIGIN_REQUEST_TIMEOUT;
    var server = this;
    this.server = http.createServer(function(req, res) {
        var parsedProxyUrl = urlUtil.parseProxyUrl(req.url);
        var isXhr = !!req.headers[sharedConst.XHR_REQUEST_MARKER_HEADER], isIFrame = parsedProxyUrl && parsedProxyUrl.resourceType === urlUtil.IFRAME, isScript = parsedProxyUrl && parsedProxyUrl.resourceType === urlUtil.SCRIPT, ctx = {
            jobInfo: null,
            req: req,
            reqBodyChunks: [],
            res: res,
            resHeaders: {},
            originResourceInfo: null,
            originResContentInfo: null,
            originReqOptions: {},
            originReq: null,
            originRes: null,
            originResBodyChunks: [],
            isXhr: isXhr,
            isScript: isScript,
            isIFrame: isIFrame,
            isPageReqCandidate: !isXhr && testForPageMime(req.headers["accept"]),
            originReqErr: false
        };
        server._onProxyRequest(ctx);
    });
    this.server.on("error", function(err) {
        if (err.code === "EADDRINUSE") {
            server.events.broadcast.emit("fatalError", {
                code: ERR.PROXY_PORT_IS_ALREADY_IN_USE,
                port: server.port
            });
        }
    });
};

Server.prototype.start = function() {
    this.server.listen(this.port);
};

Server.prototype.close = function() {
    this.server.close();
};

Server.prototype.getProxyUrl = function(originUrl, jobUid, jobOwnerToken, resourceType) {
    return urlUtil.getProxyUrl(originUrl, this.hostname, this.port, jobUid, jobOwnerToken, resourceType);
};

Server.prototype.getInjectOptions = function(ctx) {
    var injectionOptions = {
        crossDomainProxyPort: this.crossDomainProxyPort,
        isIFrame: ctx.isIFrame,
        styleUrl: this.serviceChannel.staticCssUrl,
        scripts: [],
        urlReplacer: this.getResourceUrlReplacer(ctx)
    };
    injectionOptions.scripts.push(this.serviceChannel.hammerheadScriptUrl);
    var isIframeWithImageSrc = ctx.originResContentInfo && (ctx.originResContentInfo.isIFrame && !ctx.originResContentInfo.isPage);
    if (isIframeWithImageSrc) injectionOptions.iframeImageSrc = ctx.originResourceInfo.url;
    for (var i = 0; i < this.serviceChannel.staticScripts.length; i++) {
        var script = this.serviceChannel.staticScripts[i];
        if (!script.requiredJobOwnerToken || script.requiredJobOwnerToken === ctx.jobInfo.ownerToken) injectionOptions.scripts.push(script.url);
    }
    injectionOptions.scripts.push(ctx.originResContentInfo && ctx.originResContentInfo.isIFrame ? this.serviceChannel.iframeTaskScriptUrl : this.serviceChannel.taskScriptUrl);
    return injectionOptions;
};

Server.prototype.injectInPage = function(ctx, callback) {
    var injectionOptions = this.getInjectOptions(ctx), chunks = ctx.originResBodyChunks, encoding = ctx.originResContentInfo.encoding, charset = ctx.originResContentInfo.charset;
    injector.injectInPage(chunks, encoding, charset, injectionOptions, callback);
};

Server.prototype.getResourceUrlReplacer = function(ctx) {
    var server = this;
    return function(resourceUrl, resourceType, baseUrl) {
        baseUrl = baseUrl ? url.resolve(ctx.originResourceInfo.url, baseUrl) : "";
        resourceUrl = urlUtil.prepareUrl(resourceUrl);
        var resolvedUrl = url.resolve(baseUrl || ctx.originResourceInfo.url, resourceUrl);
        try {
            return server.getProxyUrl(resolvedUrl, ctx.jobInfo.uid, ctx.jobInfo.ownerToken, resourceType);
        } catch (err) {
            return resourceUrl;
        }
    };
};

Server.prototype._error = function(ctx, err) {
    var eventsInCtx = this.events.in(ctx);
    if (eventsInCtx.canHandle("error")) eventsInCtx.emit("error", err); else {
        ctx.res.statusCode = 500;
        ctx.res.end();
    }
};

Server.prototype._extractReqInfo = function(ctx) {
    if (ctx.req.url === "/favicon.ico") {
        ctx.res.statusCode = 404;
        ctx.res.end();
        return;
    }
    var parsingResult = urlUtil.parseProxyUrl(ctx.req.url), referer = ctx.req.headers["referer"], refererParsingResult = null;
    try {
        refererParsingResult = referer && urlUtil.parseProxyUrl(referer);
    } catch (err) {
        refererParsingResult = null;
    }
    if (refererParsingResult) {
        if (refererParsingResult.originResourceInfo.protocol === "https:" && refererParsingResult.originResourceInfo.port === "443" || refererParsingResult.originResourceInfo.protocol === "http:" && refererParsingResult.originResourceInfo.port === "80") {
            refererParsingResult.originResourceInfo.host = refererParsingResult.originResourceInfo.host.split(":")[0];
            refererParsingResult.originResourceInfo.port = "";
        }
    }
    if (!parsingResult) {
        if (!refererParsingResult) return null;
        var parsedReqUrl = url.parse(ctx.req.url, true), hostParts = parsedReqUrl.host && parsedReqUrl.host.split(":");
        parsingResult = {
            originResourceInfo: {
                protocol: parsedReqUrl.protocol || refererParsingResult.originResourceInfo.protocol,
                host: parsedReqUrl.host || refererParsingResult.originResourceInfo.host,
                hostname: hostParts ? hostParts[0] : refererParsingResult.originResourceInfo.hostname,
                port: hostParts ? hostParts[1] : refererParsingResult.originResourceInfo.port,
                pathname: parsedReqUrl.pathname,
                query: parsedReqUrl.query,
                hash: parsedReqUrl.hash
            },
            jobInfo: refererParsingResult.jobInfo
        };
    }
    parsingResult.originResourceInfo.url = urlUtil.formatUrl(parsingResult.originResourceInfo);
    parsingResult.originResourceInfo.domain = urlUtil.formatUrl({
        protocol: parsingResult.originResourceInfo.protocol,
        host: parsingResult.originResourceInfo.host,
        hostname: parsingResult.originResourceInfo.hostname,
        port: parsingResult.originResourceInfo.port
    });
    if (refererParsingResult) {
        var refererResourceInfo = refererParsingResult.originResourceInfo;
        parsingResult.originResourceInfo.referer = urlUtil.formatUrl(refererResourceInfo);
        parsingResult.originResourceInfo.reqOrigin = urlUtil.formatUrl({
            protocol: refererResourceInfo.protocol,
            host: refererResourceInfo.host,
            hostname: refererResourceInfo.hostname,
            port: refererResourceInfo.port
        });
    }
    return parsingResult;
};

Server.prototype._onProxyRequest = function(ctx) {
    ctx.req.on("data", function(chunk) {
        ctx.reqBodyChunks.push(chunk);
    });
    var server = this;
    ctx.req.on("end", function() {
        if (server.serviceChannel.shouldProcess(ctx)) server.serviceChannel.process(ctx); else {
            var requestInfo = server._extractReqInfo(ctx);
            if (!requestInfo) {
                ctx.res.statusCode = 404;
                ctx.res.end();
                return;
            }
            ctx.originResourceInfo = requestInfo.originResourceInfo;
            ctx.originReqOptions.hostname = ctx.originResourceInfo.hostname;
            ctx.jobInfo = requestInfo.jobInfo;
            server._prepareOriginRequest(ctx);
        }
    });
};

Server.prototype._prepareCredentials = function(credentials) {
    credentials.domain = credentials.domain || curUserDomain;
    credentials.workstation = credentials.workstation || curUserWorkstation;
    return credentials;
};

Server.prototype._prepareOriginRequest = function(ctx) {
    ctx.originReqOptions.port = ctx.originResourceInfo.port;
    ctx.originReqOptions.method = ctx.req.method;
    ctx.originReqOptions.path = urlUtil.formatUrl({
        pathname: ctx.originResourceInfo.pathname,
        query: ctx.originResourceInfo.query
    });
    ctx.originReqOptions.hash = ctx.originResourceInfo.hash;
    ctx.originReqOptions.headers = {};
    if (ctx.originResourceInfo.protocol === "http:") ctx.originReqOptions.agent = httpAgent; else if (!httpsAgentsCache[ctx.originReqOptions.hostname]) ctx.originReqOptions.agent = httpsAgent; else ctx.originReqOptions.agent = httpsAgentFallback;
    var server = this;
    Object.keys(ctx.req.headers).forEach(function(field) {
        switch (field) {
          case "host":
            ctx.originReqOptions.headers[field] = ctx.originResourceInfo.host;
            break;

          case "referer":
            if (ctx.originResourceInfo.referer) ctx.originReqOptions.headers[field] = ctx.originResourceInfo.referer;
            break;

          case "origin":
            ctx.originReqOptions.headers[field] = ctx.originResourceInfo.reqOrigin || ctx.req.headers["origin"];
            break;

          case "cookie":
            break;

          case sharedConst.XHR_REQUEST_MARKER_HEADER:
            break;

          default:
            ctx.originReqOptions.headers[field] = ctx.req.headers[field];
        }
    });
    if (ctx.isXhr && !ctx.req.headers["origin"] && ctx.originResourceInfo.domain !== ctx.originResourceInfo.reqOrigin) ctx.originReqOptions.headers["origin"] = ctx.originResourceInfo.reqOrigin;
    var processedBodyChunks = formData.processFormData(ctx.req.headers["content-type"], ctx.reqBodyChunks);
    if (processedBodyChunks) {
        ctx.reqBodyChunks = processedBodyChunks;
        if ("content-length" in ctx.originReqOptions.headers) ctx.originReqOptions.headers["content-length"] = getContentLength(ctx.reqBodyChunks);
    }
    var cookieHeader = server.cookieShelf.getCookieHeader(ctx.jobInfo, ctx.originResourceInfo.url);
    if (cookieHeader) ctx.originReqOptions.headers["cookie"] = cookieHeader;
    server._sendOriginRequest(ctx);
};

Server.prototype._sendOriginRequest = function(ctx) {
    var server = this, isHttps = ctx.originResourceInfo.protocol === "https:", protocolInterface = isHttps ? https : http;
    if (isHttps) {
        ctx.originReqOptions.rejectUnauthorized = false;
    }
    var sendRequest = function() {
        tslErrorsDomain.run(function() {
            ctx.originReq = protocolInterface.request(ctx.originReqOptions, function(originRes) {
                ctx.originRes = originRes;
                if (originRes.statusCode === 401) {
                    server.events.in(ctx).emit("authCredentialsRequested", function(credentials) {
                        if (credentials) {
                            ctx.originReq.abort();
                            webauth.auth(ctx.originReqOptions, server._prepareCredentials(credentials), ctx.reqBodyChunks, function(targetRes) {
                                ctx.originRes = targetRes;
                                server._onOriginResponse(ctx);
                            }, isHttps, originRes);
                        } else server._onOriginResponse(ctx);
                    });
                } else server._onOriginResponse(ctx);
            });
        });
        ctx.originReq.setTimeout(server.originReqTimeout, function() {
            if (!ctx.originRes) {
                ctx.originReq.abort();
                server._error(ctx, {
                    code: ERR.PROXY_ORIGIN_SERVER_REQUEST_TIMEOUT,
                    originUrl: ctx.originResourceInfo.url
                });
            }
        });
        ctx.originReq.on("error", function(err) {
            if (isSSLProtocolErr(err) && ctx.originReqOptions.agent.options.secureProtocol === httpsAgent.options.secureProtocol) {
                if (Object.keys(httpsAgentsCache).length > HTTPS_AGENT_CACHE_LIMIT) httpsAgentsCache = {};
                httpsAgentsCache[ctx.originReqOptions.hostname] = true;
                ctx.originReqOptions.agent = httpsAgentFallback;
                sendRequest();
            } else if (isDNSErr(err)) {
                server._error(ctx, {
                    code: ERR.PROXY_CANT_RESOLVE_ORIGIN_URL,
                    originUrl: ctx.originResourceInfo.url
                });
            } else {
                ctx.originReqErr = true;
            }
        });
        ctx.reqBodyChunks.forEach(function(chunk) {
            ctx.originReq.write(chunk);
        });
        ctx.originReq.end();
    };
    sendRequest();
};

Server.prototype._isSameOriginPolicyCompliantRequest = function(ctx) {
    var reqOrigin = ctx.originResourceInfo.reqOrigin;
    if (ctx.originResourceInfo.domain !== reqOrigin) {
        var xhrHeaderValue = ctx.req.headers[sharedConst.XHR_REQUEST_MARKER_HEADER];
        if (xhrHeaderValue & sharedConst.XHR_CORS_SUPPORTED_FLAG) {
            if (ctx.req.method === "OPTIONS") return true;
            var withCredentials = xhrHeaderValue & sharedConst.XHR_WITH_CREDENTIALS_FLAG, allowOriginHeader = ctx.originRes.headers["access-control-allow-origin"], allowCredentialsValue = ctx.originRes.headers["access-control-allow-credentials"], allowCredentials = allowCredentialsValue && allowCredentialsValue.toLowerCase() === "true";
            if (withCredentials && allowOriginHeader === "*") return false;
            if (withCredentials && !allowCredentials) return false;
            return util.isArray(allowOriginHeader) ? allowOriginHeader.indexOf("*") > -1 || allowOriginHeader.indexOf(reqOrigin) > -1 : allowOriginHeader === "*" || allowOriginHeader === reqOrigin;
        }
        return false;
    }
    return true;
};

Server.prototype._extractOriginResponseContentInfo = function(ctx) {
    var isPage = ctx.isPageReqCandidate, contentType = ctx.originRes.headers["content-type"] || "", accept = ctx.req.headers["accept"] || "", isFileDownloading = ctx.originRes.headers["content-disposition"] && ctx.originRes.headers["content-disposition"].indexOf("attachment") > -1 && ctx.originRes.headers["content-disposition"].indexOf("filename") > -1;
    if (isFileDownloading) isFileDownloading = true;
    if (ctx.originRes.headers["content-type"]) isPage = isPage && testForPageMime(contentType);
    ctx.originResContentInfo = {
        encoding: ctx.originRes.headers["content-encoding"],
        charset: getCharset(contentType),
        isPage: isPage,
        isIFrame: ctx.isIFrame,
        isCSS: isCSSResource(contentType, accept),
        isScript: ctx.isScript || isScriptResource(contentType, accept),
        isManifest: isManifest(contentType),
        isJSON: isJSON(contentType),
        isFileDownloading: isFileDownloading
    };
};

Server.prototype._onOriginResponse = function(ctx) {
    this._extractOriginResponseContentInfo(ctx);
    if (ctx.isXhr && !this._isSameOriginPolicyCompliantRequest(ctx)) {
        this._error(ctx, {
            code: ERR.PROXY_XHR_REQUEST_SAME_ORIGIN_POLICY_VIOLATION,
            reqOrigin: ctx.originResourceInfo.reqOrigin,
            xhrReqUrl: ctx.originResourceInfo.url
        });
        ctx.res.statusCode = 0;
        ctx.res.end();
        return;
    }
    var server = this;
    var eventsInCtx = server.events.in(ctx);
    if (eventsInCtx.canHandle("originResponse")) {
        eventsInCtx.emit("originResponse", function() {
            server._processOriginResponse(ctx);
        });
    } else server._processOriginResponse(ctx);
};

Server.prototype._processOriginResponse = function(ctx) {
    var server = this, contentInfo = ctx.originResContentInfo, shouldProcessContent = !ctx.isXhr && (contentInfo.isPage || contentInfo.isCSS || contentInfo.isScript || contentInfo.isIFrame || contentInfo.isManifest || contentInfo.isJSON);
    if (shouldProcessContent) {
        ctx.originRes.on("data", function(chunk) {
            ctx.originResBodyChunks.push(chunk);
        });
        ctx.originRes.on("end", function() {
            server._prepareProcessedProxyResponse(ctx);
        });
    } else {
        server._sendProxyResponseHeaders(ctx, false);
        ctx.originRes.pipe(ctx.res);
    }
};

function getResourceType(ctx) {
    if (ctx.isIFrame) return "iframe";
    if (ctx.isScript) return "script";
    return null;
}

function isIframeWithImageSrc(ctx) {
    var contentInfo = ctx.originResContentInfo;
    return contentInfo.isIFrame && !contentInfo.isPage && /^\s*image\//.test(ctx.originRes.headers["content-type"]);
}

Server.prototype._sendProxyResponseHeaders = function(ctx, recalculateContentLength) {
    var server = this, setCookieHeader = ctx.originRes.headers["set-cookie"];
    if (setCookieHeader) {
        setCookieHeader = setCookieHeader.filter(function(item) {
            return !!item;
        });
        server.cookieShelf.setCookieByServer(ctx.jobInfo, ctx.originResourceInfo.url, setCookieHeader);
    }
    Object.keys(ctx.originRes.headers).forEach(function(field) {
        switch (field) {
          case "set-cookie":
          case "content-security-policy":
          case "content-security-policy-report-only":
          case "x-content-security-policy":
          case "x-content-security-policy-report-only":
          case "x-webkit-csp":
          case "access-control-allow-origin":
            return;

          case "content-type":
            ctx.resHeaders[field] = isIframeWithImageSrc(ctx) ? "text/html" : ctx.originRes.headers[field];
            return;

          case "location":
            var location = ctx.originRes.headers[field];
            var parsedLocation = url.parse(location);
            if (!parsedLocation.host) location = url.resolve(ctx.originResourceInfo.url, location);
            if (ctx.isIFrame && !urlUtil.sameOriginCheck(ctx.originResourceInfo.url, location)) {
                ctx.resHeaders[field] = urlUtil.getCrossDomainIframeProxyUrl(location, server.hostname, server.crossDomainProxyPort, ctx.jobInfo.uid, ctx.jobInfo.ownerToken);
            } else ctx.resHeaders[field] = server.getProxyUrl(location, ctx.jobInfo.uid, ctx.jobInfo.ownerToken, getResourceType(ctx));
            return;

          default:
            ctx.resHeaders[field] = ctx.originRes.headers[field];
        }
    });
    if (recalculateContentLength) ctx.resHeaders["content-length"] = getContentLength(ctx.originResBodyChunks);
    ctx.res.writeHead(ctx.originRes.statusCode, ctx.resHeaders);
    ctx.res._send("");
    ctx.res.addTrailers(ctx.originRes.trailers);
};

Server.prototype._hasOriginReqError = function(ctx) {
    if (!ctx.originReqErr) return false;
    var contentLength = ctx.originRes.headers["content-length"];
    return !ctx.originRes || Object.keys(ctx.originRes.headers).length === 0 || typeof contentLength !== "undefined" && contentLength !== getContentLength(ctx.originResBodyChunks);
};

Server.prototype._processResourceContent = function(ctx, callback) {
    var urlReplacer = this.getResourceUrlReplacer(ctx), contentInfo = ctx.originResContentInfo, processAsPage = contentInfo.isPage || isIframeWithImageSrc(ctx);
    if (ctx.originRes.statusCode !== 200 && (!processAsPage || !ctx.originResBodyChunks.length)) {
        callback();
        return;
    }
    if (processAsPage) {
        var eventsInCtx = this.events.in(ctx);
        this.injectInPage(ctx, function(err, html) {
            if (!err) ctx.originResBodyChunks = [ html ]; else if (eventsInCtx.canHandle("injectionError")) {
                eventsInCtx.emit("injectionError", err);
                return;
            }
            callback();
        });
    } else if (contentInfo.isCSS) {
        injector.injectInStylesheet(ctx.originResBodyChunks, ctx.originResContentInfo.encoding, ctx.originResContentInfo.charset, urlReplacer, function(err, processedStylesheet) {
            if (!err) ctx.originResBodyChunks = [ processedStylesheet ];
            callback();
        });
    } else if (contentInfo.isScript && !ctx.isXhr) {
        injector.injectInScript(ctx.originResBodyChunks, ctx.originResContentInfo.encoding, ctx.originResContentInfo.charset, function(err, processedScript) {
            if (!err) ctx.originResBodyChunks = [ processedScript ];
            callback();
        });
    } else if (contentInfo.isManifest) {
        injector.injectInManifest(ctx.originResBodyChunks, ctx.originResContentInfo.encoding, ctx.originResContentInfo.charset, urlReplacer, function(err, processedManifest) {
            if (!err) ctx.originResBodyChunks = [ processedManifest ];
            callback();
        });
    } else if (contentInfo.isJSON) {
        injector.injectInJSON(ctx.originResBodyChunks, ctx.originResContentInfo.encoding, ctx.originResContentInfo.charset, function(err, processedJSON) {
            if (!err) ctx.originResBodyChunks = [ processedJSON ];
            callback();
        });
    } else callback();
};

Server.prototype._prepareProcessedProxyResponse = function(ctx) {
    if (this._hasOriginReqError(ctx)) {
        this._error(ctx, {
            code: ERR.PROXY_ORIGIN_SERVER_CONNECTION_TERMINATED,
            originUrl: ctx.originResourceInfo.url
        });
        return;
    }
    var server = this;
    server._processResourceContent(ctx, function() {
        server._sendProxyResponseHeaders(ctx, true);
        server._sendProcessedProxyResponseBody(ctx);
    });
};

Server.prototype._sendProcessedProxyResponseBody = function(ctx) {
    try {
        ctx.originResBodyChunks.forEach(function(chunk) {
            ctx.res.write(chunk);
        });
        ctx.res.end();
    } catch (err) {}
};

Server.prototype.getOriginUrl = function(proxyUrl) {
    return urlUtil.formatUrl(urlUtil.parseProxyUrl(proxyUrl).originResourceInfo);
};