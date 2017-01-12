/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/xpcexception.idl
 */

#ifndef __gen_xpcexception_h__
#define __gen_xpcexception_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIException_h__
#include "nsIException.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIXPCException */
#define NS_IXPCEXCEPTION_IID_STR "875e6645-e762-4da6-9ec8-bf19ab0050df"

#define NS_IXPCEXCEPTION_IID \
  {0x875e6645, 0xe762, 0x4da6, \
    { 0x9e, 0xc8, 0xbf, 0x19, 0xab, 0x00, 0x50, 0xdf }}

class NS_NO_VTABLE nsIXPCException : public nsIException {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCEXCEPTION_IID)

  /* void initialize (in AUTF8String aMessage, in nsresult aResult, in AUTF8String aName, in nsIStackFrame aLocation, in nsISupports aData); */
  NS_IMETHOD Initialize(const nsACString & aMessage, nsresult aResult, const nsACString & aName, nsIStackFrame *aLocation, nsISupports *aData) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCException, NS_IXPCEXCEPTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCEXCEPTION \
  NS_IMETHOD Initialize(const nsACString & aMessage, nsresult aResult, const nsACString & aName, nsIStackFrame *aLocation, nsISupports *aData) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCEXCEPTION \
  NS_METHOD Initialize(const nsACString & aMessage, nsresult aResult, const nsACString & aName, nsIStackFrame *aLocation, nsISupports *aData); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCEXCEPTION(_to) \
  NS_IMETHOD Initialize(const nsACString & aMessage, nsresult aResult, const nsACString & aName, nsIStackFrame *aLocation, nsISupports *aData) override { return _to Initialize(aMessage, aResult, aName, aLocation, aData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCEXCEPTION(_to) \
  NS_IMETHOD Initialize(const nsACString & aMessage, nsresult aResult, const nsACString & aName, nsIStackFrame *aLocation, nsISupports *aData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Initialize(aMessage, aResult, aName, aLocation, aData); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCException : public nsIXPCException
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCEXCEPTION

  nsXPCException();

private:
  ~nsXPCException();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCException, nsIXPCException)

nsXPCException::nsXPCException()
{
  /* member initializers and constructor code */
}

nsXPCException::~nsXPCException()
{
  /* destructor code */
}

/* void initialize (in AUTF8String aMessage, in nsresult aResult, in AUTF8String aName, in nsIStackFrame aLocation, in nsISupports aData); */
NS_IMETHODIMP nsXPCException::Initialize(const nsACString & aMessage, nsresult aResult, const nsACString & aName, nsIStackFrame *aLocation, nsISupports *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/********************************************************/
// {5632BF70-51EC-11d3-9896-006008962422}
#define NS_XPCEXCEPTION_CID  \
{ 0x5632bf70, 0x51ec, 0x11d3, \
    { 0x98, 0x96, 0x0, 0x60, 0x8, 0x96, 0x24, 0x22 } }

#endif /* __gen_xpcexception_h__ */
