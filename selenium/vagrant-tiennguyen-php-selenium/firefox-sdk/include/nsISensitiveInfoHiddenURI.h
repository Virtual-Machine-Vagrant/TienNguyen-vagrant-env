/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISensitiveInfoHiddenURI.idl
 */

#ifndef __gen_nsISensitiveInfoHiddenURI_h__
#define __gen_nsISensitiveInfoHiddenURI_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISensitiveInfoHiddenURI */
#define NS_ISENSITIVEINFOHIDDENURI_IID_STR "a5761968-6e1a-4f2d-8191-ec749602b178"

#define NS_ISENSITIVEINFOHIDDENURI_IID \
  {0xa5761968, 0x6e1a, 0x4f2d, \
    { 0x81, 0x91, 0xec, 0x74, 0x96, 0x02, 0xb1, 0x78 }}

class NS_NO_VTABLE nsISensitiveInfoHiddenURI : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISENSITIVEINFOHIDDENURI_IID)

  /* AUTF8String getSensitiveInfoHiddenSpec (); */
  NS_IMETHOD GetSensitiveInfoHiddenSpec(nsACString & _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISensitiveInfoHiddenURI, NS_ISENSITIVEINFOHIDDENURI_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISENSITIVEINFOHIDDENURI \
  NS_IMETHOD GetSensitiveInfoHiddenSpec(nsACString & _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISENSITIVEINFOHIDDENURI \
  NS_METHOD GetSensitiveInfoHiddenSpec(nsACString & _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISENSITIVEINFOHIDDENURI(_to) \
  NS_IMETHOD GetSensitiveInfoHiddenSpec(nsACString & _retval) override { return _to GetSensitiveInfoHiddenSpec(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISENSITIVEINFOHIDDENURI(_to) \
  NS_IMETHOD GetSensitiveInfoHiddenSpec(nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSensitiveInfoHiddenSpec(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSensitiveInfoHiddenURI : public nsISensitiveInfoHiddenURI
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISENSITIVEINFOHIDDENURI

  nsSensitiveInfoHiddenURI();

private:
  ~nsSensitiveInfoHiddenURI();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSensitiveInfoHiddenURI, nsISensitiveInfoHiddenURI)

nsSensitiveInfoHiddenURI::nsSensitiveInfoHiddenURI()
{
  /* member initializers and constructor code */
}

nsSensitiveInfoHiddenURI::~nsSensitiveInfoHiddenURI()
{
  /* destructor code */
}

/* AUTF8String getSensitiveInfoHiddenSpec (); */
NS_IMETHODIMP nsSensitiveInfoHiddenURI::GetSensitiveInfoHiddenSpec(nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISensitiveInfoHiddenURI_h__ */
