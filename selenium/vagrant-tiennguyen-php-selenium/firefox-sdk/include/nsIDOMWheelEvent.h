/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMWheelEvent.idl
 */

#ifndef __gen_nsIDOMWheelEvent_h__
#define __gen_nsIDOMWheelEvent_h__


#ifndef __gen_nsIDOMMouseEvent_h__
#include "nsIDOMMouseEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMWheelEvent */
#define NS_IDOMWHEELEVENT_IID_STR "d320d075-b29d-4edd-b3a3-3ffd460640de"

#define NS_IDOMWHEELEVENT_IID \
  {0xd320d075, 0xb29d, 0x4edd, \
    { 0xb3, 0xa3, 0x3f, 0xfd, 0x46, 0x06, 0x40, 0xde }}

class NS_NO_VTABLE nsIDOMWheelEvent : public nsIDOMMouseEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWHEELEVENT_IID)

  enum {
    DOM_DELTA_PIXEL = 0U,
    DOM_DELTA_LINE = 1U,
    DOM_DELTA_PAGE = 2U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWheelEvent, NS_IDOMWHEELEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWHEELEVENT \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMWHEELEVENT \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWHEELEVENT(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWHEELEVENT(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWheelEvent : public nsIDOMWheelEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWHEELEVENT

  nsDOMWheelEvent();

private:
  ~nsDOMWheelEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMWheelEvent, nsIDOMWheelEvent)

nsDOMWheelEvent::nsDOMWheelEvent()
{
  /* member initializers and constructor code */
}

nsDOMWheelEvent::~nsDOMWheelEvent()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMWheelEvent_h__ */
