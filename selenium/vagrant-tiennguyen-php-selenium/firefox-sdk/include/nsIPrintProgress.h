/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrintProgress.idl
 */

#ifndef __gen_nsIPrintProgress_h__
#define __gen_nsIPrintProgress_h__


#ifndef __gen_nsIWebProgressListener_h__
#include "nsIWebProgressListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIObserver; /* forward declaration */

class nsIPrompt; /* forward declaration */


/* starting interface:    nsIPrintProgress */
#define NS_IPRINTPROGRESS_IID_STR "05f4fb88-e568-4d35-b394-ce0aa3eea6fc"

#define NS_IPRINTPROGRESS_IID \
  {0x05f4fb88, 0xe568, 0x4d35, \
    { 0xb3, 0x94, 0xce, 0x0a, 0xa3, 0xee, 0xa6, 0xfc }}

class NS_NO_VTABLE nsIPrintProgress : public nsIWebProgressListener {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRINTPROGRESS_IID)

  /* void openProgressDialog (in mozIDOMWindowProxy parent, in string dialogURL, in nsISupports parameters, in nsIObserver openDialogObserver, out boolean notifyOnOpen); */
  NS_IMETHOD OpenProgressDialog(mozIDOMWindowProxy *parent, const char * dialogURL, nsISupports *parameters, nsIObserver *openDialogObserver, bool *notifyOnOpen) = 0;

  /* void closeProgressDialog (in boolean forceClose); */
  NS_IMETHOD CloseProgressDialog(bool forceClose) = 0;

  /* void registerListener (in nsIWebProgressListener listener); */
  NS_IMETHOD RegisterListener(nsIWebProgressListener *listener) = 0;

  /* void unregisterListener (in nsIWebProgressListener listener); */
  NS_IMETHOD UnregisterListener(nsIWebProgressListener *listener) = 0;

  /* void doneIniting (); */
  NS_IMETHOD DoneIniting(void) = 0;

  /* nsIPrompt getPrompter (); */
  NS_IMETHOD GetPrompter(nsIPrompt * *_retval) = 0;

  /* attribute boolean processCanceledByUser; */
  NS_IMETHOD GetProcessCanceledByUser(bool *aProcessCanceledByUser) = 0;
  NS_IMETHOD SetProcessCanceledByUser(bool aProcessCanceledByUser) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrintProgress, NS_IPRINTPROGRESS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRINTPROGRESS \
  NS_IMETHOD OpenProgressDialog(mozIDOMWindowProxy *parent, const char * dialogURL, nsISupports *parameters, nsIObserver *openDialogObserver, bool *notifyOnOpen) override; \
  NS_IMETHOD CloseProgressDialog(bool forceClose) override; \
  NS_IMETHOD RegisterListener(nsIWebProgressListener *listener) override; \
  NS_IMETHOD UnregisterListener(nsIWebProgressListener *listener) override; \
  NS_IMETHOD DoneIniting(void) override; \
  NS_IMETHOD GetPrompter(nsIPrompt * *_retval) override; \
  NS_IMETHOD GetProcessCanceledByUser(bool *aProcessCanceledByUser) override; \
  NS_IMETHOD SetProcessCanceledByUser(bool aProcessCanceledByUser) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRINTPROGRESS \
  NS_METHOD OpenProgressDialog(mozIDOMWindowProxy *parent, const char * dialogURL, nsISupports *parameters, nsIObserver *openDialogObserver, bool *notifyOnOpen); \
  NS_METHOD CloseProgressDialog(bool forceClose); \
  NS_METHOD RegisterListener(nsIWebProgressListener *listener); \
  NS_METHOD UnregisterListener(nsIWebProgressListener *listener); \
  NS_METHOD DoneIniting(void); \
  NS_METHOD GetPrompter(nsIPrompt * *_retval); \
  NS_METHOD GetProcessCanceledByUser(bool *aProcessCanceledByUser); \
  NS_METHOD SetProcessCanceledByUser(bool aProcessCanceledByUser); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRINTPROGRESS(_to) \
  NS_IMETHOD OpenProgressDialog(mozIDOMWindowProxy *parent, const char * dialogURL, nsISupports *parameters, nsIObserver *openDialogObserver, bool *notifyOnOpen) override { return _to OpenProgressDialog(parent, dialogURL, parameters, openDialogObserver, notifyOnOpen); } \
  NS_IMETHOD CloseProgressDialog(bool forceClose) override { return _to CloseProgressDialog(forceClose); } \
  NS_IMETHOD RegisterListener(nsIWebProgressListener *listener) override { return _to RegisterListener(listener); } \
  NS_IMETHOD UnregisterListener(nsIWebProgressListener *listener) override { return _to UnregisterListener(listener); } \
  NS_IMETHOD DoneIniting(void) override { return _to DoneIniting(); } \
  NS_IMETHOD GetPrompter(nsIPrompt * *_retval) override { return _to GetPrompter(_retval); } \
  NS_IMETHOD GetProcessCanceledByUser(bool *aProcessCanceledByUser) override { return _to GetProcessCanceledByUser(aProcessCanceledByUser); } \
  NS_IMETHOD SetProcessCanceledByUser(bool aProcessCanceledByUser) override { return _to SetProcessCanceledByUser(aProcessCanceledByUser); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRINTPROGRESS(_to) \
  NS_IMETHOD OpenProgressDialog(mozIDOMWindowProxy *parent, const char * dialogURL, nsISupports *parameters, nsIObserver *openDialogObserver, bool *notifyOnOpen) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenProgressDialog(parent, dialogURL, parameters, openDialogObserver, notifyOnOpen); } \
  NS_IMETHOD CloseProgressDialog(bool forceClose) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CloseProgressDialog(forceClose); } \
  NS_IMETHOD RegisterListener(nsIWebProgressListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterListener(listener); } \
  NS_IMETHOD UnregisterListener(nsIWebProgressListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterListener(listener); } \
  NS_IMETHOD DoneIniting(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DoneIniting(); } \
  NS_IMETHOD GetPrompter(nsIPrompt * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrompter(_retval); } \
  NS_IMETHOD GetProcessCanceledByUser(bool *aProcessCanceledByUser) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProcessCanceledByUser(aProcessCanceledByUser); } \
  NS_IMETHOD SetProcessCanceledByUser(bool aProcessCanceledByUser) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProcessCanceledByUser(aProcessCanceledByUser); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrintProgress : public nsIPrintProgress
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRINTPROGRESS

  nsPrintProgress();

private:
  ~nsPrintProgress();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrintProgress, nsIPrintProgress)

nsPrintProgress::nsPrintProgress()
{
  /* member initializers and constructor code */
}

nsPrintProgress::~nsPrintProgress()
{
  /* destructor code */
}

/* void openProgressDialog (in mozIDOMWindowProxy parent, in string dialogURL, in nsISupports parameters, in nsIObserver openDialogObserver, out boolean notifyOnOpen); */
NS_IMETHODIMP nsPrintProgress::OpenProgressDialog(mozIDOMWindowProxy *parent, const char * dialogURL, nsISupports *parameters, nsIObserver *openDialogObserver, bool *notifyOnOpen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void closeProgressDialog (in boolean forceClose); */
NS_IMETHODIMP nsPrintProgress::CloseProgressDialog(bool forceClose)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerListener (in nsIWebProgressListener listener); */
NS_IMETHODIMP nsPrintProgress::RegisterListener(nsIWebProgressListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterListener (in nsIWebProgressListener listener); */
NS_IMETHODIMP nsPrintProgress::UnregisterListener(nsIWebProgressListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doneIniting (); */
NS_IMETHODIMP nsPrintProgress::DoneIniting()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrompt getPrompter (); */
NS_IMETHODIMP nsPrintProgress::GetPrompter(nsIPrompt * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean processCanceledByUser; */
NS_IMETHODIMP nsPrintProgress::GetProcessCanceledByUser(bool *aProcessCanceledByUser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPrintProgress::SetProcessCanceledByUser(bool aProcessCanceledByUser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPrintProgress_h__ */
