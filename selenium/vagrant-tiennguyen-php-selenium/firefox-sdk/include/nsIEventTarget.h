/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIEventTarget.idl
 */

#ifndef __gen_nsIEventTarget_h__
#define __gen_nsIEventTarget_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIRunnable_h__
#include "nsIRunnable.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsCOMPtr.h"
#include "mozilla/AlreadyAddRefed.h"

/* starting interface:    nsIEventTarget */
#define NS_IEVENTTARGET_IID_STR "88145945-3278-424e-9f37-d874cbdd9f6f"

#define NS_IEVENTTARGET_IID \
  {0x88145945, 0x3278, 0x424e, \
    { 0x9f, 0x37, 0xd8, 0x74, 0xcb, 0xdd, 0x9f, 0x6f }}

class nsIEventTarget : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEVENTTARGET_IID)

     nsresult Dispatch(nsIRunnable* aEvent, uint32_t aFlags) {
      return Dispatch(nsCOMPtr<nsIRunnable>(aEvent).forget(), aFlags);
    }
  enum {
    DISPATCH_NORMAL = 0U,
    DISPATCH_SYNC = 1U
  };

  /* boolean isOnCurrentThread (); */
  NS_IMETHOD IsOnCurrentThread(bool *_retval) = 0;

  /* [binaryname(Dispatch),noscript] void dispatchFromC (in alreadyAddRefed_nsIRunnable event, in unsigned long flags); */
  NS_IMETHOD Dispatch(already_AddRefed<nsIRunnable>&& event, uint32_t flags) = 0;

  /* [binaryname(DispatchFromScript)] void dispatch (in nsIRunnable event, in unsigned long flags); */
  NS_IMETHOD DispatchFromScript(nsIRunnable *event, uint32_t flags) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEventTarget, NS_IEVENTTARGET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTTARGET \
  NS_IMETHOD IsOnCurrentThread(bool *_retval) override; \
  NS_IMETHOD Dispatch(already_AddRefed<nsIRunnable>&& event, uint32_t flags) override; \
  NS_IMETHOD DispatchFromScript(nsIRunnable *event, uint32_t flags) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIEVENTTARGET \
  NS_METHOD IsOnCurrentThread(bool *_retval); \
  NS_METHOD Dispatch(already_AddRefed<nsIRunnable>&& event, uint32_t flags); \
  NS_METHOD DispatchFromScript(nsIRunnable *event, uint32_t flags); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTTARGET(_to) \
  NS_IMETHOD IsOnCurrentThread(bool *_retval) override { return _to IsOnCurrentThread(_retval); } \
  NS_IMETHOD Dispatch(already_AddRefed<nsIRunnable>&& event, uint32_t flags) override { return _to Dispatch(event, flags); } \
  NS_IMETHOD DispatchFromScript(nsIRunnable *event, uint32_t flags) override { return _to DispatchFromScript(event, flags); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTTARGET(_to) \
  NS_IMETHOD IsOnCurrentThread(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsOnCurrentThread(_retval); } \
  NS_IMETHOD Dispatch(already_AddRefed<nsIRunnable>&& event, uint32_t flags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Dispatch(event, flags); } \
  NS_IMETHOD DispatchFromScript(nsIRunnable *event, uint32_t flags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DispatchFromScript(event, flags); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEventTarget : public nsIEventTarget
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEVENTTARGET

  nsEventTarget();

private:
  ~nsEventTarget();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsEventTarget, nsIEventTarget)

nsEventTarget::nsEventTarget()
{
  /* member initializers and constructor code */
}

nsEventTarget::~nsEventTarget()
{
  /* destructor code */
}

/* boolean isOnCurrentThread (); */
NS_IMETHODIMP nsEventTarget::IsOnCurrentThread(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(Dispatch),noscript] void dispatchFromC (in alreadyAddRefed_nsIRunnable event, in unsigned long flags); */
NS_IMETHODIMP nsEventTarget::Dispatch(already_AddRefed<nsIRunnable>&& event, uint32_t flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [binaryname(DispatchFromScript)] void dispatch (in nsIRunnable event, in unsigned long flags); */
NS_IMETHODIMP nsEventTarget::DispatchFromScript(nsIRunnable *event, uint32_t flags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// convenient aliases:
#define NS_DISPATCH_NORMAL nsIEventTarget::DISPATCH_NORMAL
#define NS_DISPATCH_SYNC   nsIEventTarget::DISPATCH_SYNC

#endif /* __gen_nsIEventTarget_h__ */
