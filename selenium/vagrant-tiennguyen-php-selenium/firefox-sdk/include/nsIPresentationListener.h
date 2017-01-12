/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPresentationListener.idl
 */

#ifndef __gen_nsIPresentationListener_h__
#define __gen_nsIPresentationListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPresentationAvailabilityListener */
#define NS_IPRESENTATIONAVAILABILITYLISTENER_IID_STR "0105f837-4279-4715-9d5b-2dc3f8b65353"

#define NS_IPRESENTATIONAVAILABILITYLISTENER_IID \
  {0x0105f837, 0x4279, 0x4715, \
    { 0x9d, 0x5b, 0x2d, 0xc3, 0xf8, 0xb6, 0x53, 0x53 }}

class NS_NO_VTABLE nsIPresentationAvailabilityListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONAVAILABILITYLISTENER_IID)

  /* void notifyAvailableChange (in bool available); */
  NS_IMETHOD NotifyAvailableChange(bool available) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationAvailabilityListener, NS_IPRESENTATIONAVAILABILITYLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONAVAILABILITYLISTENER \
  NS_IMETHOD NotifyAvailableChange(bool available) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONAVAILABILITYLISTENER \
  NS_METHOD NotifyAvailableChange(bool available); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONAVAILABILITYLISTENER(_to) \
  NS_IMETHOD NotifyAvailableChange(bool available) override { return _to NotifyAvailableChange(available); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONAVAILABILITYLISTENER(_to) \
  NS_IMETHOD NotifyAvailableChange(bool available) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyAvailableChange(available); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationAvailabilityListener : public nsIPresentationAvailabilityListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONAVAILABILITYLISTENER

  nsPresentationAvailabilityListener();

private:
  ~nsPresentationAvailabilityListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationAvailabilityListener, nsIPresentationAvailabilityListener)

nsPresentationAvailabilityListener::nsPresentationAvailabilityListener()
{
  /* member initializers and constructor code */
}

nsPresentationAvailabilityListener::~nsPresentationAvailabilityListener()
{
  /* destructor code */
}

/* void notifyAvailableChange (in bool available); */
NS_IMETHODIMP nsPresentationAvailabilityListener::NotifyAvailableChange(bool available)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPresentationSessionListener */
#define NS_IPRESENTATIONSESSIONLISTENER_IID_STR "7dd48df8-8f8c-48c7-ac37-7b9fd1acf2f8"

#define NS_IPRESENTATIONSESSIONLISTENER_IID \
  {0x7dd48df8, 0x8f8c, 0x48c7, \
    { 0xac, 0x37, 0x7b, 0x9f, 0xd1, 0xac, 0xf2, 0xf8 }}

class NS_NO_VTABLE nsIPresentationSessionListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONSESSIONLISTENER_IID)

  enum {
    STATE_CONNECTED = 0U,
    STATE_CLOSED = 1U,
    STATE_TERMINATED = 2U
  };

  /* void notifyStateChange (in DOMString sessionId, in unsigned short state); */
  NS_IMETHOD NotifyStateChange(const nsAString & sessionId, uint16_t state) = 0;

  /* void notifyMessage (in DOMString sessionId, in ACString data); */
  NS_IMETHOD NotifyMessage(const nsAString & sessionId, const nsACString & data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationSessionListener, NS_IPRESENTATIONSESSIONLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONSESSIONLISTENER \
  NS_IMETHOD NotifyStateChange(const nsAString & sessionId, uint16_t state) override; \
  NS_IMETHOD NotifyMessage(const nsAString & sessionId, const nsACString & data) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONSESSIONLISTENER \
  NS_METHOD NotifyStateChange(const nsAString & sessionId, uint16_t state); \
  NS_METHOD NotifyMessage(const nsAString & sessionId, const nsACString & data); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONSESSIONLISTENER(_to) \
  NS_IMETHOD NotifyStateChange(const nsAString & sessionId, uint16_t state) override { return _to NotifyStateChange(sessionId, state); } \
  NS_IMETHOD NotifyMessage(const nsAString & sessionId, const nsACString & data) override { return _to NotifyMessage(sessionId, data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONSESSIONLISTENER(_to) \
  NS_IMETHOD NotifyStateChange(const nsAString & sessionId, uint16_t state) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyStateChange(sessionId, state); } \
  NS_IMETHOD NotifyMessage(const nsAString & sessionId, const nsACString & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyMessage(sessionId, data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationSessionListener : public nsIPresentationSessionListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONSESSIONLISTENER

  nsPresentationSessionListener();

private:
  ~nsPresentationSessionListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationSessionListener, nsIPresentationSessionListener)

nsPresentationSessionListener::nsPresentationSessionListener()
{
  /* member initializers and constructor code */
}

nsPresentationSessionListener::~nsPresentationSessionListener()
{
  /* destructor code */
}

/* void notifyStateChange (in DOMString sessionId, in unsigned short state); */
NS_IMETHODIMP nsPresentationSessionListener::NotifyStateChange(const nsAString & sessionId, uint16_t state)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyMessage (in DOMString sessionId, in ACString data); */
NS_IMETHODIMP nsPresentationSessionListener::NotifyMessage(const nsAString & sessionId, const nsACString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPresentationRespondingListener */
#define NS_IPRESENTATIONRESPONDINGLISTENER_IID_STR "27f101d7-9ed1-429e-b4f8-43b00e8e111c"

#define NS_IPRESENTATIONRESPONDINGLISTENER_IID \
  {0x27f101d7, 0x9ed1, 0x429e, \
    { 0xb4, 0xf8, 0x43, 0xb0, 0x0e, 0x8e, 0x11, 0x1c }}

class NS_NO_VTABLE nsIPresentationRespondingListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRESENTATIONRESPONDINGLISTENER_IID)

  /* void notifySessionConnect (in uint64_t windowId, in DOMString sessionId); */
  NS_IMETHOD NotifySessionConnect(uint64_t windowId, const nsAString & sessionId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPresentationRespondingListener, NS_IPRESENTATIONRESPONDINGLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRESENTATIONRESPONDINGLISTENER \
  NS_IMETHOD NotifySessionConnect(uint64_t windowId, const nsAString & sessionId) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRESENTATIONRESPONDINGLISTENER \
  NS_METHOD NotifySessionConnect(uint64_t windowId, const nsAString & sessionId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRESENTATIONRESPONDINGLISTENER(_to) \
  NS_IMETHOD NotifySessionConnect(uint64_t windowId, const nsAString & sessionId) override { return _to NotifySessionConnect(windowId, sessionId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRESENTATIONRESPONDINGLISTENER(_to) \
  NS_IMETHOD NotifySessionConnect(uint64_t windowId, const nsAString & sessionId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySessionConnect(windowId, sessionId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPresentationRespondingListener : public nsIPresentationRespondingListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRESENTATIONRESPONDINGLISTENER

  nsPresentationRespondingListener();

private:
  ~nsPresentationRespondingListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPresentationRespondingListener, nsIPresentationRespondingListener)

nsPresentationRespondingListener::nsPresentationRespondingListener()
{
  /* member initializers and constructor code */
}

nsPresentationRespondingListener::~nsPresentationRespondingListener()
{
  /* destructor code */
}

/* void notifySessionConnect (in uint64_t windowId, in DOMString sessionId); */
NS_IMETHODIMP nsPresentationRespondingListener::NotifySessionConnect(uint64_t windowId, const nsAString & sessionId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPresentationListener_h__ */
