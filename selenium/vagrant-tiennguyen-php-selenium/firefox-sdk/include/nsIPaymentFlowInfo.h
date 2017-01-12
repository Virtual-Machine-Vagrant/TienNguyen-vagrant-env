/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPaymentFlowInfo.idl
 */

#ifndef __gen_nsIPaymentFlowInfo_h__
#define __gen_nsIPaymentFlowInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPaymentFlowInfo */
#define NS_IPAYMENTFLOWINFO_IID_STR "f3fe3b48-fe81-4ec9-90ab-648ac9403466"

#define NS_IPAYMENTFLOWINFO_IID \
  {0xf3fe3b48, 0xfe81, 0x4ec9, \
    { 0x90, 0xab, 0x64, 0x8a, 0xc9, 0x40, 0x34, 0x66 }}

class NS_NO_VTABLE nsIPaymentFlowInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPAYMENTFLOWINFO_IID)

  /* attribute DOMString uri; */
  NS_IMETHOD GetUri(nsAString & aUri) = 0;
  NS_IMETHOD SetUri(const nsAString & aUri) = 0;

  /* attribute DOMString jwt; */
  NS_IMETHOD GetJwt(nsAString & aJwt) = 0;
  NS_IMETHOD SetJwt(const nsAString & aJwt) = 0;

  /* attribute DOMString requestMethod; */
  NS_IMETHOD GetRequestMethod(nsAString & aRequestMethod) = 0;
  NS_IMETHOD SetRequestMethod(const nsAString & aRequestMethod) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute DOMString description; */
  NS_IMETHOD GetDescription(nsAString & aDescription) = 0;
  NS_IMETHOD SetDescription(const nsAString & aDescription) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPaymentFlowInfo, NS_IPAYMENTFLOWINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPAYMENTFLOWINFO \
  NS_IMETHOD GetUri(nsAString & aUri) override; \
  NS_IMETHOD SetUri(const nsAString & aUri) override; \
  NS_IMETHOD GetJwt(nsAString & aJwt) override; \
  NS_IMETHOD SetJwt(const nsAString & aJwt) override; \
  NS_IMETHOD GetRequestMethod(nsAString & aRequestMethod) override; \
  NS_IMETHOD SetRequestMethod(const nsAString & aRequestMethod) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  NS_IMETHOD GetDescription(nsAString & aDescription) override; \
  NS_IMETHOD SetDescription(const nsAString & aDescription) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPAYMENTFLOWINFO \
  NS_METHOD GetUri(nsAString & aUri); \
  NS_METHOD SetUri(const nsAString & aUri); \
  NS_METHOD GetJwt(nsAString & aJwt); \
  NS_METHOD SetJwt(const nsAString & aJwt); \
  NS_METHOD GetRequestMethod(nsAString & aRequestMethod); \
  NS_METHOD SetRequestMethod(const nsAString & aRequestMethod); \
  NS_METHOD GetName(nsAString & aName); \
  NS_METHOD SetName(const nsAString & aName); \
  NS_METHOD GetDescription(nsAString & aDescription); \
  NS_METHOD SetDescription(const nsAString & aDescription); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPAYMENTFLOWINFO(_to) \
  NS_IMETHOD GetUri(nsAString & aUri) override { return _to GetUri(aUri); } \
  NS_IMETHOD SetUri(const nsAString & aUri) override { return _to SetUri(aUri); } \
  NS_IMETHOD GetJwt(nsAString & aJwt) override { return _to GetJwt(aJwt); } \
  NS_IMETHOD SetJwt(const nsAString & aJwt) override { return _to SetJwt(aJwt); } \
  NS_IMETHOD GetRequestMethod(nsAString & aRequestMethod) override { return _to GetRequestMethod(aRequestMethod); } \
  NS_IMETHOD SetRequestMethod(const nsAString & aRequestMethod) override { return _to SetRequestMethod(aRequestMethod); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  NS_IMETHOD GetDescription(nsAString & aDescription) override { return _to GetDescription(aDescription); } \
  NS_IMETHOD SetDescription(const nsAString & aDescription) override { return _to SetDescription(aDescription); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPAYMENTFLOWINFO(_to) \
  NS_IMETHOD GetUri(nsAString & aUri) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUri(aUri); } \
  NS_IMETHOD SetUri(const nsAString & aUri) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUri(aUri); } \
  NS_IMETHOD GetJwt(nsAString & aJwt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJwt(aJwt); } \
  NS_IMETHOD SetJwt(const nsAString & aJwt) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJwt(aJwt); } \
  NS_IMETHOD GetRequestMethod(nsAString & aRequestMethod) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestMethod(aRequestMethod); } \
  NS_IMETHOD SetRequestMethod(const nsAString & aRequestMethod) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequestMethod(aRequestMethod); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetDescription(nsAString & aDescription) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } \
  NS_IMETHOD SetDescription(const nsAString & aDescription) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDescription(aDescription); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPaymentFlowInfo : public nsIPaymentFlowInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPAYMENTFLOWINFO

  nsPaymentFlowInfo();

private:
  ~nsPaymentFlowInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPaymentFlowInfo, nsIPaymentFlowInfo)

nsPaymentFlowInfo::nsPaymentFlowInfo()
{
  /* member initializers and constructor code */
}

nsPaymentFlowInfo::~nsPaymentFlowInfo()
{
  /* destructor code */
}

/* attribute DOMString uri; */
NS_IMETHODIMP nsPaymentFlowInfo::GetUri(nsAString & aUri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPaymentFlowInfo::SetUri(const nsAString & aUri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString jwt; */
NS_IMETHODIMP nsPaymentFlowInfo::GetJwt(nsAString & aJwt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPaymentFlowInfo::SetJwt(const nsAString & aJwt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString requestMethod; */
NS_IMETHODIMP nsPaymentFlowInfo::GetRequestMethod(nsAString & aRequestMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPaymentFlowInfo::SetRequestMethod(const nsAString & aRequestMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsPaymentFlowInfo::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPaymentFlowInfo::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString description; */
NS_IMETHODIMP nsPaymentFlowInfo::GetDescription(nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPaymentFlowInfo::SetDescription(const nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPaymentFlowInfo_h__ */
