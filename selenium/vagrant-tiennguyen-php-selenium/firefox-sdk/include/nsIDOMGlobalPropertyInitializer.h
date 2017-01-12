/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMGlobalPropertyInitializer.idl
 */

#ifndef __gen_nsIDOMGlobalPropertyInitializer_h__
#define __gen_nsIDOMGlobalPropertyInitializer_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */


/* starting interface:    nsIDOMGlobalPropertyInitializer */
#define NS_IDOMGLOBALPROPERTYINITIALIZER_IID_STR "5842e275-797f-4afb-b7e0-e29f0cb312ae"

#define NS_IDOMGLOBALPROPERTYINITIALIZER_IID \
  {0x5842e275, 0x797f, 0x4afb, \
    { 0xb7, 0xe0, 0xe2, 0x9f, 0x0c, 0xb3, 0x12, 0xae }}

class NS_NO_VTABLE nsIDOMGlobalPropertyInitializer : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMGLOBALPROPERTYINITIALIZER_IID)

  /* jsval init (in mozIDOMWindow window); */
  NS_IMETHOD Init(mozIDOMWindow *window, JS::MutableHandleValue _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMGlobalPropertyInitializer, NS_IDOMGLOBALPROPERTYINITIALIZER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMGLOBALPROPERTYINITIALIZER \
  NS_IMETHOD Init(mozIDOMWindow *window, JS::MutableHandleValue _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMGLOBALPROPERTYINITIALIZER \
  NS_METHOD Init(mozIDOMWindow *window, JS::MutableHandleValue _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMGLOBALPROPERTYINITIALIZER(_to) \
  NS_IMETHOD Init(mozIDOMWindow *window, JS::MutableHandleValue _retval) override { return _to Init(window, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMGLOBALPROPERTYINITIALIZER(_to) \
  NS_IMETHOD Init(mozIDOMWindow *window, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(window, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMGlobalPropertyInitializer : public nsIDOMGlobalPropertyInitializer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMGLOBALPROPERTYINITIALIZER

  nsDOMGlobalPropertyInitializer();

private:
  ~nsDOMGlobalPropertyInitializer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMGlobalPropertyInitializer, nsIDOMGlobalPropertyInitializer)

nsDOMGlobalPropertyInitializer::nsDOMGlobalPropertyInitializer()
{
  /* member initializers and constructor code */
}

nsDOMGlobalPropertyInitializer::~nsDOMGlobalPropertyInitializer()
{
  /* destructor code */
}

/* jsval init (in mozIDOMWindow window); */
NS_IMETHODIMP nsDOMGlobalPropertyInitializer::Init(mozIDOMWindow *window, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMGlobalPropertyInitializer_h__ */
