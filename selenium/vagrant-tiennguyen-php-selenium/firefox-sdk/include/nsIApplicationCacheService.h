/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIApplicationCacheService.idl
 */

#ifndef __gen_nsIApplicationCacheService_h__
#define __gen_nsIApplicationCacheService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIApplicationCache; /* forward declaration */

class nsIFile; /* forward declaration */

class nsIURI; /* forward declaration */

class nsILoadContextInfo; /* forward declaration */


/* starting interface:    nsIApplicationCacheService */
#define NS_IAPPLICATIONCACHESERVICE_IID_STR "b8b6546c-6cec-4bda-82df-08e006a97b56"

#define NS_IAPPLICATIONCACHESERVICE_IID \
  {0xb8b6546c, 0x6cec, 0x4bda, \
    { 0x82, 0xdf, 0x08, 0xe0, 0x06, 0xa9, 0x7b, 0x56 }}

class NS_NO_VTABLE nsIApplicationCacheService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPLICATIONCACHESERVICE_IID)

  /* ACString buildGroupIDForInfo (in nsIURI aManifestURL, in nsILoadContextInfo aLoadContextInfo); */
  NS_IMETHOD BuildGroupIDForInfo(nsIURI *aManifestURL, nsILoadContextInfo *aLoadContextInfo, nsACString & _retval) = 0;

  /* ACString buildGroupIDForSuffix (in nsIURI aManifestURL, in ACString aOriginSuffix); */
  NS_IMETHOD BuildGroupIDForSuffix(nsIURI *aManifestURL, const nsACString & aOriginSuffix, nsACString & _retval) = 0;

  /* nsIApplicationCache createApplicationCache (in ACString group); */
  NS_IMETHOD CreateApplicationCache(const nsACString & group, nsIApplicationCache * *_retval) = 0;

  /* nsIApplicationCache createCustomApplicationCache (in ACString group, in nsIFile profileDir, in int32_t quota); */
  NS_IMETHOD CreateCustomApplicationCache(const nsACString & group, nsIFile *profileDir, int32_t quota, nsIApplicationCache * *_retval) = 0;

  /* nsIApplicationCache getApplicationCache (in ACString clientID); */
  NS_IMETHOD GetApplicationCache(const nsACString & clientID, nsIApplicationCache * *_retval) = 0;

  /* nsIApplicationCache getActiveCache (in ACString group); */
  NS_IMETHOD GetActiveCache(const nsACString & group, nsIApplicationCache * *_retval) = 0;

  /* void deactivateGroup (in ACString group); */
  NS_IMETHOD DeactivateGroup(const nsACString & group) = 0;

  /* void evict (in nsILoadContextInfo aLoadContextInfo); */
  NS_IMETHOD Evict(nsILoadContextInfo *aLoadContextInfo) = 0;

  /* void evictMatchingOriginAttributes (in AString aPattern); */
  NS_IMETHOD EvictMatchingOriginAttributes(const nsAString & aPattern) = 0;

  /* nsIApplicationCache chooseApplicationCache (in ACString key, [optional] in nsILoadContextInfo aLoadContextInfo); */
  NS_IMETHOD ChooseApplicationCache(const nsACString & key, nsILoadContextInfo *aLoadContextInfo, nsIApplicationCache * *_retval) = 0;

  /* void cacheOpportunistically (in nsIApplicationCache cache, in ACString key); */
  NS_IMETHOD CacheOpportunistically(nsIApplicationCache *cache, const nsACString & key) = 0;

  /* void getGroups ([optional] out unsigned long count, [array, size_is (count), retval] out string groupIDs); */
  NS_IMETHOD GetGroups(uint32_t *count, char * **groupIDs) = 0;

  /* void getGroupsTimeOrdered ([optional] out unsigned long count, [array, size_is (count), retval] out string groupIDs); */
  NS_IMETHOD GetGroupsTimeOrdered(uint32_t *count, char * **groupIDs) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIApplicationCacheService, NS_IAPPLICATIONCACHESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPLICATIONCACHESERVICE \
  NS_IMETHOD BuildGroupIDForInfo(nsIURI *aManifestURL, nsILoadContextInfo *aLoadContextInfo, nsACString & _retval) override; \
  NS_IMETHOD BuildGroupIDForSuffix(nsIURI *aManifestURL, const nsACString & aOriginSuffix, nsACString & _retval) override; \
  NS_IMETHOD CreateApplicationCache(const nsACString & group, nsIApplicationCache * *_retval) override; \
  NS_IMETHOD CreateCustomApplicationCache(const nsACString & group, nsIFile *profileDir, int32_t quota, nsIApplicationCache * *_retval) override; \
  NS_IMETHOD GetApplicationCache(const nsACString & clientID, nsIApplicationCache * *_retval) override; \
  NS_IMETHOD GetActiveCache(const nsACString & group, nsIApplicationCache * *_retval) override; \
  NS_IMETHOD DeactivateGroup(const nsACString & group) override; \
  NS_IMETHOD Evict(nsILoadContextInfo *aLoadContextInfo) override; \
  NS_IMETHOD EvictMatchingOriginAttributes(const nsAString & aPattern) override; \
  NS_IMETHOD ChooseApplicationCache(const nsACString & key, nsILoadContextInfo *aLoadContextInfo, nsIApplicationCache * *_retval) override; \
  NS_IMETHOD CacheOpportunistically(nsIApplicationCache *cache, const nsACString & key) override; \
  NS_IMETHOD GetGroups(uint32_t *count, char * **groupIDs) override; \
  NS_IMETHOD GetGroupsTimeOrdered(uint32_t *count, char * **groupIDs) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAPPLICATIONCACHESERVICE \
  NS_METHOD BuildGroupIDForInfo(nsIURI *aManifestURL, nsILoadContextInfo *aLoadContextInfo, nsACString & _retval); \
  NS_METHOD BuildGroupIDForSuffix(nsIURI *aManifestURL, const nsACString & aOriginSuffix, nsACString & _retval); \
  NS_METHOD CreateApplicationCache(const nsACString & group, nsIApplicationCache * *_retval); \
  NS_METHOD CreateCustomApplicationCache(const nsACString & group, nsIFile *profileDir, int32_t quota, nsIApplicationCache * *_retval); \
  NS_METHOD GetApplicationCache(const nsACString & clientID, nsIApplicationCache * *_retval); \
  NS_METHOD GetActiveCache(const nsACString & group, nsIApplicationCache * *_retval); \
  NS_METHOD DeactivateGroup(const nsACString & group); \
  NS_METHOD Evict(nsILoadContextInfo *aLoadContextInfo); \
  NS_METHOD EvictMatchingOriginAttributes(const nsAString & aPattern); \
  NS_METHOD ChooseApplicationCache(const nsACString & key, nsILoadContextInfo *aLoadContextInfo, nsIApplicationCache * *_retval); \
  NS_METHOD CacheOpportunistically(nsIApplicationCache *cache, const nsACString & key); \
  NS_METHOD GetGroups(uint32_t *count, char * **groupIDs); \
  NS_METHOD GetGroupsTimeOrdered(uint32_t *count, char * **groupIDs); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPLICATIONCACHESERVICE(_to) \
  NS_IMETHOD BuildGroupIDForInfo(nsIURI *aManifestURL, nsILoadContextInfo *aLoadContextInfo, nsACString & _retval) override { return _to BuildGroupIDForInfo(aManifestURL, aLoadContextInfo, _retval); } \
  NS_IMETHOD BuildGroupIDForSuffix(nsIURI *aManifestURL, const nsACString & aOriginSuffix, nsACString & _retval) override { return _to BuildGroupIDForSuffix(aManifestURL, aOriginSuffix, _retval); } \
  NS_IMETHOD CreateApplicationCache(const nsACString & group, nsIApplicationCache * *_retval) override { return _to CreateApplicationCache(group, _retval); } \
  NS_IMETHOD CreateCustomApplicationCache(const nsACString & group, nsIFile *profileDir, int32_t quota, nsIApplicationCache * *_retval) override { return _to CreateCustomApplicationCache(group, profileDir, quota, _retval); } \
  NS_IMETHOD GetApplicationCache(const nsACString & clientID, nsIApplicationCache * *_retval) override { return _to GetApplicationCache(clientID, _retval); } \
  NS_IMETHOD GetActiveCache(const nsACString & group, nsIApplicationCache * *_retval) override { return _to GetActiveCache(group, _retval); } \
  NS_IMETHOD DeactivateGroup(const nsACString & group) override { return _to DeactivateGroup(group); } \
  NS_IMETHOD Evict(nsILoadContextInfo *aLoadContextInfo) override { return _to Evict(aLoadContextInfo); } \
  NS_IMETHOD EvictMatchingOriginAttributes(const nsAString & aPattern) override { return _to EvictMatchingOriginAttributes(aPattern); } \
  NS_IMETHOD ChooseApplicationCache(const nsACString & key, nsILoadContextInfo *aLoadContextInfo, nsIApplicationCache * *_retval) override { return _to ChooseApplicationCache(key, aLoadContextInfo, _retval); } \
  NS_IMETHOD CacheOpportunistically(nsIApplicationCache *cache, const nsACString & key) override { return _to CacheOpportunistically(cache, key); } \
  NS_IMETHOD GetGroups(uint32_t *count, char * **groupIDs) override { return _to GetGroups(count, groupIDs); } \
  NS_IMETHOD GetGroupsTimeOrdered(uint32_t *count, char * **groupIDs) override { return _to GetGroupsTimeOrdered(count, groupIDs); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPLICATIONCACHESERVICE(_to) \
  NS_IMETHOD BuildGroupIDForInfo(nsIURI *aManifestURL, nsILoadContextInfo *aLoadContextInfo, nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->BuildGroupIDForInfo(aManifestURL, aLoadContextInfo, _retval); } \
  NS_IMETHOD BuildGroupIDForSuffix(nsIURI *aManifestURL, const nsACString & aOriginSuffix, nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->BuildGroupIDForSuffix(aManifestURL, aOriginSuffix, _retval); } \
  NS_IMETHOD CreateApplicationCache(const nsACString & group, nsIApplicationCache * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateApplicationCache(group, _retval); } \
  NS_IMETHOD CreateCustomApplicationCache(const nsACString & group, nsIFile *profileDir, int32_t quota, nsIApplicationCache * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateCustomApplicationCache(group, profileDir, quota, _retval); } \
  NS_IMETHOD GetApplicationCache(const nsACString & clientID, nsIApplicationCache * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetApplicationCache(clientID, _retval); } \
  NS_IMETHOD GetActiveCache(const nsACString & group, nsIApplicationCache * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveCache(group, _retval); } \
  NS_IMETHOD DeactivateGroup(const nsACString & group) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DeactivateGroup(group); } \
  NS_IMETHOD Evict(nsILoadContextInfo *aLoadContextInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Evict(aLoadContextInfo); } \
  NS_IMETHOD EvictMatchingOriginAttributes(const nsAString & aPattern) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EvictMatchingOriginAttributes(aPattern); } \
  NS_IMETHOD ChooseApplicationCache(const nsACString & key, nsILoadContextInfo *aLoadContextInfo, nsIApplicationCache * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ChooseApplicationCache(key, aLoadContextInfo, _retval); } \
  NS_IMETHOD CacheOpportunistically(nsIApplicationCache *cache, const nsACString & key) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CacheOpportunistically(cache, key); } \
  NS_IMETHOD GetGroups(uint32_t *count, char * **groupIDs) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGroups(count, groupIDs); } \
  NS_IMETHOD GetGroupsTimeOrdered(uint32_t *count, char * **groupIDs) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGroupsTimeOrdered(count, groupIDs); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsApplicationCacheService : public nsIApplicationCacheService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPLICATIONCACHESERVICE

  nsApplicationCacheService();

private:
  ~nsApplicationCacheService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsApplicationCacheService, nsIApplicationCacheService)

nsApplicationCacheService::nsApplicationCacheService()
{
  /* member initializers and constructor code */
}

nsApplicationCacheService::~nsApplicationCacheService()
{
  /* destructor code */
}

/* ACString buildGroupIDForInfo (in nsIURI aManifestURL, in nsILoadContextInfo aLoadContextInfo); */
NS_IMETHODIMP nsApplicationCacheService::BuildGroupIDForInfo(nsIURI *aManifestURL, nsILoadContextInfo *aLoadContextInfo, nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString buildGroupIDForSuffix (in nsIURI aManifestURL, in ACString aOriginSuffix); */
NS_IMETHODIMP nsApplicationCacheService::BuildGroupIDForSuffix(nsIURI *aManifestURL, const nsACString & aOriginSuffix, nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIApplicationCache createApplicationCache (in ACString group); */
NS_IMETHODIMP nsApplicationCacheService::CreateApplicationCache(const nsACString & group, nsIApplicationCache * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIApplicationCache createCustomApplicationCache (in ACString group, in nsIFile profileDir, in int32_t quota); */
NS_IMETHODIMP nsApplicationCacheService::CreateCustomApplicationCache(const nsACString & group, nsIFile *profileDir, int32_t quota, nsIApplicationCache * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIApplicationCache getApplicationCache (in ACString clientID); */
NS_IMETHODIMP nsApplicationCacheService::GetApplicationCache(const nsACString & clientID, nsIApplicationCache * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIApplicationCache getActiveCache (in ACString group); */
NS_IMETHODIMP nsApplicationCacheService::GetActiveCache(const nsACString & group, nsIApplicationCache * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deactivateGroup (in ACString group); */
NS_IMETHODIMP nsApplicationCacheService::DeactivateGroup(const nsACString & group)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void evict (in nsILoadContextInfo aLoadContextInfo); */
NS_IMETHODIMP nsApplicationCacheService::Evict(nsILoadContextInfo *aLoadContextInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void evictMatchingOriginAttributes (in AString aPattern); */
NS_IMETHODIMP nsApplicationCacheService::EvictMatchingOriginAttributes(const nsAString & aPattern)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIApplicationCache chooseApplicationCache (in ACString key, [optional] in nsILoadContextInfo aLoadContextInfo); */
NS_IMETHODIMP nsApplicationCacheService::ChooseApplicationCache(const nsACString & key, nsILoadContextInfo *aLoadContextInfo, nsIApplicationCache * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cacheOpportunistically (in nsIApplicationCache cache, in ACString key); */
NS_IMETHODIMP nsApplicationCacheService::CacheOpportunistically(nsIApplicationCache *cache, const nsACString & key)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getGroups ([optional] out unsigned long count, [array, size_is (count), retval] out string groupIDs); */
NS_IMETHODIMP nsApplicationCacheService::GetGroups(uint32_t *count, char * **groupIDs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getGroupsTimeOrdered ([optional] out unsigned long count, [array, size_is (count), retval] out string groupIDs); */
NS_IMETHODIMP nsApplicationCacheService::GetGroupsTimeOrdered(uint32_t *count, char * **groupIDs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIApplicationCacheService_h__ */
