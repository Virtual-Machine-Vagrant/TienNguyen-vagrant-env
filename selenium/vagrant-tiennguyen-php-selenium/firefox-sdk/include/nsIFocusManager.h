/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIFocusManager.idl
 */

#ifndef __gen_nsIFocusManager_h__
#define __gen_nsIFocusManager_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIDocument; /* forward declaration */

class nsIContent; /* forward declaration */


/* starting interface:    nsIFocusManager */
#define NS_IFOCUSMANAGER_IID_STR "86e1f1e1-365d-493b-b52a-a649f3f311dc"

#define NS_IFOCUSMANAGER_IID \
  {0x86e1f1e1, 0x365d, 0x493b, \
    { 0xb5, 0x2a, 0xa6, 0x49, 0xf3, 0xf3, 0x11, 0xdc }}

class NS_NO_VTABLE nsIFocusManager : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFOCUSMANAGER_IID)

  /* attribute mozIDOMWindowProxy activeWindow; */
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) = 0;
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) = 0;

  /* attribute mozIDOMWindowProxy focusedWindow; */
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) = 0;
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) = 0;

  /* readonly attribute nsIDOMElement focusedElement; */
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) = 0;

  /* uint32_t getLastFocusMethod (in mozIDOMWindowProxy window); */
  NS_IMETHOD GetLastFocusMethod(mozIDOMWindowProxy *window, uint32_t *_retval) = 0;

  /* void setFocus (in nsIDOMElement aElement, in unsigned long aFlags); */
  NS_IMETHOD SetFocus(nsIDOMElement *aElement, uint32_t aFlags) = 0;

  /* nsIDOMElement moveFocus (in mozIDOMWindowProxy aWindow, in nsIDOMElement aStartElement, in unsigned long aType, in unsigned long aFlags); */
  NS_IMETHOD MoveFocus(mozIDOMWindowProxy *aWindow, nsIDOMElement *aStartElement, uint32_t aType, uint32_t aFlags, nsIDOMElement * *_retval) = 0;

  /* void clearFocus (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD ClearFocus(mozIDOMWindowProxy *aWindow) = 0;

  /* nsIDOMElement getFocusedElementForWindow (in mozIDOMWindowProxy aWindow, in boolean aDeep, out mozIDOMWindowProxy aFocusedWindow); */
  NS_IMETHOD GetFocusedElementForWindow(mozIDOMWindowProxy *aWindow, bool aDeep, mozIDOMWindowProxy * *aFocusedWindow, nsIDOMElement * *_retval) = 0;

  /* void moveCaretToFocus (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD MoveCaretToFocus(mozIDOMWindowProxy *aWindow) = 0;

  /* boolean elementIsFocusable (in nsIDOMElement aElement, in unsigned long aFlags); */
  NS_IMETHOD ElementIsFocusable(nsIDOMElement *aElement, uint32_t aFlags, bool *_retval) = 0;

  enum {
    FLAG_RAISE = 1U,
    FLAG_NOSCROLL = 2U,
    FLAG_NOSWITCHFRAME = 4U,
    FLAG_NOPARENTFRAME = 8U,
    FLAG_BYMOUSE = 4096U,
    FLAG_BYKEY = 8192U,
    FLAG_BYMOVEFOCUS = 16384U,
    FLAG_SHOWRING = 1048576U,
    FLAG_BYTOUCH = 2097152U,
    MOVEFOCUS_FORWARD = 1U,
    MOVEFOCUS_BACKWARD = 2U,
    MOVEFOCUS_FORWARDDOC = 3U,
    MOVEFOCUS_BACKWARDDOC = 4U,
    MOVEFOCUS_FIRST = 5U,
    MOVEFOCUS_LAST = 6U,
    MOVEFOCUS_ROOT = 7U,
    MOVEFOCUS_CARET = 8U,
    MOVEFOCUS_FIRSTDOC = 9U,
    MOVEFOCUS_LASTDOC = 10U
  };

  /* [noscript] void windowRaised (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD WindowRaised(mozIDOMWindowProxy *aWindow) = 0;

  /* [noscript] void windowLowered (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD WindowLowered(mozIDOMWindowProxy *aWindow) = 0;

  /* [noscript] void windowShown (in mozIDOMWindowProxy aWindow, in boolean aNeedsFocus); */
  NS_IMETHOD WindowShown(mozIDOMWindowProxy *aWindow, bool aNeedsFocus) = 0;

  /* [noscript] void windowHidden (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD WindowHidden(mozIDOMWindowProxy *aWindow) = 0;

  /* [noscript] void fireDelayedEvents (in nsIDocument aDocument); */
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument) = 0;

  /* [noscript] void focusPlugin (in nsIContent aPlugin); */
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin) = 0;

  /* [noscript] void parentActivated (in mozIDOMWindowProxy aWindow, in bool active); */
  NS_IMETHOD ParentActivated(mozIDOMWindowProxy *aWindow, bool active) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFocusManager, NS_IFOCUSMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFOCUSMANAGER \
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) override; \
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) override; \
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) override; \
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) override; \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override; \
  NS_IMETHOD GetLastFocusMethod(mozIDOMWindowProxy *window, uint32_t *_retval) override; \
  NS_IMETHOD SetFocus(nsIDOMElement *aElement, uint32_t aFlags) override; \
  NS_IMETHOD MoveFocus(mozIDOMWindowProxy *aWindow, nsIDOMElement *aStartElement, uint32_t aType, uint32_t aFlags, nsIDOMElement * *_retval) override; \
  NS_IMETHOD ClearFocus(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD GetFocusedElementForWindow(mozIDOMWindowProxy *aWindow, bool aDeep, mozIDOMWindowProxy * *aFocusedWindow, nsIDOMElement * *_retval) override; \
  NS_IMETHOD MoveCaretToFocus(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD ElementIsFocusable(nsIDOMElement *aElement, uint32_t aFlags, bool *_retval) override; \
  NS_IMETHOD WindowRaised(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD WindowLowered(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD WindowShown(mozIDOMWindowProxy *aWindow, bool aNeedsFocus) override; \
  NS_IMETHOD WindowHidden(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument) override; \
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin) override; \
  NS_IMETHOD ParentActivated(mozIDOMWindowProxy *aWindow, bool active) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFOCUSMANAGER \
  NS_METHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow); \
  NS_METHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow); \
  NS_METHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow); \
  NS_METHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow); \
  NS_METHOD GetFocusedElement(nsIDOMElement * *aFocusedElement); \
  NS_METHOD GetLastFocusMethod(mozIDOMWindowProxy *window, uint32_t *_retval); \
  NS_METHOD SetFocus(nsIDOMElement *aElement, uint32_t aFlags); \
  NS_METHOD MoveFocus(mozIDOMWindowProxy *aWindow, nsIDOMElement *aStartElement, uint32_t aType, uint32_t aFlags, nsIDOMElement * *_retval); \
  NS_METHOD ClearFocus(mozIDOMWindowProxy *aWindow); \
  NS_METHOD GetFocusedElementForWindow(mozIDOMWindowProxy *aWindow, bool aDeep, mozIDOMWindowProxy * *aFocusedWindow, nsIDOMElement * *_retval); \
  NS_METHOD MoveCaretToFocus(mozIDOMWindowProxy *aWindow); \
  NS_METHOD ElementIsFocusable(nsIDOMElement *aElement, uint32_t aFlags, bool *_retval); \
  NS_METHOD WindowRaised(mozIDOMWindowProxy *aWindow); \
  NS_METHOD WindowLowered(mozIDOMWindowProxy *aWindow); \
  NS_METHOD WindowShown(mozIDOMWindowProxy *aWindow, bool aNeedsFocus); \
  NS_METHOD WindowHidden(mozIDOMWindowProxy *aWindow); \
  NS_METHOD FireDelayedEvents(nsIDocument *aDocument); \
  NS_METHOD FocusPlugin(nsIContent *aPlugin); \
  NS_METHOD ParentActivated(mozIDOMWindowProxy *aWindow, bool active); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFOCUSMANAGER(_to) \
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) override { return _to GetActiveWindow(aActiveWindow); } \
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) override { return _to SetActiveWindow(aActiveWindow); } \
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) override { return _to GetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) override { return _to SetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override { return _to GetFocusedElement(aFocusedElement); } \
  NS_IMETHOD GetLastFocusMethod(mozIDOMWindowProxy *window, uint32_t *_retval) override { return _to GetLastFocusMethod(window, _retval); } \
  NS_IMETHOD SetFocus(nsIDOMElement *aElement, uint32_t aFlags) override { return _to SetFocus(aElement, aFlags); } \
  NS_IMETHOD MoveFocus(mozIDOMWindowProxy *aWindow, nsIDOMElement *aStartElement, uint32_t aType, uint32_t aFlags, nsIDOMElement * *_retval) override { return _to MoveFocus(aWindow, aStartElement, aType, aFlags, _retval); } \
  NS_IMETHOD ClearFocus(mozIDOMWindowProxy *aWindow) override { return _to ClearFocus(aWindow); } \
  NS_IMETHOD GetFocusedElementForWindow(mozIDOMWindowProxy *aWindow, bool aDeep, mozIDOMWindowProxy * *aFocusedWindow, nsIDOMElement * *_retval) override { return _to GetFocusedElementForWindow(aWindow, aDeep, aFocusedWindow, _retval); } \
  NS_IMETHOD MoveCaretToFocus(mozIDOMWindowProxy *aWindow) override { return _to MoveCaretToFocus(aWindow); } \
  NS_IMETHOD ElementIsFocusable(nsIDOMElement *aElement, uint32_t aFlags, bool *_retval) override { return _to ElementIsFocusable(aElement, aFlags, _retval); } \
  NS_IMETHOD WindowRaised(mozIDOMWindowProxy *aWindow) override { return _to WindowRaised(aWindow); } \
  NS_IMETHOD WindowLowered(mozIDOMWindowProxy *aWindow) override { return _to WindowLowered(aWindow); } \
  NS_IMETHOD WindowShown(mozIDOMWindowProxy *aWindow, bool aNeedsFocus) override { return _to WindowShown(aWindow, aNeedsFocus); } \
  NS_IMETHOD WindowHidden(mozIDOMWindowProxy *aWindow) override { return _to WindowHidden(aWindow); } \
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument) override { return _to FireDelayedEvents(aDocument); } \
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin) override { return _to FocusPlugin(aPlugin); } \
  NS_IMETHOD ParentActivated(mozIDOMWindowProxy *aWindow, bool active) override { return _to ParentActivated(aWindow, active); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFOCUSMANAGER(_to) \
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveWindow(aActiveWindow); } \
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveWindow(aActiveWindow); } \
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedElement(aFocusedElement); } \
  NS_IMETHOD GetLastFocusMethod(mozIDOMWindowProxy *window, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastFocusMethod(window, _retval); } \
  NS_IMETHOD SetFocus(nsIDOMElement *aElement, uint32_t aFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocus(aElement, aFlags); } \
  NS_IMETHOD MoveFocus(mozIDOMWindowProxy *aWindow, nsIDOMElement *aStartElement, uint32_t aType, uint32_t aFlags, nsIDOMElement * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveFocus(aWindow, aStartElement, aType, aFlags, _retval); } \
  NS_IMETHOD ClearFocus(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearFocus(aWindow); } \
  NS_IMETHOD GetFocusedElementForWindow(mozIDOMWindowProxy *aWindow, bool aDeep, mozIDOMWindowProxy * *aFocusedWindow, nsIDOMElement * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedElementForWindow(aWindow, aDeep, aFocusedWindow, _retval); } \
  NS_IMETHOD MoveCaretToFocus(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveCaretToFocus(aWindow); } \
  NS_IMETHOD ElementIsFocusable(nsIDOMElement *aElement, uint32_t aFlags, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ElementIsFocusable(aElement, aFlags, _retval); } \
  NS_IMETHOD WindowRaised(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowRaised(aWindow); } \
  NS_IMETHOD WindowLowered(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowLowered(aWindow); } \
  NS_IMETHOD WindowShown(mozIDOMWindowProxy *aWindow, bool aNeedsFocus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowShown(aWindow, aNeedsFocus); } \
  NS_IMETHOD WindowHidden(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowHidden(aWindow); } \
  NS_IMETHOD FireDelayedEvents(nsIDocument *aDocument) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FireDelayedEvents(aDocument); } \
  NS_IMETHOD FocusPlugin(nsIContent *aPlugin) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FocusPlugin(aPlugin); } \
  NS_IMETHOD ParentActivated(mozIDOMWindowProxy *aWindow, bool active) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ParentActivated(aWindow, active); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFocusManager : public nsIFocusManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFOCUSMANAGER

  nsFocusManager();

private:
  ~nsFocusManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFocusManager, nsIFocusManager)

nsFocusManager::nsFocusManager()
{
  /* member initializers and constructor code */
}

nsFocusManager::~nsFocusManager()
{
  /* destructor code */
}

/* attribute mozIDOMWindowProxy activeWindow; */
NS_IMETHODIMP nsFocusManager::GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFocusManager::SetActiveWindow(mozIDOMWindowProxy *aActiveWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute mozIDOMWindowProxy focusedWindow; */
NS_IMETHODIMP nsFocusManager::GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFocusManager::SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement focusedElement; */
NS_IMETHODIMP nsFocusManager::GetFocusedElement(nsIDOMElement * *aFocusedElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t getLastFocusMethod (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsFocusManager::GetLastFocusMethod(mozIDOMWindowProxy *window, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFocus (in nsIDOMElement aElement, in unsigned long aFlags); */
NS_IMETHODIMP nsFocusManager::SetFocus(nsIDOMElement *aElement, uint32_t aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement moveFocus (in mozIDOMWindowProxy aWindow, in nsIDOMElement aStartElement, in unsigned long aType, in unsigned long aFlags); */
NS_IMETHODIMP nsFocusManager::MoveFocus(mozIDOMWindowProxy *aWindow, nsIDOMElement *aStartElement, uint32_t aType, uint32_t aFlags, nsIDOMElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearFocus (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsFocusManager::ClearFocus(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMElement getFocusedElementForWindow (in mozIDOMWindowProxy aWindow, in boolean aDeep, out mozIDOMWindowProxy aFocusedWindow); */
NS_IMETHODIMP nsFocusManager::GetFocusedElementForWindow(mozIDOMWindowProxy *aWindow, bool aDeep, mozIDOMWindowProxy * *aFocusedWindow, nsIDOMElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveCaretToFocus (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsFocusManager::MoveCaretToFocus(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean elementIsFocusable (in nsIDOMElement aElement, in unsigned long aFlags); */
NS_IMETHODIMP nsFocusManager::ElementIsFocusable(nsIDOMElement *aElement, uint32_t aFlags, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowRaised (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsFocusManager::WindowRaised(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowLowered (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsFocusManager::WindowLowered(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowShown (in mozIDOMWindowProxy aWindow, in boolean aNeedsFocus); */
NS_IMETHODIMP nsFocusManager::WindowShown(mozIDOMWindowProxy *aWindow, bool aNeedsFocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void windowHidden (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsFocusManager::WindowHidden(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void fireDelayedEvents (in nsIDocument aDocument); */
NS_IMETHODIMP nsFocusManager::FireDelayedEvents(nsIDocument *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void focusPlugin (in nsIContent aPlugin); */
NS_IMETHODIMP nsFocusManager::FocusPlugin(nsIContent *aPlugin)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void parentActivated (in mozIDOMWindowProxy aWindow, in bool active); */
NS_IMETHODIMP nsFocusManager::ParentActivated(mozIDOMWindowProxy *aWindow, bool active)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFocusManager_h__ */
