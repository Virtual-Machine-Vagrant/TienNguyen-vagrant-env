/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIProxyInfo.idl
 */

#ifndef __gen_nsIProxyInfo_h__
#define __gen_nsIProxyInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIProxyInfo */
#define NS_IPROXYINFO_IID_STR "63fff172-2564-4138-96c6-3ae7d245fbed"

#define NS_IPROXYINFO_IID \
  {0x63fff172, 0x2564, 0x4138, \
    { 0x96, 0xc6, 0x3a, 0xe7, 0xd2, 0x45, 0xfb, 0xed }}

class NS_NO_VTABLE nsIProxyInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROXYINFO_IID)

  /* readonly attribute AUTF8String host; */
  NS_IMETHOD GetHost(nsACString & aHost) = 0;

  /* readonly attribute long port; */
  NS_IMETHOD GetPort(int32_t *aPort) = 0;

  /* readonly attribute ACString type; */
  NS_IMETHOD GetType(nsACString & aType) = 0;

  /* readonly attribute unsigned long flags; */
  NS_IMETHOD GetFlags(uint32_t *aFlags) = 0;

  /* readonly attribute unsigned long resolveFlags; */
  NS_IMETHOD GetResolveFlags(uint32_t *aResolveFlags) = 0;

  /* readonly attribute ACString username; */
  NS_IMETHOD GetUsername(nsACString & aUsername) = 0;

  /* readonly attribute ACString password; */
  NS_IMETHOD GetPassword(nsACString & aPassword) = 0;

  /* readonly attribute unsigned long failoverTimeout; */
  NS_IMETHOD GetFailoverTimeout(uint32_t *aFailoverTimeout) = 0;

  /* attribute nsIProxyInfo failoverProxy; */
  NS_IMETHOD GetFailoverProxy(nsIProxyInfo * *aFailoverProxy) = 0;
  NS_IMETHOD SetFailoverProxy(nsIProxyInfo *aFailoverProxy) = 0;

  enum {
    TRANSPARENT_PROXY_RESOLVES_HOST = 1U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIProxyInfo, NS_IPROXYINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROXYINFO \
  NS_IMETHOD GetHost(nsACString & aHost) override; \
  NS_IMETHOD GetPort(int32_t *aPort) override; \
  NS_IMETHOD GetType(nsACString & aType) override; \
  NS_IMETHOD GetFlags(uint32_t *aFlags) override; \
  NS_IMETHOD GetResolveFlags(uint32_t *aResolveFlags) override; \
  NS_IMETHOD GetUsername(nsACString & aUsername) override; \
  NS_IMETHOD GetPassword(nsACString & aPassword) override; \
  NS_IMETHOD GetFailoverTimeout(uint32_t *aFailoverTimeout) override; \
  NS_IMETHOD GetFailoverProxy(nsIProxyInfo * *aFailoverProxy) override; \
  NS_IMETHOD SetFailoverProxy(nsIProxyInfo *aFailoverProxy) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPROXYINFO \
  NS_METHOD GetHost(nsACString & aHost); \
  NS_METHOD GetPort(int32_t *aPort); \
  NS_METHOD GetType(nsACString & aType); \
  NS_METHOD GetFlags(uint32_t *aFlags); \
  NS_METHOD GetResolveFlags(uint32_t *aResolveFlags); \
  NS_METHOD GetUsername(nsACString & aUsername); \
  NS_METHOD GetPassword(nsACString & aPassword); \
  NS_METHOD GetFailoverTimeout(uint32_t *aFailoverTimeout); \
  NS_METHOD GetFailoverProxy(nsIProxyInfo * *aFailoverProxy); \
  NS_METHOD SetFailoverProxy(nsIProxyInfo *aFailoverProxy); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROXYINFO(_to) \
  NS_IMETHOD GetHost(nsACString & aHost) override { return _to GetHost(aHost); } \
  NS_IMETHOD GetPort(int32_t *aPort) override { return _to GetPort(aPort); } \
  NS_IMETHOD GetType(nsACString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetFlags(uint32_t *aFlags) override { return _to GetFlags(aFlags); } \
  NS_IMETHOD GetResolveFlags(uint32_t *aResolveFlags) override { return _to GetResolveFlags(aResolveFlags); } \
  NS_IMETHOD GetUsername(nsACString & aUsername) override { return _to GetUsername(aUsername); } \
  NS_IMETHOD GetPassword(nsACString & aPassword) override { return _to GetPassword(aPassword); } \
  NS_IMETHOD GetFailoverTimeout(uint32_t *aFailoverTimeout) override { return _to GetFailoverTimeout(aFailoverTimeout); } \
  NS_IMETHOD GetFailoverProxy(nsIProxyInfo * *aFailoverProxy) override { return _to GetFailoverProxy(aFailoverProxy); } \
  NS_IMETHOD SetFailoverProxy(nsIProxyInfo *aFailoverProxy) override { return _to SetFailoverProxy(aFailoverProxy); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROXYINFO(_to) \
  NS_IMETHOD GetHost(nsACString & aHost) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHost(aHost); } \
  NS_IMETHOD GetPort(int32_t *aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPort(aPort); } \
  NS_IMETHOD GetType(nsACString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetFlags(uint32_t *aFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_IMETHOD GetResolveFlags(uint32_t *aResolveFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResolveFlags(aResolveFlags); } \
  NS_IMETHOD GetUsername(nsACString & aUsername) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsername(aUsername); } \
  NS_IMETHOD GetPassword(nsACString & aPassword) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPassword(aPassword); } \
  NS_IMETHOD GetFailoverTimeout(uint32_t *aFailoverTimeout) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFailoverTimeout(aFailoverTimeout); } \
  NS_IMETHOD GetFailoverProxy(nsIProxyInfo * *aFailoverProxy) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFailoverProxy(aFailoverProxy); } \
  NS_IMETHOD SetFailoverProxy(nsIProxyInfo *aFailoverProxy) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFailoverProxy(aFailoverProxy); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsProxyInfo : public nsIProxyInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROXYINFO

  nsProxyInfo();

private:
  ~nsProxyInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsProxyInfo, nsIProxyInfo)

nsProxyInfo::nsProxyInfo()
{
  /* member initializers and constructor code */
}

nsProxyInfo::~nsProxyInfo()
{
  /* destructor code */
}

/* readonly attribute AUTF8String host; */
NS_IMETHODIMP nsProxyInfo::GetHost(nsACString & aHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long port; */
NS_IMETHODIMP nsProxyInfo::GetPort(int32_t *aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString type; */
NS_IMETHODIMP nsProxyInfo::GetType(nsACString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long flags; */
NS_IMETHODIMP nsProxyInfo::GetFlags(uint32_t *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long resolveFlags; */
NS_IMETHODIMP nsProxyInfo::GetResolveFlags(uint32_t *aResolveFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString username; */
NS_IMETHODIMP nsProxyInfo::GetUsername(nsACString & aUsername)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString password; */
NS_IMETHODIMP nsProxyInfo::GetPassword(nsACString & aPassword)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long failoverTimeout; */
NS_IMETHODIMP nsProxyInfo::GetFailoverTimeout(uint32_t *aFailoverTimeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIProxyInfo failoverProxy; */
NS_IMETHODIMP nsProxyInfo::GetFailoverProxy(nsIProxyInfo * *aFailoverProxy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsProxyInfo::SetFailoverProxy(nsIProxyInfo *aFailoverProxy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIProxyInfo_h__ */
