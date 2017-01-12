/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/xpctest_utils.idl
 */

#ifndef __gen_xpctest_utils_h__
#define __gen_xpctest_utils_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIXPCTestFunctionInterface */
#define NS_IXPCTESTFUNCTIONINTERFACE_IID_STR "d58a82ab-d8f7-4ca9-9273-b3290d42a0cf"

#define NS_IXPCTESTFUNCTIONINTERFACE_IID \
  {0xd58a82ab, 0xd8f7, 0x4ca9, \
    { 0x92, 0x73, 0xb3, 0x29, 0x0d, 0x42, 0xa0, 0xcf }}

class NS_NO_VTABLE nsIXPCTestFunctionInterface : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTFUNCTIONINTERFACE_IID)

  /* string echo (in string arg); */
  NS_IMETHOD Echo(const char * arg, char * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestFunctionInterface, NS_IXPCTESTFUNCTIONINTERFACE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTFUNCTIONINTERFACE \
  NS_IMETHOD Echo(const char * arg, char * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTFUNCTIONINTERFACE \
  NS_METHOD Echo(const char * arg, char * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTFUNCTIONINTERFACE(_to) \
  NS_IMETHOD Echo(const char * arg, char * *_retval) override { return _to Echo(arg, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTFUNCTIONINTERFACE(_to) \
  NS_IMETHOD Echo(const char * arg, char * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Echo(arg, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestFunctionInterface : public nsIXPCTestFunctionInterface
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTFUNCTIONINTERFACE

  nsXPCTestFunctionInterface();

private:
  ~nsXPCTestFunctionInterface();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestFunctionInterface, nsIXPCTestFunctionInterface)

nsXPCTestFunctionInterface::nsXPCTestFunctionInterface()
{
  /* member initializers and constructor code */
}

nsXPCTestFunctionInterface::~nsXPCTestFunctionInterface()
{
  /* destructor code */
}

/* string echo (in string arg); */
NS_IMETHODIMP nsXPCTestFunctionInterface::Echo(const char * arg, char * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPCTestUtils */
#define NS_IXPCTESTUTILS_IID_STR "1e9cddeb-510d-449a-b152-3c1b5b31d41d"

#define NS_IXPCTESTUTILS_IID \
  {0x1e9cddeb, 0x510d, 0x449a, \
    { 0xb1, 0x52, 0x3c, 0x1b, 0x5b, 0x31, 0xd4, 0x1d }}

class NS_NO_VTABLE nsIXPCTestUtils : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTUTILS_IID)

  /* nsIXPCTestFunctionInterface doubleWrapFunction (in nsIXPCTestFunctionInterface f); */
  NS_IMETHOD DoubleWrapFunction(nsIXPCTestFunctionInterface *f, nsIXPCTestFunctionInterface * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestUtils, NS_IXPCTESTUTILS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTUTILS \
  NS_IMETHOD DoubleWrapFunction(nsIXPCTestFunctionInterface *f, nsIXPCTestFunctionInterface * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTUTILS \
  NS_METHOD DoubleWrapFunction(nsIXPCTestFunctionInterface *f, nsIXPCTestFunctionInterface * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTUTILS(_to) \
  NS_IMETHOD DoubleWrapFunction(nsIXPCTestFunctionInterface *f, nsIXPCTestFunctionInterface * *_retval) override { return _to DoubleWrapFunction(f, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTUTILS(_to) \
  NS_IMETHOD DoubleWrapFunction(nsIXPCTestFunctionInterface *f, nsIXPCTestFunctionInterface * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DoubleWrapFunction(f, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestUtils : public nsIXPCTestUtils
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTUTILS

  nsXPCTestUtils();

private:
  ~nsXPCTestUtils();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestUtils, nsIXPCTestUtils)

nsXPCTestUtils::nsXPCTestUtils()
{
  /* member initializers and constructor code */
}

nsXPCTestUtils::~nsXPCTestUtils()
{
  /* destructor code */
}

/* nsIXPCTestFunctionInterface doubleWrapFunction (in nsIXPCTestFunctionInterface f); */
NS_IMETHODIMP nsXPCTestUtils::DoubleWrapFunction(nsIXPCTestFunctionInterface *f, nsIXPCTestFunctionInterface * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_xpctest_utils_h__ */
