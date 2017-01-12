/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowserFocus.idl
 */

#ifndef __gen_nsIWebBrowserFocus_h__
#define __gen_nsIWebBrowserFocus_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIDOMElement; /* forward declaration */


/* starting interface:    nsIWebBrowserFocus */
#define NS_IWEBBROWSERFOCUS_IID_STR "7f8c754e-5b36-44be-bc96-191b49f08ea6"

#define NS_IWEBBROWSERFOCUS_IID \
  {0x7f8c754e, 0x5b36, 0x44be, \
    { 0xbc, 0x96, 0x19, 0x1b, 0x49, 0xf0, 0x8e, 0xa6 }}

class NS_NO_VTABLE nsIWebBrowserFocus : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERFOCUS_IID)

  /* void activate (); */
  NS_IMETHOD Activate(void) = 0;

  /* void deactivate (); */
  NS_IMETHOD Deactivate(void) = 0;

  /* void setFocusAtFirstElement (); */
  NS_IMETHOD SetFocusAtFirstElement(void) = 0;

  /* void setFocusAtLastElement (); */
  NS_IMETHOD SetFocusAtLastElement(void) = 0;

  /* attribute mozIDOMWindowProxy focusedWindow; */
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) = 0;
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) = 0;

  /* attribute nsIDOMElement focusedElement; */
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) = 0;
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserFocus, NS_IWEBBROWSERFOCUS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERFOCUS \
  NS_IMETHOD Activate(void) override; \
  NS_IMETHOD Deactivate(void) override; \
  NS_IMETHOD SetFocusAtFirstElement(void) override; \
  NS_IMETHOD SetFocusAtLastElement(void) override; \
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) override; \
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) override; \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override; \
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERFOCUS \
  NS_METHOD Activate(void); \
  NS_METHOD Deactivate(void); \
  NS_METHOD SetFocusAtFirstElement(void); \
  NS_METHOD SetFocusAtLastElement(void); \
  NS_METHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow); \
  NS_METHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow); \
  NS_METHOD GetFocusedElement(nsIDOMElement * *aFocusedElement); \
  NS_METHOD SetFocusedElement(nsIDOMElement *aFocusedElement); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERFOCUS(_to) \
  NS_IMETHOD Activate(void) override { return _to Activate(); } \
  NS_IMETHOD Deactivate(void) override { return _to Deactivate(); } \
  NS_IMETHOD SetFocusAtFirstElement(void) override { return _to SetFocusAtFirstElement(); } \
  NS_IMETHOD SetFocusAtLastElement(void) override { return _to SetFocusAtLastElement(); } \
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) override { return _to GetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) override { return _to SetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override { return _to GetFocusedElement(aFocusedElement); } \
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) override { return _to SetFocusedElement(aFocusedElement); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERFOCUS(_to) \
  NS_IMETHOD Activate(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Activate(); } \
  NS_IMETHOD Deactivate(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Deactivate(); } \
  NS_IMETHOD SetFocusAtFirstElement(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusAtFirstElement(); } \
  NS_IMETHOD SetFocusAtLastElement(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusAtLastElement(); } \
  NS_IMETHOD GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusedWindow(aFocusedWindow); } \
  NS_IMETHOD GetFocusedElement(nsIDOMElement * *aFocusedElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFocusedElement(aFocusedElement); } \
  NS_IMETHOD SetFocusedElement(nsIDOMElement *aFocusedElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFocusedElement(aFocusedElement); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserFocus : public nsIWebBrowserFocus
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERFOCUS

  nsWebBrowserFocus();

private:
  ~nsWebBrowserFocus();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserFocus, nsIWebBrowserFocus)

nsWebBrowserFocus::nsWebBrowserFocus()
{
  /* member initializers and constructor code */
}

nsWebBrowserFocus::~nsWebBrowserFocus()
{
  /* destructor code */
}

/* void activate (); */
NS_IMETHODIMP nsWebBrowserFocus::Activate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deactivate (); */
NS_IMETHODIMP nsWebBrowserFocus::Deactivate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFocusAtFirstElement (); */
NS_IMETHODIMP nsWebBrowserFocus::SetFocusAtFirstElement()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFocusAtLastElement (); */
NS_IMETHODIMP nsWebBrowserFocus::SetFocusAtLastElement()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute mozIDOMWindowProxy focusedWindow; */
NS_IMETHODIMP nsWebBrowserFocus::GetFocusedWindow(mozIDOMWindowProxy * *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFocus::SetFocusedWindow(mozIDOMWindowProxy *aFocusedWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIDOMElement focusedElement; */
NS_IMETHODIMP nsWebBrowserFocus::GetFocusedElement(nsIDOMElement * *aFocusedElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFocus::SetFocusedElement(nsIDOMElement *aFocusedElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserFocus_h__ */
