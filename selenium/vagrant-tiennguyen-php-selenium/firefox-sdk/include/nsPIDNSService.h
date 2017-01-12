/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsPIDNSService.idl
 */

#ifndef __gen_nsPIDNSService_h__
#define __gen_nsPIDNSService_h__


#ifndef __gen_nsIDNSService_h__
#include "nsIDNSService.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsPIDNSService */
#define NS_PIDNSSERVICE_IID_STR "24e598fd-7b1a-436c-9154-14d8b38df8a5"

#define NS_PIDNSSERVICE_IID \
  {0x24e598fd, 0x7b1a, 0x436c, \
    { 0x91, 0x54, 0x14, 0xd8, 0xb3, 0x8d, 0xf8, 0xa5 }}

class NS_NO_VTABLE nsPIDNSService : public nsIDNSService {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_PIDNSSERVICE_IID)

  /* void init (); */
  NS_IMETHOD Init(void) = 0;

  /* void shutdown (); */
  NS_IMETHOD Shutdown(void) = 0;

  /* attribute boolean prefetchEnabled; */
  NS_IMETHOD GetPrefetchEnabled(bool *aPrefetchEnabled) = 0;
  NS_IMETHOD SetPrefetchEnabled(bool aPrefetchEnabled) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsPIDNSService, NS_PIDNSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSPIDNSSERVICE \
  NS_IMETHOD Init(void) override; \
  NS_IMETHOD Shutdown(void) override; \
  NS_IMETHOD GetPrefetchEnabled(bool *aPrefetchEnabled) override; \
  NS_IMETHOD SetPrefetchEnabled(bool aPrefetchEnabled) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSPIDNSSERVICE \
  NS_METHOD Init(void); \
  NS_METHOD Shutdown(void); \
  NS_METHOD GetPrefetchEnabled(bool *aPrefetchEnabled); \
  NS_METHOD SetPrefetchEnabled(bool aPrefetchEnabled); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSPIDNSSERVICE(_to) \
  NS_IMETHOD Init(void) override { return _to Init(); } \
  NS_IMETHOD Shutdown(void) override { return _to Shutdown(); } \
  NS_IMETHOD GetPrefetchEnabled(bool *aPrefetchEnabled) override { return _to GetPrefetchEnabled(aPrefetchEnabled); } \
  NS_IMETHOD SetPrefetchEnabled(bool aPrefetchEnabled) override { return _to SetPrefetchEnabled(aPrefetchEnabled); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSPIDNSSERVICE(_to) \
  NS_IMETHOD Init(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(); } \
  NS_IMETHOD Shutdown(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Shutdown(); } \
  NS_IMETHOD GetPrefetchEnabled(bool *aPrefetchEnabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrefetchEnabled(aPrefetchEnabled); } \
  NS_IMETHOD SetPrefetchEnabled(bool aPrefetchEnabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPrefetchEnabled(aPrefetchEnabled); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public nsPIDNSService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSPIDNSSERVICE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, nsPIDNSService)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void init (); */
NS_IMETHODIMP _MYCLASS_::Init()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void shutdown (); */
NS_IMETHODIMP _MYCLASS_::Shutdown()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean prefetchEnabled; */
NS_IMETHODIMP _MYCLASS_::GetPrefetchEnabled(bool *aPrefetchEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPrefetchEnabled(bool aPrefetchEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsPIDNSService_h__ */
