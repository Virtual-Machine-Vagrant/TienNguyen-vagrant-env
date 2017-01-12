/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMStorageManager.idl
 */

#ifndef __gen_nsIDOMStorageManager_h__
#define __gen_nsIDOMStorageManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMStorage; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class mozIDOMWindow; /* forward declaration */


/* starting interface:    nsIDOMStorageManager */
#define NS_IDOMSTORAGEMANAGER_IID_STR "a20c742e-3ed1-44fb-b897-4080a75b1662"

#define NS_IDOMSTORAGEMANAGER_IID \
  {0xa20c742e, 0x3ed1, 0x44fb, \
    { 0xb8, 0x97, 0x40, 0x80, 0xa7, 0x5b, 0x16, 0x62 }}

class NS_NO_VTABLE nsIDOMStorageManager : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSTORAGEMANAGER_IID)

  /* void precacheStorage (in nsIPrincipal aPrincipal); */
  NS_IMETHOD PrecacheStorage(nsIPrincipal *aPrincipal) = 0;

  /* nsIDOMStorage createStorage (in mozIDOMWindow aWindow, in nsIPrincipal aPrincipal, in DOMString aDocumentURI, [optional] in bool aPrivate); */
  NS_IMETHOD CreateStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) = 0;

  /* nsIDOMStorage getStorage (in mozIDOMWindow aWindow, in nsIPrincipal aPrincipal, [optional] in bool aPrivate); */
  NS_IMETHOD GetStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, bool aPrivate, nsIDOMStorage * *_retval) = 0;

  /* void cloneStorage (in nsIDOMStorage aStorageToCloneFrom); */
  NS_IMETHOD CloneStorage(nsIDOMStorage *aStorageToCloneFrom) = 0;

  /* bool checkStorage (in nsIPrincipal aPrincipal, in nsIDOMStorage aStorage); */
  NS_IMETHOD CheckStorage(nsIPrincipal *aPrincipal, nsIDOMStorage *aStorage, bool *_retval) = 0;

  /* nsIDOMStorage getLocalStorageForPrincipal (in nsIPrincipal aPrincipal, in DOMString aDocumentURI, [optional] in bool aPrivate); */
  NS_IMETHOD GetLocalStorageForPrincipal(nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMStorageManager, NS_IDOMSTORAGEMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSTORAGEMANAGER \
  NS_IMETHOD PrecacheStorage(nsIPrincipal *aPrincipal) override; \
  NS_IMETHOD CreateStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) override; \
  NS_IMETHOD GetStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, bool aPrivate, nsIDOMStorage * *_retval) override; \
  NS_IMETHOD CloneStorage(nsIDOMStorage *aStorageToCloneFrom) override; \
  NS_IMETHOD CheckStorage(nsIPrincipal *aPrincipal, nsIDOMStorage *aStorage, bool *_retval) override; \
  NS_IMETHOD GetLocalStorageForPrincipal(nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMSTORAGEMANAGER \
  NS_METHOD PrecacheStorage(nsIPrincipal *aPrincipal); \
  NS_METHOD CreateStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval); \
  NS_METHOD GetStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, bool aPrivate, nsIDOMStorage * *_retval); \
  NS_METHOD CloneStorage(nsIDOMStorage *aStorageToCloneFrom); \
  NS_METHOD CheckStorage(nsIPrincipal *aPrincipal, nsIDOMStorage *aStorage, bool *_retval); \
  NS_METHOD GetLocalStorageForPrincipal(nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSTORAGEMANAGER(_to) \
  NS_IMETHOD PrecacheStorage(nsIPrincipal *aPrincipal) override { return _to PrecacheStorage(aPrincipal); } \
  NS_IMETHOD CreateStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) override { return _to CreateStorage(aWindow, aPrincipal, aDocumentURI, aPrivate, _retval); } \
  NS_IMETHOD GetStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, bool aPrivate, nsIDOMStorage * *_retval) override { return _to GetStorage(aWindow, aPrincipal, aPrivate, _retval); } \
  NS_IMETHOD CloneStorage(nsIDOMStorage *aStorageToCloneFrom) override { return _to CloneStorage(aStorageToCloneFrom); } \
  NS_IMETHOD CheckStorage(nsIPrincipal *aPrincipal, nsIDOMStorage *aStorage, bool *_retval) override { return _to CheckStorage(aPrincipal, aStorage, _retval); } \
  NS_IMETHOD GetLocalStorageForPrincipal(nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) override { return _to GetLocalStorageForPrincipal(aPrincipal, aDocumentURI, aPrivate, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSTORAGEMANAGER(_to) \
  NS_IMETHOD PrecacheStorage(nsIPrincipal *aPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PrecacheStorage(aPrincipal); } \
  NS_IMETHOD CreateStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateStorage(aWindow, aPrincipal, aDocumentURI, aPrivate, _retval); } \
  NS_IMETHOD GetStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, bool aPrivate, nsIDOMStorage * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStorage(aWindow, aPrincipal, aPrivate, _retval); } \
  NS_IMETHOD CloneStorage(nsIDOMStorage *aStorageToCloneFrom) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneStorage(aStorageToCloneFrom); } \
  NS_IMETHOD CheckStorage(nsIPrincipal *aPrincipal, nsIDOMStorage *aStorage, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckStorage(aPrincipal, aStorage, _retval); } \
  NS_IMETHOD GetLocalStorageForPrincipal(nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocalStorageForPrincipal(aPrincipal, aDocumentURI, aPrivate, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMStorageManager : public nsIDOMStorageManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSTORAGEMANAGER

  nsDOMStorageManager();

private:
  ~nsDOMStorageManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMStorageManager, nsIDOMStorageManager)

nsDOMStorageManager::nsDOMStorageManager()
{
  /* member initializers and constructor code */
}

nsDOMStorageManager::~nsDOMStorageManager()
{
  /* destructor code */
}

/* void precacheStorage (in nsIPrincipal aPrincipal); */
NS_IMETHODIMP nsDOMStorageManager::PrecacheStorage(nsIPrincipal *aPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMStorage createStorage (in mozIDOMWindow aWindow, in nsIPrincipal aPrincipal, in DOMString aDocumentURI, [optional] in bool aPrivate); */
NS_IMETHODIMP nsDOMStorageManager::CreateStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMStorage getStorage (in mozIDOMWindow aWindow, in nsIPrincipal aPrincipal, [optional] in bool aPrivate); */
NS_IMETHODIMP nsDOMStorageManager::GetStorage(mozIDOMWindow *aWindow, nsIPrincipal *aPrincipal, bool aPrivate, nsIDOMStorage * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cloneStorage (in nsIDOMStorage aStorageToCloneFrom); */
NS_IMETHODIMP nsDOMStorageManager::CloneStorage(nsIDOMStorage *aStorageToCloneFrom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool checkStorage (in nsIPrincipal aPrincipal, in nsIDOMStorage aStorage); */
NS_IMETHODIMP nsDOMStorageManager::CheckStorage(nsIPrincipal *aPrincipal, nsIDOMStorage *aStorage, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMStorage getLocalStorageForPrincipal (in nsIPrincipal aPrincipal, in DOMString aDocumentURI, [optional] in bool aPrivate); */
NS_IMETHODIMP nsDOMStorageManager::GetLocalStorageForPrincipal(nsIPrincipal *aPrincipal, const nsAString & aDocumentURI, bool aPrivate, nsIDOMStorage * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMStorageManager_h__ */
