/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIQuotaCallbacks.idl
 */

#ifndef __gen_nsIQuotaCallbacks_h__
#define __gen_nsIQuotaCallbacks_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIQuotaRequest; /* forward declaration */

class nsIQuotaUsageRequest; /* forward declaration */


/* starting interface:    nsIQuotaUsageCallback */
#define NS_IQUOTAUSAGECALLBACK_IID_STR "c8a21a2a-17b9-4b63-ad95-e0fbcff5de18"

#define NS_IQUOTAUSAGECALLBACK_IID \
  {0xc8a21a2a, 0x17b9, 0x4b63, \
    { 0xad, 0x95, 0xe0, 0xfb, 0xcf, 0xf5, 0xde, 0x18 }}

class NS_NO_VTABLE nsIQuotaUsageCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IQUOTAUSAGECALLBACK_IID)

  /* void onUsageResult (in nsIQuotaUsageRequest aRequest); */
  NS_IMETHOD OnUsageResult(nsIQuotaUsageRequest *aRequest) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIQuotaUsageCallback, NS_IQUOTAUSAGECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIQUOTAUSAGECALLBACK \
  NS_IMETHOD OnUsageResult(nsIQuotaUsageRequest *aRequest) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIQUOTAUSAGECALLBACK \
  NS_METHOD OnUsageResult(nsIQuotaUsageRequest *aRequest); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIQUOTAUSAGECALLBACK(_to) \
  NS_IMETHOD OnUsageResult(nsIQuotaUsageRequest *aRequest) override { return _to OnUsageResult(aRequest); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIQUOTAUSAGECALLBACK(_to) \
  NS_IMETHOD OnUsageResult(nsIQuotaUsageRequest *aRequest) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnUsageResult(aRequest); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsQuotaUsageCallback : public nsIQuotaUsageCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIQUOTAUSAGECALLBACK

  nsQuotaUsageCallback();

private:
  ~nsQuotaUsageCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsQuotaUsageCallback, nsIQuotaUsageCallback)

nsQuotaUsageCallback::nsQuotaUsageCallback()
{
  /* member initializers and constructor code */
}

nsQuotaUsageCallback::~nsQuotaUsageCallback()
{
  /* destructor code */
}

/* void onUsageResult (in nsIQuotaUsageRequest aRequest); */
NS_IMETHODIMP nsQuotaUsageCallback::OnUsageResult(nsIQuotaUsageRequest *aRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIQuotaCallback */
#define NS_IQUOTACALLBACK_IID_STR "a08a28e2-5a74-4c84-8070-ed45a07eb013"

#define NS_IQUOTACALLBACK_IID \
  {0xa08a28e2, 0x5a74, 0x4c84, \
    { 0x80, 0x70, 0xed, 0x45, 0xa0, 0x7e, 0xb0, 0x13 }}

class NS_NO_VTABLE nsIQuotaCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IQUOTACALLBACK_IID)

  /* void onComplete (in nsIQuotaRequest aRequest); */
  NS_IMETHOD OnComplete(nsIQuotaRequest *aRequest) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIQuotaCallback, NS_IQUOTACALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIQUOTACALLBACK \
  NS_IMETHOD OnComplete(nsIQuotaRequest *aRequest) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIQUOTACALLBACK \
  NS_METHOD OnComplete(nsIQuotaRequest *aRequest); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIQUOTACALLBACK(_to) \
  NS_IMETHOD OnComplete(nsIQuotaRequest *aRequest) override { return _to OnComplete(aRequest); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIQUOTACALLBACK(_to) \
  NS_IMETHOD OnComplete(nsIQuotaRequest *aRequest) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnComplete(aRequest); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsQuotaCallback : public nsIQuotaCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIQUOTACALLBACK

  nsQuotaCallback();

private:
  ~nsQuotaCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsQuotaCallback, nsIQuotaCallback)

nsQuotaCallback::nsQuotaCallback()
{
  /* member initializers and constructor code */
}

nsQuotaCallback::~nsQuotaCallback()
{
  /* destructor code */
}

/* void onComplete (in nsIQuotaRequest aRequest); */
NS_IMETHODIMP nsQuotaCallback::OnComplete(nsIQuotaRequest *aRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIQuotaCallbacks_h__ */
