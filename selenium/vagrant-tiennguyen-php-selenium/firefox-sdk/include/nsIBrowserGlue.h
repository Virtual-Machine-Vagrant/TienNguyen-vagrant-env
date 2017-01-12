/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIBrowserGlue.idl
 */

#ifndef __gen_nsIBrowserGlue_h__
#define __gen_nsIBrowserGlue_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIBrowserGlue */
#define NS_IBROWSERGLUE_IID_STR "b0e7c156-d00c-4605-a77d-27c7418f23ae"

#define NS_IBROWSERGLUE_IID \
  {0xb0e7c156, 0xd00c, 0x4605, \
    { 0xa7, 0x7d, 0x27, 0xc7, 0x41, 0x8f, 0x23, 0xae }}

class NS_NO_VTABLE nsIBrowserGlue : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBROWSERGLUE_IID)

  /* void sanitize (in nsIDOMWindow aParentWindow); */
  NS_IMETHOD Sanitize(nsIDOMWindow *aParentWindow) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBrowserGlue, NS_IBROWSERGLUE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBROWSERGLUE \
  NS_IMETHOD Sanitize(nsIDOMWindow *aParentWindow) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIBROWSERGLUE \
  NS_METHOD Sanitize(nsIDOMWindow *aParentWindow); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBROWSERGLUE(_to) \
  NS_IMETHOD Sanitize(nsIDOMWindow *aParentWindow) override { return _to Sanitize(aParentWindow); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBROWSERGLUE(_to) \
  NS_IMETHOD Sanitize(nsIDOMWindow *aParentWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Sanitize(aParentWindow); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBrowserGlue : public nsIBrowserGlue
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBROWSERGLUE

  nsBrowserGlue();

private:
  ~nsBrowserGlue();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsBrowserGlue, nsIBrowserGlue)

nsBrowserGlue::nsBrowserGlue()
{
  /* member initializers and constructor code */
}

nsBrowserGlue::~nsBrowserGlue()
{
  /* destructor code */
}

/* void sanitize (in nsIDOMWindow aParentWindow); */
NS_IMETHODIMP nsBrowserGlue::Sanitize(nsIDOMWindow *aParentWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIBrowserGlue_h__ */
