/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAddonPolicyService.idl
 */

#ifndef __gen_nsIAddonPolicyService_h__
#define __gen_nsIAddonPolicyService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIAddonPolicyService */
#define NS_IADDONPOLICYSERVICE_IID_STR "8a034ef9-9d14-4c5d-8319-06c1ab574baa"

#define NS_IADDONPOLICYSERVICE_IID \
  {0x8a034ef9, 0x9d14, 0x4c5d, \
    { 0x83, 0x19, 0x06, 0xc1, 0xab, 0x57, 0x4b, 0xaa }}

class NS_NO_VTABLE nsIAddonPolicyService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IADDONPOLICYSERVICE_IID)

  /* boolean addonMayLoadURI (in AString aAddonId, in nsIURI aURI); */
  NS_IMETHOD AddonMayLoadURI(const nsAString & aAddonId, nsIURI *aURI, bool *_retval) = 0;

  /* boolean extensionURILoadableByAnyone (in nsIURI aURI); */
  NS_IMETHOD ExtensionURILoadableByAnyone(nsIURI *aURI, bool *_retval) = 0;

  /* AString extensionURIToAddonId (in nsIURI aURI); */
  NS_IMETHOD ExtensionURIToAddonId(nsIURI *aURI, nsAString & _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAddonPolicyService, NS_IADDONPOLICYSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIADDONPOLICYSERVICE \
  NS_IMETHOD AddonMayLoadURI(const nsAString & aAddonId, nsIURI *aURI, bool *_retval) override; \
  NS_IMETHOD ExtensionURILoadableByAnyone(nsIURI *aURI, bool *_retval) override; \
  NS_IMETHOD ExtensionURIToAddonId(nsIURI *aURI, nsAString & _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIADDONPOLICYSERVICE \
  NS_METHOD AddonMayLoadURI(const nsAString & aAddonId, nsIURI *aURI, bool *_retval); \
  NS_METHOD ExtensionURILoadableByAnyone(nsIURI *aURI, bool *_retval); \
  NS_METHOD ExtensionURIToAddonId(nsIURI *aURI, nsAString & _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIADDONPOLICYSERVICE(_to) \
  NS_IMETHOD AddonMayLoadURI(const nsAString & aAddonId, nsIURI *aURI, bool *_retval) override { return _to AddonMayLoadURI(aAddonId, aURI, _retval); } \
  NS_IMETHOD ExtensionURILoadableByAnyone(nsIURI *aURI, bool *_retval) override { return _to ExtensionURILoadableByAnyone(aURI, _retval); } \
  NS_IMETHOD ExtensionURIToAddonId(nsIURI *aURI, nsAString & _retval) override { return _to ExtensionURIToAddonId(aURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIADDONPOLICYSERVICE(_to) \
  NS_IMETHOD AddonMayLoadURI(const nsAString & aAddonId, nsIURI *aURI, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddonMayLoadURI(aAddonId, aURI, _retval); } \
  NS_IMETHOD ExtensionURILoadableByAnyone(nsIURI *aURI, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtensionURILoadableByAnyone(aURI, _retval); } \
  NS_IMETHOD ExtensionURIToAddonId(nsIURI *aURI, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtensionURIToAddonId(aURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAddonPolicyService : public nsIAddonPolicyService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIADDONPOLICYSERVICE

  nsAddonPolicyService();

private:
  ~nsAddonPolicyService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAddonPolicyService, nsIAddonPolicyService)

nsAddonPolicyService::nsAddonPolicyService()
{
  /* member initializers and constructor code */
}

nsAddonPolicyService::~nsAddonPolicyService()
{
  /* destructor code */
}

/* boolean addonMayLoadURI (in AString aAddonId, in nsIURI aURI); */
NS_IMETHODIMP nsAddonPolicyService::AddonMayLoadURI(const nsAString & aAddonId, nsIURI *aURI, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean extensionURILoadableByAnyone (in nsIURI aURI); */
NS_IMETHODIMP nsAddonPolicyService::ExtensionURILoadableByAnyone(nsIURI *aURI, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString extensionURIToAddonId (in nsIURI aURI); */
NS_IMETHODIMP nsAddonPolicyService::ExtensionURIToAddonId(nsIURI *aURI, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAddonPolicyService_h__ */
