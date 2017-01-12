/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMFocusEvent.idl
 */

#ifndef __gen_nsIDOMFocusEvent_h__
#define __gen_nsIDOMFocusEvent_h__


#ifndef __gen_nsIDOMUIEvent_h__
#include "nsIDOMUIEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMFocusEvent */
#define NS_IDOMFOCUSEVENT_IID_STR "ceab9fcd-2cae-42cb-b692-effa7ec48848"

#define NS_IDOMFOCUSEVENT_IID \
  {0xceab9fcd, 0x2cae, 0x42cb, \
    { 0xb6, 0x92, 0xef, 0xfa, 0x7e, 0xc4, 0x88, 0x48 }}

class NS_NO_VTABLE nsIDOMFocusEvent : public nsIDOMUIEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFOCUSEVENT_IID)

  /* readonly attribute nsIDOMEventTarget relatedTarget; */
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFocusEvent, NS_IDOMFOCUSEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFOCUSEVENT \
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMFOCUSEVENT \
  NS_METHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFOCUSEVENT(_to) \
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) override { return _to GetRelatedTarget(aRelatedTarget); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFOCUSEVENT(_to) \
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelatedTarget(aRelatedTarget); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFocusEvent : public nsIDOMFocusEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFOCUSEVENT

  nsDOMFocusEvent();

private:
  ~nsDOMFocusEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMFocusEvent, nsIDOMFocusEvent)

nsDOMFocusEvent::nsDOMFocusEvent()
{
  /* member initializers and constructor code */
}

nsDOMFocusEvent::~nsDOMFocusEvent()
{
  /* destructor code */
}

/* readonly attribute nsIDOMEventTarget relatedTarget; */
NS_IMETHODIMP nsDOMFocusEvent::GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMFocusEvent_h__ */
