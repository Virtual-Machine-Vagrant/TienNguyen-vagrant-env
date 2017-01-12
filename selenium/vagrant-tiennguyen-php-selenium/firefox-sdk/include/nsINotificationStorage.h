/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsINotificationStorage.idl
 */

#ifndef __gen_nsINotificationStorage_h__
#define __gen_nsINotificationStorage_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsINotificationStorageCallback */
#define NS_INOTIFICATIONSTORAGECALLBACK_IID_STR "c1622232-259c-43b0-b52e-89c39dcd9796"

#define NS_INOTIFICATIONSTORAGECALLBACK_IID \
  {0xc1622232, 0x259c, 0x43b0, \
    { 0xb5, 0x2e, 0x89, 0xc3, 0x9d, 0xcd, 0x97, 0x96 }}

class NS_NO_VTABLE nsINotificationStorageCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INOTIFICATIONSTORAGECALLBACK_IID)

  /* void handle (in DOMString id, in DOMString title, in DOMString dir, in DOMString lang, in DOMString body, in DOMString tag, in DOMString icon, in DOMString data, in DOMString behavior, in DOMString serviceWorkerRegistrationID); */
  NS_IMETHOD Handle(const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) = 0;

  /* void done (); */
  NS_IMETHOD Done(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINotificationStorageCallback, NS_INOTIFICATIONSTORAGECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINOTIFICATIONSTORAGECALLBACK \
  NS_IMETHOD Handle(const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) override; \
  NS_IMETHOD Done(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSINOTIFICATIONSTORAGECALLBACK \
  NS_METHOD Handle(const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID); \
  NS_METHOD Done(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINOTIFICATIONSTORAGECALLBACK(_to) \
  NS_IMETHOD Handle(const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) override { return _to Handle(id, title, dir, lang, body, tag, icon, data, behavior, serviceWorkerRegistrationID); } \
  NS_IMETHOD Done(void) override { return _to Done(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINOTIFICATIONSTORAGECALLBACK(_to) \
  NS_IMETHOD Handle(const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Handle(id, title, dir, lang, body, tag, icon, data, behavior, serviceWorkerRegistrationID); } \
  NS_IMETHOD Done(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Done(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNotificationStorageCallback : public nsINotificationStorageCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINOTIFICATIONSTORAGECALLBACK

  nsNotificationStorageCallback();

private:
  ~nsNotificationStorageCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsNotificationStorageCallback, nsINotificationStorageCallback)

nsNotificationStorageCallback::nsNotificationStorageCallback()
{
  /* member initializers and constructor code */
}

nsNotificationStorageCallback::~nsNotificationStorageCallback()
{
  /* destructor code */
}

/* void handle (in DOMString id, in DOMString title, in DOMString dir, in DOMString lang, in DOMString body, in DOMString tag, in DOMString icon, in DOMString data, in DOMString behavior, in DOMString serviceWorkerRegistrationID); */
NS_IMETHODIMP nsNotificationStorageCallback::Handle(const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void done (); */
NS_IMETHODIMP nsNotificationStorageCallback::Done()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINotificationStorage */
#define NS_INOTIFICATIONSTORAGE_IID_STR "17f85e52-fe57-440e-9ba1-5c312ca02b95"

#define NS_INOTIFICATIONSTORAGE_IID \
  {0x17f85e52, 0xfe57, 0x440e, \
    { 0x9b, 0xa1, 0x5c, 0x31, 0x2c, 0xa0, 0x2b, 0x95 }}

class NS_NO_VTABLE nsINotificationStorage : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INOTIFICATIONSTORAGE_IID)

  /* void put (in DOMString origin, in DOMString id, in DOMString title, in DOMString dir, in DOMString lang, in DOMString body, in DOMString tag, in DOMString icon, in DOMString alertName, in DOMString data, in DOMString behavior, in DOMString serviceWorkerRegistrationID); */
  NS_IMETHOD Put(const nsAString & origin, const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & alertName, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) = 0;

  /* void get (in DOMString origin, in DOMString tag, in nsINotificationStorageCallback aCallback); */
  NS_IMETHOD Get(const nsAString & origin, const nsAString & tag, nsINotificationStorageCallback *aCallback) = 0;

  /* void getByID (in DOMString origin, in DOMString id, in nsINotificationStorageCallback aCallback); */
  NS_IMETHOD GetByID(const nsAString & origin, const nsAString & id, nsINotificationStorageCallback *aCallback) = 0;

  /* void delete (in DOMString origin, in DOMString id); */
  NS_IMETHOD Delete(const nsAString & origin, const nsAString & id) = 0;

  /* boolean canPut (in DOMString origin); */
  NS_IMETHOD CanPut(const nsAString & origin, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINotificationStorage, NS_INOTIFICATIONSTORAGE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINOTIFICATIONSTORAGE \
  NS_IMETHOD Put(const nsAString & origin, const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & alertName, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) override; \
  NS_IMETHOD Get(const nsAString & origin, const nsAString & tag, nsINotificationStorageCallback *aCallback) override; \
  NS_IMETHOD GetByID(const nsAString & origin, const nsAString & id, nsINotificationStorageCallback *aCallback) override; \
  NS_IMETHOD Delete(const nsAString & origin, const nsAString & id) override; \
  NS_IMETHOD CanPut(const nsAString & origin, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSINOTIFICATIONSTORAGE \
  NS_METHOD Put(const nsAString & origin, const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & alertName, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID); \
  NS_METHOD Get(const nsAString & origin, const nsAString & tag, nsINotificationStorageCallback *aCallback); \
  NS_METHOD GetByID(const nsAString & origin, const nsAString & id, nsINotificationStorageCallback *aCallback); \
  NS_METHOD Delete(const nsAString & origin, const nsAString & id); \
  NS_METHOD CanPut(const nsAString & origin, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINOTIFICATIONSTORAGE(_to) \
  NS_IMETHOD Put(const nsAString & origin, const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & alertName, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) override { return _to Put(origin, id, title, dir, lang, body, tag, icon, alertName, data, behavior, serviceWorkerRegistrationID); } \
  NS_IMETHOD Get(const nsAString & origin, const nsAString & tag, nsINotificationStorageCallback *aCallback) override { return _to Get(origin, tag, aCallback); } \
  NS_IMETHOD GetByID(const nsAString & origin, const nsAString & id, nsINotificationStorageCallback *aCallback) override { return _to GetByID(origin, id, aCallback); } \
  NS_IMETHOD Delete(const nsAString & origin, const nsAString & id) override { return _to Delete(origin, id); } \
  NS_IMETHOD CanPut(const nsAString & origin, bool *_retval) override { return _to CanPut(origin, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINOTIFICATIONSTORAGE(_to) \
  NS_IMETHOD Put(const nsAString & origin, const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & alertName, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Put(origin, id, title, dir, lang, body, tag, icon, alertName, data, behavior, serviceWorkerRegistrationID); } \
  NS_IMETHOD Get(const nsAString & origin, const nsAString & tag, nsINotificationStorageCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Get(origin, tag, aCallback); } \
  NS_IMETHOD GetByID(const nsAString & origin, const nsAString & id, nsINotificationStorageCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetByID(origin, id, aCallback); } \
  NS_IMETHOD Delete(const nsAString & origin, const nsAString & id) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Delete(origin, id); } \
  NS_IMETHOD CanPut(const nsAString & origin, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CanPut(origin, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNotificationStorage : public nsINotificationStorage
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINOTIFICATIONSTORAGE

  nsNotificationStorage();

private:
  ~nsNotificationStorage();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsNotificationStorage, nsINotificationStorage)

nsNotificationStorage::nsNotificationStorage()
{
  /* member initializers and constructor code */
}

nsNotificationStorage::~nsNotificationStorage()
{
  /* destructor code */
}

/* void put (in DOMString origin, in DOMString id, in DOMString title, in DOMString dir, in DOMString lang, in DOMString body, in DOMString tag, in DOMString icon, in DOMString alertName, in DOMString data, in DOMString behavior, in DOMString serviceWorkerRegistrationID); */
NS_IMETHODIMP nsNotificationStorage::Put(const nsAString & origin, const nsAString & id, const nsAString & title, const nsAString & dir, const nsAString & lang, const nsAString & body, const nsAString & tag, const nsAString & icon, const nsAString & alertName, const nsAString & data, const nsAString & behavior, const nsAString & serviceWorkerRegistrationID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void get (in DOMString origin, in DOMString tag, in nsINotificationStorageCallback aCallback); */
NS_IMETHODIMP nsNotificationStorage::Get(const nsAString & origin, const nsAString & tag, nsINotificationStorageCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getByID (in DOMString origin, in DOMString id, in nsINotificationStorageCallback aCallback); */
NS_IMETHODIMP nsNotificationStorage::GetByID(const nsAString & origin, const nsAString & id, nsINotificationStorageCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void delete (in DOMString origin, in DOMString id); */
NS_IMETHODIMP nsNotificationStorage::Delete(const nsAString & origin, const nsAString & id)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canPut (in DOMString origin); */
NS_IMETHODIMP nsNotificationStorage::CanPut(const nsAString & origin, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_NOTIFICATION_STORAGE_CONTRACTID "@mozilla.org/notificationStorage;1"

#endif /* __gen_nsINotificationStorage_h__ */
