/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrivateBrowsingTrackingProtectionWhitelist.idl
 */

#ifndef __gen_nsIPrivateBrowsingTrackingProtectionWhitelist_h__
#define __gen_nsIPrivateBrowsingTrackingProtectionWhitelist_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */


/* starting interface:    nsIPrivateBrowsingTrackingProtectionWhitelist */
#define NS_IPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST_IID_STR "c77ddfac-6cd6-43a9-84e8-91682a1a7b18"

#define NS_IPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST_IID \
  {0xc77ddfac, 0x6cd6, 0x43a9, \
    { 0x84, 0xe8, 0x91, 0x68, 0x2a, 0x1a, 0x7b, 0x18 }}

class NS_NO_VTABLE nsIPrivateBrowsingTrackingProtectionWhitelist : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST_IID)

  /* void addToAllowList (in nsIURI uri); */
  NS_IMETHOD AddToAllowList(nsIURI *uri) = 0;

  /* void removeFromAllowList (in nsIURI uri); */
  NS_IMETHOD RemoveFromAllowList(nsIURI *uri) = 0;

  /* bool existsInAllowList (in nsIURI uri); */
  NS_IMETHOD ExistsInAllowList(nsIURI *uri, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrivateBrowsingTrackingProtectionWhitelist, NS_IPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST \
  NS_IMETHOD AddToAllowList(nsIURI *uri) override; \
  NS_IMETHOD RemoveFromAllowList(nsIURI *uri) override; \
  NS_IMETHOD ExistsInAllowList(nsIURI *uri, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST \
  NS_METHOD AddToAllowList(nsIURI *uri); \
  NS_METHOD RemoveFromAllowList(nsIURI *uri); \
  NS_METHOD ExistsInAllowList(nsIURI *uri, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST(_to) \
  NS_IMETHOD AddToAllowList(nsIURI *uri) override { return _to AddToAllowList(uri); } \
  NS_IMETHOD RemoveFromAllowList(nsIURI *uri) override { return _to RemoveFromAllowList(uri); } \
  NS_IMETHOD ExistsInAllowList(nsIURI *uri, bool *_retval) override { return _to ExistsInAllowList(uri, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST(_to) \
  NS_IMETHOD AddToAllowList(nsIURI *uri) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddToAllowList(uri); } \
  NS_IMETHOD RemoveFromAllowList(nsIURI *uri) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFromAllowList(uri); } \
  NS_IMETHOD ExistsInAllowList(nsIURI *uri, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ExistsInAllowList(uri, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrivateBrowsingTrackingProtectionWhitelist : public nsIPrivateBrowsingTrackingProtectionWhitelist
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRIVATEBROWSINGTRACKINGPROTECTIONWHITELIST

  nsPrivateBrowsingTrackingProtectionWhitelist();

private:
  ~nsPrivateBrowsingTrackingProtectionWhitelist();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrivateBrowsingTrackingProtectionWhitelist, nsIPrivateBrowsingTrackingProtectionWhitelist)

nsPrivateBrowsingTrackingProtectionWhitelist::nsPrivateBrowsingTrackingProtectionWhitelist()
{
  /* member initializers and constructor code */
}

nsPrivateBrowsingTrackingProtectionWhitelist::~nsPrivateBrowsingTrackingProtectionWhitelist()
{
  /* destructor code */
}

/* void addToAllowList (in nsIURI uri); */
NS_IMETHODIMP nsPrivateBrowsingTrackingProtectionWhitelist::AddToAllowList(nsIURI *uri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFromAllowList (in nsIURI uri); */
NS_IMETHODIMP nsPrivateBrowsingTrackingProtectionWhitelist::RemoveFromAllowList(nsIURI *uri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool existsInAllowList (in nsIURI uri); */
NS_IMETHODIMP nsPrivateBrowsingTrackingProtectionWhitelist::ExistsInAllowList(nsIURI *uri, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_PBTRACKINGPROTECTIONWHITELIST_CONTRACTID "@mozilla.org/pbm-tp-whitelist;1"

#endif /* __gen_nsIPrivateBrowsingTrackingProtectionWhitelist_h__ */
