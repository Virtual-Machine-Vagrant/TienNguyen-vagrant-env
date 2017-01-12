/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMNotifyPaintEvent.idl
 */

#ifndef __gen_nsIDOMNotifyPaintEvent_h__
#define __gen_nsIDOMNotifyPaintEvent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMClientRectList_h__
#include "nsIDOMClientRectList.h"
#endif

#ifndef __gen_nsIDOMClientRect_h__
#include "nsIDOMClientRect.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMPaintRequestList; /* forward declaration */


/* starting interface:    nsIDOMNotifyPaintEvent */
#define NS_IDOMNOTIFYPAINTEVENT_IID_STR "63f573a0-3e4e-474b-a0c2-bb4ca93febaa"

#define NS_IDOMNOTIFYPAINTEVENT_IID \
  {0x63f573a0, 0x3e4e, 0x474b, \
    { 0xa0, 0xc2, 0xbb, 0x4c, 0xa9, 0x3f, 0xeb, 0xaa }}

class NS_NO_VTABLE nsIDOMNotifyPaintEvent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNOTIFYPAINTEVENT_IID)

  /* readonly attribute nsIDOMClientRectList clientRects; */
  NS_IMETHOD GetClientRects(nsIDOMClientRectList * *aClientRects) = 0;

  /* readonly attribute nsIDOMClientRect boundingClientRect; */
  NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *aBoundingClientRect) = 0;

  /* readonly attribute nsISupports paintRequests; */
  NS_IMETHOD GetPaintRequests(nsISupports * *aPaintRequests) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNotifyPaintEvent, NS_IDOMNOTIFYPAINTEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNOTIFYPAINTEVENT \
  NS_IMETHOD GetClientRects(nsIDOMClientRectList * *aClientRects) override; \
  NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *aBoundingClientRect) override; \
  NS_IMETHOD GetPaintRequests(nsISupports * *aPaintRequests) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMNOTIFYPAINTEVENT \
  NS_METHOD GetClientRects(nsIDOMClientRectList * *aClientRects); \
  NS_METHOD GetBoundingClientRect(nsIDOMClientRect * *aBoundingClientRect); \
  NS_METHOD GetPaintRequests(nsISupports * *aPaintRequests); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNOTIFYPAINTEVENT(_to) \
  NS_IMETHOD GetClientRects(nsIDOMClientRectList * *aClientRects) override { return _to GetClientRects(aClientRects); } \
  NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *aBoundingClientRect) override { return _to GetBoundingClientRect(aBoundingClientRect); } \
  NS_IMETHOD GetPaintRequests(nsISupports * *aPaintRequests) override { return _to GetPaintRequests(aPaintRequests); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNOTIFYPAINTEVENT(_to) \
  NS_IMETHOD GetClientRects(nsIDOMClientRectList * *aClientRects) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientRects(aClientRects); } \
  NS_IMETHOD GetBoundingClientRect(nsIDOMClientRect * *aBoundingClientRect) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoundingClientRect(aBoundingClientRect); } \
  NS_IMETHOD GetPaintRequests(nsISupports * *aPaintRequests) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPaintRequests(aPaintRequests); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNotifyPaintEvent : public nsIDOMNotifyPaintEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNOTIFYPAINTEVENT

  nsDOMNotifyPaintEvent();

private:
  ~nsDOMNotifyPaintEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMNotifyPaintEvent, nsIDOMNotifyPaintEvent)

nsDOMNotifyPaintEvent::nsDOMNotifyPaintEvent()
{
  /* member initializers and constructor code */
}

nsDOMNotifyPaintEvent::~nsDOMNotifyPaintEvent()
{
  /* destructor code */
}

/* readonly attribute nsIDOMClientRectList clientRects; */
NS_IMETHODIMP nsDOMNotifyPaintEvent::GetClientRects(nsIDOMClientRectList * *aClientRects)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMClientRect boundingClientRect; */
NS_IMETHODIMP nsDOMNotifyPaintEvent::GetBoundingClientRect(nsIDOMClientRect * *aBoundingClientRect)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports paintRequests; */
NS_IMETHODIMP nsDOMNotifyPaintEvent::GetPaintRequests(nsISupports * *aPaintRequests)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNotifyPaintEvent_h__ */
