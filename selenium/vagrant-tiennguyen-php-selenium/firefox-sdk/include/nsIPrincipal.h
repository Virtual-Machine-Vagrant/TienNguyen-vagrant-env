/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrincipal.idl
 */

#ifndef __gen_nsIPrincipal_h__
#define __gen_nsIPrincipal_h__


#ifndef __gen_nsISerializable_h__
#include "nsISerializable.h"
#endif

#include "js/Value.h"

#include "mozilla/Assertions.h"
#include "mozilla/DebugOnly.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
struct JSPrincipals;
#include "nsCOMPtr.h"
#include "nsTArray.h"
class nsIURI; /* forward declaration */

class nsIContentSecurityPolicy; /* forward declaration */

class nsIDOMDocument; /* forward declaration */


/* starting interface:    nsIPrincipal */
#define NS_IPRINCIPAL_IID_STR "d0391e86-1ad7-4ab0-bb7c-14d6d9967369"

#define NS_IPRINCIPAL_IID \
  {0xd0391e86, 0x1ad7, 0x4ab0, \
    { 0xbb, 0x7c, 0x14, 0xd6, 0xd9, 0x96, 0x73, 0x69 }}

class nsIPrincipal : public nsISerializable {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRINCIPAL_IID)

  /* boolean equals (in nsIPrincipal other); */
  NS_IMETHOD Equals(nsIPrincipal *other, bool *_retval) = 0;

  /* boolean equalsConsideringDomain (in nsIPrincipal other); */
  NS_IMETHOD EqualsConsideringDomain(nsIPrincipal *other, bool *_retval) = 0;

     inline bool Equals(nsIPrincipal* aOther) {
      bool equal = false;
      return NS_SUCCEEDED(Equals(aOther, &equal)) && equal;
    }
    inline bool EqualsConsideringDomain(nsIPrincipal* aOther) {
      bool equal = false;
      return NS_SUCCEEDED(EqualsConsideringDomain(aOther, &equal)) && equal;
    }
      /* [noscript] readonly attribute unsigned long hashValue; */
  NS_IMETHOD GetHashValue(uint32_t *aHashValue) = 0;

  /* readonly attribute nsIURI URI; */
  NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* [noscript] attribute nsIURI domain; */
  NS_IMETHOD GetDomain(nsIURI * *aDomain) = 0;
  NS_IMETHOD SetDomain(nsIURI *aDomain) = 0;

  /* boolean subsumes (in nsIPrincipal other); */
  NS_IMETHOD Subsumes(nsIPrincipal *other, bool *_retval) = 0;

  /* boolean subsumesConsideringDomain (in nsIPrincipal other); */
  NS_IMETHOD SubsumesConsideringDomain(nsIPrincipal *other, bool *_retval) = 0;

     inline bool Subsumes(nsIPrincipal* aOther) {
      bool subsumes = false;
      return NS_SUCCEEDED(Subsumes(aOther, &subsumes)) && subsumes;
    }
    inline bool SubsumesConsideringDomain(nsIPrincipal* aOther) {
      bool subsumes = false;
      return NS_SUCCEEDED(SubsumesConsideringDomain(aOther, &subsumes)) && subsumes;
    }
      /* void checkMayLoad (in nsIURI uri, in boolean report, in boolean allowIfInheritsPrincipal); */
  NS_IMETHOD CheckMayLoad(nsIURI *uri, bool report, bool allowIfInheritsPrincipal) = 0;

  /* [noscript] readonly attribute nsIContentSecurityPolicy csp; */
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp) = 0;

  /* [noscript] nsIContentSecurityPolicy ensureCSP (in nsIDOMDocument aDocument); */
  NS_IMETHOD EnsureCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) = 0;

  /* [noscript] readonly attribute nsIContentSecurityPolicy preloadCsp; */
  NS_IMETHOD GetPreloadCsp(nsIContentSecurityPolicy * *aPreloadCsp) = 0;

  /* [noscript] nsIContentSecurityPolicy ensurePreloadCSP (in nsIDOMDocument aDocument); */
  NS_IMETHOD EnsurePreloadCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) = 0;

  /* readonly attribute AString cspJSON; */
  NS_IMETHOD GetCspJSON(nsAString & aCspJSON) = 0;

  /* readonly attribute AUTF8String jarPrefix; */
  NS_IMETHOD GetJarPrefix(nsACString & aJarPrefix) = 0;

  /* [implicit_jscontext] readonly attribute jsval originAttributes; */
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) = 0;

  /* readonly attribute ACString origin; */
  NS_IMETHOD GetOrigin(nsACString & aOrigin) = 0;

  /* readonly attribute ACString originNoSuffix; */
  NS_IMETHOD GetOriginNoSuffix(nsACString & aOriginNoSuffix) = 0;

  /* readonly attribute AUTF8String originSuffix; */
  NS_IMETHOD GetOriginSuffix(nsACString & aOriginSuffix) = 0;

  /* readonly attribute ACString baseDomain; */
  NS_IMETHOD GetBaseDomain(nsACString & aBaseDomain) = 0;

  enum {
    APP_STATUS_NOT_INSTALLED = 0,
    APP_STATUS_INSTALLED = 1,
    APP_STATUS_PRIVILEGED = 2,
    APP_STATUS_CERTIFIED = 3
  };

  /* [infallible] readonly attribute unsigned short appStatus; */
  NS_IMETHOD GetAppStatus(uint16_t *aAppStatus) = 0;
  inline uint16_t GetAppStatus()
  {
    uint16_t result;
    mozilla::DebugOnly<nsresult> rv = GetAppStatus(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute unsigned long appId; */
  NS_IMETHOD GetAppId(uint32_t *aAppId) = 0;
  inline uint32_t GetAppId()
  {
    uint32_t result;
    mozilla::DebugOnly<nsresult> rv = GetAppId(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute unsigned long userContextId; */
  NS_IMETHOD GetUserContextId(uint32_t *aUserContextId) = 0;
  inline uint32_t GetUserContextId()
  {
    uint32_t result;
    mozilla::DebugOnly<nsresult> rv = GetUserContextId(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean isInIsolatedMozBrowserElement; */
  NS_IMETHOD GetIsInIsolatedMozBrowserElement(bool *aIsInIsolatedMozBrowserElement) = 0;
  inline bool GetIsInIsolatedMozBrowserElement()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsInIsolatedMozBrowserElement(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean unknownAppId; */
  NS_IMETHOD GetUnknownAppId(bool *aUnknownAppId) = 0;
  inline bool GetUnknownAppId()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetUnknownAppId(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean isNullPrincipal; */
  NS_IMETHOD GetIsNullPrincipal(bool *aIsNullPrincipal) = 0;
  inline bool GetIsNullPrincipal()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsNullPrincipal(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean isCodebasePrincipal; */
  NS_IMETHOD GetIsCodebasePrincipal(bool *aIsCodebasePrincipal) = 0;
  inline bool GetIsCodebasePrincipal()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsCodebasePrincipal(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean isExpandedPrincipal; */
  NS_IMETHOD GetIsExpandedPrincipal(bool *aIsExpandedPrincipal) = 0;
  inline bool GetIsExpandedPrincipal()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsExpandedPrincipal(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [infallible] readonly attribute boolean isSystemPrincipal; */
  NS_IMETHOD GetIsSystemPrincipal(bool *aIsSystemPrincipal) = 0;
  inline bool GetIsSystemPrincipal()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsSystemPrincipal(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* [noscript,nostdcall,notxpcom] bool IsOnCSSUnprefixingWhitelist (); */
  virtual bool IsOnCSSUnprefixingWhitelist(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrincipal, NS_IPRINCIPAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRINCIPAL \
  NS_IMETHOD Equals(nsIPrincipal *other, bool *_retval) override; \
  NS_IMETHOD EqualsConsideringDomain(nsIPrincipal *other, bool *_retval) override; \
  NS_IMETHOD GetHashValue(uint32_t *aHashValue) override; \
  NS_IMETHOD GetURI(nsIURI * *aURI) override; \
  NS_IMETHOD GetDomain(nsIURI * *aDomain) override; \
  NS_IMETHOD SetDomain(nsIURI *aDomain) override; \
  NS_IMETHOD Subsumes(nsIPrincipal *other, bool *_retval) override; \
  NS_IMETHOD SubsumesConsideringDomain(nsIPrincipal *other, bool *_retval) override; \
  NS_IMETHOD CheckMayLoad(nsIURI *uri, bool report, bool allowIfInheritsPrincipal) override; \
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp) override; \
  NS_IMETHOD EnsureCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) override; \
  NS_IMETHOD GetPreloadCsp(nsIContentSecurityPolicy * *aPreloadCsp) override; \
  NS_IMETHOD EnsurePreloadCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) override; \
  NS_IMETHOD GetCspJSON(nsAString & aCspJSON) override; \
  NS_IMETHOD GetJarPrefix(nsACString & aJarPrefix) override; \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override; \
  NS_IMETHOD GetOrigin(nsACString & aOrigin) override; \
  NS_IMETHOD GetOriginNoSuffix(nsACString & aOriginNoSuffix) override; \
  NS_IMETHOD GetOriginSuffix(nsACString & aOriginSuffix) override; \
  NS_IMETHOD GetBaseDomain(nsACString & aBaseDomain) override; \
  using nsIPrincipal::GetAppStatus; \
  NS_IMETHOD GetAppStatus(uint16_t *aAppStatus) override; \
  using nsIPrincipal::GetAppId; \
  NS_IMETHOD GetAppId(uint32_t *aAppId) override; \
  using nsIPrincipal::GetUserContextId; \
  NS_IMETHOD GetUserContextId(uint32_t *aUserContextId) override; \
  using nsIPrincipal::GetIsInIsolatedMozBrowserElement; \
  NS_IMETHOD GetIsInIsolatedMozBrowserElement(bool *aIsInIsolatedMozBrowserElement) override; \
  using nsIPrincipal::GetUnknownAppId; \
  NS_IMETHOD GetUnknownAppId(bool *aUnknownAppId) override; \
  using nsIPrincipal::GetIsNullPrincipal; \
  NS_IMETHOD GetIsNullPrincipal(bool *aIsNullPrincipal) override; \
  using nsIPrincipal::GetIsCodebasePrincipal; \
  NS_IMETHOD GetIsCodebasePrincipal(bool *aIsCodebasePrincipal) override; \
  using nsIPrincipal::GetIsExpandedPrincipal; \
  NS_IMETHOD GetIsExpandedPrincipal(bool *aIsExpandedPrincipal) override; \
  using nsIPrincipal::GetIsSystemPrincipal; \
  NS_IMETHOD GetIsSystemPrincipal(bool *aIsSystemPrincipal) override; \
  virtual bool IsOnCSSUnprefixingWhitelist(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRINCIPAL \
  NS_METHOD Equals(nsIPrincipal *other, bool *_retval); \
  NS_METHOD EqualsConsideringDomain(nsIPrincipal *other, bool *_retval); \
  NS_METHOD GetHashValue(uint32_t *aHashValue); \
  NS_METHOD GetURI(nsIURI * *aURI); \
  NS_METHOD GetDomain(nsIURI * *aDomain); \
  NS_METHOD SetDomain(nsIURI *aDomain); \
  NS_METHOD Subsumes(nsIPrincipal *other, bool *_retval); \
  NS_METHOD SubsumesConsideringDomain(nsIPrincipal *other, bool *_retval); \
  NS_METHOD CheckMayLoad(nsIURI *uri, bool report, bool allowIfInheritsPrincipal); \
  NS_METHOD GetCsp(nsIContentSecurityPolicy * *aCsp); \
  NS_METHOD EnsureCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval); \
  NS_METHOD GetPreloadCsp(nsIContentSecurityPolicy * *aPreloadCsp); \
  NS_METHOD EnsurePreloadCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval); \
  NS_METHOD GetCspJSON(nsAString & aCspJSON); \
  NS_METHOD GetJarPrefix(nsACString & aJarPrefix); \
  NS_METHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes); \
  NS_METHOD GetOrigin(nsACString & aOrigin); \
  NS_METHOD GetOriginNoSuffix(nsACString & aOriginNoSuffix); \
  NS_METHOD GetOriginSuffix(nsACString & aOriginSuffix); \
  NS_METHOD GetBaseDomain(nsACString & aBaseDomain); \
  using nsIPrincipal::GetAppStatus; \
  NS_METHOD GetAppStatus(uint16_t *aAppStatus); \
  using nsIPrincipal::GetAppId; \
  NS_METHOD GetAppId(uint32_t *aAppId); \
  using nsIPrincipal::GetUserContextId; \
  NS_METHOD GetUserContextId(uint32_t *aUserContextId); \
  using nsIPrincipal::GetIsInIsolatedMozBrowserElement; \
  NS_METHOD GetIsInIsolatedMozBrowserElement(bool *aIsInIsolatedMozBrowserElement); \
  using nsIPrincipal::GetUnknownAppId; \
  NS_METHOD GetUnknownAppId(bool *aUnknownAppId); \
  using nsIPrincipal::GetIsNullPrincipal; \
  NS_METHOD GetIsNullPrincipal(bool *aIsNullPrincipal); \
  using nsIPrincipal::GetIsCodebasePrincipal; \
  NS_METHOD GetIsCodebasePrincipal(bool *aIsCodebasePrincipal); \
  using nsIPrincipal::GetIsExpandedPrincipal; \
  NS_METHOD GetIsExpandedPrincipal(bool *aIsExpandedPrincipal); \
  using nsIPrincipal::GetIsSystemPrincipal; \
  NS_METHOD GetIsSystemPrincipal(bool *aIsSystemPrincipal); \
  bool IsOnCSSUnprefixingWhitelist(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRINCIPAL(_to) \
  NS_IMETHOD Equals(nsIPrincipal *other, bool *_retval) override { return _to Equals(other, _retval); } \
  NS_IMETHOD EqualsConsideringDomain(nsIPrincipal *other, bool *_retval) override { return _to EqualsConsideringDomain(other, _retval); } \
  NS_IMETHOD GetHashValue(uint32_t *aHashValue) override { return _to GetHashValue(aHashValue); } \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return _to GetURI(aURI); } \
  NS_IMETHOD GetDomain(nsIURI * *aDomain) override { return _to GetDomain(aDomain); } \
  NS_IMETHOD SetDomain(nsIURI *aDomain) override { return _to SetDomain(aDomain); } \
  NS_IMETHOD Subsumes(nsIPrincipal *other, bool *_retval) override { return _to Subsumes(other, _retval); } \
  NS_IMETHOD SubsumesConsideringDomain(nsIPrincipal *other, bool *_retval) override { return _to SubsumesConsideringDomain(other, _retval); } \
  NS_IMETHOD CheckMayLoad(nsIURI *uri, bool report, bool allowIfInheritsPrincipal) override { return _to CheckMayLoad(uri, report, allowIfInheritsPrincipal); } \
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp) override { return _to GetCsp(aCsp); } \
  NS_IMETHOD EnsureCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) override { return _to EnsureCSP(aDocument, _retval); } \
  NS_IMETHOD GetPreloadCsp(nsIContentSecurityPolicy * *aPreloadCsp) override { return _to GetPreloadCsp(aPreloadCsp); } \
  NS_IMETHOD EnsurePreloadCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) override { return _to EnsurePreloadCSP(aDocument, _retval); } \
  NS_IMETHOD GetCspJSON(nsAString & aCspJSON) override { return _to GetCspJSON(aCspJSON); } \
  NS_IMETHOD GetJarPrefix(nsACString & aJarPrefix) override { return _to GetJarPrefix(aJarPrefix); } \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override { return _to GetOriginAttributes(cx, aOriginAttributes); } \
  NS_IMETHOD GetOrigin(nsACString & aOrigin) override { return _to GetOrigin(aOrigin); } \
  NS_IMETHOD GetOriginNoSuffix(nsACString & aOriginNoSuffix) override { return _to GetOriginNoSuffix(aOriginNoSuffix); } \
  NS_IMETHOD GetOriginSuffix(nsACString & aOriginSuffix) override { return _to GetOriginSuffix(aOriginSuffix); } \
  NS_IMETHOD GetBaseDomain(nsACString & aBaseDomain) override { return _to GetBaseDomain(aBaseDomain); } \
  using nsIPrincipal::GetAppStatus; \
  NS_IMETHOD GetAppStatus(uint16_t *aAppStatus) override { return _to GetAppStatus(aAppStatus); } \
  using nsIPrincipal::GetAppId; \
  NS_IMETHOD GetAppId(uint32_t *aAppId) override { return _to GetAppId(aAppId); } \
  using nsIPrincipal::GetUserContextId; \
  NS_IMETHOD GetUserContextId(uint32_t *aUserContextId) override { return _to GetUserContextId(aUserContextId); } \
  using nsIPrincipal::GetIsInIsolatedMozBrowserElement; \
  NS_IMETHOD GetIsInIsolatedMozBrowserElement(bool *aIsInIsolatedMozBrowserElement) override { return _to GetIsInIsolatedMozBrowserElement(aIsInIsolatedMozBrowserElement); } \
  using nsIPrincipal::GetUnknownAppId; \
  NS_IMETHOD GetUnknownAppId(bool *aUnknownAppId) override { return _to GetUnknownAppId(aUnknownAppId); } \
  using nsIPrincipal::GetIsNullPrincipal; \
  NS_IMETHOD GetIsNullPrincipal(bool *aIsNullPrincipal) override { return _to GetIsNullPrincipal(aIsNullPrincipal); } \
  using nsIPrincipal::GetIsCodebasePrincipal; \
  NS_IMETHOD GetIsCodebasePrincipal(bool *aIsCodebasePrincipal) override { return _to GetIsCodebasePrincipal(aIsCodebasePrincipal); } \
  using nsIPrincipal::GetIsExpandedPrincipal; \
  NS_IMETHOD GetIsExpandedPrincipal(bool *aIsExpandedPrincipal) override { return _to GetIsExpandedPrincipal(aIsExpandedPrincipal); } \
  using nsIPrincipal::GetIsSystemPrincipal; \
  NS_IMETHOD GetIsSystemPrincipal(bool *aIsSystemPrincipal) override { return _to GetIsSystemPrincipal(aIsSystemPrincipal); } \
  virtual bool IsOnCSSUnprefixingWhitelist(void) override { return _to IsOnCSSUnprefixingWhitelist(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRINCIPAL(_to) \
  NS_IMETHOD Equals(nsIPrincipal *other, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Equals(other, _retval); } \
  NS_IMETHOD EqualsConsideringDomain(nsIPrincipal *other, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EqualsConsideringDomain(other, _retval); } \
  NS_IMETHOD GetHashValue(uint32_t *aHashValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHashValue(aHashValue); } \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_IMETHOD GetDomain(nsIURI * *aDomain) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomain(aDomain); } \
  NS_IMETHOD SetDomain(nsIURI *aDomain) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDomain(aDomain); } \
  NS_IMETHOD Subsumes(nsIPrincipal *other, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Subsumes(other, _retval); } \
  NS_IMETHOD SubsumesConsideringDomain(nsIPrincipal *other, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SubsumesConsideringDomain(other, _retval); } \
  NS_IMETHOD CheckMayLoad(nsIURI *uri, bool report, bool allowIfInheritsPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckMayLoad(uri, report, allowIfInheritsPrincipal); } \
  NS_IMETHOD GetCsp(nsIContentSecurityPolicy * *aCsp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCsp(aCsp); } \
  NS_IMETHOD EnsureCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EnsureCSP(aDocument, _retval); } \
  NS_IMETHOD GetPreloadCsp(nsIContentSecurityPolicy * *aPreloadCsp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreloadCsp(aPreloadCsp); } \
  NS_IMETHOD EnsurePreloadCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EnsurePreloadCSP(aDocument, _retval); } \
  NS_IMETHOD GetCspJSON(nsAString & aCspJSON) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCspJSON(aCspJSON); } \
  NS_IMETHOD GetJarPrefix(nsACString & aJarPrefix) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJarPrefix(aJarPrefix); } \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginAttributes(cx, aOriginAttributes); } \
  NS_IMETHOD GetOrigin(nsACString & aOrigin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrigin(aOrigin); } \
  NS_IMETHOD GetOriginNoSuffix(nsACString & aOriginNoSuffix) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginNoSuffix(aOriginNoSuffix); } \
  NS_IMETHOD GetOriginSuffix(nsACString & aOriginSuffix) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginSuffix(aOriginSuffix); } \
  NS_IMETHOD GetBaseDomain(nsACString & aBaseDomain) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseDomain(aBaseDomain); } \
  NS_IMETHOD GetAppStatus(uint16_t *aAppStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppStatus(aAppStatus); } \
  NS_IMETHOD GetAppId(uint32_t *aAppId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAppId(aAppId); } \
  NS_IMETHOD GetUserContextId(uint32_t *aUserContextId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserContextId(aUserContextId); } \
  NS_IMETHOD GetIsInIsolatedMozBrowserElement(bool *aIsInIsolatedMozBrowserElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsInIsolatedMozBrowserElement(aIsInIsolatedMozBrowserElement); } \
  NS_IMETHOD GetUnknownAppId(bool *aUnknownAppId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnknownAppId(aUnknownAppId); } \
  NS_IMETHOD GetIsNullPrincipal(bool *aIsNullPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsNullPrincipal(aIsNullPrincipal); } \
  NS_IMETHOD GetIsCodebasePrincipal(bool *aIsCodebasePrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsCodebasePrincipal(aIsCodebasePrincipal); } \
  NS_IMETHOD GetIsExpandedPrincipal(bool *aIsExpandedPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsExpandedPrincipal(aIsExpandedPrincipal); } \
  NS_IMETHOD GetIsSystemPrincipal(bool *aIsSystemPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSystemPrincipal(aIsSystemPrincipal); } \
  virtual bool IsOnCSSUnprefixingWhitelist(void) override; 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrincipal : public nsIPrincipal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRINCIPAL

  nsPrincipal();

private:
  ~nsPrincipal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrincipal, nsIPrincipal)

nsPrincipal::nsPrincipal()
{
  /* member initializers and constructor code */
}

nsPrincipal::~nsPrincipal()
{
  /* destructor code */
}

/* boolean equals (in nsIPrincipal other); */
NS_IMETHODIMP nsPrincipal::Equals(nsIPrincipal *other, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equalsConsideringDomain (in nsIPrincipal other); */
NS_IMETHODIMP nsPrincipal::EqualsConsideringDomain(nsIPrincipal *other, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute unsigned long hashValue; */
NS_IMETHODIMP nsPrincipal::GetHashValue(uint32_t *aHashValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP nsPrincipal::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute nsIURI domain; */
NS_IMETHODIMP nsPrincipal::GetDomain(nsIURI * *aDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPrincipal::SetDomain(nsIURI *aDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean subsumes (in nsIPrincipal other); */
NS_IMETHODIMP nsPrincipal::Subsumes(nsIPrincipal *other, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean subsumesConsideringDomain (in nsIPrincipal other); */
NS_IMETHODIMP nsPrincipal::SubsumesConsideringDomain(nsIPrincipal *other, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkMayLoad (in nsIURI uri, in boolean report, in boolean allowIfInheritsPrincipal); */
NS_IMETHODIMP nsPrincipal::CheckMayLoad(nsIURI *uri, bool report, bool allowIfInheritsPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIContentSecurityPolicy csp; */
NS_IMETHODIMP nsPrincipal::GetCsp(nsIContentSecurityPolicy * *aCsp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIContentSecurityPolicy ensureCSP (in nsIDOMDocument aDocument); */
NS_IMETHODIMP nsPrincipal::EnsureCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIContentSecurityPolicy preloadCsp; */
NS_IMETHODIMP nsPrincipal::GetPreloadCsp(nsIContentSecurityPolicy * *aPreloadCsp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIContentSecurityPolicy ensurePreloadCSP (in nsIDOMDocument aDocument); */
NS_IMETHODIMP nsPrincipal::EnsurePreloadCSP(nsIDOMDocument *aDocument, nsIContentSecurityPolicy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString cspJSON; */
NS_IMETHODIMP nsPrincipal::GetCspJSON(nsAString & aCspJSON)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String jarPrefix; */
NS_IMETHODIMP nsPrincipal::GetJarPrefix(nsACString & aJarPrefix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval originAttributes; */
NS_IMETHODIMP nsPrincipal::GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString origin; */
NS_IMETHODIMP nsPrincipal::GetOrigin(nsACString & aOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString originNoSuffix; */
NS_IMETHODIMP nsPrincipal::GetOriginNoSuffix(nsACString & aOriginNoSuffix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String originSuffix; */
NS_IMETHODIMP nsPrincipal::GetOriginSuffix(nsACString & aOriginSuffix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString baseDomain; */
NS_IMETHODIMP nsPrincipal::GetBaseDomain(nsACString & aBaseDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute unsigned short appStatus; */
NS_IMETHODIMP nsPrincipal::GetAppStatus(uint16_t *aAppStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute unsigned long appId; */
NS_IMETHODIMP nsPrincipal::GetAppId(uint32_t *aAppId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute unsigned long userContextId; */
NS_IMETHODIMP nsPrincipal::GetUserContextId(uint32_t *aUserContextId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean isInIsolatedMozBrowserElement; */
NS_IMETHODIMP nsPrincipal::GetIsInIsolatedMozBrowserElement(bool *aIsInIsolatedMozBrowserElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean unknownAppId; */
NS_IMETHODIMP nsPrincipal::GetUnknownAppId(bool *aUnknownAppId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean isNullPrincipal; */
NS_IMETHODIMP nsPrincipal::GetIsNullPrincipal(bool *aIsNullPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean isCodebasePrincipal; */
NS_IMETHODIMP nsPrincipal::GetIsCodebasePrincipal(bool *aIsCodebasePrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean isExpandedPrincipal; */
NS_IMETHODIMP nsPrincipal::GetIsExpandedPrincipal(bool *aIsExpandedPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] readonly attribute boolean isSystemPrincipal; */
NS_IMETHODIMP nsPrincipal::GetIsSystemPrincipal(bool *aIsSystemPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,nostdcall,notxpcom] bool IsOnCSSUnprefixingWhitelist (); */
bool nsPrincipal::IsOnCSSUnprefixingWhitelist()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIExpandedPrincipal */
#define NS_IEXPANDEDPRINCIPAL_IID_STR "f3e177df-6a5e-489f-80a7-2dd1481471d8"

#define NS_IEXPANDEDPRINCIPAL_IID \
  {0xf3e177df, 0x6a5e, 0x489f, \
    { 0x80, 0xa7, 0x2d, 0xd1, 0x48, 0x14, 0x71, 0xd8 }}

class NS_NO_VTABLE nsIExpandedPrincipal : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEXPANDEDPRINCIPAL_IID)

  /* [noscript] readonly attribute PrincipalArray whiteList; */
  NS_IMETHOD GetWhiteList(nsTArray<nsCOMPtr<nsIPrincipal> > **aWhiteList) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIExpandedPrincipal, NS_IEXPANDEDPRINCIPAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEXPANDEDPRINCIPAL \
  NS_IMETHOD GetWhiteList(nsTArray<nsCOMPtr<nsIPrincipal> > **aWhiteList) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIEXPANDEDPRINCIPAL \
  NS_METHOD GetWhiteList(nsTArray<nsCOMPtr<nsIPrincipal> > **aWhiteList); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEXPANDEDPRINCIPAL(_to) \
  NS_IMETHOD GetWhiteList(nsTArray<nsCOMPtr<nsIPrincipal> > **aWhiteList) override { return _to GetWhiteList(aWhiteList); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEXPANDEDPRINCIPAL(_to) \
  NS_IMETHOD GetWhiteList(nsTArray<nsCOMPtr<nsIPrincipal> > **aWhiteList) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWhiteList(aWhiteList); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsExpandedPrincipal : public nsIExpandedPrincipal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEXPANDEDPRINCIPAL

  nsExpandedPrincipal();

private:
  ~nsExpandedPrincipal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsExpandedPrincipal, nsIExpandedPrincipal)

nsExpandedPrincipal::nsExpandedPrincipal()
{
  /* member initializers and constructor code */
}

nsExpandedPrincipal::~nsExpandedPrincipal()
{
  /* destructor code */
}

/* [noscript] readonly attribute PrincipalArray whiteList; */
NS_IMETHODIMP nsExpandedPrincipal::GetWhiteList(nsTArray<nsCOMPtr<nsIPrincipal> > **aWhiteList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPrincipal_h__ */
