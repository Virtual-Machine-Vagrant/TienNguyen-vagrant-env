/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAppsService.idl
 */

#ifndef __gen_nsIAppsService_h__
#define __gen_nsIAppsService_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIApplication; /* forward declaration */

class nsIURI; /* forward declaration */

#define APPS_SERVICE_CID { 0x05072afa, 0x92fe, 0x45bf, { 0xae, 0x22, 0x39, 0xb6, 0x9c, 0x11, 0x70, 0x58 } }
#define APPS_SERVICE_CONTRACTID "@mozilla.org/AppsService;1"

/* starting interface:    nsIAppsService */
#define NS_IAPPSSERVICE_IID_STR "711cfab6-7b72-4aa2-a60c-17952ea05661"

#define NS_IAPPSSERVICE_IID \
  {0x711cfab6, 0x7b72, 0x4aa2, \
    { 0xa6, 0x0c, 0x17, 0x95, 0x2e, 0xa0, 0x56, 0x61 }}

class NS_NO_VTABLE nsIAppsService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPSSERVICE_IID)

  /* mozIApplication getAppByManifestURL (in DOMString manifestURL); */
  NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIApplication * *_retval) = 0;

  /* jsval getManifestFor (in DOMString manifestURL); */
  NS_IMETHOD GetManifestFor(const nsAString & manifestURL, JS::MutableHandleValue _retval) = 0;

  /* unsigned long getAppLocalIdByManifestURL (in DOMString manifestURL); */
  NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, uint32_t *_retval) = 0;

  /* mozIApplication getAppByLocalId (in unsigned long localId); */
  NS_IMETHOD GetAppByLocalId(uint32_t localId, mozIApplication * *_retval) = 0;

  /* DOMString getManifestURLByLocalId (in unsigned long localId); */
  NS_IMETHOD GetManifestURLByLocalId(uint32_t localId, nsAString & _retval) = 0;

  /* DOMString getManifestCSPByLocalId (in unsigned long localId); */
  NS_IMETHOD GetManifestCSPByLocalId(uint32_t localId, nsAString & _retval) = 0;

  /* DOMString getDefaultCSPByLocalId (in unsigned long localId); */
  NS_IMETHOD GetDefaultCSPByLocalId(uint32_t localId, nsAString & _retval) = 0;

  /* DOMString getCoreAppsBasePath (); */
  NS_IMETHOD GetCoreAppsBasePath(nsAString & _retval) = 0;

  /* DOMString getWebAppsBasePath (); */
  NS_IMETHOD GetWebAppsBasePath(nsAString & _retval) = 0;

  /* boolean areAnyAppsInstalled (); */
  NS_IMETHOD AreAnyAppsInstalled(bool *_retval) = 0;

  /* jsval getAppInfo (in DOMString appId); */
  NS_IMETHOD GetAppInfo(const nsAString & appId, JS::MutableHandleValue _retval) = 0;

  /* nsIURI getRedirect (in unsigned long localId, in nsIURI uri); */
  NS_IMETHOD GetRedirect(uint32_t localId, nsIURI *uri, nsIURI * *_retval) = 0;

  /* DOMString getAppLocalIdByStoreId (in DOMString storeID); */
  NS_IMETHOD GetAppLocalIdByStoreId(const nsAString & storeID, nsAString & _retval) = 0;

  /* DOMString getScopeByLocalId (in unsigned long localId); */
  NS_IMETHOD GetScopeByLocalId(uint32_t localId, nsAString & _retval) = 0;

  /* bool isExtensionResource (in nsIURI uri); */
  NS_IMETHOD IsExtensionResource(nsIURI *uri, bool *_retval) = 0;

  /* void updateDataStoreEntriesFromLocalId (in unsigned long localId); */
  NS_IMETHOD UpdateDataStoreEntriesFromLocalId(uint32_t localId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAppsService, NS_IAPPSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPSSERVICE \
  NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIApplication * *_retval) override; \
  NS_IMETHOD GetManifestFor(const nsAString & manifestURL, JS::MutableHandleValue _retval) override; \
  NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, uint32_t *_retval) override; \
  NS_IMETHOD GetAppByLocalId(uint32_t localId, mozIApplication * *_retval) override; \
  NS_IMETHOD GetManifestURLByLocalId(uint32_t localId, nsAString & _retval) override; \
  NS_IMETHOD GetManifestCSPByLocalId(uint32_t localId, nsAString & _retval) override; \
  NS_IMETHOD GetDefaultCSPByLocalId(uint32_t localId, nsAString & _retval) override; \
  NS_IMETHOD GetCoreAppsBasePath(nsAString & _retval) override; \
  NS_IMETHOD GetWebAppsBasePath(nsAString & _retval) override; \
  NS_IMETHOD AreAnyAppsInstalled(bool *_retval) override; \
  NS_IMETHOD GetAppInfo(const nsAString & appId, JS::MutableHandleValue _retval) override; \
  NS_IMETHOD GetRedirect(uint32_t localId, nsIURI *uri, nsIURI * *_retval) override; \
  NS_IMETHOD GetAppLocalIdByStoreId(const nsAString & storeID, nsAString & _retval) override; \
  NS_IMETHOD GetScopeByLocalId(uint32_t localId, nsAString & _retval) override; \
  NS_IMETHOD IsExtensionResource(nsIURI *uri, bool *_retval) override; \
  NS_IMETHOD UpdateDataStoreEntriesFromLocalId(uint32_t localId) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAPPSSERVICE \
  NS_METHOD GetAppByManifestURL(const nsAString & manifestURL, mozIApplication * *_retval); \
  NS_METHOD GetManifestFor(const nsAString & manifestURL, JS::MutableHandleValue _retval); \
  NS_METHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, uint32_t *_retval); \
  NS_METHOD GetAppByLocalId(uint32_t localId, mozIApplication * *_retval); \
  NS_METHOD GetManifestURLByLocalId(uint32_t localId, nsAString & _retval); \
  NS_METHOD GetManifestCSPByLocalId(uint32_t localId, nsAString & _retval); \
  NS_METHOD GetDefaultCSPByLocalId(uint32_t localId, nsAString & _retval); \
  NS_METHOD GetCoreAppsBasePath(nsAString & _retval); \
  NS_METHOD GetWebAppsBasePath(nsAString & _retval); \
  NS_METHOD AreAnyAppsInstalled(bool *_retval); \
  NS_METHOD GetAppInfo(const nsAString & appId, JS::MutableHandleValue _retval); \
  NS_METHOD GetRedirect(uint32_t localId, nsIURI *uri, nsIURI * *_retval); \
  NS_METHOD GetAppLocalIdByStoreId(const nsAString & storeID, nsAString & _retval); \
  NS_METHOD GetScopeByLocalId(uint32_t localId, nsAString & _retval); \
  NS_METHOD IsExtensionResource(nsIURI *uri, bool *_retval); \
  NS_METHOD UpdateDataStoreEntriesFromLocalId(uint32_t localId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPSSERVICE(_to) \
  NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIApplication * *_retval) override { return _to GetAppByManifestURL(manifestURL, _retval); } \
  NS_IMETHOD GetManifestFor(const nsAString & manifestURL, JS::MutableHandleValue _retval) override { return _to GetManifestFor(manifestURL, _retval); } \
  NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, uint32_t *_retval) override { return _to GetAppLocalIdByManifestURL(manifestURL, _retval); } \
  NS_IMETHOD GetAppByLocalId(uint32_t localId, mozIApplication * *_retval) override { return _to GetAppByLocalId(localId, _retval); } \
  NS_IMETHOD GetManifestURLByLocalId(uint32_t localId, nsAString & _retval) override { return _to GetManifestURLByLocalId(localId, _retval); } \
  NS_IMETHOD GetManifestCSPByLocalId(uint32_t localId, nsAString & _retval) override { return _to GetManifestCSPByLocalId(localId, _retval); } \
  NS_IMETHOD GetDefaultCSPByLocalId(uint32_t localId, nsAString & _retval) override { return _to GetDefaultCSPByLocalId(localId, _retval); } \
  NS_IMETHOD GetCoreAppsBasePath(nsAString & _retval) override { return _to GetCoreAppsBasePath(_retval); } \
  NS_IMETHOD GetWebAppsBasePath(nsAString & _retval) override { return _to GetWebAppsBasePath(_retval); } \
  NS_IMETHOD AreAnyAppsInstalled(bool *_retval) override { return _to AreAnyAppsInstalled(_retval); } \
  NS_IMETHOD GetAppInfo(const nsAString & appId, JS::MutableHandleValue _retval) override { return _to GetAppInfo(appId, _retval); } \
  NS_IMETHOD GetRedirect(uint32_t localId, nsIURI *uri, nsIURI * *_retval) override { return _to GetRedirect(localId, uri, _retval); } \
  NS_IMETHOD GetAppLocalIdByStoreId(const nsAString & storeID, nsAString & _retval) override { return _to GetAppLocalIdByStoreId(storeID, _retval); } \
  NS_IMETHOD GetScopeByLocalId(uint32_t localId, nsAString & _retval) override { return _to GetScopeByLocalId(localId, _retval); } \
  NS_IMETHOD IsExtensionResource(nsIURI *uri, bool *_retval) override { return _to IsExtensionResource(uri, _retval); } \
  NS_IMETHOD UpdateDataStoreEntriesFromLocalId(uint32_t localId) override { return _to UpdateDataStoreEntriesFromLocalId(localId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPSSERVICE(_to) \
  NS_IMETHOD GetAppByManifestURL(const nsAString & manifestURL, mozIApplication * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppByManifestURL(manifestURL, _retval); } \
  NS_IMETHOD GetManifestFor(const nsAString & manifestURL, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifestFor(manifestURL, _retval); } \
  NS_IMETHOD GetAppLocalIdByManifestURL(const nsAString & manifestURL, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppLocalIdByManifestURL(manifestURL, _retval); } \
  NS_IMETHOD GetAppByLocalId(uint32_t localId, mozIApplication * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppByLocalId(localId, _retval); } \
  NS_IMETHOD GetManifestURLByLocalId(uint32_t localId, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifestURLByLocalId(localId, _retval); } \
  NS_IMETHOD GetManifestCSPByLocalId(uint32_t localId, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifestCSPByLocalId(localId, _retval); } \
  NS_IMETHOD GetDefaultCSPByLocalId(uint32_t localId, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultCSPByLocalId(localId, _retval); } \
  NS_IMETHOD GetCoreAppsBasePath(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCoreAppsBasePath(_retval); } \
  NS_IMETHOD GetWebAppsBasePath(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWebAppsBasePath(_retval); } \
  NS_IMETHOD AreAnyAppsInstalled(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AreAnyAppsInstalled(_retval); } \
  NS_IMETHOD GetAppInfo(const nsAString & appId, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppInfo(appId, _retval); } \
  NS_IMETHOD GetRedirect(uint32_t localId, nsIURI *uri, nsIURI * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRedirect(localId, uri, _retval); } \
  NS_IMETHOD GetAppLocalIdByStoreId(const nsAString & storeID, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppLocalIdByStoreId(storeID, _retval); } \
  NS_IMETHOD GetScopeByLocalId(uint32_t localId, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScopeByLocalId(localId, _retval); } \
  NS_IMETHOD IsExtensionResource(nsIURI *uri, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsExtensionResource(uri, _retval); } \
  NS_IMETHOD UpdateDataStoreEntriesFromLocalId(uint32_t localId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateDataStoreEntriesFromLocalId(localId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAppsService : public nsIAppsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPSSERVICE

  nsAppsService();

private:
  ~nsAppsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAppsService, nsIAppsService)

nsAppsService::nsAppsService()
{
  /* member initializers and constructor code */
}

nsAppsService::~nsAppsService()
{
  /* destructor code */
}

/* mozIApplication getAppByManifestURL (in DOMString manifestURL); */
NS_IMETHODIMP nsAppsService::GetAppByManifestURL(const nsAString & manifestURL, mozIApplication * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getManifestFor (in DOMString manifestURL); */
NS_IMETHODIMP nsAppsService::GetManifestFor(const nsAString & manifestURL, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long getAppLocalIdByManifestURL (in DOMString manifestURL); */
NS_IMETHODIMP nsAppsService::GetAppLocalIdByManifestURL(const nsAString & manifestURL, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIApplication getAppByLocalId (in unsigned long localId); */
NS_IMETHODIMP nsAppsService::GetAppByLocalId(uint32_t localId, mozIApplication * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getManifestURLByLocalId (in unsigned long localId); */
NS_IMETHODIMP nsAppsService::GetManifestURLByLocalId(uint32_t localId, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getManifestCSPByLocalId (in unsigned long localId); */
NS_IMETHODIMP nsAppsService::GetManifestCSPByLocalId(uint32_t localId, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getDefaultCSPByLocalId (in unsigned long localId); */
NS_IMETHODIMP nsAppsService::GetDefaultCSPByLocalId(uint32_t localId, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getCoreAppsBasePath (); */
NS_IMETHODIMP nsAppsService::GetCoreAppsBasePath(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getWebAppsBasePath (); */
NS_IMETHODIMP nsAppsService::GetWebAppsBasePath(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean areAnyAppsInstalled (); */
NS_IMETHODIMP nsAppsService::AreAnyAppsInstalled(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval getAppInfo (in DOMString appId); */
NS_IMETHODIMP nsAppsService::GetAppInfo(const nsAString & appId, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getRedirect (in unsigned long localId, in nsIURI uri); */
NS_IMETHODIMP nsAppsService::GetRedirect(uint32_t localId, nsIURI *uri, nsIURI * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getAppLocalIdByStoreId (in DOMString storeID); */
NS_IMETHODIMP nsAppsService::GetAppLocalIdByStoreId(const nsAString & storeID, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getScopeByLocalId (in unsigned long localId); */
NS_IMETHODIMP nsAppsService::GetScopeByLocalId(uint32_t localId, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool isExtensionResource (in nsIURI uri); */
NS_IMETHODIMP nsAppsService::IsExtensionResource(nsIURI *uri, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateDataStoreEntriesFromLocalId (in unsigned long localId); */
NS_IMETHODIMP nsAppsService::UpdateDataStoreEntriesFromLocalId(uint32_t localId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAppsService_h__ */
