/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISessionStartup.idl
 */

#ifndef __gen_nsISessionStartup_h__
#define __gen_nsISessionStartup_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISessionStartup */
#define NS_ISESSIONSTARTUP_IID_STR "934697e4-3807-47f8-b6c9-6caa8d83ccd1"

#define NS_ISESSIONSTARTUP_IID \
  {0x934697e4, 0x3807, 0x47f8, \
    { 0xb6, 0xc9, 0x6c, 0xaa, 0x8d, 0x83, 0xcc, 0xd1 }}

class NS_NO_VTABLE nsISessionStartup : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISESSIONSTARTUP_IID)

  /* readonly attribute jsval onceInitialized; */
  NS_IMETHOD GetOnceInitialized(JS::MutableHandleValue aOnceInitialized) = 0;

  /* readonly attribute jsval state; */
  NS_IMETHOD GetState(JS::MutableHandleValue aState) = 0;

  /* boolean doRestore (); */
  NS_IMETHOD DoRestore(bool *_retval) = 0;

  /* boolean isAutomaticRestoreEnabled (); */
  NS_IMETHOD IsAutomaticRestoreEnabled(bool *_retval) = 0;

  /* readonly attribute bool willOverrideHomepage; */
  NS_IMETHOD GetWillOverrideHomepage(bool *aWillOverrideHomepage) = 0;

  enum {
    NO_SESSION = 0U,
    RECOVER_SESSION = 1U,
    RESUME_SESSION = 2U,
    DEFER_SESSION = 3U
  };

  /* readonly attribute unsigned long sessionType; */
  NS_IMETHOD GetSessionType(uint32_t *aSessionType) = 0;

  /* readonly attribute bool previousSessionCrashed; */
  NS_IMETHOD GetPreviousSessionCrashed(bool *aPreviousSessionCrashed) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISessionStartup, NS_ISESSIONSTARTUP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISESSIONSTARTUP \
  NS_IMETHOD GetOnceInitialized(JS::MutableHandleValue aOnceInitialized) override; \
  NS_IMETHOD GetState(JS::MutableHandleValue aState) override; \
  NS_IMETHOD DoRestore(bool *_retval) override; \
  NS_IMETHOD IsAutomaticRestoreEnabled(bool *_retval) override; \
  NS_IMETHOD GetWillOverrideHomepage(bool *aWillOverrideHomepage) override; \
  NS_IMETHOD GetSessionType(uint32_t *aSessionType) override; \
  NS_IMETHOD GetPreviousSessionCrashed(bool *aPreviousSessionCrashed) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISESSIONSTARTUP \
  NS_METHOD GetOnceInitialized(JS::MutableHandleValue aOnceInitialized); \
  NS_METHOD GetState(JS::MutableHandleValue aState); \
  NS_METHOD DoRestore(bool *_retval); \
  NS_METHOD IsAutomaticRestoreEnabled(bool *_retval); \
  NS_METHOD GetWillOverrideHomepage(bool *aWillOverrideHomepage); \
  NS_METHOD GetSessionType(uint32_t *aSessionType); \
  NS_METHOD GetPreviousSessionCrashed(bool *aPreviousSessionCrashed); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISESSIONSTARTUP(_to) \
  NS_IMETHOD GetOnceInitialized(JS::MutableHandleValue aOnceInitialized) override { return _to GetOnceInitialized(aOnceInitialized); } \
  NS_IMETHOD GetState(JS::MutableHandleValue aState) override { return _to GetState(aState); } \
  NS_IMETHOD DoRestore(bool *_retval) override { return _to DoRestore(_retval); } \
  NS_IMETHOD IsAutomaticRestoreEnabled(bool *_retval) override { return _to IsAutomaticRestoreEnabled(_retval); } \
  NS_IMETHOD GetWillOverrideHomepage(bool *aWillOverrideHomepage) override { return _to GetWillOverrideHomepage(aWillOverrideHomepage); } \
  NS_IMETHOD GetSessionType(uint32_t *aSessionType) override { return _to GetSessionType(aSessionType); } \
  NS_IMETHOD GetPreviousSessionCrashed(bool *aPreviousSessionCrashed) override { return _to GetPreviousSessionCrashed(aPreviousSessionCrashed); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISESSIONSTARTUP(_to) \
  NS_IMETHOD GetOnceInitialized(JS::MutableHandleValue aOnceInitialized) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOnceInitialized(aOnceInitialized); } \
  NS_IMETHOD GetState(JS::MutableHandleValue aState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetState(aState); } \
  NS_IMETHOD DoRestore(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DoRestore(_retval); } \
  NS_IMETHOD IsAutomaticRestoreEnabled(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAutomaticRestoreEnabled(_retval); } \
  NS_IMETHOD GetWillOverrideHomepage(bool *aWillOverrideHomepage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWillOverrideHomepage(aWillOverrideHomepage); } \
  NS_IMETHOD GetSessionType(uint32_t *aSessionType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSessionType(aSessionType); } \
  NS_IMETHOD GetPreviousSessionCrashed(bool *aPreviousSessionCrashed) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreviousSessionCrashed(aPreviousSessionCrashed); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSessionStartup : public nsISessionStartup
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISESSIONSTARTUP

  nsSessionStartup();

private:
  ~nsSessionStartup();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSessionStartup, nsISessionStartup)

nsSessionStartup::nsSessionStartup()
{
  /* member initializers and constructor code */
}

nsSessionStartup::~nsSessionStartup()
{
  /* destructor code */
}

/* readonly attribute jsval onceInitialized; */
NS_IMETHODIMP nsSessionStartup::GetOnceInitialized(JS::MutableHandleValue aOnceInitialized)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval state; */
NS_IMETHODIMP nsSessionStartup::GetState(JS::MutableHandleValue aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean doRestore (); */
NS_IMETHODIMP nsSessionStartup::DoRestore(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isAutomaticRestoreEnabled (); */
NS_IMETHODIMP nsSessionStartup::IsAutomaticRestoreEnabled(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool willOverrideHomepage; */
NS_IMETHODIMP nsSessionStartup::GetWillOverrideHomepage(bool *aWillOverrideHomepage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long sessionType; */
NS_IMETHODIMP nsSessionStartup::GetSessionType(uint32_t *aSessionType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool previousSessionCrashed; */
NS_IMETHODIMP nsSessionStartup::GetPreviousSessionCrashed(bool *aPreviousSessionCrashed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISessionStartup_h__ */
