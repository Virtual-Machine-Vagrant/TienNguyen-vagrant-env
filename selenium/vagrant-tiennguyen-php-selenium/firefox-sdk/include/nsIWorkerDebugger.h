/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWorkerDebugger.idl
 */

#ifndef __gen_nsIWorkerDebugger_h__
#define __gen_nsIWorkerDebugger_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */

class nsIPrincipal; /* forward declaration */


/* starting interface:    nsIWorkerDebuggerListener */
#define NS_IWORKERDEBUGGERLISTENER_IID_STR "9cf3b48e-361d-486a-8917-55cf8d00bb41"

#define NS_IWORKERDEBUGGERLISTENER_IID \
  {0x9cf3b48e, 0x361d, 0x486a, \
    { 0x89, 0x17, 0x55, 0xcf, 0x8d, 0x00, 0xbb, 0x41 }}

class NS_NO_VTABLE nsIWorkerDebuggerListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWORKERDEBUGGERLISTENER_IID)

  /* void onClose (); */
  NS_IMETHOD OnClose(void) = 0;

  /* void onError (in DOMString filename, in unsigned long lineno, in DOMString message); */
  NS_IMETHOD OnError(const nsAString & filename, uint32_t lineno, const nsAString & message) = 0;

  /* void onMessage (in DOMString message); */
  NS_IMETHOD OnMessage(const nsAString & message) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWorkerDebuggerListener, NS_IWORKERDEBUGGERLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWORKERDEBUGGERLISTENER \
  NS_IMETHOD OnClose(void) override; \
  NS_IMETHOD OnError(const nsAString & filename, uint32_t lineno, const nsAString & message) override; \
  NS_IMETHOD OnMessage(const nsAString & message) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWORKERDEBUGGERLISTENER \
  NS_METHOD OnClose(void); \
  NS_METHOD OnError(const nsAString & filename, uint32_t lineno, const nsAString & message); \
  NS_METHOD OnMessage(const nsAString & message); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWORKERDEBUGGERLISTENER(_to) \
  NS_IMETHOD OnClose(void) override { return _to OnClose(); } \
  NS_IMETHOD OnError(const nsAString & filename, uint32_t lineno, const nsAString & message) override { return _to OnError(filename, lineno, message); } \
  NS_IMETHOD OnMessage(const nsAString & message) override { return _to OnMessage(message); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWORKERDEBUGGERLISTENER(_to) \
  NS_IMETHOD OnClose(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnClose(); } \
  NS_IMETHOD OnError(const nsAString & filename, uint32_t lineno, const nsAString & message) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnError(filename, lineno, message); } \
  NS_IMETHOD OnMessage(const nsAString & message) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnMessage(message); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWorkerDebuggerListener : public nsIWorkerDebuggerListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWORKERDEBUGGERLISTENER

  nsWorkerDebuggerListener();

private:
  ~nsWorkerDebuggerListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWorkerDebuggerListener, nsIWorkerDebuggerListener)

nsWorkerDebuggerListener::nsWorkerDebuggerListener()
{
  /* member initializers and constructor code */
}

nsWorkerDebuggerListener::~nsWorkerDebuggerListener()
{
  /* destructor code */
}

/* void onClose (); */
NS_IMETHODIMP nsWorkerDebuggerListener::OnClose()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onError (in DOMString filename, in unsigned long lineno, in DOMString message); */
NS_IMETHODIMP nsWorkerDebuggerListener::OnError(const nsAString & filename, uint32_t lineno, const nsAString & message)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onMessage (in DOMString message); */
NS_IMETHODIMP nsWorkerDebuggerListener::OnMessage(const nsAString & message)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWorkerDebugger */
#define NS_IWORKERDEBUGGER_IID_STR "22f93aa3-8a05-46be-87e0-fa93bf8a8eff"

#define NS_IWORKERDEBUGGER_IID \
  {0x22f93aa3, 0x8a05, 0x46be, \
    { 0x87, 0xe0, 0xfa, 0x93, 0xbf, 0x8a, 0x8e, 0xff }}

class NS_NO_VTABLE nsIWorkerDebugger : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWORKERDEBUGGER_IID)

  enum {
    TYPE_DEDICATED = 0U,
    TYPE_SHARED = 1U,
    TYPE_SERVICE = 2U
  };

  /* readonly attribute bool isClosed; */
  NS_IMETHOD GetIsClosed(bool *aIsClosed) = 0;

  /* readonly attribute bool isChrome; */
  NS_IMETHOD GetIsChrome(bool *aIsChrome) = 0;

  /* readonly attribute bool isInitialized; */
  NS_IMETHOD GetIsInitialized(bool *aIsInitialized) = 0;

  /* readonly attribute nsIWorkerDebugger parent; */
  NS_IMETHOD GetParent(nsIWorkerDebugger * *aParent) = 0;

  /* readonly attribute unsigned long type; */
  NS_IMETHOD GetType(uint32_t *aType) = 0;

  /* readonly attribute DOMString url; */
  NS_IMETHOD GetUrl(nsAString & aUrl) = 0;

  /* readonly attribute mozIDOMWindow window; */
  NS_IMETHOD GetWindow(mozIDOMWindow * *aWindow) = 0;

  /* readonly attribute nsIPrincipal principal; */
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) = 0;

  /* readonly attribute unsigned long serviceWorkerID; */
  NS_IMETHOD GetServiceWorkerID(uint32_t *aServiceWorkerID) = 0;

  /* void initialize (in DOMString url); */
  NS_IMETHOD Initialize(const nsAString & url) = 0;

  /* [binaryname(PostMessageMoz)] void postMessage (in DOMString message); */
  NS_IMETHOD PostMessageMoz(const nsAString & message) = 0;

  /* void addListener (in nsIWorkerDebuggerListener listener); */
  NS_IMETHOD AddListener(nsIWorkerDebuggerListener *listener) = 0;

  /* void removeListener (in nsIWorkerDebuggerListener listener); */
  NS_IMETHOD RemoveListener(nsIWorkerDebuggerListener *listener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWorkerDebugger, NS_IWORKERDEBUGGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWORKERDEBUGGER \
  NS_IMETHOD GetIsClosed(bool *aIsClosed) override; \
  NS_IMETHOD GetIsChrome(bool *aIsChrome) override; \
  NS_IMETHOD GetIsInitialized(bool *aIsInitialized) override; \
  NS_IMETHOD GetParent(nsIWorkerDebugger * *aParent) override; \
  NS_IMETHOD GetType(uint32_t *aType) override; \
  NS_IMETHOD GetUrl(nsAString & aUrl) override; \
  NS_IMETHOD GetWindow(mozIDOMWindow * *aWindow) override; \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override; \
  NS_IMETHOD GetServiceWorkerID(uint32_t *aServiceWorkerID) override; \
  NS_IMETHOD Initialize(const nsAString & url) override; \
  NS_IMETHOD PostMessageMoz(const nsAString & message) override; \
  NS_IMETHOD AddListener(nsIWorkerDebuggerListener *listener) override; \
  NS_IMETHOD RemoveListener(nsIWorkerDebuggerListener *listener) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWORKERDEBUGGER \
  NS_METHOD GetIsClosed(bool *aIsClosed); \
  NS_METHOD GetIsChrome(bool *aIsChrome); \
  NS_METHOD GetIsInitialized(bool *aIsInitialized); \
  NS_METHOD GetParent(nsIWorkerDebugger * *aParent); \
  NS_METHOD GetType(uint32_t *aType); \
  NS_METHOD GetUrl(nsAString & aUrl); \
  NS_METHOD GetWindow(mozIDOMWindow * *aWindow); \
  NS_METHOD GetPrincipal(nsIPrincipal * *aPrincipal); \
  NS_METHOD GetServiceWorkerID(uint32_t *aServiceWorkerID); \
  NS_METHOD Initialize(const nsAString & url); \
  NS_METHOD PostMessageMoz(const nsAString & message); \
  NS_METHOD AddListener(nsIWorkerDebuggerListener *listener); \
  NS_METHOD RemoveListener(nsIWorkerDebuggerListener *listener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWORKERDEBUGGER(_to) \
  NS_IMETHOD GetIsClosed(bool *aIsClosed) override { return _to GetIsClosed(aIsClosed); } \
  NS_IMETHOD GetIsChrome(bool *aIsChrome) override { return _to GetIsChrome(aIsChrome); } \
  NS_IMETHOD GetIsInitialized(bool *aIsInitialized) override { return _to GetIsInitialized(aIsInitialized); } \
  NS_IMETHOD GetParent(nsIWorkerDebugger * *aParent) override { return _to GetParent(aParent); } \
  NS_IMETHOD GetType(uint32_t *aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetUrl(nsAString & aUrl) override { return _to GetUrl(aUrl); } \
  NS_IMETHOD GetWindow(mozIDOMWindow * *aWindow) override { return _to GetWindow(aWindow); } \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return _to GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetServiceWorkerID(uint32_t *aServiceWorkerID) override { return _to GetServiceWorkerID(aServiceWorkerID); } \
  NS_IMETHOD Initialize(const nsAString & url) override { return _to Initialize(url); } \
  NS_IMETHOD PostMessageMoz(const nsAString & message) override { return _to PostMessageMoz(message); } \
  NS_IMETHOD AddListener(nsIWorkerDebuggerListener *listener) override { return _to AddListener(listener); } \
  NS_IMETHOD RemoveListener(nsIWorkerDebuggerListener *listener) override { return _to RemoveListener(listener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWORKERDEBUGGER(_to) \
  NS_IMETHOD GetIsClosed(bool *aIsClosed) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsClosed(aIsClosed); } \
  NS_IMETHOD GetIsChrome(bool *aIsChrome) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsChrome(aIsChrome); } \
  NS_IMETHOD GetIsInitialized(bool *aIsInitialized) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsInitialized(aIsInitialized); } \
  NS_IMETHOD GetParent(nsIWorkerDebugger * *aParent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_IMETHOD GetType(uint32_t *aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetUrl(nsAString & aUrl) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUrl(aUrl); } \
  NS_IMETHOD GetWindow(mozIDOMWindow * *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindow(aWindow); } \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetServiceWorkerID(uint32_t *aServiceWorkerID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetServiceWorkerID(aServiceWorkerID); } \
  NS_IMETHOD Initialize(const nsAString & url) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Initialize(url); } \
  NS_IMETHOD PostMessageMoz(const nsAString & message) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PostMessageMoz(message); } \
  NS_IMETHOD AddListener(nsIWorkerDebuggerListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(listener); } \
  NS_IMETHOD RemoveListener(nsIWorkerDebuggerListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(listener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWorkerDebugger : public nsIWorkerDebugger
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWORKERDEBUGGER

  nsWorkerDebugger();

private:
  ~nsWorkerDebugger();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWorkerDebugger, nsIWorkerDebugger)

nsWorkerDebugger::nsWorkerDebugger()
{
  /* member initializers and constructor code */
}

nsWorkerDebugger::~nsWorkerDebugger()
{
  /* destructor code */
}

/* readonly attribute bool isClosed; */
NS_IMETHODIMP nsWorkerDebugger::GetIsClosed(bool *aIsClosed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool isChrome; */
NS_IMETHODIMP nsWorkerDebugger::GetIsChrome(bool *aIsChrome)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool isInitialized; */
NS_IMETHODIMP nsWorkerDebugger::GetIsInitialized(bool *aIsInitialized)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIWorkerDebugger parent; */
NS_IMETHODIMP nsWorkerDebugger::GetParent(nsIWorkerDebugger * *aParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long type; */
NS_IMETHODIMP nsWorkerDebugger::GetType(uint32_t *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString url; */
NS_IMETHODIMP nsWorkerDebugger::GetUrl(nsAString & aUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIDOMWindow window; */
NS_IMETHODIMP nsWorkerDebugger::GetWindow(mozIDOMWindow * *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIPrincipal principal; */
NS_IMETHODIMP nsWorkerDebugger::GetPrincipal(nsIPrincipal * *aPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long serviceWorkerID; */
NS_IMETHODIMP nsWorkerDebugger::GetServiceWorkerID(uint32_t *aServiceWorkerID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initialize (in DOMString url); */
NS_IMETHODIMP nsWorkerDebugger::Initialize(const nsAString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(PostMessageMoz)] void postMessage (in DOMString message); */
NS_IMETHODIMP nsWorkerDebugger::PostMessageMoz(const nsAString & message)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addListener (in nsIWorkerDebuggerListener listener); */
NS_IMETHODIMP nsWorkerDebugger::AddListener(nsIWorkerDebuggerListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListener (in nsIWorkerDebuggerListener listener); */
NS_IMETHODIMP nsWorkerDebugger::RemoveListener(nsIWorkerDebuggerListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWorkerDebugger_h__ */
