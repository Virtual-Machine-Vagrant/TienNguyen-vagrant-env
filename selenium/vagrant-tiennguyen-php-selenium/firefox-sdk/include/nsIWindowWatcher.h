/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWindowWatcher.idl
 */

#ifndef __gen_nsIWindowWatcher_h__
#define __gen_nsIWindowWatcher_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIObserver; /* forward declaration */

class nsIPrompt; /* forward declaration */

class nsIAuthPrompt; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */

class nsIWebBrowserChrome; /* forward declaration */

class nsIWindowCreator; /* forward declaration */


/* starting interface:    nsIWindowWatcher */
#define NS_IWINDOWWATCHER_IID_STR "641fe945-6902-4b3f-87c2-0daef32499b3"

#define NS_IWINDOWWATCHER_IID \
  {0x641fe945, 0x6902, 0x4b3f, \
    { 0x87, 0xc2, 0x0d, 0xae, 0xf3, 0x24, 0x99, 0xb3 }}

class NS_NO_VTABLE nsIWindowWatcher : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWINDOWWATCHER_IID)

  /* mozIDOMWindowProxy openWindow (in mozIDOMWindowProxy aParent, in string aUrl, in string aName, in string aFeatures, in nsISupports aArguments); */
  NS_IMETHOD OpenWindow(mozIDOMWindowProxy *aParent, const char * aUrl, const char * aName, const char * aFeatures, nsISupports *aArguments, mozIDOMWindowProxy * *_retval) = 0;

  /* void registerNotification (in nsIObserver aObserver); */
  NS_IMETHOD RegisterNotification(nsIObserver *aObserver) = 0;

  /* void unregisterNotification (in nsIObserver aObserver); */
  NS_IMETHOD UnregisterNotification(nsIObserver *aObserver) = 0;

  /* nsISimpleEnumerator getWindowEnumerator (); */
  NS_IMETHOD GetWindowEnumerator(nsISimpleEnumerator * *_retval) = 0;

  /* nsIPrompt getNewPrompter (in mozIDOMWindowProxy aParent); */
  NS_IMETHOD GetNewPrompter(mozIDOMWindowProxy *aParent, nsIPrompt * *_retval) = 0;

  /* nsIAuthPrompt getNewAuthPrompter (in mozIDOMWindowProxy aParent); */
  NS_IMETHOD GetNewAuthPrompter(mozIDOMWindowProxy *aParent, nsIAuthPrompt * *_retval) = 0;

  /* void setWindowCreator (in nsIWindowCreator creator); */
  NS_IMETHOD SetWindowCreator(nsIWindowCreator *creator) = 0;

  /* boolean hasWindowCreator (); */
  NS_IMETHOD HasWindowCreator(bool *_retval) = 0;

  /* nsIWebBrowserChrome getChromeForWindow (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD GetChromeForWindow(mozIDOMWindowProxy *aWindow, nsIWebBrowserChrome * *_retval) = 0;

  /* mozIDOMWindowProxy getWindowByName (in wstring aTargetName, in mozIDOMWindowProxy aCurrentWindow); */
  NS_IMETHOD GetWindowByName(const char16_t * aTargetName, mozIDOMWindowProxy *aCurrentWindow, mozIDOMWindowProxy * *_retval) = 0;

  /* attribute mozIDOMWindowProxy activeWindow; */
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) = 0;
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWindowWatcher, NS_IWINDOWWATCHER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWINDOWWATCHER \
  NS_IMETHOD OpenWindow(mozIDOMWindowProxy *aParent, const char * aUrl, const char * aName, const char * aFeatures, nsISupports *aArguments, mozIDOMWindowProxy * *_retval) override; \
  NS_IMETHOD RegisterNotification(nsIObserver *aObserver) override; \
  NS_IMETHOD UnregisterNotification(nsIObserver *aObserver) override; \
  NS_IMETHOD GetWindowEnumerator(nsISimpleEnumerator * *_retval) override; \
  NS_IMETHOD GetNewPrompter(mozIDOMWindowProxy *aParent, nsIPrompt * *_retval) override; \
  NS_IMETHOD GetNewAuthPrompter(mozIDOMWindowProxy *aParent, nsIAuthPrompt * *_retval) override; \
  NS_IMETHOD SetWindowCreator(nsIWindowCreator *creator) override; \
  NS_IMETHOD HasWindowCreator(bool *_retval) override; \
  NS_IMETHOD GetChromeForWindow(mozIDOMWindowProxy *aWindow, nsIWebBrowserChrome * *_retval) override; \
  NS_IMETHOD GetWindowByName(const char16_t * aTargetName, mozIDOMWindowProxy *aCurrentWindow, mozIDOMWindowProxy * *_retval) override; \
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) override; \
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWINDOWWATCHER \
  NS_METHOD OpenWindow(mozIDOMWindowProxy *aParent, const char * aUrl, const char * aName, const char * aFeatures, nsISupports *aArguments, mozIDOMWindowProxy * *_retval); \
  NS_METHOD RegisterNotification(nsIObserver *aObserver); \
  NS_METHOD UnregisterNotification(nsIObserver *aObserver); \
  NS_METHOD GetWindowEnumerator(nsISimpleEnumerator * *_retval); \
  NS_METHOD GetNewPrompter(mozIDOMWindowProxy *aParent, nsIPrompt * *_retval); \
  NS_METHOD GetNewAuthPrompter(mozIDOMWindowProxy *aParent, nsIAuthPrompt * *_retval); \
  NS_METHOD SetWindowCreator(nsIWindowCreator *creator); \
  NS_METHOD HasWindowCreator(bool *_retval); \
  NS_METHOD GetChromeForWindow(mozIDOMWindowProxy *aWindow, nsIWebBrowserChrome * *_retval); \
  NS_METHOD GetWindowByName(const char16_t * aTargetName, mozIDOMWindowProxy *aCurrentWindow, mozIDOMWindowProxy * *_retval); \
  NS_METHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow); \
  NS_METHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWINDOWWATCHER(_to) \
  NS_IMETHOD OpenWindow(mozIDOMWindowProxy *aParent, const char * aUrl, const char * aName, const char * aFeatures, nsISupports *aArguments, mozIDOMWindowProxy * *_retval) override { return _to OpenWindow(aParent, aUrl, aName, aFeatures, aArguments, _retval); } \
  NS_IMETHOD RegisterNotification(nsIObserver *aObserver) override { return _to RegisterNotification(aObserver); } \
  NS_IMETHOD UnregisterNotification(nsIObserver *aObserver) override { return _to UnregisterNotification(aObserver); } \
  NS_IMETHOD GetWindowEnumerator(nsISimpleEnumerator * *_retval) override { return _to GetWindowEnumerator(_retval); } \
  NS_IMETHOD GetNewPrompter(mozIDOMWindowProxy *aParent, nsIPrompt * *_retval) override { return _to GetNewPrompter(aParent, _retval); } \
  NS_IMETHOD GetNewAuthPrompter(mozIDOMWindowProxy *aParent, nsIAuthPrompt * *_retval) override { return _to GetNewAuthPrompter(aParent, _retval); } \
  NS_IMETHOD SetWindowCreator(nsIWindowCreator *creator) override { return _to SetWindowCreator(creator); } \
  NS_IMETHOD HasWindowCreator(bool *_retval) override { return _to HasWindowCreator(_retval); } \
  NS_IMETHOD GetChromeForWindow(mozIDOMWindowProxy *aWindow, nsIWebBrowserChrome * *_retval) override { return _to GetChromeForWindow(aWindow, _retval); } \
  NS_IMETHOD GetWindowByName(const char16_t * aTargetName, mozIDOMWindowProxy *aCurrentWindow, mozIDOMWindowProxy * *_retval) override { return _to GetWindowByName(aTargetName, aCurrentWindow, _retval); } \
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) override { return _to GetActiveWindow(aActiveWindow); } \
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) override { return _to SetActiveWindow(aActiveWindow); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWINDOWWATCHER(_to) \
  NS_IMETHOD OpenWindow(mozIDOMWindowProxy *aParent, const char * aUrl, const char * aName, const char * aFeatures, nsISupports *aArguments, mozIDOMWindowProxy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenWindow(aParent, aUrl, aName, aFeatures, aArguments, _retval); } \
  NS_IMETHOD RegisterNotification(nsIObserver *aObserver) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterNotification(aObserver); } \
  NS_IMETHOD UnregisterNotification(nsIObserver *aObserver) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterNotification(aObserver); } \
  NS_IMETHOD GetWindowEnumerator(nsISimpleEnumerator * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowEnumerator(_retval); } \
  NS_IMETHOD GetNewPrompter(mozIDOMWindowProxy *aParent, nsIPrompt * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewPrompter(aParent, _retval); } \
  NS_IMETHOD GetNewAuthPrompter(mozIDOMWindowProxy *aParent, nsIAuthPrompt * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewAuthPrompter(aParent, _retval); } \
  NS_IMETHOD SetWindowCreator(nsIWindowCreator *creator) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWindowCreator(creator); } \
  NS_IMETHOD HasWindowCreator(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->HasWindowCreator(_retval); } \
  NS_IMETHOD GetChromeForWindow(mozIDOMWindowProxy *aWindow, nsIWebBrowserChrome * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChromeForWindow(aWindow, _retval); } \
  NS_IMETHOD GetWindowByName(const char16_t * aTargetName, mozIDOMWindowProxy *aCurrentWindow, mozIDOMWindowProxy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowByName(aTargetName, aCurrentWindow, _retval); } \
  NS_IMETHOD GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveWindow(aActiveWindow); } \
  NS_IMETHOD SetActiveWindow(mozIDOMWindowProxy *aActiveWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActiveWindow(aActiveWindow); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWindowWatcher : public nsIWindowWatcher
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWINDOWWATCHER

  nsWindowWatcher();

private:
  ~nsWindowWatcher();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWindowWatcher, nsIWindowWatcher)

nsWindowWatcher::nsWindowWatcher()
{
  /* member initializers and constructor code */
}

nsWindowWatcher::~nsWindowWatcher()
{
  /* destructor code */
}

/* mozIDOMWindowProxy openWindow (in mozIDOMWindowProxy aParent, in string aUrl, in string aName, in string aFeatures, in nsISupports aArguments); */
NS_IMETHODIMP nsWindowWatcher::OpenWindow(mozIDOMWindowProxy *aParent, const char * aUrl, const char * aName, const char * aFeatures, nsISupports *aArguments, mozIDOMWindowProxy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerNotification (in nsIObserver aObserver); */
NS_IMETHODIMP nsWindowWatcher::RegisterNotification(nsIObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterNotification (in nsIObserver aObserver); */
NS_IMETHODIMP nsWindowWatcher::UnregisterNotification(nsIObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISimpleEnumerator getWindowEnumerator (); */
NS_IMETHODIMP nsWindowWatcher::GetWindowEnumerator(nsISimpleEnumerator * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrompt getNewPrompter (in mozIDOMWindowProxy aParent); */
NS_IMETHODIMP nsWindowWatcher::GetNewPrompter(mozIDOMWindowProxy *aParent, nsIPrompt * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAuthPrompt getNewAuthPrompter (in mozIDOMWindowProxy aParent); */
NS_IMETHODIMP nsWindowWatcher::GetNewAuthPrompter(mozIDOMWindowProxy *aParent, nsIAuthPrompt * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWindowCreator (in nsIWindowCreator creator); */
NS_IMETHODIMP nsWindowWatcher::SetWindowCreator(nsIWindowCreator *creator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasWindowCreator (); */
NS_IMETHODIMP nsWindowWatcher::HasWindowCreator(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIWebBrowserChrome getChromeForWindow (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP nsWindowWatcher::GetChromeForWindow(mozIDOMWindowProxy *aWindow, nsIWebBrowserChrome * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIDOMWindowProxy getWindowByName (in wstring aTargetName, in mozIDOMWindowProxy aCurrentWindow); */
NS_IMETHODIMP nsWindowWatcher::GetWindowByName(const char16_t * aTargetName, mozIDOMWindowProxy *aCurrentWindow, mozIDOMWindowProxy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute mozIDOMWindowProxy activeWindow; */
NS_IMETHODIMP nsWindowWatcher::GetActiveWindow(mozIDOMWindowProxy * *aActiveWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWindowWatcher::SetActiveWindow(mozIDOMWindowProxy *aActiveWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_WINDOWWATCHER_CONTRACTID "@mozilla.org/embedcomp/window-watcher;1"

#endif /* __gen_nsIWindowWatcher_h__ */
