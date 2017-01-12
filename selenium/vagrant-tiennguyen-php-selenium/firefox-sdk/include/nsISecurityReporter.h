/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISecurityReporter.idl
 */

#ifndef __gen_nsISecurityReporter_h__
#define __gen_nsISecurityReporter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsITransportSecurityInfo_h__
#include "nsITransportSecurityInfo.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISecurityReporter */
#define NS_ISECURITYREPORTER_IID_STR "8a997c9a-bea1-11e5-a1fa-be6abc8e7f8b"

#define NS_ISECURITYREPORTER_IID \
  {0x8a997c9a, 0xbea1, 0x11e5, \
    { 0xa1, 0xfa, 0xbe, 0x6a, 0xbc, 0x8e, 0x7f, 0x8b }}

class NS_NO_VTABLE nsISecurityReporter : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISECURITYREPORTER_IID)

  /* void reportTLSError (in nsITransportSecurityInfo aSecurityInfo, in AUTF8String aHostname, in long aPort); */
  NS_IMETHOD ReportTLSError(nsITransportSecurityInfo *aSecurityInfo, const nsACString & aHostname, int32_t aPort) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISecurityReporter, NS_ISECURITYREPORTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISECURITYREPORTER \
  NS_IMETHOD ReportTLSError(nsITransportSecurityInfo *aSecurityInfo, const nsACString & aHostname, int32_t aPort) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISECURITYREPORTER \
  NS_METHOD ReportTLSError(nsITransportSecurityInfo *aSecurityInfo, const nsACString & aHostname, int32_t aPort); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISECURITYREPORTER(_to) \
  NS_IMETHOD ReportTLSError(nsITransportSecurityInfo *aSecurityInfo, const nsACString & aHostname, int32_t aPort) override { return _to ReportTLSError(aSecurityInfo, aHostname, aPort); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISECURITYREPORTER(_to) \
  NS_IMETHOD ReportTLSError(nsITransportSecurityInfo *aSecurityInfo, const nsACString & aHostname, int32_t aPort) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReportTLSError(aSecurityInfo, aHostname, aPort); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSecurityReporter : public nsISecurityReporter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISECURITYREPORTER

  nsSecurityReporter();

private:
  ~nsSecurityReporter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSecurityReporter, nsISecurityReporter)

nsSecurityReporter::nsSecurityReporter()
{
  /* member initializers and constructor code */
}

nsSecurityReporter::~nsSecurityReporter()
{
  /* destructor code */
}

/* void reportTLSError (in nsITransportSecurityInfo aSecurityInfo, in AUTF8String aHostname, in long aPort); */
NS_IMETHODIMP nsSecurityReporter::ReportTLSError(nsITransportSecurityInfo *aSecurityInfo, const nsACString & aHostname, int32_t aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISecurityReporter_h__ */
