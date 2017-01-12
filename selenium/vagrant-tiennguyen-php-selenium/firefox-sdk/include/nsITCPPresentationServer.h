/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsITCPPresentationServer.idl
 */

#ifndef __gen_nsITCPPresentationServer_h__
#define __gen_nsITCPPresentationServer_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPresentationControlChannel; /* forward declaration */

#define TCP_PRESENTATION_SERVER_CONTACT_ID \
  "@mozilla.org/presentation-device/tcp-presentation-server;1"

/* starting interface:    nsITCPDeviceInfo */
#define NS_ITCPDEVICEINFO_IID_STR "296fd171-e4d0-4de0-99ff-ad8ed52ddef3"

#define NS_ITCPDEVICEINFO_IID \
  {0x296fd171, 0xe4d0, 0x4de0, \
    { 0x99, 0xff, 0xad, 0x8e, 0xd5, 0x2d, 0xde, 0xf3 }}

class NS_NO_VTABLE nsITCPDeviceInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITCPDEVICEINFO_IID)

  /* readonly attribute AUTF8String id; */
  NS_IMETHOD GetId(nsACString & aId) = 0;

  /* readonly attribute AUTF8String address; */
  NS_IMETHOD GetAddress(nsACString & aAddress) = 0;

  /* readonly attribute uint16_t port; */
  NS_IMETHOD GetPort(uint16_t *aPort) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITCPDeviceInfo, NS_ITCPDEVICEINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITCPDEVICEINFO \
  NS_IMETHOD GetId(nsACString & aId) override; \
  NS_IMETHOD GetAddress(nsACString & aAddress) override; \
  NS_IMETHOD GetPort(uint16_t *aPort) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITCPDEVICEINFO \
  NS_METHOD GetId(nsACString & aId); \
  NS_METHOD GetAddress(nsACString & aAddress); \
  NS_METHOD GetPort(uint16_t *aPort); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITCPDEVICEINFO(_to) \
  NS_IMETHOD GetId(nsACString & aId) override { return _to GetId(aId); } \
  NS_IMETHOD GetAddress(nsACString & aAddress) override { return _to GetAddress(aAddress); } \
  NS_IMETHOD GetPort(uint16_t *aPort) override { return _to GetPort(aPort); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITCPDEVICEINFO(_to) \
  NS_IMETHOD GetId(nsACString & aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD GetAddress(nsACString & aAddress) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddress(aAddress); } \
  NS_IMETHOD GetPort(uint16_t *aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPort(aPort); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTCPDeviceInfo : public nsITCPDeviceInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITCPDEVICEINFO

  nsTCPDeviceInfo();

private:
  ~nsTCPDeviceInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTCPDeviceInfo, nsITCPDeviceInfo)

nsTCPDeviceInfo::nsTCPDeviceInfo()
{
  /* member initializers and constructor code */
}

nsTCPDeviceInfo::~nsTCPDeviceInfo()
{
  /* destructor code */
}

/* readonly attribute AUTF8String id; */
NS_IMETHODIMP nsTCPDeviceInfo::GetId(nsACString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String address; */
NS_IMETHODIMP nsTCPDeviceInfo::GetAddress(nsACString & aAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint16_t port; */
NS_IMETHODIMP nsTCPDeviceInfo::GetPort(uint16_t *aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITCPPresentationServerListener */
#define NS_ITCPPRESENTATIONSERVERLISTENER_IID_STR "09bddfaf-fcc2-4dc9-b33e-a509a1c2fb6d"

#define NS_ITCPPRESENTATIONSERVERLISTENER_IID \
  {0x09bddfaf, 0xfcc2, 0x4dc9, \
    { 0xb3, 0x3e, 0xa5, 0x09, 0xa1, 0xc2, 0xfb, 0x6d }}

class NS_NO_VTABLE nsITCPPresentationServerListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITCPPRESENTATIONSERVERLISTENER_IID)

  /* void onPortChange (in uint16_t aPort); */
  NS_IMETHOD OnPortChange(uint16_t aPort) = 0;

  /* void onSessionRequest (in nsITCPDeviceInfo aDeviceInfo, in DOMString aUrl, in DOMString aPresentationId, in nsIPresentationControlChannel aControlChannel); */
  NS_IMETHOD OnSessionRequest(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel *aControlChannel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITCPPresentationServerListener, NS_ITCPPRESENTATIONSERVERLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITCPPRESENTATIONSERVERLISTENER \
  NS_IMETHOD OnPortChange(uint16_t aPort) override; \
  NS_IMETHOD OnSessionRequest(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel *aControlChannel) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITCPPRESENTATIONSERVERLISTENER \
  NS_METHOD OnPortChange(uint16_t aPort); \
  NS_METHOD OnSessionRequest(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel *aControlChannel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITCPPRESENTATIONSERVERLISTENER(_to) \
  NS_IMETHOD OnPortChange(uint16_t aPort) override { return _to OnPortChange(aPort); } \
  NS_IMETHOD OnSessionRequest(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel *aControlChannel) override { return _to OnSessionRequest(aDeviceInfo, aUrl, aPresentationId, aControlChannel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITCPPRESENTATIONSERVERLISTENER(_to) \
  NS_IMETHOD OnPortChange(uint16_t aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPortChange(aPort); } \
  NS_IMETHOD OnSessionRequest(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel *aControlChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnSessionRequest(aDeviceInfo, aUrl, aPresentationId, aControlChannel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTCPPresentationServerListener : public nsITCPPresentationServerListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITCPPRESENTATIONSERVERLISTENER

  nsTCPPresentationServerListener();

private:
  ~nsTCPPresentationServerListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTCPPresentationServerListener, nsITCPPresentationServerListener)

nsTCPPresentationServerListener::nsTCPPresentationServerListener()
{
  /* member initializers and constructor code */
}

nsTCPPresentationServerListener::~nsTCPPresentationServerListener()
{
  /* destructor code */
}

/* void onPortChange (in uint16_t aPort); */
NS_IMETHODIMP nsTCPPresentationServerListener::OnPortChange(uint16_t aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onSessionRequest (in nsITCPDeviceInfo aDeviceInfo, in DOMString aUrl, in DOMString aPresentationId, in nsIPresentationControlChannel aControlChannel); */
NS_IMETHODIMP nsTCPPresentationServerListener::OnSessionRequest(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel *aControlChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITCPPresentationServer */
#define NS_ITCPPRESENTATIONSERVER_IID_STR "55d6b605-2389-4aae-a8fe-60d4440540ea"

#define NS_ITCPPRESENTATIONSERVER_IID \
  {0x55d6b605, 0x2389, 0x4aae, \
    { 0xa8, 0xfe, 0x60, 0xd4, 0x44, 0x05, 0x40, 0xea }}

class NS_NO_VTABLE nsITCPPresentationServer : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITCPPRESENTATIONSERVER_IID)

  /* void startService ([optional] in uint16_t aPort); */
  NS_IMETHOD StartService(uint16_t aPort) = 0;

  /* nsIPresentationControlChannel requestSession (in nsITCPDeviceInfo aDeviceInfo, in DOMString aUrl, in DOMString aPresentationId); */
  NS_IMETHOD RequestSession(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel * *_retval) = 0;

  /* void close (); */
  NS_IMETHOD Close(void) = 0;

  /* readonly attribute uint16_t port; */
  NS_IMETHOD GetPort(uint16_t *aPort) = 0;

  /* attribute AUTF8String id; */
  NS_IMETHOD GetId(nsACString & aId) = 0;
  NS_IMETHOD SetId(const nsACString & aId) = 0;

  /* attribute nsITCPPresentationServerListener listener; */
  NS_IMETHOD GetListener(nsITCPPresentationServerListener * *aListener) = 0;
  NS_IMETHOD SetListener(nsITCPPresentationServerListener *aListener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITCPPresentationServer, NS_ITCPPRESENTATIONSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITCPPRESENTATIONSERVER \
  NS_IMETHOD StartService(uint16_t aPort) override; \
  NS_IMETHOD RequestSession(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel * *_retval) override; \
  NS_IMETHOD Close(void) override; \
  NS_IMETHOD GetPort(uint16_t *aPort) override; \
  NS_IMETHOD GetId(nsACString & aId) override; \
  NS_IMETHOD SetId(const nsACString & aId) override; \
  NS_IMETHOD GetListener(nsITCPPresentationServerListener * *aListener) override; \
  NS_IMETHOD SetListener(nsITCPPresentationServerListener *aListener) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITCPPRESENTATIONSERVER \
  NS_METHOD StartService(uint16_t aPort); \
  NS_METHOD RequestSession(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel * *_retval); \
  NS_METHOD Close(void); \
  NS_METHOD GetPort(uint16_t *aPort); \
  NS_METHOD GetId(nsACString & aId); \
  NS_METHOD SetId(const nsACString & aId); \
  NS_METHOD GetListener(nsITCPPresentationServerListener * *aListener); \
  NS_METHOD SetListener(nsITCPPresentationServerListener *aListener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITCPPRESENTATIONSERVER(_to) \
  NS_IMETHOD StartService(uint16_t aPort) override { return _to StartService(aPort); } \
  NS_IMETHOD RequestSession(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel * *_retval) override { return _to RequestSession(aDeviceInfo, aUrl, aPresentationId, _retval); } \
  NS_IMETHOD Close(void) override { return _to Close(); } \
  NS_IMETHOD GetPort(uint16_t *aPort) override { return _to GetPort(aPort); } \
  NS_IMETHOD GetId(nsACString & aId) override { return _to GetId(aId); } \
  NS_IMETHOD SetId(const nsACString & aId) override { return _to SetId(aId); } \
  NS_IMETHOD GetListener(nsITCPPresentationServerListener * *aListener) override { return _to GetListener(aListener); } \
  NS_IMETHOD SetListener(nsITCPPresentationServerListener *aListener) override { return _to SetListener(aListener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITCPPRESENTATIONSERVER(_to) \
  NS_IMETHOD StartService(uint16_t aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartService(aPort); } \
  NS_IMETHOD RequestSession(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestSession(aDeviceInfo, aUrl, aPresentationId, _retval); } \
  NS_IMETHOD Close(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_IMETHOD GetPort(uint16_t *aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPort(aPort); } \
  NS_IMETHOD GetId(nsACString & aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD SetId(const nsACString & aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetId(aId); } \
  NS_IMETHOD GetListener(nsITCPPresentationServerListener * *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListener(aListener); } \
  NS_IMETHOD SetListener(nsITCPPresentationServerListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetListener(aListener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTCPPresentationServer : public nsITCPPresentationServer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITCPPRESENTATIONSERVER

  nsTCPPresentationServer();

private:
  ~nsTCPPresentationServer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTCPPresentationServer, nsITCPPresentationServer)

nsTCPPresentationServer::nsTCPPresentationServer()
{
  /* member initializers and constructor code */
}

nsTCPPresentationServer::~nsTCPPresentationServer()
{
  /* destructor code */
}

/* void startService ([optional] in uint16_t aPort); */
NS_IMETHODIMP nsTCPPresentationServer::StartService(uint16_t aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPresentationControlChannel requestSession (in nsITCPDeviceInfo aDeviceInfo, in DOMString aUrl, in DOMString aPresentationId); */
NS_IMETHODIMP nsTCPPresentationServer::RequestSession(nsITCPDeviceInfo *aDeviceInfo, const nsAString & aUrl, const nsAString & aPresentationId, nsIPresentationControlChannel * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP nsTCPPresentationServer::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint16_t port; */
NS_IMETHODIMP nsTCPPresentationServer::GetPort(uint16_t *aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String id; */
NS_IMETHODIMP nsTCPPresentationServer::GetId(nsACString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTCPPresentationServer::SetId(const nsACString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsITCPPresentationServerListener listener; */
NS_IMETHODIMP nsTCPPresentationServer::GetListener(nsITCPPresentationServerListener * *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTCPPresentationServer::SetListener(nsITCPPresentationServerListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITCPPresentationServer_h__ */
