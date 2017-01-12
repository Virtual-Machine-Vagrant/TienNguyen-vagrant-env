/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISecureBrowserUI.idl
 */

#ifndef __gen_nsISecureBrowserUI_h__
#define __gen_nsISecureBrowserUI_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsIDocShell; /* forward declaration */


/* starting interface:    nsISecureBrowserUI */
#define NS_ISECUREBROWSERUI_IID_STR "718c662a-f810-4a80-a6c9-0b1810ecade2"

#define NS_ISECUREBROWSERUI_IID \
  {0x718c662a, 0xf810, 0x4a80, \
    { 0xa6, 0xc9, 0x0b, 0x18, 0x10, 0xec, 0xad, 0xe2 }}

class NS_NO_VTABLE nsISecureBrowserUI : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISECUREBROWSERUI_IID)

  /* void init (in mozIDOMWindowProxy window); */
  NS_IMETHOD Init(mozIDOMWindowProxy *window) = 0;

  /* void setDocShell (in nsIDocShell docShell); */
  NS_IMETHOD SetDocShell(nsIDocShell *docShell) = 0;

  /* readonly attribute unsigned long state; */
  NS_IMETHOD GetState(uint32_t *aState) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISecureBrowserUI, NS_ISECUREBROWSERUI_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISECUREBROWSERUI \
  NS_IMETHOD Init(mozIDOMWindowProxy *window) override; \
  NS_IMETHOD SetDocShell(nsIDocShell *docShell) override; \
  NS_IMETHOD GetState(uint32_t *aState) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISECUREBROWSERUI \
  NS_METHOD Init(mozIDOMWindowProxy *window); \
  NS_METHOD SetDocShell(nsIDocShell *docShell); \
  NS_METHOD GetState(uint32_t *aState); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISECUREBROWSERUI(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *window) override { return _to Init(window); } \
  NS_IMETHOD SetDocShell(nsIDocShell *docShell) override { return _to SetDocShell(docShell); } \
  NS_IMETHOD GetState(uint32_t *aState) override { return _to GetState(aState); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISECUREBROWSERUI(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *window) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(window); } \
  NS_IMETHOD SetDocShell(nsIDocShell *docShell) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDocShell(docShell); } \
  NS_IMETHOD GetState(uint32_t *aState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSecureBrowserUI : public nsISecureBrowserUI
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISECUREBROWSERUI

  nsSecureBrowserUI();

private:
  ~nsSecureBrowserUI();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSecureBrowserUI, nsISecureBrowserUI)

nsSecureBrowserUI::nsSecureBrowserUI()
{
  /* member initializers and constructor code */
}

nsSecureBrowserUI::~nsSecureBrowserUI()
{
  /* destructor code */
}

/* void init (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsSecureBrowserUI::Init(mozIDOMWindowProxy *window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDocShell (in nsIDocShell docShell); */
NS_IMETHODIMP nsSecureBrowserUI::SetDocShell(nsIDocShell *docShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long state; */
NS_IMETHODIMP nsSecureBrowserUI::GetState(uint32_t *aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_SECURE_BROWSER_UI_CONTRACTID "@mozilla.org/secure_browser_ui;1"

#endif /* __gen_nsISecureBrowserUI_h__ */
