/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAboutNewTabService.idl
 */

#ifndef __gen_nsIAboutNewTabService_h__
#define __gen_nsIAboutNewTabService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIAboutNewTabService */
#define NS_IABOUTNEWTABSERVICE_IID_STR "dfcd2adc-7867-4d3a-ba70-17501f208142"

#define NS_IABOUTNEWTABSERVICE_IID \
  {0xdfcd2adc, 0x7867, 0x4d3a, \
    { 0xba, 0x70, 0x17, 0x50, 0x1f, 0x20, 0x81, 0x42 }}

class NS_NO_VTABLE nsIAboutNewTabService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IABOUTNEWTABSERVICE_IID)

  /* attribute ACString newTabURL; */
  NS_IMETHOD GetNewTabURL(nsACString & aNewTabURL) = 0;
  NS_IMETHOD SetNewTabURL(const nsACString & aNewTabURL) = 0;

  /* attribute ACString defaultURL; */
  NS_IMETHOD GetDefaultURL(nsACString & aDefaultURL) = 0;
  NS_IMETHOD SetDefaultURL(const nsACString & aDefaultURL) = 0;

  /* readonly attribute bool overridden; */
  NS_IMETHOD GetOverridden(bool *aOverridden) = 0;

  /* readonly attribute bool remoteEnabled; */
  NS_IMETHOD GetRemoteEnabled(bool *aRemoteEnabled) = 0;

  /* readonly attribute ACString remoteVersion; */
  NS_IMETHOD GetRemoteVersion(nsACString & aRemoteVersion) = 0;

  /* readonly attribute ACString remoteReleaseName; */
  NS_IMETHOD GetRemoteReleaseName(nsACString & aRemoteReleaseName) = 0;

  /* ACString generateRemoteURL (); */
  NS_IMETHOD GenerateRemoteURL(nsACString & _retval) = 0;

  /* ACString releaseFromUpdateChannel (in ACString channelName); */
  NS_IMETHOD ReleaseFromUpdateChannel(const nsACString & channelName, nsACString & _retval) = 0;

  /* void resetNewTabURL (); */
  NS_IMETHOD ResetNewTabURL(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAboutNewTabService, NS_IABOUTNEWTABSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIABOUTNEWTABSERVICE \
  NS_IMETHOD GetNewTabURL(nsACString & aNewTabURL) override; \
  NS_IMETHOD SetNewTabURL(const nsACString & aNewTabURL) override; \
  NS_IMETHOD GetDefaultURL(nsACString & aDefaultURL) override; \
  NS_IMETHOD SetDefaultURL(const nsACString & aDefaultURL) override; \
  NS_IMETHOD GetOverridden(bool *aOverridden) override; \
  NS_IMETHOD GetRemoteEnabled(bool *aRemoteEnabled) override; \
  NS_IMETHOD GetRemoteVersion(nsACString & aRemoteVersion) override; \
  NS_IMETHOD GetRemoteReleaseName(nsACString & aRemoteReleaseName) override; \
  NS_IMETHOD GenerateRemoteURL(nsACString & _retval) override; \
  NS_IMETHOD ReleaseFromUpdateChannel(const nsACString & channelName, nsACString & _retval) override; \
  NS_IMETHOD ResetNewTabURL(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIABOUTNEWTABSERVICE \
  NS_METHOD GetNewTabURL(nsACString & aNewTabURL); \
  NS_METHOD SetNewTabURL(const nsACString & aNewTabURL); \
  NS_METHOD GetDefaultURL(nsACString & aDefaultURL); \
  NS_METHOD SetDefaultURL(const nsACString & aDefaultURL); \
  NS_METHOD GetOverridden(bool *aOverridden); \
  NS_METHOD GetRemoteEnabled(bool *aRemoteEnabled); \
  NS_METHOD GetRemoteVersion(nsACString & aRemoteVersion); \
  NS_METHOD GetRemoteReleaseName(nsACString & aRemoteReleaseName); \
  NS_METHOD GenerateRemoteURL(nsACString & _retval); \
  NS_METHOD ReleaseFromUpdateChannel(const nsACString & channelName, nsACString & _retval); \
  NS_METHOD ResetNewTabURL(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIABOUTNEWTABSERVICE(_to) \
  NS_IMETHOD GetNewTabURL(nsACString & aNewTabURL) override { return _to GetNewTabURL(aNewTabURL); } \
  NS_IMETHOD SetNewTabURL(const nsACString & aNewTabURL) override { return _to SetNewTabURL(aNewTabURL); } \
  NS_IMETHOD GetDefaultURL(nsACString & aDefaultURL) override { return _to GetDefaultURL(aDefaultURL); } \
  NS_IMETHOD SetDefaultURL(const nsACString & aDefaultURL) override { return _to SetDefaultURL(aDefaultURL); } \
  NS_IMETHOD GetOverridden(bool *aOverridden) override { return _to GetOverridden(aOverridden); } \
  NS_IMETHOD GetRemoteEnabled(bool *aRemoteEnabled) override { return _to GetRemoteEnabled(aRemoteEnabled); } \
  NS_IMETHOD GetRemoteVersion(nsACString & aRemoteVersion) override { return _to GetRemoteVersion(aRemoteVersion); } \
  NS_IMETHOD GetRemoteReleaseName(nsACString & aRemoteReleaseName) override { return _to GetRemoteReleaseName(aRemoteReleaseName); } \
  NS_IMETHOD GenerateRemoteURL(nsACString & _retval) override { return _to GenerateRemoteURL(_retval); } \
  NS_IMETHOD ReleaseFromUpdateChannel(const nsACString & channelName, nsACString & _retval) override { return _to ReleaseFromUpdateChannel(channelName, _retval); } \
  NS_IMETHOD ResetNewTabURL(void) override { return _to ResetNewTabURL(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIABOUTNEWTABSERVICE(_to) \
  NS_IMETHOD GetNewTabURL(nsACString & aNewTabURL) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNewTabURL(aNewTabURL); } \
  NS_IMETHOD SetNewTabURL(const nsACString & aNewTabURL) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNewTabURL(aNewTabURL); } \
  NS_IMETHOD GetDefaultURL(nsACString & aDefaultURL) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultURL(aDefaultURL); } \
  NS_IMETHOD SetDefaultURL(const nsACString & aDefaultURL) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultURL(aDefaultURL); } \
  NS_IMETHOD GetOverridden(bool *aOverridden) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOverridden(aOverridden); } \
  NS_IMETHOD GetRemoteEnabled(bool *aRemoteEnabled) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemoteEnabled(aRemoteEnabled); } \
  NS_IMETHOD GetRemoteVersion(nsACString & aRemoteVersion) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemoteVersion(aRemoteVersion); } \
  NS_IMETHOD GetRemoteReleaseName(nsACString & aRemoteReleaseName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRemoteReleaseName(aRemoteReleaseName); } \
  NS_IMETHOD GenerateRemoteURL(nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GenerateRemoteURL(_retval); } \
  NS_IMETHOD ReleaseFromUpdateChannel(const nsACString & channelName, nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseFromUpdateChannel(channelName, _retval); } \
  NS_IMETHOD ResetNewTabURL(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetNewTabURL(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAboutNewTabService : public nsIAboutNewTabService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIABOUTNEWTABSERVICE

  nsAboutNewTabService();

private:
  ~nsAboutNewTabService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAboutNewTabService, nsIAboutNewTabService)

nsAboutNewTabService::nsAboutNewTabService()
{
  /* member initializers and constructor code */
}

nsAboutNewTabService::~nsAboutNewTabService()
{
  /* destructor code */
}

/* attribute ACString newTabURL; */
NS_IMETHODIMP nsAboutNewTabService::GetNewTabURL(nsACString & aNewTabURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAboutNewTabService::SetNewTabURL(const nsACString & aNewTabURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString defaultURL; */
NS_IMETHODIMP nsAboutNewTabService::GetDefaultURL(nsACString & aDefaultURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAboutNewTabService::SetDefaultURL(const nsACString & aDefaultURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool overridden; */
NS_IMETHODIMP nsAboutNewTabService::GetOverridden(bool *aOverridden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool remoteEnabled; */
NS_IMETHODIMP nsAboutNewTabService::GetRemoteEnabled(bool *aRemoteEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString remoteVersion; */
NS_IMETHODIMP nsAboutNewTabService::GetRemoteVersion(nsACString & aRemoteVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString remoteReleaseName; */
NS_IMETHODIMP nsAboutNewTabService::GetRemoteReleaseName(nsACString & aRemoteReleaseName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString generateRemoteURL (); */
NS_IMETHODIMP nsAboutNewTabService::GenerateRemoteURL(nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString releaseFromUpdateChannel (in ACString channelName); */
NS_IMETHODIMP nsAboutNewTabService::ReleaseFromUpdateChannel(const nsACString & channelName, nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetNewTabURL (); */
NS_IMETHODIMP nsAboutNewTabService::ResetNewTabURL()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAboutNewTabService_h__ */
