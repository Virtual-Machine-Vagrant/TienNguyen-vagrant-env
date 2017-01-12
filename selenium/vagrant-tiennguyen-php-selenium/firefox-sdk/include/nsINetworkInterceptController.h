/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsINetworkInterceptController.idl
 */

#ifndef __gen_nsINetworkInterceptController_h__
#define __gen_nsINetworkInterceptController_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIContentPolicyBase_h__
#include "nsIContentPolicyBase.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIChannel; /* forward declaration */

class nsIConsoleReportCollector; /* forward declaration */

class nsIOutputStream; /* forward declaration */

class nsIURI; /* forward declaration */

#include "nsIConsoleReportCollector.h"
namespace mozilla {
namespace dom {
class ChannelInfo;
}
}

/* starting interface:    nsIInterceptedChannel */
#define NS_IINTERCEPTEDCHANNEL_IID_STR "f4b82975-6a86-4cc4-87fe-9a1fd430c86d"

#define NS_IINTERCEPTEDCHANNEL_IID \
  {0xf4b82975, 0x6a86, 0x4cc4, \
    { 0x87, 0xfe, 0x9a, 0x1f, 0xd4, 0x30, 0xc8, 0x6d }}

class nsIInterceptedChannel : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINTERCEPTEDCHANNEL_IID)

  /* void resetInterception (); */
  NS_IMETHOD ResetInterception(void) = 0;

  /* void synthesizeStatus (in uint16_t status, in ACString reason); */
  NS_IMETHOD SynthesizeStatus(uint16_t status, const nsACString & reason) = 0;

  /* void synthesizeHeader (in ACString name, in ACString value); */
  NS_IMETHOD SynthesizeHeader(const nsACString & name, const nsACString & value) = 0;

  /* void finishSynthesizedResponse (in ACString finalURLSpec); */
  NS_IMETHOD FinishSynthesizedResponse(const nsACString & finalURLSpec) = 0;

  /* void cancel (in nsresult status); */
  NS_IMETHOD Cancel(nsresult status) = 0;

  /* readonly attribute nsIOutputStream responseBody; */
  NS_IMETHOD GetResponseBody(nsIOutputStream * *aResponseBody) = 0;

  /* readonly attribute nsIChannel channel; */
  NS_IMETHOD GetChannel(nsIChannel * *aChannel) = 0;

  /* readonly attribute nsIURI secureUpgradedChannelURI; */
  NS_IMETHOD GetSecureUpgradedChannelURI(nsIURI * *aSecureUpgradedChannelURI) = 0;

  /* [noscript] void setChannelInfo (in ChannelInfo channelInfo); */
  NS_IMETHOD SetChannelInfo(mozilla::dom::ChannelInfo *channelInfo) = 0;

  /* [noscript] readonly attribute nsContentPolicyType internalContentPolicyType; */
  NS_IMETHOD GetInternalContentPolicyType(nsContentPolicyType *aInternalContentPolicyType) = 0;

  /* [noscript] readonly attribute nsIConsoleReportCollector consoleReportCollector; */
  NS_IMETHOD GetConsoleReportCollector(nsIConsoleReportCollector * *aConsoleReportCollector) = 0;

     already_AddRefed<nsIConsoleReportCollector>
    GetConsoleReportCollector()
    {
      nsCOMPtr<nsIConsoleReportCollector> reporter;
      GetConsoleReportCollector(getter_AddRefs(reporter));
      return reporter.forget();
    }
  /* [noscript] void setReleaseHandle (in nsISupports aHandle); */
  NS_IMETHOD SetReleaseHandle(nsISupports *aHandle) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIInterceptedChannel, NS_IINTERCEPTEDCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINTERCEPTEDCHANNEL \
  NS_IMETHOD ResetInterception(void) override; \
  NS_IMETHOD SynthesizeStatus(uint16_t status, const nsACString & reason) override; \
  NS_IMETHOD SynthesizeHeader(const nsACString & name, const nsACString & value) override; \
  NS_IMETHOD FinishSynthesizedResponse(const nsACString & finalURLSpec) override; \
  NS_IMETHOD Cancel(nsresult status) override; \
  NS_IMETHOD GetResponseBody(nsIOutputStream * *aResponseBody) override; \
  NS_IMETHOD GetChannel(nsIChannel * *aChannel) override; \
  NS_IMETHOD GetSecureUpgradedChannelURI(nsIURI * *aSecureUpgradedChannelURI) override; \
  NS_IMETHOD SetChannelInfo(mozilla::dom::ChannelInfo *channelInfo) override; \
  NS_IMETHOD GetInternalContentPolicyType(nsContentPolicyType *aInternalContentPolicyType) override; \
  NS_IMETHOD GetConsoleReportCollector(nsIConsoleReportCollector * *aConsoleReportCollector) override; \
  NS_IMETHOD SetReleaseHandle(nsISupports *aHandle) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIINTERCEPTEDCHANNEL \
  NS_METHOD ResetInterception(void); \
  NS_METHOD SynthesizeStatus(uint16_t status, const nsACString & reason); \
  NS_METHOD SynthesizeHeader(const nsACString & name, const nsACString & value); \
  NS_METHOD FinishSynthesizedResponse(const nsACString & finalURLSpec); \
  NS_METHOD Cancel(nsresult status); \
  NS_METHOD GetResponseBody(nsIOutputStream * *aResponseBody); \
  NS_METHOD GetChannel(nsIChannel * *aChannel); \
  NS_METHOD GetSecureUpgradedChannelURI(nsIURI * *aSecureUpgradedChannelURI); \
  NS_METHOD SetChannelInfo(mozilla::dom::ChannelInfo *channelInfo); \
  NS_METHOD GetInternalContentPolicyType(nsContentPolicyType *aInternalContentPolicyType); \
  NS_METHOD GetConsoleReportCollector(nsIConsoleReportCollector * *aConsoleReportCollector); \
  NS_METHOD SetReleaseHandle(nsISupports *aHandle); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINTERCEPTEDCHANNEL(_to) \
  NS_IMETHOD ResetInterception(void) override { return _to ResetInterception(); } \
  NS_IMETHOD SynthesizeStatus(uint16_t status, const nsACString & reason) override { return _to SynthesizeStatus(status, reason); } \
  NS_IMETHOD SynthesizeHeader(const nsACString & name, const nsACString & value) override { return _to SynthesizeHeader(name, value); } \
  NS_IMETHOD FinishSynthesizedResponse(const nsACString & finalURLSpec) override { return _to FinishSynthesizedResponse(finalURLSpec); } \
  NS_IMETHOD Cancel(nsresult status) override { return _to Cancel(status); } \
  NS_IMETHOD GetResponseBody(nsIOutputStream * *aResponseBody) override { return _to GetResponseBody(aResponseBody); } \
  NS_IMETHOD GetChannel(nsIChannel * *aChannel) override { return _to GetChannel(aChannel); } \
  NS_IMETHOD GetSecureUpgradedChannelURI(nsIURI * *aSecureUpgradedChannelURI) override { return _to GetSecureUpgradedChannelURI(aSecureUpgradedChannelURI); } \
  NS_IMETHOD SetChannelInfo(mozilla::dom::ChannelInfo *channelInfo) override { return _to SetChannelInfo(channelInfo); } \
  NS_IMETHOD GetInternalContentPolicyType(nsContentPolicyType *aInternalContentPolicyType) override { return _to GetInternalContentPolicyType(aInternalContentPolicyType); } \
  NS_IMETHOD GetConsoleReportCollector(nsIConsoleReportCollector * *aConsoleReportCollector) override { return _to GetConsoleReportCollector(aConsoleReportCollector); } \
  NS_IMETHOD SetReleaseHandle(nsISupports *aHandle) override { return _to SetReleaseHandle(aHandle); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINTERCEPTEDCHANNEL(_to) \
  NS_IMETHOD ResetInterception(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetInterception(); } \
  NS_IMETHOD SynthesizeStatus(uint16_t status, const nsACString & reason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SynthesizeStatus(status, reason); } \
  NS_IMETHOD SynthesizeHeader(const nsACString & name, const nsACString & value) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SynthesizeHeader(name, value); } \
  NS_IMETHOD FinishSynthesizedResponse(const nsACString & finalURLSpec) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FinishSynthesizedResponse(finalURLSpec); } \
  NS_IMETHOD Cancel(nsresult status) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Cancel(status); } \
  NS_IMETHOD GetResponseBody(nsIOutputStream * *aResponseBody) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseBody(aResponseBody); } \
  NS_IMETHOD GetChannel(nsIChannel * *aChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannel(aChannel); } \
  NS_IMETHOD GetSecureUpgradedChannelURI(nsIURI * *aSecureUpgradedChannelURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecureUpgradedChannelURI(aSecureUpgradedChannelURI); } \
  NS_IMETHOD SetChannelInfo(mozilla::dom::ChannelInfo *channelInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChannelInfo(channelInfo); } \
  NS_IMETHOD GetInternalContentPolicyType(nsContentPolicyType *aInternalContentPolicyType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalContentPolicyType(aInternalContentPolicyType); } \
  NS_IMETHOD GetConsoleReportCollector(nsIConsoleReportCollector * *aConsoleReportCollector) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConsoleReportCollector(aConsoleReportCollector); } \
  NS_IMETHOD SetReleaseHandle(nsISupports *aHandle) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReleaseHandle(aHandle); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsInterceptedChannel : public nsIInterceptedChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINTERCEPTEDCHANNEL

  nsInterceptedChannel();

private:
  ~nsInterceptedChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsInterceptedChannel, nsIInterceptedChannel)

nsInterceptedChannel::nsInterceptedChannel()
{
  /* member initializers and constructor code */
}

nsInterceptedChannel::~nsInterceptedChannel()
{
  /* destructor code */
}

/* void resetInterception (); */
NS_IMETHODIMP nsInterceptedChannel::ResetInterception()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void synthesizeStatus (in uint16_t status, in ACString reason); */
NS_IMETHODIMP nsInterceptedChannel::SynthesizeStatus(uint16_t status, const nsACString & reason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void synthesizeHeader (in ACString name, in ACString value); */
NS_IMETHODIMP nsInterceptedChannel::SynthesizeHeader(const nsACString & name, const nsACString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void finishSynthesizedResponse (in ACString finalURLSpec); */
NS_IMETHODIMP nsInterceptedChannel::FinishSynthesizedResponse(const nsACString & finalURLSpec)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancel (in nsresult status); */
NS_IMETHODIMP nsInterceptedChannel::Cancel(nsresult status)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIOutputStream responseBody; */
NS_IMETHODIMP nsInterceptedChannel::GetResponseBody(nsIOutputStream * *aResponseBody)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIChannel channel; */
NS_IMETHODIMP nsInterceptedChannel::GetChannel(nsIChannel * *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI secureUpgradedChannelURI; */
NS_IMETHODIMP nsInterceptedChannel::GetSecureUpgradedChannelURI(nsIURI * *aSecureUpgradedChannelURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setChannelInfo (in ChannelInfo channelInfo); */
NS_IMETHODIMP nsInterceptedChannel::SetChannelInfo(mozilla::dom::ChannelInfo *channelInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsContentPolicyType internalContentPolicyType; */
NS_IMETHODIMP nsInterceptedChannel::GetInternalContentPolicyType(nsContentPolicyType *aInternalContentPolicyType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIConsoleReportCollector consoleReportCollector; */
NS_IMETHODIMP nsInterceptedChannel::GetConsoleReportCollector(nsIConsoleReportCollector * *aConsoleReportCollector)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setReleaseHandle (in nsISupports aHandle); */
NS_IMETHODIMP nsInterceptedChannel::SetReleaseHandle(nsISupports *aHandle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINetworkInterceptController */
#define NS_INETWORKINTERCEPTCONTROLLER_IID_STR "70d2b4fe-a552-48cd-8d93-1d8437a56b53"

#define NS_INETWORKINTERCEPTCONTROLLER_IID \
  {0x70d2b4fe, 0xa552, 0x48cd, \
    { 0x8d, 0x93, 0x1d, 0x84, 0x37, 0xa5, 0x6b, 0x53 }}

class NS_NO_VTABLE nsINetworkInterceptController : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INETWORKINTERCEPTCONTROLLER_IID)

  /* bool shouldPrepareForIntercept (in nsIURI aURI, in bool aIsNonSubresourceRequest); */
  NS_IMETHOD ShouldPrepareForIntercept(nsIURI *aURI, bool aIsNonSubresourceRequest, bool *_retval) = 0;

  /* void channelIntercepted (in nsIInterceptedChannel aChannel); */
  NS_IMETHOD ChannelIntercepted(nsIInterceptedChannel *aChannel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINetworkInterceptController, NS_INETWORKINTERCEPTCONTROLLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINETWORKINTERCEPTCONTROLLER \
  NS_IMETHOD ShouldPrepareForIntercept(nsIURI *aURI, bool aIsNonSubresourceRequest, bool *_retval) override; \
  NS_IMETHOD ChannelIntercepted(nsIInterceptedChannel *aChannel) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSINETWORKINTERCEPTCONTROLLER \
  NS_METHOD ShouldPrepareForIntercept(nsIURI *aURI, bool aIsNonSubresourceRequest, bool *_retval); \
  NS_METHOD ChannelIntercepted(nsIInterceptedChannel *aChannel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINETWORKINTERCEPTCONTROLLER(_to) \
  NS_IMETHOD ShouldPrepareForIntercept(nsIURI *aURI, bool aIsNonSubresourceRequest, bool *_retval) override { return _to ShouldPrepareForIntercept(aURI, aIsNonSubresourceRequest, _retval); } \
  NS_IMETHOD ChannelIntercepted(nsIInterceptedChannel *aChannel) override { return _to ChannelIntercepted(aChannel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINETWORKINTERCEPTCONTROLLER(_to) \
  NS_IMETHOD ShouldPrepareForIntercept(nsIURI *aURI, bool aIsNonSubresourceRequest, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShouldPrepareForIntercept(aURI, aIsNonSubresourceRequest, _retval); } \
  NS_IMETHOD ChannelIntercepted(nsIInterceptedChannel *aChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ChannelIntercepted(aChannel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNetworkInterceptController : public nsINetworkInterceptController
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINETWORKINTERCEPTCONTROLLER

  nsNetworkInterceptController();

private:
  ~nsNetworkInterceptController();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsNetworkInterceptController, nsINetworkInterceptController)

nsNetworkInterceptController::nsNetworkInterceptController()
{
  /* member initializers and constructor code */
}

nsNetworkInterceptController::~nsNetworkInterceptController()
{
  /* destructor code */
}

/* bool shouldPrepareForIntercept (in nsIURI aURI, in bool aIsNonSubresourceRequest); */
NS_IMETHODIMP nsNetworkInterceptController::ShouldPrepareForIntercept(nsIURI *aURI, bool aIsNonSubresourceRequest, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void channelIntercepted (in nsIInterceptedChannel aChannel); */
NS_IMETHODIMP nsNetworkInterceptController::ChannelIntercepted(nsIInterceptedChannel *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsINetworkInterceptController_h__ */
