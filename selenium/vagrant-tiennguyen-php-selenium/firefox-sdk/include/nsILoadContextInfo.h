/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsILoadContextInfo.idl
 */

#ifndef __gen_nsILoadContextInfo_h__
#define __gen_nsILoadContextInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "mozilla/BasePrincipal.h"
class nsILoadContext; /* forward declaration */

class nsIDOMWindow; /* forward declaration */


/* starting interface:    nsILoadContextInfo */
#define NS_ILOADCONTEXTINFO_IID_STR "555e2f8a-a1f6-41dd-88ca-ed4ed6b98a22"

#define NS_ILOADCONTEXTINFO_IID \
  {0x555e2f8a, 0xa1f6, 0x41dd, \
    { 0x88, 0xca, 0xed, 0x4e, 0xd6, 0xb9, 0x8a, 0x22 }}

class nsILoadContextInfo : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOADCONTEXTINFO_IID)

  enum {
    NO_APP_ID = 0U,
    UNKNOWN_APP_ID = 4294967295U
  };

  /* readonly attribute boolean isPrivate; */
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) = 0;

  /* readonly attribute boolean isAnonymous; */
  NS_IMETHOD GetIsAnonymous(bool *aIsAnonymous) = 0;

  /* [implicit_jscontext] readonly attribute jsval originAttributes; */
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) = 0;

  /* [binaryname(OriginAttributesPtr),noscript,nostdcall,notxpcom] OriginAttributesNativePtr binaryOriginAttributesPtr (); */
  virtual const mozilla::NeckoOriginAttributes* OriginAttributesPtr(void) = 0;

   /**
   * De-XPCOMed getters
   */
  bool IsPrivate()
  {
    bool pb;
    GetIsPrivate(&pb);
    return pb;
  }
  bool IsAnonymous()
  {
    bool anon;
    GetIsAnonymous(&anon);
    return anon;
  }
  bool Equals(nsILoadContextInfo *aOther)
  {
    return IsPrivate() == aOther->IsPrivate() &&
           IsAnonymous() == aOther->IsAnonymous() &&
           *OriginAttributesPtr() == *aOther->OriginAttributesPtr();
  }
};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILoadContextInfo, NS_ILOADCONTEXTINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOADCONTEXTINFO \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override; \
  NS_IMETHOD GetIsAnonymous(bool *aIsAnonymous) override; \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override; \
  virtual const mozilla::NeckoOriginAttributes* OriginAttributesPtr(void) override; \

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSILOADCONTEXTINFO \
  NS_METHOD GetIsPrivate(bool *aIsPrivate); \
  NS_METHOD GetIsAnonymous(bool *aIsAnonymous); \
  NS_METHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes); \
  const mozilla::NeckoOriginAttributes* OriginAttributesPtr(void); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOADCONTEXTINFO(_to) \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override { return _to GetIsPrivate(aIsPrivate); } \
  NS_IMETHOD GetIsAnonymous(bool *aIsAnonymous) override { return _to GetIsAnonymous(aIsAnonymous); } \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override { return _to GetOriginAttributes(cx, aOriginAttributes); } \
  virtual const mozilla::NeckoOriginAttributes* OriginAttributesPtr(void) override { return _to OriginAttributesPtr(); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOADCONTEXTINFO(_to) \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsPrivate(aIsPrivate); } \
  NS_IMETHOD GetIsAnonymous(bool *aIsAnonymous) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsAnonymous(aIsAnonymous); } \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginAttributes(cx, aOriginAttributes); } \
  virtual const mozilla::NeckoOriginAttributes* OriginAttributesPtr(void) override; \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLoadContextInfo : public nsILoadContextInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOADCONTEXTINFO

  nsLoadContextInfo();

private:
  ~nsLoadContextInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsLoadContextInfo, nsILoadContextInfo)

nsLoadContextInfo::nsLoadContextInfo()
{
  /* member initializers and constructor code */
}

nsLoadContextInfo::~nsLoadContextInfo()
{
  /* destructor code */
}

/* readonly attribute boolean isPrivate; */
NS_IMETHODIMP nsLoadContextInfo::GetIsPrivate(bool *aIsPrivate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isAnonymous; */
NS_IMETHODIMP nsLoadContextInfo::GetIsAnonymous(bool *aIsAnonymous)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval originAttributes; */
NS_IMETHODIMP nsLoadContextInfo::GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(OriginAttributesPtr),noscript,nostdcall,notxpcom] OriginAttributesNativePtr binaryOriginAttributesPtr (); */
const mozilla::NeckoOriginAttributes* nsLoadContextInfo::OriginAttributesPtr()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsILoadContextInfoFactory */
#define NS_ILOADCONTEXTINFOFACTORY_IID_STR "c1c7023d-4318-4f99-8307-b5ccf0558793"

#define NS_ILOADCONTEXTINFOFACTORY_IID \
  {0xc1c7023d, 0x4318, 0x4f99, \
    { 0x83, 0x07, 0xb5, 0xcc, 0xf0, 0x55, 0x87, 0x93 }}

class NS_NO_VTABLE nsILoadContextInfoFactory : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOADCONTEXTINFOFACTORY_IID)

  /* readonly attribute nsILoadContextInfo default; */
  NS_IMETHOD GetDefault(nsILoadContextInfo * *aDefault) = 0;

  /* readonly attribute nsILoadContextInfo private; */
  NS_IMETHOD GetPrivate(nsILoadContextInfo * *aPrivate) = 0;

  /* readonly attribute nsILoadContextInfo anonymous; */
  NS_IMETHOD GetAnonymous(nsILoadContextInfo * *aAnonymous) = 0;

  /* [implicit_jscontext] nsILoadContextInfo custom (in boolean aPrivate, in boolean aAnonymous, in jsval aOriginAttributes); */
  NS_IMETHOD Custom(bool aPrivate, bool aAnonymous, JS::HandleValue aOriginAttributes, JSContext* cx, nsILoadContextInfo * *_retval) = 0;

  /* nsILoadContextInfo fromLoadContext (in nsILoadContext aLoadContext, in boolean aAnonymous); */
  NS_IMETHOD FromLoadContext(nsILoadContext *aLoadContext, bool aAnonymous, nsILoadContextInfo * *_retval) = 0;

  /* nsILoadContextInfo fromWindow (in nsIDOMWindow aWindow, in boolean aAnonymous); */
  NS_IMETHOD FromWindow(nsIDOMWindow *aWindow, bool aAnonymous, nsILoadContextInfo * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILoadContextInfoFactory, NS_ILOADCONTEXTINFOFACTORY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOADCONTEXTINFOFACTORY \
  NS_IMETHOD GetDefault(nsILoadContextInfo * *aDefault) override; \
  NS_IMETHOD GetPrivate(nsILoadContextInfo * *aPrivate) override; \
  NS_IMETHOD GetAnonymous(nsILoadContextInfo * *aAnonymous) override; \
  NS_IMETHOD Custom(bool aPrivate, bool aAnonymous, JS::HandleValue aOriginAttributes, JSContext* cx, nsILoadContextInfo * *_retval) override; \
  NS_IMETHOD FromLoadContext(nsILoadContext *aLoadContext, bool aAnonymous, nsILoadContextInfo * *_retval) override; \
  NS_IMETHOD FromWindow(nsIDOMWindow *aWindow, bool aAnonymous, nsILoadContextInfo * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSILOADCONTEXTINFOFACTORY \
  NS_METHOD GetDefault(nsILoadContextInfo * *aDefault); \
  NS_METHOD GetPrivate(nsILoadContextInfo * *aPrivate); \
  NS_METHOD GetAnonymous(nsILoadContextInfo * *aAnonymous); \
  NS_METHOD Custom(bool aPrivate, bool aAnonymous, JS::HandleValue aOriginAttributes, JSContext* cx, nsILoadContextInfo * *_retval); \
  NS_METHOD FromLoadContext(nsILoadContext *aLoadContext, bool aAnonymous, nsILoadContextInfo * *_retval); \
  NS_METHOD FromWindow(nsIDOMWindow *aWindow, bool aAnonymous, nsILoadContextInfo * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOADCONTEXTINFOFACTORY(_to) \
  NS_IMETHOD GetDefault(nsILoadContextInfo * *aDefault) override { return _to GetDefault(aDefault); } \
  NS_IMETHOD GetPrivate(nsILoadContextInfo * *aPrivate) override { return _to GetPrivate(aPrivate); } \
  NS_IMETHOD GetAnonymous(nsILoadContextInfo * *aAnonymous) override { return _to GetAnonymous(aAnonymous); } \
  NS_IMETHOD Custom(bool aPrivate, bool aAnonymous, JS::HandleValue aOriginAttributes, JSContext* cx, nsILoadContextInfo * *_retval) override { return _to Custom(aPrivate, aAnonymous, aOriginAttributes, cx, _retval); } \
  NS_IMETHOD FromLoadContext(nsILoadContext *aLoadContext, bool aAnonymous, nsILoadContextInfo * *_retval) override { return _to FromLoadContext(aLoadContext, aAnonymous, _retval); } \
  NS_IMETHOD FromWindow(nsIDOMWindow *aWindow, bool aAnonymous, nsILoadContextInfo * *_retval) override { return _to FromWindow(aWindow, aAnonymous, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOADCONTEXTINFOFACTORY(_to) \
  NS_IMETHOD GetDefault(nsILoadContextInfo * *aDefault) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefault(aDefault); } \
  NS_IMETHOD GetPrivate(nsILoadContextInfo * *aPrivate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrivate(aPrivate); } \
  NS_IMETHOD GetAnonymous(nsILoadContextInfo * *aAnonymous) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnonymous(aAnonymous); } \
  NS_IMETHOD Custom(bool aPrivate, bool aAnonymous, JS::HandleValue aOriginAttributes, JSContext* cx, nsILoadContextInfo * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Custom(aPrivate, aAnonymous, aOriginAttributes, cx, _retval); } \
  NS_IMETHOD FromLoadContext(nsILoadContext *aLoadContext, bool aAnonymous, nsILoadContextInfo * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FromLoadContext(aLoadContext, aAnonymous, _retval); } \
  NS_IMETHOD FromWindow(nsIDOMWindow *aWindow, bool aAnonymous, nsILoadContextInfo * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FromWindow(aWindow, aAnonymous, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLoadContextInfoFactory : public nsILoadContextInfoFactory
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOADCONTEXTINFOFACTORY

  nsLoadContextInfoFactory();

private:
  ~nsLoadContextInfoFactory();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsLoadContextInfoFactory, nsILoadContextInfoFactory)

nsLoadContextInfoFactory::nsLoadContextInfoFactory()
{
  /* member initializers and constructor code */
}

nsLoadContextInfoFactory::~nsLoadContextInfoFactory()
{
  /* destructor code */
}

/* readonly attribute nsILoadContextInfo default; */
NS_IMETHODIMP nsLoadContextInfoFactory::GetDefault(nsILoadContextInfo * *aDefault)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsILoadContextInfo private; */
NS_IMETHODIMP nsLoadContextInfoFactory::GetPrivate(nsILoadContextInfo * *aPrivate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsILoadContextInfo anonymous; */
NS_IMETHODIMP nsLoadContextInfoFactory::GetAnonymous(nsILoadContextInfo * *aAnonymous)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsILoadContextInfo custom (in boolean aPrivate, in boolean aAnonymous, in jsval aOriginAttributes); */
NS_IMETHODIMP nsLoadContextInfoFactory::Custom(bool aPrivate, bool aAnonymous, JS::HandleValue aOriginAttributes, JSContext* cx, nsILoadContextInfo * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsILoadContextInfo fromLoadContext (in nsILoadContext aLoadContext, in boolean aAnonymous); */
NS_IMETHODIMP nsLoadContextInfoFactory::FromLoadContext(nsILoadContext *aLoadContext, bool aAnonymous, nsILoadContextInfo * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsILoadContextInfo fromWindow (in nsIDOMWindow aWindow, in boolean aAnonymous); */
NS_IMETHODIMP nsLoadContextInfoFactory::FromWindow(nsIDOMWindow *aWindow, bool aAnonymous, nsILoadContextInfo * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsILoadContextInfo_h__ */
