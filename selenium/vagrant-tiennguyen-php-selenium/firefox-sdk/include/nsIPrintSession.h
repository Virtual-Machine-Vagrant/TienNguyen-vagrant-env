/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPrintSession.idl
 */

#ifndef __gen_nsIPrintSession_h__
#define __gen_nsIPrintSession_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
namespace mozilla {
namespace layout {
class RemotePrintJobChild;
}
}

/* starting interface:    nsIPrintSession */
#define NS_IPRINTSESSION_IID_STR "424ae4bb-10ca-4f35-b84e-eab893322df4"

#define NS_IPRINTSESSION_IID \
  {0x424ae4bb, 0x10ca, 0x4f35, \
    { 0xb8, 0x4e, 0xea, 0xb8, 0x93, 0x32, 0x2d, 0xf4 }}

class NS_NO_VTABLE nsIPrintSession : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPRINTSESSION_IID)

  /* [noscript] attribute RemotePrintJobChildPtr remotePrintJob; */
  NS_IMETHOD GetRemotePrintJob(mozilla::layout::RemotePrintJobChild **aRemotePrintJob) = 0;
  NS_IMETHOD SetRemotePrintJob(mozilla::layout::RemotePrintJobChild *aRemotePrintJob) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrintSession, NS_IPRINTSESSION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPRINTSESSION \
  NS_IMETHOD GetRemotePrintJob(mozilla::layout::RemotePrintJobChild **aRemotePrintJob) override; \
  NS_IMETHOD SetRemotePrintJob(mozilla::layout::RemotePrintJobChild *aRemotePrintJob) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPRINTSESSION \
  NS_METHOD GetRemotePrintJob(mozilla::layout::RemotePrintJobChild **aRemotePrintJob); \
  NS_METHOD SetRemotePrintJob(mozilla::layout::RemotePrintJobChild *aRemotePrintJob); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPRINTSESSION(_to) \
  NS_IMETHOD GetRemotePrintJob(mozilla::layout::RemotePrintJobChild **aRemotePrintJob) override { return _to GetRemotePrintJob(aRemotePrintJob); } \
  NS_IMETHOD SetRemotePrintJob(mozilla::layout::RemotePrintJobChild *aRemotePrintJob) override { return _to SetRemotePrintJob(aRemotePrintJob); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPRINTSESSION(_to) \
  NS_IMETHOD GetRemotePrintJob(mozilla::layout::RemotePrintJobChild **aRemotePrintJob) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemotePrintJob(aRemotePrintJob); } \
  NS_IMETHOD SetRemotePrintJob(mozilla::layout::RemotePrintJobChild *aRemotePrintJob) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRemotePrintJob(aRemotePrintJob); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrintSession : public nsIPrintSession
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPRINTSESSION

  nsPrintSession();

private:
  ~nsPrintSession();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPrintSession, nsIPrintSession)

nsPrintSession::nsPrintSession()
{
  /* member initializers and constructor code */
}

nsPrintSession::~nsPrintSession()
{
  /* destructor code */
}

/* [noscript] attribute RemotePrintJobChildPtr remotePrintJob; */
NS_IMETHODIMP nsPrintSession::GetRemotePrintJob(mozilla::layout::RemotePrintJobChild **aRemotePrintJob)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPrintSession::SetRemotePrintJob(mozilla::layout::RemotePrintJobChild *aRemotePrintJob)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPrintSession_h__ */
