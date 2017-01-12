/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrintStatusFeedback.idl
 */

#ifndef __gen_nsIPrintStatusFeedback_h__
#define __gen_nsIPrintStatusFeedback_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocShell; /* forward declaration */

class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsIPrintStatusFeedback */
#define NS_IPRINTSTATUSFEEDBACK_IID_STR "8eb6ffc9-715c-487e-927c-c56139229548"

#define NS_IPRINTSTATUSFEEDBACK_IID \
  {0x8eb6ffc9, 0x715c, 0x487e, \
    { 0x92, 0x7c, 0xc5, 0x61, 0x39, 0x22, 0x95, 0x48 }}

class NS_NO_VTABLE nsIPrintStatusFeedback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRINTSTATUSFEEDBACK_IID)

  /* void showStatusString (in wstring status); */
  NS_IMETHOD ShowStatusString(const char16_t * status) = 0;

  /* void startMeteors (); */
  NS_IMETHOD StartMeteors(void) = 0;

  /* void stopMeteors (); */
  NS_IMETHOD StopMeteors(void) = 0;

  /* void showProgress (in long percent); */
  NS_IMETHOD ShowProgress(int32_t percent) = 0;

  /* [noscript] void setDocShell (in nsIDocShell shell, in mozIDOMWindowProxy window); */
  NS_IMETHOD SetDocShell(nsIDocShell *shell, mozIDOMWindowProxy *window) = 0;

  /* void closeWindow (); */
  NS_IMETHOD CloseWindow(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrintStatusFeedback, NS_IPRINTSTATUSFEEDBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRINTSTATUSFEEDBACK \
  NS_IMETHOD ShowStatusString(const char16_t * status) override; \
  NS_IMETHOD StartMeteors(void) override; \
  NS_IMETHOD StopMeteors(void) override; \
  NS_IMETHOD ShowProgress(int32_t percent) override; \
  NS_IMETHOD SetDocShell(nsIDocShell *shell, mozIDOMWindowProxy *window) override; \
  NS_IMETHOD CloseWindow(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRINTSTATUSFEEDBACK \
  NS_METHOD ShowStatusString(const char16_t * status); \
  NS_METHOD StartMeteors(void); \
  NS_METHOD StopMeteors(void); \
  NS_METHOD ShowProgress(int32_t percent); \
  NS_METHOD SetDocShell(nsIDocShell *shell, mozIDOMWindowProxy *window); \
  NS_METHOD CloseWindow(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRINTSTATUSFEEDBACK(_to) \
  NS_IMETHOD ShowStatusString(const char16_t * status) override { return _to ShowStatusString(status); } \
  NS_IMETHOD StartMeteors(void) override { return _to StartMeteors(); } \
  NS_IMETHOD StopMeteors(void) override { return _to StopMeteors(); } \
  NS_IMETHOD ShowProgress(int32_t percent) override { return _to ShowProgress(percent); } \
  NS_IMETHOD SetDocShell(nsIDocShell *shell, mozIDOMWindowProxy *window) override { return _to SetDocShell(shell, window); } \
  NS_IMETHOD CloseWindow(void) override { return _to CloseWindow(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRINTSTATUSFEEDBACK(_to) \
  NS_IMETHOD ShowStatusString(const char16_t * status) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowStatusString(status); } \
  NS_IMETHOD StartMeteors(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartMeteors(); } \
  NS_IMETHOD StopMeteors(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopMeteors(); } \
  NS_IMETHOD ShowProgress(int32_t percent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowProgress(percent); } \
  NS_IMETHOD SetDocShell(nsIDocShell *shell, mozIDOMWindowProxy *window) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocShell(shell, window); } \
  NS_IMETHOD CloseWindow(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CloseWindow(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrintStatusFeedback : public nsIPrintStatusFeedback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRINTSTATUSFEEDBACK

  nsPrintStatusFeedback();

private:
  ~nsPrintStatusFeedback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrintStatusFeedback, nsIPrintStatusFeedback)

nsPrintStatusFeedback::nsPrintStatusFeedback()
{
  /* member initializers and constructor code */
}

nsPrintStatusFeedback::~nsPrintStatusFeedback()
{
  /* destructor code */
}

/* void showStatusString (in wstring status); */
NS_IMETHODIMP nsPrintStatusFeedback::ShowStatusString(const char16_t * status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void startMeteors (); */
NS_IMETHODIMP nsPrintStatusFeedback::StartMeteors()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopMeteors (); */
NS_IMETHODIMP nsPrintStatusFeedback::StopMeteors()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showProgress (in long percent); */
NS_IMETHODIMP nsPrintStatusFeedback::ShowProgress(int32_t percent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setDocShell (in nsIDocShell shell, in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsPrintStatusFeedback::SetDocShell(nsIDocShell *shell, mozIDOMWindowProxy *window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void closeWindow (); */
NS_IMETHODIMP nsPrintStatusFeedback::CloseWindow()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPrintStatusFeedback_h__ */
