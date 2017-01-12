/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICookie.idl
 */

#ifndef __gen_nsICookie_h__
#define __gen_nsICookie_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
typedef int32_t  nsCookieStatus;

typedef int32_t  nsCookiePolicy;


/* starting interface:    nsICookie */
#define NS_ICOOKIE_IID_STR "adf0db5e-211e-45a3-be14-4486ac430a58"

#define NS_ICOOKIE_IID \
  {0xadf0db5e, 0x211e, 0x45a3, \
    { 0xbe, 0x14, 0x44, 0x86, 0xac, 0x43, 0x0a, 0x58 }}

class NS_NO_VTABLE nsICookie : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOOKIE_IID)

  /* readonly attribute ACString name; */
  NS_IMETHOD GetName(nsACString & aName) = 0;

  /* readonly attribute AUTF8String value; */
  NS_IMETHOD GetValue(nsACString & aValue) = 0;

  /* readonly attribute boolean isDomain; */
  NS_IMETHOD GetIsDomain(bool *aIsDomain) = 0;

  /* readonly attribute AUTF8String host; */
  NS_IMETHOD GetHost(nsACString & aHost) = 0;

  /* readonly attribute AUTF8String path; */
  NS_IMETHOD GetPath(nsACString & aPath) = 0;

  /* readonly attribute boolean isSecure; */
  NS_IMETHOD GetIsSecure(bool *aIsSecure) = 0;

  /* readonly attribute uint64_t expires; */
  NS_IMETHOD GetExpires(uint64_t *aExpires) = 0;

  enum {
    STATUS_UNKNOWN = 0,
    STATUS_ACCEPTED = 1,
    STATUS_DOWNGRADED = 2,
    STATUS_FLAGGED = 3,
    STATUS_REJECTED = 4
  };

  /* readonly attribute nsCookieStatus status; */
  NS_IMETHOD GetStatus(nsCookieStatus *aStatus) = 0;

  enum {
    POLICY_UNKNOWN = 0,
    POLICY_NONE = 1,
    POLICY_NO_CONSENT = 2,
    POLICY_IMPLICIT_CONSENT = 3,
    POLICY_EXPLICIT_CONSENT = 4,
    POLICY_NO_II = 5
  };

  /* readonly attribute nsCookiePolicy policy; */
  NS_IMETHOD GetPolicy(nsCookiePolicy *aPolicy) = 0;

  /* [implicit_jscontext] readonly attribute jsval originAttributes; */
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICookie, NS_ICOOKIE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOOKIE \
  NS_IMETHOD GetName(nsACString & aName) override; \
  NS_IMETHOD GetValue(nsACString & aValue) override; \
  NS_IMETHOD GetIsDomain(bool *aIsDomain) override; \
  NS_IMETHOD GetHost(nsACString & aHost) override; \
  NS_IMETHOD GetPath(nsACString & aPath) override; \
  NS_IMETHOD GetIsSecure(bool *aIsSecure) override; \
  NS_IMETHOD GetExpires(uint64_t *aExpires) override; \
  NS_IMETHOD GetStatus(nsCookieStatus *aStatus) override; \
  NS_IMETHOD GetPolicy(nsCookiePolicy *aPolicy) override; \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICOOKIE \
  NS_METHOD GetName(nsACString & aName); \
  NS_METHOD GetValue(nsACString & aValue); \
  NS_METHOD GetIsDomain(bool *aIsDomain); \
  NS_METHOD GetHost(nsACString & aHost); \
  NS_METHOD GetPath(nsACString & aPath); \
  NS_METHOD GetIsSecure(bool *aIsSecure); \
  NS_METHOD GetExpires(uint64_t *aExpires); \
  NS_METHOD GetStatus(nsCookieStatus *aStatus); \
  NS_METHOD GetPolicy(nsCookiePolicy *aPolicy); \
  NS_METHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOOKIE(_to) \
  NS_IMETHOD GetName(nsACString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD GetValue(nsACString & aValue) override { return _to GetValue(aValue); } \
  NS_IMETHOD GetIsDomain(bool *aIsDomain) override { return _to GetIsDomain(aIsDomain); } \
  NS_IMETHOD GetHost(nsACString & aHost) override { return _to GetHost(aHost); } \
  NS_IMETHOD GetPath(nsACString & aPath) override { return _to GetPath(aPath); } \
  NS_IMETHOD GetIsSecure(bool *aIsSecure) override { return _to GetIsSecure(aIsSecure); } \
  NS_IMETHOD GetExpires(uint64_t *aExpires) override { return _to GetExpires(aExpires); } \
  NS_IMETHOD GetStatus(nsCookieStatus *aStatus) override { return _to GetStatus(aStatus); } \
  NS_IMETHOD GetPolicy(nsCookiePolicy *aPolicy) override { return _to GetPolicy(aPolicy); } \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override { return _to GetOriginAttributes(cx, aOriginAttributes); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOOKIE(_to) \
  NS_IMETHOD GetName(nsACString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD GetValue(nsACString & aValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD GetIsDomain(bool *aIsDomain) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsDomain(aIsDomain); } \
  NS_IMETHOD GetHost(nsACString & aHost) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHost(aHost); } \
  NS_IMETHOD GetPath(nsACString & aPath) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPath(aPath); } \
  NS_IMETHOD GetIsSecure(bool *aIsSecure) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSecure(aIsSecure); } \
  NS_IMETHOD GetExpires(uint64_t *aExpires) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpires(aExpires); } \
  NS_IMETHOD GetStatus(nsCookieStatus *aStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatus(aStatus); } \
  NS_IMETHOD GetPolicy(nsCookiePolicy *aPolicy) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPolicy(aPolicy); } \
  NS_IMETHOD GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginAttributes(cx, aOriginAttributes); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCookie : public nsICookie
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOOKIE

  nsCookie();

private:
  ~nsCookie();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCookie, nsICookie)

nsCookie::nsCookie()
{
  /* member initializers and constructor code */
}

nsCookie::~nsCookie()
{
  /* destructor code */
}

/* readonly attribute ACString name; */
NS_IMETHODIMP nsCookie::GetName(nsACString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String value; */
NS_IMETHODIMP nsCookie::GetValue(nsACString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isDomain; */
NS_IMETHODIMP nsCookie::GetIsDomain(bool *aIsDomain)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String host; */
NS_IMETHODIMP nsCookie::GetHost(nsACString & aHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String path; */
NS_IMETHODIMP nsCookie::GetPath(nsACString & aPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSecure; */
NS_IMETHODIMP nsCookie::GetIsSecure(bool *aIsSecure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint64_t expires; */
NS_IMETHODIMP nsCookie::GetExpires(uint64_t *aExpires)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsCookieStatus status; */
NS_IMETHODIMP nsCookie::GetStatus(nsCookieStatus *aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsCookiePolicy policy; */
NS_IMETHODIMP nsCookie::GetPolicy(nsCookiePolicy *aPolicy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval originAttributes; */
NS_IMETHODIMP nsCookie::GetOriginAttributes(JSContext* cx, JS::MutableHandleValue aOriginAttributes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICookie_h__ */
