/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrintingPromptService.idl
 */

#ifndef __gen_nsIPrintingPromptService_h__
#define __gen_nsIPrintingPromptService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIWebBrowserPrint_h__
#include "nsIWebBrowserPrint.h"
#endif

#ifndef __gen_nsIWebProgressListener_h__
#include "nsIWebProgressListener.h"
#endif

#ifndef __gen_nsIPrintProgressParams_h__
#include "nsIPrintProgressParams.h"
#endif

#ifndef __gen_nsIPrintSettings_h__
#include "nsIPrintSettings.h"
#endif

#ifndef __gen_nsIObserver_h__
#include "nsIObserver.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsIPrintingPromptService */
#define NS_IPRINTINGPROMPTSERVICE_IID_STR "328daa3e-09e4-455f-bb6f-0a921766042f"

#define NS_IPRINTINGPROMPTSERVICE_IID \
  {0x328daa3e, 0x09e4, 0x455f, \
    { 0xbb, 0x6f, 0x0a, 0x92, 0x17, 0x66, 0x04, 0x2f }}

class NS_NO_VTABLE nsIPrintingPromptService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRINTINGPROMPTSERVICE_IID)

  /* void showPrintDialog (in mozIDOMWindowProxy parent, in nsIWebBrowserPrint webBrowserPrint, in nsIPrintSettings printSettings); */
  NS_IMETHOD ShowPrintDialog(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings) = 0;

  /* void showProgress (in mozIDOMWindowProxy parent, in nsIWebBrowserPrint webBrowserPrint, in nsIPrintSettings printSettings, in nsIObserver openDialogObserver, in boolean isForPrinting, out nsIWebProgressListener webProgressListener, out nsIPrintProgressParams printProgressParams, out boolean notifyOnOpen); */
  NS_IMETHOD ShowProgress(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings, nsIObserver *openDialogObserver, bool isForPrinting, nsIWebProgressListener * *webProgressListener, nsIPrintProgressParams * *printProgressParams, bool *notifyOnOpen) = 0;

  /* void showPageSetup (in mozIDOMWindowProxy parent, in nsIPrintSettings printSettings, in nsIObserver aObs); */
  NS_IMETHOD ShowPageSetup(mozIDOMWindowProxy *parent, nsIPrintSettings *printSettings, nsIObserver *aObs) = 0;

  /* void showPrinterProperties (in mozIDOMWindowProxy parent, in wstring printerName, in nsIPrintSettings printSettings); */
  NS_IMETHOD ShowPrinterProperties(mozIDOMWindowProxy *parent, const char16_t * printerName, nsIPrintSettings *printSettings) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrintingPromptService, NS_IPRINTINGPROMPTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRINTINGPROMPTSERVICE \
  NS_IMETHOD ShowPrintDialog(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings) override; \
  NS_IMETHOD ShowProgress(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings, nsIObserver *openDialogObserver, bool isForPrinting, nsIWebProgressListener * *webProgressListener, nsIPrintProgressParams * *printProgressParams, bool *notifyOnOpen) override; \
  NS_IMETHOD ShowPageSetup(mozIDOMWindowProxy *parent, nsIPrintSettings *printSettings, nsIObserver *aObs) override; \
  NS_IMETHOD ShowPrinterProperties(mozIDOMWindowProxy *parent, const char16_t * printerName, nsIPrintSettings *printSettings) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRINTINGPROMPTSERVICE \
  NS_METHOD ShowPrintDialog(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings); \
  NS_METHOD ShowProgress(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings, nsIObserver *openDialogObserver, bool isForPrinting, nsIWebProgressListener * *webProgressListener, nsIPrintProgressParams * *printProgressParams, bool *notifyOnOpen); \
  NS_METHOD ShowPageSetup(mozIDOMWindowProxy *parent, nsIPrintSettings *printSettings, nsIObserver *aObs); \
  NS_METHOD ShowPrinterProperties(mozIDOMWindowProxy *parent, const char16_t * printerName, nsIPrintSettings *printSettings); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRINTINGPROMPTSERVICE(_to) \
  NS_IMETHOD ShowPrintDialog(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings) override { return _to ShowPrintDialog(parent, webBrowserPrint, printSettings); } \
  NS_IMETHOD ShowProgress(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings, nsIObserver *openDialogObserver, bool isForPrinting, nsIWebProgressListener * *webProgressListener, nsIPrintProgressParams * *printProgressParams, bool *notifyOnOpen) override { return _to ShowProgress(parent, webBrowserPrint, printSettings, openDialogObserver, isForPrinting, webProgressListener, printProgressParams, notifyOnOpen); } \
  NS_IMETHOD ShowPageSetup(mozIDOMWindowProxy *parent, nsIPrintSettings *printSettings, nsIObserver *aObs) override { return _to ShowPageSetup(parent, printSettings, aObs); } \
  NS_IMETHOD ShowPrinterProperties(mozIDOMWindowProxy *parent, const char16_t * printerName, nsIPrintSettings *printSettings) override { return _to ShowPrinterProperties(parent, printerName, printSettings); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRINTINGPROMPTSERVICE(_to) \
  NS_IMETHOD ShowPrintDialog(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowPrintDialog(parent, webBrowserPrint, printSettings); } \
  NS_IMETHOD ShowProgress(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings, nsIObserver *openDialogObserver, bool isForPrinting, nsIWebProgressListener * *webProgressListener, nsIPrintProgressParams * *printProgressParams, bool *notifyOnOpen) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowProgress(parent, webBrowserPrint, printSettings, openDialogObserver, isForPrinting, webProgressListener, printProgressParams, notifyOnOpen); } \
  NS_IMETHOD ShowPageSetup(mozIDOMWindowProxy *parent, nsIPrintSettings *printSettings, nsIObserver *aObs) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowPageSetup(parent, printSettings, aObs); } \
  NS_IMETHOD ShowPrinterProperties(mozIDOMWindowProxy *parent, const char16_t * printerName, nsIPrintSettings *printSettings) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowPrinterProperties(parent, printerName, printSettings); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrintingPromptService : public nsIPrintingPromptService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRINTINGPROMPTSERVICE

  nsPrintingPromptService();

private:
  ~nsPrintingPromptService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrintingPromptService, nsIPrintingPromptService)

nsPrintingPromptService::nsPrintingPromptService()
{
  /* member initializers and constructor code */
}

nsPrintingPromptService::~nsPrintingPromptService()
{
  /* destructor code */
}

/* void showPrintDialog (in mozIDOMWindowProxy parent, in nsIWebBrowserPrint webBrowserPrint, in nsIPrintSettings printSettings); */
NS_IMETHODIMP nsPrintingPromptService::ShowPrintDialog(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showProgress (in mozIDOMWindowProxy parent, in nsIWebBrowserPrint webBrowserPrint, in nsIPrintSettings printSettings, in nsIObserver openDialogObserver, in boolean isForPrinting, out nsIWebProgressListener webProgressListener, out nsIPrintProgressParams printProgressParams, out boolean notifyOnOpen); */
NS_IMETHODIMP nsPrintingPromptService::ShowProgress(mozIDOMWindowProxy *parent, nsIWebBrowserPrint *webBrowserPrint, nsIPrintSettings *printSettings, nsIObserver *openDialogObserver, bool isForPrinting, nsIWebProgressListener * *webProgressListener, nsIPrintProgressParams * *printProgressParams, bool *notifyOnOpen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showPageSetup (in mozIDOMWindowProxy parent, in nsIPrintSettings printSettings, in nsIObserver aObs); */
NS_IMETHODIMP nsPrintingPromptService::ShowPageSetup(mozIDOMWindowProxy *parent, nsIPrintSettings *printSettings, nsIObserver *aObs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showPrinterProperties (in mozIDOMWindowProxy parent, in wstring printerName, in nsIPrintSettings printSettings); */
NS_IMETHODIMP nsPrintingPromptService::ShowPrinterProperties(mozIDOMWindowProxy *parent, const char16_t * printerName, nsIPrintSettings *printSettings)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// {260FEDC5-524D-4aa6-9A41-E829F4C78B92}
#define NS_PRINTINGPROMPTSERVICE_IID \
 {0x260fedc5, 0x524d, 0x4aa6, { 0x9a, 0x41, 0xe8, 0x29, 0xf4, 0xc7, 0x8b, 0x92}}

#endif /* __gen_nsIPrintingPromptService_h__ */
