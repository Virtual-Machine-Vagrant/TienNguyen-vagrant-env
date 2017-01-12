/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIContentSecurityManager.idl
 */

#ifndef __gen_nsIContentSecurityManager_h__
#define __gen_nsIContentSecurityManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIChannel; /* forward declaration */

class nsIStreamListener; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIContentSecurityManager */
#define NS_ICONTENTSECURITYMANAGER_IID_STR "ec955006-747d-4151-aeec-70bd0edc3341"

#define NS_ICONTENTSECURITYMANAGER_IID \
  {0xec955006, 0x747d, 0x4151, \
    { 0xae, 0xec, 0x70, 0xbd, 0x0e, 0xdc, 0x33, 0x41 }}

class NS_NO_VTABLE nsIContentSecurityManager : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICONTENTSECURITYMANAGER_IID)

  /* nsIStreamListener performSecurityCheck (in nsIChannel aChannel, in nsIStreamListener aStreamListener); */
  NS_IMETHOD PerformSecurityCheck(nsIChannel *aChannel, nsIStreamListener *aStreamListener, nsIStreamListener * *_retval) = 0;

  /* boolean isURIPotentiallyTrustworthy (in nsIURI aURI); */
  NS_IMETHOD IsURIPotentiallyTrustworthy(nsIURI *aURI, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIContentSecurityManager, NS_ICONTENTSECURITYMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICONTENTSECURITYMANAGER \
  NS_IMETHOD PerformSecurityCheck(nsIChannel *aChannel, nsIStreamListener *aStreamListener, nsIStreamListener * *_retval) override; \
  NS_IMETHOD IsURIPotentiallyTrustworthy(nsIURI *aURI, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICONTENTSECURITYMANAGER \
  NS_METHOD PerformSecurityCheck(nsIChannel *aChannel, nsIStreamListener *aStreamListener, nsIStreamListener * *_retval); \
  NS_METHOD IsURIPotentiallyTrustworthy(nsIURI *aURI, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICONTENTSECURITYMANAGER(_to) \
  NS_IMETHOD PerformSecurityCheck(nsIChannel *aChannel, nsIStreamListener *aStreamListener, nsIStreamListener * *_retval) override { return _to PerformSecurityCheck(aChannel, aStreamListener, _retval); } \
  NS_IMETHOD IsURIPotentiallyTrustworthy(nsIURI *aURI, bool *_retval) override { return _to IsURIPotentiallyTrustworthy(aURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICONTENTSECURITYMANAGER(_to) \
  NS_IMETHOD PerformSecurityCheck(nsIChannel *aChannel, nsIStreamListener *aStreamListener, nsIStreamListener * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PerformSecurityCheck(aChannel, aStreamListener, _retval); } \
  NS_IMETHOD IsURIPotentiallyTrustworthy(nsIURI *aURI, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsURIPotentiallyTrustworthy(aURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsContentSecurityManager : public nsIContentSecurityManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICONTENTSECURITYMANAGER

  nsContentSecurityManager();

private:
  ~nsContentSecurityManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsContentSecurityManager, nsIContentSecurityManager)

nsContentSecurityManager::nsContentSecurityManager()
{
  /* member initializers and constructor code */
}

nsContentSecurityManager::~nsContentSecurityManager()
{
  /* destructor code */
}

/* nsIStreamListener performSecurityCheck (in nsIChannel aChannel, in nsIStreamListener aStreamListener); */
NS_IMETHODIMP nsContentSecurityManager::PerformSecurityCheck(nsIChannel *aChannel, nsIStreamListener *aStreamListener, nsIStreamListener * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isURIPotentiallyTrustworthy (in nsIURI aURI); */
NS_IMETHODIMP nsContentSecurityManager::IsURIPotentiallyTrustworthy(nsIURI *aURI, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIContentSecurityManager_h__ */
