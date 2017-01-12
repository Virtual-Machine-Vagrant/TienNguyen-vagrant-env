/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWeakCryptoOverride.idl
 */

#ifndef __gen_nsIWeakCryptoOverride_h__
#define __gen_nsIWeakCryptoOverride_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#define NS_WEAKCRYPTOOVERRIDE_CONTRACTID "@mozilla.org/security/weakcryptooverride;1"

/* starting interface:    nsIWeakCryptoOverride */
#define NS_IWEAKCRYPTOOVERRIDE_IID_STR "27b4d3df-8f15-4eb4-a35f-474e911b61e7"

#define NS_IWEAKCRYPTOOVERRIDE_IID \
  {0x27b4d3df, 0x8f15, 0x4eb4, \
    { 0xa3, 0x5f, 0x47, 0x4e, 0x91, 0x1b, 0x61, 0xe7 }}

class NS_NO_VTABLE nsIWeakCryptoOverride : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEAKCRYPTOOVERRIDE_IID)

  /* void addWeakCryptoOverride (in ACString aHostName, in boolean aPrivate, [optional] in boolean aTemporary); */
  NS_IMETHOD AddWeakCryptoOverride(const nsACString & aHostName, bool aPrivate, bool aTemporary) = 0;

  /* void removeWeakCryptoOverride (in ACString aHostName, in int32_t aPort, in boolean aPrivate); */
  NS_IMETHOD RemoveWeakCryptoOverride(const nsACString & aHostName, int32_t aPort, bool aPrivate) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWeakCryptoOverride, NS_IWEAKCRYPTOOVERRIDE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEAKCRYPTOOVERRIDE \
  NS_IMETHOD AddWeakCryptoOverride(const nsACString & aHostName, bool aPrivate, bool aTemporary) override; \
  NS_IMETHOD RemoveWeakCryptoOverride(const nsACString & aHostName, int32_t aPort, bool aPrivate) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEAKCRYPTOOVERRIDE \
  NS_METHOD AddWeakCryptoOverride(const nsACString & aHostName, bool aPrivate, bool aTemporary); \
  NS_METHOD RemoveWeakCryptoOverride(const nsACString & aHostName, int32_t aPort, bool aPrivate); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEAKCRYPTOOVERRIDE(_to) \
  NS_IMETHOD AddWeakCryptoOverride(const nsACString & aHostName, bool aPrivate, bool aTemporary) override { return _to AddWeakCryptoOverride(aHostName, aPrivate, aTemporary); } \
  NS_IMETHOD RemoveWeakCryptoOverride(const nsACString & aHostName, int32_t aPort, bool aPrivate) override { return _to RemoveWeakCryptoOverride(aHostName, aPort, aPrivate); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEAKCRYPTOOVERRIDE(_to) \
  NS_IMETHOD AddWeakCryptoOverride(const nsACString & aHostName, bool aPrivate, bool aTemporary) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddWeakCryptoOverride(aHostName, aPrivate, aTemporary); } \
  NS_IMETHOD RemoveWeakCryptoOverride(const nsACString & aHostName, int32_t aPort, bool aPrivate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveWeakCryptoOverride(aHostName, aPort, aPrivate); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWeakCryptoOverride : public nsIWeakCryptoOverride
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEAKCRYPTOOVERRIDE

  nsWeakCryptoOverride();

private:
  ~nsWeakCryptoOverride();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWeakCryptoOverride, nsIWeakCryptoOverride)

nsWeakCryptoOverride::nsWeakCryptoOverride()
{
  /* member initializers and constructor code */
}

nsWeakCryptoOverride::~nsWeakCryptoOverride()
{
  /* destructor code */
}

/* void addWeakCryptoOverride (in ACString aHostName, in boolean aPrivate, [optional] in boolean aTemporary); */
NS_IMETHODIMP nsWeakCryptoOverride::AddWeakCryptoOverride(const nsACString & aHostName, bool aPrivate, bool aTemporary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeWeakCryptoOverride (in ACString aHostName, in int32_t aPort, in boolean aPrivate); */
NS_IMETHODIMP nsWeakCryptoOverride::RemoveWeakCryptoOverride(const nsACString & aHostName, int32_t aPort, bool aPrivate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWeakCryptoOverride_h__ */
