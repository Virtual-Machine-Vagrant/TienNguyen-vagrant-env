/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMBeforeUnloadEvent.idl
 */

#ifndef __gen_nsIDOMBeforeUnloadEvent_h__
#define __gen_nsIDOMBeforeUnloadEvent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMBeforeUnloadEvent */
#define NS_IDOMBEFOREUNLOADEVENT_IID_STR "26c83933-a5a4-455e-8c46-69fa24dfa991"

#define NS_IDOMBEFOREUNLOADEVENT_IID \
  {0x26c83933, 0xa5a4, 0x455e, \
    { 0x8c, 0x46, 0x69, 0xfa, 0x24, 0xdf, 0xa9, 0x91 }}

class NS_NO_VTABLE nsIDOMBeforeUnloadEvent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMBEFOREUNLOADEVENT_IID)

  /* attribute DOMString returnValue; */
  NS_IMETHOD GetReturnValue(nsAString & aReturnValue) = 0;
  NS_IMETHOD SetReturnValue(const nsAString & aReturnValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMBeforeUnloadEvent, NS_IDOMBEFOREUNLOADEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMBEFOREUNLOADEVENT \
  NS_IMETHOD GetReturnValue(nsAString & aReturnValue) override; \
  NS_IMETHOD SetReturnValue(const nsAString & aReturnValue) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMBEFOREUNLOADEVENT \
  NS_METHOD GetReturnValue(nsAString & aReturnValue); \
  NS_METHOD SetReturnValue(const nsAString & aReturnValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMBEFOREUNLOADEVENT(_to) \
  NS_IMETHOD GetReturnValue(nsAString & aReturnValue) override { return _to GetReturnValue(aReturnValue); } \
  NS_IMETHOD SetReturnValue(const nsAString & aReturnValue) override { return _to SetReturnValue(aReturnValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMBEFOREUNLOADEVENT(_to) \
  NS_IMETHOD GetReturnValue(nsAString & aReturnValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReturnValue(aReturnValue); } \
  NS_IMETHOD SetReturnValue(const nsAString & aReturnValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReturnValue(aReturnValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMBeforeUnloadEvent : public nsIDOMBeforeUnloadEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMBEFOREUNLOADEVENT

  nsDOMBeforeUnloadEvent();

private:
  ~nsDOMBeforeUnloadEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMBeforeUnloadEvent, nsIDOMBeforeUnloadEvent)

nsDOMBeforeUnloadEvent::nsDOMBeforeUnloadEvent()
{
  /* member initializers and constructor code */
}

nsDOMBeforeUnloadEvent::~nsDOMBeforeUnloadEvent()
{
  /* destructor code */
}

/* attribute DOMString returnValue; */
NS_IMETHODIMP nsDOMBeforeUnloadEvent::GetReturnValue(nsAString & aReturnValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMBeforeUnloadEvent::SetReturnValue(const nsAString & aReturnValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMBeforeUnloadEvent_h__ */
