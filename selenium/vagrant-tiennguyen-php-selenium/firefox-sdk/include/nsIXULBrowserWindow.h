/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIXULBrowserWindow.idl
 */

#ifndef __gen_nsIXULBrowserWindow_h__
#define __gen_nsIXULBrowserWindow_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

#ifndef __gen_nsIDOMNode_h__
#include "nsIDOMNode.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIRequest; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIDocShell; /* forward declaration */

class nsITabParent; /* forward declaration */


/* starting interface:    nsIXULBrowserWindow */
#define NS_IXULBROWSERWINDOW_IID_STR "a8675fa9-c8b4-4350-9803-c38f344a9e38"

#define NS_IXULBROWSERWINDOW_IID \
  {0xa8675fa9, 0xc8b4, 0x4350, \
    { 0x98, 0x03, 0xc3, 0x8f, 0x34, 0x4a, 0x9e, 0x38 }}

class NS_NO_VTABLE nsIXULBrowserWindow : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXULBROWSERWINDOW_IID)

  /* void setJSStatus (in AString status); */
  NS_IMETHOD SetJSStatus(const nsAString & status) = 0;

  /* void setOverLink (in AString link, in nsIDOMElement element); */
  NS_IMETHOD SetOverLink(const nsAString & link, nsIDOMElement *element) = 0;

  /* AString onBeforeLinkTraversal (in AString originalTarget, in nsIURI linkURI, in nsIDOMNode linkNode, in boolean isAppTab); */
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) = 0;

  /* nsITabParent forceInitialBrowserRemote (); */
  NS_IMETHOD ForceInitialBrowserRemote(nsITabParent * *_retval) = 0;

  /* bool shouldLoadURI (in nsIDocShell aDocShell, in nsIURI aURI, in nsIURI aReferrer); */
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) = 0;

  /* void showTooltip (in long x, in long y, in AString tooltip); */
  NS_IMETHOD ShowTooltip(int32_t x, int32_t y, const nsAString & tooltip) = 0;

  /* void hideTooltip (); */
  NS_IMETHOD HideTooltip(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXULBrowserWindow, NS_IXULBROWSERWINDOW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXULBROWSERWINDOW \
  NS_IMETHOD SetJSStatus(const nsAString & status) override; \
  NS_IMETHOD SetOverLink(const nsAString & link, nsIDOMElement *element) override; \
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) override; \
  NS_IMETHOD ForceInitialBrowserRemote(nsITabParent * *_retval) override; \
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) override; \
  NS_IMETHOD ShowTooltip(int32_t x, int32_t y, const nsAString & tooltip) override; \
  NS_IMETHOD HideTooltip(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXULBROWSERWINDOW \
  NS_METHOD SetJSStatus(const nsAString & status); \
  NS_METHOD SetOverLink(const nsAString & link, nsIDOMElement *element); \
  NS_METHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval); \
  NS_METHOD ForceInitialBrowserRemote(nsITabParent * *_retval); \
  NS_METHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval); \
  NS_METHOD ShowTooltip(int32_t x, int32_t y, const nsAString & tooltip); \
  NS_METHOD HideTooltip(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXULBROWSERWINDOW(_to) \
  NS_IMETHOD SetJSStatus(const nsAString & status) override { return _to SetJSStatus(status); } \
  NS_IMETHOD SetOverLink(const nsAString & link, nsIDOMElement *element) override { return _to SetOverLink(link, element); } \
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) override { return _to OnBeforeLinkTraversal(originalTarget, linkURI, linkNode, isAppTab, _retval); } \
  NS_IMETHOD ForceInitialBrowserRemote(nsITabParent * *_retval) override { return _to ForceInitialBrowserRemote(_retval); } \
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) override { return _to ShouldLoadURI(aDocShell, aURI, aReferrer, _retval); } \
  NS_IMETHOD ShowTooltip(int32_t x, int32_t y, const nsAString & tooltip) override { return _to ShowTooltip(x, y, tooltip); } \
  NS_IMETHOD HideTooltip(void) override { return _to HideTooltip(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXULBROWSERWINDOW(_to) \
  NS_IMETHOD SetJSStatus(const nsAString & status) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJSStatus(status); } \
  NS_IMETHOD SetOverLink(const nsAString & link, nsIDOMElement *element) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOverLink(link, element); } \
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnBeforeLinkTraversal(originalTarget, linkURI, linkNode, isAppTab, _retval); } \
  NS_IMETHOD ForceInitialBrowserRemote(nsITabParent * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ForceInitialBrowserRemote(_retval); } \
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShouldLoadURI(aDocShell, aURI, aReferrer, _retval); } \
  NS_IMETHOD ShowTooltip(int32_t x, int32_t y, const nsAString & tooltip) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowTooltip(x, y, tooltip); } \
  NS_IMETHOD HideTooltip(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->HideTooltip(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXULBrowserWindow : public nsIXULBrowserWindow
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXULBROWSERWINDOW

  nsXULBrowserWindow();

private:
  ~nsXULBrowserWindow();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXULBrowserWindow, nsIXULBrowserWindow)

nsXULBrowserWindow::nsXULBrowserWindow()
{
  /* member initializers and constructor code */
}

nsXULBrowserWindow::~nsXULBrowserWindow()
{
  /* destructor code */
}

/* void setJSStatus (in AString status); */
NS_IMETHODIMP nsXULBrowserWindow::SetJSStatus(const nsAString & status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setOverLink (in AString link, in nsIDOMElement element); */
NS_IMETHODIMP nsXULBrowserWindow::SetOverLink(const nsAString & link, nsIDOMElement *element)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString onBeforeLinkTraversal (in AString originalTarget, in nsIURI linkURI, in nsIDOMNode linkNode, in boolean isAppTab); */
NS_IMETHODIMP nsXULBrowserWindow::OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITabParent forceInitialBrowserRemote (); */
NS_IMETHODIMP nsXULBrowserWindow::ForceInitialBrowserRemote(nsITabParent * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool shouldLoadURI (in nsIDocShell aDocShell, in nsIURI aURI, in nsIURI aReferrer); */
NS_IMETHODIMP nsXULBrowserWindow::ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showTooltip (in long x, in long y, in AString tooltip); */
NS_IMETHODIMP nsXULBrowserWindow::ShowTooltip(int32_t x, int32_t y, const nsAString & tooltip)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void hideTooltip (); */
NS_IMETHODIMP nsXULBrowserWindow::HideTooltip()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIXULBrowserWindow_h__ */
