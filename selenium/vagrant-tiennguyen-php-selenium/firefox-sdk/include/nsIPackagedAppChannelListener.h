/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPackagedAppChannelListener.idl
 */

#ifndef __gen_nsIPackagedAppChannelListener_h__
#define __gen_nsIPackagedAppChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPackagedAppChannelListener */
#define NS_IPACKAGEDAPPCHANNELLISTENER_IID_STR "27caf7d0-3c0e-11e5-b970-0800200c9a66"

#define NS_IPACKAGEDAPPCHANNELLISTENER_IID \
  {0x27caf7d0, 0x3c0e, 0x11e5, \
    { 0xb9, 0x70, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE nsIPackagedAppChannelListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPACKAGEDAPPCHANNELLISTENER_IID)

  /* void onStartSignedPackageRequest (in ACString aPackageId); */
  NS_IMETHOD OnStartSignedPackageRequest(const nsACString & aPackageId) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPackagedAppChannelListener, NS_IPACKAGEDAPPCHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPACKAGEDAPPCHANNELLISTENER \
  NS_IMETHOD OnStartSignedPackageRequest(const nsACString & aPackageId) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPACKAGEDAPPCHANNELLISTENER \
  NS_METHOD OnStartSignedPackageRequest(const nsACString & aPackageId); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPACKAGEDAPPCHANNELLISTENER(_to) \
  NS_IMETHOD OnStartSignedPackageRequest(const nsACString & aPackageId) override { return _to OnStartSignedPackageRequest(aPackageId); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPACKAGEDAPPCHANNELLISTENER(_to) \
  NS_IMETHOD OnStartSignedPackageRequest(const nsACString & aPackageId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStartSignedPackageRequest(aPackageId); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPackagedAppChannelListener : public nsIPackagedAppChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPACKAGEDAPPCHANNELLISTENER

  nsPackagedAppChannelListener();

private:
  ~nsPackagedAppChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPackagedAppChannelListener, nsIPackagedAppChannelListener)

nsPackagedAppChannelListener::nsPackagedAppChannelListener()
{
  /* member initializers and constructor code */
}

nsPackagedAppChannelListener::~nsPackagedAppChannelListener()
{
  /* destructor code */
}

/* void onStartSignedPackageRequest (in ACString aPackageId); */
NS_IMETHODIMP nsPackagedAppChannelListener::OnStartSignedPackageRequest(const nsACString & aPackageId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPackagedAppChannelListener_h__ */
