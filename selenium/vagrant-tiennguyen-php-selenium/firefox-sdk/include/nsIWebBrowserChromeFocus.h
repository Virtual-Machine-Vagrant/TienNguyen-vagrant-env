/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowserChromeFocus.idl
 */

#ifndef __gen_nsIWebBrowserChromeFocus_h__
#define __gen_nsIWebBrowserChromeFocus_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIWebBrowserChromeFocus */
#define NS_IWEBBROWSERCHROMEFOCUS_IID_STR "947b2ee6-51ed-4c2b-9f45-426c27ca84c6"

#define NS_IWEBBROWSERCHROMEFOCUS_IID \
  {0x947b2ee6, 0x51ed, 0x4c2b, \
    { 0x9f, 0x45, 0x42, 0x6c, 0x27, 0xca, 0x84, 0xc6 }}

class NS_NO_VTABLE nsIWebBrowserChromeFocus : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERCHROMEFOCUS_IID)

  /* void focusNextElement (in bool aForDocumentNavigation); */
  NS_IMETHOD FocusNextElement(bool aForDocumentNavigation) = 0;

  /* void focusPrevElement (in bool aForDocumentNavigation); */
  NS_IMETHOD FocusPrevElement(bool aForDocumentNavigation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserChromeFocus, NS_IWEBBROWSERCHROMEFOCUS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERCHROMEFOCUS \
  NS_IMETHOD FocusNextElement(bool aForDocumentNavigation) override; \
  NS_IMETHOD FocusPrevElement(bool aForDocumentNavigation) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERCHROMEFOCUS \
  NS_METHOD FocusNextElement(bool aForDocumentNavigation); \
  NS_METHOD FocusPrevElement(bool aForDocumentNavigation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERCHROMEFOCUS(_to) \
  NS_IMETHOD FocusNextElement(bool aForDocumentNavigation) override { return _to FocusNextElement(aForDocumentNavigation); } \
  NS_IMETHOD FocusPrevElement(bool aForDocumentNavigation) override { return _to FocusPrevElement(aForDocumentNavigation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERCHROMEFOCUS(_to) \
  NS_IMETHOD FocusNextElement(bool aForDocumentNavigation) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FocusNextElement(aForDocumentNavigation); } \
  NS_IMETHOD FocusPrevElement(bool aForDocumentNavigation) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FocusPrevElement(aForDocumentNavigation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserChromeFocus : public nsIWebBrowserChromeFocus
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERCHROMEFOCUS

  nsWebBrowserChromeFocus();

private:
  ~nsWebBrowserChromeFocus();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserChromeFocus, nsIWebBrowserChromeFocus)

nsWebBrowserChromeFocus::nsWebBrowserChromeFocus()
{
  /* member initializers and constructor code */
}

nsWebBrowserChromeFocus::~nsWebBrowserChromeFocus()
{
  /* destructor code */
}

/* void focusNextElement (in bool aForDocumentNavigation); */
NS_IMETHODIMP nsWebBrowserChromeFocus::FocusNextElement(bool aForDocumentNavigation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void focusPrevElement (in bool aForDocumentNavigation); */
NS_IMETHODIMP nsWebBrowserChromeFocus::FocusPrevElement(bool aForDocumentNavigation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserChromeFocus_h__ */
