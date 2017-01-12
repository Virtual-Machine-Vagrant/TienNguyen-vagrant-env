/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICaptivePortalService.idl
 */

#ifndef __gen_nsICaptivePortalService_h__
#define __gen_nsICaptivePortalService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICaptivePortalServiceCallback */
#define NS_ICAPTIVEPORTALSERVICECALLBACK_IID_STR "b5fd5629-d04c-4138-9529-9311f291ecd4"

#define NS_ICAPTIVEPORTALSERVICECALLBACK_IID \
  {0xb5fd5629, 0xd04c, 0x4138, \
    { 0x95, 0x29, 0x93, 0x11, 0xf2, 0x91, 0xec, 0xd4 }}

class NS_NO_VTABLE nsICaptivePortalServiceCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICAPTIVEPORTALSERVICECALLBACK_IID)

  /* void complete (in bool success, in nsresult error); */
  NS_IMETHOD Complete(bool success, nsresult error) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICaptivePortalServiceCallback, NS_ICAPTIVEPORTALSERVICECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICAPTIVEPORTALSERVICECALLBACK \
  NS_IMETHOD Complete(bool success, nsresult error) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICAPTIVEPORTALSERVICECALLBACK \
  NS_METHOD Complete(bool success, nsresult error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICAPTIVEPORTALSERVICECALLBACK(_to) \
  NS_IMETHOD Complete(bool success, nsresult error) override { return _to Complete(success, error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICAPTIVEPORTALSERVICECALLBACK(_to) \
  NS_IMETHOD Complete(bool success, nsresult error) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Complete(success, error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCaptivePortalServiceCallback : public nsICaptivePortalServiceCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICAPTIVEPORTALSERVICECALLBACK

  nsCaptivePortalServiceCallback();

private:
  ~nsCaptivePortalServiceCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCaptivePortalServiceCallback, nsICaptivePortalServiceCallback)

nsCaptivePortalServiceCallback::nsCaptivePortalServiceCallback()
{
  /* member initializers and constructor code */
}

nsCaptivePortalServiceCallback::~nsCaptivePortalServiceCallback()
{
  /* destructor code */
}

/* void complete (in bool success, in nsresult error); */
NS_IMETHODIMP nsCaptivePortalServiceCallback::Complete(bool success, nsresult error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsICaptivePortalService */
#define NS_ICAPTIVEPORTALSERVICE_IID_STR "bdbe0555-fc3d-4f7b-9205-c309ceb2d641"

#define NS_ICAPTIVEPORTALSERVICE_IID \
  {0xbdbe0555, 0xfc3d, 0x4f7b, \
    { 0x92, 0x05, 0xc3, 0x09, 0xce, 0xb2, 0xd6, 0x41 }}

class NS_NO_VTABLE nsICaptivePortalService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICAPTIVEPORTALSERVICE_IID)

  enum {
    UNKNOWN = 0,
    NOT_CAPTIVE = 1,
    UNLOCKED_PORTAL = 2,
    LOCKED_PORTAL = 3
  };

  /* void recheckCaptivePortal (); */
  NS_IMETHOD RecheckCaptivePortal(void) = 0;

  /* readonly attribute long state; */
  NS_IMETHOD GetState(int32_t *aState) = 0;

  /* readonly attribute unsigned long long lastChecked; */
  NS_IMETHOD GetLastChecked(uint64_t *aLastChecked) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICaptivePortalService, NS_ICAPTIVEPORTALSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICAPTIVEPORTALSERVICE \
  NS_IMETHOD RecheckCaptivePortal(void) override; \
  NS_IMETHOD GetState(int32_t *aState) override; \
  NS_IMETHOD GetLastChecked(uint64_t *aLastChecked) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICAPTIVEPORTALSERVICE \
  NS_METHOD RecheckCaptivePortal(void); \
  NS_METHOD GetState(int32_t *aState); \
  NS_METHOD GetLastChecked(uint64_t *aLastChecked); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICAPTIVEPORTALSERVICE(_to) \
  NS_IMETHOD RecheckCaptivePortal(void) override { return _to RecheckCaptivePortal(); } \
  NS_IMETHOD GetState(int32_t *aState) override { return _to GetState(aState); } \
  NS_IMETHOD GetLastChecked(uint64_t *aLastChecked) override { return _to GetLastChecked(aLastChecked); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICAPTIVEPORTALSERVICE(_to) \
  NS_IMETHOD RecheckCaptivePortal(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RecheckCaptivePortal(); } \
  NS_IMETHOD GetState(int32_t *aState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } \
  NS_IMETHOD GetLastChecked(uint64_t *aLastChecked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastChecked(aLastChecked); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCaptivePortalService : public nsICaptivePortalService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICAPTIVEPORTALSERVICE

  nsCaptivePortalService();

private:
  ~nsCaptivePortalService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCaptivePortalService, nsICaptivePortalService)

nsCaptivePortalService::nsCaptivePortalService()
{
  /* member initializers and constructor code */
}

nsCaptivePortalService::~nsCaptivePortalService()
{
  /* destructor code */
}

/* void recheckCaptivePortal (); */
NS_IMETHODIMP nsCaptivePortalService::RecheckCaptivePortal()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long state; */
NS_IMETHODIMP nsCaptivePortalService::GetState(int32_t *aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long lastChecked; */
NS_IMETHODIMP nsCaptivePortalService::GetLastChecked(uint64_t *aLastChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICaptivePortalService_h__ */
