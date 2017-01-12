/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIMobileMessageService.idl
 */

#ifndef __gen_nsIMobileMessageService_h__
#define __gen_nsIMobileMessageService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDeletedMessageInfo; /* forward declaration */

class nsISmsMessage; /* forward declaration */

class nsIMmsMessage; /* forward declaration */

class nsIMobileMessageThread; /* forward declaration */

#define MOBILE_MESSAGE_SERVICE_CID { 0x829c1dd6, 0x0466, 0x4591, { 0x83, 0x6f, 0xb8, 0xf6, 0xfd, 0x1f, 0x7b, 0xa5 } }
#define MOBILE_MESSAGE_SERVICE_CONTRACTID "@mozilla.org/mobilemessage/mobilemessageservice;1"

/* starting interface:    nsIMobileMessageService */
#define NS_IMOBILEMESSAGESERVICE_IID_STR "15267554-8854-11e5-8947-8f2150f4eabc"

#define NS_IMOBILEMESSAGESERVICE_IID \
  {0x15267554, 0x8854, 0x11e5, \
    { 0x89, 0x47, 0x8f, 0x21, 0x50, 0xf4, 0xea, 0xbc }}

class NS_NO_VTABLE nsIMobileMessageService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMOBILEMESSAGESERVICE_IID)

  /* [implicit_jscontext] nsISmsMessage createSmsMessage (in long id, in unsigned long long threadId, in DOMString iccId, in DOMString delivery, in DOMString deliveryStatus, in DOMString sender, in DOMString receiver, in DOMString body, in DOMString messageClass, in unsigned long long timestamp, in unsigned long long sentTimestamp, in unsigned long long deliveryTimestamp, in bool read); */
  NS_IMETHOD CreateSmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, const nsAString & deliveryStatus, const nsAString & sender, const nsAString & receiver, const nsAString & body, const nsAString & messageClass, uint64_t timestamp, uint64_t sentTimestamp, uint64_t deliveryTimestamp, bool read, JSContext* cx, nsISmsMessage * *_retval) = 0;

  /* [implicit_jscontext] nsIMmsMessage createMmsMessage (in long id, in unsigned long long threadId, in DOMString iccId, in DOMString delivery, in jsval deliveryInfo, in DOMString sender, in jsval receivers, in unsigned long long timestamp, in unsigned long long sentTimestamp, in boolean read, in DOMString subject, in DOMString smil, in jsval attachments, in unsigned long long expiryDate, in boolean readReportRequested); */
  NS_IMETHOD CreateMmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, JS::HandleValue deliveryInfo, const nsAString & sender, JS::HandleValue receivers, uint64_t timestamp, uint64_t sentTimestamp, bool read, const nsAString & subject, const nsAString & smil, JS::HandleValue attachments, uint64_t expiryDate, bool readReportRequested, JSContext* cx, nsIMmsMessage * *_retval) = 0;

  /* [implicit_jscontext] nsIMobileMessageThread createThread (in unsigned long long id, in jsval participants, in unsigned long long timestamp, in DOMString lastMessageSubject, in DOMString body, in unsigned long long unreadCount, in DOMString aLastMessageType); */
  NS_IMETHOD CreateThread(uint64_t id, JS::HandleValue participants, uint64_t timestamp, const nsAString & lastMessageSubject, const nsAString & body, uint64_t unreadCount, const nsAString & aLastMessageType, JSContext* cx, nsIMobileMessageThread * *_retval) = 0;

  /* nsIDeletedMessageInfo createDeletedMessageInfo ([array, size_is (msgCount)] in long messageIds, in uint32_t msgCount, [array, size_is (threadCount)] in unsigned long long threadIds, in uint32_t threadCount); */
  NS_IMETHOD CreateDeletedMessageInfo(int32_t *messageIds, uint32_t msgCount, uint64_t *threadIds, uint32_t threadCount, nsIDeletedMessageInfo * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMobileMessageService, NS_IMOBILEMESSAGESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMOBILEMESSAGESERVICE \
  NS_IMETHOD CreateSmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, const nsAString & deliveryStatus, const nsAString & sender, const nsAString & receiver, const nsAString & body, const nsAString & messageClass, uint64_t timestamp, uint64_t sentTimestamp, uint64_t deliveryTimestamp, bool read, JSContext* cx, nsISmsMessage * *_retval) override; \
  NS_IMETHOD CreateMmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, JS::HandleValue deliveryInfo, const nsAString & sender, JS::HandleValue receivers, uint64_t timestamp, uint64_t sentTimestamp, bool read, const nsAString & subject, const nsAString & smil, JS::HandleValue attachments, uint64_t expiryDate, bool readReportRequested, JSContext* cx, nsIMmsMessage * *_retval) override; \
  NS_IMETHOD CreateThread(uint64_t id, JS::HandleValue participants, uint64_t timestamp, const nsAString & lastMessageSubject, const nsAString & body, uint64_t unreadCount, const nsAString & aLastMessageType, JSContext* cx, nsIMobileMessageThread * *_retval) override; \
  NS_IMETHOD CreateDeletedMessageInfo(int32_t *messageIds, uint32_t msgCount, uint64_t *threadIds, uint32_t threadCount, nsIDeletedMessageInfo * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIMOBILEMESSAGESERVICE \
  NS_METHOD CreateSmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, const nsAString & deliveryStatus, const nsAString & sender, const nsAString & receiver, const nsAString & body, const nsAString & messageClass, uint64_t timestamp, uint64_t sentTimestamp, uint64_t deliveryTimestamp, bool read, JSContext* cx, nsISmsMessage * *_retval); \
  NS_METHOD CreateMmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, JS::HandleValue deliveryInfo, const nsAString & sender, JS::HandleValue receivers, uint64_t timestamp, uint64_t sentTimestamp, bool read, const nsAString & subject, const nsAString & smil, JS::HandleValue attachments, uint64_t expiryDate, bool readReportRequested, JSContext* cx, nsIMmsMessage * *_retval); \
  NS_METHOD CreateThread(uint64_t id, JS::HandleValue participants, uint64_t timestamp, const nsAString & lastMessageSubject, const nsAString & body, uint64_t unreadCount, const nsAString & aLastMessageType, JSContext* cx, nsIMobileMessageThread * *_retval); \
  NS_METHOD CreateDeletedMessageInfo(int32_t *messageIds, uint32_t msgCount, uint64_t *threadIds, uint32_t threadCount, nsIDeletedMessageInfo * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMOBILEMESSAGESERVICE(_to) \
  NS_IMETHOD CreateSmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, const nsAString & deliveryStatus, const nsAString & sender, const nsAString & receiver, const nsAString & body, const nsAString & messageClass, uint64_t timestamp, uint64_t sentTimestamp, uint64_t deliveryTimestamp, bool read, JSContext* cx, nsISmsMessage * *_retval) override { return _to CreateSmsMessage(id, threadId, iccId, delivery, deliveryStatus, sender, receiver, body, messageClass, timestamp, sentTimestamp, deliveryTimestamp, read, cx, _retval); } \
  NS_IMETHOD CreateMmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, JS::HandleValue deliveryInfo, const nsAString & sender, JS::HandleValue receivers, uint64_t timestamp, uint64_t sentTimestamp, bool read, const nsAString & subject, const nsAString & smil, JS::HandleValue attachments, uint64_t expiryDate, bool readReportRequested, JSContext* cx, nsIMmsMessage * *_retval) override { return _to CreateMmsMessage(id, threadId, iccId, delivery, deliveryInfo, sender, receivers, timestamp, sentTimestamp, read, subject, smil, attachments, expiryDate, readReportRequested, cx, _retval); } \
  NS_IMETHOD CreateThread(uint64_t id, JS::HandleValue participants, uint64_t timestamp, const nsAString & lastMessageSubject, const nsAString & body, uint64_t unreadCount, const nsAString & aLastMessageType, JSContext* cx, nsIMobileMessageThread * *_retval) override { return _to CreateThread(id, participants, timestamp, lastMessageSubject, body, unreadCount, aLastMessageType, cx, _retval); } \
  NS_IMETHOD CreateDeletedMessageInfo(int32_t *messageIds, uint32_t msgCount, uint64_t *threadIds, uint32_t threadCount, nsIDeletedMessageInfo * *_retval) override { return _to CreateDeletedMessageInfo(messageIds, msgCount, threadIds, threadCount, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMOBILEMESSAGESERVICE(_to) \
  NS_IMETHOD CreateSmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, const nsAString & deliveryStatus, const nsAString & sender, const nsAString & receiver, const nsAString & body, const nsAString & messageClass, uint64_t timestamp, uint64_t sentTimestamp, uint64_t deliveryTimestamp, bool read, JSContext* cx, nsISmsMessage * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateSmsMessage(id, threadId, iccId, delivery, deliveryStatus, sender, receiver, body, messageClass, timestamp, sentTimestamp, deliveryTimestamp, read, cx, _retval); } \
  NS_IMETHOD CreateMmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, JS::HandleValue deliveryInfo, const nsAString & sender, JS::HandleValue receivers, uint64_t timestamp, uint64_t sentTimestamp, bool read, const nsAString & subject, const nsAString & smil, JS::HandleValue attachments, uint64_t expiryDate, bool readReportRequested, JSContext* cx, nsIMmsMessage * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateMmsMessage(id, threadId, iccId, delivery, deliveryInfo, sender, receivers, timestamp, sentTimestamp, read, subject, smil, attachments, expiryDate, readReportRequested, cx, _retval); } \
  NS_IMETHOD CreateThread(uint64_t id, JS::HandleValue participants, uint64_t timestamp, const nsAString & lastMessageSubject, const nsAString & body, uint64_t unreadCount, const nsAString & aLastMessageType, JSContext* cx, nsIMobileMessageThread * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateThread(id, participants, timestamp, lastMessageSubject, body, unreadCount, aLastMessageType, cx, _retval); } \
  NS_IMETHOD CreateDeletedMessageInfo(int32_t *messageIds, uint32_t msgCount, uint64_t *threadIds, uint32_t threadCount, nsIDeletedMessageInfo * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateDeletedMessageInfo(messageIds, msgCount, threadIds, threadCount, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMobileMessageService : public nsIMobileMessageService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOBILEMESSAGESERVICE

  nsMobileMessageService();

private:
  ~nsMobileMessageService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMobileMessageService, nsIMobileMessageService)

nsMobileMessageService::nsMobileMessageService()
{
  /* member initializers and constructor code */
}

nsMobileMessageService::~nsMobileMessageService()
{
  /* destructor code */
}

/* [implicit_jscontext] nsISmsMessage createSmsMessage (in long id, in unsigned long long threadId, in DOMString iccId, in DOMString delivery, in DOMString deliveryStatus, in DOMString sender, in DOMString receiver, in DOMString body, in DOMString messageClass, in unsigned long long timestamp, in unsigned long long sentTimestamp, in unsigned long long deliveryTimestamp, in bool read); */
NS_IMETHODIMP nsMobileMessageService::CreateSmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, const nsAString & deliveryStatus, const nsAString & sender, const nsAString & receiver, const nsAString & body, const nsAString & messageClass, uint64_t timestamp, uint64_t sentTimestamp, uint64_t deliveryTimestamp, bool read, JSContext* cx, nsISmsMessage * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIMmsMessage createMmsMessage (in long id, in unsigned long long threadId, in DOMString iccId, in DOMString delivery, in jsval deliveryInfo, in DOMString sender, in jsval receivers, in unsigned long long timestamp, in unsigned long long sentTimestamp, in boolean read, in DOMString subject, in DOMString smil, in jsval attachments, in unsigned long long expiryDate, in boolean readReportRequested); */
NS_IMETHODIMP nsMobileMessageService::CreateMmsMessage(int32_t id, uint64_t threadId, const nsAString & iccId, const nsAString & delivery, JS::HandleValue deliveryInfo, const nsAString & sender, JS::HandleValue receivers, uint64_t timestamp, uint64_t sentTimestamp, bool read, const nsAString & subject, const nsAString & smil, JS::HandleValue attachments, uint64_t expiryDate, bool readReportRequested, JSContext* cx, nsIMmsMessage * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIMobileMessageThread createThread (in unsigned long long id, in jsval participants, in unsigned long long timestamp, in DOMString lastMessageSubject, in DOMString body, in unsigned long long unreadCount, in DOMString aLastMessageType); */
NS_IMETHODIMP nsMobileMessageService::CreateThread(uint64_t id, JS::HandleValue participants, uint64_t timestamp, const nsAString & lastMessageSubject, const nsAString & body, uint64_t unreadCount, const nsAString & aLastMessageType, JSContext* cx, nsIMobileMessageThread * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDeletedMessageInfo createDeletedMessageInfo ([array, size_is (msgCount)] in long messageIds, in uint32_t msgCount, [array, size_is (threadCount)] in unsigned long long threadIds, in uint32_t threadCount); */
NS_IMETHODIMP nsMobileMessageService::CreateDeletedMessageInfo(int32_t *messageIds, uint32_t msgCount, uint64_t *threadIds, uint32_t threadCount, nsIDeletedMessageInfo * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

template<typename T> struct already_AddRefed;
already_AddRefed<nsIMobileMessageService>
NS_CreateMobileMessageService();

#endif /* __gen_nsIMobileMessageService_h__ */
