/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIApplicationChooser.idl
 */

#ifndef __gen_nsIApplicationChooser_h__
#define __gen_nsIApplicationChooser_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIMIMEInfo_h__
#include "nsIMIMEInfo.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsIApplicationChooserFinishedCallback */
#define NS_IAPPLICATIONCHOOSERFINISHEDCALLBACK_IID_STR "8144404d-e6c7-4861-bcca-47de912ee811"

#define NS_IAPPLICATIONCHOOSERFINISHEDCALLBACK_IID \
  {0x8144404d, 0xe6c7, 0x4861, \
    { 0xbc, 0xca, 0x47, 0xde, 0x91, 0x2e, 0xe8, 0x11 }}

class NS_NO_VTABLE nsIApplicationChooserFinishedCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPLICATIONCHOOSERFINISHEDCALLBACK_IID)

  /* void done (in nsIHandlerApp handlerApp); */
  NS_IMETHOD Done(nsIHandlerApp *handlerApp) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIApplicationChooserFinishedCallback, NS_IAPPLICATIONCHOOSERFINISHEDCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPLICATIONCHOOSERFINISHEDCALLBACK \
  NS_IMETHOD Done(nsIHandlerApp *handlerApp) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAPPLICATIONCHOOSERFINISHEDCALLBACK \
  NS_METHOD Done(nsIHandlerApp *handlerApp); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPLICATIONCHOOSERFINISHEDCALLBACK(_to) \
  NS_IMETHOD Done(nsIHandlerApp *handlerApp) override { return _to Done(handlerApp); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPLICATIONCHOOSERFINISHEDCALLBACK(_to) \
  NS_IMETHOD Done(nsIHandlerApp *handlerApp) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Done(handlerApp); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsApplicationChooserFinishedCallback : public nsIApplicationChooserFinishedCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPLICATIONCHOOSERFINISHEDCALLBACK

  nsApplicationChooserFinishedCallback();

private:
  ~nsApplicationChooserFinishedCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsApplicationChooserFinishedCallback, nsIApplicationChooserFinishedCallback)

nsApplicationChooserFinishedCallback::nsApplicationChooserFinishedCallback()
{
  /* member initializers and constructor code */
}

nsApplicationChooserFinishedCallback::~nsApplicationChooserFinishedCallback()
{
  /* destructor code */
}

/* void done (in nsIHandlerApp handlerApp); */
NS_IMETHODIMP nsApplicationChooserFinishedCallback::Done(nsIHandlerApp *handlerApp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIApplicationChooser */
#define NS_IAPPLICATIONCHOOSER_IID_STR "f7a149da-612a-46ba-8a2f-54786fc28791"

#define NS_IAPPLICATIONCHOOSER_IID \
  {0xf7a149da, 0x612a, 0x46ba, \
    { 0x8a, 0x2f, 0x54, 0x78, 0x6f, 0xc2, 0x87, 0x91 }}

class NS_NO_VTABLE nsIApplicationChooser : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPLICATIONCHOOSER_IID)

  /* void init (in mozIDOMWindowProxy parent, in ACString title); */
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsACString & title) = 0;

  /* void open (in ACString contentType, in nsIApplicationChooserFinishedCallback applicationChooserFinishedCallback); */
  NS_IMETHOD Open(const nsACString & contentType, nsIApplicationChooserFinishedCallback *applicationChooserFinishedCallback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIApplicationChooser, NS_IAPPLICATIONCHOOSER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPLICATIONCHOOSER \
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsACString & title) override; \
  NS_IMETHOD Open(const nsACString & contentType, nsIApplicationChooserFinishedCallback *applicationChooserFinishedCallback) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAPPLICATIONCHOOSER \
  NS_METHOD Init(mozIDOMWindowProxy *parent, const nsACString & title); \
  NS_METHOD Open(const nsACString & contentType, nsIApplicationChooserFinishedCallback *applicationChooserFinishedCallback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPLICATIONCHOOSER(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsACString & title) override { return _to Init(parent, title); } \
  NS_IMETHOD Open(const nsACString & contentType, nsIApplicationChooserFinishedCallback *applicationChooserFinishedCallback) override { return _to Open(contentType, applicationChooserFinishedCallback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPLICATIONCHOOSER(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsACString & title) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(parent, title); } \
  NS_IMETHOD Open(const nsACString & contentType, nsIApplicationChooserFinishedCallback *applicationChooserFinishedCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(contentType, applicationChooserFinishedCallback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsApplicationChooser : public nsIApplicationChooser
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPLICATIONCHOOSER

  nsApplicationChooser();

private:
  ~nsApplicationChooser();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsApplicationChooser, nsIApplicationChooser)

nsApplicationChooser::nsApplicationChooser()
{
  /* member initializers and constructor code */
}

nsApplicationChooser::~nsApplicationChooser()
{
  /* destructor code */
}

/* void init (in mozIDOMWindowProxy parent, in ACString title); */
NS_IMETHODIMP nsApplicationChooser::Init(mozIDOMWindowProxy *parent, const nsACString & title)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void open (in ACString contentType, in nsIApplicationChooserFinishedCallback applicationChooserFinishedCallback); */
NS_IMETHODIMP nsApplicationChooser::Open(const nsACString & contentType, nsIApplicationChooserFinishedCallback *applicationChooserFinishedCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIApplicationChooser_h__ */
