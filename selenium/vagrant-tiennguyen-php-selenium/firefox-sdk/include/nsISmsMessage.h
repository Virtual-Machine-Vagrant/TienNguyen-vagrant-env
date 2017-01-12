/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISmsMessage.idl
 */

#ifndef __gen_nsISmsMessage_h__
#define __gen_nsISmsMessage_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISmsMessage */
#define NS_ISMSMESSAGE_IID_STR "d7670dfa-8853-11e5-8e3e-43cd171289cc"

#define NS_ISMSMESSAGE_IID \
  {0xd7670dfa, 0x8853, 0x11e5, \
    { 0x8e, 0x3e, 0x43, 0xcd, 0x17, 0x12, 0x89, 0xcc }}

class NS_NO_VTABLE nsISmsMessage : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISMSMESSAGE_IID)

  /* readonly attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute long id; */
  NS_IMETHOD GetId(int32_t *aId) = 0;

  /* readonly attribute unsigned long long threadId; */
  NS_IMETHOD GetThreadId(uint64_t *aThreadId) = 0;

  /* readonly attribute DOMString iccId; */
  NS_IMETHOD GetIccId(nsAString & aIccId) = 0;

  /* readonly attribute DOMString delivery; */
  NS_IMETHOD GetDelivery(nsAString & aDelivery) = 0;

  /* readonly attribute DOMString deliveryStatus; */
  NS_IMETHOD GetDeliveryStatus(nsAString & aDeliveryStatus) = 0;

  /* readonly attribute DOMString sender; */
  NS_IMETHOD GetSender(nsAString & aSender) = 0;

  /* readonly attribute DOMString receiver; */
  NS_IMETHOD GetReceiver(nsAString & aReceiver) = 0;

  /* readonly attribute DOMString body; */
  NS_IMETHOD GetBody(nsAString & aBody) = 0;

  /* readonly attribute DOMString messageClass; */
  NS_IMETHOD GetMessageClass(nsAString & aMessageClass) = 0;

  /* readonly attribute DOMTimeStamp timestamp; */
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) = 0;

  /* readonly attribute DOMTimeStamp sentTimestamp; */
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) = 0;

  /* readonly attribute DOMTimeStamp deliveryTimestamp; */
  NS_IMETHOD GetDeliveryTimestamp(DOMTimeStamp *aDeliveryTimestamp) = 0;

  /* readonly attribute boolean read; */
  NS_IMETHOD GetRead(bool *aRead) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISmsMessage, NS_ISMSMESSAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISMSMESSAGE \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD GetId(int32_t *aId) override; \
  NS_IMETHOD GetThreadId(uint64_t *aThreadId) override; \
  NS_IMETHOD GetIccId(nsAString & aIccId) override; \
  NS_IMETHOD GetDelivery(nsAString & aDelivery) override; \
  NS_IMETHOD GetDeliveryStatus(nsAString & aDeliveryStatus) override; \
  NS_IMETHOD GetSender(nsAString & aSender) override; \
  NS_IMETHOD GetReceiver(nsAString & aReceiver) override; \
  NS_IMETHOD GetBody(nsAString & aBody) override; \
  NS_IMETHOD GetMessageClass(nsAString & aMessageClass) override; \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override; \
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) override; \
  NS_IMETHOD GetDeliveryTimestamp(DOMTimeStamp *aDeliveryTimestamp) override; \
  NS_IMETHOD GetRead(bool *aRead) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISMSMESSAGE \
  NS_METHOD GetType(nsAString & aType); \
  NS_METHOD GetId(int32_t *aId); \
  NS_METHOD GetThreadId(uint64_t *aThreadId); \
  NS_METHOD GetIccId(nsAString & aIccId); \
  NS_METHOD GetDelivery(nsAString & aDelivery); \
  NS_METHOD GetDeliveryStatus(nsAString & aDeliveryStatus); \
  NS_METHOD GetSender(nsAString & aSender); \
  NS_METHOD GetReceiver(nsAString & aReceiver); \
  NS_METHOD GetBody(nsAString & aBody); \
  NS_METHOD GetMessageClass(nsAString & aMessageClass); \
  NS_METHOD GetTimestamp(DOMTimeStamp *aTimestamp); \
  NS_METHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp); \
  NS_METHOD GetDeliveryTimestamp(DOMTimeStamp *aDeliveryTimestamp); \
  NS_METHOD GetRead(bool *aRead); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISMSMESSAGE(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetId(int32_t *aId) override { return _to GetId(aId); } \
  NS_IMETHOD GetThreadId(uint64_t *aThreadId) override { return _to GetThreadId(aThreadId); } \
  NS_IMETHOD GetIccId(nsAString & aIccId) override { return _to GetIccId(aIccId); } \
  NS_IMETHOD GetDelivery(nsAString & aDelivery) override { return _to GetDelivery(aDelivery); } \
  NS_IMETHOD GetDeliveryStatus(nsAString & aDeliveryStatus) override { return _to GetDeliveryStatus(aDeliveryStatus); } \
  NS_IMETHOD GetSender(nsAString & aSender) override { return _to GetSender(aSender); } \
  NS_IMETHOD GetReceiver(nsAString & aReceiver) override { return _to GetReceiver(aReceiver); } \
  NS_IMETHOD GetBody(nsAString & aBody) override { return _to GetBody(aBody); } \
  NS_IMETHOD GetMessageClass(nsAString & aMessageClass) override { return _to GetMessageClass(aMessageClass); } \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override { return _to GetTimestamp(aTimestamp); } \
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) override { return _to GetSentTimestamp(aSentTimestamp); } \
  NS_IMETHOD GetDeliveryTimestamp(DOMTimeStamp *aDeliveryTimestamp) override { return _to GetDeliveryTimestamp(aDeliveryTimestamp); } \
  NS_IMETHOD GetRead(bool *aRead) override { return _to GetRead(aRead); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISMSMESSAGE(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetId(int32_t *aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD GetThreadId(uint64_t *aThreadId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThreadId(aThreadId); } \
  NS_IMETHOD GetIccId(nsAString & aIccId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIccId(aIccId); } \
  NS_IMETHOD GetDelivery(nsAString & aDelivery) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDelivery(aDelivery); } \
  NS_IMETHOD GetDeliveryStatus(nsAString & aDeliveryStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDeliveryStatus(aDeliveryStatus); } \
  NS_IMETHOD GetSender(nsAString & aSender) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSender(aSender); } \
  NS_IMETHOD GetReceiver(nsAString & aReceiver) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReceiver(aReceiver); } \
  NS_IMETHOD GetBody(nsAString & aBody) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBody(aBody); } \
  NS_IMETHOD GetMessageClass(nsAString & aMessageClass) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessageClass(aMessageClass); } \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimestamp(aTimestamp); } \
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSentTimestamp(aSentTimestamp); } \
  NS_IMETHOD GetDeliveryTimestamp(DOMTimeStamp *aDeliveryTimestamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDeliveryTimestamp(aDeliveryTimestamp); } \
  NS_IMETHOD GetRead(bool *aRead) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRead(aRead); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSmsMessage : public nsISmsMessage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISMSMESSAGE

  nsSmsMessage();

private:
  ~nsSmsMessage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSmsMessage, nsISmsMessage)

nsSmsMessage::nsSmsMessage()
{
  /* member initializers and constructor code */
}

nsSmsMessage::~nsSmsMessage()
{
  /* destructor code */
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsSmsMessage::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long id; */
NS_IMETHODIMP nsSmsMessage::GetId(int32_t *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long threadId; */
NS_IMETHODIMP nsSmsMessage::GetThreadId(uint64_t *aThreadId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString iccId; */
NS_IMETHODIMP nsSmsMessage::GetIccId(nsAString & aIccId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString delivery; */
NS_IMETHODIMP nsSmsMessage::GetDelivery(nsAString & aDelivery)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString deliveryStatus; */
NS_IMETHODIMP nsSmsMessage::GetDeliveryStatus(nsAString & aDeliveryStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString sender; */
NS_IMETHODIMP nsSmsMessage::GetSender(nsAString & aSender)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString receiver; */
NS_IMETHODIMP nsSmsMessage::GetReceiver(nsAString & aReceiver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString body; */
NS_IMETHODIMP nsSmsMessage::GetBody(nsAString & aBody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString messageClass; */
NS_IMETHODIMP nsSmsMessage::GetMessageClass(nsAString & aMessageClass)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp timestamp; */
NS_IMETHODIMP nsSmsMessage::GetTimestamp(DOMTimeStamp *aTimestamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp sentTimestamp; */
NS_IMETHODIMP nsSmsMessage::GetSentTimestamp(DOMTimeStamp *aSentTimestamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp deliveryTimestamp; */
NS_IMETHODIMP nsSmsMessage::GetDeliveryTimestamp(DOMTimeStamp *aDeliveryTimestamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean read; */
NS_IMETHODIMP nsSmsMessage::GetRead(bool *aRead)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISmsMessage_h__ */
