/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMWindowCollection.idl
 */

#ifndef __gen_nsIDOMWindowCollection_h__
#define __gen_nsIDOMWindowCollection_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsIDOMWindowCollection */
#define NS_IDOMWINDOWCOLLECTION_IID_STR "8d64f457-fb8c-49ea-a359-cef30eed9774"

#define NS_IDOMWINDOWCOLLECTION_IID \
  {0x8d64f457, 0xfb8c, 0x49ea, \
    { 0xa3, 0x59, 0xce, 0xf3, 0x0e, 0xed, 0x97, 0x74 }}

class NS_NO_VTABLE nsIDOMWindowCollection : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMWINDOWCOLLECTION_IID)

  /* readonly attribute unsigned long length; */
  NS_IMETHOD GetLength(uint32_t *aLength) = 0;

  /* mozIDOMWindowProxy item (in unsigned long index); */
  NS_IMETHOD Item(uint32_t index, mozIDOMWindowProxy * *_retval) = 0;

  /* mozIDOMWindowProxy namedItem (in DOMString name); */
  NS_IMETHOD NamedItem(const nsAString & name, mozIDOMWindowProxy * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMWindowCollection, NS_IDOMWINDOWCOLLECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMWINDOWCOLLECTION \
  NS_IMETHOD GetLength(uint32_t *aLength) override; \
  NS_IMETHOD Item(uint32_t index, mozIDOMWindowProxy * *_retval) override; \
  NS_IMETHOD NamedItem(const nsAString & name, mozIDOMWindowProxy * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMWINDOWCOLLECTION \
  NS_METHOD GetLength(uint32_t *aLength); \
  NS_METHOD Item(uint32_t index, mozIDOMWindowProxy * *_retval); \
  NS_METHOD NamedItem(const nsAString & name, mozIDOMWindowProxy * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMWINDOWCOLLECTION(_to) \
  NS_IMETHOD GetLength(uint32_t *aLength) override { return _to GetLength(aLength); } \
  NS_IMETHOD Item(uint32_t index, mozIDOMWindowProxy * *_retval) override { return _to Item(index, _retval); } \
  NS_IMETHOD NamedItem(const nsAString & name, mozIDOMWindowProxy * *_retval) override { return _to NamedItem(name, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMWINDOWCOLLECTION(_to) \
  NS_IMETHOD GetLength(uint32_t *aLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_IMETHOD Item(uint32_t index, mozIDOMWindowProxy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Item(index, _retval); } \
  NS_IMETHOD NamedItem(const nsAString & name, mozIDOMWindowProxy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NamedItem(name, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMWindowCollection : public nsIDOMWindowCollection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMWINDOWCOLLECTION

  nsDOMWindowCollection();

private:
  ~nsDOMWindowCollection();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMWindowCollection, nsIDOMWindowCollection)

nsDOMWindowCollection::nsDOMWindowCollection()
{
  /* member initializers and constructor code */
}

nsDOMWindowCollection::~nsDOMWindowCollection()
{
  /* destructor code */
}

/* readonly attribute unsigned long length; */
NS_IMETHODIMP nsDOMWindowCollection::GetLength(uint32_t *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIDOMWindowProxy item (in unsigned long index); */
NS_IMETHODIMP nsDOMWindowCollection::Item(uint32_t index, mozIDOMWindowProxy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIDOMWindowProxy namedItem (in DOMString name); */
NS_IMETHODIMP nsDOMWindowCollection::NamedItem(const nsAString & name, mozIDOMWindowProxy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMWindowCollection_h__ */
