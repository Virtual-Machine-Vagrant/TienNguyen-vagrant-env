/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICachingChannel.idl
 */

#ifndef __gen_nsICachingChannel_h__
#define __gen_nsICachingChannel_h__


#ifndef __gen_nsICacheInfoChannel_h__
#include "nsICacheInfoChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */


/* starting interface:    nsICachingChannel */
#define NS_ICACHINGCHANNEL_IID_STR "dd1d6122-5ecf-4fe4-8f0f-995e7ab3121a"

#define NS_ICACHINGCHANNEL_IID \
  {0xdd1d6122, 0x5ecf, 0x4fe4, \
    { 0x8f, 0x0f, 0x99, 0x5e, 0x7a, 0xb3, 0x12, 0x1a }}

class NS_NO_VTABLE nsICachingChannel : public nsICacheInfoChannel {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHINGCHANNEL_IID)

  /* attribute nsISupports cacheToken; */
  NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) = 0;
  NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) = 0;

  /* attribute nsISupports offlineCacheToken; */
  NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) = 0;
  NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) = 0;

  /* attribute boolean cacheOnlyMetadata; */
  NS_IMETHOD GetCacheOnlyMetadata(bool *aCacheOnlyMetadata) = 0;
  NS_IMETHOD SetCacheOnlyMetadata(bool aCacheOnlyMetadata) = 0;

  /* attribute boolean pin; */
  NS_IMETHOD GetPin(bool *aPin) = 0;
  NS_IMETHOD SetPin(bool aPin) = 0;

  enum {
    LOAD_NO_NETWORK_IO = 67108864U,
    LOAD_CHECK_OFFLINE_CACHE = 134217728U,
    LOAD_BYPASS_LOCAL_CACHE = 268435456U,
    LOAD_BYPASS_LOCAL_CACHE_IF_BUSY = 536870912U,
    LOAD_ONLY_FROM_CACHE = 1073741824U,
    LOAD_ONLY_IF_MODIFIED = 2147483648U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICachingChannel, NS_ICACHINGCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHINGCHANNEL \
  NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) override; \
  NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) override; \
  NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) override; \
  NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) override; \
  NS_IMETHOD GetCacheOnlyMetadata(bool *aCacheOnlyMetadata) override; \
  NS_IMETHOD SetCacheOnlyMetadata(bool aCacheOnlyMetadata) override; \
  NS_IMETHOD GetPin(bool *aPin) override; \
  NS_IMETHOD SetPin(bool aPin) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICACHINGCHANNEL \
  NS_METHOD GetCacheToken(nsISupports * *aCacheToken); \
  NS_METHOD SetCacheToken(nsISupports *aCacheToken); \
  NS_METHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken); \
  NS_METHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken); \
  NS_METHOD GetCacheOnlyMetadata(bool *aCacheOnlyMetadata); \
  NS_METHOD SetCacheOnlyMetadata(bool aCacheOnlyMetadata); \
  NS_METHOD GetPin(bool *aPin); \
  NS_METHOD SetPin(bool aPin); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHINGCHANNEL(_to) \
  NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) override { return _to GetCacheToken(aCacheToken); } \
  NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) override { return _to SetCacheToken(aCacheToken); } \
  NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) override { return _to GetOfflineCacheToken(aOfflineCacheToken); } \
  NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) override { return _to SetOfflineCacheToken(aOfflineCacheToken); } \
  NS_IMETHOD GetCacheOnlyMetadata(bool *aCacheOnlyMetadata) override { return _to GetCacheOnlyMetadata(aCacheOnlyMetadata); } \
  NS_IMETHOD SetCacheOnlyMetadata(bool aCacheOnlyMetadata) override { return _to SetCacheOnlyMetadata(aCacheOnlyMetadata); } \
  NS_IMETHOD GetPin(bool *aPin) override { return _to GetPin(aPin); } \
  NS_IMETHOD SetPin(bool aPin) override { return _to SetPin(aPin); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHINGCHANNEL(_to) \
  NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheToken(aCacheToken); } \
  NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheToken(aCacheToken); } \
  NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOfflineCacheToken(aOfflineCacheToken); } \
  NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOfflineCacheToken(aOfflineCacheToken); } \
  NS_IMETHOD GetCacheOnlyMetadata(bool *aCacheOnlyMetadata) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheOnlyMetadata(aCacheOnlyMetadata); } \
  NS_IMETHOD SetCacheOnlyMetadata(bool aCacheOnlyMetadata) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheOnlyMetadata(aCacheOnlyMetadata); } \
  NS_IMETHOD GetPin(bool *aPin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPin(aPin); } \
  NS_IMETHOD SetPin(bool aPin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPin(aPin); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCachingChannel : public nsICachingChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHINGCHANNEL

  nsCachingChannel();

private:
  ~nsCachingChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCachingChannel, nsICachingChannel)

nsCachingChannel::nsCachingChannel()
{
  /* member initializers and constructor code */
}

nsCachingChannel::~nsCachingChannel()
{
  /* destructor code */
}

/* attribute nsISupports cacheToken; */
NS_IMETHODIMP nsCachingChannel::GetCacheToken(nsISupports * *aCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheToken(nsISupports *aCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports offlineCacheToken; */
NS_IMETHODIMP nsCachingChannel::GetOfflineCacheToken(nsISupports * *aOfflineCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetOfflineCacheToken(nsISupports *aOfflineCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean cacheOnlyMetadata; */
NS_IMETHODIMP nsCachingChannel::GetCacheOnlyMetadata(bool *aCacheOnlyMetadata)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheOnlyMetadata(bool aCacheOnlyMetadata)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean pin; */
NS_IMETHODIMP nsCachingChannel::GetPin(bool *aPin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetPin(bool aPin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICachingChannel_h__ */
