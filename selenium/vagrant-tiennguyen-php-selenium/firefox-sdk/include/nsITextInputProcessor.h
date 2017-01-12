/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsITextInputProcessor.idl
 */

#ifndef __gen_nsITextInputProcessor_h__
#define __gen_nsITextInputProcessor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMKeyEvent; /* forward declaration */

class mozIDOMWindow; /* forward declaration */

class nsITextInputProcessorCallback; /* forward declaration */


/* starting interface:    nsITextInputProcessor */
#define NS_ITEXTINPUTPROCESSOR_IID_STR "47ae2181-2e98-4d58-84a2-b8db6764ce9a"

#define NS_ITEXTINPUTPROCESSOR_IID \
  {0x47ae2181, 0x2e98, 0x4d58, \
    { 0x84, 0xa2, 0xb8, 0xdb, 0x67, 0x64, 0xce, 0x9a }}

class NS_NO_VTABLE nsITextInputProcessor : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITEXTINPUTPROCESSOR_IID)

  /* readonly attribute boolean hasComposition; */
  NS_IMETHOD GetHasComposition(bool *aHasComposition) = 0;

  /* boolean beginInputTransaction (in mozIDOMWindow aWindow, in nsITextInputProcessorCallback aCallback); */
  NS_IMETHOD BeginInputTransaction(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, bool *_retval) = 0;

  /* [optional_argc] boolean beginInputTransactionForTests (in mozIDOMWindow aWindow, [optional] in nsITextInputProcessorCallback aCallback); */
  NS_IMETHOD BeginInputTransactionForTests(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, uint8_t _argc, bool *_retval) = 0;

  /* [optional_argc] boolean startComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
  NS_IMETHOD StartComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) = 0;

  /* void setPendingCompositionString (in DOMString aString); */
  NS_IMETHOD SetPendingCompositionString(const nsAString & aString) = 0;

  enum {
    ATTR_RAW_CLAUSE = 2U,
    ATTR_SELECTED_RAW_CLAUSE = 3U,
    ATTR_CONVERTED_CLAUSE = 4U,
    ATTR_SELECTED_CLAUSE = 5U
  };

  /* void appendClauseToPendingComposition (in unsigned long aLength, in unsigned long aAttribute); */
  NS_IMETHOD AppendClauseToPendingComposition(uint32_t aLength, uint32_t aAttribute) = 0;

  /* void setCaretInPendingComposition (in unsigned long aOffset); */
  NS_IMETHOD SetCaretInPendingComposition(uint32_t aOffset) = 0;

  /* [optional_argc] boolean flushPendingComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
  NS_IMETHOD FlushPendingComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) = 0;

  /* [optional_argc] void commitComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
  NS_IMETHOD CommitComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) = 0;

  /* [optional_argc] boolean commitCompositionWith (in DOMString aCommitString, [optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
  NS_IMETHOD CommitCompositionWith(const nsAString & aCommitString, nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) = 0;

  /* [optional_argc] void cancelComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
  NS_IMETHOD CancelComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) = 0;

  enum {
    KEY_DEFAULT_PREVENTED = 1U,
    KEY_NON_PRINTABLE_KEY = 2U,
    KEY_FORCE_PRINTABLE_KEY = 4U,
    KEY_KEEP_KEY_LOCATION_STANDARD = 8U,
    KEY_KEEP_KEYCODE_ZERO = 16U,
    KEY_DONT_DISPATCH_MODIFIER_KEY_EVENT = 32U,
    KEYEVENT_NOT_CONSUMED = 0U,
    KEYDOWN_IS_CONSUMED = 1U,
    KEYPRESS_IS_CONSUMED = 2U
  };

  /* [optional_argc] unsigned long keydown (in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
  NS_IMETHOD Keydown(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, uint32_t *_retval) = 0;

  /* [optional_argc] boolean keyup (in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
  NS_IMETHOD Keyup(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) = 0;

  /* boolean getModifierState (in DOMString aModifierKey); */
  NS_IMETHOD GetModifierState(const nsAString & aModifierKey, bool *_retval) = 0;

  /* void shareModifierStateOf (in nsITextInputProcessor aOther); */
  NS_IMETHOD ShareModifierStateOf(nsITextInputProcessor *aOther) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITextInputProcessor, NS_ITEXTINPUTPROCESSOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITEXTINPUTPROCESSOR \
  NS_IMETHOD GetHasComposition(bool *aHasComposition) override; \
  NS_IMETHOD BeginInputTransaction(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, bool *_retval) override; \
  NS_IMETHOD BeginInputTransactionForTests(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, uint8_t _argc, bool *_retval) override; \
  NS_IMETHOD StartComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override; \
  NS_IMETHOD SetPendingCompositionString(const nsAString & aString) override; \
  NS_IMETHOD AppendClauseToPendingComposition(uint32_t aLength, uint32_t aAttribute) override; \
  NS_IMETHOD SetCaretInPendingComposition(uint32_t aOffset) override; \
  NS_IMETHOD FlushPendingComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override; \
  NS_IMETHOD CommitComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) override; \
  NS_IMETHOD CommitCompositionWith(const nsAString & aCommitString, nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override; \
  NS_IMETHOD CancelComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) override; \
  NS_IMETHOD Keydown(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, uint32_t *_retval) override; \
  NS_IMETHOD Keyup(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override; \
  NS_IMETHOD GetModifierState(const nsAString & aModifierKey, bool *_retval) override; \
  NS_IMETHOD ShareModifierStateOf(nsITextInputProcessor *aOther) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITEXTINPUTPROCESSOR \
  NS_METHOD GetHasComposition(bool *aHasComposition); \
  NS_METHOD BeginInputTransaction(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, bool *_retval); \
  NS_METHOD BeginInputTransactionForTests(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, uint8_t _argc, bool *_retval); \
  NS_METHOD StartComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval); \
  NS_METHOD SetPendingCompositionString(const nsAString & aString); \
  NS_METHOD AppendClauseToPendingComposition(uint32_t aLength, uint32_t aAttribute); \
  NS_METHOD SetCaretInPendingComposition(uint32_t aOffset); \
  NS_METHOD FlushPendingComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval); \
  NS_METHOD CommitComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc); \
  NS_METHOD CommitCompositionWith(const nsAString & aCommitString, nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval); \
  NS_METHOD CancelComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc); \
  NS_METHOD Keydown(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, uint32_t *_retval); \
  NS_METHOD Keyup(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval); \
  NS_METHOD GetModifierState(const nsAString & aModifierKey, bool *_retval); \
  NS_METHOD ShareModifierStateOf(nsITextInputProcessor *aOther); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITEXTINPUTPROCESSOR(_to) \
  NS_IMETHOD GetHasComposition(bool *aHasComposition) override { return _to GetHasComposition(aHasComposition); } \
  NS_IMETHOD BeginInputTransaction(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, bool *_retval) override { return _to BeginInputTransaction(aWindow, aCallback, _retval); } \
  NS_IMETHOD BeginInputTransactionForTests(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, uint8_t _argc, bool *_retval) override { return _to BeginInputTransactionForTests(aWindow, aCallback, _argc, _retval); } \
  NS_IMETHOD StartComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return _to StartComposition(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD SetPendingCompositionString(const nsAString & aString) override { return _to SetPendingCompositionString(aString); } \
  NS_IMETHOD AppendClauseToPendingComposition(uint32_t aLength, uint32_t aAttribute) override { return _to AppendClauseToPendingComposition(aLength, aAttribute); } \
  NS_IMETHOD SetCaretInPendingComposition(uint32_t aOffset) override { return _to SetCaretInPendingComposition(aOffset); } \
  NS_IMETHOD FlushPendingComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return _to FlushPendingComposition(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD CommitComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) override { return _to CommitComposition(aKeyboardEvent, aKeyFlags, _argc); } \
  NS_IMETHOD CommitCompositionWith(const nsAString & aCommitString, nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return _to CommitCompositionWith(aCommitString, aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD CancelComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) override { return _to CancelComposition(aKeyboardEvent, aKeyFlags, _argc); } \
  NS_IMETHOD Keydown(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, uint32_t *_retval) override { return _to Keydown(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD Keyup(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return _to Keyup(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD GetModifierState(const nsAString & aModifierKey, bool *_retval) override { return _to GetModifierState(aModifierKey, _retval); } \
  NS_IMETHOD ShareModifierStateOf(nsITextInputProcessor *aOther) override { return _to ShareModifierStateOf(aOther); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITEXTINPUTPROCESSOR(_to) \
  NS_IMETHOD GetHasComposition(bool *aHasComposition) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasComposition(aHasComposition); } \
  NS_IMETHOD BeginInputTransaction(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginInputTransaction(aWindow, aCallback, _retval); } \
  NS_IMETHOD BeginInputTransactionForTests(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, uint8_t _argc, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginInputTransactionForTests(aWindow, aCallback, _argc, _retval); } \
  NS_IMETHOD StartComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartComposition(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD SetPendingCompositionString(const nsAString & aString) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPendingCompositionString(aString); } \
  NS_IMETHOD AppendClauseToPendingComposition(uint32_t aLength, uint32_t aAttribute) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendClauseToPendingComposition(aLength, aAttribute); } \
  NS_IMETHOD SetCaretInPendingComposition(uint32_t aOffset) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCaretInPendingComposition(aOffset); } \
  NS_IMETHOD FlushPendingComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FlushPendingComposition(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD CommitComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CommitComposition(aKeyboardEvent, aKeyFlags, _argc); } \
  NS_IMETHOD CommitCompositionWith(const nsAString & aCommitString, nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CommitCompositionWith(aCommitString, aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD CancelComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelComposition(aKeyboardEvent, aKeyFlags, _argc); } \
  NS_IMETHOD Keydown(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Keydown(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD Keyup(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Keyup(aKeyboardEvent, aKeyFlags, _argc, _retval); } \
  NS_IMETHOD GetModifierState(const nsAString & aModifierKey, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetModifierState(aModifierKey, _retval); } \
  NS_IMETHOD ShareModifierStateOf(nsITextInputProcessor *aOther) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShareModifierStateOf(aOther); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTextInputProcessor : public nsITextInputProcessor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITEXTINPUTPROCESSOR

  nsTextInputProcessor();

private:
  ~nsTextInputProcessor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTextInputProcessor, nsITextInputProcessor)

nsTextInputProcessor::nsTextInputProcessor()
{
  /* member initializers and constructor code */
}

nsTextInputProcessor::~nsTextInputProcessor()
{
  /* destructor code */
}

/* readonly attribute boolean hasComposition; */
NS_IMETHODIMP nsTextInputProcessor::GetHasComposition(bool *aHasComposition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean beginInputTransaction (in mozIDOMWindow aWindow, in nsITextInputProcessorCallback aCallback); */
NS_IMETHODIMP nsTextInputProcessor::BeginInputTransaction(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] boolean beginInputTransactionForTests (in mozIDOMWindow aWindow, [optional] in nsITextInputProcessorCallback aCallback); */
NS_IMETHODIMP nsTextInputProcessor::BeginInputTransactionForTests(mozIDOMWindow *aWindow, nsITextInputProcessorCallback *aCallback, uint8_t _argc, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] boolean startComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
NS_IMETHODIMP nsTextInputProcessor::StartComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setPendingCompositionString (in DOMString aString); */
NS_IMETHODIMP nsTextInputProcessor::SetPendingCompositionString(const nsAString & aString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendClauseToPendingComposition (in unsigned long aLength, in unsigned long aAttribute); */
NS_IMETHODIMP nsTextInputProcessor::AppendClauseToPendingComposition(uint32_t aLength, uint32_t aAttribute)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCaretInPendingComposition (in unsigned long aOffset); */
NS_IMETHODIMP nsTextInputProcessor::SetCaretInPendingComposition(uint32_t aOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] boolean flushPendingComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
NS_IMETHODIMP nsTextInputProcessor::FlushPendingComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void commitComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
NS_IMETHODIMP nsTextInputProcessor::CommitComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] boolean commitCompositionWith (in DOMString aCommitString, [optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
NS_IMETHODIMP nsTextInputProcessor::CommitCompositionWith(const nsAString & aCommitString, nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void cancelComposition ([optional] in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
NS_IMETHODIMP nsTextInputProcessor::CancelComposition(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] unsigned long keydown (in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
NS_IMETHODIMP nsTextInputProcessor::Keydown(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] boolean keyup (in nsIDOMKeyEvent aKeyboardEvent, [optional] in unsigned long aKeyFlags); */
NS_IMETHODIMP nsTextInputProcessor::Keyup(nsIDOMKeyEvent *aKeyboardEvent, uint32_t aKeyFlags, uint8_t _argc, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getModifierState (in DOMString aModifierKey); */
NS_IMETHODIMP nsTextInputProcessor::GetModifierState(const nsAString & aModifierKey, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void shareModifierStateOf (in nsITextInputProcessor aOther); */
NS_IMETHODIMP nsTextInputProcessor::ShareModifierStateOf(nsITextInputProcessor *aOther)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define TEXT_INPUT_PROCESSOR_CID \
  { 0xcaaab47f, 0x1e31, 0x478e, \
    { 0x89, 0x19, 0x97, 0x09, 0x04, 0xe9, 0xcb, 0x72 } }
#define TEXT_INPUT_PROCESSOR_CONTRACTID \
  "@mozilla.org/text-input-processor;1"

#endif /* __gen_nsITextInputProcessor_h__ */
