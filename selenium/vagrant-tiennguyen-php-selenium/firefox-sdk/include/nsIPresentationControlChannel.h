/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPresentationControlChannel.idl
 */

#ifndef __gen_nsIPresentationControlChannel_h__
#define __gen_nsIPresentationControlChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIInputStream; /* forward declaration */


/* starting interface:    nsIPresentationChannelDescription */
#define NS_IPRESENTATIONCHANNELDESCRIPTION_IID_STR "ae318e05-2a4e-4f85-95c0-e8b191ad812c"

#define NS_IPRESENTATIONCHANNELDESCRIPTION_IID \
  {0xae318e05, 0x2a4e, 0x4f85, \
    { 0x95, 0xc0, 0xe8, 0xb1, 0x91, 0xad, 0x81, 0x2c }}

class NS_NO_VTABLE nsIPresentationChannelDescription : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONCHANNELDESCRIPTION_IID)

  enum {
    TYPE_TCP = 1U,
    TYPE_DATACHANNEL = 2U
  };

  /* readonly attribute uint8_t type; */
  NS_IMETHOD GetType(uint8_t *aType) = 0;

  /* readonly attribute nsIArray tcpAddress; */
  NS_IMETHOD GetTcpAddress(nsIArray * *aTcpAddress) = 0;

  /* readonly attribute uint16_t tcpPort; */
  NS_IMETHOD GetTcpPort(uint16_t *aTcpPort) = 0;

  /* readonly attribute DOMString dataChannelSDP; */
  NS_IMETHOD GetDataChannelSDP(nsAString & aDataChannelSDP) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationChannelDescription, NS_IPRESENTATIONCHANNELDESCRIPTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONCHANNELDESCRIPTION \
  NS_IMETHOD GetType(uint8_t *aType) override; \
  NS_IMETHOD GetTcpAddress(nsIArray * *aTcpAddress) override; \
  NS_IMETHOD GetTcpPort(uint16_t *aTcpPort) override; \
  NS_IMETHOD GetDataChannelSDP(nsAString & aDataChannelSDP) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONCHANNELDESCRIPTION \
  NS_METHOD GetType(uint8_t *aType); \
  NS_METHOD GetTcpAddress(nsIArray * *aTcpAddress); \
  NS_METHOD GetTcpPort(uint16_t *aTcpPort); \
  NS_METHOD GetDataChannelSDP(nsAString & aDataChannelSDP); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONCHANNELDESCRIPTION(_to) \
  NS_IMETHOD GetType(uint8_t *aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetTcpAddress(nsIArray * *aTcpAddress) override { return _to GetTcpAddress(aTcpAddress); } \
  NS_IMETHOD GetTcpPort(uint16_t *aTcpPort) override { return _to GetTcpPort(aTcpPort); } \
  NS_IMETHOD GetDataChannelSDP(nsAString & aDataChannelSDP) override { return _to GetDataChannelSDP(aDataChannelSDP); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONCHANNELDESCRIPTION(_to) \
  NS_IMETHOD GetType(uint8_t *aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetTcpAddress(nsIArray * *aTcpAddress) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTcpAddress(aTcpAddress); } \
  NS_IMETHOD GetTcpPort(uint16_t *aTcpPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTcpPort(aTcpPort); } \
  NS_IMETHOD GetDataChannelSDP(nsAString & aDataChannelSDP) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataChannelSDP(aDataChannelSDP); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationChannelDescription : public nsIPresentationChannelDescription
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONCHANNELDESCRIPTION

  nsPresentationChannelDescription();

private:
  ~nsPresentationChannelDescription();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationChannelDescription, nsIPresentationChannelDescription)

nsPresentationChannelDescription::nsPresentationChannelDescription()
{
  /* member initializers and constructor code */
}

nsPresentationChannelDescription::~nsPresentationChannelDescription()
{
  /* destructor code */
}

/* readonly attribute uint8_t type; */
NS_IMETHODIMP nsPresentationChannelDescription::GetType(uint8_t *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIArray tcpAddress; */
NS_IMETHODIMP nsPresentationChannelDescription::GetTcpAddress(nsIArray * *aTcpAddress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint16_t tcpPort; */
NS_IMETHODIMP nsPresentationChannelDescription::GetTcpPort(uint16_t *aTcpPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString dataChannelSDP; */
NS_IMETHODIMP nsPresentationChannelDescription::GetDataChannelSDP(nsAString & aDataChannelSDP)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPresentationControlChannelListener */
#define NS_IPRESENTATIONCONTROLCHANNELLISTENER_IID_STR "96dd548f-7d0f-43c1-b1ad-28e666cf1e82"

#define NS_IPRESENTATIONCONTROLCHANNELLISTENER_IID \
  {0x96dd548f, 0x7d0f, 0x43c1, \
    { 0xb1, 0xad, 0x28, 0xe6, 0x66, 0xcf, 0x1e, 0x82 }}

class NS_NO_VTABLE nsIPresentationControlChannelListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONCONTROLCHANNELLISTENER_IID)

  /* void onOffer (in nsIPresentationChannelDescription offer); */
  NS_IMETHOD OnOffer(nsIPresentationChannelDescription *offer) = 0;

  /* void onAnswer (in nsIPresentationChannelDescription answer); */
  NS_IMETHOD OnAnswer(nsIPresentationChannelDescription *answer) = 0;

  /* void onIceCandidate (in DOMString candidate); */
  NS_IMETHOD OnIceCandidate(const nsAString & candidate) = 0;

  /* void notifyOpened (); */
  NS_IMETHOD NotifyOpened(void) = 0;

  /* void notifyClosed (in nsresult reason); */
  NS_IMETHOD NotifyClosed(nsresult reason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationControlChannelListener, NS_IPRESENTATIONCONTROLCHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONCONTROLCHANNELLISTENER \
  NS_IMETHOD OnOffer(nsIPresentationChannelDescription *offer) override; \
  NS_IMETHOD OnAnswer(nsIPresentationChannelDescription *answer) override; \
  NS_IMETHOD OnIceCandidate(const nsAString & candidate) override; \
  NS_IMETHOD NotifyOpened(void) override; \
  NS_IMETHOD NotifyClosed(nsresult reason) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONCONTROLCHANNELLISTENER \
  NS_METHOD OnOffer(nsIPresentationChannelDescription *offer); \
  NS_METHOD OnAnswer(nsIPresentationChannelDescription *answer); \
  NS_METHOD OnIceCandidate(const nsAString & candidate); \
  NS_METHOD NotifyOpened(void); \
  NS_METHOD NotifyClosed(nsresult reason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONCONTROLCHANNELLISTENER(_to) \
  NS_IMETHOD OnOffer(nsIPresentationChannelDescription *offer) override { return _to OnOffer(offer); } \
  NS_IMETHOD OnAnswer(nsIPresentationChannelDescription *answer) override { return _to OnAnswer(answer); } \
  NS_IMETHOD OnIceCandidate(const nsAString & candidate) override { return _to OnIceCandidate(candidate); } \
  NS_IMETHOD NotifyOpened(void) override { return _to NotifyOpened(); } \
  NS_IMETHOD NotifyClosed(nsresult reason) override { return _to NotifyClosed(reason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONCONTROLCHANNELLISTENER(_to) \
  NS_IMETHOD OnOffer(nsIPresentationChannelDescription *offer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnOffer(offer); } \
  NS_IMETHOD OnAnswer(nsIPresentationChannelDescription *answer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnAnswer(answer); } \
  NS_IMETHOD OnIceCandidate(const nsAString & candidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnIceCandidate(candidate); } \
  NS_IMETHOD NotifyOpened(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyOpened(); } \
  NS_IMETHOD NotifyClosed(nsresult reason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyClosed(reason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationControlChannelListener : public nsIPresentationControlChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONCONTROLCHANNELLISTENER

  nsPresentationControlChannelListener();

private:
  ~nsPresentationControlChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationControlChannelListener, nsIPresentationControlChannelListener)

nsPresentationControlChannelListener::nsPresentationControlChannelListener()
{
  /* member initializers and constructor code */
}

nsPresentationControlChannelListener::~nsPresentationControlChannelListener()
{
  /* destructor code */
}

/* void onOffer (in nsIPresentationChannelDescription offer); */
NS_IMETHODIMP nsPresentationControlChannelListener::OnOffer(nsIPresentationChannelDescription *offer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onAnswer (in nsIPresentationChannelDescription answer); */
NS_IMETHODIMP nsPresentationControlChannelListener::OnAnswer(nsIPresentationChannelDescription *answer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onIceCandidate (in DOMString candidate); */
NS_IMETHODIMP nsPresentationControlChannelListener::OnIceCandidate(const nsAString & candidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyOpened (); */
NS_IMETHODIMP nsPresentationControlChannelListener::NotifyOpened()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyClosed (in nsresult reason); */
NS_IMETHODIMP nsPresentationControlChannelListener::NotifyClosed(nsresult reason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPresentationControlChannel */
#define NS_IPRESENTATIONCONTROLCHANNEL_IID_STR "e60e208c-a9f5-4bc6-9a3e-47f3e4ae9c57"

#define NS_IPRESENTATIONCONTROLCHANNEL_IID \
  {0xe60e208c, 0xa9f5, 0x4bc6, \
    { 0x9a, 0x3e, 0x47, 0xf3, 0xe4, 0xae, 0x9c, 0x57 }}

class NS_NO_VTABLE nsIPresentationControlChannel : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONCONTROLCHANNEL_IID)

  /* attribute nsIPresentationControlChannelListener listener; */
  NS_IMETHOD GetListener(nsIPresentationControlChannelListener * *aListener) = 0;
  NS_IMETHOD SetListener(nsIPresentationControlChannelListener *aListener) = 0;

  /* void sendOffer (in nsIPresentationChannelDescription offer); */
  NS_IMETHOD SendOffer(nsIPresentationChannelDescription *offer) = 0;

  /* void sendAnswer (in nsIPresentationChannelDescription answer); */
  NS_IMETHOD SendAnswer(nsIPresentationChannelDescription *answer) = 0;

  /* void sendIceCandidate (in DOMString candidate); */
  NS_IMETHOD SendIceCandidate(const nsAString & candidate) = 0;

  /* void close (in nsresult reason); */
  NS_IMETHOD Close(nsresult reason) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationControlChannel, NS_IPRESENTATIONCONTROLCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONCONTROLCHANNEL \
  NS_IMETHOD GetListener(nsIPresentationControlChannelListener * *aListener) override; \
  NS_IMETHOD SetListener(nsIPresentationControlChannelListener *aListener) override; \
  NS_IMETHOD SendOffer(nsIPresentationChannelDescription *offer) override; \
  NS_IMETHOD SendAnswer(nsIPresentationChannelDescription *answer) override; \
  NS_IMETHOD SendIceCandidate(const nsAString & candidate) override; \
  NS_IMETHOD Close(nsresult reason) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONCONTROLCHANNEL \
  NS_METHOD GetListener(nsIPresentationControlChannelListener * *aListener); \
  NS_METHOD SetListener(nsIPresentationControlChannelListener *aListener); \
  NS_METHOD SendOffer(nsIPresentationChannelDescription *offer); \
  NS_METHOD SendAnswer(nsIPresentationChannelDescription *answer); \
  NS_METHOD SendIceCandidate(const nsAString & candidate); \
  NS_METHOD Close(nsresult reason); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONCONTROLCHANNEL(_to) \
  NS_IMETHOD GetListener(nsIPresentationControlChannelListener * *aListener) override { return _to GetListener(aListener); } \
  NS_IMETHOD SetListener(nsIPresentationControlChannelListener *aListener) override { return _to SetListener(aListener); } \
  NS_IMETHOD SendOffer(nsIPresentationChannelDescription *offer) override { return _to SendOffer(offer); } \
  NS_IMETHOD SendAnswer(nsIPresentationChannelDescription *answer) override { return _to SendAnswer(answer); } \
  NS_IMETHOD SendIceCandidate(const nsAString & candidate) override { return _to SendIceCandidate(candidate); } \
  NS_IMETHOD Close(nsresult reason) override { return _to Close(reason); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONCONTROLCHANNEL(_to) \
  NS_IMETHOD GetListener(nsIPresentationControlChannelListener * *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListener(aListener); } \
  NS_IMETHOD SetListener(nsIPresentationControlChannelListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetListener(aListener); } \
  NS_IMETHOD SendOffer(nsIPresentationChannelDescription *offer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendOffer(offer); } \
  NS_IMETHOD SendAnswer(nsIPresentationChannelDescription *answer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendAnswer(answer); } \
  NS_IMETHOD SendIceCandidate(const nsAString & candidate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendIceCandidate(candidate); } \
  NS_IMETHOD Close(nsresult reason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(reason); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationControlChannel : public nsIPresentationControlChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONCONTROLCHANNEL

  nsPresentationControlChannel();

private:
  ~nsPresentationControlChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationControlChannel, nsIPresentationControlChannel)

nsPresentationControlChannel::nsPresentationControlChannel()
{
  /* member initializers and constructor code */
}

nsPresentationControlChannel::~nsPresentationControlChannel()
{
  /* destructor code */
}

/* attribute nsIPresentationControlChannelListener listener; */
NS_IMETHODIMP nsPresentationControlChannel::GetListener(nsIPresentationControlChannelListener * *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPresentationControlChannel::SetListener(nsIPresentationControlChannelListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendOffer (in nsIPresentationChannelDescription offer); */
NS_IMETHODIMP nsPresentationControlChannel::SendOffer(nsIPresentationChannelDescription *offer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendAnswer (in nsIPresentationChannelDescription answer); */
NS_IMETHODIMP nsPresentationControlChannel::SendAnswer(nsIPresentationChannelDescription *answer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendIceCandidate (in DOMString candidate); */
NS_IMETHODIMP nsPresentationControlChannel::SendIceCandidate(const nsAString & candidate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (in nsresult reason); */
NS_IMETHODIMP nsPresentationControlChannel::Close(nsresult reason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPresentationControlChannel_h__ */
