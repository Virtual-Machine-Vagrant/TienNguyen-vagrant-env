/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPresentationDeviceProvider.idl
 */

#ifndef __gen_nsIPresentationDeviceProvider_h__
#define __gen_nsIPresentationDeviceProvider_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPresentationDevice; /* forward declaration */

class nsIPresentationControlChannel; /* forward declaration */

#define PRESENTATION_DEVICE_PROVIDER_CATEGORY "presentation-device-provider"

/* starting interface:    nsIPresentationDeviceListener */
#define NS_IPRESENTATIONDEVICELISTENER_IID_STR "46fd372b-2e40-4179-9b36-0478d141e440"

#define NS_IPRESENTATIONDEVICELISTENER_IID \
  {0x46fd372b, 0x2e40, 0x4179, \
    { 0x9b, 0x36, 0x04, 0x78, 0xd1, 0x41, 0xe4, 0x40 }}

class NS_NO_VTABLE nsIPresentationDeviceListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONDEVICELISTENER_IID)

  /* void addDevice (in nsIPresentationDevice device); */
  NS_IMETHOD AddDevice(nsIPresentationDevice *device) = 0;

  /* void removeDevice (in nsIPresentationDevice device); */
  NS_IMETHOD RemoveDevice(nsIPresentationDevice *device) = 0;

  /* void updateDevice (in nsIPresentationDevice device); */
  NS_IMETHOD UpdateDevice(nsIPresentationDevice *device) = 0;

  /* void onSessionRequest (in nsIPresentationDevice device, in DOMString url, in DOMString presentationId, in nsIPresentationControlChannel controlChannel); */
  NS_IMETHOD OnSessionRequest(nsIPresentationDevice *device, const nsAString & url, const nsAString & presentationId, nsIPresentationControlChannel *controlChannel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationDeviceListener, NS_IPRESENTATIONDEVICELISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONDEVICELISTENER \
  NS_IMETHOD AddDevice(nsIPresentationDevice *device) override; \
  NS_IMETHOD RemoveDevice(nsIPresentationDevice *device) override; \
  NS_IMETHOD UpdateDevice(nsIPresentationDevice *device) override; \
  NS_IMETHOD OnSessionRequest(nsIPresentationDevice *device, const nsAString & url, const nsAString & presentationId, nsIPresentationControlChannel *controlChannel) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONDEVICELISTENER \
  NS_METHOD AddDevice(nsIPresentationDevice *device); \
  NS_METHOD RemoveDevice(nsIPresentationDevice *device); \
  NS_METHOD UpdateDevice(nsIPresentationDevice *device); \
  NS_METHOD OnSessionRequest(nsIPresentationDevice *device, const nsAString & url, const nsAString & presentationId, nsIPresentationControlChannel *controlChannel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONDEVICELISTENER(_to) \
  NS_IMETHOD AddDevice(nsIPresentationDevice *device) override { return _to AddDevice(device); } \
  NS_IMETHOD RemoveDevice(nsIPresentationDevice *device) override { return _to RemoveDevice(device); } \
  NS_IMETHOD UpdateDevice(nsIPresentationDevice *device) override { return _to UpdateDevice(device); } \
  NS_IMETHOD OnSessionRequest(nsIPresentationDevice *device, const nsAString & url, const nsAString & presentationId, nsIPresentationControlChannel *controlChannel) override { return _to OnSessionRequest(device, url, presentationId, controlChannel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONDEVICELISTENER(_to) \
  NS_IMETHOD AddDevice(nsIPresentationDevice *device) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDevice(device); } \
  NS_IMETHOD RemoveDevice(nsIPresentationDevice *device) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDevice(device); } \
  NS_IMETHOD UpdateDevice(nsIPresentationDevice *device) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateDevice(device); } \
  NS_IMETHOD OnSessionRequest(nsIPresentationDevice *device, const nsAString & url, const nsAString & presentationId, nsIPresentationControlChannel *controlChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnSessionRequest(device, url, presentationId, controlChannel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationDeviceListener : public nsIPresentationDeviceListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONDEVICELISTENER

  nsPresentationDeviceListener();

private:
  ~nsPresentationDeviceListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationDeviceListener, nsIPresentationDeviceListener)

nsPresentationDeviceListener::nsPresentationDeviceListener()
{
  /* member initializers and constructor code */
}

nsPresentationDeviceListener::~nsPresentationDeviceListener()
{
  /* destructor code */
}

/* void addDevice (in nsIPresentationDevice device); */
NS_IMETHODIMP nsPresentationDeviceListener::AddDevice(nsIPresentationDevice *device)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeDevice (in nsIPresentationDevice device); */
NS_IMETHODIMP nsPresentationDeviceListener::RemoveDevice(nsIPresentationDevice *device)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateDevice (in nsIPresentationDevice device); */
NS_IMETHODIMP nsPresentationDeviceListener::UpdateDevice(nsIPresentationDevice *device)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onSessionRequest (in nsIPresentationDevice device, in DOMString url, in DOMString presentationId, in nsIPresentationControlChannel controlChannel); */
NS_IMETHODIMP nsPresentationDeviceListener::OnSessionRequest(nsIPresentationDevice *device, const nsAString & url, const nsAString & presentationId, nsIPresentationControlChannel *controlChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPresentationDeviceProvider */
#define NS_IPRESENTATIONDEVICEPROVIDER_IID_STR "3db2578a-0f50-44ad-b01b-28427b71b7bf"

#define NS_IPRESENTATIONDEVICEPROVIDER_IID \
  {0x3db2578a, 0x0f50, 0x44ad, \
    { 0xb0, 0x1b, 0x28, 0x42, 0x7b, 0x71, 0xb7, 0xbf }}

class NS_NO_VTABLE nsIPresentationDeviceProvider : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONDEVICEPROVIDER_IID)

  /* attribute nsIPresentationDeviceListener listener; */
  NS_IMETHOD GetListener(nsIPresentationDeviceListener * *aListener) = 0;
  NS_IMETHOD SetListener(nsIPresentationDeviceListener *aListener) = 0;

  /* void forceDiscovery (); */
  NS_IMETHOD ForceDiscovery(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationDeviceProvider, NS_IPRESENTATIONDEVICEPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONDEVICEPROVIDER \
  NS_IMETHOD GetListener(nsIPresentationDeviceListener * *aListener) override; \
  NS_IMETHOD SetListener(nsIPresentationDeviceListener *aListener) override; \
  NS_IMETHOD ForceDiscovery(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONDEVICEPROVIDER \
  NS_METHOD GetListener(nsIPresentationDeviceListener * *aListener); \
  NS_METHOD SetListener(nsIPresentationDeviceListener *aListener); \
  NS_METHOD ForceDiscovery(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONDEVICEPROVIDER(_to) \
  NS_IMETHOD GetListener(nsIPresentationDeviceListener * *aListener) override { return _to GetListener(aListener); } \
  NS_IMETHOD SetListener(nsIPresentationDeviceListener *aListener) override { return _to SetListener(aListener); } \
  NS_IMETHOD ForceDiscovery(void) override { return _to ForceDiscovery(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONDEVICEPROVIDER(_to) \
  NS_IMETHOD GetListener(nsIPresentationDeviceListener * *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListener(aListener); } \
  NS_IMETHOD SetListener(nsIPresentationDeviceListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetListener(aListener); } \
  NS_IMETHOD ForceDiscovery(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceDiscovery(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationDeviceProvider : public nsIPresentationDeviceProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONDEVICEPROVIDER

  nsPresentationDeviceProvider();

private:
  ~nsPresentationDeviceProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationDeviceProvider, nsIPresentationDeviceProvider)

nsPresentationDeviceProvider::nsPresentationDeviceProvider()
{
  /* member initializers and constructor code */
}

nsPresentationDeviceProvider::~nsPresentationDeviceProvider()
{
  /* destructor code */
}

/* attribute nsIPresentationDeviceListener listener; */
NS_IMETHODIMP nsPresentationDeviceProvider::GetListener(nsIPresentationDeviceListener * *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPresentationDeviceProvider::SetListener(nsIPresentationDeviceListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void forceDiscovery (); */
NS_IMETHODIMP nsPresentationDeviceProvider::ForceDiscovery()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPresentationDeviceProvider_h__ */
