/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIMmsMessage.idl
 */

#ifndef __gen_nsIMmsMessage_h__
#define __gen_nsIMmsMessage_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMBlob; /* forward declaration */


/* starting interface:    nsIMmsMessage */
#define NS_IMMSMESSAGE_IID_STR "cd2ff09a-8853-11e5-ac49-0f655992cef6"

#define NS_IMMSMESSAGE_IID \
  {0xcd2ff09a, 0x8853, 0x11e5, \
    { 0xac, 0x49, 0x0f, 0x65, 0x59, 0x92, 0xce, 0xf6 }}

class NS_NO_VTABLE nsIMmsMessage : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMMSMESSAGE_IID)

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

  /* [implicit_jscontext] readonly attribute jsval deliveryInfo; */
  NS_IMETHOD GetDeliveryInfo(JSContext* cx, JS::MutableHandleValue aDeliveryInfo) = 0;

  /* readonly attribute DOMString sender; */
  NS_IMETHOD GetSender(nsAString & aSender) = 0;

  /* [implicit_jscontext] readonly attribute jsval receivers; */
  NS_IMETHOD GetReceivers(JSContext* cx, JS::MutableHandleValue aReceivers) = 0;

  /* readonly attribute DOMTimeStamp timestamp; */
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) = 0;

  /* readonly attribute DOMTimeStamp sentTimestamp; */
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) = 0;

  /* readonly attribute boolean read; */
  NS_IMETHOD GetRead(bool *aRead) = 0;

  /* readonly attribute DOMString subject; */
  NS_IMETHOD GetSubject(nsAString & aSubject) = 0;

  /* readonly attribute DOMString smil; */
  NS_IMETHOD GetSmil(nsAString & aSmil) = 0;

  /* [implicit_jscontext] readonly attribute jsval attachments; */
  NS_IMETHOD GetAttachments(JSContext* cx, JS::MutableHandleValue aAttachments) = 0;

  /* readonly attribute DOMTimeStamp expiryDate; */
  NS_IMETHOD GetExpiryDate(DOMTimeStamp *aExpiryDate) = 0;

  /* readonly attribute boolean readReportRequested; */
  NS_IMETHOD GetReadReportRequested(bool *aReadReportRequested) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMmsMessage, NS_IMMSMESSAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMMSMESSAGE \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD GetId(int32_t *aId) override; \
  NS_IMETHOD GetThreadId(uint64_t *aThreadId) override; \
  NS_IMETHOD GetIccId(nsAString & aIccId) override; \
  NS_IMETHOD GetDelivery(nsAString & aDelivery) override; \
  NS_IMETHOD GetDeliveryInfo(JSContext* cx, JS::MutableHandleValue aDeliveryInfo) override; \
  NS_IMETHOD GetSender(nsAString & aSender) override; \
  NS_IMETHOD GetReceivers(JSContext* cx, JS::MutableHandleValue aReceivers) override; \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override; \
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) override; \
  NS_IMETHOD GetRead(bool *aRead) override; \
  NS_IMETHOD GetSubject(nsAString & aSubject) override; \
  NS_IMETHOD GetSmil(nsAString & aSmil) override; \
  NS_IMETHOD GetAttachments(JSContext* cx, JS::MutableHandleValue aAttachments) override; \
  NS_IMETHOD GetExpiryDate(DOMTimeStamp *aExpiryDate) override; \
  NS_IMETHOD GetReadReportRequested(bool *aReadReportRequested) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIMMSMESSAGE \
  NS_METHOD GetType(nsAString & aType); \
  NS_METHOD GetId(int32_t *aId); \
  NS_METHOD GetThreadId(uint64_t *aThreadId); \
  NS_METHOD GetIccId(nsAString & aIccId); \
  NS_METHOD GetDelivery(nsAString & aDelivery); \
  NS_METHOD GetDeliveryInfo(JSContext* cx, JS::MutableHandleValue aDeliveryInfo); \
  NS_METHOD GetSender(nsAString & aSender); \
  NS_METHOD GetReceivers(JSContext* cx, JS::MutableHandleValue aReceivers); \
  NS_METHOD GetTimestamp(DOMTimeStamp *aTimestamp); \
  NS_METHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp); \
  NS_METHOD GetRead(bool *aRead); \
  NS_METHOD GetSubject(nsAString & aSubject); \
  NS_METHOD GetSmil(nsAString & aSmil); \
  NS_METHOD GetAttachments(JSContext* cx, JS::MutableHandleValue aAttachments); \
  NS_METHOD GetExpiryDate(DOMTimeStamp *aExpiryDate); \
  NS_METHOD GetReadReportRequested(bool *aReadReportRequested); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMMSMESSAGE(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetId(int32_t *aId) override { return _to GetId(aId); } \
  NS_IMETHOD GetThreadId(uint64_t *aThreadId) override { return _to GetThreadId(aThreadId); } \
  NS_IMETHOD GetIccId(nsAString & aIccId) override { return _to GetIccId(aIccId); } \
  NS_IMETHOD GetDelivery(nsAString & aDelivery) override { return _to GetDelivery(aDelivery); } \
  NS_IMETHOD GetDeliveryInfo(JSContext* cx, JS::MutableHandleValue aDeliveryInfo) override { return _to GetDeliveryInfo(cx, aDeliveryInfo); } \
  NS_IMETHOD GetSender(nsAString & aSender) override { return _to GetSender(aSender); } \
  NS_IMETHOD GetReceivers(JSContext* cx, JS::MutableHandleValue aReceivers) override { return _to GetReceivers(cx, aReceivers); } \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override { return _to GetTimestamp(aTimestamp); } \
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) override { return _to GetSentTimestamp(aSentTimestamp); } \
  NS_IMETHOD GetRead(bool *aRead) override { return _to GetRead(aRead); } \
  NS_IMETHOD GetSubject(nsAString & aSubject) override { return _to GetSubject(aSubject); } \
  NS_IMETHOD GetSmil(nsAString & aSmil) override { return _to GetSmil(aSmil); } \
  NS_IMETHOD GetAttachments(JSContext* cx, JS::MutableHandleValue aAttachments) override { return _to GetAttachments(cx, aAttachments); } \
  NS_IMETHOD GetExpiryDate(DOMTimeStamp *aExpiryDate) override { return _to GetExpiryDate(aExpiryDate); } \
  NS_IMETHOD GetReadReportRequested(bool *aReadReportRequested) override { return _to GetReadReportRequested(aReadReportRequested); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMMSMESSAGE(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetId(int32_t *aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD GetThreadId(uint64_t *aThreadId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThreadId(aThreadId); } \
  NS_IMETHOD GetIccId(nsAString & aIccId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIccId(aIccId); } \
  NS_IMETHOD GetDelivery(nsAString & aDelivery) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDelivery(aDelivery); } \
  NS_IMETHOD GetDeliveryInfo(JSContext* cx, JS::MutableHandleValue aDeliveryInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDeliveryInfo(cx, aDeliveryInfo); } \
  NS_IMETHOD GetSender(nsAString & aSender) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSender(aSender); } \
  NS_IMETHOD GetReceivers(JSContext* cx, JS::MutableHandleValue aReceivers) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReceivers(cx, aReceivers); } \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimestamp(aTimestamp); } \
  NS_IMETHOD GetSentTimestamp(DOMTimeStamp *aSentTimestamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSentTimestamp(aSentTimestamp); } \
  NS_IMETHOD GetRead(bool *aRead) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRead(aRead); } \
  NS_IMETHOD GetSubject(nsAString & aSubject) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubject(aSubject); } \
  NS_IMETHOD GetSmil(nsAString & aSmil) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSmil(aSmil); } \
  NS_IMETHOD GetAttachments(JSContext* cx, JS::MutableHandleValue aAttachments) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAttachments(cx, aAttachments); } \
  NS_IMETHOD GetExpiryDate(DOMTimeStamp *aExpiryDate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpiryDate(aExpiryDate); } \
  NS_IMETHOD GetReadReportRequested(bool *aReadReportRequested) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadReportRequested(aReadReportRequested); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMmsMessage : public nsIMmsMessage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMMSMESSAGE

  nsMmsMessage();

private:
  ~nsMmsMessage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMmsMessage, nsIMmsMessage)

nsMmsMessage::nsMmsMessage()
{
  /* member initializers and constructor code */
}

nsMmsMessage::~nsMmsMessage()
{
  /* destructor code */
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsMmsMessage::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long id; */
NS_IMETHODIMP nsMmsMessage::GetId(int32_t *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long threadId; */
NS_IMETHODIMP nsMmsMessage::GetThreadId(uint64_t *aThreadId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString iccId; */
NS_IMETHODIMP nsMmsMessage::GetIccId(nsAString & aIccId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString delivery; */
NS_IMETHODIMP nsMmsMessage::GetDelivery(nsAString & aDelivery)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval deliveryInfo; */
NS_IMETHODIMP nsMmsMessage::GetDeliveryInfo(JSContext* cx, JS::MutableHandleValue aDeliveryInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString sender; */
NS_IMETHODIMP nsMmsMessage::GetSender(nsAString & aSender)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval receivers; */
NS_IMETHODIMP nsMmsMessage::GetReceivers(JSContext* cx, JS::MutableHandleValue aReceivers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp timestamp; */
NS_IMETHODIMP nsMmsMessage::GetTimestamp(DOMTimeStamp *aTimestamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp sentTimestamp; */
NS_IMETHODIMP nsMmsMessage::GetSentTimestamp(DOMTimeStamp *aSentTimestamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean read; */
NS_IMETHODIMP nsMmsMessage::GetRead(bool *aRead)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString subject; */
NS_IMETHODIMP nsMmsMessage::GetSubject(nsAString & aSubject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString smil; */
NS_IMETHODIMP nsMmsMessage::GetSmil(nsAString & aSmil)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval attachments; */
NS_IMETHODIMP nsMmsMessage::GetAttachments(JSContext* cx, JS::MutableHandleValue aAttachments)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp expiryDate; */
NS_IMETHODIMP nsMmsMessage::GetExpiryDate(DOMTimeStamp *aExpiryDate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean readReportRequested; */
NS_IMETHODIMP nsMmsMessage::GetReadReportRequested(bool *aReadReportRequested)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMmsMessage_h__ */
