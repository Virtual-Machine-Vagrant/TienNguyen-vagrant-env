/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIQuotaRequests.idl
 */

#ifndef __gen_nsIQuotaRequests_h__
#define __gen_nsIQuotaRequests_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrincipal; /* forward declaration */

class nsIQuotaCallback; /* forward declaration */

class nsIQuotaUsageCallback; /* forward declaration */


/* starting interface:    nsIQuotaRequestBase */
#define NS_IQUOTAREQUESTBASE_IID_STR "9af54222-0407-48fd-a4ab-9457c986fc49"

#define NS_IQUOTAREQUESTBASE_IID \
  {0x9af54222, 0x0407, 0x48fd, \
    { 0xa4, 0xab, 0x94, 0x57, 0xc9, 0x86, 0xfc, 0x49 }}

class NS_NO_VTABLE nsIQuotaRequestBase : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IQUOTAREQUESTBASE_IID)

  /* readonly attribute nsIPrincipal principal; */
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) = 0;

  /* readonly attribute nsresult resultCode; */
  NS_IMETHOD GetResultCode(nsresult *aResultCode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIQuotaRequestBase, NS_IQUOTAREQUESTBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIQUOTAREQUESTBASE \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override; \
  NS_IMETHOD GetResultCode(nsresult *aResultCode) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIQUOTAREQUESTBASE \
  NS_METHOD GetPrincipal(nsIPrincipal * *aPrincipal); \
  NS_METHOD GetResultCode(nsresult *aResultCode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIQUOTAREQUESTBASE(_to) \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return _to GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetResultCode(nsresult *aResultCode) override { return _to GetResultCode(aResultCode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIQUOTAREQUESTBASE(_to) \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetResultCode(nsresult *aResultCode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResultCode(aResultCode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsQuotaRequestBase : public nsIQuotaRequestBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIQUOTAREQUESTBASE

  nsQuotaRequestBase();

private:
  ~nsQuotaRequestBase();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsQuotaRequestBase, nsIQuotaRequestBase)

nsQuotaRequestBase::nsQuotaRequestBase()
{
  /* member initializers and constructor code */
}

nsQuotaRequestBase::~nsQuotaRequestBase()
{
  /* destructor code */
}

/* readonly attribute nsIPrincipal principal; */
NS_IMETHODIMP nsQuotaRequestBase::GetPrincipal(nsIPrincipal * *aPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsresult resultCode; */
NS_IMETHODIMP nsQuotaRequestBase::GetResultCode(nsresult *aResultCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIQuotaUsageRequest */
#define NS_IQUOTAUSAGEREQUEST_IID_STR "166e28e6-cf6d-4927-a6d7-b51bca9d3469"

#define NS_IQUOTAUSAGEREQUEST_IID \
  {0x166e28e6, 0xcf6d, 0x4927, \
    { 0xa6, 0xd7, 0xb5, 0x1b, 0xca, 0x9d, 0x34, 0x69 }}

class NS_NO_VTABLE nsIQuotaUsageRequest : public nsIQuotaRequestBase {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IQUOTAUSAGEREQUEST_IID)

  /* readonly attribute unsigned long long usage; */
  NS_IMETHOD GetUsage(uint64_t *aUsage) = 0;

  /* readonly attribute unsigned long long fileUsage; */
  NS_IMETHOD GetFileUsage(uint64_t *aFileUsage) = 0;

  /* attribute nsIQuotaUsageCallback callback; */
  NS_IMETHOD GetCallback(nsIQuotaUsageCallback * *aCallback) = 0;
  NS_IMETHOD SetCallback(nsIQuotaUsageCallback *aCallback) = 0;

  /* void cancel (); */
  NS_IMETHOD Cancel(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIQuotaUsageRequest, NS_IQUOTAUSAGEREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIQUOTAUSAGEREQUEST \
  NS_IMETHOD GetUsage(uint64_t *aUsage) override; \
  NS_IMETHOD GetFileUsage(uint64_t *aFileUsage) override; \
  NS_IMETHOD GetCallback(nsIQuotaUsageCallback * *aCallback) override; \
  NS_IMETHOD SetCallback(nsIQuotaUsageCallback *aCallback) override; \
  NS_IMETHOD Cancel(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIQUOTAUSAGEREQUEST \
  NS_METHOD GetUsage(uint64_t *aUsage); \
  NS_METHOD GetFileUsage(uint64_t *aFileUsage); \
  NS_METHOD GetCallback(nsIQuotaUsageCallback * *aCallback); \
  NS_METHOD SetCallback(nsIQuotaUsageCallback *aCallback); \
  NS_METHOD Cancel(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIQUOTAUSAGEREQUEST(_to) \
  NS_IMETHOD GetUsage(uint64_t *aUsage) override { return _to GetUsage(aUsage); } \
  NS_IMETHOD GetFileUsage(uint64_t *aFileUsage) override { return _to GetFileUsage(aFileUsage); } \
  NS_IMETHOD GetCallback(nsIQuotaUsageCallback * *aCallback) override { return _to GetCallback(aCallback); } \
  NS_IMETHOD SetCallback(nsIQuotaUsageCallback *aCallback) override { return _to SetCallback(aCallback); } \
  NS_IMETHOD Cancel(void) override { return _to Cancel(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIQUOTAUSAGEREQUEST(_to) \
  NS_IMETHOD GetUsage(uint64_t *aUsage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsage(aUsage); } \
  NS_IMETHOD GetFileUsage(uint64_t *aFileUsage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileUsage(aFileUsage); } \
  NS_IMETHOD GetCallback(nsIQuotaUsageCallback * *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCallback(aCallback); } \
  NS_IMETHOD SetCallback(nsIQuotaUsageCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCallback(aCallback); } \
  NS_IMETHOD Cancel(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Cancel(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsQuotaUsageRequest : public nsIQuotaUsageRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIQUOTAUSAGEREQUEST

  nsQuotaUsageRequest();

private:
  ~nsQuotaUsageRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsQuotaUsageRequest, nsIQuotaUsageRequest)

nsQuotaUsageRequest::nsQuotaUsageRequest()
{
  /* member initializers and constructor code */
}

nsQuotaUsageRequest::~nsQuotaUsageRequest()
{
  /* destructor code */
}

/* readonly attribute unsigned long long usage; */
NS_IMETHODIMP nsQuotaUsageRequest::GetUsage(uint64_t *aUsage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long fileUsage; */
NS_IMETHODIMP nsQuotaUsageRequest::GetFileUsage(uint64_t *aFileUsage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIQuotaUsageCallback callback; */
NS_IMETHODIMP nsQuotaUsageRequest::GetCallback(nsIQuotaUsageCallback * *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsQuotaUsageRequest::SetCallback(nsIQuotaUsageCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancel (); */
NS_IMETHODIMP nsQuotaUsageRequest::Cancel()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIQuotaRequest */
#define NS_IQUOTAREQUEST_IID_STR "22890e3e-ff25-4372-9684-d901060e2f6c"

#define NS_IQUOTAREQUEST_IID \
  {0x22890e3e, 0xff25, 0x4372, \
    { 0x96, 0x84, 0xd9, 0x01, 0x06, 0x0e, 0x2f, 0x6c }}

class NS_NO_VTABLE nsIQuotaRequest : public nsIQuotaRequestBase {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IQUOTAREQUEST_IID)

  /* attribute nsIQuotaCallback callback; */
  NS_IMETHOD GetCallback(nsIQuotaCallback * *aCallback) = 0;
  NS_IMETHOD SetCallback(nsIQuotaCallback *aCallback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIQuotaRequest, NS_IQUOTAREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIQUOTAREQUEST \
  NS_IMETHOD GetCallback(nsIQuotaCallback * *aCallback) override; \
  NS_IMETHOD SetCallback(nsIQuotaCallback *aCallback) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIQUOTAREQUEST \
  NS_METHOD GetCallback(nsIQuotaCallback * *aCallback); \
  NS_METHOD SetCallback(nsIQuotaCallback *aCallback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIQUOTAREQUEST(_to) \
  NS_IMETHOD GetCallback(nsIQuotaCallback * *aCallback) override { return _to GetCallback(aCallback); } \
  NS_IMETHOD SetCallback(nsIQuotaCallback *aCallback) override { return _to SetCallback(aCallback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIQUOTAREQUEST(_to) \
  NS_IMETHOD GetCallback(nsIQuotaCallback * *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCallback(aCallback); } \
  NS_IMETHOD SetCallback(nsIQuotaCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCallback(aCallback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsQuotaRequest : public nsIQuotaRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIQUOTAREQUEST

  nsQuotaRequest();

private:
  ~nsQuotaRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsQuotaRequest, nsIQuotaRequest)

nsQuotaRequest::nsQuotaRequest()
{
  /* member initializers and constructor code */
}

nsQuotaRequest::~nsQuotaRequest()
{
  /* destructor code */
}

/* attribute nsIQuotaCallback callback; */
NS_IMETHODIMP nsQuotaRequest::GetCallback(nsIQuotaCallback * *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsQuotaRequest::SetCallback(nsIQuotaCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIQuotaRequests_h__ */
