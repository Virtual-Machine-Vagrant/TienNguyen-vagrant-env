/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISiteSpecificUserAgent.idl
 */

#ifndef __gen_nsISiteSpecificUserAgent_h__
#define __gen_nsISiteSpecificUserAgent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class mozIDOMWindow; /* forward declaration */


/* starting interface:    nsISiteSpecificUserAgent */
#define NS_ISITESPECIFICUSERAGENT_IID_STR "0f0ace30-9ab1-4175-9d60-fd26c0324adc"

#define NS_ISITESPECIFICUSERAGENT_IID \
  {0x0f0ace30, 0x9ab1, 0x4175, \
    { 0x9d, 0x60, 0xfd, 0x26, 0xc0, 0x32, 0x4a, 0xdc }}

class NS_NO_VTABLE nsISiteSpecificUserAgent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISITESPECIFICUSERAGENT_IID)

  /* AString getUserAgentForURIAndWindow (in nsIURI aURI, in mozIDOMWindow aWindow); */
  NS_IMETHOD GetUserAgentForURIAndWindow(nsIURI *aURI, mozIDOMWindow *aWindow, nsAString & _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISiteSpecificUserAgent, NS_ISITESPECIFICUSERAGENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISITESPECIFICUSERAGENT \
  NS_IMETHOD GetUserAgentForURIAndWindow(nsIURI *aURI, mozIDOMWindow *aWindow, nsAString & _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISITESPECIFICUSERAGENT \
  NS_METHOD GetUserAgentForURIAndWindow(nsIURI *aURI, mozIDOMWindow *aWindow, nsAString & _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISITESPECIFICUSERAGENT(_to) \
  NS_IMETHOD GetUserAgentForURIAndWindow(nsIURI *aURI, mozIDOMWindow *aWindow, nsAString & _retval) override { return _to GetUserAgentForURIAndWindow(aURI, aWindow, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISITESPECIFICUSERAGENT(_to) \
  NS_IMETHOD GetUserAgentForURIAndWindow(nsIURI *aURI, mozIDOMWindow *aWindow, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserAgentForURIAndWindow(aURI, aWindow, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSiteSpecificUserAgent : public nsISiteSpecificUserAgent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISITESPECIFICUSERAGENT

  nsSiteSpecificUserAgent();

private:
  ~nsSiteSpecificUserAgent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSiteSpecificUserAgent, nsISiteSpecificUserAgent)

nsSiteSpecificUserAgent::nsSiteSpecificUserAgent()
{
  /* member initializers and constructor code */
}

nsSiteSpecificUserAgent::~nsSiteSpecificUserAgent()
{
  /* destructor code */
}

/* AString getUserAgentForURIAndWindow (in nsIURI aURI, in mozIDOMWindow aWindow); */
NS_IMETHODIMP nsSiteSpecificUserAgent::GetUserAgentForURIAndWindow(nsIURI *aURI, mozIDOMWindow *aWindow, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISiteSpecificUserAgent_h__ */
