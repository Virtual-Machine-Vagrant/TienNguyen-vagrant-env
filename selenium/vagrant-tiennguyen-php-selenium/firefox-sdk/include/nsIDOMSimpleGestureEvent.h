/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMSimpleGestureEvent.idl
 */

#ifndef __gen_nsIDOMSimpleGestureEvent_h__
#define __gen_nsIDOMSimpleGestureEvent_h__


#ifndef __gen_nsIDOMMouseEvent_h__
#include "nsIDOMMouseEvent.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMSimpleGestureEvent */
#define NS_IDOMSIMPLEGESTUREEVENT_IID_STR "c397f9a2-4266-4291-b282-3efd6d7afc57"

#define NS_IDOMSIMPLEGESTUREEVENT_IID \
  {0xc397f9a2, 0x4266, 0x4291, \
    { 0xb2, 0x82, 0x3e, 0xfd, 0x6d, 0x7a, 0xfc, 0x57 }}

class NS_NO_VTABLE nsIDOMSimpleGestureEvent : public nsIDOMMouseEvent {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSIMPLEGESTUREEVENT_IID)

  enum {
    DIRECTION_UP = 1U,
    DIRECTION_DOWN = 2U,
    DIRECTION_LEFT = 4U,
    DIRECTION_RIGHT = 8U,
    ROTATION_COUNTERCLOCKWISE = 1U,
    ROTATION_CLOCKWISE = 2U
  };

  /* attribute unsigned long allowedDirections; */
  NS_IMETHOD GetAllowedDirections(uint32_t *aAllowedDirections) = 0;
  NS_IMETHOD SetAllowedDirections(uint32_t aAllowedDirections) = 0;

  /* readonly attribute unsigned long direction; */
  NS_IMETHOD GetDirection(uint32_t *aDirection) = 0;

  /* readonly attribute double delta; */
  NS_IMETHOD GetDelta(double *aDelta) = 0;

  /* readonly attribute unsigned long clickCount; */
  NS_IMETHOD GetClickCount(uint32_t *aClickCount) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSimpleGestureEvent, NS_IDOMSIMPLEGESTUREEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSIMPLEGESTUREEVENT \
  NS_IMETHOD GetAllowedDirections(uint32_t *aAllowedDirections) override; \
  NS_IMETHOD SetAllowedDirections(uint32_t aAllowedDirections) override; \
  NS_IMETHOD GetDirection(uint32_t *aDirection) override; \
  NS_IMETHOD GetDelta(double *aDelta) override; \
  NS_IMETHOD GetClickCount(uint32_t *aClickCount) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMSIMPLEGESTUREEVENT \
  NS_METHOD GetAllowedDirections(uint32_t *aAllowedDirections); \
  NS_METHOD SetAllowedDirections(uint32_t aAllowedDirections); \
  NS_METHOD GetDirection(uint32_t *aDirection); \
  NS_METHOD GetDelta(double *aDelta); \
  NS_METHOD GetClickCount(uint32_t *aClickCount); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSIMPLEGESTUREEVENT(_to) \
  NS_IMETHOD GetAllowedDirections(uint32_t *aAllowedDirections) override { return _to GetAllowedDirections(aAllowedDirections); } \
  NS_IMETHOD SetAllowedDirections(uint32_t aAllowedDirections) override { return _to SetAllowedDirections(aAllowedDirections); } \
  NS_IMETHOD GetDirection(uint32_t *aDirection) override { return _to GetDirection(aDirection); } \
  NS_IMETHOD GetDelta(double *aDelta) override { return _to GetDelta(aDelta); } \
  NS_IMETHOD GetClickCount(uint32_t *aClickCount) override { return _to GetClickCount(aClickCount); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSIMPLEGESTUREEVENT(_to) \
  NS_IMETHOD GetAllowedDirections(uint32_t *aAllowedDirections) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowedDirections(aAllowedDirections); } \
  NS_IMETHOD SetAllowedDirections(uint32_t aAllowedDirections) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowedDirections(aAllowedDirections); } \
  NS_IMETHOD GetDirection(uint32_t *aDirection) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirection(aDirection); } \
  NS_IMETHOD GetDelta(double *aDelta) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDelta(aDelta); } \
  NS_IMETHOD GetClickCount(uint32_t *aClickCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClickCount(aClickCount); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSimpleGestureEvent : public nsIDOMSimpleGestureEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSIMPLEGESTUREEVENT

  nsDOMSimpleGestureEvent();

private:
  ~nsDOMSimpleGestureEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMSimpleGestureEvent, nsIDOMSimpleGestureEvent)

nsDOMSimpleGestureEvent::nsDOMSimpleGestureEvent()
{
  /* member initializers and constructor code */
}

nsDOMSimpleGestureEvent::~nsDOMSimpleGestureEvent()
{
  /* destructor code */
}

/* attribute unsigned long allowedDirections; */
NS_IMETHODIMP nsDOMSimpleGestureEvent::GetAllowedDirections(uint32_t *aAllowedDirections)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMSimpleGestureEvent::SetAllowedDirections(uint32_t aAllowedDirections)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long direction; */
NS_IMETHODIMP nsDOMSimpleGestureEvent::GetDirection(uint32_t *aDirection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double delta; */
NS_IMETHODIMP nsDOMSimpleGestureEvent::GetDelta(double *aDelta)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long clickCount; */
NS_IMETHODIMP nsDOMSimpleGestureEvent::GetClickCount(uint32_t *aClickCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSimpleGestureEvent_h__ */
