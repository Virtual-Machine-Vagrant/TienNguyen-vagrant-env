/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPaymentUIGlue.idl
 */

#ifndef __gen_nsIPaymentUIGlue_h__
#define __gen_nsIPaymentUIGlue_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPaymentFlowInfo; /* forward declaration */


/* starting interface:    nsIPaymentUIGlueCallback */
#define NS_IPAYMENTUIGLUECALLBACK_IID_STR "b9afa678-71a5-4975-bcdb-0c4098730eff"

#define NS_IPAYMENTUIGLUECALLBACK_IID \
  {0xb9afa678, 0x71a5, 0x4975, \
    { 0xbc, 0xdb, 0x0c, 0x40, 0x98, 0x73, 0x0e, 0xff }}

class NS_NO_VTABLE nsIPaymentUIGlueCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPAYMENTUIGLUECALLBACK_IID)

  /* void onresult (in DOMString requestId, in DOMString result); */
  NS_IMETHOD Onresult(const nsAString & requestId, const nsAString & result) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPaymentUIGlueCallback, NS_IPAYMENTUIGLUECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPAYMENTUIGLUECALLBACK \
  NS_IMETHOD Onresult(const nsAString & requestId, const nsAString & result) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPAYMENTUIGLUECALLBACK \
  NS_METHOD Onresult(const nsAString & requestId, const nsAString & result); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPAYMENTUIGLUECALLBACK(_to) \
  NS_IMETHOD Onresult(const nsAString & requestId, const nsAString & result) override { return _to Onresult(requestId, result); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPAYMENTUIGLUECALLBACK(_to) \
  NS_IMETHOD Onresult(const nsAString & requestId, const nsAString & result) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Onresult(requestId, result); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPaymentUIGlueCallback : public nsIPaymentUIGlueCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPAYMENTUIGLUECALLBACK

  nsPaymentUIGlueCallback();

private:
  ~nsPaymentUIGlueCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPaymentUIGlueCallback, nsIPaymentUIGlueCallback)

nsPaymentUIGlueCallback::nsPaymentUIGlueCallback()
{
  /* member initializers and constructor code */
}

nsPaymentUIGlueCallback::~nsPaymentUIGlueCallback()
{
  /* destructor code */
}

/* void onresult (in DOMString requestId, in DOMString result); */
NS_IMETHODIMP nsPaymentUIGlueCallback::Onresult(const nsAString & requestId, const nsAString & result)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPaymentUIGlue */
#define NS_IPAYMENTUIGLUE_IID_STR "4dc09e33-d395-4e1d-acb4-e85415181270"

#define NS_IPAYMENTUIGLUE_IID \
  {0x4dc09e33, 0xd395, 0x4e1d, \
    { 0xac, 0xb4, 0xe8, 0x54, 0x15, 0x18, 0x12, 0x70 }}

class NS_NO_VTABLE nsIPaymentUIGlue : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPAYMENTUIGLUE_IID)

  /* void confirmPaymentRequest (in DOMString requestId, in jsval paymentRequestsInfo, in nsIPaymentUIGlueCallback successCb, in nsIPaymentUIGlueCallback errorCb); */
  NS_IMETHOD ConfirmPaymentRequest(const nsAString & requestId, JS::HandleValue paymentRequestsInfo, nsIPaymentUIGlueCallback *successCb, nsIPaymentUIGlueCallback *errorCb) = 0;

  /* void showPaymentFlow (in DOMString requestId, in nsIPaymentFlowInfo paymentFlowInfo, in nsIPaymentUIGlueCallback errorCb); */
  NS_IMETHOD ShowPaymentFlow(const nsAString & requestId, nsIPaymentFlowInfo *paymentFlowInfo, nsIPaymentUIGlueCallback *errorCb) = 0;

  /* jsval closePaymentFlow (in DOMString requestId); */
  NS_IMETHOD ClosePaymentFlow(const nsAString & requestId, JS::MutableHandleValue _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPaymentUIGlue, NS_IPAYMENTUIGLUE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPAYMENTUIGLUE \
  NS_IMETHOD ConfirmPaymentRequest(const nsAString & requestId, JS::HandleValue paymentRequestsInfo, nsIPaymentUIGlueCallback *successCb, nsIPaymentUIGlueCallback *errorCb) override; \
  NS_IMETHOD ShowPaymentFlow(const nsAString & requestId, nsIPaymentFlowInfo *paymentFlowInfo, nsIPaymentUIGlueCallback *errorCb) override; \
  NS_IMETHOD ClosePaymentFlow(const nsAString & requestId, JS::MutableHandleValue _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPAYMENTUIGLUE \
  NS_METHOD ConfirmPaymentRequest(const nsAString & requestId, JS::HandleValue paymentRequestsInfo, nsIPaymentUIGlueCallback *successCb, nsIPaymentUIGlueCallback *errorCb); \
  NS_METHOD ShowPaymentFlow(const nsAString & requestId, nsIPaymentFlowInfo *paymentFlowInfo, nsIPaymentUIGlueCallback *errorCb); \
  NS_METHOD ClosePaymentFlow(const nsAString & requestId, JS::MutableHandleValue _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPAYMENTUIGLUE(_to) \
  NS_IMETHOD ConfirmPaymentRequest(const nsAString & requestId, JS::HandleValue paymentRequestsInfo, nsIPaymentUIGlueCallback *successCb, nsIPaymentUIGlueCallback *errorCb) override { return _to ConfirmPaymentRequest(requestId, paymentRequestsInfo, successCb, errorCb); } \
  NS_IMETHOD ShowPaymentFlow(const nsAString & requestId, nsIPaymentFlowInfo *paymentFlowInfo, nsIPaymentUIGlueCallback *errorCb) override { return _to ShowPaymentFlow(requestId, paymentFlowInfo, errorCb); } \
  NS_IMETHOD ClosePaymentFlow(const nsAString & requestId, JS::MutableHandleValue _retval) override { return _to ClosePaymentFlow(requestId, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPAYMENTUIGLUE(_to) \
  NS_IMETHOD ConfirmPaymentRequest(const nsAString & requestId, JS::HandleValue paymentRequestsInfo, nsIPaymentUIGlueCallback *successCb, nsIPaymentUIGlueCallback *errorCb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmPaymentRequest(requestId, paymentRequestsInfo, successCb, errorCb); } \
  NS_IMETHOD ShowPaymentFlow(const nsAString & requestId, nsIPaymentFlowInfo *paymentFlowInfo, nsIPaymentUIGlueCallback *errorCb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowPaymentFlow(requestId, paymentFlowInfo, errorCb); } \
  NS_IMETHOD ClosePaymentFlow(const nsAString & requestId, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClosePaymentFlow(requestId, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPaymentUIGlue : public nsIPaymentUIGlue
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPAYMENTUIGLUE

  nsPaymentUIGlue();

private:
  ~nsPaymentUIGlue();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPaymentUIGlue, nsIPaymentUIGlue)

nsPaymentUIGlue::nsPaymentUIGlue()
{
  /* member initializers and constructor code */
}

nsPaymentUIGlue::~nsPaymentUIGlue()
{
  /* destructor code */
}

/* void confirmPaymentRequest (in DOMString requestId, in jsval paymentRequestsInfo, in nsIPaymentUIGlueCallback successCb, in nsIPaymentUIGlueCallback errorCb); */
NS_IMETHODIMP nsPaymentUIGlue::ConfirmPaymentRequest(const nsAString & requestId, JS::HandleValue paymentRequestsInfo, nsIPaymentUIGlueCallback *successCb, nsIPaymentUIGlueCallback *errorCb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showPaymentFlow (in DOMString requestId, in nsIPaymentFlowInfo paymentFlowInfo, in nsIPaymentUIGlueCallback errorCb); */
NS_IMETHODIMP nsPaymentUIGlue::ShowPaymentFlow(const nsAString & requestId, nsIPaymentFlowInfo *paymentFlowInfo, nsIPaymentUIGlueCallback *errorCb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsval closePaymentFlow (in DOMString requestId); */
NS_IMETHODIMP nsPaymentUIGlue::ClosePaymentFlow(const nsAString & requestId, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPaymentUIGlue_h__ */
