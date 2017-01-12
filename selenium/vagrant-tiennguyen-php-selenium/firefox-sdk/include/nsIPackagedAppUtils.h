/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPackagedAppUtils.idl
 */

#ifndef __gen_nsIPackagedAppUtils_h__
#define __gen_nsIPackagedAppUtils_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVerificationCallback; /* forward declaration */

#define NS_PACKAGEDAPPUTILS_CONTRACTID "@mozilla.org/network/packaged-app-utils;1"

/* starting interface:    nsIPackagedAppUtils */
#define NS_IPACKAGEDAPPUTILS_IID_STR "2963609c-370b-4a76-9858-6f05121d0473"

#define NS_IPACKAGEDAPPUTILS_IID \
  {0x2963609c, 0x370b, 0x4a76, \
    { 0x98, 0x58, 0x6f, 0x05, 0x12, 0x1d, 0x04, 0x73 }}

class NS_NO_VTABLE nsIPackagedAppUtils : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPACKAGEDAPPUTILS_IID)

  /* void verifyManifest (in ACString aHeader, in ACString aManifest, in nsIVerificationCallback aVerifier, in boolean aDeveloperMode); */
  NS_IMETHOD VerifyManifest(const nsACString & aHeader, const nsACString & aManifest, nsIVerificationCallback *aVerifier, bool aDeveloperMode) = 0;

  /* void checkIntegrity (in ACString aFileName, in ACString aHashValue, in nsIVerificationCallback aVerifier); */
  NS_IMETHOD CheckIntegrity(const nsACString & aFileName, const nsACString & aHashValue, nsIVerificationCallback *aVerifier) = 0;

  /* readonly attribute ACString packageIdentifier; */
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) = 0;

  /* readonly attribute ACString packageOrigin; */
  NS_IMETHOD GetPackageOrigin(nsACString & aPackageOrigin) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPackagedAppUtils, NS_IPACKAGEDAPPUTILS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPACKAGEDAPPUTILS \
  NS_IMETHOD VerifyManifest(const nsACString & aHeader, const nsACString & aManifest, nsIVerificationCallback *aVerifier, bool aDeveloperMode) override; \
  NS_IMETHOD CheckIntegrity(const nsACString & aFileName, const nsACString & aHashValue, nsIVerificationCallback *aVerifier) override; \
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) override; \
  NS_IMETHOD GetPackageOrigin(nsACString & aPackageOrigin) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPACKAGEDAPPUTILS \
  NS_METHOD VerifyManifest(const nsACString & aHeader, const nsACString & aManifest, nsIVerificationCallback *aVerifier, bool aDeveloperMode); \
  NS_METHOD CheckIntegrity(const nsACString & aFileName, const nsACString & aHashValue, nsIVerificationCallback *aVerifier); \
  NS_METHOD GetPackageIdentifier(nsACString & aPackageIdentifier); \
  NS_METHOD GetPackageOrigin(nsACString & aPackageOrigin); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPACKAGEDAPPUTILS(_to) \
  NS_IMETHOD VerifyManifest(const nsACString & aHeader, const nsACString & aManifest, nsIVerificationCallback *aVerifier, bool aDeveloperMode) override { return _to VerifyManifest(aHeader, aManifest, aVerifier, aDeveloperMode); } \
  NS_IMETHOD CheckIntegrity(const nsACString & aFileName, const nsACString & aHashValue, nsIVerificationCallback *aVerifier) override { return _to CheckIntegrity(aFileName, aHashValue, aVerifier); } \
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) override { return _to GetPackageIdentifier(aPackageIdentifier); } \
  NS_IMETHOD GetPackageOrigin(nsACString & aPackageOrigin) override { return _to GetPackageOrigin(aPackageOrigin); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPACKAGEDAPPUTILS(_to) \
  NS_IMETHOD VerifyManifest(const nsACString & aHeader, const nsACString & aManifest, nsIVerificationCallback *aVerifier, bool aDeveloperMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->VerifyManifest(aHeader, aManifest, aVerifier, aDeveloperMode); } \
  NS_IMETHOD CheckIntegrity(const nsACString & aFileName, const nsACString & aHashValue, nsIVerificationCallback *aVerifier) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckIntegrity(aFileName, aHashValue, aVerifier); } \
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPackageIdentifier(aPackageIdentifier); } \
  NS_IMETHOD GetPackageOrigin(nsACString & aPackageOrigin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPackageOrigin(aPackageOrigin); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPackagedAppUtils : public nsIPackagedAppUtils
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPACKAGEDAPPUTILS

  nsPackagedAppUtils();

private:
  ~nsPackagedAppUtils();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPackagedAppUtils, nsIPackagedAppUtils)

nsPackagedAppUtils::nsPackagedAppUtils()
{
  /* member initializers and constructor code */
}

nsPackagedAppUtils::~nsPackagedAppUtils()
{
  /* destructor code */
}

/* void verifyManifest (in ACString aHeader, in ACString aManifest, in nsIVerificationCallback aVerifier, in boolean aDeveloperMode); */
NS_IMETHODIMP nsPackagedAppUtils::VerifyManifest(const nsACString & aHeader, const nsACString & aManifest, nsIVerificationCallback *aVerifier, bool aDeveloperMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkIntegrity (in ACString aFileName, in ACString aHashValue, in nsIVerificationCallback aVerifier); */
NS_IMETHODIMP nsPackagedAppUtils::CheckIntegrity(const nsACString & aFileName, const nsACString & aHashValue, nsIVerificationCallback *aVerifier)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString packageIdentifier; */
NS_IMETHODIMP nsPackagedAppUtils::GetPackageIdentifier(nsACString & aPackageIdentifier)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString packageOrigin; */
NS_IMETHODIMP nsPackagedAppUtils::GetPackageOrigin(nsACString & aPackageOrigin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIVerificationCallback */
#define NS_IVERIFICATIONCALLBACK_IID_STR "e1912028-93e5-4378-aa3f-a58702937169"

#define NS_IVERIFICATIONCALLBACK_IID \
  {0xe1912028, 0x93e5, 0x4378, \
    { 0xaa, 0x3f, 0xa5, 0x87, 0x02, 0x93, 0x71, 0x69 }}

class NS_NO_VTABLE nsIVerificationCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IVERIFICATIONCALLBACK_IID)

  /* void fireVerifiedEvent (in boolean aForManifest, in boolean aSuccess); */
  NS_IMETHOD FireVerifiedEvent(bool aForManifest, bool aSuccess) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIVerificationCallback, NS_IVERIFICATIONCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIVERIFICATIONCALLBACK \
  NS_IMETHOD FireVerifiedEvent(bool aForManifest, bool aSuccess) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIVERIFICATIONCALLBACK \
  NS_METHOD FireVerifiedEvent(bool aForManifest, bool aSuccess); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIVERIFICATIONCALLBACK(_to) \
  NS_IMETHOD FireVerifiedEvent(bool aForManifest, bool aSuccess) override { return _to FireVerifiedEvent(aForManifest, aSuccess); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIVERIFICATIONCALLBACK(_to) \
  NS_IMETHOD FireVerifiedEvent(bool aForManifest, bool aSuccess) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FireVerifiedEvent(aForManifest, aSuccess); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsVerificationCallback : public nsIVerificationCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIVERIFICATIONCALLBACK

  nsVerificationCallback();

private:
  ~nsVerificationCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsVerificationCallback, nsIVerificationCallback)

nsVerificationCallback::nsVerificationCallback()
{
  /* member initializers and constructor code */
}

nsVerificationCallback::~nsVerificationCallback()
{
  /* destructor code */
}

/* void fireVerifiedEvent (in boolean aForManifest, in boolean aSuccess); */
NS_IMETHODIMP nsVerificationCallback::FireVerifiedEvent(bool aForManifest, bool aSuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPackagedAppUtils_h__ */
