/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebSocketEventService.idl
 */

#ifndef __gen_nsIWebSocketEventService_h__
#define __gen_nsIWebSocketEventService_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIWebSocketFrame */
#define NS_IWEBSOCKETFRAME_IID_STR "6714a6be-2265-4f73-a988-d78a12416037"

#define NS_IWEBSOCKETFRAME_IID \
  {0x6714a6be, 0x2265, 0x4f73, \
    { 0xa9, 0x88, 0xd7, 0x8a, 0x12, 0x41, 0x60, 0x37 }}

class NS_NO_VTABLE nsIWebSocketFrame : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBSOCKETFRAME_IID)

  /* readonly attribute DOMHighResTimeStamp timeStamp; */
  NS_IMETHOD GetTimeStamp(DOMHighResTimeStamp *aTimeStamp) = 0;

  /* readonly attribute boolean finBit; */
  NS_IMETHOD GetFinBit(bool *aFinBit) = 0;

  /* readonly attribute boolean rsvBit1; */
  NS_IMETHOD GetRsvBit1(bool *aRsvBit1) = 0;

  /* readonly attribute boolean rsvBit2; */
  NS_IMETHOD GetRsvBit2(bool *aRsvBit2) = 0;

  /* readonly attribute boolean rsvBit3; */
  NS_IMETHOD GetRsvBit3(bool *aRsvBit3) = 0;

  /* readonly attribute unsigned short opCode; */
  NS_IMETHOD GetOpCode(uint16_t *aOpCode) = 0;

  /* readonly attribute boolean maskBit; */
  NS_IMETHOD GetMaskBit(bool *aMaskBit) = 0;

  /* readonly attribute unsigned long mask; */
  NS_IMETHOD GetMask(uint32_t *aMask) = 0;

  /* readonly attribute ACString payload; */
  NS_IMETHOD GetPayload(nsACString & aPayload) = 0;

  enum {
    OPCODE_CONTINUATION = 0U,
    OPCODE_TEXT = 1U,
    OPCODE_BINARY = 2U,
    OPCODE_CLOSE = 8U,
    OPCODE_PING = 9U,
    OPCODE_PONG = 10U
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebSocketFrame, NS_IWEBSOCKETFRAME_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBSOCKETFRAME \
  NS_IMETHOD GetTimeStamp(DOMHighResTimeStamp *aTimeStamp) override; \
  NS_IMETHOD GetFinBit(bool *aFinBit) override; \
  NS_IMETHOD GetRsvBit1(bool *aRsvBit1) override; \
  NS_IMETHOD GetRsvBit2(bool *aRsvBit2) override; \
  NS_IMETHOD GetRsvBit3(bool *aRsvBit3) override; \
  NS_IMETHOD GetOpCode(uint16_t *aOpCode) override; \
  NS_IMETHOD GetMaskBit(bool *aMaskBit) override; \
  NS_IMETHOD GetMask(uint32_t *aMask) override; \
  NS_IMETHOD GetPayload(nsACString & aPayload) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBSOCKETFRAME \
  NS_METHOD GetTimeStamp(DOMHighResTimeStamp *aTimeStamp); \
  NS_METHOD GetFinBit(bool *aFinBit); \
  NS_METHOD GetRsvBit1(bool *aRsvBit1); \
  NS_METHOD GetRsvBit2(bool *aRsvBit2); \
  NS_METHOD GetRsvBit3(bool *aRsvBit3); \
  NS_METHOD GetOpCode(uint16_t *aOpCode); \
  NS_METHOD GetMaskBit(bool *aMaskBit); \
  NS_METHOD GetMask(uint32_t *aMask); \
  NS_METHOD GetPayload(nsACString & aPayload); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBSOCKETFRAME(_to) \
  NS_IMETHOD GetTimeStamp(DOMHighResTimeStamp *aTimeStamp) override { return _to GetTimeStamp(aTimeStamp); } \
  NS_IMETHOD GetFinBit(bool *aFinBit) override { return _to GetFinBit(aFinBit); } \
  NS_IMETHOD GetRsvBit1(bool *aRsvBit1) override { return _to GetRsvBit1(aRsvBit1); } \
  NS_IMETHOD GetRsvBit2(bool *aRsvBit2) override { return _to GetRsvBit2(aRsvBit2); } \
  NS_IMETHOD GetRsvBit3(bool *aRsvBit3) override { return _to GetRsvBit3(aRsvBit3); } \
  NS_IMETHOD GetOpCode(uint16_t *aOpCode) override { return _to GetOpCode(aOpCode); } \
  NS_IMETHOD GetMaskBit(bool *aMaskBit) override { return _to GetMaskBit(aMaskBit); } \
  NS_IMETHOD GetMask(uint32_t *aMask) override { return _to GetMask(aMask); } \
  NS_IMETHOD GetPayload(nsACString & aPayload) override { return _to GetPayload(aPayload); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBSOCKETFRAME(_to) \
  NS_IMETHOD GetTimeStamp(DOMHighResTimeStamp *aTimeStamp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeStamp(aTimeStamp); } \
  NS_IMETHOD GetFinBit(bool *aFinBit) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFinBit(aFinBit); } \
  NS_IMETHOD GetRsvBit1(bool *aRsvBit1) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRsvBit1(aRsvBit1); } \
  NS_IMETHOD GetRsvBit2(bool *aRsvBit2) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRsvBit2(aRsvBit2); } \
  NS_IMETHOD GetRsvBit3(bool *aRsvBit3) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRsvBit3(aRsvBit3); } \
  NS_IMETHOD GetOpCode(uint16_t *aOpCode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOpCode(aOpCode); } \
  NS_IMETHOD GetMaskBit(bool *aMaskBit) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaskBit(aMaskBit); } \
  NS_IMETHOD GetMask(uint32_t *aMask) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMask(aMask); } \
  NS_IMETHOD GetPayload(nsACString & aPayload) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPayload(aPayload); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebSocketFrame : public nsIWebSocketFrame
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBSOCKETFRAME

  nsWebSocketFrame();

private:
  ~nsWebSocketFrame();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebSocketFrame, nsIWebSocketFrame)

nsWebSocketFrame::nsWebSocketFrame()
{
  /* member initializers and constructor code */
}

nsWebSocketFrame::~nsWebSocketFrame()
{
  /* destructor code */
}

/* readonly attribute DOMHighResTimeStamp timeStamp; */
NS_IMETHODIMP nsWebSocketFrame::GetTimeStamp(DOMHighResTimeStamp *aTimeStamp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean finBit; */
NS_IMETHODIMP nsWebSocketFrame::GetFinBit(bool *aFinBit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean rsvBit1; */
NS_IMETHODIMP nsWebSocketFrame::GetRsvBit1(bool *aRsvBit1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean rsvBit2; */
NS_IMETHODIMP nsWebSocketFrame::GetRsvBit2(bool *aRsvBit2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean rsvBit3; */
NS_IMETHODIMP nsWebSocketFrame::GetRsvBit3(bool *aRsvBit3)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short opCode; */
NS_IMETHODIMP nsWebSocketFrame::GetOpCode(uint16_t *aOpCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean maskBit; */
NS_IMETHODIMP nsWebSocketFrame::GetMaskBit(bool *aMaskBit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long mask; */
NS_IMETHODIMP nsWebSocketFrame::GetMask(uint32_t *aMask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString payload; */
NS_IMETHODIMP nsWebSocketFrame::GetPayload(nsACString & aPayload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebSocketEventListener */
#define NS_IWEBSOCKETEVENTLISTENER_IID_STR "e7c005ab-e694-489b-b741-96db43ffb16f"

#define NS_IWEBSOCKETEVENTLISTENER_IID \
  {0xe7c005ab, 0xe694, 0x489b, \
    { 0xb7, 0x41, 0x96, 0xdb, 0x43, 0xff, 0xb1, 0x6f }}

class NS_NO_VTABLE nsIWebSocketEventListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBSOCKETEVENTLISTENER_IID)

  /* void webSocketCreated (in unsigned long aWebSocketSerialID, in AString aURI, in ACString aProtocols); */
  NS_IMETHOD WebSocketCreated(uint32_t aWebSocketSerialID, const nsAString & aURI, const nsACString & aProtocols) = 0;

  /* void webSocketOpened (in unsigned long aWebSocketSerialID, in AString aEffectiveURI, in ACString aProtocols, in ACString aExtensions); */
  NS_IMETHOD WebSocketOpened(uint32_t aWebSocketSerialID, const nsAString & aEffectiveURI, const nsACString & aProtocols, const nsACString & aExtensions) = 0;

  enum {
    TYPE_STRING = 0U,
    TYPE_BLOB = 1U,
    TYPE_ARRAYBUFFER = 2U
  };

  /* void webSocketMessageAvailable (in unsigned long aWebSocketSerialID, in ACString aMessage, in unsigned short aType); */
  NS_IMETHOD WebSocketMessageAvailable(uint32_t aWebSocketSerialID, const nsACString & aMessage, uint16_t aType) = 0;

  /* void webSocketClosed (in unsigned long aWebSocketSerialID, in boolean aWasClean, in unsigned short aCode, in AString aReason); */
  NS_IMETHOD WebSocketClosed(uint32_t aWebSocketSerialID, bool aWasClean, uint16_t aCode, const nsAString & aReason) = 0;

  /* void frameReceived (in unsigned long aWebSocketSerialID, in nsIWebSocketFrame aFrame); */
  NS_IMETHOD FrameReceived(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) = 0;

  /* void frameSent (in unsigned long aWebSocketSerialID, in nsIWebSocketFrame aFrame); */
  NS_IMETHOD FrameSent(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebSocketEventListener, NS_IWEBSOCKETEVENTLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBSOCKETEVENTLISTENER \
  NS_IMETHOD WebSocketCreated(uint32_t aWebSocketSerialID, const nsAString & aURI, const nsACString & aProtocols) override; \
  NS_IMETHOD WebSocketOpened(uint32_t aWebSocketSerialID, const nsAString & aEffectiveURI, const nsACString & aProtocols, const nsACString & aExtensions) override; \
  NS_IMETHOD WebSocketMessageAvailable(uint32_t aWebSocketSerialID, const nsACString & aMessage, uint16_t aType) override; \
  NS_IMETHOD WebSocketClosed(uint32_t aWebSocketSerialID, bool aWasClean, uint16_t aCode, const nsAString & aReason) override; \
  NS_IMETHOD FrameReceived(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) override; \
  NS_IMETHOD FrameSent(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBSOCKETEVENTLISTENER \
  NS_METHOD WebSocketCreated(uint32_t aWebSocketSerialID, const nsAString & aURI, const nsACString & aProtocols); \
  NS_METHOD WebSocketOpened(uint32_t aWebSocketSerialID, const nsAString & aEffectiveURI, const nsACString & aProtocols, const nsACString & aExtensions); \
  NS_METHOD WebSocketMessageAvailable(uint32_t aWebSocketSerialID, const nsACString & aMessage, uint16_t aType); \
  NS_METHOD WebSocketClosed(uint32_t aWebSocketSerialID, bool aWasClean, uint16_t aCode, const nsAString & aReason); \
  NS_METHOD FrameReceived(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame); \
  NS_METHOD FrameSent(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBSOCKETEVENTLISTENER(_to) \
  NS_IMETHOD WebSocketCreated(uint32_t aWebSocketSerialID, const nsAString & aURI, const nsACString & aProtocols) override { return _to WebSocketCreated(aWebSocketSerialID, aURI, aProtocols); } \
  NS_IMETHOD WebSocketOpened(uint32_t aWebSocketSerialID, const nsAString & aEffectiveURI, const nsACString & aProtocols, const nsACString & aExtensions) override { return _to WebSocketOpened(aWebSocketSerialID, aEffectiveURI, aProtocols, aExtensions); } \
  NS_IMETHOD WebSocketMessageAvailable(uint32_t aWebSocketSerialID, const nsACString & aMessage, uint16_t aType) override { return _to WebSocketMessageAvailable(aWebSocketSerialID, aMessage, aType); } \
  NS_IMETHOD WebSocketClosed(uint32_t aWebSocketSerialID, bool aWasClean, uint16_t aCode, const nsAString & aReason) override { return _to WebSocketClosed(aWebSocketSerialID, aWasClean, aCode, aReason); } \
  NS_IMETHOD FrameReceived(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) override { return _to FrameReceived(aWebSocketSerialID, aFrame); } \
  NS_IMETHOD FrameSent(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) override { return _to FrameSent(aWebSocketSerialID, aFrame); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBSOCKETEVENTLISTENER(_to) \
  NS_IMETHOD WebSocketCreated(uint32_t aWebSocketSerialID, const nsAString & aURI, const nsACString & aProtocols) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WebSocketCreated(aWebSocketSerialID, aURI, aProtocols); } \
  NS_IMETHOD WebSocketOpened(uint32_t aWebSocketSerialID, const nsAString & aEffectiveURI, const nsACString & aProtocols, const nsACString & aExtensions) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WebSocketOpened(aWebSocketSerialID, aEffectiveURI, aProtocols, aExtensions); } \
  NS_IMETHOD WebSocketMessageAvailable(uint32_t aWebSocketSerialID, const nsACString & aMessage, uint16_t aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WebSocketMessageAvailable(aWebSocketSerialID, aMessage, aType); } \
  NS_IMETHOD WebSocketClosed(uint32_t aWebSocketSerialID, bool aWasClean, uint16_t aCode, const nsAString & aReason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WebSocketClosed(aWebSocketSerialID, aWasClean, aCode, aReason); } \
  NS_IMETHOD FrameReceived(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FrameReceived(aWebSocketSerialID, aFrame); } \
  NS_IMETHOD FrameSent(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FrameSent(aWebSocketSerialID, aFrame); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebSocketEventListener : public nsIWebSocketEventListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBSOCKETEVENTLISTENER

  nsWebSocketEventListener();

private:
  ~nsWebSocketEventListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebSocketEventListener, nsIWebSocketEventListener)

nsWebSocketEventListener::nsWebSocketEventListener()
{
  /* member initializers and constructor code */
}

nsWebSocketEventListener::~nsWebSocketEventListener()
{
  /* destructor code */
}

/* void webSocketCreated (in unsigned long aWebSocketSerialID, in AString aURI, in ACString aProtocols); */
NS_IMETHODIMP nsWebSocketEventListener::WebSocketCreated(uint32_t aWebSocketSerialID, const nsAString & aURI, const nsACString & aProtocols)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void webSocketOpened (in unsigned long aWebSocketSerialID, in AString aEffectiveURI, in ACString aProtocols, in ACString aExtensions); */
NS_IMETHODIMP nsWebSocketEventListener::WebSocketOpened(uint32_t aWebSocketSerialID, const nsAString & aEffectiveURI, const nsACString & aProtocols, const nsACString & aExtensions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void webSocketMessageAvailable (in unsigned long aWebSocketSerialID, in ACString aMessage, in unsigned short aType); */
NS_IMETHODIMP nsWebSocketEventListener::WebSocketMessageAvailable(uint32_t aWebSocketSerialID, const nsACString & aMessage, uint16_t aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void webSocketClosed (in unsigned long aWebSocketSerialID, in boolean aWasClean, in unsigned short aCode, in AString aReason); */
NS_IMETHODIMP nsWebSocketEventListener::WebSocketClosed(uint32_t aWebSocketSerialID, bool aWasClean, uint16_t aCode, const nsAString & aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void frameReceived (in unsigned long aWebSocketSerialID, in nsIWebSocketFrame aFrame); */
NS_IMETHODIMP nsWebSocketEventListener::FrameReceived(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void frameSent (in unsigned long aWebSocketSerialID, in nsIWebSocketFrame aFrame); */
NS_IMETHODIMP nsWebSocketEventListener::FrameSent(uint32_t aWebSocketSerialID, nsIWebSocketFrame *aFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebSocketEventService */
#define NS_IWEBSOCKETEVENTSERVICE_IID_STR "b89d1b90-2cf3-4d8f-ac21-5aedfb25c760"

#define NS_IWEBSOCKETEVENTSERVICE_IID \
  {0xb89d1b90, 0x2cf3, 0x4d8f, \
    { 0xac, 0x21, 0x5a, 0xed, 0xfb, 0x25, 0xc7, 0x60 }}

class NS_NO_VTABLE nsIWebSocketEventService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBSOCKETEVENTSERVICE_IID)

  /* void addListener (in unsigned long long aInnerWindowID, in nsIWebSocketEventListener aListener); */
  NS_IMETHOD AddListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) = 0;

  /* void removeListener (in unsigned long long aInnerWindowID, in nsIWebSocketEventListener aListener); */
  NS_IMETHOD RemoveListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebSocketEventService, NS_IWEBSOCKETEVENTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBSOCKETEVENTSERVICE \
  NS_IMETHOD AddListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) override; \
  NS_IMETHOD RemoveListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBSOCKETEVENTSERVICE \
  NS_METHOD AddListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener); \
  NS_METHOD RemoveListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBSOCKETEVENTSERVICE(_to) \
  NS_IMETHOD AddListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) override { return _to AddListener(aInnerWindowID, aListener); } \
  NS_IMETHOD RemoveListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) override { return _to RemoveListener(aInnerWindowID, aListener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBSOCKETEVENTSERVICE(_to) \
  NS_IMETHOD AddListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(aInnerWindowID, aListener); } \
  NS_IMETHOD RemoveListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(aInnerWindowID, aListener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebSocketEventService : public nsIWebSocketEventService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBSOCKETEVENTSERVICE

  nsWebSocketEventService();

private:
  ~nsWebSocketEventService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebSocketEventService, nsIWebSocketEventService)

nsWebSocketEventService::nsWebSocketEventService()
{
  /* member initializers and constructor code */
}

nsWebSocketEventService::~nsWebSocketEventService()
{
  /* destructor code */
}

/* void addListener (in unsigned long long aInnerWindowID, in nsIWebSocketEventListener aListener); */
NS_IMETHODIMP nsWebSocketEventService::AddListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListener (in unsigned long long aInnerWindowID, in nsIWebSocketEventListener aListener); */
NS_IMETHODIMP nsWebSocketEventService::RemoveListener(uint64_t aInnerWindowID, nsIWebSocketEventListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebSocketEventService_h__ */
