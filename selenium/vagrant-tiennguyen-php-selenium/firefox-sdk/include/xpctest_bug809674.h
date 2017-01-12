/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/xpctest_bug809674.idl
 */

#ifndef __gen_xpctest_bug809674_h__
#define __gen_xpctest_bug809674_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIXPCTestBug809674 */
#define NS_IXPCTESTBUG809674_IID_STR "2df46559-da21-49bf-b863-0d7b7bbcbc73"

#define NS_IXPCTESTBUG809674_IID \
  {0x2df46559, 0xda21, 0x49bf, \
    { 0xb8, 0x63, 0x0d, 0x7b, 0x7b, 0xbc, 0xbc, 0x73 }}

class NS_NO_VTABLE nsIXPCTestBug809674 : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTBUG809674_IID)

  /* [implicit_jscontext] attribute jsval jsvalProperty; */
  NS_IMETHOD GetJsvalProperty(JSContext* cx, JS::MutableHandleValue aJsvalProperty) = 0;
  NS_IMETHOD SetJsvalProperty(JSContext* cx, JS::HandleValue aJsvalProperty) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestBug809674, NS_IXPCTESTBUG809674_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTBUG809674 \
  NS_IMETHOD GetJsvalProperty(JSContext* cx, JS::MutableHandleValue aJsvalProperty) override; \
  NS_IMETHOD SetJsvalProperty(JSContext* cx, JS::HandleValue aJsvalProperty) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTBUG809674 \
  NS_METHOD GetJsvalProperty(JSContext* cx, JS::MutableHandleValue aJsvalProperty); \
  NS_METHOD SetJsvalProperty(JSContext* cx, JS::HandleValue aJsvalProperty); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTBUG809674(_to) \
  NS_IMETHOD GetJsvalProperty(JSContext* cx, JS::MutableHandleValue aJsvalProperty) override { return _to GetJsvalProperty(cx, aJsvalProperty); } \
  NS_IMETHOD SetJsvalProperty(JSContext* cx, JS::HandleValue aJsvalProperty) override { return _to SetJsvalProperty(cx, aJsvalProperty); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTBUG809674(_to) \
  NS_IMETHOD GetJsvalProperty(JSContext* cx, JS::MutableHandleValue aJsvalProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsvalProperty(cx, aJsvalProperty); } \
  NS_IMETHOD SetJsvalProperty(JSContext* cx, JS::HandleValue aJsvalProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJsvalProperty(cx, aJsvalProperty); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestBug809674 : public nsIXPCTestBug809674
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTBUG809674

  nsXPCTestBug809674();

private:
  ~nsXPCTestBug809674();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestBug809674, nsIXPCTestBug809674)

nsXPCTestBug809674::nsXPCTestBug809674()
{
  /* member initializers and constructor code */
}

nsXPCTestBug809674::~nsXPCTestBug809674()
{
  /* destructor code */
}

/* [implicit_jscontext] attribute jsval jsvalProperty; */
NS_IMETHODIMP nsXPCTestBug809674::GetJsvalProperty(JSContext* cx, JS::MutableHandleValue aJsvalProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestBug809674::SetJsvalProperty(JSContext* cx, JS::HandleValue aJsvalProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_xpctest_bug809674_h__ */
