(function() {
    var isNode = typeof module !== "undefined" && module.exports;
    var UrlUtil = {}, SharedErrors = null;
    UrlUtil.REQUEST_DESCRIPTOR_QUERY_KEY = "7929ba6d39aa4465";
    UrlUtil.REQUEST_DESCRIPTOR_VALUES_SEPARATOR = "|";
    UrlUtil.IFRAME = "iframe";
    UrlUtil.SCRIPT = "script";
    if (isNode) {
        SharedErrors = require("./client_errs");
        module.exports = UrlUtil;
    } else {
        HammerheadClient.define("Shared.UrlUtil", function(require) {
            SharedErrors = require("Shared.Errors");
            this.exports = UrlUtil;
        });
    }
    UrlUtil.isSubDomain = function(domain, subDomain) {
        domain = domain.replace(/^www./i, "");
        subDomain = subDomain.replace(/^www./i, "");
        if (domain === subDomain) return true;
        var index = subDomain.lastIndexOf(domain);
        return subDomain[index - 1] === "." && subDomain.length === index + domain.length;
    };
    UrlUtil.sameOriginCheck = function(location, checkedUrl, parseUrl, resolveUrl) {
        if (!checkedUrl) return true;
        if (resolveUrl) checkedUrl = resolveUrl(checkedUrl);
        var parsedLocation = parseUrl(location), parsedCheckedUrl = parseUrl(checkedUrl, parsedLocation.protocol), parsedProxyLocation = UrlUtil.parseProxyUrl(location, parseUrl), parsedOriginUrl = parsedProxyLocation ? parsedProxyLocation.originResourceInfo : parsedLocation, isRelative = !parsedCheckedUrl.host;
        if (isRelative || parsedCheckedUrl.host === parsedLocation.host && parsedCheckedUrl.protocol === parsedLocation.protocol) return true;
        if (parsedOriginUrl) {
            var portsEq = !parsedOriginUrl.port && !parsedCheckedUrl.port || parsedOriginUrl.port && parsedOriginUrl.port.toString() === parsedCheckedUrl.port;
            if (parsedOriginUrl.protocol === parsedCheckedUrl.protocol && portsEq) {
                if (parsedOriginUrl.hostname === parsedCheckedUrl.hostname) return true;
                return UrlUtil.isSubDomain(parsedOriginUrl.hostname, parsedCheckedUrl.hostname) || UrlUtil.isSubDomain(parsedCheckedUrl.hostname, parsedOriginUrl.hostname);
            }
        }
        return false;
    };
    UrlUtil.getProxyUrl = function(url, proxyHostname, proxyPort, jobUid, jobOwnerToken, resourceType, parseUrl, formatUrl) {
        var parsedOriginUrl = parseUrl(url), originQuery = parsedOriginUrl.query;
        if (parsedOriginUrl.protocol !== "http:" && parsedOriginUrl.protocol !== "https:") throw {
            code: SharedErrors.URL_UTIL_PROTOCOL_IS_NOT_SUPPORTED,
            originUrl: url
        };
        var query = [ parsedOriginUrl.protocol, parsedOriginUrl.host, jobUid, jobOwnerToken ];
        if (resourceType) query.push(resourceType);
        originQuery[UrlUtil.REQUEST_DESCRIPTOR_QUERY_KEY] = query.join(UrlUtil.REQUEST_DESCRIPTOR_VALUES_SEPARATOR);
        return formatUrl({
            protocol: "http:",
            port: proxyPort,
            hostname: proxyHostname,
            pathname: parsedOriginUrl.pathname,
            query: originQuery,
            hash: parsedOriginUrl.hash
        });
    };
    UrlUtil.parseProxyUrl = function(proxyUrl, parseUrl) {
        var parsedProxyUrl = parseUrl(proxyUrl), proxyQuery = parsedProxyUrl.query, descriptor = proxyQuery[UrlUtil.REQUEST_DESCRIPTOR_QUERY_KEY];
        if (!descriptor) return;
        try {
            descriptor = decodeURIComponent(descriptor);
        } catch (e) {
            return;
        }
        var descriptorValues = descriptor.split(UrlUtil.REQUEST_DESCRIPTOR_VALUES_SEPARATOR);
        var originProtocol = descriptorValues[0], originHost = descriptorValues[1], jobUid = descriptorValues[2], jobOwnerToken = descriptorValues[3], resourceType = descriptorValues.length > 4 ? descriptorValues[4] : null;
        if (!originHost || !originProtocol) return;
        delete proxyQuery[UrlUtil.REQUEST_DESCRIPTOR_QUERY_KEY];
        var originHostParts = originHost.split(":");
        return {
            originResourceInfo: {
                protocol: originProtocol,
                host: originHost,
                hostname: originHostParts[0],
                port: originHostParts[1] || "",
                pathname: parsedProxyUrl.pathname,
                query: proxyQuery,
                hash: parsedProxyUrl.hash
            },
            jobInfo: {
                uid: jobUid,
                ownerToken: jobOwnerToken
            },
            resourceType: resourceType
        };
    };
    UrlUtil.isSupportedProtocol = function(url) {
        return !/^\s*(chrome-extension:|blob:|javascript:|about:|mailto:|tel:|data:|skype:|skypec2c:|file:|#)/i.test(url);
    };
    UrlUtil.resolveUrlAsOrigin = function(url, formatUrl, getProxyUrl, parseProxyUrl) {
        if (UrlUtil.isSupportedProtocol(url)) {
            var proxyUrl = getProxyUrl(url), parsedProxyUrl = parseProxyUrl(proxyUrl);
            return formatUrl(parsedProxyUrl.originResourceInfo);
        }
        return url;
    };
    UrlUtil.prepareUrl = function(url) {
        if (url === null && /iPad|iPhone/i.test(window.navigator.userAgent)) return ""; else return (url + "").replace(/\n|\t/g, "");
    };
    UrlUtil.parseQueryString = function(search) {
        var queryStr = search.substr(1), queryParsed = {};
        if (queryStr || search === "?") {
            queryStr.split("&").forEach(function(paramStr) {
                var paramParsed = paramStr.split("="), key = paramParsed.shift(), value = paramParsed.length ? paramParsed.join("=") : null;
                if (key === UrlUtil.REQUEST_DESCRIPTOR_QUERY_KEY) value = decodeURIComponent(value);
                if (!queryParsed.hasOwnProperty(key)) queryParsed[key] = value; else if (queryParsed[key] instanceof Array) queryParsed[key].push(value); else queryParsed[key] = [ queryParsed[key], value ];
            });
        }
        return queryParsed;
    };
    UrlUtil.formatQuery = function(query) {
        var params = [];
        Object.keys(query).forEach(function(key) {
            var value = query[key];
            if (key === UrlUtil.REQUEST_DESCRIPTOR_QUERY_KEY) value = encodeURIComponent(value);
            if (!(value instanceof Array)) value = [ value ];
            for (var i = 0; i < value.length; i++) params.push(key + (value[i] === null ? "" : "=" + value[i]));
        });
        return params.length ? "?" + params.join("&") : "";
    };
})();