/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMTimeEvent.idl
 */

#ifndef __gen_nsIDOMTimeEvent_h__
#define __gen_nsIDOMTimeEvent_h__


#ifndef __gen_nsIDOMEvent_h__
#include "nsIDOMEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMTimeEvent */
#define NS_IDOMTIMEEVENT_IID_STR "b5e7fbac-f572-426c-9320-0ef7630f03c1"

#define NS_IDOMTIMEEVENT_IID \
  {0xb5e7fbac, 0xf572, 0x426c, \
    { 0x93, 0x20, 0x0e, 0xf7, 0x63, 0x0f, 0x03, 0xc1 }}

class NS_NO_VTABLE nsIDOMTimeEvent : public nsIDOMEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMTIMEEVENT_IID)

  /* readonly attribute long detail; */
  NS_IMETHOD GetDetail(int32_t *aDetail) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMTimeEvent, NS_IDOMTIMEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMTIMEEVENT \
  NS_IMETHOD GetDetail(int32_t *aDetail) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMTIMEEVENT \
  NS_METHOD GetDetail(int32_t *aDetail); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMTIMEEVENT(_to) \
  NS_IMETHOD GetDetail(int32_t *aDetail) override { return _to GetDetail(aDetail); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMTIMEEVENT(_to) \
  NS_IMETHOD GetDetail(int32_t *aDetail) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDetail(aDetail); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMTimeEvent : public nsIDOMTimeEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMTIMEEVENT

  nsDOMTimeEvent();

private:
  ~nsDOMTimeEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMTimeEvent, nsIDOMTimeEvent)

nsDOMTimeEvent::nsDOMTimeEvent()
{
  /* member initializers and constructor code */
}

nsDOMTimeEvent::~nsDOMTimeEvent()
{
  /* destructor code */
}

/* readonly attribute long detail; */
NS_IMETHODIMP nsDOMTimeEvent::GetDetail(int32_t *aDetail)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMTimeEvent_h__ */
