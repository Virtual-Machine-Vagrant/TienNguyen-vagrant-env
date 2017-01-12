/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIMobileDeviceIdentities.idl
 */

#ifndef __gen_nsIMobileDeviceIdentities_h__
#define __gen_nsIMobileDeviceIdentities_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIMobileDeviceIdentities */
#define NS_IMOBILEDEVICEIDENTITIES_IID_STR "3fc79ece-8399-11e5-beff-6b8209cb93f6"

#define NS_IMOBILEDEVICEIDENTITIES_IID \
  {0x3fc79ece, 0x8399, 0x11e5, \
    { 0xbe, 0xff, 0x6b, 0x82, 0x09, 0xcb, 0x93, 0xf6 }}

class NS_NO_VTABLE nsIMobileDeviceIdentities : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMOBILEDEVICEIDENTITIES_IID)

  /* readonly attribute DOMString imei; */
  NS_IMETHOD GetImei(nsAString & aImei) = 0;

  /* readonly attribute DOMString imeisv; */
  NS_IMETHOD GetImeisv(nsAString & aImeisv) = 0;

  /* readonly attribute DOMString esn; */
  NS_IMETHOD GetEsn(nsAString & aEsn) = 0;

  /* readonly attribute DOMString meid; */
  NS_IMETHOD GetMeid(nsAString & aMeid) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMobileDeviceIdentities, NS_IMOBILEDEVICEIDENTITIES_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMOBILEDEVICEIDENTITIES \
  NS_IMETHOD GetImei(nsAString & aImei) override; \
  NS_IMETHOD GetImeisv(nsAString & aImeisv) override; \
  NS_IMETHOD GetEsn(nsAString & aEsn) override; \
  NS_IMETHOD GetMeid(nsAString & aMeid) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIMOBILEDEVICEIDENTITIES \
  NS_METHOD GetImei(nsAString & aImei); \
  NS_METHOD GetImeisv(nsAString & aImeisv); \
  NS_METHOD GetEsn(nsAString & aEsn); \
  NS_METHOD GetMeid(nsAString & aMeid); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMOBILEDEVICEIDENTITIES(_to) \
  NS_IMETHOD GetImei(nsAString & aImei) override { return _to GetImei(aImei); } \
  NS_IMETHOD GetImeisv(nsAString & aImeisv) override { return _to GetImeisv(aImeisv); } \
  NS_IMETHOD GetEsn(nsAString & aEsn) override { return _to GetEsn(aEsn); } \
  NS_IMETHOD GetMeid(nsAString & aMeid) override { return _to GetMeid(aMeid); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMOBILEDEVICEIDENTITIES(_to) \
  NS_IMETHOD GetImei(nsAString & aImei) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImei(aImei); } \
  NS_IMETHOD GetImeisv(nsAString & aImeisv) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImeisv(aImeisv); } \
  NS_IMETHOD GetEsn(nsAString & aEsn) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEsn(aEsn); } \
  NS_IMETHOD GetMeid(nsAString & aMeid) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMeid(aMeid); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMobileDeviceIdentities : public nsIMobileDeviceIdentities
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMOBILEDEVICEIDENTITIES

  nsMobileDeviceIdentities();

private:
  ~nsMobileDeviceIdentities();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMobileDeviceIdentities, nsIMobileDeviceIdentities)

nsMobileDeviceIdentities::nsMobileDeviceIdentities()
{
  /* member initializers and constructor code */
}

nsMobileDeviceIdentities::~nsMobileDeviceIdentities()
{
  /* destructor code */
}

/* readonly attribute DOMString imei; */
NS_IMETHODIMP nsMobileDeviceIdentities::GetImei(nsAString & aImei)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString imeisv; */
NS_IMETHODIMP nsMobileDeviceIdentities::GetImeisv(nsAString & aImeisv)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString esn; */
NS_IMETHODIMP nsMobileDeviceIdentities::GetEsn(nsAString & aEsn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString meid; */
NS_IMETHODIMP nsMobileDeviceIdentities::GetMeid(nsAString & aMeid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMobileDeviceIdentities_h__ */
