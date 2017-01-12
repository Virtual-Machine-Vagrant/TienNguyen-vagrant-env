/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowserPrint.idl
 */

#ifndef __gen_nsIWebBrowserPrint_h__
#define __gen_nsIWebBrowserPrint_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIPrintSettings; /* forward declaration */

class nsIWebProgressListener; /* forward declaration */


/* starting interface:    nsIWebBrowserPrint */
#define NS_IWEBBROWSERPRINT_IID_STR "c9a934ed-fff1-4971-bfba-6c25ad70e1e6"

#define NS_IWEBBROWSERPRINT_IID \
  {0xc9a934ed, 0xfff1, 0x4971, \
    { 0xbf, 0xba, 0x6c, 0x25, 0xad, 0x70, 0xe1, 0xe6 }}

class NS_NO_VTABLE nsIWebBrowserPrint : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPRINT_IID)

  enum {
    PRINTPREVIEW_GOTO_PAGENUM = 0,
    PRINTPREVIEW_PREV_PAGE = 1,
    PRINTPREVIEW_NEXT_PAGE = 2,
    PRINTPREVIEW_HOME = 3,
    PRINTPREVIEW_END = 4
  };

  /* readonly attribute nsIPrintSettings globalPrintSettings; */
  NS_IMETHOD GetGlobalPrintSettings(nsIPrintSettings * *aGlobalPrintSettings) = 0;

  /* readonly attribute nsIPrintSettings currentPrintSettings; */
  NS_IMETHOD GetCurrentPrintSettings(nsIPrintSettings * *aCurrentPrintSettings) = 0;

  /* readonly attribute mozIDOMWindowProxy currentChildDOMWindow; */
  NS_IMETHOD GetCurrentChildDOMWindow(mozIDOMWindowProxy * *aCurrentChildDOMWindow) = 0;

  /* readonly attribute boolean doingPrint; */
  NS_IMETHOD GetDoingPrint(bool *aDoingPrint) = 0;

  /* readonly attribute boolean doingPrintPreview; */
  NS_IMETHOD GetDoingPrintPreview(bool *aDoingPrintPreview) = 0;

  /* readonly attribute boolean isFramesetDocument; */
  NS_IMETHOD GetIsFramesetDocument(bool *aIsFramesetDocument) = 0;

  /* readonly attribute boolean isFramesetFrameSelected; */
  NS_IMETHOD GetIsFramesetFrameSelected(bool *aIsFramesetFrameSelected) = 0;

  /* readonly attribute boolean isIFrameSelected; */
  NS_IMETHOD GetIsIFrameSelected(bool *aIsIFrameSelected) = 0;

  /* readonly attribute boolean isRangeSelection; */
  NS_IMETHOD GetIsRangeSelection(bool *aIsRangeSelection) = 0;

  /* readonly attribute long printPreviewNumPages; */
  NS_IMETHOD GetPrintPreviewNumPages(int32_t *aPrintPreviewNumPages) = 0;

  /* void print (in nsIPrintSettings aThePrintSettings, in nsIWebProgressListener aWPListener); */
  NS_IMETHOD Print(nsIPrintSettings *aThePrintSettings, nsIWebProgressListener *aWPListener) = 0;

  /* void printPreview (in nsIPrintSettings aThePrintSettings, in mozIDOMWindowProxy aChildDOMWin, in nsIWebProgressListener aWPListener); */
  NS_IMETHOD PrintPreview(nsIPrintSettings *aThePrintSettings, mozIDOMWindowProxy *aChildDOMWin, nsIWebProgressListener *aWPListener) = 0;

  /* void printPreviewNavigate (in short aNavType, in long aPageNum); */
  NS_IMETHOD PrintPreviewNavigate(int16_t aNavType, int32_t aPageNum) = 0;

  /* void cancel (); */
  NS_IMETHOD Cancel(void) = 0;

  /* void enumerateDocumentNames (out uint32_t aCount, [array, size_is (aCount), retval] out wstring aResult); */
  NS_IMETHOD EnumerateDocumentNames(uint32_t *aCount, char16_t * **aResult) = 0;

  /* void exitPrintPreview (); */
  NS_IMETHOD ExitPrintPreview(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPrint, NS_IWEBBROWSERPRINT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPRINT \
  NS_IMETHOD GetGlobalPrintSettings(nsIPrintSettings * *aGlobalPrintSettings) override; \
  NS_IMETHOD GetCurrentPrintSettings(nsIPrintSettings * *aCurrentPrintSettings) override; \
  NS_IMETHOD GetCurrentChildDOMWindow(mozIDOMWindowProxy * *aCurrentChildDOMWindow) override; \
  NS_IMETHOD GetDoingPrint(bool *aDoingPrint) override; \
  NS_IMETHOD GetDoingPrintPreview(bool *aDoingPrintPreview) override; \
  NS_IMETHOD GetIsFramesetDocument(bool *aIsFramesetDocument) override; \
  NS_IMETHOD GetIsFramesetFrameSelected(bool *aIsFramesetFrameSelected) override; \
  NS_IMETHOD GetIsIFrameSelected(bool *aIsIFrameSelected) override; \
  NS_IMETHOD GetIsRangeSelection(bool *aIsRangeSelection) override; \
  NS_IMETHOD GetPrintPreviewNumPages(int32_t *aPrintPreviewNumPages) override; \
  NS_IMETHOD Print(nsIPrintSettings *aThePrintSettings, nsIWebProgressListener *aWPListener) override; \
  NS_IMETHOD PrintPreview(nsIPrintSettings *aThePrintSettings, mozIDOMWindowProxy *aChildDOMWin, nsIWebProgressListener *aWPListener) override; \
  NS_IMETHOD PrintPreviewNavigate(int16_t aNavType, int32_t aPageNum) override; \
  NS_IMETHOD Cancel(void) override; \
  NS_IMETHOD EnumerateDocumentNames(uint32_t *aCount, char16_t * **aResult) override; \
  NS_IMETHOD ExitPrintPreview(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERPRINT \
  NS_METHOD GetGlobalPrintSettings(nsIPrintSettings * *aGlobalPrintSettings); \
  NS_METHOD GetCurrentPrintSettings(nsIPrintSettings * *aCurrentPrintSettings); \
  NS_METHOD GetCurrentChildDOMWindow(mozIDOMWindowProxy * *aCurrentChildDOMWindow); \
  NS_METHOD GetDoingPrint(bool *aDoingPrint); \
  NS_METHOD GetDoingPrintPreview(bool *aDoingPrintPreview); \
  NS_METHOD GetIsFramesetDocument(bool *aIsFramesetDocument); \
  NS_METHOD GetIsFramesetFrameSelected(bool *aIsFramesetFrameSelected); \
  NS_METHOD GetIsIFrameSelected(bool *aIsIFrameSelected); \
  NS_METHOD GetIsRangeSelection(bool *aIsRangeSelection); \
  NS_METHOD GetPrintPreviewNumPages(int32_t *aPrintPreviewNumPages); \
  NS_METHOD Print(nsIPrintSettings *aThePrintSettings, nsIWebProgressListener *aWPListener); \
  NS_METHOD PrintPreview(nsIPrintSettings *aThePrintSettings, mozIDOMWindowProxy *aChildDOMWin, nsIWebProgressListener *aWPListener); \
  NS_METHOD PrintPreviewNavigate(int16_t aNavType, int32_t aPageNum); \
  NS_METHOD Cancel(void); \
  NS_METHOD EnumerateDocumentNames(uint32_t *aCount, char16_t * **aResult); \
  NS_METHOD ExitPrintPreview(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPRINT(_to) \
  NS_IMETHOD GetGlobalPrintSettings(nsIPrintSettings * *aGlobalPrintSettings) override { return _to GetGlobalPrintSettings(aGlobalPrintSettings); } \
  NS_IMETHOD GetCurrentPrintSettings(nsIPrintSettings * *aCurrentPrintSettings) override { return _to GetCurrentPrintSettings(aCurrentPrintSettings); } \
  NS_IMETHOD GetCurrentChildDOMWindow(mozIDOMWindowProxy * *aCurrentChildDOMWindow) override { return _to GetCurrentChildDOMWindow(aCurrentChildDOMWindow); } \
  NS_IMETHOD GetDoingPrint(bool *aDoingPrint) override { return _to GetDoingPrint(aDoingPrint); } \
  NS_IMETHOD GetDoingPrintPreview(bool *aDoingPrintPreview) override { return _to GetDoingPrintPreview(aDoingPrintPreview); } \
  NS_IMETHOD GetIsFramesetDocument(bool *aIsFramesetDocument) override { return _to GetIsFramesetDocument(aIsFramesetDocument); } \
  NS_IMETHOD GetIsFramesetFrameSelected(bool *aIsFramesetFrameSelected) override { return _to GetIsFramesetFrameSelected(aIsFramesetFrameSelected); } \
  NS_IMETHOD GetIsIFrameSelected(bool *aIsIFrameSelected) override { return _to GetIsIFrameSelected(aIsIFrameSelected); } \
  NS_IMETHOD GetIsRangeSelection(bool *aIsRangeSelection) override { return _to GetIsRangeSelection(aIsRangeSelection); } \
  NS_IMETHOD GetPrintPreviewNumPages(int32_t *aPrintPreviewNumPages) override { return _to GetPrintPreviewNumPages(aPrintPreviewNumPages); } \
  NS_IMETHOD Print(nsIPrintSettings *aThePrintSettings, nsIWebProgressListener *aWPListener) override { return _to Print(aThePrintSettings, aWPListener); } \
  NS_IMETHOD PrintPreview(nsIPrintSettings *aThePrintSettings, mozIDOMWindowProxy *aChildDOMWin, nsIWebProgressListener *aWPListener) override { return _to PrintPreview(aThePrintSettings, aChildDOMWin, aWPListener); } \
  NS_IMETHOD PrintPreviewNavigate(int16_t aNavType, int32_t aPageNum) override { return _to PrintPreviewNavigate(aNavType, aPageNum); } \
  NS_IMETHOD Cancel(void) override { return _to Cancel(); } \
  NS_IMETHOD EnumerateDocumentNames(uint32_t *aCount, char16_t * **aResult) override { return _to EnumerateDocumentNames(aCount, aResult); } \
  NS_IMETHOD ExitPrintPreview(void) override { return _to ExitPrintPreview(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPRINT(_to) \
  NS_IMETHOD GetGlobalPrintSettings(nsIPrintSettings * *aGlobalPrintSettings) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalPrintSettings(aGlobalPrintSettings); } \
  NS_IMETHOD GetCurrentPrintSettings(nsIPrintSettings * *aCurrentPrintSettings) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentPrintSettings(aCurrentPrintSettings); } \
  NS_IMETHOD GetCurrentChildDOMWindow(mozIDOMWindowProxy * *aCurrentChildDOMWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentChildDOMWindow(aCurrentChildDOMWindow); } \
  NS_IMETHOD GetDoingPrint(bool *aDoingPrint) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDoingPrint(aDoingPrint); } \
  NS_IMETHOD GetDoingPrintPreview(bool *aDoingPrintPreview) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDoingPrintPreview(aDoingPrintPreview); } \
  NS_IMETHOD GetIsFramesetDocument(bool *aIsFramesetDocument) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsFramesetDocument(aIsFramesetDocument); } \
  NS_IMETHOD GetIsFramesetFrameSelected(bool *aIsFramesetFrameSelected) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsFramesetFrameSelected(aIsFramesetFrameSelected); } \
  NS_IMETHOD GetIsIFrameSelected(bool *aIsIFrameSelected) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsIFrameSelected(aIsIFrameSelected); } \
  NS_IMETHOD GetIsRangeSelection(bool *aIsRangeSelection) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsRangeSelection(aIsRangeSelection); } \
  NS_IMETHOD GetPrintPreviewNumPages(int32_t *aPrintPreviewNumPages) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrintPreviewNumPages(aPrintPreviewNumPages); } \
  NS_IMETHOD Print(nsIPrintSettings *aThePrintSettings, nsIWebProgressListener *aWPListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Print(aThePrintSettings, aWPListener); } \
  NS_IMETHOD PrintPreview(nsIPrintSettings *aThePrintSettings, mozIDOMWindowProxy *aChildDOMWin, nsIWebProgressListener *aWPListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PrintPreview(aThePrintSettings, aChildDOMWin, aWPListener); } \
  NS_IMETHOD PrintPreviewNavigate(int16_t aNavType, int32_t aPageNum) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PrintPreviewNavigate(aNavType, aPageNum); } \
  NS_IMETHOD Cancel(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Cancel(); } \
  NS_IMETHOD EnumerateDocumentNames(uint32_t *aCount, char16_t * **aResult) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateDocumentNames(aCount, aResult); } \
  NS_IMETHOD ExitPrintPreview(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ExitPrintPreview(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPrint : public nsIWebBrowserPrint
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPRINT

  nsWebBrowserPrint();

private:
  ~nsWebBrowserPrint();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserPrint, nsIWebBrowserPrint)

nsWebBrowserPrint::nsWebBrowserPrint()
{
  /* member initializers and constructor code */
}

nsWebBrowserPrint::~nsWebBrowserPrint()
{
  /* destructor code */
}

/* readonly attribute nsIPrintSettings globalPrintSettings; */
NS_IMETHODIMP nsWebBrowserPrint::GetGlobalPrintSettings(nsIPrintSettings * *aGlobalPrintSettings)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIPrintSettings currentPrintSettings; */
NS_IMETHODIMP nsWebBrowserPrint::GetCurrentPrintSettings(nsIPrintSettings * *aCurrentPrintSettings)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIDOMWindowProxy currentChildDOMWindow; */
NS_IMETHODIMP nsWebBrowserPrint::GetCurrentChildDOMWindow(mozIDOMWindowProxy * *aCurrentChildDOMWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean doingPrint; */
NS_IMETHODIMP nsWebBrowserPrint::GetDoingPrint(bool *aDoingPrint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean doingPrintPreview; */
NS_IMETHODIMP nsWebBrowserPrint::GetDoingPrintPreview(bool *aDoingPrintPreview)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isFramesetDocument; */
NS_IMETHODIMP nsWebBrowserPrint::GetIsFramesetDocument(bool *aIsFramesetDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isFramesetFrameSelected; */
NS_IMETHODIMP nsWebBrowserPrint::GetIsFramesetFrameSelected(bool *aIsFramesetFrameSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isIFrameSelected; */
NS_IMETHODIMP nsWebBrowserPrint::GetIsIFrameSelected(bool *aIsIFrameSelected)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isRangeSelection; */
NS_IMETHODIMP nsWebBrowserPrint::GetIsRangeSelection(bool *aIsRangeSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long printPreviewNumPages; */
NS_IMETHODIMP nsWebBrowserPrint::GetPrintPreviewNumPages(int32_t *aPrintPreviewNumPages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void print (in nsIPrintSettings aThePrintSettings, in nsIWebProgressListener aWPListener); */
NS_IMETHODIMP nsWebBrowserPrint::Print(nsIPrintSettings *aThePrintSettings, nsIWebProgressListener *aWPListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void printPreview (in nsIPrintSettings aThePrintSettings, in mozIDOMWindowProxy aChildDOMWin, in nsIWebProgressListener aWPListener); */
NS_IMETHODIMP nsWebBrowserPrint::PrintPreview(nsIPrintSettings *aThePrintSettings, mozIDOMWindowProxy *aChildDOMWin, nsIWebProgressListener *aWPListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void printPreviewNavigate (in short aNavType, in long aPageNum); */
NS_IMETHODIMP nsWebBrowserPrint::PrintPreviewNavigate(int16_t aNavType, int32_t aPageNum)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancel (); */
NS_IMETHODIMP nsWebBrowserPrint::Cancel()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enumerateDocumentNames (out uint32_t aCount, [array, size_is (aCount), retval] out wstring aResult); */
NS_IMETHODIMP nsWebBrowserPrint::EnumerateDocumentNames(uint32_t *aCount, char16_t * **aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void exitPrintPreview (); */
NS_IMETHODIMP nsWebBrowserPrint::ExitPrintPreview()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserPrint_h__ */
