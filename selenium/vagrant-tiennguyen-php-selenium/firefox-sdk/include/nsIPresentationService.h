/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPresentationService.idl
 */

#ifndef __gen_nsIPresentationService_h__
#define __gen_nsIPresentationService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInputStream; /* forward declaration */

class nsIPresentationAvailabilityListener; /* forward declaration */

class nsIPresentationRespondingListener; /* forward declaration */

class nsIPresentationSessionListener; /* forward declaration */

#define PRESENTATION_SERVICE_CID \
  { 0x1d9bb10c, 0xc0ab, 0x4fe8, \
    { 0x9e, 0x4f, 0x40, 0x58, 0xb8, 0x51, 0x98, 0x32 } }
#define PRESENTATION_SERVICE_CONTRACTID \
  "@mozilla.org/presentation/presentationservice;1"

/* starting interface:    nsIPresentationServiceCallback */
#define NS_IPRESENTATIONSERVICECALLBACK_IID_STR "12073206-0065-4b10-9488-a6eb9b23e65b"

#define NS_IPRESENTATIONSERVICECALLBACK_IID \
  {0x12073206, 0x0065, 0x4b10, \
    { 0x94, 0x88, 0xa6, 0xeb, 0x9b, 0x23, 0xe6, 0x5b }}

class NS_NO_VTABLE nsIPresentationServiceCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONSERVICECALLBACK_IID)

  /* void notifySuccess (); */
  NS_IMETHOD NotifySuccess(void) = 0;

  /* void notifyError (in nsresult error); */
  NS_IMETHOD NotifyError(nsresult error) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationServiceCallback, NS_IPRESENTATIONSERVICECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONSERVICECALLBACK \
  NS_IMETHOD NotifySuccess(void) override; \
  NS_IMETHOD NotifyError(nsresult error) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONSERVICECALLBACK \
  NS_METHOD NotifySuccess(void); \
  NS_METHOD NotifyError(nsresult error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONSERVICECALLBACK(_to) \
  NS_IMETHOD NotifySuccess(void) override { return _to NotifySuccess(); } \
  NS_IMETHOD NotifyError(nsresult error) override { return _to NotifyError(error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONSERVICECALLBACK(_to) \
  NS_IMETHOD NotifySuccess(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySuccess(); } \
  NS_IMETHOD NotifyError(nsresult error) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyError(error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationServiceCallback : public nsIPresentationServiceCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONSERVICECALLBACK

  nsPresentationServiceCallback();

private:
  ~nsPresentationServiceCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationServiceCallback, nsIPresentationServiceCallback)

nsPresentationServiceCallback::nsPresentationServiceCallback()
{
  /* member initializers and constructor code */
}

nsPresentationServiceCallback::~nsPresentationServiceCallback()
{
  /* destructor code */
}

/* void notifySuccess (); */
NS_IMETHODIMP nsPresentationServiceCallback::NotifySuccess()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyError (in nsresult error); */
NS_IMETHODIMP nsPresentationServiceCallback::NotifyError(nsresult error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPresentationService */
#define NS_IPRESENTATIONSERVICE_IID_STR "2e360359-c45c-4949-bf95-410242ce483f"

#define NS_IPRESENTATIONSERVICE_IID \
  {0x2e360359, 0xc45c, 0x4949, \
    { 0xbf, 0x95, 0x41, 0x02, 0x42, 0xce, 0x48, 0x3f }}

class NS_NO_VTABLE nsIPresentationService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONSERVICE_IID)

  /* void startSession (in DOMString url, in DOMString sessionId, in DOMString origin, in DOMString deviceId, in nsIPresentationServiceCallback callback); */
  NS_IMETHOD StartSession(const nsAString & url, const nsAString & sessionId, const nsAString & origin, const nsAString & deviceId, nsIPresentationServiceCallback *callback) = 0;

  /* void sendSessionMessage (in DOMString sessionId, in nsIInputStream stream); */
  NS_IMETHOD SendSessionMessage(const nsAString & sessionId, nsIInputStream *stream) = 0;

  /* void closeSession (in DOMString sessionId); */
  NS_IMETHOD CloseSession(const nsAString & sessionId) = 0;

  /* void terminateSession (in DOMString sessionId); */
  NS_IMETHOD TerminateSession(const nsAString & sessionId) = 0;

  /* void registerAvailabilityListener (in nsIPresentationAvailabilityListener listener); */
  NS_IMETHOD RegisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) = 0;

  /* void unregisterAvailabilityListener (in nsIPresentationAvailabilityListener listener); */
  NS_IMETHOD UnregisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) = 0;

  /* void registerSessionListener (in DOMString sessionId, in nsIPresentationSessionListener listener); */
  NS_IMETHOD RegisterSessionListener(const nsAString & sessionId, nsIPresentationSessionListener *listener) = 0;

  /* void unregisterSessionListener (in DOMString sessionId); */
  NS_IMETHOD UnregisterSessionListener(const nsAString & sessionId) = 0;

  /* void registerRespondingListener (in uint64_t windowId, in nsIPresentationRespondingListener listener); */
  NS_IMETHOD RegisterRespondingListener(uint64_t windowId, nsIPresentationRespondingListener *listener) = 0;

  /* void unregisterRespondingListener (in uint64_t windowId); */
  NS_IMETHOD UnregisterRespondingListener(uint64_t windowId) = 0;

  /* DOMString getExistentSessionIdAtLaunch (in uint64_t windowId); */
  NS_IMETHOD GetExistentSessionIdAtLaunch(uint64_t windowId, nsAString & _retval) = 0;

  /* void notifyReceiverReady (in DOMString sessionId, [optional] in uint64_t windowId); */
  NS_IMETHOD NotifyReceiverReady(const nsAString & sessionId, uint64_t windowId) = 0;

  /* void untrackSessionInfo (in DOMString sessionId); */
  NS_IMETHOD UntrackSessionInfo(const nsAString & sessionId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationService, NS_IPRESENTATIONSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONSERVICE \
  NS_IMETHOD StartSession(const nsAString & url, const nsAString & sessionId, const nsAString & origin, const nsAString & deviceId, nsIPresentationServiceCallback *callback) override; \
  NS_IMETHOD SendSessionMessage(const nsAString & sessionId, nsIInputStream *stream) override; \
  NS_IMETHOD CloseSession(const nsAString & sessionId) override; \
  NS_IMETHOD TerminateSession(const nsAString & sessionId) override; \
  NS_IMETHOD RegisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) override; \
  NS_IMETHOD UnregisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) override; \
  NS_IMETHOD RegisterSessionListener(const nsAString & sessionId, nsIPresentationSessionListener *listener) override; \
  NS_IMETHOD UnregisterSessionListener(const nsAString & sessionId) override; \
  NS_IMETHOD RegisterRespondingListener(uint64_t windowId, nsIPresentationRespondingListener *listener) override; \
  NS_IMETHOD UnregisterRespondingListener(uint64_t windowId) override; \
  NS_IMETHOD GetExistentSessionIdAtLaunch(uint64_t windowId, nsAString & _retval) override; \
  NS_IMETHOD NotifyReceiverReady(const nsAString & sessionId, uint64_t windowId) override; \
  NS_IMETHOD UntrackSessionInfo(const nsAString & sessionId) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONSERVICE \
  NS_METHOD StartSession(const nsAString & url, const nsAString & sessionId, const nsAString & origin, const nsAString & deviceId, nsIPresentationServiceCallback *callback); \
  NS_METHOD SendSessionMessage(const nsAString & sessionId, nsIInputStream *stream); \
  NS_METHOD CloseSession(const nsAString & sessionId); \
  NS_METHOD TerminateSession(const nsAString & sessionId); \
  NS_METHOD RegisterAvailabilityListener(nsIPresentationAvailabilityListener *listener); \
  NS_METHOD UnregisterAvailabilityListener(nsIPresentationAvailabilityListener *listener); \
  NS_METHOD RegisterSessionListener(const nsAString & sessionId, nsIPresentationSessionListener *listener); \
  NS_METHOD UnregisterSessionListener(const nsAString & sessionId); \
  NS_METHOD RegisterRespondingListener(uint64_t windowId, nsIPresentationRespondingListener *listener); \
  NS_METHOD UnregisterRespondingListener(uint64_t windowId); \
  NS_METHOD GetExistentSessionIdAtLaunch(uint64_t windowId, nsAString & _retval); \
  NS_METHOD NotifyReceiverReady(const nsAString & sessionId, uint64_t windowId); \
  NS_METHOD UntrackSessionInfo(const nsAString & sessionId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONSERVICE(_to) \
  NS_IMETHOD StartSession(const nsAString & url, const nsAString & sessionId, const nsAString & origin, const nsAString & deviceId, nsIPresentationServiceCallback *callback) override { return _to StartSession(url, sessionId, origin, deviceId, callback); } \
  NS_IMETHOD SendSessionMessage(const nsAString & sessionId, nsIInputStream *stream) override { return _to SendSessionMessage(sessionId, stream); } \
  NS_IMETHOD CloseSession(const nsAString & sessionId) override { return _to CloseSession(sessionId); } \
  NS_IMETHOD TerminateSession(const nsAString & sessionId) override { return _to TerminateSession(sessionId); } \
  NS_IMETHOD RegisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) override { return _to RegisterAvailabilityListener(listener); } \
  NS_IMETHOD UnregisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) override { return _to UnregisterAvailabilityListener(listener); } \
  NS_IMETHOD RegisterSessionListener(const nsAString & sessionId, nsIPresentationSessionListener *listener) override { return _to RegisterSessionListener(sessionId, listener); } \
  NS_IMETHOD UnregisterSessionListener(const nsAString & sessionId) override { return _to UnregisterSessionListener(sessionId); } \
  NS_IMETHOD RegisterRespondingListener(uint64_t windowId, nsIPresentationRespondingListener *listener) override { return _to RegisterRespondingListener(windowId, listener); } \
  NS_IMETHOD UnregisterRespondingListener(uint64_t windowId) override { return _to UnregisterRespondingListener(windowId); } \
  NS_IMETHOD GetExistentSessionIdAtLaunch(uint64_t windowId, nsAString & _retval) override { return _to GetExistentSessionIdAtLaunch(windowId, _retval); } \
  NS_IMETHOD NotifyReceiverReady(const nsAString & sessionId, uint64_t windowId) override { return _to NotifyReceiverReady(sessionId, windowId); } \
  NS_IMETHOD UntrackSessionInfo(const nsAString & sessionId) override { return _to UntrackSessionInfo(sessionId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONSERVICE(_to) \
  NS_IMETHOD StartSession(const nsAString & url, const nsAString & sessionId, const nsAString & origin, const nsAString & deviceId, nsIPresentationServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartSession(url, sessionId, origin, deviceId, callback); } \
  NS_IMETHOD SendSessionMessage(const nsAString & sessionId, nsIInputStream *stream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendSessionMessage(sessionId, stream); } \
  NS_IMETHOD CloseSession(const nsAString & sessionId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CloseSession(sessionId); } \
  NS_IMETHOD TerminateSession(const nsAString & sessionId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TerminateSession(sessionId); } \
  NS_IMETHOD RegisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterAvailabilityListener(listener); } \
  NS_IMETHOD UnregisterAvailabilityListener(nsIPresentationAvailabilityListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterAvailabilityListener(listener); } \
  NS_IMETHOD RegisterSessionListener(const nsAString & sessionId, nsIPresentationSessionListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterSessionListener(sessionId, listener); } \
  NS_IMETHOD UnregisterSessionListener(const nsAString & sessionId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterSessionListener(sessionId); } \
  NS_IMETHOD RegisterRespondingListener(uint64_t windowId, nsIPresentationRespondingListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterRespondingListener(windowId, listener); } \
  NS_IMETHOD UnregisterRespondingListener(uint64_t windowId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterRespondingListener(windowId); } \
  NS_IMETHOD GetExistentSessionIdAtLaunch(uint64_t windowId, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExistentSessionIdAtLaunch(windowId, _retval); } \
  NS_IMETHOD NotifyReceiverReady(const nsAString & sessionId, uint64_t windowId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyReceiverReady(sessionId, windowId); } \
  NS_IMETHOD UntrackSessionInfo(const nsAString & sessionId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UntrackSessionInfo(sessionId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationService : public nsIPresentationService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONSERVICE

  nsPresentationService();

private:
  ~nsPresentationService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationService, nsIPresentationService)

nsPresentationService::nsPresentationService()
{
  /* member initializers and constructor code */
}

nsPresentationService::~nsPresentationService()
{
  /* destructor code */
}

/* void startSession (in DOMString url, in DOMString sessionId, in DOMString origin, in DOMString deviceId, in nsIPresentationServiceCallback callback); */
NS_IMETHODIMP nsPresentationService::StartSession(const nsAString & url, const nsAString & sessionId, const nsAString & origin, const nsAString & deviceId, nsIPresentationServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendSessionMessage (in DOMString sessionId, in nsIInputStream stream); */
NS_IMETHODIMP nsPresentationService::SendSessionMessage(const nsAString & sessionId, nsIInputStream *stream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void closeSession (in DOMString sessionId); */
NS_IMETHODIMP nsPresentationService::CloseSession(const nsAString & sessionId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void terminateSession (in DOMString sessionId); */
NS_IMETHODIMP nsPresentationService::TerminateSession(const nsAString & sessionId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerAvailabilityListener (in nsIPresentationAvailabilityListener listener); */
NS_IMETHODIMP nsPresentationService::RegisterAvailabilityListener(nsIPresentationAvailabilityListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterAvailabilityListener (in nsIPresentationAvailabilityListener listener); */
NS_IMETHODIMP nsPresentationService::UnregisterAvailabilityListener(nsIPresentationAvailabilityListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerSessionListener (in DOMString sessionId, in nsIPresentationSessionListener listener); */
NS_IMETHODIMP nsPresentationService::RegisterSessionListener(const nsAString & sessionId, nsIPresentationSessionListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterSessionListener (in DOMString sessionId); */
NS_IMETHODIMP nsPresentationService::UnregisterSessionListener(const nsAString & sessionId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerRespondingListener (in uint64_t windowId, in nsIPresentationRespondingListener listener); */
NS_IMETHODIMP nsPresentationService::RegisterRespondingListener(uint64_t windowId, nsIPresentationRespondingListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterRespondingListener (in uint64_t windowId); */
NS_IMETHODIMP nsPresentationService::UnregisterRespondingListener(uint64_t windowId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getExistentSessionIdAtLaunch (in uint64_t windowId); */
NS_IMETHODIMP nsPresentationService::GetExistentSessionIdAtLaunch(uint64_t windowId, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyReceiverReady (in DOMString sessionId, [optional] in uint64_t windowId); */
NS_IMETHODIMP nsPresentationService::NotifyReceiverReady(const nsAString & sessionId, uint64_t windowId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void untrackSessionInfo (in DOMString sessionId); */
NS_IMETHODIMP nsPresentationService::UntrackSessionInfo(const nsAString & sessionId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPresentationService_h__ */
