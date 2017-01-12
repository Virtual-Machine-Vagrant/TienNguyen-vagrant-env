/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIFeedResultService.idl
 */

#ifndef __gen_nsIFeedResultService_h__
#define __gen_nsIFeedResultService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIRequest; /* forward declaration */

class nsIFeedResult; /* forward declaration */


/* starting interface:    nsIFeedResultService */
#define NS_IFEEDRESULTSERVICE_IID_STR "95309fd2-7b3a-47fb-97f3-5c460d9473cd"

#define NS_IFEEDRESULTSERVICE_IID \
  {0x95309fd2, 0x7b3a, 0x47fb, \
    { 0x97, 0xf3, 0x5c, 0x46, 0x0d, 0x94, 0x73, 0xcd }}

class NS_NO_VTABLE nsIFeedResultService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFEEDRESULTSERVICE_IID)

  /* attribute boolean forcePreviewPage; */
  NS_IMETHOD GetForcePreviewPage(bool *aForcePreviewPage) = 0;
  NS_IMETHOD SetForcePreviewPage(bool aForcePreviewPage) = 0;

  /* void addToClientReader (in AUTF8String uri, in AString title, in AString subtitle, in unsigned long feedType, [optional] in AString feedReader); */
  NS_IMETHOD AddToClientReader(const nsACString & uri, const nsAString & title, const nsAString & subtitle, uint32_t feedType, const nsAString & feedReader) = 0;

  /* void addFeedResult (in nsIFeedResult feedResult); */
  NS_IMETHOD AddFeedResult(nsIFeedResult *feedResult) = 0;

  /* nsIFeedResult getFeedResult (in nsIURI uri); */
  NS_IMETHOD GetFeedResult(nsIURI *uri, nsIFeedResult * *_retval) = 0;

  /* void removeFeedResult (in nsIURI uri); */
  NS_IMETHOD RemoveFeedResult(nsIURI *uri) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFeedResultService, NS_IFEEDRESULTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFEEDRESULTSERVICE \
  NS_IMETHOD GetForcePreviewPage(bool *aForcePreviewPage) override; \
  NS_IMETHOD SetForcePreviewPage(bool aForcePreviewPage) override; \
  NS_IMETHOD AddToClientReader(const nsACString & uri, const nsAString & title, const nsAString & subtitle, uint32_t feedType, const nsAString & feedReader) override; \
  NS_IMETHOD AddFeedResult(nsIFeedResult *feedResult) override; \
  NS_IMETHOD GetFeedResult(nsIURI *uri, nsIFeedResult * *_retval) override; \
  NS_IMETHOD RemoveFeedResult(nsIURI *uri) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFEEDRESULTSERVICE \
  NS_METHOD GetForcePreviewPage(bool *aForcePreviewPage); \
  NS_METHOD SetForcePreviewPage(bool aForcePreviewPage); \
  NS_METHOD AddToClientReader(const nsACString & uri, const nsAString & title, const nsAString & subtitle, uint32_t feedType, const nsAString & feedReader); \
  NS_METHOD AddFeedResult(nsIFeedResult *feedResult); \
  NS_METHOD GetFeedResult(nsIURI *uri, nsIFeedResult * *_retval); \
  NS_METHOD RemoveFeedResult(nsIURI *uri); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFEEDRESULTSERVICE(_to) \
  NS_IMETHOD GetForcePreviewPage(bool *aForcePreviewPage) override { return _to GetForcePreviewPage(aForcePreviewPage); } \
  NS_IMETHOD SetForcePreviewPage(bool aForcePreviewPage) override { return _to SetForcePreviewPage(aForcePreviewPage); } \
  NS_IMETHOD AddToClientReader(const nsACString & uri, const nsAString & title, const nsAString & subtitle, uint32_t feedType, const nsAString & feedReader) override { return _to AddToClientReader(uri, title, subtitle, feedType, feedReader); } \
  NS_IMETHOD AddFeedResult(nsIFeedResult *feedResult) override { return _to AddFeedResult(feedResult); } \
  NS_IMETHOD GetFeedResult(nsIURI *uri, nsIFeedResult * *_retval) override { return _to GetFeedResult(uri, _retval); } \
  NS_IMETHOD RemoveFeedResult(nsIURI *uri) override { return _to RemoveFeedResult(uri); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFEEDRESULTSERVICE(_to) \
  NS_IMETHOD GetForcePreviewPage(bool *aForcePreviewPage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForcePreviewPage(aForcePreviewPage); } \
  NS_IMETHOD SetForcePreviewPage(bool aForcePreviewPage) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetForcePreviewPage(aForcePreviewPage); } \
  NS_IMETHOD AddToClientReader(const nsACString & uri, const nsAString & title, const nsAString & subtitle, uint32_t feedType, const nsAString & feedReader) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddToClientReader(uri, title, subtitle, feedType, feedReader); } \
  NS_IMETHOD AddFeedResult(nsIFeedResult *feedResult) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddFeedResult(feedResult); } \
  NS_IMETHOD GetFeedResult(nsIURI *uri, nsIFeedResult * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFeedResult(uri, _retval); } \
  NS_IMETHOD RemoveFeedResult(nsIURI *uri) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFeedResult(uri); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFeedResultService : public nsIFeedResultService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFEEDRESULTSERVICE

  nsFeedResultService();

private:
  ~nsFeedResultService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFeedResultService, nsIFeedResultService)

nsFeedResultService::nsFeedResultService()
{
  /* member initializers and constructor code */
}

nsFeedResultService::~nsFeedResultService()
{
  /* destructor code */
}

/* attribute boolean forcePreviewPage; */
NS_IMETHODIMP nsFeedResultService::GetForcePreviewPage(bool *aForcePreviewPage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFeedResultService::SetForcePreviewPage(bool aForcePreviewPage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addToClientReader (in AUTF8String uri, in AString title, in AString subtitle, in unsigned long feedType, [optional] in AString feedReader); */
NS_IMETHODIMP nsFeedResultService::AddToClientReader(const nsACString & uri, const nsAString & title, const nsAString & subtitle, uint32_t feedType, const nsAString & feedReader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addFeedResult (in nsIFeedResult feedResult); */
NS_IMETHODIMP nsFeedResultService::AddFeedResult(nsIFeedResult *feedResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIFeedResult getFeedResult (in nsIURI uri); */
NS_IMETHODIMP nsFeedResultService::GetFeedResult(nsIURI *uri, nsIFeedResult * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFeedResult (in nsIURI uri); */
NS_IMETHODIMP nsFeedResultService::RemoveFeedResult(nsIURI *uri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFeedResultService_h__ */
