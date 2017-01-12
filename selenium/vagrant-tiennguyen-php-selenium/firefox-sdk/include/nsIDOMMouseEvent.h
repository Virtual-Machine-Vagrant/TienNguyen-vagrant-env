/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMMouseEvent.idl
 */

#ifndef __gen_nsIDOMMouseEvent_h__
#define __gen_nsIDOMMouseEvent_h__


#ifndef __gen_nsIDOMUIEvent_h__
#include "nsIDOMUIEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMouseEvent */
#define NS_IDOMMOUSEEVENT_IID_STR "5bdab8d8-7933-4c5c-b6d1-ab34481237f7"

#define NS_IDOMMOUSEEVENT_IID \
  {0x5bdab8d8, 0x7933, 0x4c5c, \
    { 0xb6, 0xd1, 0xab, 0x34, 0x48, 0x12, 0x37, 0xf7 }}

class NS_NO_VTABLE nsIDOMMouseEvent : public nsIDOMUIEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOUSEEVENT_IID)

  /* readonly attribute long screenX; */
  NS_IMETHOD GetScreenX(int32_t *aScreenX) = 0;

  /* readonly attribute long screenY; */
  NS_IMETHOD GetScreenY(int32_t *aScreenY) = 0;

  /* readonly attribute long mozMovementX; */
  NS_IMETHOD GetMozMovementX(int32_t *aMozMovementX) = 0;

  /* readonly attribute long mozMovementY; */
  NS_IMETHOD GetMozMovementY(int32_t *aMozMovementY) = 0;

  /* readonly attribute long clientX; */
  NS_IMETHOD GetClientX(int32_t *aClientX) = 0;

  /* readonly attribute long clientY; */
  NS_IMETHOD GetClientY(int32_t *aClientY) = 0;

  /* readonly attribute boolean ctrlKey; */
  NS_IMETHOD GetCtrlKey(bool *aCtrlKey) = 0;

  /* readonly attribute boolean shiftKey; */
  NS_IMETHOD GetShiftKey(bool *aShiftKey) = 0;

  /* readonly attribute boolean altKey; */
  NS_IMETHOD GetAltKey(bool *aAltKey) = 0;

  /* readonly attribute boolean metaKey; */
  NS_IMETHOD GetMetaKey(bool *aMetaKey) = 0;

  /* readonly attribute short button; */
  NS_IMETHOD GetButton(int16_t *aButton) = 0;

  /* readonly attribute unsigned short buttons; */
  NS_IMETHOD GetButtons(uint16_t *aButtons) = 0;

  /* readonly attribute nsIDOMEventTarget relatedTarget; */
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) = 0;

  /* void initMouseEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in mozIDOMWindow viewArg, in long detailArg, in long screenXArg, in long screenYArg, in long clientXArg, in long clientYArg, in boolean ctrlKeyArg, in boolean altKeyArg, in boolean shiftKeyArg, in boolean metaKeyArg, in unsigned short buttonArg, in nsIDOMEventTarget relatedTargetArg); */
  NS_IMETHOD InitMouseEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg, int32_t screenXArg, int32_t screenYArg, int32_t clientXArg, int32_t clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, uint16_t buttonArg, nsIDOMEventTarget *relatedTargetArg) = 0;

  /* readonly attribute float mozPressure; */
  NS_IMETHOD GetMozPressure(float *aMozPressure) = 0;

  enum {
    MOZ_SOURCE_UNKNOWN = 0U,
    MOZ_SOURCE_MOUSE = 1U,
    MOZ_SOURCE_PEN = 2U,
    MOZ_SOURCE_ERASER = 3U,
    MOZ_SOURCE_CURSOR = 4U,
    MOZ_SOURCE_TOUCH = 5U,
    MOZ_SOURCE_KEYBOARD = 6U
  };

  /* readonly attribute unsigned short mozInputSource; */
  NS_IMETHOD GetMozInputSource(uint16_t *aMozInputSource) = 0;

  /* bool getModifierState (in DOMString keyArg); */
  NS_IMETHOD GetModifierState(const nsAString & keyArg, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMouseEvent, NS_IDOMMOUSEEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOUSEEVENT \
  NS_IMETHOD GetScreenX(int32_t *aScreenX) override; \
  NS_IMETHOD GetScreenY(int32_t *aScreenY) override; \
  NS_IMETHOD GetMozMovementX(int32_t *aMozMovementX) override; \
  NS_IMETHOD GetMozMovementY(int32_t *aMozMovementY) override; \
  NS_IMETHOD GetClientX(int32_t *aClientX) override; \
  NS_IMETHOD GetClientY(int32_t *aClientY) override; \
  NS_IMETHOD GetCtrlKey(bool *aCtrlKey) override; \
  NS_IMETHOD GetShiftKey(bool *aShiftKey) override; \
  NS_IMETHOD GetAltKey(bool *aAltKey) override; \
  NS_IMETHOD GetMetaKey(bool *aMetaKey) override; \
  NS_IMETHOD GetButton(int16_t *aButton) override; \
  NS_IMETHOD GetButtons(uint16_t *aButtons) override; \
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) override; \
  NS_IMETHOD InitMouseEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg, int32_t screenXArg, int32_t screenYArg, int32_t clientXArg, int32_t clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, uint16_t buttonArg, nsIDOMEventTarget *relatedTargetArg) override; \
  NS_IMETHOD GetMozPressure(float *aMozPressure) override; \
  NS_IMETHOD GetMozInputSource(uint16_t *aMozInputSource) override; \
  NS_IMETHOD GetModifierState(const nsAString & keyArg, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMMOUSEEVENT \
  NS_METHOD GetScreenX(int32_t *aScreenX); \
  NS_METHOD GetScreenY(int32_t *aScreenY); \
  NS_METHOD GetMozMovementX(int32_t *aMozMovementX); \
  NS_METHOD GetMozMovementY(int32_t *aMozMovementY); \
  NS_METHOD GetClientX(int32_t *aClientX); \
  NS_METHOD GetClientY(int32_t *aClientY); \
  NS_METHOD GetCtrlKey(bool *aCtrlKey); \
  NS_METHOD GetShiftKey(bool *aShiftKey); \
  NS_METHOD GetAltKey(bool *aAltKey); \
  NS_METHOD GetMetaKey(bool *aMetaKey); \
  NS_METHOD GetButton(int16_t *aButton); \
  NS_METHOD GetButtons(uint16_t *aButtons); \
  NS_METHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget); \
  NS_METHOD InitMouseEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg, int32_t screenXArg, int32_t screenYArg, int32_t clientXArg, int32_t clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, uint16_t buttonArg, nsIDOMEventTarget *relatedTargetArg); \
  NS_METHOD GetMozPressure(float *aMozPressure); \
  NS_METHOD GetMozInputSource(uint16_t *aMozInputSource); \
  NS_METHOD GetModifierState(const nsAString & keyArg, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOUSEEVENT(_to) \
  NS_IMETHOD GetScreenX(int32_t *aScreenX) override { return _to GetScreenX(aScreenX); } \
  NS_IMETHOD GetScreenY(int32_t *aScreenY) override { return _to GetScreenY(aScreenY); } \
  NS_IMETHOD GetMozMovementX(int32_t *aMozMovementX) override { return _to GetMozMovementX(aMozMovementX); } \
  NS_IMETHOD GetMozMovementY(int32_t *aMozMovementY) override { return _to GetMozMovementY(aMozMovementY); } \
  NS_IMETHOD GetClientX(int32_t *aClientX) override { return _to GetClientX(aClientX); } \
  NS_IMETHOD GetClientY(int32_t *aClientY) override { return _to GetClientY(aClientY); } \
  NS_IMETHOD GetCtrlKey(bool *aCtrlKey) override { return _to GetCtrlKey(aCtrlKey); } \
  NS_IMETHOD GetShiftKey(bool *aShiftKey) override { return _to GetShiftKey(aShiftKey); } \
  NS_IMETHOD GetAltKey(bool *aAltKey) override { return _to GetAltKey(aAltKey); } \
  NS_IMETHOD GetMetaKey(bool *aMetaKey) override { return _to GetMetaKey(aMetaKey); } \
  NS_IMETHOD GetButton(int16_t *aButton) override { return _to GetButton(aButton); } \
  NS_IMETHOD GetButtons(uint16_t *aButtons) override { return _to GetButtons(aButtons); } \
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) override { return _to GetRelatedTarget(aRelatedTarget); } \
  NS_IMETHOD InitMouseEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg, int32_t screenXArg, int32_t screenYArg, int32_t clientXArg, int32_t clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, uint16_t buttonArg, nsIDOMEventTarget *relatedTargetArg) override { return _to InitMouseEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg, screenXArg, screenYArg, clientXArg, clientYArg, ctrlKeyArg, altKeyArg, shiftKeyArg, metaKeyArg, buttonArg, relatedTargetArg); } \
  NS_IMETHOD GetMozPressure(float *aMozPressure) override { return _to GetMozPressure(aMozPressure); } \
  NS_IMETHOD GetMozInputSource(uint16_t *aMozInputSource) override { return _to GetMozInputSource(aMozInputSource); } \
  NS_IMETHOD GetModifierState(const nsAString & keyArg, bool *_retval) override { return _to GetModifierState(keyArg, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOUSEEVENT(_to) \
  NS_IMETHOD GetScreenX(int32_t *aScreenX) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScreenX(aScreenX); } \
  NS_IMETHOD GetScreenY(int32_t *aScreenY) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScreenY(aScreenY); } \
  NS_IMETHOD GetMozMovementX(int32_t *aMozMovementX) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozMovementX(aMozMovementX); } \
  NS_IMETHOD GetMozMovementY(int32_t *aMozMovementY) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozMovementY(aMozMovementY); } \
  NS_IMETHOD GetClientX(int32_t *aClientX) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientX(aClientX); } \
  NS_IMETHOD GetClientY(int32_t *aClientY) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClientY(aClientY); } \
  NS_IMETHOD GetCtrlKey(bool *aCtrlKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCtrlKey(aCtrlKey); } \
  NS_IMETHOD GetShiftKey(bool *aShiftKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShiftKey(aShiftKey); } \
  NS_IMETHOD GetAltKey(bool *aAltKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAltKey(aAltKey); } \
  NS_IMETHOD GetMetaKey(bool *aMetaKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMetaKey(aMetaKey); } \
  NS_IMETHOD GetButton(int16_t *aButton) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetButton(aButton); } \
  NS_IMETHOD GetButtons(uint16_t *aButtons) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetButtons(aButtons); } \
  NS_IMETHOD GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelatedTarget(aRelatedTarget); } \
  NS_IMETHOD InitMouseEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg, int32_t screenXArg, int32_t screenYArg, int32_t clientXArg, int32_t clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, uint16_t buttonArg, nsIDOMEventTarget *relatedTargetArg) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitMouseEvent(typeArg, canBubbleArg, cancelableArg, viewArg, detailArg, screenXArg, screenYArg, clientXArg, clientYArg, ctrlKeyArg, altKeyArg, shiftKeyArg, metaKeyArg, buttonArg, relatedTargetArg); } \
  NS_IMETHOD GetMozPressure(float *aMozPressure) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozPressure(aMozPressure); } \
  NS_IMETHOD GetMozInputSource(uint16_t *aMozInputSource) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozInputSource(aMozInputSource); } \
  NS_IMETHOD GetModifierState(const nsAString & keyArg, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetModifierState(keyArg, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMouseEvent : public nsIDOMMouseEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOUSEEVENT

  nsDOMMouseEvent();

private:
  ~nsDOMMouseEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMMouseEvent, nsIDOMMouseEvent)

nsDOMMouseEvent::nsDOMMouseEvent()
{
  /* member initializers and constructor code */
}

nsDOMMouseEvent::~nsDOMMouseEvent()
{
  /* destructor code */
}

/* readonly attribute long screenX; */
NS_IMETHODIMP nsDOMMouseEvent::GetScreenX(int32_t *aScreenX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long screenY; */
NS_IMETHODIMP nsDOMMouseEvent::GetScreenY(int32_t *aScreenY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long mozMovementX; */
NS_IMETHODIMP nsDOMMouseEvent::GetMozMovementX(int32_t *aMozMovementX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long mozMovementY; */
NS_IMETHODIMP nsDOMMouseEvent::GetMozMovementY(int32_t *aMozMovementY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long clientX; */
NS_IMETHODIMP nsDOMMouseEvent::GetClientX(int32_t *aClientX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long clientY; */
NS_IMETHODIMP nsDOMMouseEvent::GetClientY(int32_t *aClientY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean ctrlKey; */
NS_IMETHODIMP nsDOMMouseEvent::GetCtrlKey(bool *aCtrlKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean shiftKey; */
NS_IMETHODIMP nsDOMMouseEvent::GetShiftKey(bool *aShiftKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean altKey; */
NS_IMETHODIMP nsDOMMouseEvent::GetAltKey(bool *aAltKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean metaKey; */
NS_IMETHODIMP nsDOMMouseEvent::GetMetaKey(bool *aMetaKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute short button; */
NS_IMETHODIMP nsDOMMouseEvent::GetButton(int16_t *aButton)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short buttons; */
NS_IMETHODIMP nsDOMMouseEvent::GetButtons(uint16_t *aButtons)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMEventTarget relatedTarget; */
NS_IMETHODIMP nsDOMMouseEvent::GetRelatedTarget(nsIDOMEventTarget * *aRelatedTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initMouseEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in mozIDOMWindow viewArg, in long detailArg, in long screenXArg, in long screenYArg, in long clientXArg, in long clientYArg, in boolean ctrlKeyArg, in boolean altKeyArg, in boolean shiftKeyArg, in boolean metaKeyArg, in unsigned short buttonArg, in nsIDOMEventTarget relatedTargetArg); */
NS_IMETHODIMP nsDOMMouseEvent::InitMouseEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, mozIDOMWindow *viewArg, int32_t detailArg, int32_t screenXArg, int32_t screenYArg, int32_t clientXArg, int32_t clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, uint16_t buttonArg, nsIDOMEventTarget *relatedTargetArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float mozPressure; */
NS_IMETHODIMP nsDOMMouseEvent::GetMozPressure(float *aMozPressure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short mozInputSource; */
NS_IMETHODIMP nsDOMMouseEvent::GetMozInputSource(uint16_t *aMozInputSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool getModifierState (in DOMString keyArg); */
NS_IMETHODIMP nsDOMMouseEvent::GetModifierState(const nsAString & keyArg, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMouseEvent_h__ */
