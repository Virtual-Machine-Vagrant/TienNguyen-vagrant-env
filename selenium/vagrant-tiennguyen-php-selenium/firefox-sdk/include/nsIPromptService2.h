/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPromptService2.idl
 */

#ifndef __gen_nsIPromptService2_h__
#define __gen_nsIPromptService2_h__


#ifndef __gen_nsIPromptService_h__
#include "nsIPromptService.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAuthInformation; /* forward declaration */

class nsIAuthPromptCallback; /* forward declaration */

class nsICancelable; /* forward declaration */

class nsIChannel; /* forward declaration */

class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsIPromptService2 */
#define NS_IPROMPTSERVICE2_IID_STR "3775ad32-8326-422b-9ff3-87ef1d3f9f0e"

#define NS_IPROMPTSERVICE2_IID \
  {0x3775ad32, 0x8326, 0x422b, \
    { 0x9f, 0xf3, 0x87, 0xef, 0x1d, 0x3f, 0x9f, 0x0e }}

class NS_NO_VTABLE nsIPromptService2 : public nsIPromptService {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROMPTSERVICE2_IID)

  /* boolean promptAuth (in mozIDOMWindowProxy aParent, in nsIChannel aChannel, in uint32_t level, in nsIAuthInformation authInfo, in wstring checkboxLabel, inout boolean checkValue); */
  NS_IMETHOD PromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, bool *_retval) = 0;

  /* nsICancelable asyncPromptAuth (in mozIDOMWindowProxy aParent, in nsIChannel aChannel, in nsIAuthPromptCallback aCallback, in nsISupports aContext, in uint32_t level, in nsIAuthInformation authInfo, in wstring checkboxLabel, inout boolean checkValue); */
  NS_IMETHOD AsyncPromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, nsIAuthPromptCallback *aCallback, nsISupports *aContext, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, nsICancelable * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPromptService2, NS_IPROMPTSERVICE2_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROMPTSERVICE2 \
  NS_IMETHOD PromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, bool *_retval) override; \
  NS_IMETHOD AsyncPromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, nsIAuthPromptCallback *aCallback, nsISupports *aContext, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, nsICancelable * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPROMPTSERVICE2 \
  NS_METHOD PromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, bool *_retval); \
  NS_METHOD AsyncPromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, nsIAuthPromptCallback *aCallback, nsISupports *aContext, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, nsICancelable * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROMPTSERVICE2(_to) \
  NS_IMETHOD PromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, bool *_retval) override { return _to PromptAuth(aParent, aChannel, level, authInfo, checkboxLabel, checkValue, _retval); } \
  NS_IMETHOD AsyncPromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, nsIAuthPromptCallback *aCallback, nsISupports *aContext, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, nsICancelable * *_retval) override { return _to AsyncPromptAuth(aParent, aChannel, aCallback, aContext, level, authInfo, checkboxLabel, checkValue, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROMPTSERVICE2(_to) \
  NS_IMETHOD PromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PromptAuth(aParent, aChannel, level, authInfo, checkboxLabel, checkValue, _retval); } \
  NS_IMETHOD AsyncPromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, nsIAuthPromptCallback *aCallback, nsISupports *aContext, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, nsICancelable * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncPromptAuth(aParent, aChannel, aCallback, aContext, level, authInfo, checkboxLabel, checkValue, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPromptService2 : public nsIPromptService2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROMPTSERVICE2

  nsPromptService2();

private:
  ~nsPromptService2();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPromptService2, nsIPromptService2)

nsPromptService2::nsPromptService2()
{
  /* member initializers and constructor code */
}

nsPromptService2::~nsPromptService2()
{
  /* destructor code */
}

/* boolean promptAuth (in mozIDOMWindowProxy aParent, in nsIChannel aChannel, in uint32_t level, in nsIAuthInformation authInfo, in wstring checkboxLabel, inout boolean checkValue); */
NS_IMETHODIMP nsPromptService2::PromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsICancelable asyncPromptAuth (in mozIDOMWindowProxy aParent, in nsIChannel aChannel, in nsIAuthPromptCallback aCallback, in nsISupports aContext, in uint32_t level, in nsIAuthInformation authInfo, in wstring checkboxLabel, inout boolean checkValue); */
NS_IMETHODIMP nsPromptService2::AsyncPromptAuth(mozIDOMWindowProxy *aParent, nsIChannel *aChannel, nsIAuthPromptCallback *aCallback, nsISupports *aContext, uint32_t level, nsIAuthInformation *authInfo, const char16_t * checkboxLabel, bool *checkValue, nsICancelable * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPromptService2_h__ */
