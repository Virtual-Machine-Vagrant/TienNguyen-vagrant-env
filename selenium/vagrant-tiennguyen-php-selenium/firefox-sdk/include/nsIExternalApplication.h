/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIExternalApplication.idl
 */

#ifndef __gen_nsIExternalApplication_h__
#define __gen_nsIExternalApplication_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsPIDOMWindowInner; /* forward declaration */


/* starting interface:    nsICustomEventDispatch */
#define NS_ICUSTOMEVENTDISPATCH_IID_STR "adf6b501-609a-4f54-ac16-39b54d6358b5"

#define NS_ICUSTOMEVENTDISPATCH_IID \
  {0xadf6b501, 0x609a, 0x4f54, \
    { 0xac, 0x16, 0x39, 0xb5, 0x4d, 0x63, 0x58, 0xb5 }}

class NS_NO_VTABLE nsICustomEventDispatch : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICUSTOMEVENTDISPATCH_IID)

  /* void dispatchExternalEvent (in AString data); */
  NS_IMETHOD DispatchExternalEvent(const nsAString & data) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICustomEventDispatch, NS_ICUSTOMEVENTDISPATCH_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICUSTOMEVENTDISPATCH \
  NS_IMETHOD DispatchExternalEvent(const nsAString & data) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICUSTOMEVENTDISPATCH \
  NS_METHOD DispatchExternalEvent(const nsAString & data); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICUSTOMEVENTDISPATCH(_to) \
  NS_IMETHOD DispatchExternalEvent(const nsAString & data) override { return _to DispatchExternalEvent(data); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICUSTOMEVENTDISPATCH(_to) \
  NS_IMETHOD DispatchExternalEvent(const nsAString & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DispatchExternalEvent(data); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCustomEventDispatch : public nsICustomEventDispatch
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICUSTOMEVENTDISPATCH

  nsCustomEventDispatch();

private:
  ~nsCustomEventDispatch();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCustomEventDispatch, nsICustomEventDispatch)

nsCustomEventDispatch::nsCustomEventDispatch()
{
  /* member initializers and constructor code */
}

nsCustomEventDispatch::~nsCustomEventDispatch()
{
  /* destructor code */
}

/* void dispatchExternalEvent (in AString data); */
NS_IMETHODIMP nsCustomEventDispatch::DispatchExternalEvent(const nsAString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsICustomPropertyBag */
#define NS_ICUSTOMPROPERTYBAG_IID_STR "4d797f32-a24d-4cbc-b608-1eb0fc8e442b"

#define NS_ICUSTOMPROPERTYBAG_IID \
  {0x4d797f32, 0xa24d, 0x4cbc, \
    { 0xb6, 0x08, 0x1e, 0xb0, 0xfc, 0x8e, 0x44, 0x2b }}

class NS_NO_VTABLE nsICustomPropertyBag : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICUSTOMPROPERTYBAG_IID)

  /* void setProperty (in AString name, in AString value); */
  NS_IMETHOD SetProperty(const nsAString & name, const nsAString & value) = 0;

  /* void removeProperty (in AString name); */
  NS_IMETHOD RemoveProperty(const nsAString & name) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICustomPropertyBag, NS_ICUSTOMPROPERTYBAG_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICUSTOMPROPERTYBAG \
  NS_IMETHOD SetProperty(const nsAString & name, const nsAString & value) override; \
  NS_IMETHOD RemoveProperty(const nsAString & name) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICUSTOMPROPERTYBAG \
  NS_METHOD SetProperty(const nsAString & name, const nsAString & value); \
  NS_METHOD RemoveProperty(const nsAString & name); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICUSTOMPROPERTYBAG(_to) \
  NS_IMETHOD SetProperty(const nsAString & name, const nsAString & value) override { return _to SetProperty(name, value); } \
  NS_IMETHOD RemoveProperty(const nsAString & name) override { return _to RemoveProperty(name); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICUSTOMPROPERTYBAG(_to) \
  NS_IMETHOD SetProperty(const nsAString & name, const nsAString & value) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProperty(name, value); } \
  NS_IMETHOD RemoveProperty(const nsAString & name) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveProperty(name); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCustomPropertyBag : public nsICustomPropertyBag
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICUSTOMPROPERTYBAG

  nsCustomPropertyBag();

private:
  ~nsCustomPropertyBag();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCustomPropertyBag, nsICustomPropertyBag)

nsCustomPropertyBag::nsCustomPropertyBag()
{
  /* member initializers and constructor code */
}

nsCustomPropertyBag::~nsCustomPropertyBag()
{
  /* destructor code */
}

/* void setProperty (in AString name, in AString value); */
NS_IMETHODIMP nsCustomPropertyBag::SetProperty(const nsAString & name, const nsAString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeProperty (in AString name); */
NS_IMETHODIMP nsCustomPropertyBag::RemoveProperty(const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIExternalApplication */
#define NS_IEXTERNALAPPLICATION_IID_STR "ce42a847-3926-473e-95e0-ed4a88977232"

#define NS_IEXTERNALAPPLICATION_IID \
  {0xce42a847, 0x3926, 0x473e, \
    { 0x95, 0xe0, 0xed, 0x4a, 0x88, 0x97, 0x72, 0x32 }}

class NS_NO_VTABLE nsIExternalApplication : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEXTERNALAPPLICATION_IID)

  /* void init (in nsPIDOMWindowInner window, in nsICustomPropertyBag bag, in nsICustomEventDispatch callback); */
  NS_IMETHOD Init(nsPIDOMWindowInner *window, nsICustomPropertyBag *bag, nsICustomEventDispatch *callback) = 0;

  /* void postMessage (in AString message); */
  NS_IMETHOD PostMessage(const nsAString & message) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIExternalApplication, NS_IEXTERNALAPPLICATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEXTERNALAPPLICATION \
  NS_IMETHOD Init(nsPIDOMWindowInner *window, nsICustomPropertyBag *bag, nsICustomEventDispatch *callback) override; \
  NS_IMETHOD PostMessage(const nsAString & message) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIEXTERNALAPPLICATION \
  NS_METHOD Init(nsPIDOMWindowInner *window, nsICustomPropertyBag *bag, nsICustomEventDispatch *callback); \
  NS_METHOD PostMessage(const nsAString & message); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEXTERNALAPPLICATION(_to) \
  NS_IMETHOD Init(nsPIDOMWindowInner *window, nsICustomPropertyBag *bag, nsICustomEventDispatch *callback) override { return _to Init(window, bag, callback); } \
  NS_IMETHOD PostMessage(const nsAString & message) override { return _to PostMessage(message); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEXTERNALAPPLICATION(_to) \
  NS_IMETHOD Init(nsPIDOMWindowInner *window, nsICustomPropertyBag *bag, nsICustomEventDispatch *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(window, bag, callback); } \
  NS_IMETHOD PostMessage(const nsAString & message) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PostMessage(message); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsExternalApplication : public nsIExternalApplication
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEXTERNALAPPLICATION

  nsExternalApplication();

private:
  ~nsExternalApplication();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsExternalApplication, nsIExternalApplication)

nsExternalApplication::nsExternalApplication()
{
  /* member initializers and constructor code */
}

nsExternalApplication::~nsExternalApplication()
{
  /* destructor code */
}

/* void init (in nsPIDOMWindowInner window, in nsICustomPropertyBag bag, in nsICustomEventDispatch callback); */
NS_IMETHODIMP nsExternalApplication::Init(nsPIDOMWindowInner *window, nsICustomPropertyBag *bag, nsICustomEventDispatch *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void postMessage (in AString message); */
NS_IMETHODIMP nsExternalApplication::PostMessage(const nsAString & message)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_EXTERNALAPP_CONTRACTID "@mozilla.org/externalapp;1"
#define NS_EXTERNALAPP_CID {0x8ec5dce2, 0x67e1, 0x49cd, {0xa0, 0x12, 0xf9, 0xfe, 0x32, 0x00, 0xd0, 0x8e}}

#endif /* __gen_nsIExternalApplication_h__ */
