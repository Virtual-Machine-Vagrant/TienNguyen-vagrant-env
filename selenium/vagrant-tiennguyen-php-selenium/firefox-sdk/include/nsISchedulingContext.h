/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISchedulingContext.idl
 */

#ifndef __gen_nsISchedulingContext_h__
#define __gen_nsISchedulingContext_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
// Forward-declare mozilla::net::SpdyPushCache
namespace mozilla {
namespace net {
class SpdyPushCache;
}
}

/* starting interface:    nsISchedulingContext */
#define NS_ISCHEDULINGCONTEXT_IID_STR "658e3e6e-8633-4b1a-8d66-fa9f72293e63"

#define NS_ISCHEDULINGCONTEXT_IID \
  {0x658e3e6e, 0x8633, 0x4b1a, \
    { 0x8d, 0x66, 0xfa, 0x9f, 0x72, 0x29, 0x3e, 0x63 }}

class NS_NO_VTABLE nsISchedulingContext : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCHEDULINGCONTEXT_IID)

  /* [noscript] readonly attribute nsID ID; */
  NS_IMETHOD GetID(nsID *aID) = 0;

  /* readonly attribute unsigned long blockingTransactionCount; */
  NS_IMETHOD GetBlockingTransactionCount(uint32_t *aBlockingTransactionCount) = 0;

  /* void addBlockingTransaction (); */
  NS_IMETHOD AddBlockingTransaction(void) = 0;

  /* unsigned long removeBlockingTransaction (); */
  NS_IMETHOD RemoveBlockingTransaction(uint32_t *_retval) = 0;

  /* [noscript] attribute SpdyPushCachePtr spdyPushCache; */
  NS_IMETHOD GetSpdyPushCache(mozilla::net::SpdyPushCache **aSpdyPushCache) = 0;
  NS_IMETHOD SetSpdyPushCache(mozilla::net::SpdyPushCache *aSpdyPushCache) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISchedulingContext, NS_ISCHEDULINGCONTEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCHEDULINGCONTEXT \
  NS_IMETHOD GetID(nsID *aID) override; \
  NS_IMETHOD GetBlockingTransactionCount(uint32_t *aBlockingTransactionCount) override; \
  NS_IMETHOD AddBlockingTransaction(void) override; \
  NS_IMETHOD RemoveBlockingTransaction(uint32_t *_retval) override; \
  NS_IMETHOD GetSpdyPushCache(mozilla::net::SpdyPushCache **aSpdyPushCache) override; \
  NS_IMETHOD SetSpdyPushCache(mozilla::net::SpdyPushCache *aSpdyPushCache) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISCHEDULINGCONTEXT \
  NS_METHOD GetID(nsID *aID); \
  NS_METHOD GetBlockingTransactionCount(uint32_t *aBlockingTransactionCount); \
  NS_METHOD AddBlockingTransaction(void); \
  NS_METHOD RemoveBlockingTransaction(uint32_t *_retval); \
  NS_METHOD GetSpdyPushCache(mozilla::net::SpdyPushCache **aSpdyPushCache); \
  NS_METHOD SetSpdyPushCache(mozilla::net::SpdyPushCache *aSpdyPushCache); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCHEDULINGCONTEXT(_to) \
  NS_IMETHOD GetID(nsID *aID) override { return _to GetID(aID); } \
  NS_IMETHOD GetBlockingTransactionCount(uint32_t *aBlockingTransactionCount) override { return _to GetBlockingTransactionCount(aBlockingTransactionCount); } \
  NS_IMETHOD AddBlockingTransaction(void) override { return _to AddBlockingTransaction(); } \
  NS_IMETHOD RemoveBlockingTransaction(uint32_t *_retval) override { return _to RemoveBlockingTransaction(_retval); } \
  NS_IMETHOD GetSpdyPushCache(mozilla::net::SpdyPushCache **aSpdyPushCache) override { return _to GetSpdyPushCache(aSpdyPushCache); } \
  NS_IMETHOD SetSpdyPushCache(mozilla::net::SpdyPushCache *aSpdyPushCache) override { return _to SetSpdyPushCache(aSpdyPushCache); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCHEDULINGCONTEXT(_to) \
  NS_IMETHOD GetID(nsID *aID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetID(aID); } \
  NS_IMETHOD GetBlockingTransactionCount(uint32_t *aBlockingTransactionCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBlockingTransactionCount(aBlockingTransactionCount); } \
  NS_IMETHOD AddBlockingTransaction(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddBlockingTransaction(); } \
  NS_IMETHOD RemoveBlockingTransaction(uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveBlockingTransaction(_retval); } \
  NS_IMETHOD GetSpdyPushCache(mozilla::net::SpdyPushCache **aSpdyPushCache) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpdyPushCache(aSpdyPushCache); } \
  NS_IMETHOD SetSpdyPushCache(mozilla::net::SpdyPushCache *aSpdyPushCache) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSpdyPushCache(aSpdyPushCache); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSchedulingContext : public nsISchedulingContext
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCHEDULINGCONTEXT

  nsSchedulingContext();

private:
  ~nsSchedulingContext();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSchedulingContext, nsISchedulingContext)

nsSchedulingContext::nsSchedulingContext()
{
  /* member initializers and constructor code */
}

nsSchedulingContext::~nsSchedulingContext()
{
  /* destructor code */
}

/* [noscript] readonly attribute nsID ID; */
NS_IMETHODIMP nsSchedulingContext::GetID(nsID *aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long blockingTransactionCount; */
NS_IMETHODIMP nsSchedulingContext::GetBlockingTransactionCount(uint32_t *aBlockingTransactionCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addBlockingTransaction (); */
NS_IMETHODIMP nsSchedulingContext::AddBlockingTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long removeBlockingTransaction (); */
NS_IMETHODIMP nsSchedulingContext::RemoveBlockingTransaction(uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] attribute SpdyPushCachePtr spdyPushCache; */
NS_IMETHODIMP nsSchedulingContext::GetSpdyPushCache(mozilla::net::SpdyPushCache **aSpdyPushCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSchedulingContext::SetSpdyPushCache(mozilla::net::SpdyPushCache *aSpdyPushCache)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISchedulingContextService */
#define NS_ISCHEDULINGCONTEXTSERVICE_IID_STR "7fcbf4da-d828-4acc-b144-e5435198f727"

#define NS_ISCHEDULINGCONTEXTSERVICE_IID \
  {0x7fcbf4da, 0xd828, 0x4acc, \
    { 0xb1, 0x44, 0xe5, 0x43, 0x51, 0x98, 0xf7, 0x27 }}

class NS_NO_VTABLE nsISchedulingContextService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCHEDULINGCONTEXTSERVICE_IID)

  /* nsISchedulingContext getSchedulingContext (in nsIDRef id); */
  NS_IMETHOD GetSchedulingContext(const nsID & id, nsISchedulingContext * *_retval) = 0;

  /* nsID newSchedulingContextID (); */
  NS_IMETHOD NewSchedulingContextID(nsID *_retval) = 0;

  /* void removeSchedulingContext (in nsIDRef id); */
  NS_IMETHOD RemoveSchedulingContext(const nsID & id) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISchedulingContextService, NS_ISCHEDULINGCONTEXTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCHEDULINGCONTEXTSERVICE \
  NS_IMETHOD GetSchedulingContext(const nsID & id, nsISchedulingContext * *_retval) override; \
  NS_IMETHOD NewSchedulingContextID(nsID *_retval) override; \
  NS_IMETHOD RemoveSchedulingContext(const nsID & id) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISCHEDULINGCONTEXTSERVICE \
  NS_METHOD GetSchedulingContext(const nsID & id, nsISchedulingContext * *_retval); \
  NS_METHOD NewSchedulingContextID(nsID *_retval); \
  NS_METHOD RemoveSchedulingContext(const nsID & id); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCHEDULINGCONTEXTSERVICE(_to) \
  NS_IMETHOD GetSchedulingContext(const nsID & id, nsISchedulingContext * *_retval) override { return _to GetSchedulingContext(id, _retval); } \
  NS_IMETHOD NewSchedulingContextID(nsID *_retval) override { return _to NewSchedulingContextID(_retval); } \
  NS_IMETHOD RemoveSchedulingContext(const nsID & id) override { return _to RemoveSchedulingContext(id); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCHEDULINGCONTEXTSERVICE(_to) \
  NS_IMETHOD GetSchedulingContext(const nsID & id, nsISchedulingContext * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSchedulingContext(id, _retval); } \
  NS_IMETHOD NewSchedulingContextID(nsID *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NewSchedulingContextID(_retval); } \
  NS_IMETHOD RemoveSchedulingContext(const nsID & id) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveSchedulingContext(id); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSchedulingContextService : public nsISchedulingContextService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCHEDULINGCONTEXTSERVICE

  nsSchedulingContextService();

private:
  ~nsSchedulingContextService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSchedulingContextService, nsISchedulingContextService)

nsSchedulingContextService::nsSchedulingContextService()
{
  /* member initializers and constructor code */
}

nsSchedulingContextService::~nsSchedulingContextService()
{
  /* destructor code */
}

/* nsISchedulingContext getSchedulingContext (in nsIDRef id); */
NS_IMETHODIMP nsSchedulingContextService::GetSchedulingContext(const nsID & id, nsISchedulingContext * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsID newSchedulingContextID (); */
NS_IMETHODIMP nsSchedulingContextService::NewSchedulingContextID(nsID *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeSchedulingContext (in nsIDRef id); */
NS_IMETHODIMP nsSchedulingContextService::RemoveSchedulingContext(const nsID & id)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISchedulingContext_h__ */
