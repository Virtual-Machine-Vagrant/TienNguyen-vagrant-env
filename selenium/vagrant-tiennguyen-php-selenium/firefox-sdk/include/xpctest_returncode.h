/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/xpctest_returncode.idl
 */

#ifndef __gen_xpctest_returncode_h__
#define __gen_xpctest_returncode_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIXPCTestReturnCodeParent */
#define NS_IXPCTESTRETURNCODEPARENT_IID_STR "479e4532-95cf-48b8-a99b-8a5881e47138"

#define NS_IXPCTESTRETURNCODEPARENT_IID \
  {0x479e4532, 0x95cf, 0x48b8, \
    { 0xa9, 0x9b, 0x8a, 0x58, 0x81, 0xe4, 0x71, 0x38 }}

class NS_NO_VTABLE nsIXPCTestReturnCodeParent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTRETURNCODEPARENT_IID)

  /* nsresult callChild (in long childBehavior); */
  NS_IMETHOD CallChild(int32_t childBehavior, nsresult *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestReturnCodeParent, NS_IXPCTESTRETURNCODEPARENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTRETURNCODEPARENT \
  NS_IMETHOD CallChild(int32_t childBehavior, nsresult *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTRETURNCODEPARENT \
  NS_METHOD CallChild(int32_t childBehavior, nsresult *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTRETURNCODEPARENT(_to) \
  NS_IMETHOD CallChild(int32_t childBehavior, nsresult *_retval) override { return _to CallChild(childBehavior, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTRETURNCODEPARENT(_to) \
  NS_IMETHOD CallChild(int32_t childBehavior, nsresult *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CallChild(childBehavior, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestReturnCodeParent : public nsIXPCTestReturnCodeParent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTRETURNCODEPARENT

  nsXPCTestReturnCodeParent();

private:
  ~nsXPCTestReturnCodeParent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestReturnCodeParent, nsIXPCTestReturnCodeParent)

nsXPCTestReturnCodeParent::nsXPCTestReturnCodeParent()
{
  /* member initializers and constructor code */
}

nsXPCTestReturnCodeParent::~nsXPCTestReturnCodeParent()
{
  /* destructor code */
}

/* nsresult callChild (in long childBehavior); */
NS_IMETHODIMP nsXPCTestReturnCodeParent::CallChild(int32_t childBehavior, nsresult *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPCTestReturnCodeChild */
#define NS_IXPCTESTRETURNCODECHILD_IID_STR "672cfd34-1fd1-455d-9901-d879fa6fdb95"

#define NS_IXPCTESTRETURNCODECHILD_IID \
  {0x672cfd34, 0x1fd1, 0x455d, \
    { 0x99, 0x01, 0xd8, 0x79, 0xfa, 0x6f, 0xdb, 0x95 }}

class NS_NO_VTABLE nsIXPCTestReturnCodeChild : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTRETURNCODECHILD_IID)

  /* void doIt (in long behavior); */
  NS_IMETHOD DoIt(int32_t behavior) = 0;

  enum {
    CHILD_SHOULD_THROW = 0,
    CHILD_SHOULD_RETURN_SUCCESS = 1,
    CHILD_SHOULD_RETURN_RESULTCODE = 2,
    CHILD_SHOULD_NEST_RESULTCODES = 3
  };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestReturnCodeChild, NS_IXPCTESTRETURNCODECHILD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTRETURNCODECHILD \
  NS_IMETHOD DoIt(int32_t behavior) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTRETURNCODECHILD \
  NS_METHOD DoIt(int32_t behavior); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTRETURNCODECHILD(_to) \
  NS_IMETHOD DoIt(int32_t behavior) override { return _to DoIt(behavior); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTRETURNCODECHILD(_to) \
  NS_IMETHOD DoIt(int32_t behavior) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DoIt(behavior); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestReturnCodeChild : public nsIXPCTestReturnCodeChild
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTRETURNCODECHILD

  nsXPCTestReturnCodeChild();

private:
  ~nsXPCTestReturnCodeChild();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestReturnCodeChild, nsIXPCTestReturnCodeChild)

nsXPCTestReturnCodeChild::nsXPCTestReturnCodeChild()
{
  /* member initializers and constructor code */
}

nsXPCTestReturnCodeChild::~nsXPCTestReturnCodeChild()
{
  /* destructor code */
}

/* void doIt (in long behavior); */
NS_IMETHODIMP nsXPCTestReturnCodeChild::DoIt(int32_t behavior)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_xpctest_returncode_h__ */
