/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICacheInfoChannel.idl
 */

#ifndef __gen_nsICacheInfoChannel_h__
#define __gen_nsICacheInfoChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICacheInfoChannel */
#define NS_ICACHEINFOCHANNEL_IID_STR "72c34415-c6eb-48af-851f-772fa9ee5972"

#define NS_ICACHEINFOCHANNEL_IID \
  {0x72c34415, 0xc6eb, 0x48af, \
    { 0x85, 0x1f, 0x77, 0x2f, 0xa9, 0xee, 0x59, 0x72 }}

class NS_NO_VTABLE nsICacheInfoChannel : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHEINFOCHANNEL_IID)

  /* readonly attribute uint32_t cacheTokenExpirationTime; */
  NS_IMETHOD GetCacheTokenExpirationTime(uint32_t *aCacheTokenExpirationTime) = 0;

  /* attribute ACString cacheTokenCachedCharset; */
  NS_IMETHOD GetCacheTokenCachedCharset(nsACString & aCacheTokenCachedCharset) = 0;
  NS_IMETHOD SetCacheTokenCachedCharset(const nsACString & aCacheTokenCachedCharset) = 0;

  /* boolean isFromCache (); */
  NS_IMETHOD IsFromCache(bool *_retval) = 0;

  /* attribute nsISupports cacheKey; */
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) = 0;
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) = 0;

  /* attribute boolean allowStaleCacheContent; */
  NS_IMETHOD GetAllowStaleCacheContent(bool *aAllowStaleCacheContent) = 0;
  NS_IMETHOD SetAllowStaleCacheContent(bool aAllowStaleCacheContent) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICacheInfoChannel, NS_ICACHEINFOCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHEINFOCHANNEL \
  NS_IMETHOD GetCacheTokenExpirationTime(uint32_t *aCacheTokenExpirationTime) override; \
  NS_IMETHOD GetCacheTokenCachedCharset(nsACString & aCacheTokenCachedCharset) override; \
  NS_IMETHOD SetCacheTokenCachedCharset(const nsACString & aCacheTokenCachedCharset) override; \
  NS_IMETHOD IsFromCache(bool *_retval) override; \
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) override; \
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) override; \
  NS_IMETHOD GetAllowStaleCacheContent(bool *aAllowStaleCacheContent) override; \
  NS_IMETHOD SetAllowStaleCacheContent(bool aAllowStaleCacheContent) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICACHEINFOCHANNEL \
  NS_METHOD GetCacheTokenExpirationTime(uint32_t *aCacheTokenExpirationTime); \
  NS_METHOD GetCacheTokenCachedCharset(nsACString & aCacheTokenCachedCharset); \
  NS_METHOD SetCacheTokenCachedCharset(const nsACString & aCacheTokenCachedCharset); \
  NS_METHOD IsFromCache(bool *_retval); \
  NS_METHOD GetCacheKey(nsISupports * *aCacheKey); \
  NS_METHOD SetCacheKey(nsISupports *aCacheKey); \
  NS_METHOD GetAllowStaleCacheContent(bool *aAllowStaleCacheContent); \
  NS_METHOD SetAllowStaleCacheContent(bool aAllowStaleCacheContent); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHEINFOCHANNEL(_to) \
  NS_IMETHOD GetCacheTokenExpirationTime(uint32_t *aCacheTokenExpirationTime) override { return _to GetCacheTokenExpirationTime(aCacheTokenExpirationTime); } \
  NS_IMETHOD GetCacheTokenCachedCharset(nsACString & aCacheTokenCachedCharset) override { return _to GetCacheTokenCachedCharset(aCacheTokenCachedCharset); } \
  NS_IMETHOD SetCacheTokenCachedCharset(const nsACString & aCacheTokenCachedCharset) override { return _to SetCacheTokenCachedCharset(aCacheTokenCachedCharset); } \
  NS_IMETHOD IsFromCache(bool *_retval) override { return _to IsFromCache(_retval); } \
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) override { return _to GetCacheKey(aCacheKey); } \
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) override { return _to SetCacheKey(aCacheKey); } \
  NS_IMETHOD GetAllowStaleCacheContent(bool *aAllowStaleCacheContent) override { return _to GetAllowStaleCacheContent(aAllowStaleCacheContent); } \
  NS_IMETHOD SetAllowStaleCacheContent(bool aAllowStaleCacheContent) override { return _to SetAllowStaleCacheContent(aAllowStaleCacheContent); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHEINFOCHANNEL(_to) \
  NS_IMETHOD GetCacheTokenExpirationTime(uint32_t *aCacheTokenExpirationTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheTokenExpirationTime(aCacheTokenExpirationTime); } \
  NS_IMETHOD GetCacheTokenCachedCharset(nsACString & aCacheTokenCachedCharset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheTokenCachedCharset(aCacheTokenCachedCharset); } \
  NS_IMETHOD SetCacheTokenCachedCharset(const nsACString & aCacheTokenCachedCharset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheTokenCachedCharset(aCacheTokenCachedCharset); } \
  NS_IMETHOD IsFromCache(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsFromCache(_retval); } \
  NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheKey(aCacheKey); } \
  NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheKey(aCacheKey); } \
  NS_IMETHOD GetAllowStaleCacheContent(bool *aAllowStaleCacheContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowStaleCacheContent(aAllowStaleCacheContent); } \
  NS_IMETHOD SetAllowStaleCacheContent(bool aAllowStaleCacheContent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowStaleCacheContent(aAllowStaleCacheContent); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCacheInfoChannel : public nsICacheInfoChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHEINFOCHANNEL

  nsCacheInfoChannel();

private:
  ~nsCacheInfoChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCacheInfoChannel, nsICacheInfoChannel)

nsCacheInfoChannel::nsCacheInfoChannel()
{
  /* member initializers and constructor code */
}

nsCacheInfoChannel::~nsCacheInfoChannel()
{
  /* destructor code */
}

/* readonly attribute uint32_t cacheTokenExpirationTime; */
NS_IMETHODIMP nsCacheInfoChannel::GetCacheTokenExpirationTime(uint32_t *aCacheTokenExpirationTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString cacheTokenCachedCharset; */
NS_IMETHODIMP nsCacheInfoChannel::GetCacheTokenCachedCharset(nsACString & aCacheTokenCachedCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheInfoChannel::SetCacheTokenCachedCharset(const nsACString & aCacheTokenCachedCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isFromCache (); */
NS_IMETHODIMP nsCacheInfoChannel::IsFromCache(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports cacheKey; */
NS_IMETHODIMP nsCacheInfoChannel::GetCacheKey(nsISupports * *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheInfoChannel::SetCacheKey(nsISupports *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowStaleCacheContent; */
NS_IMETHODIMP nsCacheInfoChannel::GetAllowStaleCacheContent(bool *aAllowStaleCacheContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCacheInfoChannel::SetAllowStaleCacheContent(bool aAllowStaleCacheContent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICacheInfoChannel_h__ */
