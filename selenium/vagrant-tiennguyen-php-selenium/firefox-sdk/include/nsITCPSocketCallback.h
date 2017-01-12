/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsITCPSocketCallback.idl
 */

#ifndef __gen_nsITCPSocketCallback_h__
#define __gen_nsITCPSocketCallback_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
template<class T> class InfallibleTArray;

/* starting interface:    nsITCPSocketCallback */
#define NS_ITCPSOCKETCALLBACK_IID_STR "ac2c4b69-cb79-4767-b1ce-bcf62945cd39"

#define NS_ITCPSOCKETCALLBACK_IID \
  {0xac2c4b69, 0xcb79, 0x4767, \
    { 0xb1, 0xce, 0xbc, 0xf6, 0x29, 0x45, 0xcd, 0x39 }}

class NS_NO_VTABLE nsITCPSocketCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITCPSOCKETCALLBACK_IID)

  enum {
    BUFFER_SIZE = 65536U
  };

  /* void fireErrorEvent (in AString name, in AString type); */
  NS_IMETHOD FireErrorEvent(const nsAString & name, const nsAString & type) = 0;

  /* void fireDataStringEvent (in DOMString type, in ACString data); */
  NS_IMETHOD FireDataStringEvent(const nsAString & type, const nsACString & data) = 0;

  /* void fireDataArrayEvent (in DOMString type, [const] in nsUint8TArrayRef data); */
  NS_IMETHOD FireDataArrayEvent(const nsAString & type, const InfallibleTArray<uint8_t> & data) = 0;

  /* void fireDataEvent (in JSContextPtr cx, in DOMString type, in jsval data); */
  NS_IMETHOD FireDataEvent(JSContext *cx, const nsAString & type, JS::HandleValue data) = 0;

  /* void fireEvent (in DOMString type); */
  NS_IMETHOD FireEvent(const nsAString & type) = 0;

  /* void updateReadyState (in unsigned long readystate); */
  NS_IMETHOD UpdateReadyState(uint32_t readystate) = 0;

  /* void updateBufferedAmount (in uint32_t bufferedAmount, in uint32_t trackingNumber); */
  NS_IMETHOD UpdateBufferedAmount(uint32_t bufferedAmount, uint32_t trackingNumber) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITCPSocketCallback, NS_ITCPSOCKETCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITCPSOCKETCALLBACK \
  NS_IMETHOD FireErrorEvent(const nsAString & name, const nsAString & type) override; \
  NS_IMETHOD FireDataStringEvent(const nsAString & type, const nsACString & data) override; \
  NS_IMETHOD FireDataArrayEvent(const nsAString & type, const InfallibleTArray<uint8_t> & data) override; \
  NS_IMETHOD FireDataEvent(JSContext *cx, const nsAString & type, JS::HandleValue data) override; \
  NS_IMETHOD FireEvent(const nsAString & type) override; \
  NS_IMETHOD UpdateReadyState(uint32_t readystate) override; \
  NS_IMETHOD UpdateBufferedAmount(uint32_t bufferedAmount, uint32_t trackingNumber) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITCPSOCKETCALLBACK \
  NS_METHOD FireErrorEvent(const nsAString & name, const nsAString & type); \
  NS_METHOD FireDataStringEvent(const nsAString & type, const nsACString & data); \
  NS_METHOD FireDataArrayEvent(const nsAString & type, const InfallibleTArray<uint8_t> & data); \
  NS_METHOD FireDataEvent(JSContext *cx, const nsAString & type, JS::HandleValue data); \
  NS_METHOD FireEvent(const nsAString & type); \
  NS_METHOD UpdateReadyState(uint32_t readystate); \
  NS_METHOD UpdateBufferedAmount(uint32_t bufferedAmount, uint32_t trackingNumber); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITCPSOCKETCALLBACK(_to) \
  NS_IMETHOD FireErrorEvent(const nsAString & name, const nsAString & type) override { return _to FireErrorEvent(name, type); } \
  NS_IMETHOD FireDataStringEvent(const nsAString & type, const nsACString & data) override { return _to FireDataStringEvent(type, data); } \
  NS_IMETHOD FireDataArrayEvent(const nsAString & type, const InfallibleTArray<uint8_t> & data) override { return _to FireDataArrayEvent(type, data); } \
  NS_IMETHOD FireDataEvent(JSContext *cx, const nsAString & type, JS::HandleValue data) override { return _to FireDataEvent(cx, type, data); } \
  NS_IMETHOD FireEvent(const nsAString & type) override { return _to FireEvent(type); } \
  NS_IMETHOD UpdateReadyState(uint32_t readystate) override { return _to UpdateReadyState(readystate); } \
  NS_IMETHOD UpdateBufferedAmount(uint32_t bufferedAmount, uint32_t trackingNumber) override { return _to UpdateBufferedAmount(bufferedAmount, trackingNumber); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITCPSOCKETCALLBACK(_to) \
  NS_IMETHOD FireErrorEvent(const nsAString & name, const nsAString & type) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FireErrorEvent(name, type); } \
  NS_IMETHOD FireDataStringEvent(const nsAString & type, const nsACString & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FireDataStringEvent(type, data); } \
  NS_IMETHOD FireDataArrayEvent(const nsAString & type, const InfallibleTArray<uint8_t> & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FireDataArrayEvent(type, data); } \
  NS_IMETHOD FireDataEvent(JSContext *cx, const nsAString & type, JS::HandleValue data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FireDataEvent(cx, type, data); } \
  NS_IMETHOD FireEvent(const nsAString & type) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FireEvent(type); } \
  NS_IMETHOD UpdateReadyState(uint32_t readystate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateReadyState(readystate); } \
  NS_IMETHOD UpdateBufferedAmount(uint32_t bufferedAmount, uint32_t trackingNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateBufferedAmount(bufferedAmount, trackingNumber); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTCPSocketCallback : public nsITCPSocketCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITCPSOCKETCALLBACK

  nsTCPSocketCallback();

private:
  ~nsTCPSocketCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTCPSocketCallback, nsITCPSocketCallback)

nsTCPSocketCallback::nsTCPSocketCallback()
{
  /* member initializers and constructor code */
}

nsTCPSocketCallback::~nsTCPSocketCallback()
{
  /* destructor code */
}

/* void fireErrorEvent (in AString name, in AString type); */
NS_IMETHODIMP nsTCPSocketCallback::FireErrorEvent(const nsAString & name, const nsAString & type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void fireDataStringEvent (in DOMString type, in ACString data); */
NS_IMETHODIMP nsTCPSocketCallback::FireDataStringEvent(const nsAString & type, const nsACString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void fireDataArrayEvent (in DOMString type, [const] in nsUint8TArrayRef data); */
NS_IMETHODIMP nsTCPSocketCallback::FireDataArrayEvent(const nsAString & type, const InfallibleTArray<uint8_t> & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void fireDataEvent (in JSContextPtr cx, in DOMString type, in jsval data); */
NS_IMETHODIMP nsTCPSocketCallback::FireDataEvent(JSContext *cx, const nsAString & type, JS::HandleValue data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void fireEvent (in DOMString type); */
NS_IMETHODIMP nsTCPSocketCallback::FireEvent(const nsAString & type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateReadyState (in unsigned long readystate); */
NS_IMETHODIMP nsTCPSocketCallback::UpdateReadyState(uint32_t readystate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateBufferedAmount (in uint32_t bufferedAmount, in uint32_t trackingNumber); */
NS_IMETHODIMP nsTCPSocketCallback::UpdateBufferedAmount(uint32_t bufferedAmount, uint32_t trackingNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITCPSocketCallback_h__ */
