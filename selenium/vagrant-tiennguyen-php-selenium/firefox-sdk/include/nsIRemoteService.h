/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIRemoteService.idl
 */

#ifndef __gen_nsIRemoteService_h__
#define __gen_nsIRemoteService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */


/* starting interface:    nsIRemoteService */
#define NS_IREMOTESERVICE_IID_STR "bf23f1c3-7012-42dd-b0bb-a84060ccc52e"

#define NS_IREMOTESERVICE_IID \
  {0xbf23f1c3, 0x7012, 0x42dd, \
    { 0xb0, 0xbb, 0xa8, 0x40, 0x60, 0xcc, 0xc5, 0x2e }}

class NS_NO_VTABLE nsIRemoteService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IREMOTESERVICE_IID)

  /* void startup (in string appName, in string profileName); */
  NS_IMETHOD Startup(const char * appName, const char * profileName) = 0;

  /* void registerWindow (in mozIDOMWindow aWindow); */
  NS_IMETHOD RegisterWindow(mozIDOMWindow *aWindow) = 0;

  /* void shutdown (); */
  NS_IMETHOD Shutdown(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIRemoteService, NS_IREMOTESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIREMOTESERVICE \
  NS_IMETHOD Startup(const char * appName, const char * profileName) override; \
  NS_IMETHOD RegisterWindow(mozIDOMWindow *aWindow) override; \
  NS_IMETHOD Shutdown(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIREMOTESERVICE \
  NS_METHOD Startup(const char * appName, const char * profileName); \
  NS_METHOD RegisterWindow(mozIDOMWindow *aWindow); \
  NS_METHOD Shutdown(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIREMOTESERVICE(_to) \
  NS_IMETHOD Startup(const char * appName, const char * profileName) override { return _to Startup(appName, profileName); } \
  NS_IMETHOD RegisterWindow(mozIDOMWindow *aWindow) override { return _to RegisterWindow(aWindow); } \
  NS_IMETHOD Shutdown(void) override { return _to Shutdown(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIREMOTESERVICE(_to) \
  NS_IMETHOD Startup(const char * appName, const char * profileName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Startup(appName, profileName); } \
  NS_IMETHOD RegisterWindow(mozIDOMWindow *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterWindow(aWindow); } \
  NS_IMETHOD Shutdown(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Shutdown(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsRemoteService : public nsIRemoteService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIREMOTESERVICE

  nsRemoteService();

private:
  ~nsRemoteService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsRemoteService, nsIRemoteService)

nsRemoteService::nsRemoteService()
{
  /* member initializers and constructor code */
}

nsRemoteService::~nsRemoteService()
{
  /* destructor code */
}

/* void startup (in string appName, in string profileName); */
NS_IMETHODIMP nsRemoteService::Startup(const char * appName, const char * profileName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerWindow (in mozIDOMWindow aWindow); */
NS_IMETHODIMP nsRemoteService::RegisterWindow(mozIDOMWindow *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void shutdown (); */
NS_IMETHODIMP nsRemoteService::Shutdown()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIRemoteService_h__ */
