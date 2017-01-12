/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPushNotifier.idl
 */

#ifndef __gen_nsIPushNotifier_h__
#define __gen_nsIPushNotifier_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrincipal; /* forward declaration */


/* starting interface:    nsIPushNotifier */
#define NS_IPUSHNOTIFIER_IID_STR "b00dfdeb-14e5-425b-adc7-b531442e3216"

#define NS_IPUSHNOTIFIER_IID \
  {0xb00dfdeb, 0x14e5, 0x425b, \
    { 0xad, 0xc7, 0xb5, 0x31, 0x44, 0x2e, 0x32, 0x16 }}

class NS_NO_VTABLE nsIPushNotifier : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPUSHNOTIFIER_IID)

  /* void notifyPush (in ACString scope, in nsIPrincipal principal); */
  NS_IMETHOD NotifyPush(const nsACString & scope, nsIPrincipal *principal) = 0;

  /* void notifyPushWithData (in ACString scope, in nsIPrincipal principal, [optional] in uint32_t dataLen, [array, size_is (dataLen)] in uint8_t data); */
  NS_IMETHOD NotifyPushWithData(const nsACString & scope, nsIPrincipal *principal, uint32_t dataLen, uint8_t *data) = 0;

  /* void notifySubscriptionChange (in ACString scope, in nsIPrincipal principal); */
  NS_IMETHOD NotifySubscriptionChange(const nsACString & scope, nsIPrincipal *principal) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPushNotifier, NS_IPUSHNOTIFIER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPUSHNOTIFIER \
  NS_IMETHOD NotifyPush(const nsACString & scope, nsIPrincipal *principal) override; \
  NS_IMETHOD NotifyPushWithData(const nsACString & scope, nsIPrincipal *principal, uint32_t dataLen, uint8_t *data) override; \
  NS_IMETHOD NotifySubscriptionChange(const nsACString & scope, nsIPrincipal *principal) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPUSHNOTIFIER \
  NS_METHOD NotifyPush(const nsACString & scope, nsIPrincipal *principal); \
  NS_METHOD NotifyPushWithData(const nsACString & scope, nsIPrincipal *principal, uint32_t dataLen, uint8_t *data); \
  NS_METHOD NotifySubscriptionChange(const nsACString & scope, nsIPrincipal *principal); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPUSHNOTIFIER(_to) \
  NS_IMETHOD NotifyPush(const nsACString & scope, nsIPrincipal *principal) override { return _to NotifyPush(scope, principal); } \
  NS_IMETHOD NotifyPushWithData(const nsACString & scope, nsIPrincipal *principal, uint32_t dataLen, uint8_t *data) override { return _to NotifyPushWithData(scope, principal, dataLen, data); } \
  NS_IMETHOD NotifySubscriptionChange(const nsACString & scope, nsIPrincipal *principal) override { return _to NotifySubscriptionChange(scope, principal); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPUSHNOTIFIER(_to) \
  NS_IMETHOD NotifyPush(const nsACString & scope, nsIPrincipal *principal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyPush(scope, principal); } \
  NS_IMETHOD NotifyPushWithData(const nsACString & scope, nsIPrincipal *principal, uint32_t dataLen, uint8_t *data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyPushWithData(scope, principal, dataLen, data); } \
  NS_IMETHOD NotifySubscriptionChange(const nsACString & scope, nsIPrincipal *principal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySubscriptionChange(scope, principal); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPushNotifier : public nsIPushNotifier
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPUSHNOTIFIER

  nsPushNotifier();

private:
  ~nsPushNotifier();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPushNotifier, nsIPushNotifier)

nsPushNotifier::nsPushNotifier()
{
  /* member initializers and constructor code */
}

nsPushNotifier::~nsPushNotifier()
{
  /* destructor code */
}

/* void notifyPush (in ACString scope, in nsIPrincipal principal); */
NS_IMETHODIMP nsPushNotifier::NotifyPush(const nsACString & scope, nsIPrincipal *principal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyPushWithData (in ACString scope, in nsIPrincipal principal, [optional] in uint32_t dataLen, [array, size_is (dataLen)] in uint8_t data); */
NS_IMETHODIMP nsPushNotifier::NotifyPushWithData(const nsACString & scope, nsIPrincipal *principal, uint32_t dataLen, uint8_t *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifySubscriptionChange (in ACString scope, in nsIPrincipal principal); */
NS_IMETHODIMP nsPushNotifier::NotifySubscriptionChange(const nsACString & scope, nsIPrincipal *principal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPushMessage */
#define NS_IPUSHMESSAGE_IID_STR "136dc8fd-8c56-4176-9170-eaa86b6ba99e"

#define NS_IPUSHMESSAGE_IID \
  {0x136dc8fd, 0x8c56, 0x4176, \
    { 0x91, 0x70, 0xea, 0xa8, 0x6b, 0x6b, 0xa9, 0x9e }}

class NS_NO_VTABLE nsIPushMessage : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPUSHMESSAGE_IID)

  /* DOMString text (); */
  NS_IMETHOD Text(nsAString & _retval) = 0;

  /* [implicit_jscontext] jsval json (); */
  NS_IMETHOD Json(JSContext* cx, JS::MutableHandleValue _retval) = 0;

  /* void binary ([optional] out uint32_t dataLen, [array, size_is (dataLen), retval] out uint8_t data); */
  NS_IMETHOD Binary(uint32_t *dataLen, uint8_t **data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPushMessage, NS_IPUSHMESSAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPUSHMESSAGE \
  NS_IMETHOD Text(nsAString & _retval) override; \
  NS_IMETHOD Json(JSContext* cx, JS::MutableHandleValue _retval) override; \
  NS_IMETHOD Binary(uint32_t *dataLen, uint8_t **data) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPUSHMESSAGE \
  NS_METHOD Text(nsAString & _retval); \
  NS_METHOD Json(JSContext* cx, JS::MutableHandleValue _retval); \
  NS_METHOD Binary(uint32_t *dataLen, uint8_t **data); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPUSHMESSAGE(_to) \
  NS_IMETHOD Text(nsAString & _retval) override { return _to Text(_retval); } \
  NS_IMETHOD Json(JSContext* cx, JS::MutableHandleValue _retval) override { return _to Json(cx, _retval); } \
  NS_IMETHOD Binary(uint32_t *dataLen, uint8_t **data) override { return _to Binary(dataLen, data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPUSHMESSAGE(_to) \
  NS_IMETHOD Text(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Text(_retval); } \
  NS_IMETHOD Json(JSContext* cx, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Json(cx, _retval); } \
  NS_IMETHOD Binary(uint32_t *dataLen, uint8_t **data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Binary(dataLen, data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPushMessage : public nsIPushMessage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPUSHMESSAGE

  nsPushMessage();

private:
  ~nsPushMessage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPushMessage, nsIPushMessage)

nsPushMessage::nsPushMessage()
{
  /* member initializers and constructor code */
}

nsPushMessage::~nsPushMessage()
{
  /* destructor code */
}

/* DOMString text (); */
NS_IMETHODIMP nsPushMessage::Text(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval json (); */
NS_IMETHODIMP nsPushMessage::Json(JSContext* cx, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void binary ([optional] out uint32_t dataLen, [array, size_is (dataLen), retval] out uint8_t data); */
NS_IMETHODIMP nsPushMessage::Binary(uint32_t *dataLen, uint8_t **data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPushNotifier_h__ */
