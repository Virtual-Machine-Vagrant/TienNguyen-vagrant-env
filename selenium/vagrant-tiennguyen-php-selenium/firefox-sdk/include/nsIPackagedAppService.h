/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPackagedAppService.idl
 */

#ifndef __gen_nsIPackagedAppService_h__
#define __gen_nsIPackagedAppService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIChannel; /* forward declaration */

class nsICacheEntryOpenCallback; /* forward declaration */

  #define PACKAGED_APP_TOKEN "!//"

/* starting interface:    nsIPackagedAppService */
#define NS_IPACKAGEDAPPSERVICE_IID_STR "9c96c638-e80c-4dce-abec-c96fdb7a25d8"

#define NS_IPACKAGEDAPPSERVICE_IID \
  {0x9c96c638, 0xe80c, 0x4dce, \
    { 0xab, 0xec, 0xc9, 0x6f, 0xdb, 0x7a, 0x25, 0xd8 }}

class NS_NO_VTABLE nsIPackagedAppService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPACKAGEDAPPSERVICE_IID)

  /* void getResource (in nsIChannel aChannel, in nsICacheEntryOpenCallback aCallback); */
  NS_IMETHOD GetResource(nsIChannel *aChannel, nsICacheEntryOpenCallback *aCallback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPackagedAppService, NS_IPACKAGEDAPPSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPACKAGEDAPPSERVICE \
  NS_IMETHOD GetResource(nsIChannel *aChannel, nsICacheEntryOpenCallback *aCallback) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPACKAGEDAPPSERVICE \
  NS_METHOD GetResource(nsIChannel *aChannel, nsICacheEntryOpenCallback *aCallback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPACKAGEDAPPSERVICE(_to) \
  NS_IMETHOD GetResource(nsIChannel *aChannel, nsICacheEntryOpenCallback *aCallback) override { return _to GetResource(aChannel, aCallback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPACKAGEDAPPSERVICE(_to) \
  NS_IMETHOD GetResource(nsIChannel *aChannel, nsICacheEntryOpenCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResource(aChannel, aCallback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPackagedAppService : public nsIPackagedAppService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPACKAGEDAPPSERVICE

  nsPackagedAppService();

private:
  ~nsPackagedAppService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPackagedAppService, nsIPackagedAppService)

nsPackagedAppService::nsPackagedAppService()
{
  /* member initializers and constructor code */
}

nsPackagedAppService::~nsPackagedAppService()
{
  /* destructor code */
}

/* void getResource (in nsIChannel aChannel, in nsICacheEntryOpenCallback aCallback); */
NS_IMETHODIMP nsPackagedAppService::GetResource(nsIChannel *aChannel, nsICacheEntryOpenCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPackagedAppService_h__ */
