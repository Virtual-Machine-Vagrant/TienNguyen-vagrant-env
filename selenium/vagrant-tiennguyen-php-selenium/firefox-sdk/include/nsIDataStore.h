/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDataStore.idl
 */

#ifndef __gen_nsIDataStore_h__
#define __gen_nsIDataStore_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */


/* starting interface:    nsIDataStore */
#define NS_IDATASTORE_IID_STR "14f4bae7-dd01-4d1d-81e1-f8fd1e463b5f"

#define NS_IDATASTORE_IID \
  {0x14f4bae7, 0xdd01, 0x4d1d, \
    { 0x81, 0xe1, 0xf8, 0xfd, 0x1e, 0x46, 0x3b, 0x5f }}

class NS_NO_VTABLE nsIDataStore : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDATASTORE_IID)

  /* void init (in mozIDOMWindow window, in DOMString name, in DOMString manifestURL, in boolean readOnly); */
  NS_IMETHOD Init(mozIDOMWindow *window, const nsAString & name, const nsAString & manifestURL, bool readOnly) = 0;

  /* attribute jsval exposedObject; */
  NS_IMETHOD GetExposedObject(JS::MutableHandleValue aExposedObject) = 0;
  NS_IMETHOD SetExposedObject(JS::HandleValue aExposedObject) = 0;

  /* void retrieveRevisionId (in jsval cb); */
  NS_IMETHOD RetrieveRevisionId(JS::HandleValue cb) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDataStore, NS_IDATASTORE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDATASTORE \
  NS_IMETHOD Init(mozIDOMWindow *window, const nsAString & name, const nsAString & manifestURL, bool readOnly) override; \
  NS_IMETHOD GetExposedObject(JS::MutableHandleValue aExposedObject) override; \
  NS_IMETHOD SetExposedObject(JS::HandleValue aExposedObject) override; \
  NS_IMETHOD RetrieveRevisionId(JS::HandleValue cb) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDATASTORE \
  NS_METHOD Init(mozIDOMWindow *window, const nsAString & name, const nsAString & manifestURL, bool readOnly); \
  NS_METHOD GetExposedObject(JS::MutableHandleValue aExposedObject); \
  NS_METHOD SetExposedObject(JS::HandleValue aExposedObject); \
  NS_METHOD RetrieveRevisionId(JS::HandleValue cb); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDATASTORE(_to) \
  NS_IMETHOD Init(mozIDOMWindow *window, const nsAString & name, const nsAString & manifestURL, bool readOnly) override { return _to Init(window, name, manifestURL, readOnly); } \
  NS_IMETHOD GetExposedObject(JS::MutableHandleValue aExposedObject) override { return _to GetExposedObject(aExposedObject); } \
  NS_IMETHOD SetExposedObject(JS::HandleValue aExposedObject) override { return _to SetExposedObject(aExposedObject); } \
  NS_IMETHOD RetrieveRevisionId(JS::HandleValue cb) override { return _to RetrieveRevisionId(cb); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDATASTORE(_to) \
  NS_IMETHOD Init(mozIDOMWindow *window, const nsAString & name, const nsAString & manifestURL, bool readOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(window, name, manifestURL, readOnly); } \
  NS_IMETHOD GetExposedObject(JS::MutableHandleValue aExposedObject) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExposedObject(aExposedObject); } \
  NS_IMETHOD SetExposedObject(JS::HandleValue aExposedObject) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExposedObject(aExposedObject); } \
  NS_IMETHOD RetrieveRevisionId(JS::HandleValue cb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RetrieveRevisionId(cb); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDataStore : public nsIDataStore
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDATASTORE

  nsDataStore();

private:
  ~nsDataStore();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDataStore, nsIDataStore)

nsDataStore::nsDataStore()
{
  /* member initializers and constructor code */
}

nsDataStore::~nsDataStore()
{
  /* destructor code */
}

/* void init (in mozIDOMWindow window, in DOMString name, in DOMString manifestURL, in boolean readOnly); */
NS_IMETHODIMP nsDataStore::Init(mozIDOMWindow *window, const nsAString & name, const nsAString & manifestURL, bool readOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsval exposedObject; */
NS_IMETHODIMP nsDataStore::GetExposedObject(JS::MutableHandleValue aExposedObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDataStore::SetExposedObject(JS::HandleValue aExposedObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void retrieveRevisionId (in jsval cb); */
NS_IMETHODIMP nsDataStore::RetrieveRevisionId(JS::HandleValue cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDataStore_h__ */
