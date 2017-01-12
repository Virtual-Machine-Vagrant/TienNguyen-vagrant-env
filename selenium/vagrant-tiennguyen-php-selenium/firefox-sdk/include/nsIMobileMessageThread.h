/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIMobileMessageThread.idl
 */

#ifndef __gen_nsIMobileMessageThread_h__
#define __gen_nsIMobileMessageThread_h__


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

/* starting interface:    nsIMobileMessageThread */
#define NS_IMOBILEMESSAGETHREAD_IID_STR "dd6794cc-8853-11e5-89b4-278852073d45"

#define NS_IMOBILEMESSAGETHREAD_IID \
  {0xdd6794cc, 0x8853, 0x11e5, \
    { 0x89, 0xb4, 0x27, 0x88, 0x52, 0x07, 0x3d, 0x45 }}

class NS_NO_VTABLE nsIMobileMessageThread : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMOBILEMESSAGETHREAD_IID)

  /* readonly attribute unsigned long long id; */
  NS_IMETHOD GetId(uint64_t *aId) = 0;

  /* readonly attribute DOMString lastMessageSubject; */
  NS_IMETHOD GetLastMessageSubject(nsAString & aLastMessageSubject) = 0;

  /* readonly attribute DOMString body; */
  NS_IMETHOD GetBody(nsAString & aBody) = 0;

  /* readonly attribute unsigned long long unreadCount; */
  NS_IMETHOD GetUnreadCount(uint64_t *aUnreadCount) = 0;

  /* [implicit_jscontext] readonly attribute jsval participants; */
  NS_IMETHOD GetParticipants(JSContext* cx, JS::MutableHandleValue aParticipants) = 0;

  /* readonly attribute DOMTimeStamp timestamp; */
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) = 0;

  /* readonly attribute DOMString lastMessageType; */
  NS_IMETHOD GetLastMessageType(nsAString & aLastMessageType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMobileMessageThread, NS_IMOBILEMESSAGETHREAD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMOBILEMESSAGETHREAD \
  NS_IMETHOD GetId(uint64_t *aId) override; \
  NS_IMETHOD GetLastMessageSubject(nsAString & aLastMessageSubject) override; \
  NS_IMETHOD GetBody(nsAString & aBody) override; \
  NS_IMETHOD GetUnreadCount(uint64_t *aUnreadCount) override; \
  NS_IMETHOD GetParticipants(JSContext* cx, JS::MutableHandleValue aParticipants) override; \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override; \
  NS_IMETHOD GetLastMessageType(nsAString & aLastMessageType) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIMOBILEMESSAGETHREAD \
  NS_METHOD GetId(uint64_t *aId); \
  NS_METHOD GetLastMessageSubject(nsAString & aLastMessageSubject); \
  NS_METHOD GetBody(nsAString & aBody); \
  NS_METHOD GetUnreadCount(uint64_t *aUnreadCount); \
  NS_METHOD GetParticipants(JSContext* cx, JS::MutableHandleValue aParticipants); \
  NS_METHOD GetTimestamp(DOMTimeStamp *aTimestamp); \
  NS_METHOD GetLastMessageType(nsAString & aLastMessageType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMOBILEMESSAGETHREAD(_to) \
  NS_IMETHOD GetId(uint64_t *aId) override { return _to GetId(aId); } \
  NS_IMETHOD GetLastMessageSubject(nsAString & aLastMessageSubject) override { return _to GetLastMessageSubject(aLastMessageSubject); } \
  NS_IMETHOD GetBody(nsAString & aBody) override { return _to GetBody(aBody); } \
  NS_IMETHOD GetUnreadCount(uint64_t *aUnreadCount) override { return _to GetUnreadCount(aUnreadCount); } \
  NS_IMETHOD GetParticipants(JSContext* cx, JS::MutableHandleValue aParticipants) override { return _to GetParticipants(cx, aParticipants); } \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override { return _to GetTimestamp(aTimestamp); } \
  NS_IMETHOD GetLastMessageType(nsAString & aLastMessageType) override { return _to GetLastMessageType(aLastMessageType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMOBILEMESSAGETHREAD(_to) \
  NS_IMETHOD GetId(uint64_t *aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD GetLastMessageSubject(nsAString & aLastMessageSubject) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastMessageSubject(aLastMessageSubject); } \
  NS_IMETHOD GetBody(nsAString & aBody) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBody(aBody); } \
  NS_IMETHOD GetUnreadCount(uint64_t *aUnreadCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnreadCount(aUnreadCount); } \
  NS_IMETHOD GetParticipants(JSContext* cx, JS::MutableHandleValue aParticipants) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParticipants(cx, aParticipants); } \
  NS_IMETHOD GetTimestamp(DOMTimeStamp *aTimestamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimestamp(aTimestamp); } \
  NS_IMETHOD GetLastMessageType(nsAString & aLastMessageType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastMessageType(aLastMessageType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMobileMessageThread : public nsIMobileMessageThread
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOBILEMESSAGETHREAD

  nsMobileMessageThread();

private:
  ~nsMobileMessageThread();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMobileMessageThread, nsIMobileMessageThread)

nsMobileMessageThread::nsMobileMessageThread()
{
  /* member initializers and constructor code */
}

nsMobileMessageThread::~nsMobileMessageThread()
{
  /* destructor code */
}

/* readonly attribute unsigned long long id; */
NS_IMETHODIMP nsMobileMessageThread::GetId(uint64_t *aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString lastMessageSubject; */
NS_IMETHODIMP nsMobileMessageThread::GetLastMessageSubject(nsAString & aLastMessageSubject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString body; */
NS_IMETHODIMP nsMobileMessageThread::GetBody(nsAString & aBody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long unreadCount; */
NS_IMETHODIMP nsMobileMessageThread::GetUnreadCount(uint64_t *aUnreadCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval participants; */
NS_IMETHODIMP nsMobileMessageThread::GetParticipants(JSContext* cx, JS::MutableHandleValue aParticipants)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMTimeStamp timestamp; */
NS_IMETHODIMP nsMobileMessageThread::GetTimestamp(DOMTimeStamp *aTimestamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString lastMessageType; */
NS_IMETHODIMP nsMobileMessageThread::GetLastMessageType(nsAString & aLastMessageType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMobileMessageThread_h__ */
