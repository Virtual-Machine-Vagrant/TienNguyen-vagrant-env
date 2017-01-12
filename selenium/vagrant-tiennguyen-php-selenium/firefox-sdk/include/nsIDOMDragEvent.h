/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMDragEvent.idl
 */

#ifndef __gen_nsIDOMDragEvent_h__
#define __gen_nsIDOMDragEvent_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsIDOMMouseEvent_h__
#include "nsIDOMMouseEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDataTransfer; /* forward declaration */


/* starting interface:    nsIDOMDragEvent */
#define NS_IDOMDRAGEVENT_IID_STR "d5c0d4c2-c646-4b4b-836e-48408b9c7b80"

#define NS_IDOMDRAGEVENT_IID \
  {0xd5c0d4c2, 0xc646, 0x4b4b, \
    { 0x83, 0x6e, 0x48, 0x40, 0x8b, 0x9c, 0x7b, 0x80 }}

class NS_NO_VTABLE nsIDOMDragEvent : public nsIDOMMouseEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMDRAGEVENT_IID)

  /* readonly attribute nsIDOMDataTransfer dataTransfer; */
  NS_IMETHOD GetDataTransfer(nsIDOMDataTransfer * *aDataTransfer) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMDragEvent, NS_IDOMDRAGEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMDRAGEVENT \
  NS_IMETHOD GetDataTransfer(nsIDOMDataTransfer * *aDataTransfer) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMDRAGEVENT \
  NS_METHOD GetDataTransfer(nsIDOMDataTransfer * *aDataTransfer); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMDRAGEVENT(_to) \
  NS_IMETHOD GetDataTransfer(nsIDOMDataTransfer * *aDataTransfer) override { return _to GetDataTransfer(aDataTransfer); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMDRAGEVENT(_to) \
  NS_IMETHOD GetDataTransfer(nsIDOMDataTransfer * *aDataTransfer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataTransfer(aDataTransfer); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMDragEvent : public nsIDOMDragEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMDRAGEVENT

  nsDOMDragEvent();

private:
  ~nsDOMDragEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMDragEvent, nsIDOMDragEvent)

nsDOMDragEvent::nsDOMDragEvent()
{
  /* member initializers and constructor code */
}

nsDOMDragEvent::~nsDOMDragEvent()
{
  /* destructor code */
}

/* readonly attribute nsIDOMDataTransfer dataTransfer; */
NS_IMETHODIMP nsDOMDragEvent::GetDataTransfer(nsIDOMDataTransfer * *aDataTransfer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMDragEvent_h__ */
