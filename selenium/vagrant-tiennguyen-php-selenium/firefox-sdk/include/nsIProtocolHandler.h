/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIProtocolHandler.idl
 */

#ifndef __gen_nsIProtocolHandler_h__
#define __gen_nsIProtocolHandler_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsCOMPtr.h"
class nsIURI; /* forward declaration */

class nsIChannel; /* forward declaration */

class nsILoadInfo; /* forward declaration */


/* starting interface:    nsIProtocolHandlerWithDynamicFlags */
#define NS_IPROTOCOLHANDLERWITHDYNAMICFLAGS_IID_STR "65a8e823-0591-4fc0-a56a-03265e0a4ce8"

#define NS_IPROTOCOLHANDLERWITHDYNAMICFLAGS_IID \
  {0x65a8e823, 0x0591, 0x4fc0, \
    { 0xa5, 0x6a, 0x03, 0x26, 0x5e, 0x0a, 0x4c, 0xe8 }}

class NS_NO_VTABLE nsIProtocolHandlerWithDynamicFlags : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROTOCOLHANDLERWITHDYNAMICFLAGS_IID)

  /* unsigned long getFlagsForURI (in nsIURI aURI); */
  NS_IMETHOD GetFlagsForURI(nsIURI *aURI, uint32_t *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProtocolHandlerWithDynamicFlags, NS_IPROTOCOLHANDLERWITHDYNAMICFLAGS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROTOCOLHANDLERWITHDYNAMICFLAGS \
  NS_IMETHOD GetFlagsForURI(nsIURI *aURI, uint32_t *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPROTOCOLHANDLERWITHDYNAMICFLAGS \
  NS_METHOD GetFlagsForURI(nsIURI *aURI, uint32_t *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROTOCOLHANDLERWITHDYNAMICFLAGS(_to) \
  NS_IMETHOD GetFlagsForURI(nsIURI *aURI, uint32_t *_retval) override { return _to GetFlagsForURI(aURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROTOCOLHANDLERWITHDYNAMICFLAGS(_to) \
  NS_IMETHOD GetFlagsForURI(nsIURI *aURI, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlagsForURI(aURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProtocolHandlerWithDynamicFlags : public nsIProtocolHandlerWithDynamicFlags
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROTOCOLHANDLERWITHDYNAMICFLAGS

  nsProtocolHandlerWithDynamicFlags();

private:
  ~nsProtocolHandlerWithDynamicFlags();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsProtocolHandlerWithDynamicFlags, nsIProtocolHandlerWithDynamicFlags)

nsProtocolHandlerWithDynamicFlags::nsProtocolHandlerWithDynamicFlags()
{
  /* member initializers and constructor code */
}

nsProtocolHandlerWithDynamicFlags::~nsProtocolHandlerWithDynamicFlags()
{
  /* destructor code */
}

/* unsigned long getFlagsForURI (in nsIURI aURI); */
NS_IMETHODIMP nsProtocolHandlerWithDynamicFlags::GetFlagsForURI(nsIURI *aURI, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIProtocolHandler */
#define NS_IPROTOCOLHANDLER_IID_STR "a87210e6-7c8c-41f7-864d-df809015193e"

#define NS_IPROTOCOLHANDLER_IID \
  {0xa87210e6, 0x7c8c, 0x41f7, \
    { 0x86, 0x4d, 0xdf, 0x80, 0x90, 0x15, 0x19, 0x3e }}

class nsIProtocolHandler : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROTOCOLHANDLER_IID)

  /* readonly attribute ACString scheme; */
  NS_IMETHOD GetScheme(nsACString & aScheme) = 0;

  /* readonly attribute long defaultPort; */
  NS_IMETHOD GetDefaultPort(int32_t *aDefaultPort) = 0;

  /* readonly attribute unsigned long protocolFlags; */
  NS_IMETHOD GetProtocolFlags(uint32_t *aProtocolFlags) = 0;

   // Helper method to get the protocol flags in the right way.
  nsresult DoGetProtocolFlags(nsIURI* aURI, uint32_t* aFlags)
  {
      nsCOMPtr<nsIProtocolHandlerWithDynamicFlags> dh = do_QueryInterface(this);
      return dh ? dh->GetFlagsForURI(aURI, aFlags) : GetProtocolFlags(aFlags);
  }
  /* nsIURI newURI (in AUTF8String aSpec, in string aOriginCharset, in nsIURI aBaseURI); */
  NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval) = 0;

  /* nsIChannel newChannel2 (in nsIURI aURI, in nsILoadInfo aLoadinfo); */
  NS_IMETHOD NewChannel2(nsIURI *aURI, nsILoadInfo *aLoadinfo, nsIChannel * *_retval) = 0;

  /* nsIChannel newChannel (in nsIURI aURI); */
  NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval) = 0;

  /* boolean allowPort (in long port, in string scheme); */
  NS_IMETHOD AllowPort(int32_t port, const char * scheme, bool *_retval) = 0;

  enum {
    URI_STD = 0U,
    URI_NORELATIVE = 1U,
    URI_NOAUTH = 2U,
    ALLOWS_PROXY = 4U,
    ALLOWS_PROXY_HTTP = 8U,
    URI_INHERITS_SECURITY_CONTEXT = 16U,
    URI_FORBIDS_AUTOMATIC_DOCUMENT_REPLACEMENT = 32U,
    URI_LOADABLE_BY_ANYONE = 64U,
    URI_DANGEROUS_TO_LOAD = 128U,
    URI_IS_UI_RESOURCE = 256U,
    URI_IS_LOCAL_FILE = 512U,
    URI_LOADABLE_BY_SUBSUMERS = 1024U,
    URI_DOES_NOT_RETURN_DATA = 2048U,
    URI_IS_LOCAL_RESOURCE = 4096U,
    URI_OPENING_EXECUTES_SCRIPT = 8192U,
    URI_NON_PERSISTABLE = 16384U,
    URI_FORBIDS_COOKIE_ACCESS = 32768U,
    URI_CROSS_ORIGIN_NEEDS_WEBAPPS_PERM = 65536U,
    URI_SYNC_LOAD_IS_OK = 131072U,
    URI_SAFE_TO_LOAD_IN_SECURE_CONTEXT = 262144U,
    URI_FETCHABLE_BY_ANYONE = 524288U,
    ORIGIN_IS_FULL_SPEC = 1048576U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProtocolHandler, NS_IPROTOCOLHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROTOCOLHANDLER \
  NS_IMETHOD GetScheme(nsACString & aScheme) override; \
  NS_IMETHOD GetDefaultPort(int32_t *aDefaultPort) override; \
  NS_IMETHOD GetProtocolFlags(uint32_t *aProtocolFlags) override; \
  NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval) override; \
  NS_IMETHOD NewChannel2(nsIURI *aURI, nsILoadInfo *aLoadinfo, nsIChannel * *_retval) override; \
  NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval) override; \
  NS_IMETHOD AllowPort(int32_t port, const char * scheme, bool *_retval) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPROTOCOLHANDLER \
  NS_METHOD GetScheme(nsACString & aScheme); \
  NS_METHOD GetDefaultPort(int32_t *aDefaultPort); \
  NS_METHOD GetProtocolFlags(uint32_t *aProtocolFlags); \
  NS_METHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval); \
  NS_METHOD NewChannel2(nsIURI *aURI, nsILoadInfo *aLoadinfo, nsIChannel * *_retval); \
  NS_METHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval); \
  NS_METHOD AllowPort(int32_t port, const char * scheme, bool *_retval); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROTOCOLHANDLER(_to) \
  NS_IMETHOD GetScheme(nsACString & aScheme) override { return _to GetScheme(aScheme); } \
  NS_IMETHOD GetDefaultPort(int32_t *aDefaultPort) override { return _to GetDefaultPort(aDefaultPort); } \
  NS_IMETHOD GetProtocolFlags(uint32_t *aProtocolFlags) override { return _to GetProtocolFlags(aProtocolFlags); } \
  NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval) override { return _to NewURI(aSpec, aOriginCharset, aBaseURI, _retval); } \
  NS_IMETHOD NewChannel2(nsIURI *aURI, nsILoadInfo *aLoadinfo, nsIChannel * *_retval) override { return _to NewChannel2(aURI, aLoadinfo, _retval); } \
  NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval) override { return _to NewChannel(aURI, _retval); } \
  NS_IMETHOD AllowPort(int32_t port, const char * scheme, bool *_retval) override { return _to AllowPort(port, scheme, _retval); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROTOCOLHANDLER(_to) \
  NS_IMETHOD GetScheme(nsACString & aScheme) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScheme(aScheme); } \
  NS_IMETHOD GetDefaultPort(int32_t *aDefaultPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultPort(aDefaultPort); } \
  NS_IMETHOD GetProtocolFlags(uint32_t *aProtocolFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProtocolFlags(aProtocolFlags); } \
  NS_IMETHOD NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NewURI(aSpec, aOriginCharset, aBaseURI, _retval); } \
  NS_IMETHOD NewChannel2(nsIURI *aURI, nsILoadInfo *aLoadinfo, nsIChannel * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NewChannel2(aURI, aLoadinfo, _retval); } \
  NS_IMETHOD NewChannel(nsIURI *aURI, nsIChannel * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NewChannel(aURI, _retval); } \
  NS_IMETHOD AllowPort(int32_t port, const char * scheme, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AllowPort(port, scheme, _retval); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProtocolHandler : public nsIProtocolHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROTOCOLHANDLER

  nsProtocolHandler();

private:
  ~nsProtocolHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsProtocolHandler, nsIProtocolHandler)

nsProtocolHandler::nsProtocolHandler()
{
  /* member initializers and constructor code */
}

nsProtocolHandler::~nsProtocolHandler()
{
  /* destructor code */
}

/* readonly attribute ACString scheme; */
NS_IMETHODIMP nsProtocolHandler::GetScheme(nsACString & aScheme)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long defaultPort; */
NS_IMETHODIMP nsProtocolHandler::GetDefaultPort(int32_t *aDefaultPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long protocolFlags; */
NS_IMETHODIMP nsProtocolHandler::GetProtocolFlags(uint32_t *aProtocolFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI newURI (in AUTF8String aSpec, in string aOriginCharset, in nsIURI aBaseURI); */
NS_IMETHODIMP nsProtocolHandler::NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIChannel newChannel2 (in nsIURI aURI, in nsILoadInfo aLoadinfo); */
NS_IMETHODIMP nsProtocolHandler::NewChannel2(nsIURI *aURI, nsILoadInfo *aLoadinfo, nsIChannel * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIChannel newChannel (in nsIURI aURI); */
NS_IMETHODIMP nsProtocolHandler::NewChannel(nsIURI *aURI, nsIChannel * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean allowPort (in long port, in string scheme); */
NS_IMETHODIMP nsProtocolHandler::AllowPort(int32_t port, const char * scheme, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * Protocol handlers are registered with XPCOM under the following CONTRACTID prefix:
 */
#define NS_NETWORK_PROTOCOL_CONTRACTID_PREFIX "@mozilla.org/network/protocol;1?name="
/**
 * For example, "@mozilla.org/network/protocol;1?name=http"
 */
#define IS_ORIGIN_IS_FULL_SPEC_DEFINED 1

#endif /* __gen_nsIProtocolHandler_h__ */
