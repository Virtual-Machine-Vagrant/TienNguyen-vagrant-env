/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISocketProvider.idl
 */

#ifndef __gen_nsISocketProvider_h__
#define __gen_nsISocketProvider_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIProxyInfo; /* forward declaration */


/* starting interface:    nsISocketProvider */
#define NS_ISOCKETPROVIDER_IID_STR "508d5469-9e1e-4a08-b5b0-7cfebba1e51a"

#define NS_ISOCKETPROVIDER_IID \
  {0x508d5469, 0x9e1e, 0x4a08, \
    { 0xb5, 0xb0, 0x7c, 0xfe, 0xbb, 0xa1, 0xe5, 0x1a }}

class NS_NO_VTABLE nsISocketProvider : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISOCKETPROVIDER_IID)

  /* [noscript] void newSocket (in long aFamily, in string aHost, in long aPort, in nsIProxyInfo aProxy, in unsigned long aFlags, out PRFileDescStar aFileDesc, out nsISupports aSecurityInfo); */
  NS_IMETHOD NewSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc **aFileDesc, nsISupports * *aSecurityInfo) = 0;

  /* [noscript] void addToSocket (in long aFamily, in string aHost, in long aPort, in nsIProxyInfo aProxy, in unsigned long aFlags, in PRFileDescStar aFileDesc, out nsISupports aSecurityInfo); */
  NS_IMETHOD AddToSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc *aFileDesc, nsISupports * *aSecurityInfo) = 0;

  enum {
    PROXY_RESOLVES_HOST = 1,
    ANONYMOUS_CONNECT = 2,
    NO_PERMANENT_STORAGE = 4U,
    MITM_OK = 8U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISocketProvider, NS_ISOCKETPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISOCKETPROVIDER \
  NS_IMETHOD NewSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc **aFileDesc, nsISupports * *aSecurityInfo) override; \
  NS_IMETHOD AddToSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc *aFileDesc, nsISupports * *aSecurityInfo) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISOCKETPROVIDER \
  NS_METHOD NewSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc **aFileDesc, nsISupports * *aSecurityInfo); \
  NS_METHOD AddToSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc *aFileDesc, nsISupports * *aSecurityInfo); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISOCKETPROVIDER(_to) \
  NS_IMETHOD NewSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc **aFileDesc, nsISupports * *aSecurityInfo) override { return _to NewSocket(aFamily, aHost, aPort, aProxy, aFlags, aFileDesc, aSecurityInfo); } \
  NS_IMETHOD AddToSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc *aFileDesc, nsISupports * *aSecurityInfo) override { return _to AddToSocket(aFamily, aHost, aPort, aProxy, aFlags, aFileDesc, aSecurityInfo); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISOCKETPROVIDER(_to) \
  NS_IMETHOD NewSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc **aFileDesc, nsISupports * *aSecurityInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NewSocket(aFamily, aHost, aPort, aProxy, aFlags, aFileDesc, aSecurityInfo); } \
  NS_IMETHOD AddToSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc *aFileDesc, nsISupports * *aSecurityInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddToSocket(aFamily, aHost, aPort, aProxy, aFlags, aFileDesc, aSecurityInfo); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSocketProvider : public nsISocketProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISOCKETPROVIDER

  nsSocketProvider();

private:
  ~nsSocketProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSocketProvider, nsISocketProvider)

nsSocketProvider::nsSocketProvider()
{
  /* member initializers and constructor code */
}

nsSocketProvider::~nsSocketProvider()
{
  /* destructor code */
}

/* [noscript] void newSocket (in long aFamily, in string aHost, in long aPort, in nsIProxyInfo aProxy, in unsigned long aFlags, out PRFileDescStar aFileDesc, out nsISupports aSecurityInfo); */
NS_IMETHODIMP nsSocketProvider::NewSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc **aFileDesc, nsISupports * *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void addToSocket (in long aFamily, in string aHost, in long aPort, in nsIProxyInfo aProxy, in unsigned long aFlags, in PRFileDescStar aFileDesc, out nsISupports aSecurityInfo); */
NS_IMETHODIMP nsSocketProvider::AddToSocket(int32_t aFamily, const char * aHost, int32_t aPort, nsIProxyInfo *aProxy, uint32_t aFlags, struct PRFileDesc *aFileDesc, nsISupports * *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * nsISocketProvider implementations should be registered with XPCOM under a
 * contract ID of the form: "@mozilla.org/network/socket;2?type=foo"
 */
#define NS_NETWORK_SOCKET_CONTRACTID_PREFIX \
    "@mozilla.org/network/socket;2?type="

#endif /* __gen_nsISocketProvider_h__ */
