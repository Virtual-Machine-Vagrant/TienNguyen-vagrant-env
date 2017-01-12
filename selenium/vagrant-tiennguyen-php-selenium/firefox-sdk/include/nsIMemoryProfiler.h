/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIMemoryProfiler.idl
 */

#ifndef __gen_nsIMemoryProfiler_h__
#define __gen_nsIMemoryProfiler_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIMemoryProfiler */
#define NS_IMEMORYPROFILER_IID_STR "1e10e7a9-bc05-4878-a687-36c9ea4428b1"

#define NS_IMEMORYPROFILER_IID \
  {0x1e10e7a9, 0xbc05, 0x4878, \
    { 0xa6, 0x87, 0x36, 0xc9, 0xea, 0x44, 0x28, 0xb1 }}

class NS_NO_VTABLE nsIMemoryProfiler : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYPROFILER_IID)

  /* void startProfiler (); */
  NS_IMETHOD StartProfiler(void) = 0;

  /* void stopProfiler (); */
  NS_IMETHOD StopProfiler(void) = 0;

  /* void resetProfiler (); */
  NS_IMETHOD ResetProfiler(void) = 0;

  /* [implicit_jscontext] jsval getResults (); */
  NS_IMETHOD GetResults(JSContext* cx, JS::MutableHandleValue _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryProfiler, NS_IMEMORYPROFILER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYPROFILER \
  NS_IMETHOD StartProfiler(void) override; \
  NS_IMETHOD StopProfiler(void) override; \
  NS_IMETHOD ResetProfiler(void) override; \
  NS_IMETHOD GetResults(JSContext* cx, JS::MutableHandleValue _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIMEMORYPROFILER \
  NS_METHOD StartProfiler(void); \
  NS_METHOD StopProfiler(void); \
  NS_METHOD ResetProfiler(void); \
  NS_METHOD GetResults(JSContext* cx, JS::MutableHandleValue _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYPROFILER(_to) \
  NS_IMETHOD StartProfiler(void) override { return _to StartProfiler(); } \
  NS_IMETHOD StopProfiler(void) override { return _to StopProfiler(); } \
  NS_IMETHOD ResetProfiler(void) override { return _to ResetProfiler(); } \
  NS_IMETHOD GetResults(JSContext* cx, JS::MutableHandleValue _retval) override { return _to GetResults(cx, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYPROFILER(_to) \
  NS_IMETHOD StartProfiler(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartProfiler(); } \
  NS_IMETHOD StopProfiler(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopProfiler(); } \
  NS_IMETHOD ResetProfiler(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetProfiler(); } \
  NS_IMETHOD GetResults(JSContext* cx, JS::MutableHandleValue _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResults(cx, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryProfiler : public nsIMemoryProfiler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYPROFILER

  nsMemoryProfiler();

private:
  ~nsMemoryProfiler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMemoryProfiler, nsIMemoryProfiler)

nsMemoryProfiler::nsMemoryProfiler()
{
  /* member initializers and constructor code */
}

nsMemoryProfiler::~nsMemoryProfiler()
{
  /* destructor code */
}

/* void startProfiler (); */
NS_IMETHODIMP nsMemoryProfiler::StartProfiler()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopProfiler (); */
NS_IMETHODIMP nsMemoryProfiler::StopProfiler()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetProfiler (); */
NS_IMETHODIMP nsMemoryProfiler::ResetProfiler()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getResults (); */
NS_IMETHODIMP nsMemoryProfiler::GetResults(JSContext* cx, JS::MutableHandleValue _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMemoryProfiler_h__ */
