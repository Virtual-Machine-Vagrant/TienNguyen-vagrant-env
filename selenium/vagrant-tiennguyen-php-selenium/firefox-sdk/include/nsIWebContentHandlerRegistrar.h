/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebContentHandlerRegistrar.idl
 */

#ifndef __gen_nsIWebContentHandlerRegistrar_h__
#define __gen_nsIWebContentHandlerRegistrar_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIWebContentHandlerRegistrar */
#define NS_IWEBCONTENTHANDLERREGISTRAR_IID_STR "65a3fafd-0e4a-4b06-8b4e-6a611da63d98"

#define NS_IWEBCONTENTHANDLERREGISTRAR_IID \
  {0x65a3fafd, 0x0e4a, 0x4b06, \
    { 0x8b, 0x4e, 0x6a, 0x61, 0x1d, 0xa6, 0x3d, 0x98 }}

class NS_NO_VTABLE nsIWebContentHandlerRegistrar : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBCONTENTHANDLERREGISTRAR_IID)

  /* void registerContentHandler (in DOMString mimeType, in DOMString uri, in DOMString title, in nsISupports windowOrBrowser); */
  NS_IMETHOD RegisterContentHandler(const nsAString & mimeType, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) = 0;

  /* void registerProtocolHandler (in DOMString protocol, in DOMString uri, in DOMString title, in nsISupports windowOrBrowser); */
  NS_IMETHOD RegisterProtocolHandler(const nsAString & protocol, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebContentHandlerRegistrar, NS_IWEBCONTENTHANDLERREGISTRAR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBCONTENTHANDLERREGISTRAR \
  NS_IMETHOD RegisterContentHandler(const nsAString & mimeType, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) override; \
  NS_IMETHOD RegisterProtocolHandler(const nsAString & protocol, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBCONTENTHANDLERREGISTRAR \
  NS_METHOD RegisterContentHandler(const nsAString & mimeType, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser); \
  NS_METHOD RegisterProtocolHandler(const nsAString & protocol, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBCONTENTHANDLERREGISTRAR(_to) \
  NS_IMETHOD RegisterContentHandler(const nsAString & mimeType, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) override { return _to RegisterContentHandler(mimeType, uri, title, windowOrBrowser); } \
  NS_IMETHOD RegisterProtocolHandler(const nsAString & protocol, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) override { return _to RegisterProtocolHandler(protocol, uri, title, windowOrBrowser); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBCONTENTHANDLERREGISTRAR(_to) \
  NS_IMETHOD RegisterContentHandler(const nsAString & mimeType, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterContentHandler(mimeType, uri, title, windowOrBrowser); } \
  NS_IMETHOD RegisterProtocolHandler(const nsAString & protocol, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterProtocolHandler(protocol, uri, title, windowOrBrowser); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebContentHandlerRegistrar : public nsIWebContentHandlerRegistrar
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBCONTENTHANDLERREGISTRAR

  nsWebContentHandlerRegistrar();

private:
  ~nsWebContentHandlerRegistrar();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebContentHandlerRegistrar, nsIWebContentHandlerRegistrar)

nsWebContentHandlerRegistrar::nsWebContentHandlerRegistrar()
{
  /* member initializers and constructor code */
}

nsWebContentHandlerRegistrar::~nsWebContentHandlerRegistrar()
{
  /* destructor code */
}

/* void registerContentHandler (in DOMString mimeType, in DOMString uri, in DOMString title, in nsISupports windowOrBrowser); */
NS_IMETHODIMP nsWebContentHandlerRegistrar::RegisterContentHandler(const nsAString & mimeType, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerProtocolHandler (in DOMString protocol, in DOMString uri, in DOMString title, in nsISupports windowOrBrowser); */
NS_IMETHODIMP nsWebContentHandlerRegistrar::RegisterProtocolHandler(const nsAString & protocol, const nsAString & uri, const nsAString & title, nsISupports *windowOrBrowser)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#define NS_WEBCONTENTHANDLERREGISTRAR_CONTRACTID "@mozilla.org/embeddor.implemented/web-content-handler-registrar;1"

#endif /* __gen_nsIWebContentHandlerRegistrar_h__ */
