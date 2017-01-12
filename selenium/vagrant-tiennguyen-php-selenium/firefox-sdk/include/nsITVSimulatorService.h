/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsITVSimulatorService.idl
 */

#ifndef __gen_nsITVSimulatorService_h__
#define __gen_nsITVSimulatorService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsITVService_h__
#include "nsITVService.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */

#define TV_SIMULATOR_SERVICE_CONTRACTID\
  "@mozilla.org/tv/simulatorservice;1"

/* starting interface:    nsITVSimulatorService */
#define NS_ITVSIMULATORSERVICE_IID_STR "3f670994-5915-415a-b906-7ead54bb3be1"

#define NS_ITVSIMULATORSERVICE_IID \
  {0x3f670994, 0x5915, 0x415a, \
    { 0xb9, 0x06, 0x7e, 0xad, 0x54, 0xbb, 0x3b, 0xe1 }}

class NS_NO_VTABLE nsITVSimulatorService : public nsITVService {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITVSIMULATORSERVICE_IID)

  /* void getSimulatorVideoBlobURL (in DOMString tunerId, in DOMString sourceType, in DOMString channelNumber, in mozIDOMWindow window, [retval] out DOMString blobUrl); */
  NS_IMETHOD GetSimulatorVideoBlobURL(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, mozIDOMWindow *window, nsAString & blobUrl) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITVSimulatorService, NS_ITVSIMULATORSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITVSIMULATORSERVICE \
  NS_IMETHOD GetSimulatorVideoBlobURL(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, mozIDOMWindow *window, nsAString & blobUrl) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITVSIMULATORSERVICE \
  NS_METHOD GetSimulatorVideoBlobURL(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, mozIDOMWindow *window, nsAString & blobUrl); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITVSIMULATORSERVICE(_to) \
  NS_IMETHOD GetSimulatorVideoBlobURL(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, mozIDOMWindow *window, nsAString & blobUrl) override { return _to GetSimulatorVideoBlobURL(tunerId, sourceType, channelNumber, window, blobUrl); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITVSIMULATORSERVICE(_to) \
  NS_IMETHOD GetSimulatorVideoBlobURL(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, mozIDOMWindow *window, nsAString & blobUrl) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSimulatorVideoBlobURL(tunerId, sourceType, channelNumber, window, blobUrl); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTVSimulatorService : public nsITVSimulatorService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITVSIMULATORSERVICE

  nsTVSimulatorService();

private:
  ~nsTVSimulatorService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTVSimulatorService, nsITVSimulatorService)

nsTVSimulatorService::nsTVSimulatorService()
{
  /* member initializers and constructor code */
}

nsTVSimulatorService::~nsTVSimulatorService()
{
  /* destructor code */
}

/* void getSimulatorVideoBlobURL (in DOMString tunerId, in DOMString sourceType, in DOMString channelNumber, in mozIDOMWindow window, [retval] out DOMString blobUrl); */
NS_IMETHODIMP nsTVSimulatorService::GetSimulatorVideoBlobURL(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, mozIDOMWindow *window, nsAString & blobUrl)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITVSimulatorService_h__ */
