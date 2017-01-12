/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIHttpChannelAuthProvider.idl
 */

#ifndef __gen_nsIHttpChannelAuthProvider_h__
#define __gen_nsIHttpChannelAuthProvider_h__


#ifndef __gen_nsICancelable_h__
#include "nsICancelable.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIHttpChannel; /* forward declaration */

class nsIHttpAuthenticableChannel; /* forward declaration */


/* starting interface:    nsIHttpChannelAuthProvider */
#define NS_IHTTPCHANNELAUTHPROVIDER_IID_STR "788f331b-2e1f-436c-b405-4f88a31a105b"

#define NS_IHTTPCHANNELAUTHPROVIDER_IID \
  {0x788f331b, 0x2e1f, 0x436c, \
    { 0xb4, 0x05, 0x4f, 0x88, 0xa3, 0x1a, 0x10, 0x5b }}

class NS_NO_VTABLE nsIHttpChannelAuthProvider : public nsICancelable {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPCHANNELAUTHPROVIDER_IID)

  /* void init (in nsIHttpAuthenticableChannel channel); */
  NS_IMETHOD Init(nsIHttpAuthenticableChannel *channel) = 0;

  /* void processAuthentication (in unsigned long httpStatus, in boolean sslConnectFailed); */
  NS_IMETHOD ProcessAuthentication(uint32_t httpStatus, bool sslConnectFailed) = 0;

  /* void addAuthorizationHeaders (in boolean dontUseCachedWWWCreds); */
  NS_IMETHOD AddAuthorizationHeaders(bool dontUseCachedWWWCreds) = 0;

  /* void checkForSuperfluousAuth (); */
  NS_IMETHOD CheckForSuperfluousAuth(void) = 0;

  /* void disconnect (in nsresult status); */
  NS_IMETHOD Disconnect(nsresult status) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpChannelAuthProvider, NS_IHTTPCHANNELAUTHPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPCHANNELAUTHPROVIDER \
  NS_IMETHOD Init(nsIHttpAuthenticableChannel *channel) override; \
  NS_IMETHOD ProcessAuthentication(uint32_t httpStatus, bool sslConnectFailed) override; \
  NS_IMETHOD AddAuthorizationHeaders(bool dontUseCachedWWWCreds) override; \
  NS_IMETHOD CheckForSuperfluousAuth(void) override; \
  NS_IMETHOD Disconnect(nsresult status) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIHTTPCHANNELAUTHPROVIDER \
  NS_METHOD Init(nsIHttpAuthenticableChannel *channel); \
  NS_METHOD ProcessAuthentication(uint32_t httpStatus, bool sslConnectFailed); \
  NS_METHOD AddAuthorizationHeaders(bool dontUseCachedWWWCreds); \
  NS_METHOD CheckForSuperfluousAuth(void); \
  NS_METHOD Disconnect(nsresult status); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPCHANNELAUTHPROVIDER(_to) \
  NS_IMETHOD Init(nsIHttpAuthenticableChannel *channel) override { return _to Init(channel); } \
  NS_IMETHOD ProcessAuthentication(uint32_t httpStatus, bool sslConnectFailed) override { return _to ProcessAuthentication(httpStatus, sslConnectFailed); } \
  NS_IMETHOD AddAuthorizationHeaders(bool dontUseCachedWWWCreds) override { return _to AddAuthorizationHeaders(dontUseCachedWWWCreds); } \
  NS_IMETHOD CheckForSuperfluousAuth(void) override { return _to CheckForSuperfluousAuth(); } \
  NS_IMETHOD Disconnect(nsresult status) override { return _to Disconnect(status); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPCHANNELAUTHPROVIDER(_to) \
  NS_IMETHOD Init(nsIHttpAuthenticableChannel *channel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(channel); } \
  NS_IMETHOD ProcessAuthentication(uint32_t httpStatus, bool sslConnectFailed) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ProcessAuthentication(httpStatus, sslConnectFailed); } \
  NS_IMETHOD AddAuthorizationHeaders(bool dontUseCachedWWWCreds) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddAuthorizationHeaders(dontUseCachedWWWCreds); } \
  NS_IMETHOD CheckForSuperfluousAuth(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckForSuperfluousAuth(); } \
  NS_IMETHOD Disconnect(nsresult status) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Disconnect(status); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpChannelAuthProvider : public nsIHttpChannelAuthProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPCHANNELAUTHPROVIDER

  nsHttpChannelAuthProvider();

private:
  ~nsHttpChannelAuthProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsHttpChannelAuthProvider, nsIHttpChannelAuthProvider)

nsHttpChannelAuthProvider::nsHttpChannelAuthProvider()
{
  /* member initializers and constructor code */
}

nsHttpChannelAuthProvider::~nsHttpChannelAuthProvider()
{
  /* destructor code */
}

/* void init (in nsIHttpAuthenticableChannel channel); */
NS_IMETHODIMP nsHttpChannelAuthProvider::Init(nsIHttpAuthenticableChannel *channel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void processAuthentication (in unsigned long httpStatus, in boolean sslConnectFailed); */
NS_IMETHODIMP nsHttpChannelAuthProvider::ProcessAuthentication(uint32_t httpStatus, bool sslConnectFailed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addAuthorizationHeaders (in boolean dontUseCachedWWWCreds); */
NS_IMETHODIMP nsHttpChannelAuthProvider::AddAuthorizationHeaders(bool dontUseCachedWWWCreds)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkForSuperfluousAuth (); */
NS_IMETHODIMP nsHttpChannelAuthProvider::CheckForSuperfluousAuth()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disconnect (in nsresult status); */
NS_IMETHODIMP nsHttpChannelAuthProvider::Disconnect(nsresult status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIHttpChannelAuthProvider_h__ */