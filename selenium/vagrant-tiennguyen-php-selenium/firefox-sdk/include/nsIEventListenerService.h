/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIEventListenerService.idl
 */

#ifndef __gen_nsIEventListenerService_h__
#define __gen_nsIEventListenerService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIDOMEventTarget; /* forward declaration */

class nsIArray; /* forward declaration */


/* starting interface:    nsIEventListenerChange */
#define NS_IEVENTLISTENERCHANGE_IID_STR "07222b02-da12-4cf4-b2f7-761da007a8d8"

#define NS_IEVENTLISTENERCHANGE_IID \
  {0x07222b02, 0xda12, 0x4cf4, \
    { 0xb2, 0xf7, 0x76, 0x1d, 0xa0, 0x07, 0xa8, 0xd8 }}

class NS_NO_VTABLE nsIEventListenerChange : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTLISTENERCHANGE_IID)

  /* readonly attribute nsIDOMEventTarget target; */
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) = 0;

  /* readonly attribute nsIArray changedListenerNames; */
  NS_IMETHOD GetChangedListenerNames(nsIArray * *aChangedListenerNames) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventListenerChange, NS_IEVENTLISTENERCHANGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTLISTENERCHANGE \
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) override; \
  NS_IMETHOD GetChangedListenerNames(nsIArray * *aChangedListenerNames) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIEVENTLISTENERCHANGE \
  NS_METHOD GetTarget(nsIDOMEventTarget * *aTarget); \
  NS_METHOD GetChangedListenerNames(nsIArray * *aChangedListenerNames); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTLISTENERCHANGE(_to) \
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) override { return _to GetTarget(aTarget); } \
  NS_IMETHOD GetChangedListenerNames(nsIArray * *aChangedListenerNames) override { return _to GetChangedListenerNames(aChangedListenerNames); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTLISTENERCHANGE(_to) \
  NS_IMETHOD GetTarget(nsIDOMEventTarget * *aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_IMETHOD GetChangedListenerNames(nsIArray * *aChangedListenerNames) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChangedListenerNames(aChangedListenerNames); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventListenerChange : public nsIEventListenerChange
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTLISTENERCHANGE

  nsEventListenerChange();

private:
  ~nsEventListenerChange();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsEventListenerChange, nsIEventListenerChange)

nsEventListenerChange::nsEventListenerChange()
{
  /* member initializers and constructor code */
}

nsEventListenerChange::~nsEventListenerChange()
{
  /* destructor code */
}

/* readonly attribute nsIDOMEventTarget target; */
NS_IMETHODIMP nsEventListenerChange::GetTarget(nsIDOMEventTarget * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIArray changedListenerNames; */
NS_IMETHODIMP nsEventListenerChange::GetChangedListenerNames(nsIArray * *aChangedListenerNames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIListenerChangeListener */
#define NS_ILISTENERCHANGELISTENER_IID_STR "aa7c95f6-d3b5-44b3-9597-1d9f19b9c5f2"

#define NS_ILISTENERCHANGELISTENER_IID \
  {0xaa7c95f6, 0xd3b5, 0x44b3, \
    { 0x95, 0x97, 0x1d, 0x9f, 0x19, 0xb9, 0xc5, 0xf2 }}

class NS_NO_VTABLE nsIListenerChangeListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILISTENERCHANGELISTENER_IID)

  /* void listenersChanged (in nsIArray aEventListenerChanges); */
  NS_IMETHOD ListenersChanged(nsIArray *aEventListenerChanges) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIListenerChangeListener, NS_ILISTENERCHANGELISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILISTENERCHANGELISTENER \
  NS_IMETHOD ListenersChanged(nsIArray *aEventListenerChanges) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSILISTENERCHANGELISTENER \
  NS_METHOD ListenersChanged(nsIArray *aEventListenerChanges); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILISTENERCHANGELISTENER(_to) \
  NS_IMETHOD ListenersChanged(nsIArray *aEventListenerChanges) override { return _to ListenersChanged(aEventListenerChanges); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILISTENERCHANGELISTENER(_to) \
  NS_IMETHOD ListenersChanged(nsIArray *aEventListenerChanges) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ListenersChanged(aEventListenerChanges); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsListenerChangeListener : public nsIListenerChangeListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILISTENERCHANGELISTENER

  nsListenerChangeListener();

private:
  ~nsListenerChangeListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsListenerChangeListener, nsIListenerChangeListener)

nsListenerChangeListener::nsListenerChangeListener()
{
  /* member initializers and constructor code */
}

nsListenerChangeListener::~nsListenerChangeListener()
{
  /* destructor code */
}

/* void listenersChanged (in nsIArray aEventListenerChanges); */
NS_IMETHODIMP nsListenerChangeListener::ListenersChanged(nsIArray *aEventListenerChanges)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIEventListenerInfo */
#define NS_IEVENTLISTENERINFO_IID_STR "11ba5fd7-8db2-4b1a-9f67-342cfa11afad"

#define NS_IEVENTLISTENERINFO_IID \
  {0x11ba5fd7, 0x8db2, 0x4b1a, \
    { 0x9f, 0x67, 0x34, 0x2c, 0xfa, 0x11, 0xaf, 0xad }}

class NS_NO_VTABLE nsIEventListenerInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTLISTENERINFO_IID)

  /* readonly attribute AString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;

  /* readonly attribute boolean capturing; */
  NS_IMETHOD GetCapturing(bool *aCapturing) = 0;

  /* readonly attribute boolean allowsUntrusted; */
  NS_IMETHOD GetAllowsUntrusted(bool *aAllowsUntrusted) = 0;

  /* readonly attribute boolean inSystemEventGroup; */
  NS_IMETHOD GetInSystemEventGroup(bool *aInSystemEventGroup) = 0;

  /* [implicit_jscontext] readonly attribute jsval listenerObject; */
  NS_IMETHOD GetListenerObject(JSContext* cx, JS::MutableHandleValue aListenerObject) = 0;

  /* AString toSource (); */
  NS_IMETHOD ToSource(nsAString & _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventListenerInfo, NS_IEVENTLISTENERINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTLISTENERINFO \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD GetCapturing(bool *aCapturing) override; \
  NS_IMETHOD GetAllowsUntrusted(bool *aAllowsUntrusted) override; \
  NS_IMETHOD GetInSystemEventGroup(bool *aInSystemEventGroup) override; \
  NS_IMETHOD GetListenerObject(JSContext* cx, JS::MutableHandleValue aListenerObject) override; \
  NS_IMETHOD ToSource(nsAString & _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIEVENTLISTENERINFO \
  NS_METHOD GetType(nsAString & aType); \
  NS_METHOD GetCapturing(bool *aCapturing); \
  NS_METHOD GetAllowsUntrusted(bool *aAllowsUntrusted); \
  NS_METHOD GetInSystemEventGroup(bool *aInSystemEventGroup); \
  NS_METHOD GetListenerObject(JSContext* cx, JS::MutableHandleValue aListenerObject); \
  NS_METHOD ToSource(nsAString & _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTLISTENERINFO(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetCapturing(bool *aCapturing) override { return _to GetCapturing(aCapturing); } \
  NS_IMETHOD GetAllowsUntrusted(bool *aAllowsUntrusted) override { return _to GetAllowsUntrusted(aAllowsUntrusted); } \
  NS_IMETHOD GetInSystemEventGroup(bool *aInSystemEventGroup) override { return _to GetInSystemEventGroup(aInSystemEventGroup); } \
  NS_IMETHOD GetListenerObject(JSContext* cx, JS::MutableHandleValue aListenerObject) override { return _to GetListenerObject(cx, aListenerObject); } \
  NS_IMETHOD ToSource(nsAString & _retval) override { return _to ToSource(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTLISTENERINFO(_to) \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetCapturing(bool *aCapturing) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCapturing(aCapturing); } \
  NS_IMETHOD GetAllowsUntrusted(bool *aAllowsUntrusted) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowsUntrusted(aAllowsUntrusted); } \
  NS_IMETHOD GetInSystemEventGroup(bool *aInSystemEventGroup) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInSystemEventGroup(aInSystemEventGroup); } \
  NS_IMETHOD GetListenerObject(JSContext* cx, JS::MutableHandleValue aListenerObject) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListenerObject(cx, aListenerObject); } \
  NS_IMETHOD ToSource(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ToSource(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventListenerInfo : public nsIEventListenerInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTLISTENERINFO

  nsEventListenerInfo();

private:
  ~nsEventListenerInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsEventListenerInfo, nsIEventListenerInfo)

nsEventListenerInfo::nsEventListenerInfo()
{
  /* member initializers and constructor code */
}

nsEventListenerInfo::~nsEventListenerInfo()
{
  /* destructor code */
}

/* readonly attribute AString type; */
NS_IMETHODIMP nsEventListenerInfo::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean capturing; */
NS_IMETHODIMP nsEventListenerInfo::GetCapturing(bool *aCapturing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean allowsUntrusted; */
NS_IMETHODIMP nsEventListenerInfo::GetAllowsUntrusted(bool *aAllowsUntrusted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean inSystemEventGroup; */
NS_IMETHODIMP nsEventListenerInfo::GetInSystemEventGroup(bool *aInSystemEventGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval listenerObject; */
NS_IMETHODIMP nsEventListenerInfo::GetListenerObject(JSContext* cx, JS::MutableHandleValue aListenerObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString toSource (); */
NS_IMETHODIMP nsEventListenerInfo::ToSource(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIEventListenerService */
#define NS_IEVENTLISTENERSERVICE_IID_STR "77aab5f7-213d-4db4-9f22-e46dfb774f15"

#define NS_IEVENTLISTENERSERVICE_IID \
  {0x77aab5f7, 0x213d, 0x4db4, \
    { 0x9f, 0x22, 0xe4, 0x6d, 0xfb, 0x77, 0x4f, 0x15 }}

class NS_NO_VTABLE nsIEventListenerService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTLISTENERSERVICE_IID)

  /* void getListenerInfoFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIEventListenerInfo aOutArray); */
  NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIEventListenerInfo * **aOutArray) = 0;

  /* void getEventTargetChainFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIDOMEventTarget aOutArray); */
  NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIDOMEventTarget * **aOutArray) = 0;

  /* boolean hasListenersFor (in nsIDOMEventTarget aEventTarget, in DOMString aType); */
  NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, bool *_retval) = 0;

  /* void addSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
  NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) = 0;

  /* void removeSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
  NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) = 0;

  /* void addListenerForAllEvents (in nsIDOMEventTarget target, in nsIDOMEventListener listener, [optional] in boolean aUseCapture, [optional] in boolean aWantsUntrusted, [optional] in boolean aSystemEventGroup); */
  NS_IMETHOD AddListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aWantsUntrusted, bool aSystemEventGroup) = 0;

  /* void removeListenerForAllEvents (in nsIDOMEventTarget target, in nsIDOMEventListener listener, [optional] in boolean aUseCapture, [optional] in boolean aSystemEventGroup); */
  NS_IMETHOD RemoveListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aSystemEventGroup) = 0;

  /* void addListenerChangeListener (in nsIListenerChangeListener aListener); */
  NS_IMETHOD AddListenerChangeListener(nsIListenerChangeListener *aListener) = 0;

  /* void removeListenerChangeListener (in nsIListenerChangeListener aListener); */
  NS_IMETHOD RemoveListenerChangeListener(nsIListenerChangeListener *aListener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventListenerService, NS_IEVENTLISTENERSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTLISTENERSERVICE \
  NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIEventListenerInfo * **aOutArray) override; \
  NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIDOMEventTarget * **aOutArray) override; \
  NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, bool *_retval) override; \
  NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) override; \
  NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) override; \
  NS_IMETHOD AddListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aWantsUntrusted, bool aSystemEventGroup) override; \
  NS_IMETHOD RemoveListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aSystemEventGroup) override; \
  NS_IMETHOD AddListenerChangeListener(nsIListenerChangeListener *aListener) override; \
  NS_IMETHOD RemoveListenerChangeListener(nsIListenerChangeListener *aListener) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIEVENTLISTENERSERVICE \
  NS_METHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIEventListenerInfo * **aOutArray); \
  NS_METHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIDOMEventTarget * **aOutArray); \
  NS_METHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, bool *_retval); \
  NS_METHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture); \
  NS_METHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture); \
  NS_METHOD AddListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aWantsUntrusted, bool aSystemEventGroup); \
  NS_METHOD RemoveListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aSystemEventGroup); \
  NS_METHOD AddListenerChangeListener(nsIListenerChangeListener *aListener); \
  NS_METHOD RemoveListenerChangeListener(nsIListenerChangeListener *aListener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTLISTENERSERVICE(_to) \
  NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIEventListenerInfo * **aOutArray) override { return _to GetListenerInfoFor(aEventTarget, aCount, aOutArray); } \
  NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIDOMEventTarget * **aOutArray) override { return _to GetEventTargetChainFor(aEventTarget, aCount, aOutArray); } \
  NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, bool *_retval) override { return _to HasListenersFor(aEventTarget, aType, _retval); } \
  NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) override { return _to AddSystemEventListener(target, type, listener, useCapture); } \
  NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) override { return _to RemoveSystemEventListener(target, type, listener, useCapture); } \
  NS_IMETHOD AddListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aWantsUntrusted, bool aSystemEventGroup) override { return _to AddListenerForAllEvents(target, listener, aUseCapture, aWantsUntrusted, aSystemEventGroup); } \
  NS_IMETHOD RemoveListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aSystemEventGroup) override { return _to RemoveListenerForAllEvents(target, listener, aUseCapture, aSystemEventGroup); } \
  NS_IMETHOD AddListenerChangeListener(nsIListenerChangeListener *aListener) override { return _to AddListenerChangeListener(aListener); } \
  NS_IMETHOD RemoveListenerChangeListener(nsIListenerChangeListener *aListener) override { return _to RemoveListenerChangeListener(aListener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTLISTENERSERVICE(_to) \
  NS_IMETHOD GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIEventListenerInfo * **aOutArray) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListenerInfoFor(aEventTarget, aCount, aOutArray); } \
  NS_IMETHOD GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIDOMEventTarget * **aOutArray) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventTargetChainFor(aEventTarget, aCount, aOutArray); } \
  NS_IMETHOD HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->HasListenersFor(aEventTarget, aType, _retval); } \
  NS_IMETHOD AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddSystemEventListener(target, type, listener, useCapture); } \
  NS_IMETHOD RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveSystemEventListener(target, type, listener, useCapture); } \
  NS_IMETHOD AddListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aWantsUntrusted, bool aSystemEventGroup) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListenerForAllEvents(target, listener, aUseCapture, aWantsUntrusted, aSystemEventGroup); } \
  NS_IMETHOD RemoveListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aSystemEventGroup) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListenerForAllEvents(target, listener, aUseCapture, aSystemEventGroup); } \
  NS_IMETHOD AddListenerChangeListener(nsIListenerChangeListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListenerChangeListener(aListener); } \
  NS_IMETHOD RemoveListenerChangeListener(nsIListenerChangeListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListenerChangeListener(aListener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventListenerService : public nsIEventListenerService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTLISTENERSERVICE

  nsEventListenerService();

private:
  ~nsEventListenerService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsEventListenerService, nsIEventListenerService)

nsEventListenerService::nsEventListenerService()
{
  /* member initializers and constructor code */
}

nsEventListenerService::~nsEventListenerService()
{
  /* destructor code */
}

/* void getListenerInfoFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIEventListenerInfo aOutArray); */
NS_IMETHODIMP nsEventListenerService::GetListenerInfoFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIEventListenerInfo * **aOutArray)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getEventTargetChainFor (in nsIDOMEventTarget aEventTarget, [optional] out unsigned long aCount, [array, size_is (aCount), retval] out nsIDOMEventTarget aOutArray); */
NS_IMETHODIMP nsEventListenerService::GetEventTargetChainFor(nsIDOMEventTarget *aEventTarget, uint32_t *aCount, nsIDOMEventTarget * **aOutArray)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasListenersFor (in nsIDOMEventTarget aEventTarget, in DOMString aType); */
NS_IMETHODIMP nsEventListenerService::HasListenersFor(nsIDOMEventTarget *aEventTarget, const nsAString & aType, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
NS_IMETHODIMP nsEventListenerService::AddSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeSystemEventListener (in nsIDOMEventTarget target, in DOMString type, in nsIDOMEventListener listener, in boolean useCapture); */
NS_IMETHODIMP nsEventListenerService::RemoveSystemEventListener(nsIDOMEventTarget *target, const nsAString & type, nsIDOMEventListener *listener, bool useCapture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addListenerForAllEvents (in nsIDOMEventTarget target, in nsIDOMEventListener listener, [optional] in boolean aUseCapture, [optional] in boolean aWantsUntrusted, [optional] in boolean aSystemEventGroup); */
NS_IMETHODIMP nsEventListenerService::AddListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aWantsUntrusted, bool aSystemEventGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListenerForAllEvents (in nsIDOMEventTarget target, in nsIDOMEventListener listener, [optional] in boolean aUseCapture, [optional] in boolean aSystemEventGroup); */
NS_IMETHODIMP nsEventListenerService::RemoveListenerForAllEvents(nsIDOMEventTarget *target, nsIDOMEventListener *listener, bool aUseCapture, bool aSystemEventGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addListenerChangeListener (in nsIListenerChangeListener aListener); */
NS_IMETHODIMP nsEventListenerService::AddListenerChangeListener(nsIListenerChangeListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListenerChangeListener (in nsIListenerChangeListener aListener); */
NS_IMETHODIMP nsEventListenerService::RemoveListenerChangeListener(nsIListenerChangeListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEventListenerService_h__ */
