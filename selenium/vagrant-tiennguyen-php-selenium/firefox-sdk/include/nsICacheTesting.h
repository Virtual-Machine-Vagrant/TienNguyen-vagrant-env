/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICacheTesting.idl
 */

#ifndef __gen_nsICacheTesting_h__
#define __gen_nsICacheTesting_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsICacheTesting */
#define NS_ICACHETESTING_IID_STR "4e8ba935-92e1-4a74-944b-b1a2f02a7480"

#define NS_ICACHETESTING_IID \
  {0x4e8ba935, 0x92e1, 0x4a74, \
    { 0x94, 0x4b, 0xb1, 0xa2, 0xf0, 0x2a, 0x74, 0x80 }}

class NS_NO_VTABLE nsICacheTesting : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHETESTING_IID)

  /* void suspendCacheIOThread (in uint32_t aLevel); */
  NS_IMETHOD SuspendCacheIOThread(uint32_t aLevel) = 0;

  /* void resumeCacheIOThread (); */
  NS_IMETHOD ResumeCacheIOThread(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICacheTesting, NS_ICACHETESTING_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHETESTING \
  NS_IMETHOD SuspendCacheIOThread(uint32_t aLevel) override; \
  NS_IMETHOD ResumeCacheIOThread(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICACHETESTING \
  NS_METHOD SuspendCacheIOThread(uint32_t aLevel); \
  NS_METHOD ResumeCacheIOThread(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHETESTING(_to) \
  NS_IMETHOD SuspendCacheIOThread(uint32_t aLevel) override { return _to SuspendCacheIOThread(aLevel); } \
  NS_IMETHOD ResumeCacheIOThread(void) override { return _to ResumeCacheIOThread(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHETESTING(_to) \
  NS_IMETHOD SuspendCacheIOThread(uint32_t aLevel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SuspendCacheIOThread(aLevel); } \
  NS_IMETHOD ResumeCacheIOThread(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeCacheIOThread(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCacheTesting : public nsICacheTesting
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHETESTING

  nsCacheTesting();

private:
  ~nsCacheTesting();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCacheTesting, nsICacheTesting)

nsCacheTesting::nsCacheTesting()
{
  /* member initializers and constructor code */
}

nsCacheTesting::~nsCacheTesting()
{
  /* destructor code */
}

/* void suspendCacheIOThread (in uint32_t aLevel); */
NS_IMETHODIMP nsCacheTesting::SuspendCacheIOThread(uint32_t aLevel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeCacheIOThread (); */
NS_IMETHODIMP nsCacheTesting::ResumeCacheIOThread()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICacheTesting_h__ */
