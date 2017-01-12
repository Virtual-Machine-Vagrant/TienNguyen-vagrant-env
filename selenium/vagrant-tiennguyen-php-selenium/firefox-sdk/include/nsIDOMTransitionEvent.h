/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMTransitionEvent.idl
 */

#ifndef __gen_nsIDOMTransitionEvent_h__
#define __gen_nsIDOMTransitionEvent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMTransitionEvent */
#define NS_IDOMTRANSITIONEVENT_IID_STR "ee3499bf-0f14-4bb6-829c-19ad24fd4a85"

#define NS_IDOMTRANSITIONEVENT_IID \
  {0xee3499bf, 0x0f14, 0x4bb6, \
    { 0x82, 0x9c, 0x19, 0xad, 0x24, 0xfd, 0x4a, 0x85 }}

class NS_NO_VTABLE nsIDOMTransitionEvent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMTRANSITIONEVENT_IID)

  /* readonly attribute DOMString propertyName; */
  NS_IMETHOD GetPropertyName(nsAString & aPropertyName) = 0;

  /* readonly attribute float elapsedTime; */
  NS_IMETHOD GetElapsedTime(float *aElapsedTime) = 0;

  /* readonly attribute DOMString pseudoElement; */
  NS_IMETHOD GetPseudoElement(nsAString & aPseudoElement) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMTransitionEvent, NS_IDOMTRANSITIONEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMTRANSITIONEVENT \
  NS_IMETHOD GetPropertyName(nsAString & aPropertyName) override; \
  NS_IMETHOD GetElapsedTime(float *aElapsedTime) override; \
  NS_IMETHOD GetPseudoElement(nsAString & aPseudoElement) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMTRANSITIONEVENT \
  NS_METHOD GetPropertyName(nsAString & aPropertyName); \
  NS_METHOD GetElapsedTime(float *aElapsedTime); \
  NS_METHOD GetPseudoElement(nsAString & aPseudoElement); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMTRANSITIONEVENT(_to) \
  NS_IMETHOD GetPropertyName(nsAString & aPropertyName) override { return _to GetPropertyName(aPropertyName); } \
  NS_IMETHOD GetElapsedTime(float *aElapsedTime) override { return _to GetElapsedTime(aElapsedTime); } \
  NS_IMETHOD GetPseudoElement(nsAString & aPseudoElement) override { return _to GetPseudoElement(aPseudoElement); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMTRANSITIONEVENT(_to) \
  NS_IMETHOD GetPropertyName(nsAString & aPropertyName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPropertyName(aPropertyName); } \
  NS_IMETHOD GetElapsedTime(float *aElapsedTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElapsedTime(aElapsedTime); } \
  NS_IMETHOD GetPseudoElement(nsAString & aPseudoElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPseudoElement(aPseudoElement); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMTransitionEvent : public nsIDOMTransitionEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMTRANSITIONEVENT

  nsDOMTransitionEvent();

private:
  ~nsDOMTransitionEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMTransitionEvent, nsIDOMTransitionEvent)

nsDOMTransitionEvent::nsDOMTransitionEvent()
{
  /* member initializers and constructor code */
}

nsDOMTransitionEvent::~nsDOMTransitionEvent()
{
  /* destructor code */
}

/* readonly attribute DOMString propertyName; */
NS_IMETHODIMP nsDOMTransitionEvent::GetPropertyName(nsAString & aPropertyName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float elapsedTime; */
NS_IMETHODIMP nsDOMTransitionEvent::GetElapsedTime(float *aElapsedTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString pseudoElement; */
NS_IMETHODIMP nsDOMTransitionEvent::GetPseudoElement(nsAString & aPseudoElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMTransitionEvent_h__ */
