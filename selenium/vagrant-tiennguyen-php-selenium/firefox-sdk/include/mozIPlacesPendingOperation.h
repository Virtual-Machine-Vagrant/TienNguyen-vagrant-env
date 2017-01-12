/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/mozIPlacesPendingOperation.idl
 */

#ifndef __gen_mozIPlacesPendingOperation_h__
#define __gen_mozIPlacesPendingOperation_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    mozIPlacesPendingOperation */
#define MOZIPLACESPENDINGOPERATION_IID_STR "ebd31374-3808-40e4-9e73-303bf70467c3"

#define MOZIPLACESPENDINGOPERATION_IID \
  {0xebd31374, 0x3808, 0x40e4, \
    { 0x9e, 0x73, 0x30, 0x3b, 0xf7, 0x04, 0x67, 0xc3 }}

class NS_NO_VTABLE mozIPlacesPendingOperation : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIPLACESPENDINGOPERATION_IID)

  /* void cancel (); */
  NS_IMETHOD Cancel(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIPlacesPendingOperation, MOZIPLACESPENDINGOPERATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIPLACESPENDINGOPERATION \
  NS_IMETHOD Cancel(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_MOZIPLACESPENDINGOPERATION \
  NS_METHOD Cancel(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIPLACESPENDINGOPERATION(_to) \
  NS_IMETHOD Cancel(void) override { return _to Cancel(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIPLACESPENDINGOPERATION(_to) \
  NS_IMETHOD Cancel(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Cancel(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIPlacesPendingOperation
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIPLACESPENDINGOPERATION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, mozIPlacesPendingOperation)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void cancel (); */
NS_IMETHODIMP _MYCLASS_::Cancel()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIPlacesPendingOperation_h__ */
