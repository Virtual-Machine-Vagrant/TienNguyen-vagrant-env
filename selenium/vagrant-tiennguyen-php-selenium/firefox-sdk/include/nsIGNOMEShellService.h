/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIGNOMEShellService.idl
 */

#ifndef __gen_nsIGNOMEShellService_h__
#define __gen_nsIGNOMEShellService_h__


#ifndef __gen_nsIShellService_h__
#include "nsIShellService.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIGNOMEShellService */
#define NS_IGNOMESHELLSERVICE_IID_STR "2ce5c803-edcd-443d-98eb-ceba86d02d13"

#define NS_IGNOMESHELLSERVICE_IID \
  {0x2ce5c803, 0xedcd, 0x443d, \
    { 0x98, 0xeb, 0xce, 0xba, 0x86, 0xd0, 0x2d, 0x13 }}

class NS_NO_VTABLE nsIGNOMEShellService : public nsIShellService {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IGNOMESHELLSERVICE_IID)

  /* readonly attribute boolean canSetDesktopBackground; */
  NS_IMETHOD GetCanSetDesktopBackground(bool *aCanSetDesktopBackground) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIGNOMEShellService, NS_IGNOMESHELLSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIGNOMESHELLSERVICE \
  NS_IMETHOD GetCanSetDesktopBackground(bool *aCanSetDesktopBackground) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIGNOMESHELLSERVICE \
  NS_METHOD GetCanSetDesktopBackground(bool *aCanSetDesktopBackground); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIGNOMESHELLSERVICE(_to) \
  NS_IMETHOD GetCanSetDesktopBackground(bool *aCanSetDesktopBackground) override { return _to GetCanSetDesktopBackground(aCanSetDesktopBackground); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIGNOMESHELLSERVICE(_to) \
  NS_IMETHOD GetCanSetDesktopBackground(bool *aCanSetDesktopBackground) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanSetDesktopBackground(aCanSetDesktopBackground); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsGNOMEShellService : public nsIGNOMEShellService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIGNOMESHELLSERVICE

  nsGNOMEShellService();

private:
  ~nsGNOMEShellService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsGNOMEShellService, nsIGNOMEShellService)

nsGNOMEShellService::nsGNOMEShellService()
{
  /* member initializers and constructor code */
}

nsGNOMEShellService::~nsGNOMEShellService()
{
  /* destructor code */
}

/* readonly attribute boolean canSetDesktopBackground; */
NS_IMETHODIMP nsGNOMEShellService::GetCanSetDesktopBackground(bool *aCanSetDesktopBackground)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIGNOMEShellService_h__ */
