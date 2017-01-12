/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIServiceWorkerManager.idl
 */

#ifndef __gen_nsIServiceWorkerManager_h__
#define __gen_nsIServiceWorkerManager_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */

class nsPIDOMWindowInner; /* forward declaration */

class mozIDOMWindowProxy; /* forward declaration */

class nsIArray; /* forward declaration */

class nsIDocument; /* forward declaration */

class nsIInterceptedChannel; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIRunnable; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIServiceWorkerUnregisterCallback */
#define NS_ISERVICEWORKERUNREGISTERCALLBACK_IID_STR "52ee2c9d-ee87-4caf-9588-23ae77ff8798"

#define NS_ISERVICEWORKERUNREGISTERCALLBACK_IID \
  {0x52ee2c9d, 0xee87, 0x4caf, \
    { 0x95, 0x88, 0x23, 0xae, 0x77, 0xff, 0x87, 0x98 }}

class NS_NO_VTABLE nsIServiceWorkerUnregisterCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISERVICEWORKERUNREGISTERCALLBACK_IID)

  /* void unregisterSucceeded (in bool aState); */
  NS_IMETHOD UnregisterSucceeded(bool aState) = 0;

  /* void unregisterFailed (); */
  NS_IMETHOD UnregisterFailed(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIServiceWorkerUnregisterCallback, NS_ISERVICEWORKERUNREGISTERCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISERVICEWORKERUNREGISTERCALLBACK \
  NS_IMETHOD UnregisterSucceeded(bool aState) override; \
  NS_IMETHOD UnregisterFailed(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISERVICEWORKERUNREGISTERCALLBACK \
  NS_METHOD UnregisterSucceeded(bool aState); \
  NS_METHOD UnregisterFailed(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISERVICEWORKERUNREGISTERCALLBACK(_to) \
  NS_IMETHOD UnregisterSucceeded(bool aState) override { return _to UnregisterSucceeded(aState); } \
  NS_IMETHOD UnregisterFailed(void) override { return _to UnregisterFailed(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISERVICEWORKERUNREGISTERCALLBACK(_to) \
  NS_IMETHOD UnregisterSucceeded(bool aState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterSucceeded(aState); } \
  NS_IMETHOD UnregisterFailed(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterFailed(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsServiceWorkerUnregisterCallback : public nsIServiceWorkerUnregisterCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISERVICEWORKERUNREGISTERCALLBACK

  nsServiceWorkerUnregisterCallback();

private:
  ~nsServiceWorkerUnregisterCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsServiceWorkerUnregisterCallback, nsIServiceWorkerUnregisterCallback)

nsServiceWorkerUnregisterCallback::nsServiceWorkerUnregisterCallback()
{
  /* member initializers and constructor code */
}

nsServiceWorkerUnregisterCallback::~nsServiceWorkerUnregisterCallback()
{
  /* destructor code */
}

/* void unregisterSucceeded (in bool aState); */
NS_IMETHODIMP nsServiceWorkerUnregisterCallback::UnregisterSucceeded(bool aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterFailed (); */
NS_IMETHODIMP nsServiceWorkerUnregisterCallback::UnregisterFailed()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsIWorkerDebugger; /* forward declaration */


/* starting interface:    nsIServiceWorkerInfo */
#define NS_ISERVICEWORKERINFO_IID_STR "76e357ed-208d-4e4c-9165-1c4059707879"

#define NS_ISERVICEWORKERINFO_IID \
  {0x76e357ed, 0x208d, 0x4e4c, \
    { 0x91, 0x65, 0x1c, 0x40, 0x59, 0x70, 0x78, 0x79 }}

class NS_NO_VTABLE nsIServiceWorkerInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISERVICEWORKERINFO_IID)

  /* readonly attribute DOMString scriptSpec; */
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) = 0;

  /* readonly attribute DOMString cacheName; */
  NS_IMETHOD GetCacheName(nsAString & aCacheName) = 0;

  /* readonly attribute nsIWorkerDebugger debugger; */
  NS_IMETHOD GetDebugger(nsIWorkerDebugger * *aDebugger) = 0;

  /* void attachDebugger (); */
  NS_IMETHOD AttachDebugger(void) = 0;

  /* void detachDebugger (); */
  NS_IMETHOD DetachDebugger(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIServiceWorkerInfo, NS_ISERVICEWORKERINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISERVICEWORKERINFO \
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) override; \
  NS_IMETHOD GetCacheName(nsAString & aCacheName) override; \
  NS_IMETHOD GetDebugger(nsIWorkerDebugger * *aDebugger) override; \
  NS_IMETHOD AttachDebugger(void) override; \
  NS_IMETHOD DetachDebugger(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISERVICEWORKERINFO \
  NS_METHOD GetScriptSpec(nsAString & aScriptSpec); \
  NS_METHOD GetCacheName(nsAString & aCacheName); \
  NS_METHOD GetDebugger(nsIWorkerDebugger * *aDebugger); \
  NS_METHOD AttachDebugger(void); \
  NS_METHOD DetachDebugger(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISERVICEWORKERINFO(_to) \
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) override { return _to GetScriptSpec(aScriptSpec); } \
  NS_IMETHOD GetCacheName(nsAString & aCacheName) override { return _to GetCacheName(aCacheName); } \
  NS_IMETHOD GetDebugger(nsIWorkerDebugger * *aDebugger) override { return _to GetDebugger(aDebugger); } \
  NS_IMETHOD AttachDebugger(void) override { return _to AttachDebugger(); } \
  NS_IMETHOD DetachDebugger(void) override { return _to DetachDebugger(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISERVICEWORKERINFO(_to) \
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScriptSpec(aScriptSpec); } \
  NS_IMETHOD GetCacheName(nsAString & aCacheName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheName(aCacheName); } \
  NS_IMETHOD GetDebugger(nsIWorkerDebugger * *aDebugger) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDebugger(aDebugger); } \
  NS_IMETHOD AttachDebugger(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AttachDebugger(); } \
  NS_IMETHOD DetachDebugger(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DetachDebugger(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsServiceWorkerInfo : public nsIServiceWorkerInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISERVICEWORKERINFO

  nsServiceWorkerInfo();

private:
  ~nsServiceWorkerInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsServiceWorkerInfo, nsIServiceWorkerInfo)

nsServiceWorkerInfo::nsServiceWorkerInfo()
{
  /* member initializers and constructor code */
}

nsServiceWorkerInfo::~nsServiceWorkerInfo()
{
  /* destructor code */
}

/* readonly attribute DOMString scriptSpec; */
NS_IMETHODIMP nsServiceWorkerInfo::GetScriptSpec(nsAString & aScriptSpec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString cacheName; */
NS_IMETHODIMP nsServiceWorkerInfo::GetCacheName(nsAString & aCacheName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIWorkerDebugger debugger; */
NS_IMETHODIMP nsServiceWorkerInfo::GetDebugger(nsIWorkerDebugger * *aDebugger)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void attachDebugger (); */
NS_IMETHODIMP nsServiceWorkerInfo::AttachDebugger()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void detachDebugger (); */
NS_IMETHODIMP nsServiceWorkerInfo::DetachDebugger()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIServiceWorkerRegistrationInfoListener */
#define NS_ISERVICEWORKERREGISTRATIONINFOLISTENER_IID_STR "87e63548-d440-4b8a-b158-65ad1de0211e"

#define NS_ISERVICEWORKERREGISTRATIONINFOLISTENER_IID \
  {0x87e63548, 0xd440, 0x4b8a, \
    { 0xb1, 0x58, 0x65, 0xad, 0x1d, 0xe0, 0x21, 0x1e }}

class NS_NO_VTABLE nsIServiceWorkerRegistrationInfoListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISERVICEWORKERREGISTRATIONINFOLISTENER_IID)

  /* void onChange (); */
  NS_IMETHOD OnChange(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIServiceWorkerRegistrationInfoListener, NS_ISERVICEWORKERREGISTRATIONINFOLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISERVICEWORKERREGISTRATIONINFOLISTENER \
  NS_IMETHOD OnChange(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISERVICEWORKERREGISTRATIONINFOLISTENER \
  NS_METHOD OnChange(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISERVICEWORKERREGISTRATIONINFOLISTENER(_to) \
  NS_IMETHOD OnChange(void) override { return _to OnChange(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISERVICEWORKERREGISTRATIONINFOLISTENER(_to) \
  NS_IMETHOD OnChange(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnChange(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsServiceWorkerRegistrationInfoListener : public nsIServiceWorkerRegistrationInfoListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISERVICEWORKERREGISTRATIONINFOLISTENER

  nsServiceWorkerRegistrationInfoListener();

private:
  ~nsServiceWorkerRegistrationInfoListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsServiceWorkerRegistrationInfoListener, nsIServiceWorkerRegistrationInfoListener)

nsServiceWorkerRegistrationInfoListener::nsServiceWorkerRegistrationInfoListener()
{
  /* member initializers and constructor code */
}

nsServiceWorkerRegistrationInfoListener::~nsServiceWorkerRegistrationInfoListener()
{
  /* destructor code */
}

/* void onChange (); */
NS_IMETHODIMP nsServiceWorkerRegistrationInfoListener::OnChange()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIServiceWorkerRegistrationInfo */
#define NS_ISERVICEWORKERREGISTRATIONINFO_IID_STR "ddbc1fd4-2f2e-4fca-a395-6e010bbedfe3"

#define NS_ISERVICEWORKERREGISTRATIONINFO_IID \
  {0xddbc1fd4, 0x2f2e, 0x4fca, \
    { 0xa3, 0x95, 0x6e, 0x01, 0x0b, 0xbe, 0xdf, 0xe3 }}

class NS_NO_VTABLE nsIServiceWorkerRegistrationInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISERVICEWORKERREGISTRATIONINFO_IID)

  /* readonly attribute nsIPrincipal principal; */
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) = 0;

  /* readonly attribute DOMString scope; */
  NS_IMETHOD GetScope(nsAString & aScope) = 0;

  /* readonly attribute DOMString scriptSpec; */
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) = 0;

  /* readonly attribute nsIServiceWorkerInfo installingWorker; */
  NS_IMETHOD GetInstallingWorker(nsIServiceWorkerInfo * *aInstallingWorker) = 0;

  /* readonly attribute nsIServiceWorkerInfo waitingWorker; */
  NS_IMETHOD GetWaitingWorker(nsIServiceWorkerInfo * *aWaitingWorker) = 0;

  /* readonly attribute nsIServiceWorkerInfo activeWorker; */
  NS_IMETHOD GetActiveWorker(nsIServiceWorkerInfo * *aActiveWorker) = 0;

  /* nsIServiceWorkerInfo getWorkerByID (in unsigned long long aID); */
  NS_IMETHOD GetWorkerByID(uint64_t aID, nsIServiceWorkerInfo * *_retval) = 0;

  /* void addListener (in nsIServiceWorkerRegistrationInfoListener listener); */
  NS_IMETHOD AddListener(nsIServiceWorkerRegistrationInfoListener *listener) = 0;

  /* void removeListener (in nsIServiceWorkerRegistrationInfoListener listener); */
  NS_IMETHOD RemoveListener(nsIServiceWorkerRegistrationInfoListener *listener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIServiceWorkerRegistrationInfo, NS_ISERVICEWORKERREGISTRATIONINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISERVICEWORKERREGISTRATIONINFO \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override; \
  NS_IMETHOD GetScope(nsAString & aScope) override; \
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) override; \
  NS_IMETHOD GetInstallingWorker(nsIServiceWorkerInfo * *aInstallingWorker) override; \
  NS_IMETHOD GetWaitingWorker(nsIServiceWorkerInfo * *aWaitingWorker) override; \
  NS_IMETHOD GetActiveWorker(nsIServiceWorkerInfo * *aActiveWorker) override; \
  NS_IMETHOD GetWorkerByID(uint64_t aID, nsIServiceWorkerInfo * *_retval) override; \
  NS_IMETHOD AddListener(nsIServiceWorkerRegistrationInfoListener *listener) override; \
  NS_IMETHOD RemoveListener(nsIServiceWorkerRegistrationInfoListener *listener) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISERVICEWORKERREGISTRATIONINFO \
  NS_METHOD GetPrincipal(nsIPrincipal * *aPrincipal); \
  NS_METHOD GetScope(nsAString & aScope); \
  NS_METHOD GetScriptSpec(nsAString & aScriptSpec); \
  NS_METHOD GetInstallingWorker(nsIServiceWorkerInfo * *aInstallingWorker); \
  NS_METHOD GetWaitingWorker(nsIServiceWorkerInfo * *aWaitingWorker); \
  NS_METHOD GetActiveWorker(nsIServiceWorkerInfo * *aActiveWorker); \
  NS_METHOD GetWorkerByID(uint64_t aID, nsIServiceWorkerInfo * *_retval); \
  NS_METHOD AddListener(nsIServiceWorkerRegistrationInfoListener *listener); \
  NS_METHOD RemoveListener(nsIServiceWorkerRegistrationInfoListener *listener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISERVICEWORKERREGISTRATIONINFO(_to) \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return _to GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetScope(nsAString & aScope) override { return _to GetScope(aScope); } \
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) override { return _to GetScriptSpec(aScriptSpec); } \
  NS_IMETHOD GetInstallingWorker(nsIServiceWorkerInfo * *aInstallingWorker) override { return _to GetInstallingWorker(aInstallingWorker); } \
  NS_IMETHOD GetWaitingWorker(nsIServiceWorkerInfo * *aWaitingWorker) override { return _to GetWaitingWorker(aWaitingWorker); } \
  NS_IMETHOD GetActiveWorker(nsIServiceWorkerInfo * *aActiveWorker) override { return _to GetActiveWorker(aActiveWorker); } \
  NS_IMETHOD GetWorkerByID(uint64_t aID, nsIServiceWorkerInfo * *_retval) override { return _to GetWorkerByID(aID, _retval); } \
  NS_IMETHOD AddListener(nsIServiceWorkerRegistrationInfoListener *listener) override { return _to AddListener(listener); } \
  NS_IMETHOD RemoveListener(nsIServiceWorkerRegistrationInfoListener *listener) override { return _to RemoveListener(listener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISERVICEWORKERREGISTRATIONINFO(_to) \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetScope(nsAString & aScope) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScope(aScope); } \
  NS_IMETHOD GetScriptSpec(nsAString & aScriptSpec) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScriptSpec(aScriptSpec); } \
  NS_IMETHOD GetInstallingWorker(nsIServiceWorkerInfo * *aInstallingWorker) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstallingWorker(aInstallingWorker); } \
  NS_IMETHOD GetWaitingWorker(nsIServiceWorkerInfo * *aWaitingWorker) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWaitingWorker(aWaitingWorker); } \
  NS_IMETHOD GetActiveWorker(nsIServiceWorkerInfo * *aActiveWorker) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveWorker(aActiveWorker); } \
  NS_IMETHOD GetWorkerByID(uint64_t aID, nsIServiceWorkerInfo * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWorkerByID(aID, _retval); } \
  NS_IMETHOD AddListener(nsIServiceWorkerRegistrationInfoListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(listener); } \
  NS_IMETHOD RemoveListener(nsIServiceWorkerRegistrationInfoListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(listener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsServiceWorkerRegistrationInfo : public nsIServiceWorkerRegistrationInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISERVICEWORKERREGISTRATIONINFO

  nsServiceWorkerRegistrationInfo();

private:
  ~nsServiceWorkerRegistrationInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsServiceWorkerRegistrationInfo, nsIServiceWorkerRegistrationInfo)

nsServiceWorkerRegistrationInfo::nsServiceWorkerRegistrationInfo()
{
  /* member initializers and constructor code */
}

nsServiceWorkerRegistrationInfo::~nsServiceWorkerRegistrationInfo()
{
  /* destructor code */
}

/* readonly attribute nsIPrincipal principal; */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::GetPrincipal(nsIPrincipal * *aPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString scope; */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::GetScope(nsAString & aScope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString scriptSpec; */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::GetScriptSpec(nsAString & aScriptSpec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIServiceWorkerInfo installingWorker; */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::GetInstallingWorker(nsIServiceWorkerInfo * *aInstallingWorker)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIServiceWorkerInfo waitingWorker; */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::GetWaitingWorker(nsIServiceWorkerInfo * *aWaitingWorker)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIServiceWorkerInfo activeWorker; */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::GetActiveWorker(nsIServiceWorkerInfo * *aActiveWorker)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIServiceWorkerInfo getWorkerByID (in unsigned long long aID); */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::GetWorkerByID(uint64_t aID, nsIServiceWorkerInfo * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addListener (in nsIServiceWorkerRegistrationInfoListener listener); */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::AddListener(nsIServiceWorkerRegistrationInfoListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListener (in nsIServiceWorkerRegistrationInfoListener listener); */
NS_IMETHODIMP nsServiceWorkerRegistrationInfo::RemoveListener(nsIServiceWorkerRegistrationInfoListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIServiceWorkerManagerListener */
#define NS_ISERVICEWORKERMANAGERLISTENER_IID_STR "9e523e7c-ad6f-4df0-8077-c74aebbc679d"

#define NS_ISERVICEWORKERMANAGERLISTENER_IID \
  {0x9e523e7c, 0xad6f, 0x4df0, \
    { 0x80, 0x77, 0xc7, 0x4a, 0xeb, 0xbc, 0x67, 0x9d }}

class NS_NO_VTABLE nsIServiceWorkerManagerListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISERVICEWORKERMANAGERLISTENER_IID)

  /* void onRegister (in nsIServiceWorkerRegistrationInfo aInfo); */
  NS_IMETHOD OnRegister(nsIServiceWorkerRegistrationInfo *aInfo) = 0;

  /* void onUnregister (in nsIServiceWorkerRegistrationInfo aInfo); */
  NS_IMETHOD OnUnregister(nsIServiceWorkerRegistrationInfo *aInfo) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIServiceWorkerManagerListener, NS_ISERVICEWORKERMANAGERLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISERVICEWORKERMANAGERLISTENER \
  NS_IMETHOD OnRegister(nsIServiceWorkerRegistrationInfo *aInfo) override; \
  NS_IMETHOD OnUnregister(nsIServiceWorkerRegistrationInfo *aInfo) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISERVICEWORKERMANAGERLISTENER \
  NS_METHOD OnRegister(nsIServiceWorkerRegistrationInfo *aInfo); \
  NS_METHOD OnUnregister(nsIServiceWorkerRegistrationInfo *aInfo); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISERVICEWORKERMANAGERLISTENER(_to) \
  NS_IMETHOD OnRegister(nsIServiceWorkerRegistrationInfo *aInfo) override { return _to OnRegister(aInfo); } \
  NS_IMETHOD OnUnregister(nsIServiceWorkerRegistrationInfo *aInfo) override { return _to OnUnregister(aInfo); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISERVICEWORKERMANAGERLISTENER(_to) \
  NS_IMETHOD OnRegister(nsIServiceWorkerRegistrationInfo *aInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnRegister(aInfo); } \
  NS_IMETHOD OnUnregister(nsIServiceWorkerRegistrationInfo *aInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnUnregister(aInfo); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsServiceWorkerManagerListener : public nsIServiceWorkerManagerListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISERVICEWORKERMANAGERLISTENER

  nsServiceWorkerManagerListener();

private:
  ~nsServiceWorkerManagerListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsServiceWorkerManagerListener, nsIServiceWorkerManagerListener)

nsServiceWorkerManagerListener::nsServiceWorkerManagerListener()
{
  /* member initializers and constructor code */
}

nsServiceWorkerManagerListener::~nsServiceWorkerManagerListener()
{
  /* destructor code */
}

/* void onRegister (in nsIServiceWorkerRegistrationInfo aInfo); */
NS_IMETHODIMP nsServiceWorkerManagerListener::OnRegister(nsIServiceWorkerRegistrationInfo *aInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onUnregister (in nsIServiceWorkerRegistrationInfo aInfo); */
NS_IMETHODIMP nsServiceWorkerManagerListener::OnUnregister(nsIServiceWorkerRegistrationInfo *aInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIServiceWorkerManager */
#define NS_ISERVICEWORKERMANAGER_IID_STR "7404c8e8-4d47-4449-8ed1-47d1261d4e33"

#define NS_ISERVICEWORKERMANAGER_IID \
  {0x7404c8e8, 0x4d47, 0x4449, \
    { 0x8e, 0xd1, 0x47, 0xd1, 0x26, 0x1d, 0x4e, 0x33 }}

class NS_NO_VTABLE nsIServiceWorkerManager : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISERVICEWORKERMANAGER_IID)

  /* nsISupports register (in mozIDOMWindow aWindow, in nsIURI aScope, in nsIURI aScriptURI); */
  NS_IMETHOD Register(mozIDOMWindow *aWindow, nsIURI *aScope, nsIURI *aScriptURI, nsISupports * *_retval) = 0;

  /* void unregister (in nsIPrincipal aPrincipal, in nsIServiceWorkerUnregisterCallback aCallback, in DOMString aScope); */
  NS_IMETHOD Unregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) = 0;

  /* nsISupports getRegistrations (in mozIDOMWindow aWindow); */
  NS_IMETHOD GetRegistrations(mozIDOMWindow *aWindow, nsISupports * *_retval) = 0;

  /* nsISupports getRegistration (in mozIDOMWindow aWindow, in DOMString aScope); */
  NS_IMETHOD GetRegistration(mozIDOMWindow *aWindow, const nsAString & aScope, nsISupports * *_retval) = 0;

  /* nsISupports getReadyPromise (in mozIDOMWindow aWindow); */
  NS_IMETHOD GetReadyPromise(mozIDOMWindow *aWindow, nsISupports * *_retval) = 0;

  /* void removeReadyPromise (in mozIDOMWindow aWindow); */
  NS_IMETHOD RemoveReadyPromise(mozIDOMWindow *aWindow) = 0;

  /* nsIServiceWorkerRegistrationInfo getRegistrationByPrincipal (in nsIPrincipal aPrincipal, in DOMString aScope); */
  NS_IMETHOD GetRegistrationByPrincipal(nsIPrincipal *aPrincipal, const nsAString & aScope, nsIServiceWorkerRegistrationInfo * *_retval) = 0;

  /* [nostdcall,notxpcom] void MaybeStartControlling (in nsIDocument aDoc, in DOMString aDocumentId); */
  virtual void MaybeStartControlling(nsIDocument *aDoc, const nsAString & aDocumentId) = 0;

  /* [nostdcall,notxpcom] void MaybeStopControlling (in nsIDocument aDoc); */
  virtual void MaybeStopControlling(nsIDocument *aDoc) = 0;

  /* [noscript] nsISupports GetInstalling (in nsPIDOMWindowInner aWindow, in DOMString aScope); */
  NS_IMETHOD GetInstalling(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) = 0;

  /* [noscript] nsISupports GetWaiting (in nsPIDOMWindowInner aWindow, in DOMString aScope); */
  NS_IMETHOD GetWaiting(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) = 0;

  /* [noscript] nsISupports GetActive (in nsPIDOMWindowInner aWindow, in DOMString aScope); */
  NS_IMETHOD GetActive(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) = 0;

  /* [noscript] nsISupports GetDocumentController (in nsPIDOMWindowInner aWindow); */
  NS_IMETHOD GetDocumentController(nsPIDOMWindowInner *aWindow, nsISupports * *_retval) = 0;

  /* void removeAndPropagate (in AUTF8String aHost); */
  NS_IMETHOD RemoveAndPropagate(const nsACString & aHost) = 0;

  /* DOMString getScopeForUrl (in nsIPrincipal aPrincipal, in DOMString aPath); */
  NS_IMETHOD GetScopeForUrl(nsIPrincipal *aPrincipal, const nsAString & aPath, nsAString & _retval) = 0;

  /* nsIArray getAllRegistrations (); */
  NS_IMETHOD GetAllRegistrations(nsIArray * *_retval) = 0;

  /* [implicit_jscontext] void propagateSoftUpdate (in jsval aOriginAttributes, in DOMString aScope); */
  NS_IMETHOD PropagateSoftUpdate(JS::HandleValue aOriginAttributes, const nsAString & aScope, JSContext* cx) = 0;

  /* void propagateUnregister (in nsIPrincipal aPrincipal, in nsIServiceWorkerUnregisterCallback aCallback, in DOMString aScope); */
  NS_IMETHOD PropagateUnregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) = 0;

  /* void sendNotificationClickEvent (in ACString aOriginSuffix, in ACString scope, in AString aID, in AString aTitle, in AString aDir, in AString aLang, in AString aBody, in AString aTag, in AString aIcon, in AString aData, in AString aBehavior); */
  NS_IMETHOD SendNotificationClickEvent(const nsACString & aOriginSuffix, const nsACString & scope, const nsAString & aID, const nsAString & aTitle, const nsAString & aDir, const nsAString & aLang, const nsAString & aBody, const nsAString & aTag, const nsAString & aIcon, const nsAString & aData, const nsAString & aBehavior) = 0;

  /* [optional_argc] void sendPushEvent (in ACString aOriginAttributes, in ACString aScope, [optional] in uint32_t aDataLength, [array, size_is (aDataLength), optional] in uint8_t aDataBytes); */
  NS_IMETHOD SendPushEvent(const nsACString & aOriginAttributes, const nsACString & aScope, uint32_t aDataLength, uint8_t *aDataBytes, uint8_t _argc) = 0;

  /* void sendPushSubscriptionChangeEvent (in ACString aOriginAttributes, in ACString scope); */
  NS_IMETHOD SendPushSubscriptionChangeEvent(const nsACString & aOriginAttributes, const nsACString & scope) = 0;

  /* void addListener (in nsIServiceWorkerManagerListener aListener); */
  NS_IMETHOD AddListener(nsIServiceWorkerManagerListener *aListener) = 0;

  /* void removeListener (in nsIServiceWorkerManagerListener aListener); */
  NS_IMETHOD RemoveListener(nsIServiceWorkerManagerListener *aListener) = 0;

  /* bool shouldReportToWindow (in mozIDOMWindowProxy aWindow, in ACString aScope); */
  NS_IMETHOD ShouldReportToWindow(mozIDOMWindowProxy *aWindow, const nsACString & aScope, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIServiceWorkerManager, NS_ISERVICEWORKERMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISERVICEWORKERMANAGER \
  NS_IMETHOD Register(mozIDOMWindow *aWindow, nsIURI *aScope, nsIURI *aScriptURI, nsISupports * *_retval) override; \
  NS_IMETHOD Unregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) override; \
  NS_IMETHOD GetRegistrations(mozIDOMWindow *aWindow, nsISupports * *_retval) override; \
  NS_IMETHOD GetRegistration(mozIDOMWindow *aWindow, const nsAString & aScope, nsISupports * *_retval) override; \
  NS_IMETHOD GetReadyPromise(mozIDOMWindow *aWindow, nsISupports * *_retval) override; \
  NS_IMETHOD RemoveReadyPromise(mozIDOMWindow *aWindow) override; \
  NS_IMETHOD GetRegistrationByPrincipal(nsIPrincipal *aPrincipal, const nsAString & aScope, nsIServiceWorkerRegistrationInfo * *_retval) override; \
  virtual void MaybeStartControlling(nsIDocument *aDoc, const nsAString & aDocumentId) override; \
  virtual void MaybeStopControlling(nsIDocument *aDoc) override; \
  NS_IMETHOD GetInstalling(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override; \
  NS_IMETHOD GetWaiting(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override; \
  NS_IMETHOD GetActive(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override; \
  NS_IMETHOD GetDocumentController(nsPIDOMWindowInner *aWindow, nsISupports * *_retval) override; \
  NS_IMETHOD RemoveAndPropagate(const nsACString & aHost) override; \
  NS_IMETHOD GetScopeForUrl(nsIPrincipal *aPrincipal, const nsAString & aPath, nsAString & _retval) override; \
  NS_IMETHOD GetAllRegistrations(nsIArray * *_retval) override; \
  NS_IMETHOD PropagateSoftUpdate(JS::HandleValue aOriginAttributes, const nsAString & aScope, JSContext* cx) override; \
  NS_IMETHOD PropagateUnregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) override; \
  NS_IMETHOD SendNotificationClickEvent(const nsACString & aOriginSuffix, const nsACString & scope, const nsAString & aID, const nsAString & aTitle, const nsAString & aDir, const nsAString & aLang, const nsAString & aBody, const nsAString & aTag, const nsAString & aIcon, const nsAString & aData, const nsAString & aBehavior) override; \
  NS_IMETHOD SendPushEvent(const nsACString & aOriginAttributes, const nsACString & aScope, uint32_t aDataLength, uint8_t *aDataBytes, uint8_t _argc) override; \
  NS_IMETHOD SendPushSubscriptionChangeEvent(const nsACString & aOriginAttributes, const nsACString & scope) override; \
  NS_IMETHOD AddListener(nsIServiceWorkerManagerListener *aListener) override; \
  NS_IMETHOD RemoveListener(nsIServiceWorkerManagerListener *aListener) override; \
  NS_IMETHOD ShouldReportToWindow(mozIDOMWindowProxy *aWindow, const nsACString & aScope, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISERVICEWORKERMANAGER \
  NS_METHOD Register(mozIDOMWindow *aWindow, nsIURI *aScope, nsIURI *aScriptURI, nsISupports * *_retval); \
  NS_METHOD Unregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope); \
  NS_METHOD GetRegistrations(mozIDOMWindow *aWindow, nsISupports * *_retval); \
  NS_METHOD GetRegistration(mozIDOMWindow *aWindow, const nsAString & aScope, nsISupports * *_retval); \
  NS_METHOD GetReadyPromise(mozIDOMWindow *aWindow, nsISupports * *_retval); \
  NS_METHOD RemoveReadyPromise(mozIDOMWindow *aWindow); \
  NS_METHOD GetRegistrationByPrincipal(nsIPrincipal *aPrincipal, const nsAString & aScope, nsIServiceWorkerRegistrationInfo * *_retval); \
  void MaybeStartControlling(nsIDocument *aDoc, const nsAString & aDocumentId); \
  void MaybeStopControlling(nsIDocument *aDoc); \
  NS_METHOD GetInstalling(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval); \
  NS_METHOD GetWaiting(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval); \
  NS_METHOD GetActive(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval); \
  NS_METHOD GetDocumentController(nsPIDOMWindowInner *aWindow, nsISupports * *_retval); \
  NS_METHOD RemoveAndPropagate(const nsACString & aHost); \
  NS_METHOD GetScopeForUrl(nsIPrincipal *aPrincipal, const nsAString & aPath, nsAString & _retval); \
  NS_METHOD GetAllRegistrations(nsIArray * *_retval); \
  NS_METHOD PropagateSoftUpdate(JS::HandleValue aOriginAttributes, const nsAString & aScope, JSContext* cx); \
  NS_METHOD PropagateUnregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope); \
  NS_METHOD SendNotificationClickEvent(const nsACString & aOriginSuffix, const nsACString & scope, const nsAString & aID, const nsAString & aTitle, const nsAString & aDir, const nsAString & aLang, const nsAString & aBody, const nsAString & aTag, const nsAString & aIcon, const nsAString & aData, const nsAString & aBehavior); \
  NS_METHOD SendPushEvent(const nsACString & aOriginAttributes, const nsACString & aScope, uint32_t aDataLength, uint8_t *aDataBytes, uint8_t _argc); \
  NS_METHOD SendPushSubscriptionChangeEvent(const nsACString & aOriginAttributes, const nsACString & scope); \
  NS_METHOD AddListener(nsIServiceWorkerManagerListener *aListener); \
  NS_METHOD RemoveListener(nsIServiceWorkerManagerListener *aListener); \
  NS_METHOD ShouldReportToWindow(mozIDOMWindowProxy *aWindow, const nsACString & aScope, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISERVICEWORKERMANAGER(_to) \
  NS_IMETHOD Register(mozIDOMWindow *aWindow, nsIURI *aScope, nsIURI *aScriptURI, nsISupports * *_retval) override { return _to Register(aWindow, aScope, aScriptURI, _retval); } \
  NS_IMETHOD Unregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) override { return _to Unregister(aPrincipal, aCallback, aScope); } \
  NS_IMETHOD GetRegistrations(mozIDOMWindow *aWindow, nsISupports * *_retval) override { return _to GetRegistrations(aWindow, _retval); } \
  NS_IMETHOD GetRegistration(mozIDOMWindow *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return _to GetRegistration(aWindow, aScope, _retval); } \
  NS_IMETHOD GetReadyPromise(mozIDOMWindow *aWindow, nsISupports * *_retval) override { return _to GetReadyPromise(aWindow, _retval); } \
  NS_IMETHOD RemoveReadyPromise(mozIDOMWindow *aWindow) override { return _to RemoveReadyPromise(aWindow); } \
  NS_IMETHOD GetRegistrationByPrincipal(nsIPrincipal *aPrincipal, const nsAString & aScope, nsIServiceWorkerRegistrationInfo * *_retval) override { return _to GetRegistrationByPrincipal(aPrincipal, aScope, _retval); } \
  virtual void MaybeStartControlling(nsIDocument *aDoc, const nsAString & aDocumentId) override { return _to MaybeStartControlling(aDoc, aDocumentId); } \
  virtual void MaybeStopControlling(nsIDocument *aDoc) override { return _to MaybeStopControlling(aDoc); } \
  NS_IMETHOD GetInstalling(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return _to GetInstalling(aWindow, aScope, _retval); } \
  NS_IMETHOD GetWaiting(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return _to GetWaiting(aWindow, aScope, _retval); } \
  NS_IMETHOD GetActive(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return _to GetActive(aWindow, aScope, _retval); } \
  NS_IMETHOD GetDocumentController(nsPIDOMWindowInner *aWindow, nsISupports * *_retval) override { return _to GetDocumentController(aWindow, _retval); } \
  NS_IMETHOD RemoveAndPropagate(const nsACString & aHost) override { return _to RemoveAndPropagate(aHost); } \
  NS_IMETHOD GetScopeForUrl(nsIPrincipal *aPrincipal, const nsAString & aPath, nsAString & _retval) override { return _to GetScopeForUrl(aPrincipal, aPath, _retval); } \
  NS_IMETHOD GetAllRegistrations(nsIArray * *_retval) override { return _to GetAllRegistrations(_retval); } \
  NS_IMETHOD PropagateSoftUpdate(JS::HandleValue aOriginAttributes, const nsAString & aScope, JSContext* cx) override { return _to PropagateSoftUpdate(aOriginAttributes, aScope, cx); } \
  NS_IMETHOD PropagateUnregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) override { return _to PropagateUnregister(aPrincipal, aCallback, aScope); } \
  NS_IMETHOD SendNotificationClickEvent(const nsACString & aOriginSuffix, const nsACString & scope, const nsAString & aID, const nsAString & aTitle, const nsAString & aDir, const nsAString & aLang, const nsAString & aBody, const nsAString & aTag, const nsAString & aIcon, const nsAString & aData, const nsAString & aBehavior) override { return _to SendNotificationClickEvent(aOriginSuffix, scope, aID, aTitle, aDir, aLang, aBody, aTag, aIcon, aData, aBehavior); } \
  NS_IMETHOD SendPushEvent(const nsACString & aOriginAttributes, const nsACString & aScope, uint32_t aDataLength, uint8_t *aDataBytes, uint8_t _argc) override { return _to SendPushEvent(aOriginAttributes, aScope, aDataLength, aDataBytes, _argc); } \
  NS_IMETHOD SendPushSubscriptionChangeEvent(const nsACString & aOriginAttributes, const nsACString & scope) override { return _to SendPushSubscriptionChangeEvent(aOriginAttributes, scope); } \
  NS_IMETHOD AddListener(nsIServiceWorkerManagerListener *aListener) override { return _to AddListener(aListener); } \
  NS_IMETHOD RemoveListener(nsIServiceWorkerManagerListener *aListener) override { return _to RemoveListener(aListener); } \
  NS_IMETHOD ShouldReportToWindow(mozIDOMWindowProxy *aWindow, const nsACString & aScope, bool *_retval) override { return _to ShouldReportToWindow(aWindow, aScope, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISERVICEWORKERMANAGER(_to) \
  NS_IMETHOD Register(mozIDOMWindow *aWindow, nsIURI *aScope, nsIURI *aScriptURI, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Register(aWindow, aScope, aScriptURI, _retval); } \
  NS_IMETHOD Unregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Unregister(aPrincipal, aCallback, aScope); } \
  NS_IMETHOD GetRegistrations(mozIDOMWindow *aWindow, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRegistrations(aWindow, _retval); } \
  NS_IMETHOD GetRegistration(mozIDOMWindow *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRegistration(aWindow, aScope, _retval); } \
  NS_IMETHOD GetReadyPromise(mozIDOMWindow *aWindow, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyPromise(aWindow, _retval); } \
  NS_IMETHOD RemoveReadyPromise(mozIDOMWindow *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveReadyPromise(aWindow); } \
  NS_IMETHOD GetRegistrationByPrincipal(nsIPrincipal *aPrincipal, const nsAString & aScope, nsIServiceWorkerRegistrationInfo * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRegistrationByPrincipal(aPrincipal, aScope, _retval); } \
  virtual void MaybeStartControlling(nsIDocument *aDoc, const nsAString & aDocumentId) override; \
  virtual void MaybeStopControlling(nsIDocument *aDoc) override; \
  NS_IMETHOD GetInstalling(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInstalling(aWindow, aScope, _retval); } \
  NS_IMETHOD GetWaiting(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWaiting(aWindow, aScope, _retval); } \
  NS_IMETHOD GetActive(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActive(aWindow, aScope, _retval); } \
  NS_IMETHOD GetDocumentController(nsPIDOMWindowInner *aWindow, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentController(aWindow, _retval); } \
  NS_IMETHOD RemoveAndPropagate(const nsACString & aHost) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAndPropagate(aHost); } \
  NS_IMETHOD GetScopeForUrl(nsIPrincipal *aPrincipal, const nsAString & aPath, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScopeForUrl(aPrincipal, aPath, _retval); } \
  NS_IMETHOD GetAllRegistrations(nsIArray * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllRegistrations(_retval); } \
  NS_IMETHOD PropagateSoftUpdate(JS::HandleValue aOriginAttributes, const nsAString & aScope, JSContext* cx) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PropagateSoftUpdate(aOriginAttributes, aScope, cx); } \
  NS_IMETHOD PropagateUnregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PropagateUnregister(aPrincipal, aCallback, aScope); } \
  NS_IMETHOD SendNotificationClickEvent(const nsACString & aOriginSuffix, const nsACString & scope, const nsAString & aID, const nsAString & aTitle, const nsAString & aDir, const nsAString & aLang, const nsAString & aBody, const nsAString & aTag, const nsAString & aIcon, const nsAString & aData, const nsAString & aBehavior) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendNotificationClickEvent(aOriginSuffix, scope, aID, aTitle, aDir, aLang, aBody, aTag, aIcon, aData, aBehavior); } \
  NS_IMETHOD SendPushEvent(const nsACString & aOriginAttributes, const nsACString & aScope, uint32_t aDataLength, uint8_t *aDataBytes, uint8_t _argc) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendPushEvent(aOriginAttributes, aScope, aDataLength, aDataBytes, _argc); } \
  NS_IMETHOD SendPushSubscriptionChangeEvent(const nsACString & aOriginAttributes, const nsACString & scope) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendPushSubscriptionChangeEvent(aOriginAttributes, scope); } \
  NS_IMETHOD AddListener(nsIServiceWorkerManagerListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(aListener); } \
  NS_IMETHOD RemoveListener(nsIServiceWorkerManagerListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(aListener); } \
  NS_IMETHOD ShouldReportToWindow(mozIDOMWindowProxy *aWindow, const nsACString & aScope, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShouldReportToWindow(aWindow, aScope, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsServiceWorkerManager : public nsIServiceWorkerManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISERVICEWORKERMANAGER

  nsServiceWorkerManager();

private:
  ~nsServiceWorkerManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsServiceWorkerManager, nsIServiceWorkerManager)

nsServiceWorkerManager::nsServiceWorkerManager()
{
  /* member initializers and constructor code */
}

nsServiceWorkerManager::~nsServiceWorkerManager()
{
  /* destructor code */
}

/* nsISupports register (in mozIDOMWindow aWindow, in nsIURI aScope, in nsIURI aScriptURI); */
NS_IMETHODIMP nsServiceWorkerManager::Register(mozIDOMWindow *aWindow, nsIURI *aScope, nsIURI *aScriptURI, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregister (in nsIPrincipal aPrincipal, in nsIServiceWorkerUnregisterCallback aCallback, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::Unregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports getRegistrations (in mozIDOMWindow aWindow); */
NS_IMETHODIMP nsServiceWorkerManager::GetRegistrations(mozIDOMWindow *aWindow, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports getRegistration (in mozIDOMWindow aWindow, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::GetRegistration(mozIDOMWindow *aWindow, const nsAString & aScope, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports getReadyPromise (in mozIDOMWindow aWindow); */
NS_IMETHODIMP nsServiceWorkerManager::GetReadyPromise(mozIDOMWindow *aWindow, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeReadyPromise (in mozIDOMWindow aWindow); */
NS_IMETHODIMP nsServiceWorkerManager::RemoveReadyPromise(mozIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIServiceWorkerRegistrationInfo getRegistrationByPrincipal (in nsIPrincipal aPrincipal, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::GetRegistrationByPrincipal(nsIPrincipal *aPrincipal, const nsAString & aScope, nsIServiceWorkerRegistrationInfo * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] void MaybeStartControlling (in nsIDocument aDoc, in DOMString aDocumentId); */
void nsServiceWorkerManager::MaybeStartControlling(nsIDocument *aDoc, const nsAString & aDocumentId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [nostdcall,notxpcom] void MaybeStopControlling (in nsIDocument aDoc); */
void nsServiceWorkerManager::MaybeStopControlling(nsIDocument *aDoc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsISupports GetInstalling (in nsPIDOMWindowInner aWindow, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::GetInstalling(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsISupports GetWaiting (in nsPIDOMWindowInner aWindow, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::GetWaiting(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsISupports GetActive (in nsPIDOMWindowInner aWindow, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::GetActive(nsPIDOMWindowInner *aWindow, const nsAString & aScope, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsISupports GetDocumentController (in nsPIDOMWindowInner aWindow); */
NS_IMETHODIMP nsServiceWorkerManager::GetDocumentController(nsPIDOMWindowInner *aWindow, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAndPropagate (in AUTF8String aHost); */
NS_IMETHODIMP nsServiceWorkerManager::RemoveAndPropagate(const nsACString & aHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getScopeForUrl (in nsIPrincipal aPrincipal, in DOMString aPath); */
NS_IMETHODIMP nsServiceWorkerManager::GetScopeForUrl(nsIPrincipal *aPrincipal, const nsAString & aPath, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIArray getAllRegistrations (); */
NS_IMETHODIMP nsServiceWorkerManager::GetAllRegistrations(nsIArray * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void propagateSoftUpdate (in jsval aOriginAttributes, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::PropagateSoftUpdate(JS::HandleValue aOriginAttributes, const nsAString & aScope, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void propagateUnregister (in nsIPrincipal aPrincipal, in nsIServiceWorkerUnregisterCallback aCallback, in DOMString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::PropagateUnregister(nsIPrincipal *aPrincipal, nsIServiceWorkerUnregisterCallback *aCallback, const nsAString & aScope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendNotificationClickEvent (in ACString aOriginSuffix, in ACString scope, in AString aID, in AString aTitle, in AString aDir, in AString aLang, in AString aBody, in AString aTag, in AString aIcon, in AString aData, in AString aBehavior); */
NS_IMETHODIMP nsServiceWorkerManager::SendNotificationClickEvent(const nsACString & aOriginSuffix, const nsACString & scope, const nsAString & aID, const nsAString & aTitle, const nsAString & aDir, const nsAString & aLang, const nsAString & aBody, const nsAString & aTag, const nsAString & aIcon, const nsAString & aData, const nsAString & aBehavior)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] void sendPushEvent (in ACString aOriginAttributes, in ACString aScope, [optional] in uint32_t aDataLength, [array, size_is (aDataLength), optional] in uint8_t aDataBytes); */
NS_IMETHODIMP nsServiceWorkerManager::SendPushEvent(const nsACString & aOriginAttributes, const nsACString & aScope, uint32_t aDataLength, uint8_t *aDataBytes, uint8_t _argc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendPushSubscriptionChangeEvent (in ACString aOriginAttributes, in ACString scope); */
NS_IMETHODIMP nsServiceWorkerManager::SendPushSubscriptionChangeEvent(const nsACString & aOriginAttributes, const nsACString & scope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addListener (in nsIServiceWorkerManagerListener aListener); */
NS_IMETHODIMP nsServiceWorkerManager::AddListener(nsIServiceWorkerManagerListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListener (in nsIServiceWorkerManagerListener aListener); */
NS_IMETHODIMP nsServiceWorkerManager::RemoveListener(nsIServiceWorkerManagerListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool shouldReportToWindow (in mozIDOMWindowProxy aWindow, in ACString aScope); */
NS_IMETHODIMP nsServiceWorkerManager::ShouldReportToWindow(mozIDOMWindowProxy *aWindow, const nsACString & aScope, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define SERVICEWORKERMANAGER_CONTRACTID "@mozilla.org/serviceworkers/manager;1"

#endif /* __gen_nsIServiceWorkerManager_h__ */
