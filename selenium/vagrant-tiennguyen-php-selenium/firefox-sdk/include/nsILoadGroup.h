/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsILoadGroup.idl
 */

#ifndef __gen_nsILoadGroup_h__
#define __gen_nsILoadGroup_h__


#ifndef __gen_nsIRequest_h__
#include "nsIRequest.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISimpleEnumerator; /* forward declaration */

class nsIRequestObserver; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

class nsISchedulingContext; /* forward declaration */

typedef uint32_t  nsLoadFlags;


/* starting interface:    nsILoadGroup */
#define NS_ILOADGROUP_IID_STR "f0c87725-7a35-463c-9ceb-2c07f23406cc"

#define NS_ILOADGROUP_IID \
  {0xf0c87725, 0x7a35, 0x463c, \
    { 0x9c, 0xeb, 0x2c, 0x07, 0xf2, 0x34, 0x06, 0xcc }}

class NS_NO_VTABLE nsILoadGroup : public nsIRequest {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOADGROUP_IID)

  /* attribute nsIRequestObserver groupObserver; */
  NS_IMETHOD GetGroupObserver(nsIRequestObserver * *aGroupObserver) = 0;
  NS_IMETHOD SetGroupObserver(nsIRequestObserver *aGroupObserver) = 0;

  /* attribute nsIRequest defaultLoadRequest; */
  NS_IMETHOD GetDefaultLoadRequest(nsIRequest * *aDefaultLoadRequest) = 0;
  NS_IMETHOD SetDefaultLoadRequest(nsIRequest *aDefaultLoadRequest) = 0;

  /* void addRequest (in nsIRequest aRequest, in nsISupports aContext); */
  NS_IMETHOD AddRequest(nsIRequest *aRequest, nsISupports *aContext) = 0;

  /* void removeRequest (in nsIRequest aRequest, in nsISupports aContext, in nsresult aStatus); */
  NS_IMETHOD RemoveRequest(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus) = 0;

  /* readonly attribute nsISimpleEnumerator requests; */
  NS_IMETHOD GetRequests(nsISimpleEnumerator * *aRequests) = 0;

  /* readonly attribute unsigned long activeCount; */
  NS_IMETHOD GetActiveCount(uint32_t *aActiveCount) = 0;

  /* attribute nsIInterfaceRequestor notificationCallbacks; */
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) = 0;
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) = 0;

  /* [noscript] readonly attribute nsID schedulingContextID; */
  NS_IMETHOD GetSchedulingContextID(nsID *aSchedulingContextID) = 0;

  /* attribute nsLoadFlags defaultLoadFlags; */
  NS_IMETHOD GetDefaultLoadFlags(nsLoadFlags *aDefaultLoadFlags) = 0;
  NS_IMETHOD SetDefaultLoadFlags(nsLoadFlags aDefaultLoadFlags) = 0;

  /* attribute ACString userAgentOverrideCache; */
  NS_IMETHOD GetUserAgentOverrideCache(nsACString & aUserAgentOverrideCache) = 0;
  NS_IMETHOD SetUserAgentOverrideCache(const nsACString & aUserAgentOverrideCache) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILoadGroup, NS_ILOADGROUP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOADGROUP \
  NS_IMETHOD GetGroupObserver(nsIRequestObserver * *aGroupObserver) override; \
  NS_IMETHOD SetGroupObserver(nsIRequestObserver *aGroupObserver) override; \
  NS_IMETHOD GetDefaultLoadRequest(nsIRequest * *aDefaultLoadRequest) override; \
  NS_IMETHOD SetDefaultLoadRequest(nsIRequest *aDefaultLoadRequest) override; \
  NS_IMETHOD AddRequest(nsIRequest *aRequest, nsISupports *aContext) override; \
  NS_IMETHOD RemoveRequest(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus) override; \
  NS_IMETHOD GetRequests(nsISimpleEnumerator * *aRequests) override; \
  NS_IMETHOD GetActiveCount(uint32_t *aActiveCount) override; \
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) override; \
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) override; \
  NS_IMETHOD GetSchedulingContextID(nsID *aSchedulingContextID) override; \
  NS_IMETHOD GetDefaultLoadFlags(nsLoadFlags *aDefaultLoadFlags) override; \
  NS_IMETHOD SetDefaultLoadFlags(nsLoadFlags aDefaultLoadFlags) override; \
  NS_IMETHOD GetUserAgentOverrideCache(nsACString & aUserAgentOverrideCache) override; \
  NS_IMETHOD SetUserAgentOverrideCache(const nsACString & aUserAgentOverrideCache) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSILOADGROUP \
  NS_METHOD GetGroupObserver(nsIRequestObserver * *aGroupObserver); \
  NS_METHOD SetGroupObserver(nsIRequestObserver *aGroupObserver); \
  NS_METHOD GetDefaultLoadRequest(nsIRequest * *aDefaultLoadRequest); \
  NS_METHOD SetDefaultLoadRequest(nsIRequest *aDefaultLoadRequest); \
  NS_METHOD AddRequest(nsIRequest *aRequest, nsISupports *aContext); \
  NS_METHOD RemoveRequest(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus); \
  NS_METHOD GetRequests(nsISimpleEnumerator * *aRequests); \
  NS_METHOD GetActiveCount(uint32_t *aActiveCount); \
  NS_METHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks); \
  NS_METHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks); \
  NS_METHOD GetSchedulingContextID(nsID *aSchedulingContextID); \
  NS_METHOD GetDefaultLoadFlags(nsLoadFlags *aDefaultLoadFlags); \
  NS_METHOD SetDefaultLoadFlags(nsLoadFlags aDefaultLoadFlags); \
  NS_METHOD GetUserAgentOverrideCache(nsACString & aUserAgentOverrideCache); \
  NS_METHOD SetUserAgentOverrideCache(const nsACString & aUserAgentOverrideCache); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOADGROUP(_to) \
  NS_IMETHOD GetGroupObserver(nsIRequestObserver * *aGroupObserver) override { return _to GetGroupObserver(aGroupObserver); } \
  NS_IMETHOD SetGroupObserver(nsIRequestObserver *aGroupObserver) override { return _to SetGroupObserver(aGroupObserver); } \
  NS_IMETHOD GetDefaultLoadRequest(nsIRequest * *aDefaultLoadRequest) override { return _to GetDefaultLoadRequest(aDefaultLoadRequest); } \
  NS_IMETHOD SetDefaultLoadRequest(nsIRequest *aDefaultLoadRequest) override { return _to SetDefaultLoadRequest(aDefaultLoadRequest); } \
  NS_IMETHOD AddRequest(nsIRequest *aRequest, nsISupports *aContext) override { return _to AddRequest(aRequest, aContext); } \
  NS_IMETHOD RemoveRequest(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus) override { return _to RemoveRequest(aRequest, aContext, aStatus); } \
  NS_IMETHOD GetRequests(nsISimpleEnumerator * *aRequests) override { return _to GetRequests(aRequests); } \
  NS_IMETHOD GetActiveCount(uint32_t *aActiveCount) override { return _to GetActiveCount(aActiveCount); } \
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) override { return _to GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) override { return _to SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD GetSchedulingContextID(nsID *aSchedulingContextID) override { return _to GetSchedulingContextID(aSchedulingContextID); } \
  NS_IMETHOD GetDefaultLoadFlags(nsLoadFlags *aDefaultLoadFlags) override { return _to GetDefaultLoadFlags(aDefaultLoadFlags); } \
  NS_IMETHOD SetDefaultLoadFlags(nsLoadFlags aDefaultLoadFlags) override { return _to SetDefaultLoadFlags(aDefaultLoadFlags); } \
  NS_IMETHOD GetUserAgentOverrideCache(nsACString & aUserAgentOverrideCache) override { return _to GetUserAgentOverrideCache(aUserAgentOverrideCache); } \
  NS_IMETHOD SetUserAgentOverrideCache(const nsACString & aUserAgentOverrideCache) override { return _to SetUserAgentOverrideCache(aUserAgentOverrideCache); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOADGROUP(_to) \
  NS_IMETHOD GetGroupObserver(nsIRequestObserver * *aGroupObserver) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGroupObserver(aGroupObserver); } \
  NS_IMETHOD SetGroupObserver(nsIRequestObserver *aGroupObserver) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGroupObserver(aGroupObserver); } \
  NS_IMETHOD GetDefaultLoadRequest(nsIRequest * *aDefaultLoadRequest) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultLoadRequest(aDefaultLoadRequest); } \
  NS_IMETHOD SetDefaultLoadRequest(nsIRequest *aDefaultLoadRequest) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultLoadRequest(aDefaultLoadRequest); } \
  NS_IMETHOD AddRequest(nsIRequest *aRequest, nsISupports *aContext) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddRequest(aRequest, aContext); } \
  NS_IMETHOD RemoveRequest(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveRequest(aRequest, aContext, aStatus); } \
  NS_IMETHOD GetRequests(nsISimpleEnumerator * *aRequests) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequests(aRequests); } \
  NS_IMETHOD GetActiveCount(uint32_t *aActiveCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveCount(aActiveCount); } \
  NS_IMETHOD GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNotificationCallbacks(aNotificationCallbacks); } \
  NS_IMETHOD GetSchedulingContextID(nsID *aSchedulingContextID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSchedulingContextID(aSchedulingContextID); } \
  NS_IMETHOD GetDefaultLoadFlags(nsLoadFlags *aDefaultLoadFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultLoadFlags(aDefaultLoadFlags); } \
  NS_IMETHOD SetDefaultLoadFlags(nsLoadFlags aDefaultLoadFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultLoadFlags(aDefaultLoadFlags); } \
  NS_IMETHOD GetUserAgentOverrideCache(nsACString & aUserAgentOverrideCache) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserAgentOverrideCache(aUserAgentOverrideCache); } \
  NS_IMETHOD SetUserAgentOverrideCache(const nsACString & aUserAgentOverrideCache) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserAgentOverrideCache(aUserAgentOverrideCache); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLoadGroup : public nsILoadGroup
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOADGROUP

  nsLoadGroup();

private:
  ~nsLoadGroup();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsLoadGroup, nsILoadGroup)

nsLoadGroup::nsLoadGroup()
{
  /* member initializers and constructor code */
}

nsLoadGroup::~nsLoadGroup()
{
  /* destructor code */
}

/* attribute nsIRequestObserver groupObserver; */
NS_IMETHODIMP nsLoadGroup::GetGroupObserver(nsIRequestObserver * *aGroupObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLoadGroup::SetGroupObserver(nsIRequestObserver *aGroupObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIRequest defaultLoadRequest; */
NS_IMETHODIMP nsLoadGroup::GetDefaultLoadRequest(nsIRequest * *aDefaultLoadRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLoadGroup::SetDefaultLoadRequest(nsIRequest *aDefaultLoadRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addRequest (in nsIRequest aRequest, in nsISupports aContext); */
NS_IMETHODIMP nsLoadGroup::AddRequest(nsIRequest *aRequest, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeRequest (in nsIRequest aRequest, in nsISupports aContext, in nsresult aStatus); */
NS_IMETHODIMP nsLoadGroup::RemoveRequest(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator requests; */
NS_IMETHODIMP nsLoadGroup::GetRequests(nsISimpleEnumerator * *aRequests)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long activeCount; */
NS_IMETHODIMP nsLoadGroup::GetActiveCount(uint32_t *aActiveCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInterfaceRequestor notificationCallbacks; */
NS_IMETHODIMP nsLoadGroup::GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLoadGroup::SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsID schedulingContextID; */
NS_IMETHODIMP nsLoadGroup::GetSchedulingContextID(nsID *aSchedulingContextID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsLoadFlags defaultLoadFlags; */
NS_IMETHODIMP nsLoadGroup::GetDefaultLoadFlags(nsLoadFlags *aDefaultLoadFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLoadGroup::SetDefaultLoadFlags(nsLoadFlags aDefaultLoadFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString userAgentOverrideCache; */
NS_IMETHODIMP nsLoadGroup::GetUserAgentOverrideCache(nsACString & aUserAgentOverrideCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLoadGroup::SetUserAgentOverrideCache(const nsACString & aUserAgentOverrideCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsILoadGroup_h__ */
