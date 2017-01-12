/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIEditingSession.idl
 */

#ifndef __gen_nsIEditingSession_h__
#define __gen_nsIEditingSession_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIEditor; /* forward declaration */


/* starting interface:    nsIEditingSession */
#define NS_IEDITINGSESSION_IID_STR "24f963d1-e6fc-43ea-a206-99ac5fcc5265"

#define NS_IEDITINGSESSION_IID \
  {0x24f963d1, 0xe6fc, 0x43ea, \
    { 0xa2, 0x06, 0x99, 0xac, 0x5f, 0xcc, 0x52, 0x65 }}

class NS_NO_VTABLE nsIEditingSession : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEDITINGSESSION_IID)

  enum {
    eEditorOK = 0,
    eEditorCreationInProgress = 1,
    eEditorErrorCantEditMimeType = 2,
    eEditorErrorFileNotFound = 3,
    eEditorErrorCantEditFramesets = 8,
    eEditorErrorUnknown = 9
  };

  /* readonly attribute unsigned long editorStatus; */
  NS_IMETHOD GetEditorStatus(uint32_t *aEditorStatus) = 0;

  /* void makeWindowEditable (in mozIDOMWindowProxy window, in string aEditorType, in boolean doAfterUriLoad, in boolean aMakeWholeDocumentEditable, in boolean aInteractive); */
  NS_IMETHOD MakeWindowEditable(mozIDOMWindowProxy *window, const char * aEditorType, bool doAfterUriLoad, bool aMakeWholeDocumentEditable, bool aInteractive) = 0;

  /* boolean windowIsEditable (in mozIDOMWindowProxy window); */
  NS_IMETHOD WindowIsEditable(mozIDOMWindowProxy *window, bool *_retval) = 0;

  /* nsIEditor getEditorForWindow (in mozIDOMWindowProxy window); */
  NS_IMETHOD GetEditorForWindow(mozIDOMWindowProxy *window, nsIEditor * *_retval) = 0;

  /* void setupEditorOnWindow (in mozIDOMWindowProxy window); */
  NS_IMETHOD SetupEditorOnWindow(mozIDOMWindowProxy *window) = 0;

  /* void tearDownEditorOnWindow (in mozIDOMWindowProxy window); */
  NS_IMETHOD TearDownEditorOnWindow(mozIDOMWindowProxy *window) = 0;

  /* void setEditorOnControllers (in mozIDOMWindowProxy aWindow, in nsIEditor aEditor); */
  NS_IMETHOD SetEditorOnControllers(mozIDOMWindowProxy *aWindow, nsIEditor *aEditor) = 0;

  /* void disableJSAndPlugins (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD DisableJSAndPlugins(mozIDOMWindowProxy *aWindow) = 0;

  /* void restoreJSAndPlugins (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD RestoreJSAndPlugins(mozIDOMWindowProxy *aWindow) = 0;

  /* void detachFromWindow (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD DetachFromWindow(mozIDOMWindowProxy *aWindow) = 0;

  /* void reattachToWindow (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD ReattachToWindow(mozIDOMWindowProxy *aWindow) = 0;

  /* readonly attribute boolean jsAndPluginsDisabled; */
  NS_IMETHOD GetJsAndPluginsDisabled(bool *aJsAndPluginsDisabled) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEditingSession, NS_IEDITINGSESSION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEDITINGSESSION \
  NS_IMETHOD GetEditorStatus(uint32_t *aEditorStatus) override; \
  NS_IMETHOD MakeWindowEditable(mozIDOMWindowProxy *window, const char * aEditorType, bool doAfterUriLoad, bool aMakeWholeDocumentEditable, bool aInteractive) override; \
  NS_IMETHOD WindowIsEditable(mozIDOMWindowProxy *window, bool *_retval) override; \
  NS_IMETHOD GetEditorForWindow(mozIDOMWindowProxy *window, nsIEditor * *_retval) override; \
  NS_IMETHOD SetupEditorOnWindow(mozIDOMWindowProxy *window) override; \
  NS_IMETHOD TearDownEditorOnWindow(mozIDOMWindowProxy *window) override; \
  NS_IMETHOD SetEditorOnControllers(mozIDOMWindowProxy *aWindow, nsIEditor *aEditor) override; \
  NS_IMETHOD DisableJSAndPlugins(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD RestoreJSAndPlugins(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD DetachFromWindow(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD ReattachToWindow(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD GetJsAndPluginsDisabled(bool *aJsAndPluginsDisabled) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIEDITINGSESSION \
  NS_METHOD GetEditorStatus(uint32_t *aEditorStatus); \
  NS_METHOD MakeWindowEditable(mozIDOMWindowProxy *window, const char * aEditorType, bool doAfterUriLoad, bool aMakeWholeDocumentEditable, bool aInteractive); \
  NS_METHOD WindowIsEditable(mozIDOMWindowProxy *window, bool *_retval); \
  NS_METHOD GetEditorForWindow(mozIDOMWindowProxy *window, nsIEditor * *_retval); \
  NS_METHOD SetupEditorOnWindow(mozIDOMWindowProxy *window); \
  NS_METHOD TearDownEditorOnWindow(mozIDOMWindowProxy *window); \
  NS_METHOD SetEditorOnControllers(mozIDOMWindowProxy *aWindow, nsIEditor *aEditor); \
  NS_METHOD DisableJSAndPlugins(mozIDOMWindowProxy *aWindow); \
  NS_METHOD RestoreJSAndPlugins(mozIDOMWindowProxy *aWindow); \
  NS_METHOD DetachFromWindow(mozIDOMWindowProxy *aWindow); \
  NS_METHOD ReattachToWindow(mozIDOMWindowProxy *aWindow); \
  NS_METHOD GetJsAndPluginsDisabled(bool *aJsAndPluginsDisabled); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEDITINGSESSION(_to) \
  NS_IMETHOD GetEditorStatus(uint32_t *aEditorStatus) override { return _to GetEditorStatus(aEditorStatus); } \
  NS_IMETHOD MakeWindowEditable(mozIDOMWindowProxy *window, const char * aEditorType, bool doAfterUriLoad, bool aMakeWholeDocumentEditable, bool aInteractive) override { return _to MakeWindowEditable(window, aEditorType, doAfterUriLoad, aMakeWholeDocumentEditable, aInteractive); } \
  NS_IMETHOD WindowIsEditable(mozIDOMWindowProxy *window, bool *_retval) override { return _to WindowIsEditable(window, _retval); } \
  NS_IMETHOD GetEditorForWindow(mozIDOMWindowProxy *window, nsIEditor * *_retval) override { return _to GetEditorForWindow(window, _retval); } \
  NS_IMETHOD SetupEditorOnWindow(mozIDOMWindowProxy *window) override { return _to SetupEditorOnWindow(window); } \
  NS_IMETHOD TearDownEditorOnWindow(mozIDOMWindowProxy *window) override { return _to TearDownEditorOnWindow(window); } \
  NS_IMETHOD SetEditorOnControllers(mozIDOMWindowProxy *aWindow, nsIEditor *aEditor) override { return _to SetEditorOnControllers(aWindow, aEditor); } \
  NS_IMETHOD DisableJSAndPlugins(mozIDOMWindowProxy *aWindow) override { return _to DisableJSAndPlugins(aWindow); } \
  NS_IMETHOD RestoreJSAndPlugins(mozIDOMWindowProxy *aWindow) override { return _to RestoreJSAndPlugins(aWindow); } \
  NS_IMETHOD DetachFromWindow(mozIDOMWindowProxy *aWindow) override { return _to DetachFromWindow(aWindow); } \
  NS_IMETHOD ReattachToWindow(mozIDOMWindowProxy *aWindow) override { return _to ReattachToWindow(aWindow); } \
  NS_IMETHOD GetJsAndPluginsDisabled(bool *aJsAndPluginsDisabled) override { return _to GetJsAndPluginsDisabled(aJsAndPluginsDisabled); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEDITINGSESSION(_to) \
  NS_IMETHOD GetEditorStatus(uint32_t *aEditorStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEditorStatus(aEditorStatus); } \
  NS_IMETHOD MakeWindowEditable(mozIDOMWindowProxy *window, const char * aEditorType, bool doAfterUriLoad, bool aMakeWholeDocumentEditable, bool aInteractive) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MakeWindowEditable(window, aEditorType, doAfterUriLoad, aMakeWholeDocumentEditable, aInteractive); } \
  NS_IMETHOD WindowIsEditable(mozIDOMWindowProxy *window, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowIsEditable(window, _retval); } \
  NS_IMETHOD GetEditorForWindow(mozIDOMWindowProxy *window, nsIEditor * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEditorForWindow(window, _retval); } \
  NS_IMETHOD SetupEditorOnWindow(mozIDOMWindowProxy *window) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetupEditorOnWindow(window); } \
  NS_IMETHOD TearDownEditorOnWindow(mozIDOMWindowProxy *window) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TearDownEditorOnWindow(window); } \
  NS_IMETHOD SetEditorOnControllers(mozIDOMWindowProxy *aWindow, nsIEditor *aEditor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEditorOnControllers(aWindow, aEditor); } \
  NS_IMETHOD DisableJSAndPlugins(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DisableJSAndPlugins(aWindow); } \
  NS_IMETHOD RestoreJSAndPlugins(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RestoreJSAndPlugins(aWindow); } \
  NS_IMETHOD DetachFromWindow(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DetachFromWindow(aWindow); } \
  NS_IMETHOD ReattachToWindow(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReattachToWindow(aWindow); } \
  NS_IMETHOD GetJsAndPluginsDisabled(bool *aJsAndPluginsDisabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsAndPluginsDisabled(aJsAndPluginsDisabled); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEditingSession : public nsIEditingSession
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEDITINGSESSION

  nsEditingSession();

private:
  ~nsEditingSession();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsEditingSession, nsIEditingSession)

nsEditingSession::nsEditingSession()
{
  /* member initializers and constructor code */
}

nsEditingSession::~nsEditingSession()
{
  /* destructor code */
}

/* readonly attribute unsigned long editorStatus; */
NS_IMETHODIMP nsEditingSession::GetEditorStatus(uint32_t *aEditorStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void makeWindowEditable (in mozIDOMWindowProxy window, in string aEditorType, in boolean doAfterUriLoad, in boolean aMakeWholeDocumentEditable, in boolean aInteractive); */
NS_IMETHODIMP nsEditingSession::MakeWindowEditable(mozIDOMWindowProxy *window, const char * aEditorType, bool doAfterUriLoad, bool aMakeWholeDocumentEditable, bool aInteractive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean windowIsEditable (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsEditingSession::WindowIsEditable(mozIDOMWindowProxy *window, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIEditor getEditorForWindow (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsEditingSession::GetEditorForWindow(mozIDOMWindowProxy *window, nsIEditor * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setupEditorOnWindow (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsEditingSession::SetupEditorOnWindow(mozIDOMWindowProxy *window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void tearDownEditorOnWindow (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsEditingSession::TearDownEditorOnWindow(mozIDOMWindowProxy *window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setEditorOnControllers (in mozIDOMWindowProxy aWindow, in nsIEditor aEditor); */
NS_IMETHODIMP nsEditingSession::SetEditorOnControllers(mozIDOMWindowProxy *aWindow, nsIEditor *aEditor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disableJSAndPlugins (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsEditingSession::DisableJSAndPlugins(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void restoreJSAndPlugins (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsEditingSession::RestoreJSAndPlugins(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void detachFromWindow (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsEditingSession::DetachFromWindow(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void reattachToWindow (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsEditingSession::ReattachToWindow(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean jsAndPluginsDisabled; */
NS_IMETHODIMP nsEditingSession::GetJsAndPluginsDisabled(bool *aJsAndPluginsDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEditingSession_h__ */
