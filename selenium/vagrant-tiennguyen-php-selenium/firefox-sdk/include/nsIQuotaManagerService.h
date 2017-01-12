/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIQuotaManagerService.idl
 */

#ifndef __gen_nsIQuotaManagerService_h__
#define __gen_nsIQuotaManagerService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrincipal; /* forward declaration */

class nsIQuotaRequest; /* forward declaration */

class nsIQuotaUsageCallback; /* forward declaration */

class nsIQuotaUsageRequest; /* forward declaration */


/* starting interface:    nsIQuotaManagerService */
#define NS_IQUOTAMANAGERSERVICE_IID_STR "1b3d0a38-8151-4cf9-89fa-4f92c2ef0e7e"

#define NS_IQUOTAMANAGERSERVICE_IID \
  {0x1b3d0a38, 0x8151, 0x4cf9, \
    { 0x89, 0xfa, 0x4f, 0x92, 0xc2, 0xef, 0x0e, 0x7e }}

class NS_NO_VTABLE nsIQuotaManagerService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IQUOTAMANAGERSERVICE_IID)

  /* nsIQuotaUsageRequest getUsageForPrincipal (in nsIPrincipal aPrincipal, in nsIQuotaUsageCallback aCallback); */
  NS_IMETHOD GetUsageForPrincipal(nsIPrincipal *aPrincipal, nsIQuotaUsageCallback *aCallback, nsIQuotaUsageRequest * *_retval) = 0;

  /* nsIQuotaRequest clear (); */
  NS_IMETHOD Clear(nsIQuotaRequest * *_retval) = 0;

  /* nsIQuotaRequest clearStoragesForPrincipal (in nsIPrincipal aPrincipal, [optional] in ACString aPersistenceType); */
  NS_IMETHOD ClearStoragesForPrincipal(nsIPrincipal *aPrincipal, const nsACString & aPersistenceType, nsIQuotaRequest * *_retval) = 0;

  /* nsIQuotaRequest reset (); */
  NS_IMETHOD Reset(nsIQuotaRequest * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIQuotaManagerService, NS_IQUOTAMANAGERSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIQUOTAMANAGERSERVICE \
  NS_IMETHOD GetUsageForPrincipal(nsIPrincipal *aPrincipal, nsIQuotaUsageCallback *aCallback, nsIQuotaUsageRequest * *_retval) override; \
  NS_IMETHOD Clear(nsIQuotaRequest * *_retval) override; \
  NS_IMETHOD ClearStoragesForPrincipal(nsIPrincipal *aPrincipal, const nsACString & aPersistenceType, nsIQuotaRequest * *_retval) override; \
  NS_IMETHOD Reset(nsIQuotaRequest * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIQUOTAMANAGERSERVICE \
  NS_METHOD GetUsageForPrincipal(nsIPrincipal *aPrincipal, nsIQuotaUsageCallback *aCallback, nsIQuotaUsageRequest * *_retval); \
  NS_METHOD Clear(nsIQuotaRequest * *_retval); \
  NS_METHOD ClearStoragesForPrincipal(nsIPrincipal *aPrincipal, const nsACString & aPersistenceType, nsIQuotaRequest * *_retval); \
  NS_METHOD Reset(nsIQuotaRequest * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIQUOTAMANAGERSERVICE(_to) \
  NS_IMETHOD GetUsageForPrincipal(nsIPrincipal *aPrincipal, nsIQuotaUsageCallback *aCallback, nsIQuotaUsageRequest * *_retval) override { return _to GetUsageForPrincipal(aPrincipal, aCallback, _retval); } \
  NS_IMETHOD Clear(nsIQuotaRequest * *_retval) override { return _to Clear(_retval); } \
  NS_IMETHOD ClearStoragesForPrincipal(nsIPrincipal *aPrincipal, const nsACString & aPersistenceType, nsIQuotaRequest * *_retval) override { return _to ClearStoragesForPrincipal(aPrincipal, aPersistenceType, _retval); } \
  NS_IMETHOD Reset(nsIQuotaRequest * *_retval) override { return _to Reset(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIQUOTAMANAGERSERVICE(_to) \
  NS_IMETHOD GetUsageForPrincipal(nsIPrincipal *aPrincipal, nsIQuotaUsageCallback *aCallback, nsIQuotaUsageRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsageForPrincipal(aPrincipal, aCallback, _retval); } \
  NS_IMETHOD Clear(nsIQuotaRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(_retval); } \
  NS_IMETHOD ClearStoragesForPrincipal(nsIPrincipal *aPrincipal, const nsACString & aPersistenceType, nsIQuotaRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearStoragesForPrincipal(aPrincipal, aPersistenceType, _retval); } \
  NS_IMETHOD Reset(nsIQuotaRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Reset(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsQuotaManagerService : public nsIQuotaManagerService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIQUOTAMANAGERSERVICE

  nsQuotaManagerService();

private:
  ~nsQuotaManagerService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsQuotaManagerService, nsIQuotaManagerService)

nsQuotaManagerService::nsQuotaManagerService()
{
  /* member initializers and constructor code */
}

nsQuotaManagerService::~nsQuotaManagerService()
{
  /* destructor code */
}

/* nsIQuotaUsageRequest getUsageForPrincipal (in nsIPrincipal aPrincipal, in nsIQuotaUsageCallback aCallback); */
NS_IMETHODIMP nsQuotaManagerService::GetUsageForPrincipal(nsIPrincipal *aPrincipal, nsIQuotaUsageCallback *aCallback, nsIQuotaUsageRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIQuotaRequest clear (); */
NS_IMETHODIMP nsQuotaManagerService::Clear(nsIQuotaRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIQuotaRequest clearStoragesForPrincipal (in nsIPrincipal aPrincipal, [optional] in ACString aPersistenceType); */
NS_IMETHODIMP nsQuotaManagerService::ClearStoragesForPrincipal(nsIPrincipal *aPrincipal, const nsACString & aPersistenceType, nsIQuotaRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIQuotaRequest reset (); */
NS_IMETHODIMP nsQuotaManagerService::Reset(nsIQuotaRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIQuotaManagerService_h__ */
