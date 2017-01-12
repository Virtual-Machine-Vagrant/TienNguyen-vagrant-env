/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPaymentContentHelperService.idl
 */

#ifndef __gen_nsIPaymentContentHelperService_h__
#define __gen_nsIPaymentContentHelperService_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMRequest; /* forward declaration */

class mozIDOMWindow; /* forward declaration */


/* starting interface:    nsIPaymentContentHelperService */
#define NS_IPAYMENTCONTENTHELPERSERVICE_IID_STR "80035846-6732-4fcc-961b-f336b65218f4"

#define NS_IPAYMENTCONTENTHELPERSERVICE_IID \
  {0x80035846, 0x6732, 0x4fcc, \
    { 0x96, 0x1b, 0xf3, 0x36, 0xb6, 0x52, 0x18, 0xf4 }}

class NS_NO_VTABLE nsIPaymentContentHelperService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPAYMENTCONTENTHELPERSERVICE_IID)

  /* nsIDOMDOMRequest pay (in mozIDOMWindow window, in jsval jwts); */
  NS_IMETHOD Pay(mozIDOMWindow *window, JS::HandleValue jwts, nsIDOMDOMRequest * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPaymentContentHelperService, NS_IPAYMENTCONTENTHELPERSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPAYMENTCONTENTHELPERSERVICE \
  NS_IMETHOD Pay(mozIDOMWindow *window, JS::HandleValue jwts, nsIDOMDOMRequest * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPAYMENTCONTENTHELPERSERVICE \
  NS_METHOD Pay(mozIDOMWindow *window, JS::HandleValue jwts, nsIDOMDOMRequest * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPAYMENTCONTENTHELPERSERVICE(_to) \
  NS_IMETHOD Pay(mozIDOMWindow *window, JS::HandleValue jwts, nsIDOMDOMRequest * *_retval) override { return _to Pay(window, jwts, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPAYMENTCONTENTHELPERSERVICE(_to) \
  NS_IMETHOD Pay(mozIDOMWindow *window, JS::HandleValue jwts, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Pay(window, jwts, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPaymentContentHelperService : public nsIPaymentContentHelperService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPAYMENTCONTENTHELPERSERVICE

  nsPaymentContentHelperService();

private:
  ~nsPaymentContentHelperService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPaymentContentHelperService, nsIPaymentContentHelperService)

nsPaymentContentHelperService::nsPaymentContentHelperService()
{
  /* member initializers and constructor code */
}

nsPaymentContentHelperService::~nsPaymentContentHelperService()
{
  /* destructor code */
}

/* nsIDOMDOMRequest pay (in mozIDOMWindow window, in jsval jwts); */
NS_IMETHODIMP nsPaymentContentHelperService::Pay(mozIDOMWindow *window, JS::HandleValue jwts, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPaymentContentHelperService_h__ */
