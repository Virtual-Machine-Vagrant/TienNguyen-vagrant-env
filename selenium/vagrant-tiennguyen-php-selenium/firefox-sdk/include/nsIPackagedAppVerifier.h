/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPackagedAppVerifier.idl
 */

#ifndef __gen_nsIPackagedAppVerifier_h__
#define __gen_nsIPackagedAppVerifier_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIStreamListener_h__
#include "nsIStreamListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsICacheEntry; /* forward declaration */

class nsIPackagedAppVerifierListener; /* forward declaration */


/* starting interface:    nsIPackagedAppVerifier */
#define NS_IPACKAGEDAPPVERIFIER_IID_STR "37a5c208-0fce-4ad6-8431-aeb904dfe543"

#define NS_IPACKAGEDAPPVERIFIER_IID \
  {0x37a5c208, 0x0fce, 0x4ad6, \
    { 0x84, 0x31, 0xae, 0xb9, 0x04, 0xdf, 0xe5, 0x43 }}

class NS_NO_VTABLE nsIPackagedAppVerifier : public nsIStreamListener {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPACKAGEDAPPVERIFIER_IID)

  /* readonly attribute ACString packageIdentifier; */
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) = 0;

  /* readonly attribute boolean isPackageSigned; */
  NS_IMETHOD GetIsPackageSigned(bool *aIsPackageSigned) = 0;

  /* void init (in nsIPackagedAppVerifierListener aListener, in ACString aPackageOrigin, in ACString aSignature, in nsICacheEntry aPackageCacheEntry); */
  NS_IMETHOD Init(nsIPackagedAppVerifierListener *aListener, const nsACString & aPackageOrigin, const nsACString & aSignature, nsICacheEntry *aPackageCacheEntry) = 0;

  /* nsISupports createResourceCacheInfo (in nsIURI aUri, in nsICacheEntry aCacheEntry, in nsresult aStatusCode, in boolean aIsLastPart); */
  NS_IMETHOD CreateResourceCacheInfo(nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, nsISupports * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPackagedAppVerifier, NS_IPACKAGEDAPPVERIFIER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPACKAGEDAPPVERIFIER \
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) override; \
  NS_IMETHOD GetIsPackageSigned(bool *aIsPackageSigned) override; \
  NS_IMETHOD Init(nsIPackagedAppVerifierListener *aListener, const nsACString & aPackageOrigin, const nsACString & aSignature, nsICacheEntry *aPackageCacheEntry) override; \
  NS_IMETHOD CreateResourceCacheInfo(nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, nsISupports * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPACKAGEDAPPVERIFIER \
  NS_METHOD GetPackageIdentifier(nsACString & aPackageIdentifier); \
  NS_METHOD GetIsPackageSigned(bool *aIsPackageSigned); \
  NS_METHOD Init(nsIPackagedAppVerifierListener *aListener, const nsACString & aPackageOrigin, const nsACString & aSignature, nsICacheEntry *aPackageCacheEntry); \
  NS_METHOD CreateResourceCacheInfo(nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, nsISupports * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPACKAGEDAPPVERIFIER(_to) \
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) override { return _to GetPackageIdentifier(aPackageIdentifier); } \
  NS_IMETHOD GetIsPackageSigned(bool *aIsPackageSigned) override { return _to GetIsPackageSigned(aIsPackageSigned); } \
  NS_IMETHOD Init(nsIPackagedAppVerifierListener *aListener, const nsACString & aPackageOrigin, const nsACString & aSignature, nsICacheEntry *aPackageCacheEntry) override { return _to Init(aListener, aPackageOrigin, aSignature, aPackageCacheEntry); } \
  NS_IMETHOD CreateResourceCacheInfo(nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, nsISupports * *_retval) override { return _to CreateResourceCacheInfo(aUri, aCacheEntry, aStatusCode, aIsLastPart, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPACKAGEDAPPVERIFIER(_to) \
  NS_IMETHOD GetPackageIdentifier(nsACString & aPackageIdentifier) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPackageIdentifier(aPackageIdentifier); } \
  NS_IMETHOD GetIsPackageSigned(bool *aIsPackageSigned) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsPackageSigned(aIsPackageSigned); } \
  NS_IMETHOD Init(nsIPackagedAppVerifierListener *aListener, const nsACString & aPackageOrigin, const nsACString & aSignature, nsICacheEntry *aPackageCacheEntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aListener, aPackageOrigin, aSignature, aPackageCacheEntry); } \
  NS_IMETHOD CreateResourceCacheInfo(nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateResourceCacheInfo(aUri, aCacheEntry, aStatusCode, aIsLastPart, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPackagedAppVerifier : public nsIPackagedAppVerifier
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPACKAGEDAPPVERIFIER

  nsPackagedAppVerifier();

private:
  ~nsPackagedAppVerifier();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPackagedAppVerifier, nsIPackagedAppVerifier)

nsPackagedAppVerifier::nsPackagedAppVerifier()
{
  /* member initializers and constructor code */
}

nsPackagedAppVerifier::~nsPackagedAppVerifier()
{
  /* destructor code */
}

/* readonly attribute ACString packageIdentifier; */
NS_IMETHODIMP nsPackagedAppVerifier::GetPackageIdentifier(nsACString & aPackageIdentifier)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isPackageSigned; */
NS_IMETHODIMP nsPackagedAppVerifier::GetIsPackageSigned(bool *aIsPackageSigned)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void init (in nsIPackagedAppVerifierListener aListener, in ACString aPackageOrigin, in ACString aSignature, in nsICacheEntry aPackageCacheEntry); */
NS_IMETHODIMP nsPackagedAppVerifier::Init(nsIPackagedAppVerifierListener *aListener, const nsACString & aPackageOrigin, const nsACString & aSignature, nsICacheEntry *aPackageCacheEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports createResourceCacheInfo (in nsIURI aUri, in nsICacheEntry aCacheEntry, in nsresult aStatusCode, in boolean aIsLastPart); */
NS_IMETHODIMP nsPackagedAppVerifier::CreateResourceCacheInfo(nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPackagedAppVerifierListener */
#define NS_IPACKAGEDAPPVERIFIERLISTENER_IID_STR "092eba70-4cbf-11e5-b970-0800200c9a66"

#define NS_IPACKAGEDAPPVERIFIERLISTENER_IID \
  {0x092eba70, 0x4cbf, 0x11e5, \
    { 0xb9, 0x70, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE nsIPackagedAppVerifierListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPACKAGEDAPPVERIFIERLISTENER_IID)

  /* void onVerified (in boolean aIsManifest, in nsIURI aUri, in nsICacheEntry aCacheEntry, in nsresult aStatusCode, in boolean aIsLastPart, in boolean aVerificationSuccess); */
  NS_IMETHOD OnVerified(bool aIsManifest, nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, bool aVerificationSuccess) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPackagedAppVerifierListener, NS_IPACKAGEDAPPVERIFIERLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPACKAGEDAPPVERIFIERLISTENER \
  NS_IMETHOD OnVerified(bool aIsManifest, nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, bool aVerificationSuccess) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPACKAGEDAPPVERIFIERLISTENER \
  NS_METHOD OnVerified(bool aIsManifest, nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, bool aVerificationSuccess); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPACKAGEDAPPVERIFIERLISTENER(_to) \
  NS_IMETHOD OnVerified(bool aIsManifest, nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, bool aVerificationSuccess) override { return _to OnVerified(aIsManifest, aUri, aCacheEntry, aStatusCode, aIsLastPart, aVerificationSuccess); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPACKAGEDAPPVERIFIERLISTENER(_to) \
  NS_IMETHOD OnVerified(bool aIsManifest, nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, bool aVerificationSuccess) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnVerified(aIsManifest, aUri, aCacheEntry, aStatusCode, aIsLastPart, aVerificationSuccess); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPackagedAppVerifierListener : public nsIPackagedAppVerifierListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPACKAGEDAPPVERIFIERLISTENER

  nsPackagedAppVerifierListener();

private:
  ~nsPackagedAppVerifierListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPackagedAppVerifierListener, nsIPackagedAppVerifierListener)

nsPackagedAppVerifierListener::nsPackagedAppVerifierListener()
{
  /* member initializers and constructor code */
}

nsPackagedAppVerifierListener::~nsPackagedAppVerifierListener()
{
  /* destructor code */
}

/* void onVerified (in boolean aIsManifest, in nsIURI aUri, in nsICacheEntry aCacheEntry, in nsresult aStatusCode, in boolean aIsLastPart, in boolean aVerificationSuccess); */
NS_IMETHODIMP nsPackagedAppVerifierListener::OnVerified(bool aIsManifest, nsIURI *aUri, nsICacheEntry *aCacheEntry, nsresult aStatusCode, bool aIsLastPart, bool aVerificationSuccess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPackagedAppVerifier_h__ */
