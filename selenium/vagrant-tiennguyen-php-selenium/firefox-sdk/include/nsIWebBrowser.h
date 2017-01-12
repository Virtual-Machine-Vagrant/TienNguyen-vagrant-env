/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowser.idl
 */

#ifndef __gen_nsIWebBrowser_h__
#define __gen_nsIWebBrowser_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInterfaceRequestor; /* forward declaration */

class nsIWebBrowserChrome; /* forward declaration */

class nsIURIContentListener; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class mozIDOMWindowProxy; /* forward declaration */

class nsIWeakReference; /* forward declaration */


/* starting interface:    nsIWebBrowser */
#define NS_IWEBBROWSER_IID_STR "4052b6da-4faa-4646-b3a1-7e16a01c2dc2"

#define NS_IWEBBROWSER_IID \
  {0x4052b6da, 0x4faa, 0x4646, \
    { 0xb3, 0xa1, 0x7e, 0x16, 0xa0, 0x1c, 0x2d, 0xc2 }}

class NS_NO_VTABLE nsIWebBrowser : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSER_IID)

  /* void addWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) = 0;

  /* void removeWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) = 0;

  /* attribute nsIWebBrowserChrome containerWindow; */
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow) = 0;
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome *aContainerWindow) = 0;

  /* attribute nsIURIContentListener parentURIContentListener; */
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener) = 0;
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener *aParentURIContentListener) = 0;

  /* readonly attribute mozIDOMWindowProxy contentDOMWindow; */
  NS_IMETHOD GetContentDOMWindow(mozIDOMWindowProxy * *aContentDOMWindow) = 0;

  /* attribute boolean isActive; */
  NS_IMETHOD GetIsActive(bool *aIsActive) = 0;
  NS_IMETHOD SetIsActive(bool aIsActive) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowser, NS_IWEBBROWSER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSER \
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) override; \
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) override; \
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow) override; \
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome *aContainerWindow) override; \
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener) override; \
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener *aParentURIContentListener) override; \
  NS_IMETHOD GetContentDOMWindow(mozIDOMWindowProxy * *aContentDOMWindow) override; \
  NS_IMETHOD GetIsActive(bool *aIsActive) override; \
  NS_IMETHOD SetIsActive(bool aIsActive) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSER \
  NS_METHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID); \
  NS_METHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID); \
  NS_METHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow); \
  NS_METHOD SetContainerWindow(nsIWebBrowserChrome *aContainerWindow); \
  NS_METHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener); \
  NS_METHOD SetParentURIContentListener(nsIURIContentListener *aParentURIContentListener); \
  NS_METHOD GetContentDOMWindow(mozIDOMWindowProxy * *aContentDOMWindow); \
  NS_METHOD GetIsActive(bool *aIsActive); \
  NS_METHOD SetIsActive(bool aIsActive); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSER(_to) \
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) override { return _to AddWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) override { return _to RemoveWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow) override { return _to GetContainerWindow(aContainerWindow); } \
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome *aContainerWindow) override { return _to SetContainerWindow(aContainerWindow); } \
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener) override { return _to GetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener *aParentURIContentListener) override { return _to SetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD GetContentDOMWindow(mozIDOMWindowProxy * *aContentDOMWindow) override { return _to GetContentDOMWindow(aContentDOMWindow); } \
  NS_IMETHOD GetIsActive(bool *aIsActive) override { return _to GetIsActive(aIsActive); } \
  NS_IMETHOD SetIsActive(bool aIsActive) override { return _to SetIsActive(aIsActive); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSER(_to) \
  NS_IMETHOD AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveWebBrowserListener(aListener, aIID); } \
  NS_IMETHOD GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContainerWindow(aContainerWindow); } \
  NS_IMETHOD SetContainerWindow(nsIWebBrowserChrome *aContainerWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContainerWindow(aContainerWindow); } \
  NS_IMETHOD GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD SetParentURIContentListener(nsIURIContentListener *aParentURIContentListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParentURIContentListener(aParentURIContentListener); } \
  NS_IMETHOD GetContentDOMWindow(mozIDOMWindowProxy * *aContentDOMWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDOMWindow(aContentDOMWindow); } \
  NS_IMETHOD GetIsActive(bool *aIsActive) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsActive(aIsActive); } \
  NS_IMETHOD SetIsActive(bool aIsActive) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsActive(aIsActive); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowser : public nsIWebBrowser
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSER

  nsWebBrowser();

private:
  ~nsWebBrowser();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowser, nsIWebBrowser)

nsWebBrowser::nsWebBrowser()
{
  /* member initializers and constructor code */
}

nsWebBrowser::~nsWebBrowser()
{
  /* destructor code */
}

/* void addWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
NS_IMETHODIMP nsWebBrowser::AddWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeWebBrowserListener (in nsIWeakReference aListener, in nsIIDRef aIID); */
NS_IMETHODIMP nsWebBrowser::RemoveWebBrowserListener(nsIWeakReference *aListener, const nsIID & aIID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIWebBrowserChrome containerWindow; */
NS_IMETHODIMP nsWebBrowser::GetContainerWindow(nsIWebBrowserChrome * *aContainerWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowser::SetContainerWindow(nsIWebBrowserChrome *aContainerWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURIContentListener parentURIContentListener; */
NS_IMETHODIMP nsWebBrowser::GetParentURIContentListener(nsIURIContentListener * *aParentURIContentListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowser::SetParentURIContentListener(nsIURIContentListener *aParentURIContentListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIDOMWindowProxy contentDOMWindow; */
NS_IMETHODIMP nsWebBrowser::GetContentDOMWindow(mozIDOMWindowProxy * *aContentDOMWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isActive; */
NS_IMETHODIMP nsWebBrowser::GetIsActive(bool *aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowser::SetIsActive(bool aIsActive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowser_h__ */
