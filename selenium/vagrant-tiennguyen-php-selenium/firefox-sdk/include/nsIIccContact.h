/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIIccContact.idl
 */

#ifndef __gen_nsIIccContact_h__
#define __gen_nsIIccContact_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIIccContact */
#define NS_IICCCONTACT_IID_STR "0f3dbcd1-9f7b-40a8-aa3c-b5701978ec53"

#define NS_IICCCONTACT_IID \
  {0x0f3dbcd1, 0x9f7b, 0x40a8, \
    { 0xaa, 0x3c, 0xb5, 0x70, 0x19, 0x78, 0xec, 0x53 }}

class NS_NO_VTABLE nsIIccContact : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IICCCONTACT_IID)

  /* readonly attribute DOMString id; */
  NS_IMETHOD GetId(nsAString & aId) = 0;

  /* void getNames ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out wstring aNames); */
  NS_IMETHOD GetNames(uint32_t *aCount, char16_t * **aNames) = 0;

  /* void getNumbers ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out wstring aNumbers); */
  NS_IMETHOD GetNumbers(uint32_t *aCount, char16_t * **aNumbers) = 0;

  /* void getEmails ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out wstring aEmails); */
  NS_IMETHOD GetEmails(uint32_t *aCount, char16_t * **aEmails) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIccContact, NS_IICCCONTACT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIICCCONTACT \
  NS_IMETHOD GetId(nsAString & aId) override; \
  NS_IMETHOD GetNames(uint32_t *aCount, char16_t * **aNames) override; \
  NS_IMETHOD GetNumbers(uint32_t *aCount, char16_t * **aNumbers) override; \
  NS_IMETHOD GetEmails(uint32_t *aCount, char16_t * **aEmails) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIICCCONTACT \
  NS_METHOD GetId(nsAString & aId); \
  NS_METHOD GetNames(uint32_t *aCount, char16_t * **aNames); \
  NS_METHOD GetNumbers(uint32_t *aCount, char16_t * **aNumbers); \
  NS_METHOD GetEmails(uint32_t *aCount, char16_t * **aEmails); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIICCCONTACT(_to) \
  NS_IMETHOD GetId(nsAString & aId) override { return _to GetId(aId); } \
  NS_IMETHOD GetNames(uint32_t *aCount, char16_t * **aNames) override { return _to GetNames(aCount, aNames); } \
  NS_IMETHOD GetNumbers(uint32_t *aCount, char16_t * **aNumbers) override { return _to GetNumbers(aCount, aNumbers); } \
  NS_IMETHOD GetEmails(uint32_t *aCount, char16_t * **aEmails) override { return _to GetEmails(aCount, aEmails); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIICCCONTACT(_to) \
  NS_IMETHOD GetId(nsAString & aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD GetNames(uint32_t *aCount, char16_t * **aNames) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNames(aCount, aNames); } \
  NS_IMETHOD GetNumbers(uint32_t *aCount, char16_t * **aNumbers) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumbers(aCount, aNumbers); } \
  NS_IMETHOD GetEmails(uint32_t *aCount, char16_t * **aEmails) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEmails(aCount, aEmails); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIccContact : public nsIIccContact
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIICCCONTACT

  nsIccContact();

private:
  ~nsIccContact();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIccContact, nsIIccContact)

nsIccContact::nsIccContact()
{
  /* member initializers and constructor code */
}

nsIccContact::~nsIccContact()
{
  /* destructor code */
}

/* readonly attribute DOMString id; */
NS_IMETHODIMP nsIccContact::GetId(nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getNames ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out wstring aNames); */
NS_IMETHODIMP nsIccContact::GetNames(uint32_t *aCount, char16_t * **aNames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getNumbers ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out wstring aNumbers); */
NS_IMETHODIMP nsIccContact::GetNumbers(uint32_t *aCount, char16_t * **aNumbers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getEmails ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out wstring aEmails); */
NS_IMETHODIMP nsIccContact::GetEmails(uint32_t *aCount, char16_t * **aEmails)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIccContact_h__ */
