/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISubstitutingProtocolHandler.idl
 */

#ifndef __gen_nsISubstitutingProtocolHandler_h__
#define __gen_nsISubstitutingProtocolHandler_h__


#ifndef __gen_nsIProtocolHandler_h__
#include "nsIProtocolHandler.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISubstitutingProtocolHandler */
#define NS_ISUBSTITUTINGPROTOCOLHANDLER_IID_STR "154c64fd-a69e-4105-89f8-bd7dfe621372"

#define NS_ISUBSTITUTINGPROTOCOLHANDLER_IID \
  {0x154c64fd, 0xa69e, 0x4105, \
    { 0x89, 0xf8, 0xbd, 0x7d, 0xfe, 0x62, 0x13, 0x72 }}

class NS_NO_VTABLE nsISubstitutingProtocolHandler : public nsIProtocolHandler {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISUBSTITUTINGPROTOCOLHANDLER_IID)

  /* void setSubstitution (in ACString root, in nsIURI baseURI); */
  NS_IMETHOD SetSubstitution(const nsACString & root, nsIURI *baseURI) = 0;

  /* nsIURI getSubstitution (in ACString root); */
  NS_IMETHOD GetSubstitution(const nsACString & root, nsIURI * *_retval) = 0;

  /* boolean hasSubstitution (in ACString root); */
  NS_IMETHOD HasSubstitution(const nsACString & root, bool *_retval) = 0;

  /* AUTF8String resolveURI (in nsIURI resURI); */
  NS_IMETHOD ResolveURI(nsIURI *resURI, nsACString & _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISubstitutingProtocolHandler, NS_ISUBSTITUTINGPROTOCOLHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUBSTITUTINGPROTOCOLHANDLER \
  NS_IMETHOD SetSubstitution(const nsACString & root, nsIURI *baseURI) override; \
  NS_IMETHOD GetSubstitution(const nsACString & root, nsIURI * *_retval) override; \
  NS_IMETHOD HasSubstitution(const nsACString & root, bool *_retval) override; \
  NS_IMETHOD ResolveURI(nsIURI *resURI, nsACString & _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISUBSTITUTINGPROTOCOLHANDLER \
  NS_METHOD SetSubstitution(const nsACString & root, nsIURI *baseURI); \
  NS_METHOD GetSubstitution(const nsACString & root, nsIURI * *_retval); \
  NS_METHOD HasSubstitution(const nsACString & root, bool *_retval); \
  NS_METHOD ResolveURI(nsIURI *resURI, nsACString & _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUBSTITUTINGPROTOCOLHANDLER(_to) \
  NS_IMETHOD SetSubstitution(const nsACString & root, nsIURI *baseURI) override { return _to SetSubstitution(root, baseURI); } \
  NS_IMETHOD GetSubstitution(const nsACString & root, nsIURI * *_retval) override { return _to GetSubstitution(root, _retval); } \
  NS_IMETHOD HasSubstitution(const nsACString & root, bool *_retval) override { return _to HasSubstitution(root, _retval); } \
  NS_IMETHOD ResolveURI(nsIURI *resURI, nsACString & _retval) override { return _to ResolveURI(resURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUBSTITUTINGPROTOCOLHANDLER(_to) \
  NS_IMETHOD SetSubstitution(const nsACString & root, nsIURI *baseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSubstitution(root, baseURI); } \
  NS_IMETHOD GetSubstitution(const nsACString & root, nsIURI * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubstitution(root, _retval); } \
  NS_IMETHOD HasSubstitution(const nsACString & root, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->HasSubstitution(root, _retval); } \
  NS_IMETHOD ResolveURI(nsIURI *resURI, nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ResolveURI(resURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSubstitutingProtocolHandler : public nsISubstitutingProtocolHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISUBSTITUTINGPROTOCOLHANDLER

  nsSubstitutingProtocolHandler();

private:
  ~nsSubstitutingProtocolHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSubstitutingProtocolHandler, nsISubstitutingProtocolHandler)

nsSubstitutingProtocolHandler::nsSubstitutingProtocolHandler()
{
  /* member initializers and constructor code */
}

nsSubstitutingProtocolHandler::~nsSubstitutingProtocolHandler()
{
  /* destructor code */
}

/* void setSubstitution (in ACString root, in nsIURI baseURI); */
NS_IMETHODIMP nsSubstitutingProtocolHandler::SetSubstitution(const nsACString & root, nsIURI *baseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIURI getSubstitution (in ACString root); */
NS_IMETHODIMP nsSubstitutingProtocolHandler::GetSubstitution(const nsACString & root, nsIURI * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasSubstitution (in ACString root); */
NS_IMETHODIMP nsSubstitutingProtocolHandler::HasSubstitution(const nsACString & root, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String resolveURI (in nsIURI resURI); */
NS_IMETHODIMP nsSubstitutingProtocolHandler::ResolveURI(nsIURI *resURI, nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISubstitutingProtocolHandler_h__ */
