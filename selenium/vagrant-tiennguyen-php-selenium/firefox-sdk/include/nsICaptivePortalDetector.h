/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICaptivePortalDetector.idl
 */

#ifndef __gen_nsICaptivePortalDetector_h__
#define __gen_nsICaptivePortalDetector_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICaptivePortalCallback */
#define NS_ICAPTIVEPORTALCALLBACK_IID_STR "593fdeec-6284-4de8-b416-8e63cbdc695e"

#define NS_ICAPTIVEPORTALCALLBACK_IID \
  {0x593fdeec, 0x6284, 0x4de8, \
    { 0xb4, 0x16, 0x8e, 0x63, 0xcb, 0xdc, 0x69, 0x5e }}

class NS_NO_VTABLE nsICaptivePortalCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICAPTIVEPORTALCALLBACK_IID)

  /* void prepare (); */
  NS_IMETHOD Prepare(void) = 0;

  /* void complete (in bool success); */
  NS_IMETHOD Complete(bool success) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICaptivePortalCallback, NS_ICAPTIVEPORTALCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICAPTIVEPORTALCALLBACK \
  NS_IMETHOD Prepare(void) override; \
  NS_IMETHOD Complete(bool success) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICAPTIVEPORTALCALLBACK \
  NS_METHOD Prepare(void); \
  NS_METHOD Complete(bool success); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICAPTIVEPORTALCALLBACK(_to) \
  NS_IMETHOD Prepare(void) override { return _to Prepare(); } \
  NS_IMETHOD Complete(bool success) override { return _to Complete(success); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICAPTIVEPORTALCALLBACK(_to) \
  NS_IMETHOD Prepare(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Prepare(); } \
  NS_IMETHOD Complete(bool success) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Complete(success); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCaptivePortalCallback : public nsICaptivePortalCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICAPTIVEPORTALCALLBACK

  nsCaptivePortalCallback();

private:
  ~nsCaptivePortalCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCaptivePortalCallback, nsICaptivePortalCallback)

nsCaptivePortalCallback::nsCaptivePortalCallback()
{
  /* member initializers and constructor code */
}

nsCaptivePortalCallback::~nsCaptivePortalCallback()
{
  /* destructor code */
}

/* void prepare (); */
NS_IMETHODIMP nsCaptivePortalCallback::Prepare()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void complete (in bool success); */
NS_IMETHODIMP nsCaptivePortalCallback::Complete(bool success)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsICaptivePortalDetector */
#define NS_ICAPTIVEPORTALDETECTOR_IID_STR "2f827c5a-f551-477f-af09-71adbfbd854a"

#define NS_ICAPTIVEPORTALDETECTOR_IID \
  {0x2f827c5a, 0xf551, 0x477f, \
    { 0xaf, 0x09, 0x71, 0xad, 0xbf, 0xbd, 0x85, 0x4a }}

class NS_NO_VTABLE nsICaptivePortalDetector : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICAPTIVEPORTALDETECTOR_IID)

  /* void checkCaptivePortal (in wstring ifname, in nsICaptivePortalCallback callback); */
  NS_IMETHOD CheckCaptivePortal(const char16_t * ifname, nsICaptivePortalCallback *callback) = 0;

  /* void abort (in wstring ifname); */
  NS_IMETHOD Abort(const char16_t * ifname) = 0;

  /* void cancelLogin (in wstring eventId); */
  NS_IMETHOD CancelLogin(const char16_t * eventId) = 0;

  /* void finishPreparation (in wstring ifname); */
  NS_IMETHOD FinishPreparation(const char16_t * ifname) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICaptivePortalDetector, NS_ICAPTIVEPORTALDETECTOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICAPTIVEPORTALDETECTOR \
  NS_IMETHOD CheckCaptivePortal(const char16_t * ifname, nsICaptivePortalCallback *callback) override; \
  NS_IMETHOD Abort(const char16_t * ifname) override; \
  NS_IMETHOD CancelLogin(const char16_t * eventId) override; \
  NS_IMETHOD FinishPreparation(const char16_t * ifname) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICAPTIVEPORTALDETECTOR \
  NS_METHOD CheckCaptivePortal(const char16_t * ifname, nsICaptivePortalCallback *callback); \
  NS_METHOD Abort(const char16_t * ifname); \
  NS_METHOD CancelLogin(const char16_t * eventId); \
  NS_METHOD FinishPreparation(const char16_t * ifname); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICAPTIVEPORTALDETECTOR(_to) \
  NS_IMETHOD CheckCaptivePortal(const char16_t * ifname, nsICaptivePortalCallback *callback) override { return _to CheckCaptivePortal(ifname, callback); } \
  NS_IMETHOD Abort(const char16_t * ifname) override { return _to Abort(ifname); } \
  NS_IMETHOD CancelLogin(const char16_t * eventId) override { return _to CancelLogin(eventId); } \
  NS_IMETHOD FinishPreparation(const char16_t * ifname) override { return _to FinishPreparation(ifname); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICAPTIVEPORTALDETECTOR(_to) \
  NS_IMETHOD CheckCaptivePortal(const char16_t * ifname, nsICaptivePortalCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckCaptivePortal(ifname, callback); } \
  NS_IMETHOD Abort(const char16_t * ifname) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Abort(ifname); } \
  NS_IMETHOD CancelLogin(const char16_t * eventId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelLogin(eventId); } \
  NS_IMETHOD FinishPreparation(const char16_t * ifname) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FinishPreparation(ifname); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCaptivePortalDetector : public nsICaptivePortalDetector
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICAPTIVEPORTALDETECTOR

  nsCaptivePortalDetector();

private:
  ~nsCaptivePortalDetector();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCaptivePortalDetector, nsICaptivePortalDetector)

nsCaptivePortalDetector::nsCaptivePortalDetector()
{
  /* member initializers and constructor code */
}

nsCaptivePortalDetector::~nsCaptivePortalDetector()
{
  /* destructor code */
}

/* void checkCaptivePortal (in wstring ifname, in nsICaptivePortalCallback callback); */
NS_IMETHODIMP nsCaptivePortalDetector::CheckCaptivePortal(const char16_t * ifname, nsICaptivePortalCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void abort (in wstring ifname); */
NS_IMETHODIMP nsCaptivePortalDetector::Abort(const char16_t * ifname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelLogin (in wstring eventId); */
NS_IMETHODIMP nsCaptivePortalDetector::CancelLogin(const char16_t * eventId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void finishPreparation (in wstring ifname); */
NS_IMETHODIMP nsCaptivePortalDetector::FinishPreparation(const char16_t * ifname)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICaptivePortalDetector_h__ */
