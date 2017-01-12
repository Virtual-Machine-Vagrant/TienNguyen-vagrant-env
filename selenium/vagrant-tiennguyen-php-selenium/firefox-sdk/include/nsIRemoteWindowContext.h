/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIRemoteWindowContext.idl
 */

#ifndef __gen_nsIRemoteWindowContext_h__
#define __gen_nsIRemoteWindowContext_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */


/* starting interface:    nsIRemoteWindowContext */
#define NS_IREMOTEWINDOWCONTEXT_IID_STR "94f4a92b-752e-4fd9-8345-11b069ca19f3"

#define NS_IREMOTEWINDOWCONTEXT_IID \
  {0x94f4a92b, 0x752e, 0x4fd9, \
    { 0x83, 0x45, 0x11, 0xb0, 0x69, 0xca, 0x19, 0xf3 }}

class NS_NO_VTABLE nsIRemoteWindowContext : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IREMOTEWINDOWCONTEXT_IID)

  /* void openURI (in nsIURI aURI); */
  NS_IMETHOD OpenURI(nsIURI *aURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIRemoteWindowContext, NS_IREMOTEWINDOWCONTEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIREMOTEWINDOWCONTEXT \
  NS_IMETHOD OpenURI(nsIURI *aURI) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIREMOTEWINDOWCONTEXT \
  NS_METHOD OpenURI(nsIURI *aURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIREMOTEWINDOWCONTEXT(_to) \
  NS_IMETHOD OpenURI(nsIURI *aURI) override { return _to OpenURI(aURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIREMOTEWINDOWCONTEXT(_to) \
  NS_IMETHOD OpenURI(nsIURI *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenURI(aURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsRemoteWindowContext : public nsIRemoteWindowContext
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIREMOTEWINDOWCONTEXT

  nsRemoteWindowContext();

private:
  ~nsRemoteWindowContext();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsRemoteWindowContext, nsIRemoteWindowContext)

nsRemoteWindowContext::nsRemoteWindowContext()
{
  /* member initializers and constructor code */
}

nsRemoteWindowContext::~nsRemoteWindowContext()
{
  /* destructor code */
}

/* void openURI (in nsIURI aURI); */
NS_IMETHODIMP nsRemoteWindowContext::OpenURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIRemoteWindowContext_h__ */
