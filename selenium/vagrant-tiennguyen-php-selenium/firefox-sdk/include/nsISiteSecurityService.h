/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISiteSecurityService.idl
 */

#ifndef __gen_nsISiteSecurityService_h__
#define __gen_nsISiteSecurityService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIObserver; /* forward declaration */

class nsIHttpChannel; /* forward declaration */

class nsISSLStatus; /* forward declaration */

template<class T> class nsTArray;
class nsCString;
namespace mozilla
{
  namespace pkix
  {
    class Time;
  }
}

/* starting interface:    nsISiteSecurityService */
#define NS_ISITESECURITYSERVICE_IID_STR "275127f8-dbd7-4681-afbf-6df0c6587a01"

#define NS_ISITESECURITYSERVICE_IID \
  {0x275127f8, 0xdbd7, 0x4681, \
    { 0xaf, 0xbf, 0x6d, 0xf0, 0xc6, 0x58, 0x7a, 0x01 }}

class NS_NO_VTABLE nsISiteSecurityService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISITESECURITYSERVICE_IID)

  enum {
    HEADER_HSTS = 0U,
    HEADER_HPKP = 1U,
    HEADER_OMS = 2U,
    Success = 0U,
    ERROR_UNKNOWN = 1U,
    ERROR_UNTRUSTWORTHY_CONNECTION = 2U,
    ERROR_COULD_NOT_PARSE_HEADER = 3U,
    ERROR_NO_MAX_AGE = 4U,
    ERROR_MULTIPLE_MAX_AGES = 5U,
    ERROR_INVALID_MAX_AGE = 6U,
    ERROR_MULTIPLE_INCLUDE_SUBDOMAINS = 7U,
    ERROR_INVALID_INCLUDE_SUBDOMAINS = 8U,
    ERROR_INVALID_PIN = 9U,
    ERROR_MULTIPLE_REPORT_URIS = 10U,
    ERROR_PINSET_DOES_NOT_MATCH_CHAIN = 11U,
    ERROR_NO_BACKUP_PIN = 12U,
    ERROR_COULD_NOT_SAVE_STATE = 13U,
    ERROR_ROOT_NOT_BUILT_IN = 14U
  };

  /* void processHeader (in uint32_t aType, in nsIURI aSourceURI, in string aHeader, in nsISSLStatus aSSLStatus, in uint32_t aFlags, [optional] out unsigned long long aMaxAge, [optional] out boolean aIncludeSubdomains, [optional] out uint32_t aFailureResult); */
  NS_IMETHOD ProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, nsISSLStatus *aSSLStatus, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) = 0;

  /* void unsafeProcessHeader (in uint32_t aType, in nsIURI aSourceURI, in string aHeader, in uint32_t aFlags, [optional] out unsigned long long aMaxAge, [optional] out boolean aIncludeSubdomains, [optional] out uint32_t aFailureResult); */
  NS_IMETHOD UnsafeProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) = 0;

  /* void removeState (in uint32_t aType, in nsIURI aURI, in uint32_t aFlags); */
  NS_IMETHOD RemoveState(uint32_t aType, nsIURI *aURI, uint32_t aFlags) = 0;

  /* boolean isSecureHost (in uint32_t aType, in string aHost, in uint32_t aFlags); */
  NS_IMETHOD IsSecureHost(uint32_t aType, const char * aHost, uint32_t aFlags, bool *_retval) = 0;

  /* boolean isSecureURI (in uint32_t aType, in nsIURI aURI, in uint32_t aFlags); */
  NS_IMETHOD IsSecureURI(uint32_t aType, nsIURI *aURI, uint32_t aFlags, bool *_retval) = 0;

  /* void clearAll (); */
  NS_IMETHOD ClearAll(void) = 0;

  /* [noscript] boolean getKeyPinsForHostname (in string aHostname, in mozillaPkixTime evalTime, out nsCStringTArrayRef aPinArray, out boolean aIncludeSubdomains); */
  NS_IMETHOD GetKeyPinsForHostname(const char * aHostname, mozilla::pkix::Time & evalTime, nsTArray<nsCString> & aPinArray, bool *aIncludeSubdomains, bool *_retval) = 0;

  /* boolean setKeyPins (in string aHost, in boolean aIncludeSubdomains, in unsigned long aMaxAge, in unsigned long aPinCount, [array, size_is (aPinCount)] in string aSha256Pins); */
  NS_IMETHOD SetKeyPins(const char * aHost, bool aIncludeSubdomains, uint32_t aMaxAge, uint32_t aPinCount, const char * *aSha256Pins, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISiteSecurityService, NS_ISITESECURITYSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISITESECURITYSERVICE \
  NS_IMETHOD ProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, nsISSLStatus *aSSLStatus, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) override; \
  NS_IMETHOD UnsafeProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) override; \
  NS_IMETHOD RemoveState(uint32_t aType, nsIURI *aURI, uint32_t aFlags) override; \
  NS_IMETHOD IsSecureHost(uint32_t aType, const char * aHost, uint32_t aFlags, bool *_retval) override; \
  NS_IMETHOD IsSecureURI(uint32_t aType, nsIURI *aURI, uint32_t aFlags, bool *_retval) override; \
  NS_IMETHOD ClearAll(void) override; \
  NS_IMETHOD GetKeyPinsForHostname(const char * aHostname, mozilla::pkix::Time & evalTime, nsTArray<nsCString> & aPinArray, bool *aIncludeSubdomains, bool *_retval) override; \
  NS_IMETHOD SetKeyPins(const char * aHost, bool aIncludeSubdomains, uint32_t aMaxAge, uint32_t aPinCount, const char * *aSha256Pins, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISITESECURITYSERVICE \
  NS_METHOD ProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, nsISSLStatus *aSSLStatus, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr); \
  NS_METHOD UnsafeProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr); \
  NS_METHOD RemoveState(uint32_t aType, nsIURI *aURI, uint32_t aFlags); \
  NS_METHOD IsSecureHost(uint32_t aType, const char * aHost, uint32_t aFlags, bool *_retval); \
  NS_METHOD IsSecureURI(uint32_t aType, nsIURI *aURI, uint32_t aFlags, bool *_retval); \
  NS_METHOD ClearAll(void); \
  NS_METHOD GetKeyPinsForHostname(const char * aHostname, mozilla::pkix::Time & evalTime, nsTArray<nsCString> & aPinArray, bool *aIncludeSubdomains, bool *_retval); \
  NS_METHOD SetKeyPins(const char * aHost, bool aIncludeSubdomains, uint32_t aMaxAge, uint32_t aPinCount, const char * *aSha256Pins, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISITESECURITYSERVICE(_to) \
  NS_IMETHOD ProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, nsISSLStatus *aSSLStatus, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) override { return _to ProcessHeader(aType, aSourceURI, aHeader, aSSLStatus, aFlags, aMaxAge, aIncludeSubdomains, aFailureResult); } \
  NS_IMETHOD UnsafeProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) override { return _to UnsafeProcessHeader(aType, aSourceURI, aHeader, aFlags, aMaxAge, aIncludeSubdomains, aFailureResult); } \
  NS_IMETHOD RemoveState(uint32_t aType, nsIURI *aURI, uint32_t aFlags) override { return _to RemoveState(aType, aURI, aFlags); } \
  NS_IMETHOD IsSecureHost(uint32_t aType, const char * aHost, uint32_t aFlags, bool *_retval) override { return _to IsSecureHost(aType, aHost, aFlags, _retval); } \
  NS_IMETHOD IsSecureURI(uint32_t aType, nsIURI *aURI, uint32_t aFlags, bool *_retval) override { return _to IsSecureURI(aType, aURI, aFlags, _retval); } \
  NS_IMETHOD ClearAll(void) override { return _to ClearAll(); } \
  NS_IMETHOD GetKeyPinsForHostname(const char * aHostname, mozilla::pkix::Time & evalTime, nsTArray<nsCString> & aPinArray, bool *aIncludeSubdomains, bool *_retval) override { return _to GetKeyPinsForHostname(aHostname, evalTime, aPinArray, aIncludeSubdomains, _retval); } \
  NS_IMETHOD SetKeyPins(const char * aHost, bool aIncludeSubdomains, uint32_t aMaxAge, uint32_t aPinCount, const char * *aSha256Pins, bool *_retval) override { return _to SetKeyPins(aHost, aIncludeSubdomains, aMaxAge, aPinCount, aSha256Pins, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISITESECURITYSERVICE(_to) \
  NS_IMETHOD ProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, nsISSLStatus *aSSLStatus, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ProcessHeader(aType, aSourceURI, aHeader, aSSLStatus, aFlags, aMaxAge, aIncludeSubdomains, aFailureResult); } \
  NS_IMETHOD UnsafeProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnsafeProcessHeader(aType, aSourceURI, aHeader, aFlags, aMaxAge, aIncludeSubdomains, aFailureResult); } \
  NS_IMETHOD RemoveState(uint32_t aType, nsIURI *aURI, uint32_t aFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveState(aType, aURI, aFlags); } \
  NS_IMETHOD IsSecureHost(uint32_t aType, const char * aHost, uint32_t aFlags, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSecureHost(aType, aHost, aFlags, _retval); } \
  NS_IMETHOD IsSecureURI(uint32_t aType, nsIURI *aURI, uint32_t aFlags, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSecureURI(aType, aURI, aFlags, _retval); } \
  NS_IMETHOD ClearAll(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearAll(); } \
  NS_IMETHOD GetKeyPinsForHostname(const char * aHostname, mozilla::pkix::Time & evalTime, nsTArray<nsCString> & aPinArray, bool *aIncludeSubdomains, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKeyPinsForHostname(aHostname, evalTime, aPinArray, aIncludeSubdomains, _retval); } \
  NS_IMETHOD SetKeyPins(const char * aHost, bool aIncludeSubdomains, uint32_t aMaxAge, uint32_t aPinCount, const char * *aSha256Pins, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetKeyPins(aHost, aIncludeSubdomains, aMaxAge, aPinCount, aSha256Pins, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSiteSecurityService : public nsISiteSecurityService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISITESECURITYSERVICE

  nsSiteSecurityService();

private:
  ~nsSiteSecurityService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSiteSecurityService, nsISiteSecurityService)

nsSiteSecurityService::nsSiteSecurityService()
{
  /* member initializers and constructor code */
}

nsSiteSecurityService::~nsSiteSecurityService()
{
  /* destructor code */
}

/* void processHeader (in uint32_t aType, in nsIURI aSourceURI, in string aHeader, in nsISSLStatus aSSLStatus, in uint32_t aFlags, [optional] out unsigned long long aMaxAge, [optional] out boolean aIncludeSubdomains, [optional] out uint32_t aFailureResult); */
NS_IMETHODIMP nsSiteSecurityService::ProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, nsISSLStatus *aSSLStatus, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unsafeProcessHeader (in uint32_t aType, in nsIURI aSourceURI, in string aHeader, in uint32_t aFlags, [optional] out unsigned long long aMaxAge, [optional] out boolean aIncludeSubdomains, [optional] out uint32_t aFailureResult); */
NS_IMETHODIMP nsSiteSecurityService::UnsafeProcessHeader(uint32_t aType, nsIURI *aSourceURI, const char * aHeader, uint32_t aFlags, uint64_t *aMaxAge = nullptr, bool *aIncludeSubdomains = nullptr, uint32_t *aFailureResult = nullptr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeState (in uint32_t aType, in nsIURI aURI, in uint32_t aFlags); */
NS_IMETHODIMP nsSiteSecurityService::RemoveState(uint32_t aType, nsIURI *aURI, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSecureHost (in uint32_t aType, in string aHost, in uint32_t aFlags); */
NS_IMETHODIMP nsSiteSecurityService::IsSecureHost(uint32_t aType, const char * aHost, uint32_t aFlags, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSecureURI (in uint32_t aType, in nsIURI aURI, in uint32_t aFlags); */
NS_IMETHODIMP nsSiteSecurityService::IsSecureURI(uint32_t aType, nsIURI *aURI, uint32_t aFlags, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearAll (); */
NS_IMETHODIMP nsSiteSecurityService::ClearAll()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean getKeyPinsForHostname (in string aHostname, in mozillaPkixTime evalTime, out nsCStringTArrayRef aPinArray, out boolean aIncludeSubdomains); */
NS_IMETHODIMP nsSiteSecurityService::GetKeyPinsForHostname(const char * aHostname, mozilla::pkix::Time & evalTime, nsTArray<nsCString> & aPinArray, bool *aIncludeSubdomains, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean setKeyPins (in string aHost, in boolean aIncludeSubdomains, in unsigned long aMaxAge, in unsigned long aPinCount, [array, size_is (aPinCount)] in string aSha256Pins); */
NS_IMETHODIMP nsSiteSecurityService::SetKeyPins(const char * aHost, bool aIncludeSubdomains, uint32_t aMaxAge, uint32_t aPinCount, const char * *aSha256Pins, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_SSSERVICE_CONTRACTID "@mozilla.org/ssservice;1"

#endif /* __gen_nsISiteSecurityService_h__ */
