/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAppShell.idl
 */

#ifndef __gen_nsIAppShell_h__
#define __gen_nsIAppShell_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIRunnable; /* forward declaration */

template <class T> struct already_AddRefed;

/* starting interface:    nsIAppShell */
#define NS_IAPPSHELL_IID_STR "7cd5c71d-223b-4afe-931d-5eedb1f2b01f"

#define NS_IAPPSHELL_IID \
  {0x7cd5c71d, 0x223b, 0x4afe, \
    { 0x93, 0x1d, 0x5e, 0xed, 0xb1, 0xf2, 0xb0, 0x1f }}

class NS_NO_VTABLE nsIAppShell : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAPPSHELL_IID)

  /* void run (); */
  NS_IMETHOD Run(void) = 0;

  /* void exit (); */
  NS_IMETHOD Exit(void) = 0;

  /* void favorPerformanceHint (in boolean favorPerfOverStarvation, in unsigned long starvationDelay); */
  NS_IMETHOD FavorPerformanceHint(bool favorPerfOverStarvation, uint32_t starvationDelay) = 0;

  /* void suspendNative (); */
  NS_IMETHOD SuspendNative(void) = 0;

  /* void resumeNative (); */
  NS_IMETHOD ResumeNative(void) = 0;

  /* readonly attribute unsigned long eventloopNestingLevel; */
  NS_IMETHOD GetEventloopNestingLevel(uint32_t *aEventloopNestingLevel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAppShell, NS_IAPPSHELL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAPPSHELL \
  NS_IMETHOD Run(void) override; \
  NS_IMETHOD Exit(void) override; \
  NS_IMETHOD FavorPerformanceHint(bool favorPerfOverStarvation, uint32_t starvationDelay) override; \
  NS_IMETHOD SuspendNative(void) override; \
  NS_IMETHOD ResumeNative(void) override; \
  NS_IMETHOD GetEventloopNestingLevel(uint32_t *aEventloopNestingLevel) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAPPSHELL \
  NS_METHOD Run(void); \
  NS_METHOD Exit(void); \
  NS_METHOD FavorPerformanceHint(bool favorPerfOverStarvation, uint32_t starvationDelay); \
  NS_METHOD SuspendNative(void); \
  NS_METHOD ResumeNative(void); \
  NS_METHOD GetEventloopNestingLevel(uint32_t *aEventloopNestingLevel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAPPSHELL(_to) \
  NS_IMETHOD Run(void) override { return _to Run(); } \
  NS_IMETHOD Exit(void) override { return _to Exit(); } \
  NS_IMETHOD FavorPerformanceHint(bool favorPerfOverStarvation, uint32_t starvationDelay) override { return _to FavorPerformanceHint(favorPerfOverStarvation, starvationDelay); } \
  NS_IMETHOD SuspendNative(void) override { return _to SuspendNative(); } \
  NS_IMETHOD ResumeNative(void) override { return _to ResumeNative(); } \
  NS_IMETHOD GetEventloopNestingLevel(uint32_t *aEventloopNestingLevel) override { return _to GetEventloopNestingLevel(aEventloopNestingLevel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAPPSHELL(_to) \
  NS_IMETHOD Run(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Run(); } \
  NS_IMETHOD Exit(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Exit(); } \
  NS_IMETHOD FavorPerformanceHint(bool favorPerfOverStarvation, uint32_t starvationDelay) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FavorPerformanceHint(favorPerfOverStarvation, starvationDelay); } \
  NS_IMETHOD SuspendNative(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SuspendNative(); } \
  NS_IMETHOD ResumeNative(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeNative(); } \
  NS_IMETHOD GetEventloopNestingLevel(uint32_t *aEventloopNestingLevel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventloopNestingLevel(aEventloopNestingLevel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAppShell : public nsIAppShell
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAPPSHELL

  nsAppShell();

private:
  ~nsAppShell();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAppShell, nsIAppShell)

nsAppShell::nsAppShell()
{
  /* member initializers and constructor code */
}

nsAppShell::~nsAppShell()
{
  /* destructor code */
}

/* void run (); */
NS_IMETHODIMP nsAppShell::Run()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void exit (); */
NS_IMETHODIMP nsAppShell::Exit()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void favorPerformanceHint (in boolean favorPerfOverStarvation, in unsigned long starvationDelay); */
NS_IMETHODIMP nsAppShell::FavorPerformanceHint(bool favorPerfOverStarvation, uint32_t starvationDelay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void suspendNative (); */
NS_IMETHODIMP nsAppShell::SuspendNative()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeNative (); */
NS_IMETHODIMP nsAppShell::ResumeNative()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long eventloopNestingLevel; */
NS_IMETHODIMP nsAppShell::GetEventloopNestingLevel(uint32_t *aEventloopNestingLevel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAppShell_h__ */
