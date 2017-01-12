/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowserPersistable.idl
 */

#ifndef __gen_nsIWebBrowserPersistable_h__
#define __gen_nsIWebBrowserPersistable_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIWebBrowserPersistDocumentReceiver; /* forward declaration */


/* starting interface:    nsIWebBrowserPersistable */
#define NS_IWEBBROWSERPERSISTABLE_IID_STR "f4c3fa8e-83e9-49f8-ac6f-951fc7541fe4"

#define NS_IWEBBROWSERPERSISTABLE_IID \
  {0xf4c3fa8e, 0x83e9, 0x49f8, \
    { 0xac, 0x6f, 0x95, 0x1f, 0xc7, 0x54, 0x1f, 0xe4 }}

class NS_NO_VTABLE nsIWebBrowserPersistable : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPERSISTABLE_IID)

  /* void startPersistence (in unsigned long long aOuterWindowID, in nsIWebBrowserPersistDocumentReceiver aRecv); */
  NS_IMETHOD StartPersistence(uint64_t aOuterWindowID, nsIWebBrowserPersistDocumentReceiver *aRecv) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPersistable, NS_IWEBBROWSERPERSISTABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPERSISTABLE \
  NS_IMETHOD StartPersistence(uint64_t aOuterWindowID, nsIWebBrowserPersistDocumentReceiver *aRecv) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERPERSISTABLE \
  NS_METHOD StartPersistence(uint64_t aOuterWindowID, nsIWebBrowserPersistDocumentReceiver *aRecv); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPERSISTABLE(_to) \
  NS_IMETHOD StartPersistence(uint64_t aOuterWindowID, nsIWebBrowserPersistDocumentReceiver *aRecv) override { return _to StartPersistence(aOuterWindowID, aRecv); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPERSISTABLE(_to) \
  NS_IMETHOD StartPersistence(uint64_t aOuterWindowID, nsIWebBrowserPersistDocumentReceiver *aRecv) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartPersistence(aOuterWindowID, aRecv); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPersistable : public nsIWebBrowserPersistable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPERSISTABLE

  nsWebBrowserPersistable();

private:
  ~nsWebBrowserPersistable();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserPersistable, nsIWebBrowserPersistable)

nsWebBrowserPersistable::nsWebBrowserPersistable()
{
  /* member initializers and constructor code */
}

nsWebBrowserPersistable::~nsWebBrowserPersistable()
{
  /* destructor code */
}

/* void startPersistence (in unsigned long long aOuterWindowID, in nsIWebBrowserPersistDocumentReceiver aRecv); */
NS_IMETHODIMP nsWebBrowserPersistable::StartPersistence(uint64_t aOuterWindowID, nsIWebBrowserPersistDocumentReceiver *aRecv)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserPersistable_h__ */
