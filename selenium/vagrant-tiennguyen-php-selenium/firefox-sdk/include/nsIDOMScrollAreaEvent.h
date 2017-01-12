/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMScrollAreaEvent.idl
 */

#ifndef __gen_nsIDOMScrollAreaEvent_h__
#define __gen_nsIDOMScrollAreaEvent_h__


#ifndef __gen_nsIDOMUIEvent_h__
#include "nsIDOMUIEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMScrollAreaEvent */
#define NS_IDOMSCROLLAREAEVENT_IID_STR "5883e564-e676-4652-9421-7df6132016b2"

#define NS_IDOMSCROLLAREAEVENT_IID \
  {0x5883e564, 0xe676, 0x4652, \
    { 0x94, 0x21, 0x7d, 0xf6, 0x13, 0x20, 0x16, 0xb2 }}

class NS_NO_VTABLE nsIDOMScrollAreaEvent : public nsIDOMUIEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSCROLLAREAEVENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMScrollAreaEvent, NS_IDOMSCROLLAREAEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSCROLLAREAEVENT \
  /* no methods! */

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMSCROLLAREAEVENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSCROLLAREAEVENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSCROLLAREAEVENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMScrollAreaEvent : public nsIDOMScrollAreaEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSCROLLAREAEVENT

  nsDOMScrollAreaEvent();

private:
  ~nsDOMScrollAreaEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMScrollAreaEvent, nsIDOMScrollAreaEvent)

nsDOMScrollAreaEvent::nsDOMScrollAreaEvent()
{
  /* member initializers and constructor code */
}

nsDOMScrollAreaEvent::~nsDOMScrollAreaEvent()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMScrollAreaEvent_h__ */
