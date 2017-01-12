/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPaymentProviderStrategy.idl
 */

#ifndef __gen_nsIPaymentProviderStrategy_h__
#define __gen_nsIPaymentProviderStrategy_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPaymentProviderStrategy */
#define NS_IPAYMENTPROVIDERSTRATEGY_IID_STR "c3971bd9-0fbf-48d3-9498-0ac340d0d216"

#define NS_IPAYMENTPROVIDERSTRATEGY_IID \
  {0xc3971bd9, 0x0fbf, 0x48d3, \
    { 0x94, 0x98, 0x0a, 0xc3, 0x40, 0xd0, 0xd2, 0x16 }}

class NS_NO_VTABLE nsIPaymentProviderStrategy : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPAYMENTPROVIDERSTRATEGY_IID)

  /* attribute DOMString paymentServiceId; */
  NS_IMETHOD GetPaymentServiceId(nsAString & aPaymentServiceId) = 0;
  NS_IMETHOD SetPaymentServiceId(const nsAString & aPaymentServiceId) = 0;

  /* readonly attribute jsval iccInfo; */
  NS_IMETHOD GetIccInfo(JS::MutableHandleValue aIccInfo) = 0;

  /* void cleanup (); */
  NS_IMETHOD Cleanup(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPaymentProviderStrategy, NS_IPAYMENTPROVIDERSTRATEGY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPAYMENTPROVIDERSTRATEGY \
  NS_IMETHOD GetPaymentServiceId(nsAString & aPaymentServiceId) override; \
  NS_IMETHOD SetPaymentServiceId(const nsAString & aPaymentServiceId) override; \
  NS_IMETHOD GetIccInfo(JS::MutableHandleValue aIccInfo) override; \
  NS_IMETHOD Cleanup(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPAYMENTPROVIDERSTRATEGY \
  NS_METHOD GetPaymentServiceId(nsAString & aPaymentServiceId); \
  NS_METHOD SetPaymentServiceId(const nsAString & aPaymentServiceId); \
  NS_METHOD GetIccInfo(JS::MutableHandleValue aIccInfo); \
  NS_METHOD Cleanup(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPAYMENTPROVIDERSTRATEGY(_to) \
  NS_IMETHOD GetPaymentServiceId(nsAString & aPaymentServiceId) override { return _to GetPaymentServiceId(aPaymentServiceId); } \
  NS_IMETHOD SetPaymentServiceId(const nsAString & aPaymentServiceId) override { return _to SetPaymentServiceId(aPaymentServiceId); } \
  NS_IMETHOD GetIccInfo(JS::MutableHandleValue aIccInfo) override { return _to GetIccInfo(aIccInfo); } \
  NS_IMETHOD Cleanup(void) override { return _to Cleanup(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPAYMENTPROVIDERSTRATEGY(_to) \
  NS_IMETHOD GetPaymentServiceId(nsAString & aPaymentServiceId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPaymentServiceId(aPaymentServiceId); } \
  NS_IMETHOD SetPaymentServiceId(const nsAString & aPaymentServiceId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPaymentServiceId(aPaymentServiceId); } \
  NS_IMETHOD GetIccInfo(JS::MutableHandleValue aIccInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIccInfo(aIccInfo); } \
  NS_IMETHOD Cleanup(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Cleanup(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPaymentProviderStrategy : public nsIPaymentProviderStrategy
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPAYMENTPROVIDERSTRATEGY

  nsPaymentProviderStrategy();

private:
  ~nsPaymentProviderStrategy();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPaymentProviderStrategy, nsIPaymentProviderStrategy)

nsPaymentProviderStrategy::nsPaymentProviderStrategy()
{
  /* member initializers and constructor code */
}

nsPaymentProviderStrategy::~nsPaymentProviderStrategy()
{
  /* destructor code */
}

/* attribute DOMString paymentServiceId; */
NS_IMETHODIMP nsPaymentProviderStrategy::GetPaymentServiceId(nsAString & aPaymentServiceId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPaymentProviderStrategy::SetPaymentServiceId(const nsAString & aPaymentServiceId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval iccInfo; */
NS_IMETHODIMP nsPaymentProviderStrategy::GetIccInfo(JS::MutableHandleValue aIccInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cleanup (); */
NS_IMETHODIMP nsPaymentProviderStrategy::Cleanup()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPaymentProviderStrategy_h__ */
