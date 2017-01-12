/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIHttpChannelChild.idl
 */

#ifndef __gen_nsIHttpChannelChild_h__
#define __gen_nsIHttpChannelChild_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrincipal; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIHttpChannelChild */
#define NS_IHTTPCHANNELCHILD_IID_STR "d02b96ed-2789-4f42-a25c-7abe63de7c18"

#define NS_IHTTPCHANNELCHILD_IID \
  {0xd02b96ed, 0x2789, 0x4f42, \
    { 0xa2, 0x5c, 0x7a, 0xbe, 0x63, 0xde, 0x7c, 0x18 }}

class NS_NO_VTABLE nsIHttpChannelChild : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPCHANNELCHILD_IID)

  /* void addCookiesToRequest (); */
  NS_IMETHOD AddCookiesToRequest(void) = 0;

  /* void forceIntercepted (in boolean postRedirectChannelShouldIntercept, in boolean postRedirectChannelShouldUpgrade); */
  NS_IMETHOD ForceIntercepted(bool postRedirectChannelShouldIntercept, bool postRedirectChannelShouldUpgrade) = 0;

  /* readonly attribute RequestHeaderTuples clientSetRequestHeaders; */
  NS_IMETHOD GetClientSetRequestHeaders(mozilla::net::RequestHeaderTuples **aClientSetRequestHeaders) = 0;

  /* [nostdcall,notxpcom] void GetClientSetCorsPreflightParameters (in OptionalCorsPreflightArgsRef args); */
  virtual void GetClientSetCorsPreflightParameters(mozilla::OptionalCorsPreflightArgs & args) = 0;

  /* void removeCorsPreflightCacheEntry (in nsIURI aURI, in nsIPrincipal aRequestingPrincipal); */
  NS_IMETHOD RemoveCorsPreflightCacheEntry(nsIURI *aURI, nsIPrincipal *aRequestingPrincipal) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpChannelChild, NS_IHTTPCHANNELCHILD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPCHANNELCHILD \
  NS_IMETHOD AddCookiesToRequest(void) override; \
  NS_IMETHOD ForceIntercepted(bool postRedirectChannelShouldIntercept, bool postRedirectChannelShouldUpgrade) override; \
  NS_IMETHOD GetClientSetRequestHeaders(mozilla::net::RequestHeaderTuples **aClientSetRequestHeaders) override; \
  virtual void GetClientSetCorsPreflightParameters(mozilla::OptionalCorsPreflightArgs & args) override; \
  NS_IMETHOD RemoveCorsPreflightCacheEntry(nsIURI *aURI, nsIPrincipal *aRequestingPrincipal) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIHTTPCHANNELCHILD \
  NS_METHOD AddCookiesToRequest(void); \
  NS_METHOD ForceIntercepted(bool postRedirectChannelShouldIntercept, bool postRedirectChannelShouldUpgrade); \
  NS_METHOD GetClientSetRequestHeaders(mozilla::net::RequestHeaderTuples **aClientSetRequestHeaders); \
  void GetClientSetCorsPreflightParameters(mozilla::OptionalCorsPreflightArgs & args); \
  NS_METHOD RemoveCorsPreflightCacheEntry(nsIURI *aURI, nsIPrincipal *aRequestingPrincipal); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPCHANNELCHILD(_to) \
  NS_IMETHOD AddCookiesToRequest(void) override { return _to AddCookiesToRequest(); } \
  NS_IMETHOD ForceIntercepted(bool postRedirectChannelShouldIntercept, bool postRedirectChannelShouldUpgrade) override { return _to ForceIntercepted(postRedirectChannelShouldIntercept, postRedirectChannelShouldUpgrade); } \
  NS_IMETHOD GetClientSetRequestHeaders(mozilla::net::RequestHeaderTuples **aClientSetRequestHeaders) override { return _to GetClientSetRequestHeaders(aClientSetRequestHeaders); } \
  virtual void GetClientSetCorsPreflightParameters(mozilla::OptionalCorsPreflightArgs & args) override { return _to GetClientSetCorsPreflightParameters(args); } \
  NS_IMETHOD RemoveCorsPreflightCacheEntry(nsIURI *aURI, nsIPrincipal *aRequestingPrincipal) override { return _to RemoveCorsPreflightCacheEntry(aURI, aRequestingPrincipal); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPCHANNELCHILD(_to) \
  NS_IMETHOD AddCookiesToRequest(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddCookiesToRequest(); } \
  NS_IMETHOD ForceIntercepted(bool postRedirectChannelShouldIntercept, bool postRedirectChannelShouldUpgrade) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceIntercepted(postRedirectChannelShouldIntercept, postRedirectChannelShouldUpgrade); } \
  NS_IMETHOD GetClientSetRequestHeaders(mozilla::net::RequestHeaderTuples **aClientSetRequestHeaders) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientSetRequestHeaders(aClientSetRequestHeaders); } \
  virtual void GetClientSetCorsPreflightParameters(mozilla::OptionalCorsPreflightArgs & args) override; \
  NS_IMETHOD RemoveCorsPreflightCacheEntry(nsIURI *aURI, nsIPrincipal *aRequestingPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveCorsPreflightCacheEntry(aURI, aRequestingPrincipal); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpChannelChild : public nsIHttpChannelChild
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPCHANNELCHILD

  nsHttpChannelChild();

private:
  ~nsHttpChannelChild();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsHttpChannelChild, nsIHttpChannelChild)

nsHttpChannelChild::nsHttpChannelChild()
{
  /* member initializers and constructor code */
}

nsHttpChannelChild::~nsHttpChannelChild()
{
  /* destructor code */
}

/* void addCookiesToRequest (); */
NS_IMETHODIMP nsHttpChannelChild::AddCookiesToRequest()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceIntercepted (in boolean postRedirectChannelShouldIntercept, in boolean postRedirectChannelShouldUpgrade); */
NS_IMETHODIMP nsHttpChannelChild::ForceIntercepted(bool postRedirectChannelShouldIntercept, bool postRedirectChannelShouldUpgrade)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute RequestHeaderTuples clientSetRequestHeaders; */
NS_IMETHODIMP nsHttpChannelChild::GetClientSetRequestHeaders(mozilla::net::RequestHeaderTuples **aClientSetRequestHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] void GetClientSetCorsPreflightParameters (in OptionalCorsPreflightArgsRef args); */
void nsHttpChannelChild::GetClientSetCorsPreflightParameters(mozilla::OptionalCorsPreflightArgs & args)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeCorsPreflightCacheEntry (in nsIURI aURI, in nsIPrincipal aRequestingPrincipal); */
NS_IMETHODIMP nsHttpChannelChild::RemoveCorsPreflightCacheEntry(nsIURI *aURI, nsIPrincipal *aRequestingPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIHttpChannelChild_h__ */
