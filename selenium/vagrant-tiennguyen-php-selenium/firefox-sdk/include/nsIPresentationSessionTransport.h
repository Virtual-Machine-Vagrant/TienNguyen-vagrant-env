/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPresentationSessionTransport.idl
 */

#ifndef __gen_nsIPresentationSessionTransport_h__
#define __gen_nsIPresentationSessionTransport_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInputStream; /* forward declaration */

class nsINetAddr; /* forward declaration */

class nsIPresentationChannelDescription; /* forward declaration */

class nsISocketTransport; /* forward declaration */

#define PRESENTATION_SESSION_TRANSPORT_CONTRACTID \
  "@mozilla.org/presentation/presentationsessiontransport;1"

/* starting interface:    nsIPresentationSessionTransportCallback */
#define NS_IPRESENTATIONSESSIONTRANSPORTCALLBACK_IID_STR "9f158786-41a6-4a10-b29b-9497f25d4b67"

#define NS_IPRESENTATIONSESSIONTRANSPORTCALLBACK_IID \
  {0x9f158786, 0x41a6, 0x4a10, \
    { 0xb2, 0x9b, 0x94, 0x97, 0xf2, 0x5d, 0x4b, 0x67 }}

class NS_NO_VTABLE nsIPresentationSessionTransportCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONSESSIONTRANSPORTCALLBACK_IID)

  /* void notifyTransportReady (); */
  NS_IMETHOD NotifyTransportReady(void) = 0;

  /* void notifyTransportClosed (in nsresult reason); */
  NS_IMETHOD NotifyTransportClosed(nsresult reason) = 0;

  /* void notifyData (in ACString data); */
  NS_IMETHOD NotifyData(const nsACString & data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationSessionTransportCallback, NS_IPRESENTATIONSESSIONTRANSPORTCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONSESSIONTRANSPORTCALLBACK \
  NS_IMETHOD NotifyTransportReady(void) override; \
  NS_IMETHOD NotifyTransportClosed(nsresult reason) override; \
  NS_IMETHOD NotifyData(const nsACString & data) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONSESSIONTRANSPORTCALLBACK \
  NS_METHOD NotifyTransportReady(void); \
  NS_METHOD NotifyTransportClosed(nsresult reason); \
  NS_METHOD NotifyData(const nsACString & data); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONSESSIONTRANSPORTCALLBACK(_to) \
  NS_IMETHOD NotifyTransportReady(void) override { return _to NotifyTransportReady(); } \
  NS_IMETHOD NotifyTransportClosed(nsresult reason) override { return _to NotifyTransportClosed(reason); } \
  NS_IMETHOD NotifyData(const nsACString & data) override { return _to NotifyData(data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONSESSIONTRANSPORTCALLBACK(_to) \
  NS_IMETHOD NotifyTransportReady(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyTransportReady(); } \
  NS_IMETHOD NotifyTransportClosed(nsresult reason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyTransportClosed(reason); } \
  NS_IMETHOD NotifyData(const nsACString & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyData(data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationSessionTransportCallback : public nsIPresentationSessionTransportCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONSESSIONTRANSPORTCALLBACK

  nsPresentationSessionTransportCallback();

private:
  ~nsPresentationSessionTransportCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationSessionTransportCallback, nsIPresentationSessionTransportCallback)

nsPresentationSessionTransportCallback::nsPresentationSessionTransportCallback()
{
  /* member initializers and constructor code */
}

nsPresentationSessionTransportCallback::~nsPresentationSessionTransportCallback()
{
  /* destructor code */
}

/* void notifyTransportReady (); */
NS_IMETHODIMP nsPresentationSessionTransportCallback::NotifyTransportReady()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyTransportClosed (in nsresult reason); */
NS_IMETHODIMP nsPresentationSessionTransportCallback::NotifyTransportClosed(nsresult reason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyData (in ACString data); */
NS_IMETHODIMP nsPresentationSessionTransportCallback::NotifyData(const nsACString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPresentationSessionTransport */
#define NS_IPRESENTATIONSESSIONTRANSPORT_IID_STR "b6a416cf-03ae-4e74-9cda-88828e8ff418"

#define NS_IPRESENTATIONSESSIONTRANSPORT_IID \
  {0xb6a416cf, 0x03ae, 0x4e74, \
    { 0x9c, 0xda, 0x88, 0x82, 0x8e, 0x8f, 0xf4, 0x18 }}

class NS_NO_VTABLE nsIPresentationSessionTransport : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONSESSIONTRANSPORT_IID)

  /* readonly attribute nsINetAddr selfAddress; */
  NS_IMETHOD GetSelfAddress(nsINetAddr * *aSelfAddress) = 0;

  /* void initWithSocketTransport (in nsISocketTransport transport, in nsIPresentationSessionTransportCallback callback); */
  NS_IMETHOD InitWithSocketTransport(nsISocketTransport *transport, nsIPresentationSessionTransportCallback *callback) = 0;

  /* void initWithChannelDescription (in nsIPresentationChannelDescription description, in nsIPresentationSessionTransportCallback callback); */
  NS_IMETHOD InitWithChannelDescription(nsIPresentationChannelDescription *description, nsIPresentationSessionTransportCallback *callback) = 0;

  /* void enableDataNotification (); */
  NS_IMETHOD EnableDataNotification(void) = 0;

  /* void send (in nsIInputStream data); */
  NS_IMETHOD Send(nsIInputStream *data) = 0;

  /* void close (in nsresult reason); */
  NS_IMETHOD Close(nsresult reason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationSessionTransport, NS_IPRESENTATIONSESSIONTRANSPORT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONSESSIONTRANSPORT \
  NS_IMETHOD GetSelfAddress(nsINetAddr * *aSelfAddress) override; \
  NS_IMETHOD InitWithSocketTransport(nsISocketTransport *transport, nsIPresentationSessionTransportCallback *callback) override; \
  NS_IMETHOD InitWithChannelDescription(nsIPresentationChannelDescription *description, nsIPresentationSessionTransportCallback *callback) override; \
  NS_IMETHOD EnableDataNotification(void) override; \
  NS_IMETHOD Send(nsIInputStream *data) override; \
  NS_IMETHOD Close(nsresult reason) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONSESSIONTRANSPORT \
  NS_METHOD GetSelfAddress(nsINetAddr * *aSelfAddress); \
  NS_METHOD InitWithSocketTransport(nsISocketTransport *transport, nsIPresentationSessionTransportCallback *callback); \
  NS_METHOD InitWithChannelDescription(nsIPresentationChannelDescription *description, nsIPresentationSessionTransportCallback *callback); \
  NS_METHOD EnableDataNotification(void); \
  NS_METHOD Send(nsIInputStream *data); \
  NS_METHOD Close(nsresult reason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONSESSIONTRANSPORT(_to) \
  NS_IMETHOD GetSelfAddress(nsINetAddr * *aSelfAddress) override { return _to GetSelfAddress(aSelfAddress); } \
  NS_IMETHOD InitWithSocketTransport(nsISocketTransport *transport, nsIPresentationSessionTransportCallback *callback) override { return _to InitWithSocketTransport(transport, callback); } \
  NS_IMETHOD InitWithChannelDescription(nsIPresentationChannelDescription *description, nsIPresentationSessionTransportCallback *callback) override { return _to InitWithChannelDescription(description, callback); } \
  NS_IMETHOD EnableDataNotification(void) override { return _to EnableDataNotification(); } \
  NS_IMETHOD Send(nsIInputStream *data) override { return _to Send(data); } \
  NS_IMETHOD Close(nsresult reason) override { return _to Close(reason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONSESSIONTRANSPORT(_to) \
  NS_IMETHOD GetSelfAddress(nsINetAddr * *aSelfAddress) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelfAddress(aSelfAddress); } \
  NS_IMETHOD InitWithSocketTransport(nsISocketTransport *transport, nsIPresentationSessionTransportCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithSocketTransport(transport, callback); } \
  NS_IMETHOD InitWithChannelDescription(nsIPresentationChannelDescription *description, nsIPresentationSessionTransportCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithChannelDescription(description, callback); } \
  NS_IMETHOD EnableDataNotification(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableDataNotification(); } \
  NS_IMETHOD Send(nsIInputStream *data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Send(data); } \
  NS_IMETHOD Close(nsresult reason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(reason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationSessionTransport : public nsIPresentationSessionTransport
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONSESSIONTRANSPORT

  nsPresentationSessionTransport();

private:
  ~nsPresentationSessionTransport();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationSessionTransport, nsIPresentationSessionTransport)

nsPresentationSessionTransport::nsPresentationSessionTransport()
{
  /* member initializers and constructor code */
}

nsPresentationSessionTransport::~nsPresentationSessionTransport()
{
  /* destructor code */
}

/* readonly attribute nsINetAddr selfAddress; */
NS_IMETHODIMP nsPresentationSessionTransport::GetSelfAddress(nsINetAddr * *aSelfAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initWithSocketTransport (in nsISocketTransport transport, in nsIPresentationSessionTransportCallback callback); */
NS_IMETHODIMP nsPresentationSessionTransport::InitWithSocketTransport(nsISocketTransport *transport, nsIPresentationSessionTransportCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initWithChannelDescription (in nsIPresentationChannelDescription description, in nsIPresentationSessionTransportCallback callback); */
NS_IMETHODIMP nsPresentationSessionTransport::InitWithChannelDescription(nsIPresentationChannelDescription *description, nsIPresentationSessionTransportCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableDataNotification (); */
NS_IMETHODIMP nsPresentationSessionTransport::EnableDataNotification()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void send (in nsIInputStream data); */
NS_IMETHODIMP nsPresentationSessionTransport::Send(nsIInputStream *data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (in nsresult reason); */
NS_IMETHODIMP nsPresentationSessionTransport::Close(nsresult reason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPresentationSessionTransport_h__ */
