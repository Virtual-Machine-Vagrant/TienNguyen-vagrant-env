/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMWindow.idl
 */

#ifndef __gen_nsIDOMWindow_h__
#define __gen_nsIDOMWindow_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIControllers; /* forward declaration */

class nsIDOMBlob; /* forward declaration */

class nsIDOMLocation; /* forward declaration */

class nsIDOMOfflineResourceList; /* forward declaration */

class nsIPrompt; /* forward declaration */

class nsISelection; /* forward declaration */

class nsIVariant; /* forward declaration */


/* starting interface:    nsIDOMWindow */
#define NS_IDOMWINDOW_IID_STR "b8343993-0383-4add-9930-ad176b189240"

#define NS_IDOMWINDOW_IID \
  {0xb8343993, 0x0383, 0x4add, \
    { 0x99, 0x30, 0xad, 0x17, 0x6b, 0x18, 0x92, 0x40 }}

class NS_NO_VTABLE nsIDOMWindow : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWINDOW_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWindow, NS_IDOMWINDOW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOW \
  /* no methods! */

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMWINDOW \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOW(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOW(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindow : public nsIDOMWindow
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOW

  nsDOMWindow();

private:
  ~nsDOMWindow();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMWindow, nsIDOMWindow)

nsDOMWindow::nsDOMWindow()
{
  /* member initializers and constructor code */
}

nsDOMWindow::~nsDOMWindow()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMWindowInternal */
#define NS_IDOMWINDOWINTERNAL_IID_STR "8c589e65-3237-4cd1-8bad-c5c47135e79b"

#define NS_IDOMWINDOWINTERNAL_IID \
  {0x8c589e65, 0x3237, 0x4cd1, \
    { 0x8b, 0xad, 0xc5, 0xc4, 0x71, 0x35, 0xe7, 0x9b }}

class NS_NO_VTABLE nsIDOMWindowInternal : public nsIDOMWindow {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWINDOWINTERNAL_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWindowInternal, NS_IDOMWINDOWINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOWINTERNAL \
  /* no methods! */

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMWINDOWINTERNAL \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOWINTERNAL(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOWINTERNAL(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindowInternal : public nsIDOMWindowInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOWINTERNAL

  nsDOMWindowInternal();

private:
  ~nsDOMWindowInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMWindowInternal, nsIDOMWindowInternal)

nsDOMWindowInternal::nsDOMWindowInternal()
{
  /* member initializers and constructor code */
}

nsDOMWindowInternal::~nsDOMWindowInternal()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMWindow_h__ */
