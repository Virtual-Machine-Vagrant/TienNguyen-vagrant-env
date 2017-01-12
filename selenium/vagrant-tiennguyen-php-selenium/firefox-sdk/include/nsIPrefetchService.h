/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrefetchService.idl
 */

#ifndef __gen_nsIPrefetchService_h__
#define __gen_nsIPrefetchService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIDOMNode; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIPrefetchService */
#define NS_IPREFETCHSERVICE_IID_STR "422a1807-4e7f-463d-b8d7-ca2ceb9b5d53"

#define NS_IPREFETCHSERVICE_IID \
  {0x422a1807, 0x4e7f, 0x463d, \
    { 0xb8, 0xd7, 0xca, 0x2c, 0xeb, 0x9b, 0x5d, 0x53 }}

class NS_NO_VTABLE nsIPrefetchService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPREFETCHSERVICE_IID)

  /* void prefetchURI (in nsIURI aURI, in nsIURI aReferrerURI, in nsIDOMNode aSource, in boolean aExplicit); */
  NS_IMETHOD PrefetchURI(nsIURI *aURI, nsIURI *aReferrerURI, nsIDOMNode *aSource, bool aExplicit) = 0;

  /* boolean hasMoreElements (); */
  NS_IMETHOD HasMoreElements(bool *_retval) = 0;

  /* void cancelPrefetchURI (in nsIURI aURI, in nsIDOMNode aSource); */
  NS_IMETHOD CancelPrefetchURI(nsIURI *aURI, nsIDOMNode *aSource) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrefetchService, NS_IPREFETCHSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPREFETCHSERVICE \
  NS_IMETHOD PrefetchURI(nsIURI *aURI, nsIURI *aReferrerURI, nsIDOMNode *aSource, bool aExplicit) override; \
  NS_IMETHOD HasMoreElements(bool *_retval) override; \
  NS_IMETHOD CancelPrefetchURI(nsIURI *aURI, nsIDOMNode *aSource) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPREFETCHSERVICE \
  NS_METHOD PrefetchURI(nsIURI *aURI, nsIURI *aReferrerURI, nsIDOMNode *aSource, bool aExplicit); \
  NS_METHOD HasMoreElements(bool *_retval); \
  NS_METHOD CancelPrefetchURI(nsIURI *aURI, nsIDOMNode *aSource); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPREFETCHSERVICE(_to) \
  NS_IMETHOD PrefetchURI(nsIURI *aURI, nsIURI *aReferrerURI, nsIDOMNode *aSource, bool aExplicit) override { return _to PrefetchURI(aURI, aReferrerURI, aSource, aExplicit); } \
  NS_IMETHOD HasMoreElements(bool *_retval) override { return _to HasMoreElements(_retval); } \
  NS_IMETHOD CancelPrefetchURI(nsIURI *aURI, nsIDOMNode *aSource) override { return _to CancelPrefetchURI(aURI, aSource); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPREFETCHSERVICE(_to) \
  NS_IMETHOD PrefetchURI(nsIURI *aURI, nsIURI *aReferrerURI, nsIDOMNode *aSource, bool aExplicit) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PrefetchURI(aURI, aReferrerURI, aSource, aExplicit); } \
  NS_IMETHOD HasMoreElements(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->HasMoreElements(_retval); } \
  NS_IMETHOD CancelPrefetchURI(nsIURI *aURI, nsIDOMNode *aSource) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelPrefetchURI(aURI, aSource); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrefetchService : public nsIPrefetchService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPREFETCHSERVICE

  nsPrefetchService();

private:
  ~nsPrefetchService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrefetchService, nsIPrefetchService)

nsPrefetchService::nsPrefetchService()
{
  /* member initializers and constructor code */
}

nsPrefetchService::~nsPrefetchService()
{
  /* destructor code */
}

/* void prefetchURI (in nsIURI aURI, in nsIURI aReferrerURI, in nsIDOMNode aSource, in boolean aExplicit); */
NS_IMETHODIMP nsPrefetchService::PrefetchURI(nsIURI *aURI, nsIURI *aReferrerURI, nsIDOMNode *aSource, bool aExplicit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasMoreElements (); */
NS_IMETHODIMP nsPrefetchService::HasMoreElements(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelPrefetchURI (in nsIURI aURI, in nsIDOMNode aSource); */
NS_IMETHODIMP nsPrefetchService::CancelPrefetchURI(nsIURI *aURI, nsIDOMNode *aSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPrefetchService_h__ */
