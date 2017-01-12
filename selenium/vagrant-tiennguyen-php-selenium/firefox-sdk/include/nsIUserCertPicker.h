/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIUserCertPicker.idl
 */

#ifndef __gen_nsIUserCertPicker_h__
#define __gen_nsIUserCertPicker_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIX509Cert; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */


/* starting interface:    nsIUserCertPicker */
#define NS_IUSERCERTPICKER_IID_STR "92396323-23f2-49e0-bf98-a25a725231ab"

#define NS_IUSERCERTPICKER_IID \
  {0x92396323, 0x23f2, 0x49e0, \
    { 0xbf, 0x98, 0xa2, 0x5a, 0x72, 0x52, 0x31, 0xab }}

class NS_NO_VTABLE nsIUserCertPicker : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IUSERCERTPICKER_IID)

  /* nsIX509Cert pickByUsage (in nsIInterfaceRequestor ctx, in wstring selectedNickname, in long certUsage, in boolean allowInvalid, in boolean allowDuplicateNicknames, in AString emailAddress, out boolean canceled); */
  NS_IMETHOD PickByUsage(nsIInterfaceRequestor *ctx, const char16_t * selectedNickname, int32_t certUsage, bool allowInvalid, bool allowDuplicateNicknames, const nsAString & emailAddress, bool *canceled, nsIX509Cert * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUserCertPicker, NS_IUSERCERTPICKER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIUSERCERTPICKER \
  NS_IMETHOD PickByUsage(nsIInterfaceRequestor *ctx, const char16_t * selectedNickname, int32_t certUsage, bool allowInvalid, bool allowDuplicateNicknames, const nsAString & emailAddress, bool *canceled, nsIX509Cert * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIUSERCERTPICKER \
  NS_METHOD PickByUsage(nsIInterfaceRequestor *ctx, const char16_t * selectedNickname, int32_t certUsage, bool allowInvalid, bool allowDuplicateNicknames, const nsAString & emailAddress, bool *canceled, nsIX509Cert * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIUSERCERTPICKER(_to) \
  NS_IMETHOD PickByUsage(nsIInterfaceRequestor *ctx, const char16_t * selectedNickname, int32_t certUsage, bool allowInvalid, bool allowDuplicateNicknames, const nsAString & emailAddress, bool *canceled, nsIX509Cert * *_retval) override { return _to PickByUsage(ctx, selectedNickname, certUsage, allowInvalid, allowDuplicateNicknames, emailAddress, canceled, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIUSERCERTPICKER(_to) \
  NS_IMETHOD PickByUsage(nsIInterfaceRequestor *ctx, const char16_t * selectedNickname, int32_t certUsage, bool allowInvalid, bool allowDuplicateNicknames, const nsAString & emailAddress, bool *canceled, nsIX509Cert * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PickByUsage(ctx, selectedNickname, certUsage, allowInvalid, allowDuplicateNicknames, emailAddress, canceled, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUserCertPicker : public nsIUserCertPicker
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIUSERCERTPICKER

  nsUserCertPicker();

private:
  ~nsUserCertPicker();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsUserCertPicker, nsIUserCertPicker)

nsUserCertPicker::nsUserCertPicker()
{
  /* member initializers and constructor code */
}

nsUserCertPicker::~nsUserCertPicker()
{
  /* destructor code */
}

/* nsIX509Cert pickByUsage (in nsIInterfaceRequestor ctx, in wstring selectedNickname, in long certUsage, in boolean allowInvalid, in boolean allowDuplicateNicknames, in AString emailAddress, out boolean canceled); */
NS_IMETHODIMP nsUserCertPicker::PickByUsage(nsIInterfaceRequestor *ctx, const char16_t * selectedNickname, int32_t certUsage, bool allowInvalid, bool allowDuplicateNicknames, const nsAString & emailAddress, bool *canceled, nsIX509Cert * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_CERT_PICKER_CONTRACTID "@mozilla.org/user_cert_picker;1"

#endif /* __gen_nsIUserCertPicker_h__ */
