/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsITabSource.idl
 */

#ifndef __gen_nsITabSource_h__
#define __gen_nsITabSource_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsITabSource */
#define NS_ITABSOURCE_IID_STR "0feba7f2-800d-4fe5-b28d-e3f17a7a7322"

#define NS_ITABSOURCE_IID \
  {0x0feba7f2, 0x800d, 0x4fe5, \
    { 0xb2, 0x8d, 0xe3, 0xf1, 0x7a, 0x7a, 0x73, 0x22 }}

class NS_NO_VTABLE nsITabSource : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITABSOURCE_IID)

  /* mozIDOMWindowProxy getTabToStream (); */
  NS_IMETHOD GetTabToStream(mozIDOMWindowProxy * *_retval) = 0;

  /* void notifyStreamStart (in mozIDOMWindowProxy window); */
  NS_IMETHOD NotifyStreamStart(mozIDOMWindowProxy *window) = 0;

  /* void notifyStreamStop (in mozIDOMWindowProxy window); */
  NS_IMETHOD NotifyStreamStop(mozIDOMWindowProxy *window) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITabSource, NS_ITABSOURCE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITABSOURCE \
  NS_IMETHOD GetTabToStream(mozIDOMWindowProxy * *_retval) override; \
  NS_IMETHOD NotifyStreamStart(mozIDOMWindowProxy *window) override; \
  NS_IMETHOD NotifyStreamStop(mozIDOMWindowProxy *window) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITABSOURCE \
  NS_METHOD GetTabToStream(mozIDOMWindowProxy * *_retval); \
  NS_METHOD NotifyStreamStart(mozIDOMWindowProxy *window); \
  NS_METHOD NotifyStreamStop(mozIDOMWindowProxy *window); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITABSOURCE(_to) \
  NS_IMETHOD GetTabToStream(mozIDOMWindowProxy * *_retval) override { return _to GetTabToStream(_retval); } \
  NS_IMETHOD NotifyStreamStart(mozIDOMWindowProxy *window) override { return _to NotifyStreamStart(window); } \
  NS_IMETHOD NotifyStreamStop(mozIDOMWindowProxy *window) override { return _to NotifyStreamStop(window); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITABSOURCE(_to) \
  NS_IMETHOD GetTabToStream(mozIDOMWindowProxy * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabToStream(_retval); } \
  NS_IMETHOD NotifyStreamStart(mozIDOMWindowProxy *window) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyStreamStart(window); } \
  NS_IMETHOD NotifyStreamStop(mozIDOMWindowProxy *window) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyStreamStop(window); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTabSource : public nsITabSource
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITABSOURCE

  nsTabSource();

private:
  ~nsTabSource();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTabSource, nsITabSource)

nsTabSource::nsTabSource()
{
  /* member initializers and constructor code */
}

nsTabSource::~nsTabSource()
{
  /* destructor code */
}

/* mozIDOMWindowProxy getTabToStream (); */
NS_IMETHODIMP nsTabSource::GetTabToStream(mozIDOMWindowProxy * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyStreamStart (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsTabSource::NotifyStreamStart(mozIDOMWindowProxy *window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyStreamStop (in mozIDOMWindowProxy window); */
NS_IMETHODIMP nsTabSource::NotifyStreamStop(mozIDOMWindowProxy *window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_TABSOURCESERVICE_CONTRACTID "@mozilla.org/tab-source-service;1"

#endif /* __gen_nsITabSource_h__ */
