/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMMouseScrollEvent.idl
 */

#ifndef __gen_nsIDOMMouseScrollEvent_h__
#define __gen_nsIDOMMouseScrollEvent_h__


#ifndef __gen_nsIDOMMouseEvent_h__
#include "nsIDOMMouseEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMouseScrollEvent */
#define NS_IDOMMOUSESCROLLEVENT_IID_STR "327bdd54-f772-4015-b856-9692154a066c"

#define NS_IDOMMOUSESCROLLEVENT_IID \
  {0x327bdd54, 0xf772, 0x4015, \
    { 0xb8, 0x56, 0x96, 0x92, 0x15, 0x4a, 0x06, 0x6c }}

class NS_NO_VTABLE nsIDOMMouseScrollEvent : public nsIDOMMouseEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOUSESCROLLEVENT_IID)

  enum {
    HORIZONTAL_AXIS = 1,
    VERTICAL_AXIS = 2
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMouseScrollEvent, NS_IDOMMOUSESCROLLEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOUSESCROLLEVENT \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMMOUSESCROLLEVENT \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOUSESCROLLEVENT(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOUSESCROLLEVENT(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMouseScrollEvent : public nsIDOMMouseScrollEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOUSESCROLLEVENT

  nsDOMMouseScrollEvent();

private:
  ~nsDOMMouseScrollEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMMouseScrollEvent, nsIDOMMouseScrollEvent)

nsDOMMouseScrollEvent::nsDOMMouseScrollEvent()
{
  /* member initializers and constructor code */
}

nsDOMMouseScrollEvent::~nsDOMMouseScrollEvent()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMouseScrollEvent_h__ */
