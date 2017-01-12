/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMMutationEvent.idl
 */

#ifndef __gen_nsIDOMMutationEvent_h__
#define __gen_nsIDOMMutationEvent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMNode_h__
#include "nsIDOMNode.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMMutationEvent */
#define NS_IDOMMUTATIONEVENT_IID_STR "30c9997f-bc4c-4890-b890-febb6ae3051b"

#define NS_IDOMMUTATIONEVENT_IID \
  {0x30c9997f, 0xbc4c, 0x4890, \
    { 0xb8, 0x90, 0xfe, 0xbb, 0x6a, 0xe3, 0x05, 0x1b }}

class NS_NO_VTABLE nsIDOMMutationEvent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMUTATIONEVENT_IID)

  enum {
    MODIFICATION = 1U,
    ADDITION = 2U,
    REMOVAL = 3U
  };

  /* readonly attribute nsIDOMNode relatedNode; */
  NS_IMETHOD GetRelatedNode(nsIDOMNode * *aRelatedNode) = 0;

  /* readonly attribute DOMString prevValue; */
  NS_IMETHOD GetPrevValue(nsAString & aPrevValue) = 0;

  /* readonly attribute DOMString newValue; */
  NS_IMETHOD GetNewValue(nsAString & aNewValue) = 0;

  /* readonly attribute DOMString attrName; */
  NS_IMETHOD GetAttrName(nsAString & aAttrName) = 0;

  /* readonly attribute unsigned short attrChange; */
  NS_IMETHOD GetAttrChange(uint16_t *aAttrChange) = 0;

  /* void initMutationEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMNode relatedNodeArg, in DOMString prevValueArg, in DOMString newValueArg, in DOMString attrNameArg, in unsigned short attrChangeArg); */
  NS_IMETHOD InitMutationEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMNode *relatedNodeArg, const nsAString & prevValueArg, const nsAString & newValueArg, const nsAString & attrNameArg, uint16_t attrChangeArg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMutationEvent, NS_IDOMMUTATIONEVENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMUTATIONEVENT \
  NS_IMETHOD GetRelatedNode(nsIDOMNode * *aRelatedNode) override; \
  NS_IMETHOD GetPrevValue(nsAString & aPrevValue) override; \
  NS_IMETHOD GetNewValue(nsAString & aNewValue) override; \
  NS_IMETHOD GetAttrName(nsAString & aAttrName) override; \
  NS_IMETHOD GetAttrChange(uint16_t *aAttrChange) override; \
  NS_IMETHOD InitMutationEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMNode *relatedNodeArg, const nsAString & prevValueArg, const nsAString & newValueArg, const nsAString & attrNameArg, uint16_t attrChangeArg) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMMUTATIONEVENT \
  NS_METHOD GetRelatedNode(nsIDOMNode * *aRelatedNode); \
  NS_METHOD GetPrevValue(nsAString & aPrevValue); \
  NS_METHOD GetNewValue(nsAString & aNewValue); \
  NS_METHOD GetAttrName(nsAString & aAttrName); \
  NS_METHOD GetAttrChange(uint16_t *aAttrChange); \
  NS_METHOD InitMutationEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMNode *relatedNodeArg, const nsAString & prevValueArg, const nsAString & newValueArg, const nsAString & attrNameArg, uint16_t attrChangeArg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMUTATIONEVENT(_to) \
  NS_IMETHOD GetRelatedNode(nsIDOMNode * *aRelatedNode) override { return _to GetRelatedNode(aRelatedNode); } \
  NS_IMETHOD GetPrevValue(nsAString & aPrevValue) override { return _to GetPrevValue(aPrevValue); } \
  NS_IMETHOD GetNewValue(nsAString & aNewValue) override { return _to GetNewValue(aNewValue); } \
  NS_IMETHOD GetAttrName(nsAString & aAttrName) override { return _to GetAttrName(aAttrName); } \
  NS_IMETHOD GetAttrChange(uint16_t *aAttrChange) override { return _to GetAttrChange(aAttrChange); } \
  NS_IMETHOD InitMutationEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMNode *relatedNodeArg, const nsAString & prevValueArg, const nsAString & newValueArg, const nsAString & attrNameArg, uint16_t attrChangeArg) override { return _to InitMutationEvent(typeArg, canBubbleArg, cancelableArg, relatedNodeArg, prevValueArg, newValueArg, attrNameArg, attrChangeArg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMUTATIONEVENT(_to) \
  NS_IMETHOD GetRelatedNode(nsIDOMNode * *aRelatedNode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelatedNode(aRelatedNode); } \
  NS_IMETHOD GetPrevValue(nsAString & aPrevValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrevValue(aPrevValue); } \
  NS_IMETHOD GetNewValue(nsAString & aNewValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewValue(aNewValue); } \
  NS_IMETHOD GetAttrName(nsAString & aAttrName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttrName(aAttrName); } \
  NS_IMETHOD GetAttrChange(uint16_t *aAttrChange) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttrChange(aAttrChange); } \
  NS_IMETHOD InitMutationEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMNode *relatedNodeArg, const nsAString & prevValueArg, const nsAString & newValueArg, const nsAString & attrNameArg, uint16_t attrChangeArg) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitMutationEvent(typeArg, canBubbleArg, cancelableArg, relatedNodeArg, prevValueArg, newValueArg, attrNameArg, attrChangeArg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMutationEvent : public nsIDOMMutationEvent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMUTATIONEVENT

  nsDOMMutationEvent();

private:
  ~nsDOMMutationEvent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMMutationEvent, nsIDOMMutationEvent)

nsDOMMutationEvent::nsDOMMutationEvent()
{
  /* member initializers and constructor code */
}

nsDOMMutationEvent::~nsDOMMutationEvent()
{
  /* destructor code */
}

/* readonly attribute nsIDOMNode relatedNode; */
NS_IMETHODIMP nsDOMMutationEvent::GetRelatedNode(nsIDOMNode * *aRelatedNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString prevValue; */
NS_IMETHODIMP nsDOMMutationEvent::GetPrevValue(nsAString & aPrevValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString newValue; */
NS_IMETHODIMP nsDOMMutationEvent::GetNewValue(nsAString & aNewValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString attrName; */
NS_IMETHODIMP nsDOMMutationEvent::GetAttrName(nsAString & aAttrName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short attrChange; */
NS_IMETHODIMP nsDOMMutationEvent::GetAttrChange(uint16_t *aAttrChange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initMutationEvent (in DOMString typeArg, in boolean canBubbleArg, in boolean cancelableArg, in nsIDOMNode relatedNodeArg, in DOMString prevValueArg, in DOMString newValueArg, in DOMString attrNameArg, in unsigned short attrChangeArg); */
NS_IMETHODIMP nsDOMMutationEvent::InitMutationEvent(const nsAString & typeArg, bool canBubbleArg, bool cancelableArg, nsIDOMNode *relatedNodeArg, const nsAString & prevValueArg, const nsAString & newValueArg, const nsAString & attrNameArg, uint16_t attrChangeArg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMMutationEvent_h__ */
