/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWindowlessBrowser.idl
 */

#ifndef __gen_nsIWindowlessBrowser_h__
#define __gen_nsIWindowlessBrowser_h__


#ifndef __gen_nsIWebNavigation_h__
#include "nsIWebNavigation.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIWindowlessBrowser */
#define NS_IWINDOWLESSBROWSER_IID_STR "abb46f48-abfc-41bf-aa9a-7feccefcf977"

#define NS_IWINDOWLESSBROWSER_IID \
  {0xabb46f48, 0xabfc, 0x41bf, \
    { 0xaa, 0x9a, 0x7f, 0xec, 0xce, 0xfc, 0xf9, 0x77 }}

class NS_NO_VTABLE nsIWindowlessBrowser : public nsIWebNavigation {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWINDOWLESSBROWSER_IID)

  /* void close (); */
  NS_IMETHOD Close(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWindowlessBrowser, NS_IWINDOWLESSBROWSER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWINDOWLESSBROWSER \
  NS_IMETHOD Close(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWINDOWLESSBROWSER \
  NS_METHOD Close(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWINDOWLESSBROWSER(_to) \
  NS_IMETHOD Close(void) override { return _to Close(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWINDOWLESSBROWSER(_to) \
  NS_IMETHOD Close(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWindowlessBrowser : public nsIWindowlessBrowser
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWINDOWLESSBROWSER

  nsWindowlessBrowser();

private:
  ~nsWindowlessBrowser();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWindowlessBrowser, nsIWindowlessBrowser)

nsWindowlessBrowser::nsWindowlessBrowser()
{
  /* member initializers and constructor code */
}

nsWindowlessBrowser::~nsWindowlessBrowser()
{
  /* destructor code */
}

/* void close (); */
NS_IMETHODIMP nsWindowlessBrowser::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWindowlessBrowser_h__ */
