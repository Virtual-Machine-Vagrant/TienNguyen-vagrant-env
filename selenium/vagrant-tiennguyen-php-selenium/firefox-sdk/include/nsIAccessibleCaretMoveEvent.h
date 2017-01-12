/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAccessibleCaretMoveEvent.idl
 */

#ifndef __gen_nsIAccessibleCaretMoveEvent_h__
#define __gen_nsIAccessibleCaretMoveEvent_h__


#ifndef __gen_nsIAccessibleEvent_h__
#include "nsIAccessibleEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIAccessibleCaretMoveEvent */
#define NS_IACCESSIBLECARETMOVEEVENT_IID_STR "ed1982e4-57d7-41a8-8cd8-9023f809383e"

#define NS_IACCESSIBLECARETMOVEEVENT_IID \
  {0xed1982e4, 0x57d7, 0x41a8, \
    { 0x8c, 0xd8, 0x90, 0x23, 0xf8, 0x09, 0x38, 0x3e }}

class NS_NO_VTABLE nsIAccessibleCaretMoveEvent : public nsIAccessibleEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLECARETMOVEEVENT_IID)

  /* readonly attribute long caretOffset; */
  NS_IMETHOD GetCaretOffset(int32_t *aCaretOffset) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleCaretMoveEvent, NS_IACCESSIBLECARETMOVEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLECARETMOVEEVENT \
  NS_IMETHOD GetCaretOffset(int32_t *aCaretOffset) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIACCESSIBLECARETMOVEEVENT \
  NS_METHOD GetCaretOffset(int32_t *aCaretOffset); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLECARETMOVEEVENT(_to) \
  NS_IMETHOD GetCaretOffset(int32_t *aCaretOffset) override { return _to GetCaretOffset(aCaretOffset); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLECARETMOVEEVENT(_to) \
  NS_IMETHOD GetCaretOffset(int32_t *aCaretOffset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCaretOffset(aCaretOffset); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleCaretMoveEvent : public nsIAccessibleCaretMoveEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLECARETMOVEEVENT

  nsAccessibleCaretMoveEvent();

private:
  ~nsAccessibleCaretMoveEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAccessibleCaretMoveEvent, nsIAccessibleCaretMoveEvent)

nsAccessibleCaretMoveEvent::nsAccessibleCaretMoveEvent()
{
  /* member initializers and constructor code */
}

nsAccessibleCaretMoveEvent::~nsAccessibleCaretMoveEvent()
{
  /* destructor code */
}

/* readonly attribute long caretOffset; */
NS_IMETHODIMP nsAccessibleCaretMoveEvent::GetCaretOffset(int32_t *aCaretOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleCaretMoveEvent_h__ */
