/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPushService.idl
 */

#ifndef __gen_nsIPushService_h__
#define __gen_nsIPushService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrincipal; /* forward declaration */


/* starting interface:    nsIPushSubscription */
#define NS_IPUSHSUBSCRIPTION_IID_STR "1de32d5c-ea88-4c9e-9626-b032bd87f415"

#define NS_IPUSHSUBSCRIPTION_IID \
  {0x1de32d5c, 0xea88, 0x4c9e, \
    { 0x96, 0x26, 0xb0, 0x32, 0xbd, 0x87, 0xf4, 0x15 }}

class NS_NO_VTABLE nsIPushSubscription : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPUSHSUBSCRIPTION_IID)

  /* readonly attribute DOMString endpoint; */
  NS_IMETHOD GetEndpoint(nsAString & aEndpoint) = 0;

  /* readonly attribute long long pushCount; */
  NS_IMETHOD GetPushCount(int64_t *aPushCount) = 0;

  /* readonly attribute long long lastPush; */
  NS_IMETHOD GetLastPush(int64_t *aLastPush) = 0;

  /* readonly attribute long quota; */
  NS_IMETHOD GetQuota(int32_t *aQuota) = 0;

  /* bool quotaApplies (); */
  NS_IMETHOD QuotaApplies(bool *_retval) = 0;

  /* bool isExpired (); */
  NS_IMETHOD IsExpired(bool *_retval) = 0;

  /* void getKey (in DOMString name, [optional] out uint32_t keyLen, [array, size_is (keyLen), retval] out uint8_t key); */
  NS_IMETHOD GetKey(const nsAString & name, uint32_t *keyLen, uint8_t **key) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPushSubscription, NS_IPUSHSUBSCRIPTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPUSHSUBSCRIPTION \
  NS_IMETHOD GetEndpoint(nsAString & aEndpoint) override; \
  NS_IMETHOD GetPushCount(int64_t *aPushCount) override; \
  NS_IMETHOD GetLastPush(int64_t *aLastPush) override; \
  NS_IMETHOD GetQuota(int32_t *aQuota) override; \
  NS_IMETHOD QuotaApplies(bool *_retval) override; \
  NS_IMETHOD IsExpired(bool *_retval) override; \
  NS_IMETHOD GetKey(const nsAString & name, uint32_t *keyLen, uint8_t **key) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPUSHSUBSCRIPTION \
  NS_METHOD GetEndpoint(nsAString & aEndpoint); \
  NS_METHOD GetPushCount(int64_t *aPushCount); \
  NS_METHOD GetLastPush(int64_t *aLastPush); \
  NS_METHOD GetQuota(int32_t *aQuota); \
  NS_METHOD QuotaApplies(bool *_retval); \
  NS_METHOD IsExpired(bool *_retval); \
  NS_METHOD GetKey(const nsAString & name, uint32_t *keyLen, uint8_t **key); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPUSHSUBSCRIPTION(_to) \
  NS_IMETHOD GetEndpoint(nsAString & aEndpoint) override { return _to GetEndpoint(aEndpoint); } \
  NS_IMETHOD GetPushCount(int64_t *aPushCount) override { return _to GetPushCount(aPushCount); } \
  NS_IMETHOD GetLastPush(int64_t *aLastPush) override { return _to GetLastPush(aLastPush); } \
  NS_IMETHOD GetQuota(int32_t *aQuota) override { return _to GetQuota(aQuota); } \
  NS_IMETHOD QuotaApplies(bool *_retval) override { return _to QuotaApplies(_retval); } \
  NS_IMETHOD IsExpired(bool *_retval) override { return _to IsExpired(_retval); } \
  NS_IMETHOD GetKey(const nsAString & name, uint32_t *keyLen, uint8_t **key) override { return _to GetKey(name, keyLen, key); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPUSHSUBSCRIPTION(_to) \
  NS_IMETHOD GetEndpoint(nsAString & aEndpoint) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndpoint(aEndpoint); } \
  NS_IMETHOD GetPushCount(int64_t *aPushCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPushCount(aPushCount); } \
  NS_IMETHOD GetLastPush(int64_t *aLastPush) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastPush(aLastPush); } \
  NS_IMETHOD GetQuota(int32_t *aQuota) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetQuota(aQuota); } \
  NS_IMETHOD QuotaApplies(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->QuotaApplies(_retval); } \
  NS_IMETHOD IsExpired(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsExpired(_retval); } \
  NS_IMETHOD GetKey(const nsAString & name, uint32_t *keyLen, uint8_t **key) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKey(name, keyLen, key); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPushSubscription : public nsIPushSubscription
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPUSHSUBSCRIPTION

  nsPushSubscription();

private:
  ~nsPushSubscription();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPushSubscription, nsIPushSubscription)

nsPushSubscription::nsPushSubscription()
{
  /* member initializers and constructor code */
}

nsPushSubscription::~nsPushSubscription()
{
  /* destructor code */
}

/* readonly attribute DOMString endpoint; */
NS_IMETHODIMP nsPushSubscription::GetEndpoint(nsAString & aEndpoint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long pushCount; */
NS_IMETHODIMP nsPushSubscription::GetPushCount(int64_t *aPushCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long lastPush; */
NS_IMETHODIMP nsPushSubscription::GetLastPush(int64_t *aLastPush)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long quota; */
NS_IMETHODIMP nsPushSubscription::GetQuota(int32_t *aQuota)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool quotaApplies (); */
NS_IMETHODIMP nsPushSubscription::QuotaApplies(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool isExpired (); */
NS_IMETHODIMP nsPushSubscription::IsExpired(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getKey (in DOMString name, [optional] out uint32_t keyLen, [array, size_is (keyLen), retval] out uint8_t key); */
NS_IMETHODIMP nsPushSubscription::GetKey(const nsAString & name, uint32_t *keyLen, uint8_t **key)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPushSubscriptionCallback */
#define NS_IPUSHSUBSCRIPTIONCALLBACK_IID_STR "1799c074-9d52-46b0-ab3c-c09790732f6f"

#define NS_IPUSHSUBSCRIPTIONCALLBACK_IID \
  {0x1799c074, 0x9d52, 0x46b0, \
    { 0xab, 0x3c, 0xc0, 0x97, 0x90, 0x73, 0x2f, 0x6f }}

class NS_NO_VTABLE nsIPushSubscriptionCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPUSHSUBSCRIPTIONCALLBACK_IID)

  /* void onPushSubscription (in nsresult status, in nsIPushSubscription subscription); */
  NS_IMETHOD OnPushSubscription(nsresult status, nsIPushSubscription *subscription) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPushSubscriptionCallback, NS_IPUSHSUBSCRIPTIONCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPUSHSUBSCRIPTIONCALLBACK \
  NS_IMETHOD OnPushSubscription(nsresult status, nsIPushSubscription *subscription) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPUSHSUBSCRIPTIONCALLBACK \
  NS_METHOD OnPushSubscription(nsresult status, nsIPushSubscription *subscription); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPUSHSUBSCRIPTIONCALLBACK(_to) \
  NS_IMETHOD OnPushSubscription(nsresult status, nsIPushSubscription *subscription) override { return _to OnPushSubscription(status, subscription); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPUSHSUBSCRIPTIONCALLBACK(_to) \
  NS_IMETHOD OnPushSubscription(nsresult status, nsIPushSubscription *subscription) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPushSubscription(status, subscription); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPushSubscriptionCallback : public nsIPushSubscriptionCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPUSHSUBSCRIPTIONCALLBACK

  nsPushSubscriptionCallback();

private:
  ~nsPushSubscriptionCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPushSubscriptionCallback, nsIPushSubscriptionCallback)

nsPushSubscriptionCallback::nsPushSubscriptionCallback()
{
  /* member initializers and constructor code */
}

nsPushSubscriptionCallback::~nsPushSubscriptionCallback()
{
  /* destructor code */
}

/* void onPushSubscription (in nsresult status, in nsIPushSubscription subscription); */
NS_IMETHODIMP nsPushSubscriptionCallback::OnPushSubscription(nsresult status, nsIPushSubscription *subscription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIUnsubscribeResultCallback */
#define NS_IUNSUBSCRIBERESULTCALLBACK_IID_STR "d574118f-61a9-4270-b1f6-4461aa85c4f5"

#define NS_IUNSUBSCRIBERESULTCALLBACK_IID \
  {0xd574118f, 0x61a9, 0x4270, \
    { 0xb1, 0xf6, 0x44, 0x61, 0xaa, 0x85, 0xc4, 0xf5 }}

class NS_NO_VTABLE nsIUnsubscribeResultCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IUNSUBSCRIBERESULTCALLBACK_IID)

  /* void onUnsubscribe (in nsresult status, in bool success); */
  NS_IMETHOD OnUnsubscribe(nsresult status, bool success) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUnsubscribeResultCallback, NS_IUNSUBSCRIBERESULTCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIUNSUBSCRIBERESULTCALLBACK \
  NS_IMETHOD OnUnsubscribe(nsresult status, bool success) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIUNSUBSCRIBERESULTCALLBACK \
  NS_METHOD OnUnsubscribe(nsresult status, bool success); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIUNSUBSCRIBERESULTCALLBACK(_to) \
  NS_IMETHOD OnUnsubscribe(nsresult status, bool success) override { return _to OnUnsubscribe(status, success); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIUNSUBSCRIBERESULTCALLBACK(_to) \
  NS_IMETHOD OnUnsubscribe(nsresult status, bool success) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnUnsubscribe(status, success); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUnsubscribeResultCallback : public nsIUnsubscribeResultCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIUNSUBSCRIBERESULTCALLBACK

  nsUnsubscribeResultCallback();

private:
  ~nsUnsubscribeResultCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsUnsubscribeResultCallback, nsIUnsubscribeResultCallback)

nsUnsubscribeResultCallback::nsUnsubscribeResultCallback()
{
  /* member initializers and constructor code */
}

nsUnsubscribeResultCallback::~nsUnsubscribeResultCallback()
{
  /* destructor code */
}

/* void onUnsubscribe (in nsresult status, in bool success); */
NS_IMETHODIMP nsUnsubscribeResultCallback::OnUnsubscribe(nsresult status, bool success)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPushClearResultCallback */
#define NS_IPUSHCLEARRESULTCALLBACK_IID_STR "bd47b38e-8bfa-4f92-834e-832a4431e05e"

#define NS_IPUSHCLEARRESULTCALLBACK_IID \
  {0xbd47b38e, 0x8bfa, 0x4f92, \
    { 0x83, 0x4e, 0x83, 0x2a, 0x44, 0x31, 0xe0, 0x5e }}

class NS_NO_VTABLE nsIPushClearResultCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPUSHCLEARRESULTCALLBACK_IID)

  /* void onClear (in nsresult status); */
  NS_IMETHOD OnClear(nsresult status) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPushClearResultCallback, NS_IPUSHCLEARRESULTCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPUSHCLEARRESULTCALLBACK \
  NS_IMETHOD OnClear(nsresult status) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPUSHCLEARRESULTCALLBACK \
  NS_METHOD OnClear(nsresult status); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPUSHCLEARRESULTCALLBACK(_to) \
  NS_IMETHOD OnClear(nsresult status) override { return _to OnClear(status); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPUSHCLEARRESULTCALLBACK(_to) \
  NS_IMETHOD OnClear(nsresult status) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnClear(status); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPushClearResultCallback : public nsIPushClearResultCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPUSHCLEARRESULTCALLBACK

  nsPushClearResultCallback();

private:
  ~nsPushClearResultCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPushClearResultCallback, nsIPushClearResultCallback)

nsPushClearResultCallback::nsPushClearResultCallback()
{
  /* member initializers and constructor code */
}

nsPushClearResultCallback::~nsPushClearResultCallback()
{
  /* destructor code */
}

/* void onClear (in nsresult status); */
NS_IMETHODIMP nsPushClearResultCallback::OnClear(nsresult status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPushService */
#define NS_IPUSHSERVICE_IID_STR "678ef584-bf25-47aa-ac84-03efc0865b68"

#define NS_IPUSHSERVICE_IID \
  {0x678ef584, 0xbf25, 0x47aa, \
    { 0xac, 0x84, 0x03, 0xef, 0xc0, 0x86, 0x5b, 0x68 }}

class NS_NO_VTABLE nsIPushService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPUSHSERVICE_IID)

  /* readonly attribute DOMString pushTopic; */
  NS_IMETHOD GetPushTopic(nsAString & aPushTopic) = 0;

  /* readonly attribute DOMString subscriptionChangeTopic; */
  NS_IMETHOD GetSubscriptionChangeTopic(nsAString & aSubscriptionChangeTopic) = 0;

  /* void subscribe (in DOMString scope, in nsIPrincipal principal, in nsIPushSubscriptionCallback callback); */
  NS_IMETHOD Subscribe(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) = 0;

  /* void unsubscribe (in DOMString scope, in nsIPrincipal principal, in nsIUnsubscribeResultCallback callback); */
  NS_IMETHOD Unsubscribe(const nsAString & scope, nsIPrincipal *principal, nsIUnsubscribeResultCallback *callback) = 0;

  /* void getSubscription (in DOMString scope, in nsIPrincipal principal, in nsIPushSubscriptionCallback callback); */
  NS_IMETHOD GetSubscription(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) = 0;

  /* void clearForDomain (in DOMString domain, in nsIPushClearResultCallback callback); */
  NS_IMETHOD ClearForDomain(const nsAString & domain, nsIPushClearResultCallback *callback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPushService, NS_IPUSHSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPUSHSERVICE \
  NS_IMETHOD GetPushTopic(nsAString & aPushTopic) override; \
  NS_IMETHOD GetSubscriptionChangeTopic(nsAString & aSubscriptionChangeTopic) override; \
  NS_IMETHOD Subscribe(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) override; \
  NS_IMETHOD Unsubscribe(const nsAString & scope, nsIPrincipal *principal, nsIUnsubscribeResultCallback *callback) override; \
  NS_IMETHOD GetSubscription(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) override; \
  NS_IMETHOD ClearForDomain(const nsAString & domain, nsIPushClearResultCallback *callback) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPUSHSERVICE \
  NS_METHOD GetPushTopic(nsAString & aPushTopic); \
  NS_METHOD GetSubscriptionChangeTopic(nsAString & aSubscriptionChangeTopic); \
  NS_METHOD Subscribe(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback); \
  NS_METHOD Unsubscribe(const nsAString & scope, nsIPrincipal *principal, nsIUnsubscribeResultCallback *callback); \
  NS_METHOD GetSubscription(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback); \
  NS_METHOD ClearForDomain(const nsAString & domain, nsIPushClearResultCallback *callback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPUSHSERVICE(_to) \
  NS_IMETHOD GetPushTopic(nsAString & aPushTopic) override { return _to GetPushTopic(aPushTopic); } \
  NS_IMETHOD GetSubscriptionChangeTopic(nsAString & aSubscriptionChangeTopic) override { return _to GetSubscriptionChangeTopic(aSubscriptionChangeTopic); } \
  NS_IMETHOD Subscribe(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) override { return _to Subscribe(scope, principal, callback); } \
  NS_IMETHOD Unsubscribe(const nsAString & scope, nsIPrincipal *principal, nsIUnsubscribeResultCallback *callback) override { return _to Unsubscribe(scope, principal, callback); } \
  NS_IMETHOD GetSubscription(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) override { return _to GetSubscription(scope, principal, callback); } \
  NS_IMETHOD ClearForDomain(const nsAString & domain, nsIPushClearResultCallback *callback) override { return _to ClearForDomain(domain, callback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPUSHSERVICE(_to) \
  NS_IMETHOD GetPushTopic(nsAString & aPushTopic) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPushTopic(aPushTopic); } \
  NS_IMETHOD GetSubscriptionChangeTopic(nsAString & aSubscriptionChangeTopic) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubscriptionChangeTopic(aSubscriptionChangeTopic); } \
  NS_IMETHOD Subscribe(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Subscribe(scope, principal, callback); } \
  NS_IMETHOD Unsubscribe(const nsAString & scope, nsIPrincipal *principal, nsIUnsubscribeResultCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Unsubscribe(scope, principal, callback); } \
  NS_IMETHOD GetSubscription(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubscription(scope, principal, callback); } \
  NS_IMETHOD ClearForDomain(const nsAString & domain, nsIPushClearResultCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearForDomain(domain, callback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPushService : public nsIPushService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPUSHSERVICE

  nsPushService();

private:
  ~nsPushService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPushService, nsIPushService)

nsPushService::nsPushService()
{
  /* member initializers and constructor code */
}

nsPushService::~nsPushService()
{
  /* destructor code */
}

/* readonly attribute DOMString pushTopic; */
NS_IMETHODIMP nsPushService::GetPushTopic(nsAString & aPushTopic)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString subscriptionChangeTopic; */
NS_IMETHODIMP nsPushService::GetSubscriptionChangeTopic(nsAString & aSubscriptionChangeTopic)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void subscribe (in DOMString scope, in nsIPrincipal principal, in nsIPushSubscriptionCallback callback); */
NS_IMETHODIMP nsPushService::Subscribe(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unsubscribe (in DOMString scope, in nsIPrincipal principal, in nsIUnsubscribeResultCallback callback); */
NS_IMETHODIMP nsPushService::Unsubscribe(const nsAString & scope, nsIPrincipal *principal, nsIUnsubscribeResultCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getSubscription (in DOMString scope, in nsIPrincipal principal, in nsIPushSubscriptionCallback callback); */
NS_IMETHODIMP nsPushService::GetSubscription(const nsAString & scope, nsIPrincipal *principal, nsIPushSubscriptionCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearForDomain (in DOMString domain, in nsIPushClearResultCallback callback); */
NS_IMETHODIMP nsPushService::ClearForDomain(const nsAString & domain, nsIPushClearResultCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPushQuotaManager */
#define NS_IPUSHQUOTAMANAGER_IID_STR "a2555e70-46f8-4b52-bf02-d978b979d143"

#define NS_IPUSHQUOTAMANAGER_IID \
  {0xa2555e70, 0x46f8, 0x4b52, \
    { 0xbf, 0x02, 0xd9, 0x78, 0xb9, 0x79, 0xd1, 0x43 }}

class NS_NO_VTABLE nsIPushQuotaManager : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPUSHQUOTAMANAGER_IID)

  /* void notificationForOriginShown (in string origin); */
  NS_IMETHOD NotificationForOriginShown(const char * origin) = 0;

  /* void notificationForOriginClosed (in string origin); */
  NS_IMETHOD NotificationForOriginClosed(const char * origin) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPushQuotaManager, NS_IPUSHQUOTAMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPUSHQUOTAMANAGER \
  NS_IMETHOD NotificationForOriginShown(const char * origin) override; \
  NS_IMETHOD NotificationForOriginClosed(const char * origin) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPUSHQUOTAMANAGER \
  NS_METHOD NotificationForOriginShown(const char * origin); \
  NS_METHOD NotificationForOriginClosed(const char * origin); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPUSHQUOTAMANAGER(_to) \
  NS_IMETHOD NotificationForOriginShown(const char * origin) override { return _to NotificationForOriginShown(origin); } \
  NS_IMETHOD NotificationForOriginClosed(const char * origin) override { return _to NotificationForOriginClosed(origin); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPUSHQUOTAMANAGER(_to) \
  NS_IMETHOD NotificationForOriginShown(const char * origin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotificationForOriginShown(origin); } \
  NS_IMETHOD NotificationForOriginClosed(const char * origin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotificationForOriginClosed(origin); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPushQuotaManager : public nsIPushQuotaManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPUSHQUOTAMANAGER

  nsPushQuotaManager();

private:
  ~nsPushQuotaManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPushQuotaManager, nsIPushQuotaManager)

nsPushQuotaManager::nsPushQuotaManager()
{
  /* member initializers and constructor code */
}

nsPushQuotaManager::~nsPushQuotaManager()
{
  /* destructor code */
}

/* void notificationForOriginShown (in string origin); */
NS_IMETHODIMP nsPushQuotaManager::NotificationForOriginShown(const char * origin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notificationForOriginClosed (in string origin); */
NS_IMETHODIMP nsPushQuotaManager::NotificationForOriginClosed(const char * origin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPushService_h__ */
