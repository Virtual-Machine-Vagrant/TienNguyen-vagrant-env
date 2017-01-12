/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIBrowserDOMWindow.idl
 */

#ifndef __gen_nsIBrowserDOMWindow_h__
#define __gen_nsIBrowserDOMWindow_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIFrameLoaderOwner; /* forward declaration */


/* starting interface:    nsIOpenURIInFrameParams */
#define NS_IOPENURIINFRAMEPARAMS_IID_STR "e774db14-79ac-4156-a7a3-aa3fd0a22c10"

#define NS_IOPENURIINFRAMEPARAMS_IID \
  {0xe774db14, 0x79ac, 0x4156, \
    { 0xa7, 0xa3, 0xaa, 0x3f, 0xd0, 0xa2, 0x2c, 0x10 }}

class NS_NO_VTABLE nsIOpenURIInFrameParams : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOPENURIINFRAMEPARAMS_IID)

  /* attribute DOMString referrer; */
  NS_IMETHOD GetReferrer(nsAString & aReferrer) = 0;
  NS_IMETHOD SetReferrer(const nsAString & aReferrer) = 0;

  /* attribute boolean isPrivate; */
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) = 0;
  NS_IMETHOD SetIsPrivate(bool aIsPrivate) = 0;

  /* [implicit_jscontext] readonly attribute jsval openerOriginAttributes; */
  NS_IMETHOD GetOpenerOriginAttributes(JSContext* cx, JS::MutableHandleValue aOpenerOriginAttributes) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIOpenURIInFrameParams, NS_IOPENURIINFRAMEPARAMS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOPENURIINFRAMEPARAMS \
  NS_IMETHOD GetReferrer(nsAString & aReferrer) override; \
  NS_IMETHOD SetReferrer(const nsAString & aReferrer) override; \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override; \
  NS_IMETHOD SetIsPrivate(bool aIsPrivate) override; \
  NS_IMETHOD GetOpenerOriginAttributes(JSContext* cx, JS::MutableHandleValue aOpenerOriginAttributes) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIOPENURIINFRAMEPARAMS \
  NS_METHOD GetReferrer(nsAString & aReferrer); \
  NS_METHOD SetReferrer(const nsAString & aReferrer); \
  NS_METHOD GetIsPrivate(bool *aIsPrivate); \
  NS_METHOD SetIsPrivate(bool aIsPrivate); \
  NS_METHOD GetOpenerOriginAttributes(JSContext* cx, JS::MutableHandleValue aOpenerOriginAttributes); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOPENURIINFRAMEPARAMS(_to) \
  NS_IMETHOD GetReferrer(nsAString & aReferrer) override { return _to GetReferrer(aReferrer); } \
  NS_IMETHOD SetReferrer(const nsAString & aReferrer) override { return _to SetReferrer(aReferrer); } \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override { return _to GetIsPrivate(aIsPrivate); } \
  NS_IMETHOD SetIsPrivate(bool aIsPrivate) override { return _to SetIsPrivate(aIsPrivate); } \
  NS_IMETHOD GetOpenerOriginAttributes(JSContext* cx, JS::MutableHandleValue aOpenerOriginAttributes) override { return _to GetOpenerOriginAttributes(cx, aOpenerOriginAttributes); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOPENURIINFRAMEPARAMS(_to) \
  NS_IMETHOD GetReferrer(nsAString & aReferrer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrer(aReferrer); } \
  NS_IMETHOD SetReferrer(const nsAString & aReferrer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReferrer(aReferrer); } \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsPrivate(aIsPrivate); } \
  NS_IMETHOD SetIsPrivate(bool aIsPrivate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsPrivate(aIsPrivate); } \
  NS_IMETHOD GetOpenerOriginAttributes(JSContext* cx, JS::MutableHandleValue aOpenerOriginAttributes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOpenerOriginAttributes(cx, aOpenerOriginAttributes); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsOpenURIInFrameParams : public nsIOpenURIInFrameParams
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOPENURIINFRAMEPARAMS

  nsOpenURIInFrameParams();

private:
  ~nsOpenURIInFrameParams();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsOpenURIInFrameParams, nsIOpenURIInFrameParams)

nsOpenURIInFrameParams::nsOpenURIInFrameParams()
{
  /* member initializers and constructor code */
}

nsOpenURIInFrameParams::~nsOpenURIInFrameParams()
{
  /* destructor code */
}

/* attribute DOMString referrer; */
NS_IMETHODIMP nsOpenURIInFrameParams::GetReferrer(nsAString & aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenURIInFrameParams::SetReferrer(const nsAString & aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean isPrivate; */
NS_IMETHODIMP nsOpenURIInFrameParams::GetIsPrivate(bool *aIsPrivate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsOpenURIInFrameParams::SetIsPrivate(bool aIsPrivate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval openerOriginAttributes; */
NS_IMETHODIMP nsOpenURIInFrameParams::GetOpenerOriginAttributes(JSContext* cx, JS::MutableHandleValue aOpenerOriginAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIBrowserDOMWindow */
#define NS_IBROWSERDOMWINDOW_IID_STR "9d17f3dd-672b-451e-afd2-b1115df780d5"

#define NS_IBROWSERDOMWINDOW_IID \
  {0x9d17f3dd, 0x672b, 0x451e, \
    { 0xaf, 0xd2, 0xb1, 0x11, 0x5d, 0xf7, 0x80, 0xd5 }}

class NS_NO_VTABLE nsIBrowserDOMWindow : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBROWSERDOMWINDOW_IID)

  enum {
    OPEN_DEFAULTWINDOW = 0,
    OPEN_CURRENTWINDOW = 1,
    OPEN_NEWWINDOW = 2,
    OPEN_NEWTAB = 3,
    OPEN_SWITCHTAB = 4,
    OPEN_EXTERNAL = 1,
    OPEN_NEW = 2
  };

  /* mozIDOMWindowProxy openURI (in nsIURI aURI, in mozIDOMWindowProxy aOpener, in short aWhere, in short aContext); */
  NS_IMETHOD OpenURI(nsIURI *aURI, mozIDOMWindowProxy *aOpener, int16_t aWhere, int16_t aContext, mozIDOMWindowProxy * *_retval) = 0;

  /* nsIFrameLoaderOwner openURIInFrame (in nsIURI aURI, in nsIOpenURIInFrameParams params, in short aWhere, in short aContext); */
  NS_IMETHOD OpenURIInFrame(nsIURI *aURI, nsIOpenURIInFrameParams *params, int16_t aWhere, int16_t aContext, nsIFrameLoaderOwner * *_retval) = 0;

  /* boolean isTabContentWindow (in nsIDOMWindow aWindow); */
  NS_IMETHOD IsTabContentWindow(nsIDOMWindow *aWindow, bool *_retval) = 0;

  /* boolean canClose (); */
  NS_IMETHOD CanClose(bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBrowserDOMWindow, NS_IBROWSERDOMWINDOW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBROWSERDOMWINDOW \
  NS_IMETHOD OpenURI(nsIURI *aURI, mozIDOMWindowProxy *aOpener, int16_t aWhere, int16_t aContext, mozIDOMWindowProxy * *_retval) override; \
  NS_IMETHOD OpenURIInFrame(nsIURI *aURI, nsIOpenURIInFrameParams *params, int16_t aWhere, int16_t aContext, nsIFrameLoaderOwner * *_retval) override; \
  NS_IMETHOD IsTabContentWindow(nsIDOMWindow *aWindow, bool *_retval) override; \
  NS_IMETHOD CanClose(bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIBROWSERDOMWINDOW \
  NS_METHOD OpenURI(nsIURI *aURI, mozIDOMWindowProxy *aOpener, int16_t aWhere, int16_t aContext, mozIDOMWindowProxy * *_retval); \
  NS_METHOD OpenURIInFrame(nsIURI *aURI, nsIOpenURIInFrameParams *params, int16_t aWhere, int16_t aContext, nsIFrameLoaderOwner * *_retval); \
  NS_METHOD IsTabContentWindow(nsIDOMWindow *aWindow, bool *_retval); \
  NS_METHOD CanClose(bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBROWSERDOMWINDOW(_to) \
  NS_IMETHOD OpenURI(nsIURI *aURI, mozIDOMWindowProxy *aOpener, int16_t aWhere, int16_t aContext, mozIDOMWindowProxy * *_retval) override { return _to OpenURI(aURI, aOpener, aWhere, aContext, _retval); } \
  NS_IMETHOD OpenURIInFrame(nsIURI *aURI, nsIOpenURIInFrameParams *params, int16_t aWhere, int16_t aContext, nsIFrameLoaderOwner * *_retval) override { return _to OpenURIInFrame(aURI, params, aWhere, aContext, _retval); } \
  NS_IMETHOD IsTabContentWindow(nsIDOMWindow *aWindow, bool *_retval) override { return _to IsTabContentWindow(aWindow, _retval); } \
  NS_IMETHOD CanClose(bool *_retval) override { return _to CanClose(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBROWSERDOMWINDOW(_to) \
  NS_IMETHOD OpenURI(nsIURI *aURI, mozIDOMWindowProxy *aOpener, int16_t aWhere, int16_t aContext, mozIDOMWindowProxy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenURI(aURI, aOpener, aWhere, aContext, _retval); } \
  NS_IMETHOD OpenURIInFrame(nsIURI *aURI, nsIOpenURIInFrameParams *params, int16_t aWhere, int16_t aContext, nsIFrameLoaderOwner * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenURIInFrame(aURI, params, aWhere, aContext, _retval); } \
  NS_IMETHOD IsTabContentWindow(nsIDOMWindow *aWindow, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsTabContentWindow(aWindow, _retval); } \
  NS_IMETHOD CanClose(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CanClose(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBrowserDOMWindow : public nsIBrowserDOMWindow
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBROWSERDOMWINDOW

  nsBrowserDOMWindow();

private:
  ~nsBrowserDOMWindow();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsBrowserDOMWindow, nsIBrowserDOMWindow)

nsBrowserDOMWindow::nsBrowserDOMWindow()
{
  /* member initializers and constructor code */
}

nsBrowserDOMWindow::~nsBrowserDOMWindow()
{
  /* destructor code */
}

/* mozIDOMWindowProxy openURI (in nsIURI aURI, in mozIDOMWindowProxy aOpener, in short aWhere, in short aContext); */
NS_IMETHODIMP nsBrowserDOMWindow::OpenURI(nsIURI *aURI, mozIDOMWindowProxy *aOpener, int16_t aWhere, int16_t aContext, mozIDOMWindowProxy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIFrameLoaderOwner openURIInFrame (in nsIURI aURI, in nsIOpenURIInFrameParams params, in short aWhere, in short aContext); */
NS_IMETHODIMP nsBrowserDOMWindow::OpenURIInFrame(nsIURI *aURI, nsIOpenURIInFrameParams *params, int16_t aWhere, int16_t aContext, nsIFrameLoaderOwner * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isTabContentWindow (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsBrowserDOMWindow::IsTabContentWindow(nsIDOMWindow *aWindow, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canClose (); */
NS_IMETHODIMP nsBrowserDOMWindow::CanClose(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIBrowserDOMWindow_h__ */
