/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPermission.idl
 */

#ifndef __gen_nsIPermission_h__
#define __gen_nsIPermission_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrincipal; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIPermission */
#define NS_IPERMISSION_IID_STR "bb409a51-2371-4fea-9dc9-b7286a458b8c"

#define NS_IPERMISSION_IID \
  {0xbb409a51, 0x2371, 0x4fea, \
    { 0x9d, 0xc9, 0xb7, 0x28, 0x6a, 0x45, 0x8b, 0x8c }}

class NS_NO_VTABLE nsIPermission : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERMISSION_IID)

  /* readonly attribute nsIPrincipal principal; */
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) = 0;

  /* readonly attribute ACString type; */
  NS_IMETHOD GetType(nsACString & aType) = 0;

  /* readonly attribute uint32_t capability; */
  NS_IMETHOD GetCapability(uint32_t *aCapability) = 0;

  /* readonly attribute uint32_t expireType; */
  NS_IMETHOD GetExpireType(uint32_t *aExpireType) = 0;

  /* readonly attribute int64_t expireTime; */
  NS_IMETHOD GetExpireTime(int64_t *aExpireTime) = 0;

  /* boolean matches (in nsIPrincipal principal, in boolean exactHost); */
  NS_IMETHOD Matches(nsIPrincipal *principal, bool exactHost, bool *_retval) = 0;

  /* boolean matchesURI (in nsIURI uri, in boolean exactHost); */
  NS_IMETHOD MatchesURI(nsIURI *uri, bool exactHost, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPermission, NS_IPERMISSION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERMISSION \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override; \
  NS_IMETHOD GetType(nsACString & aType) override; \
  NS_IMETHOD GetCapability(uint32_t *aCapability) override; \
  NS_IMETHOD GetExpireType(uint32_t *aExpireType) override; \
  NS_IMETHOD GetExpireTime(int64_t *aExpireTime) override; \
  NS_IMETHOD Matches(nsIPrincipal *principal, bool exactHost, bool *_retval) override; \
  NS_IMETHOD MatchesURI(nsIURI *uri, bool exactHost, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERMISSION \
  NS_METHOD GetPrincipal(nsIPrincipal * *aPrincipal); \
  NS_METHOD GetType(nsACString & aType); \
  NS_METHOD GetCapability(uint32_t *aCapability); \
  NS_METHOD GetExpireType(uint32_t *aExpireType); \
  NS_METHOD GetExpireTime(int64_t *aExpireTime); \
  NS_METHOD Matches(nsIPrincipal *principal, bool exactHost, bool *_retval); \
  NS_METHOD MatchesURI(nsIURI *uri, bool exactHost, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERMISSION(_to) \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return _to GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetType(nsACString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD GetCapability(uint32_t *aCapability) override { return _to GetCapability(aCapability); } \
  NS_IMETHOD GetExpireType(uint32_t *aExpireType) override { return _to GetExpireType(aExpireType); } \
  NS_IMETHOD GetExpireTime(int64_t *aExpireTime) override { return _to GetExpireTime(aExpireTime); } \
  NS_IMETHOD Matches(nsIPrincipal *principal, bool exactHost, bool *_retval) override { return _to Matches(principal, exactHost, _retval); } \
  NS_IMETHOD MatchesURI(nsIURI *uri, bool exactHost, bool *_retval) override { return _to MatchesURI(uri, exactHost, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERMISSION(_to) \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetType(nsACString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetCapability(uint32_t *aCapability) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCapability(aCapability); } \
  NS_IMETHOD GetExpireType(uint32_t *aExpireType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpireType(aExpireType); } \
  NS_IMETHOD GetExpireTime(int64_t *aExpireTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpireTime(aExpireTime); } \
  NS_IMETHOD Matches(nsIPrincipal *principal, bool exactHost, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Matches(principal, exactHost, _retval); } \
  NS_IMETHOD MatchesURI(nsIURI *uri, bool exactHost, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MatchesURI(uri, exactHost, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPermission : public nsIPermission
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERMISSION

  nsPermission();

private:
  ~nsPermission();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPermission, nsIPermission)

nsPermission::nsPermission()
{
  /* member initializers and constructor code */
}

nsPermission::~nsPermission()
{
  /* destructor code */
}

/* readonly attribute nsIPrincipal principal; */
NS_IMETHODIMP nsPermission::GetPrincipal(nsIPrincipal * *aPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString type; */
NS_IMETHODIMP nsPermission::GetType(nsACString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t capability; */
NS_IMETHODIMP nsPermission::GetCapability(uint32_t *aCapability)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t expireType; */
NS_IMETHODIMP nsPermission::GetExpireType(uint32_t *aExpireType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute int64_t expireTime; */
NS_IMETHODIMP nsPermission::GetExpireTime(int64_t *aExpireTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean matches (in nsIPrincipal principal, in boolean exactHost); */
NS_IMETHODIMP nsPermission::Matches(nsIPrincipal *principal, bool exactHost, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean matchesURI (in nsIURI uri, in boolean exactHost); */
NS_IMETHODIMP nsPermission::MatchesURI(nsIURI *uri, bool exactHost, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPermission_h__ */
