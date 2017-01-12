/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMUIEvent.idl
 */

#ifndef __gen_nsIDOMUIEvent_h__
#define __gen_nsIDOMUIEvent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMWindow_h__
#include "nsIDOMWindow.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */

class mozIDOMWindowProxy; /* forward declaration */

namespace mozilla {
namespace dom {
class Event;
}
}

/* starting interface:    nsIDOMUIEvent */
#define NS_IDOMUIEVENT_IID_STR "85ae52eb-37fa-4fd9-a2e6-c7d0f2a521b3"

#define NS_IDOMUIEVENT_IID \
  {0x85ae52eb, 0x37fa, 0x4fd9, \
    { 0xa2, 0xe6, 0xc7, 0xd0, 0xf2, 0xa5, 0x21, 0xb3 }}

class NS_NO_VTABLE nsIDOMUIEvent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMUIEVENT_IID)

  /* readonly attribute mozIDOMWindowProxy view; */
  NS_IMETHOD GetView(mozIDOMWindowProxy * *aView) = 0;

  /* readonly attribute long detail; */
  NS_IMETHOD GetDetail(int32_t *aDetail) = 0;

  /* void initUIEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in mozIDOMWindow viewArg, in long detailArg); */
  NS_IMETHOD InitUIEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg) = 0;

  enum {
    SCROLL_PAGE_UP = -32768,
    SCROLL_PAGE_DOWN = 32768
  };

  /* readonly attribute long layerX; */
  NS_IMETHOD GetLayerX(int32_t *aLayerX) = 0;

  /* readonly attribute long layerY; */
  NS_IMETHOD GetLayerY(int32_t *aLayerY) = 0;

  /* readonly attribute long pageX; */
  NS_IMETHOD GetPageX(int32_t *aPageX) = 0;

  /* readonly attribute long pageY; */
  NS_IMETHOD GetPageY(int32_t *aPageY) = 0;

  /* readonly attribute unsigned long which; */
  NS_IMETHOD GetWhich(uint32_t *aWhich) = 0;

  /* readonly attribute nsIDOMNode rangeParent; */
  NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent) = 0;

  /* readonly attribute long rangeOffset; */
  NS_IMETHOD GetRangeOffset(int32_t *aRangeOffset) = 0;

  /* attribute boolean cancelBubble; */
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) = 0;
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) = 0;

  /* readonly attribute boolean isChar; */
  NS_IMETHOD GetIsChar(bool *aIsChar) = 0;

  /* [nostdcall,notxpcom] EventPtr AsEvent (); */
  virtual mozilla::dom::Event * AsEvent(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMUIEvent, NS_IDOMUIEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMUIEVENT \
  NS_IMETHOD GetView(mozIDOMWindowProxy * *aView) override; \
  NS_IMETHOD GetDetail(int32_t *aDetail) override; \
  NS_IMETHOD InitUIEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg) override; \
  NS_IMETHOD GetLayerX(int32_t *aLayerX) override; \
  NS_IMETHOD GetLayerY(int32_t *aLayerY) override; \
  NS_IMETHOD GetPageX(int32_t *aPageX) override; \
  NS_IMETHOD GetPageY(int32_t *aPageY) override; \
  NS_IMETHOD GetWhich(uint32_t *aWhich) override; \
  NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent) override; \
  NS_IMETHOD GetRangeOffset(int32_t *aRangeOffset) override; \
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) override; \
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) override; \
  NS_IMETHOD GetIsChar(bool *aIsChar) override; \
  virtual mozilla::dom::Event * AsEvent(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMUIEVENT \
  NS_METHOD GetView(mozIDOMWindowProxy * *aView); \
  NS_METHOD GetDetail(int32_t *aDetail); \
  NS_METHOD InitUIEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg); \
  NS_METHOD GetLayerX(int32_t *aLayerX); \
  NS_METHOD GetLayerY(int32_t *aLayerY); \
  NS_METHOD GetPageX(int32_t *aPageX); \
  NS_METHOD GetPageY(int32_t *aPageY); \
  NS_METHOD GetWhich(uint32_t *aWhich); \
  NS_METHOD GetRangeParent(nsIDOMNode * *aRangeParent); \
  NS_METHOD GetRangeOffset(int32_t *aRangeOffset); \
  NS_METHOD GetCancelBubble(bool *aCancelBubble); \
  NS_METHOD SetCancelBubble(bool aCancelBubble); \
  NS_METHOD GetIsChar(bool *aIsChar); \
  mozilla::dom::Event * AsEvent(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMUIEVENT(_to) \
  NS_IMETHOD GetView(mozIDOMWindowProxy * *aView) override { return _to GetView(aView); } \
  NS_IMETHOD GetDetail(int32_t *aDetail) override { return _to GetDetail(aDetail); } \
  NS_IMETHOD InitUIEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg) override { return _to InitUIEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg); } \
  NS_IMETHOD GetLayerX(int32_t *aLayerX) override { return _to GetLayerX(aLayerX); } \
  NS_IMETHOD GetLayerY(int32_t *aLayerY) override { return _to GetLayerY(aLayerY); } \
  NS_IMETHOD GetPageX(int32_t *aPageX) override { return _to GetPageX(aPageX); } \
  NS_IMETHOD GetPageY(int32_t *aPageY) override { return _to GetPageY(aPageY); } \
  NS_IMETHOD GetWhich(uint32_t *aWhich) override { return _to GetWhich(aWhich); } \
  NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent) override { return _to GetRangeParent(aRangeParent); } \
  NS_IMETHOD GetRangeOffset(int32_t *aRangeOffset) override { return _to GetRangeOffset(aRangeOffset); } \
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) override { return _to GetCancelBubble(aCancelBubble); } \
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) override { return _to SetCancelBubble(aCancelBubble); } \
  NS_IMETHOD GetIsChar(bool *aIsChar) override { return _to GetIsChar(aIsChar); } \
  virtual mozilla::dom::Event * AsEvent(void) override { return _to AsEvent(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMUIEVENT(_to) \
  NS_IMETHOD GetView(mozIDOMWindowProxy * *aView) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetView(aView); } \
  NS_IMETHOD GetDetail(int32_t *aDetail) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDetail(aDetail); } \
  NS_IMETHOD InitUIEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitUIEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg); } \
  NS_IMETHOD GetLayerX(int32_t *aLayerX) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayerX(aLayerX); } \
  NS_IMETHOD GetLayerY(int32_t *aLayerY) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLayerY(aLayerY); } \
  NS_IMETHOD GetPageX(int32_t *aPageX) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageX(aPageX); } \
  NS_IMETHOD GetPageY(int32_t *aPageY) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPageY(aPageY); } \
  NS_IMETHOD GetWhich(uint32_t *aWhich) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWhich(aWhich); } \
  NS_IMETHOD GetRangeParent(nsIDOMNode * *aRangeParent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeParent(aRangeParent); } \
  NS_IMETHOD GetRangeOffset(int32_t *aRangeOffset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRangeOffset(aRangeOffset); } \
  NS_IMETHOD GetCancelBubble(bool *aCancelBubble) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCancelBubble(aCancelBubble); } \
  NS_IMETHOD SetCancelBubble(bool aCancelBubble) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCancelBubble(aCancelBubble); } \
  NS_IMETHOD GetIsChar(bool *aIsChar) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsChar(aIsChar); } \
  virtual mozilla::dom::Event * AsEvent(void) override; 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMUIEvent : public nsIDOMUIEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMUIEVENT

  nsDOMUIEvent();

private:
  ~nsDOMUIEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMUIEvent, nsIDOMUIEvent)

nsDOMUIEvent::nsDOMUIEvent()
{
  /* member initializers and constructor code */
}

nsDOMUIEvent::~nsDOMUIEvent()
{
  /* destructor code */
}

/* readonly attribute mozIDOMWindowProxy view; */
NS_IMETHODIMP nsDOMUIEvent::GetView(mozIDOMWindowProxy * *aView)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long detail; */
NS_IMETHODIMP nsDOMUIEvent::GetDetail(int32_t *aDetail)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initUIEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in mozIDOMWindow viewArg, in long detailArg); */
NS_IMETHODIMP nsDOMUIEvent::InitUIEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long layerX; */
NS_IMETHODIMP nsDOMUIEvent::GetLayerX(int32_t *aLayerX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long layerY; */
NS_IMETHODIMP nsDOMUIEvent::GetLayerY(int32_t *aLayerY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pageX; */
NS_IMETHODIMP nsDOMUIEvent::GetPageX(int32_t *aPageX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long pageY; */
NS_IMETHODIMP nsDOMUIEvent::GetPageY(int32_t *aPageY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long which; */
NS_IMETHODIMP nsDOMUIEvent::GetWhich(uint32_t *aWhich)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMNode rangeParent; */
NS_IMETHODIMP nsDOMUIEvent::GetRangeParent(nsIDOMNode * *aRangeParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long rangeOffset; */
NS_IMETHODIMP nsDOMUIEvent::GetRangeOffset(int32_t *aRangeOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean cancelBubble; */
NS_IMETHODIMP nsDOMUIEvent::GetCancelBubble(bool *aCancelBubble)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMUIEvent::SetCancelBubble(bool aCancelBubble)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isChar; */
NS_IMETHODIMP nsDOMUIEvent::GetIsChar(bool *aIsChar)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] EventPtr AsEvent (); */
mozilla::dom::Event * nsDOMUIEvent::AsEvent()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMUIEvent_h__ */
