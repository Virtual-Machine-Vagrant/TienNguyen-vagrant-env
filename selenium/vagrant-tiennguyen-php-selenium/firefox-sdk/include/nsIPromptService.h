/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPromptService.idl
 */

#ifndef __gen_nsIPromptService_h__
#define __gen_nsIPromptService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsIPromptService */
#define NS_IPROMPTSERVICE_IID_STR "404ebfa2-d8f4-4c94-8416-e65a55f9df5a"

#define NS_IPROMPTSERVICE_IID \
  {0x404ebfa2, 0xd8f4, 0x4c94, \
    { 0x84, 0x16, 0xe6, 0x5a, 0x55, 0xf9, 0xdf, 0x5a }}

class NS_NO_VTABLE nsIPromptService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPROMPTSERVICE_IID)

  /* void alert (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText); */
  NS_IMETHOD Alert(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText) = 0;

  /* void alertCheck (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in wstring aCheckMsg, inout boolean aCheckState); */
  NS_IMETHOD AlertCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState) = 0;

  /* boolean confirm (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText); */
  NS_IMETHOD Confirm(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, bool *_retval) = 0;

  /* boolean confirmCheck (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in wstring aCheckMsg, inout boolean aCheckState); */
  NS_IMETHOD ConfirmCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) = 0;

  enum {
    BUTTON_POS_0 = 1U,
    BUTTON_POS_1 = 256U,
    BUTTON_POS_2 = 65536U,
    BUTTON_TITLE_OK = 1U,
    BUTTON_TITLE_CANCEL = 2U,
    BUTTON_TITLE_YES = 3U,
    BUTTON_TITLE_NO = 4U,
    BUTTON_TITLE_SAVE = 5U,
    BUTTON_TITLE_DONT_SAVE = 6U,
    BUTTON_TITLE_REVERT = 7U,
    BUTTON_TITLE_IS_STRING = 127U,
    BUTTON_POS_0_DEFAULT = 0U,
    BUTTON_POS_1_DEFAULT = 16777216U,
    BUTTON_POS_2_DEFAULT = 33554432U,
    BUTTON_DELAY_ENABLE = 67108864U,
    STD_OK_CANCEL_BUTTONS = 513U,
    STD_YES_NO_BUTTONS = 1027U
  };

  /* int32_t confirmEx (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in unsigned long aButtonFlags, in wstring aButton0Title, in wstring aButton1Title, in wstring aButton2Title, in wstring aCheckMsg, inout boolean aCheckState); */
  NS_IMETHOD ConfirmEx(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aButtonFlags, const char16_t * aButton0Title, const char16_t * aButton1Title, const char16_t * aButton2Title, const char16_t * aCheckMsg, bool *aCheckState, int32_t *_retval) = 0;

  /* boolean prompt (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, inout wstring aValue, in wstring aCheckMsg, inout boolean aCheckState); */
  NS_IMETHOD Prompt(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aValue, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) = 0;

  /* boolean promptUsernameAndPassword (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, inout wstring aUsername, inout wstring aPassword, in wstring aCheckMsg, inout boolean aCheckState); */
  NS_IMETHOD PromptUsernameAndPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aUsername, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) = 0;

  /* boolean promptPassword (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, inout wstring aPassword, in wstring aCheckMsg, inout boolean aCheckState); */
  NS_IMETHOD PromptPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) = 0;

  /* boolean select (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in uint32_t aCount, [array, size_is (aCount)] in wstring aSelectList, out long aOutSelection); */
  NS_IMETHOD Select(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aCount, const char16_t * *aSelectList, int32_t *aOutSelection, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPromptService, NS_IPROMPTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROMPTSERVICE \
  NS_IMETHOD Alert(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText) override; \
  NS_IMETHOD AlertCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState) override; \
  NS_IMETHOD Confirm(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, bool *_retval) override; \
  NS_IMETHOD ConfirmCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override; \
  NS_IMETHOD ConfirmEx(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aButtonFlags, const char16_t * aButton0Title, const char16_t * aButton1Title, const char16_t * aButton2Title, const char16_t * aCheckMsg, bool *aCheckState, int32_t *_retval) override; \
  NS_IMETHOD Prompt(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aValue, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override; \
  NS_IMETHOD PromptUsernameAndPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aUsername, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override; \
  NS_IMETHOD PromptPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override; \
  NS_IMETHOD Select(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aCount, const char16_t * *aSelectList, int32_t *aOutSelection, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPROMPTSERVICE \
  NS_METHOD Alert(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText); \
  NS_METHOD AlertCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState); \
  NS_METHOD Confirm(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, bool *_retval); \
  NS_METHOD ConfirmCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval); \
  NS_METHOD ConfirmEx(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aButtonFlags, const char16_t * aButton0Title, const char16_t * aButton1Title, const char16_t * aButton2Title, const char16_t * aCheckMsg, bool *aCheckState, int32_t *_retval); \
  NS_METHOD Prompt(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aValue, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval); \
  NS_METHOD PromptUsernameAndPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aUsername, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval); \
  NS_METHOD PromptPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval); \
  NS_METHOD Select(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aCount, const char16_t * *aSelectList, int32_t *aOutSelection, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROMPTSERVICE(_to) \
  NS_IMETHOD Alert(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText) override { return _to Alert(aParent, aDialogTitle, aText); } \
  NS_IMETHOD AlertCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState) override { return _to AlertCheck(aParent, aDialogTitle, aText, aCheckMsg, aCheckState); } \
  NS_IMETHOD Confirm(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, bool *_retval) override { return _to Confirm(aParent, aDialogTitle, aText, _retval); } \
  NS_IMETHOD ConfirmCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return _to ConfirmCheck(aParent, aDialogTitle, aText, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD ConfirmEx(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aButtonFlags, const char16_t * aButton0Title, const char16_t * aButton1Title, const char16_t * aButton2Title, const char16_t * aCheckMsg, bool *aCheckState, int32_t *_retval) override { return _to ConfirmEx(aParent, aDialogTitle, aText, aButtonFlags, aButton0Title, aButton1Title, aButton2Title, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD Prompt(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aValue, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return _to Prompt(aParent, aDialogTitle, aText, aValue, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD PromptUsernameAndPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aUsername, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return _to PromptUsernameAndPassword(aParent, aDialogTitle, aText, aUsername, aPassword, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD PromptPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return _to PromptPassword(aParent, aDialogTitle, aText, aPassword, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD Select(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aCount, const char16_t * *aSelectList, int32_t *aOutSelection, bool *_retval) override { return _to Select(aParent, aDialogTitle, aText, aCount, aSelectList, aOutSelection, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROMPTSERVICE(_to) \
  NS_IMETHOD Alert(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Alert(aParent, aDialogTitle, aText); } \
  NS_IMETHOD AlertCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AlertCheck(aParent, aDialogTitle, aText, aCheckMsg, aCheckState); } \
  NS_IMETHOD Confirm(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Confirm(aParent, aDialogTitle, aText, _retval); } \
  NS_IMETHOD ConfirmCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmCheck(aParent, aDialogTitle, aText, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD ConfirmEx(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aButtonFlags, const char16_t * aButton0Title, const char16_t * aButton1Title, const char16_t * aButton2Title, const char16_t * aCheckMsg, bool *aCheckState, int32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ConfirmEx(aParent, aDialogTitle, aText, aButtonFlags, aButton0Title, aButton1Title, aButton2Title, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD Prompt(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aValue, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Prompt(aParent, aDialogTitle, aText, aValue, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD PromptUsernameAndPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aUsername, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PromptUsernameAndPassword(aParent, aDialogTitle, aText, aUsername, aPassword, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD PromptPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PromptPassword(aParent, aDialogTitle, aText, aPassword, aCheckMsg, aCheckState, _retval); } \
  NS_IMETHOD Select(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aCount, const char16_t * *aSelectList, int32_t *aOutSelection, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Select(aParent, aDialogTitle, aText, aCount, aSelectList, aOutSelection, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPromptService : public nsIPromptService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROMPTSERVICE

  nsPromptService();

private:
  ~nsPromptService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPromptService, nsIPromptService)

nsPromptService::nsPromptService()
{
  /* member initializers and constructor code */
}

nsPromptService::~nsPromptService()
{
  /* destructor code */
}

/* void alert (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText); */
NS_IMETHODIMP nsPromptService::Alert(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void alertCheck (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in wstring aCheckMsg, inout boolean aCheckState); */
NS_IMETHODIMP nsPromptService::AlertCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirm (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText); */
NS_IMETHODIMP nsPromptService::Confirm(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean confirmCheck (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in wstring aCheckMsg, inout boolean aCheckState); */
NS_IMETHODIMP nsPromptService::ConfirmCheck(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* int32_t confirmEx (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in unsigned long aButtonFlags, in wstring aButton0Title, in wstring aButton1Title, in wstring aButton2Title, in wstring aCheckMsg, inout boolean aCheckState); */
NS_IMETHODIMP nsPromptService::ConfirmEx(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aButtonFlags, const char16_t * aButton0Title, const char16_t * aButton1Title, const char16_t * aButton2Title, const char16_t * aCheckMsg, bool *aCheckState, int32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean prompt (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, inout wstring aValue, in wstring aCheckMsg, inout boolean aCheckState); */
NS_IMETHODIMP nsPromptService::Prompt(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aValue, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean promptUsernameAndPassword (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, inout wstring aUsername, inout wstring aPassword, in wstring aCheckMsg, inout boolean aCheckState); */
NS_IMETHODIMP nsPromptService::PromptUsernameAndPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aUsername, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean promptPassword (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, inout wstring aPassword, in wstring aCheckMsg, inout boolean aCheckState); */
NS_IMETHODIMP nsPromptService::PromptPassword(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, char16_t * *aPassword, const char16_t * aCheckMsg, bool *aCheckState, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean select (in mozIDOMWindowProxy aParent, in wstring aDialogTitle, in wstring aText, in uint32_t aCount, [array, size_is (aCount)] in wstring aSelectList, out long aOutSelection); */
NS_IMETHODIMP nsPromptService::Select(mozIDOMWindowProxy *aParent, const char16_t * aDialogTitle, const char16_t * aText, uint32_t aCount, const char16_t * *aSelectList, int32_t *aOutSelection, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPromptService_h__ */
