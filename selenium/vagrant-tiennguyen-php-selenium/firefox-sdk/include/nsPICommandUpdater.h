/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsPICommandUpdater.idl
 */

#ifndef __gen_nsPICommandUpdater_h__
#define __gen_nsPICommandUpdater_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsPICommandUpdater */
#define NS_PICOMMANDUPDATER_IID_STR "35e474ae-8016-4c34-9644-edc11f8b0ce1"

#define NS_PICOMMANDUPDATER_IID \
  {0x35e474ae, 0x8016, 0x4c34, \
    { 0x96, 0x44, 0xed, 0xc1, 0x1f, 0x8b, 0x0c, 0xe1 }}

class NS_NO_VTABLE nsPICommandUpdater : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_PICOMMANDUPDATER_IID)

  /* void init (in mozIDOMWindowProxy aWindow); */
  NS_IMETHOD Init(mozIDOMWindowProxy *aWindow) = 0;

  /* void commandStatusChanged (in string aCommandName); */
  NS_IMETHOD CommandStatusChanged(const char * aCommandName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsPICommandUpdater, NS_PICOMMANDUPDATER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSPICOMMANDUPDATER \
  NS_IMETHOD Init(mozIDOMWindowProxy *aWindow) override; \
  NS_IMETHOD CommandStatusChanged(const char * aCommandName) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSPICOMMANDUPDATER \
  NS_METHOD Init(mozIDOMWindowProxy *aWindow); \
  NS_METHOD CommandStatusChanged(const char * aCommandName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSPICOMMANDUPDATER(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *aWindow) override { return _to Init(aWindow); } \
  NS_IMETHOD CommandStatusChanged(const char * aCommandName) override { return _to CommandStatusChanged(aCommandName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSPICOMMANDUPDATER(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *aWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aWindow); } \
  NS_IMETHOD CommandStatusChanged(const char * aCommandName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CommandStatusChanged(aCommandName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public nsPICommandUpdater
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSPICOMMANDUPDATER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(_MYCLASS_, nsPICommandUpdater)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void init (in mozIDOMWindowProxy aWindow); */
NS_IMETHODIMP _MYCLASS_::Init(mozIDOMWindowProxy *aWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void commandStatusChanged (in string aCommandName); */
NS_IMETHODIMP _MYCLASS_::CommandStatusChanged(const char * aCommandName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsPICommandUpdater_h__ */
