/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/NotXPCOMTest.idl
 */

#ifndef __gen_NotXPCOMTest_h__
#define __gen_NotXPCOMTest_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ScriptableOK */
#define SCRIPTABLEOK_IID_STR "93142a4f-e4cf-424a-b833-e638f87d2607"

#define SCRIPTABLEOK_IID \
  {0x93142a4f, 0xe4cf, 0x424a, \
    { 0xb8, 0x33, 0xe6, 0x38, 0xf8, 0x7d, 0x26, 0x07 }}

class NS_NO_VTABLE ScriptableOK : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(SCRIPTABLEOK_IID)

  /* void method1 (); */
  NS_IMETHOD Method1(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ScriptableOK, SCRIPTABLEOK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_SCRIPTABLEOK \
  NS_IMETHOD Method1(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_SCRIPTABLEOK \
  NS_METHOD Method1(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_SCRIPTABLEOK(_to) \
  NS_IMETHOD Method1(void) override { return _to Method1(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_SCRIPTABLEOK(_to) \
  NS_IMETHOD Method1(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Method1(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ScriptableOK
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_SCRIPTABLEOK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, ScriptableOK)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void method1 (); */
NS_IMETHODIMP _MYCLASS_::Method1()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ScriptableWithNotXPCOM */
#define SCRIPTABLEWITHNOTXPCOM_IID_STR "237d01a3-771e-4c6e-adf9-c97f9aab2950"

#define SCRIPTABLEWITHNOTXPCOM_IID \
  {0x237d01a3, 0x771e, 0x4c6e, \
    { 0xad, 0xf9, 0xc9, 0x7f, 0x9a, 0xab, 0x29, 0x50 }}

class NS_NO_VTABLE ScriptableWithNotXPCOM : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(SCRIPTABLEWITHNOTXPCOM_IID)

  /* [notxpcom] void method2 (); */
  NS_IMETHOD_(void) Method2(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ScriptableWithNotXPCOM, SCRIPTABLEWITHNOTXPCOM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_SCRIPTABLEWITHNOTXPCOM \
  NS_IMETHOD_(void) Method2(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_SCRIPTABLEWITHNOTXPCOM \
  NS_METHOD_(void) Method2(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_SCRIPTABLEWITHNOTXPCOM(_to) \
  NS_IMETHOD_(void) Method2(void) override { return _to Method2(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_SCRIPTABLEWITHNOTXPCOM(_to) \
  NS_IMETHOD_(void) Method2(void) override; 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ScriptableWithNotXPCOM
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_SCRIPTABLEWITHNOTXPCOM

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, ScriptableWithNotXPCOM)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [notxpcom] void method2 (); */
NS_IMETHODIMP_(void) _MYCLASS_::Method2()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    ScriptableWithNotXPCOMBase */
#define SCRIPTABLEWITHNOTXPCOMBASE_IID_STR "4f06ec60-3bb3-4712-ab18-b2b595285558"

#define SCRIPTABLEWITHNOTXPCOMBASE_IID \
  {0x4f06ec60, 0x3bb3, 0x4712, \
    { 0xab, 0x18, 0xb2, 0xb5, 0x95, 0x28, 0x55, 0x58 }}

class NS_NO_VTABLE ScriptableWithNotXPCOMBase : public ScriptableWithNotXPCOM {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(SCRIPTABLEWITHNOTXPCOMBASE_IID)

  /* void method3 (); */
  NS_IMETHOD Method3(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ScriptableWithNotXPCOMBase, SCRIPTABLEWITHNOTXPCOMBASE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_SCRIPTABLEWITHNOTXPCOMBASE \
  NS_IMETHOD Method3(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_SCRIPTABLEWITHNOTXPCOMBASE \
  NS_METHOD Method3(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_SCRIPTABLEWITHNOTXPCOMBASE(_to) \
  NS_IMETHOD Method3(void) override { return _to Method3(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_SCRIPTABLEWITHNOTXPCOMBASE(_to) \
  NS_IMETHOD Method3(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Method3(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ScriptableWithNotXPCOMBase
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_SCRIPTABLEWITHNOTXPCOMBASE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, ScriptableWithNotXPCOMBase)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void method3 (); */
NS_IMETHODIMP _MYCLASS_::Method3()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_NotXPCOMTest_h__ */
