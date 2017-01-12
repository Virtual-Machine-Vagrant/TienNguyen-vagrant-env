/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIShellService.idl
 */

#ifndef __gen_nsIShellService_h__
#define __gen_nsIShellService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMElement; /* forward declaration */

class nsIFile; /* forward declaration */


/* starting interface:    nsIShellService */
#define NS_ISHELLSERVICE_IID_STR "2d1a95e4-5bd8-4eeb-b0a8-c1455fd2a357"

#define NS_ISHELLSERVICE_IID \
  {0x2d1a95e4, 0x5bd8, 0x4eeb, \
    { 0xb0, 0xa8, 0xc1, 0x45, 0x5f, 0xd2, 0xa3, 0x57 }}

class NS_NO_VTABLE nsIShellService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISHELLSERVICE_IID)

  /* boolean isDefaultBrowser (in boolean aStartupCheck, [optional] in boolean aForAllTypes); */
  NS_IMETHOD IsDefaultBrowser(bool aStartupCheck, bool aForAllTypes, bool *_retval) = 0;

  /* void setDefaultBrowser (in boolean aClaimAllTypes, in boolean aForAllUsers); */
  NS_IMETHOD SetDefaultBrowser(bool aClaimAllTypes, bool aForAllUsers) = 0;

  enum {
    BACKGROUND_TILE = 1,
    BACKGROUND_STRETCH = 2,
    BACKGROUND_CENTER = 3,
    BACKGROUND_FILL = 4,
    BACKGROUND_FIT = 5
  };

  /* void setDesktopBackground (in nsIDOMElement aElement, in long aPosition); */
  NS_IMETHOD SetDesktopBackground(nsIDOMElement *aElement, int32_t aPosition) = 0;

  enum {
    APPLICATION_MAIL = 0,
    APPLICATION_NEWS = 1
  };

  /* void openApplication (in long aApplication); */
  NS_IMETHOD OpenApplication(int32_t aApplication) = 0;

  /* attribute unsigned long desktopBackgroundColor; */
  NS_IMETHOD GetDesktopBackgroundColor(uint32_t *aDesktopBackgroundColor) = 0;
  NS_IMETHOD SetDesktopBackgroundColor(uint32_t aDesktopBackgroundColor) = 0;

  /* void openApplicationWithURI (in nsIFile aApplication, in ACString aURI); */
  NS_IMETHOD OpenApplicationWithURI(nsIFile *aApplication, const nsACString & aURI) = 0;

  /* readonly attribute nsIFile defaultFeedReader; */
  NS_IMETHOD GetDefaultFeedReader(nsIFile * *aDefaultFeedReader) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIShellService, NS_ISHELLSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISHELLSERVICE \
  NS_IMETHOD IsDefaultBrowser(bool aStartupCheck, bool aForAllTypes, bool *_retval) override; \
  NS_IMETHOD SetDefaultBrowser(bool aClaimAllTypes, bool aForAllUsers) override; \
  NS_IMETHOD SetDesktopBackground(nsIDOMElement *aElement, int32_t aPosition) override; \
  NS_IMETHOD OpenApplication(int32_t aApplication) override; \
  NS_IMETHOD GetDesktopBackgroundColor(uint32_t *aDesktopBackgroundColor) override; \
  NS_IMETHOD SetDesktopBackgroundColor(uint32_t aDesktopBackgroundColor) override; \
  NS_IMETHOD OpenApplicationWithURI(nsIFile *aApplication, const nsACString & aURI) override; \
  NS_IMETHOD GetDefaultFeedReader(nsIFile * *aDefaultFeedReader) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISHELLSERVICE \
  NS_METHOD IsDefaultBrowser(bool aStartupCheck, bool aForAllTypes, bool *_retval); \
  NS_METHOD SetDefaultBrowser(bool aClaimAllTypes, bool aForAllUsers); \
  NS_METHOD SetDesktopBackground(nsIDOMElement *aElement, int32_t aPosition); \
  NS_METHOD OpenApplication(int32_t aApplication); \
  NS_METHOD GetDesktopBackgroundColor(uint32_t *aDesktopBackgroundColor); \
  NS_METHOD SetDesktopBackgroundColor(uint32_t aDesktopBackgroundColor); \
  NS_METHOD OpenApplicationWithURI(nsIFile *aApplication, const nsACString & aURI); \
  NS_METHOD GetDefaultFeedReader(nsIFile * *aDefaultFeedReader); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISHELLSERVICE(_to) \
  NS_IMETHOD IsDefaultBrowser(bool aStartupCheck, bool aForAllTypes, bool *_retval) override { return _to IsDefaultBrowser(aStartupCheck, aForAllTypes, _retval); } \
  NS_IMETHOD SetDefaultBrowser(bool aClaimAllTypes, bool aForAllUsers) override { return _to SetDefaultBrowser(aClaimAllTypes, aForAllUsers); } \
  NS_IMETHOD SetDesktopBackground(nsIDOMElement *aElement, int32_t aPosition) override { return _to SetDesktopBackground(aElement, aPosition); } \
  NS_IMETHOD OpenApplication(int32_t aApplication) override { return _to OpenApplication(aApplication); } \
  NS_IMETHOD GetDesktopBackgroundColor(uint32_t *aDesktopBackgroundColor) override { return _to GetDesktopBackgroundColor(aDesktopBackgroundColor); } \
  NS_IMETHOD SetDesktopBackgroundColor(uint32_t aDesktopBackgroundColor) override { return _to SetDesktopBackgroundColor(aDesktopBackgroundColor); } \
  NS_IMETHOD OpenApplicationWithURI(nsIFile *aApplication, const nsACString & aURI) override { return _to OpenApplicationWithURI(aApplication, aURI); } \
  NS_IMETHOD GetDefaultFeedReader(nsIFile * *aDefaultFeedReader) override { return _to GetDefaultFeedReader(aDefaultFeedReader); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISHELLSERVICE(_to) \
  NS_IMETHOD IsDefaultBrowser(bool aStartupCheck, bool aForAllTypes, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDefaultBrowser(aStartupCheck, aForAllTypes, _retval); } \
  NS_IMETHOD SetDefaultBrowser(bool aClaimAllTypes, bool aForAllUsers) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultBrowser(aClaimAllTypes, aForAllUsers); } \
  NS_IMETHOD SetDesktopBackground(nsIDOMElement *aElement, int32_t aPosition) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDesktopBackground(aElement, aPosition); } \
  NS_IMETHOD OpenApplication(int32_t aApplication) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenApplication(aApplication); } \
  NS_IMETHOD GetDesktopBackgroundColor(uint32_t *aDesktopBackgroundColor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDesktopBackgroundColor(aDesktopBackgroundColor); } \
  NS_IMETHOD SetDesktopBackgroundColor(uint32_t aDesktopBackgroundColor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDesktopBackgroundColor(aDesktopBackgroundColor); } \
  NS_IMETHOD OpenApplicationWithURI(nsIFile *aApplication, const nsACString & aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenApplicationWithURI(aApplication, aURI); } \
  NS_IMETHOD GetDefaultFeedReader(nsIFile * *aDefaultFeedReader) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultFeedReader(aDefaultFeedReader); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsShellService : public nsIShellService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISHELLSERVICE

  nsShellService();

private:
  ~nsShellService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsShellService, nsIShellService)

nsShellService::nsShellService()
{
  /* member initializers and constructor code */
}

nsShellService::~nsShellService()
{
  /* destructor code */
}

/* boolean isDefaultBrowser (in boolean aStartupCheck, [optional] in boolean aForAllTypes); */
NS_IMETHODIMP nsShellService::IsDefaultBrowser(bool aStartupCheck, bool aForAllTypes, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDefaultBrowser (in boolean aClaimAllTypes, in boolean aForAllUsers); */
NS_IMETHODIMP nsShellService::SetDefaultBrowser(bool aClaimAllTypes, bool aForAllUsers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDesktopBackground (in nsIDOMElement aElement, in long aPosition); */
NS_IMETHODIMP nsShellService::SetDesktopBackground(nsIDOMElement *aElement, int32_t aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void openApplication (in long aApplication); */
NS_IMETHODIMP nsShellService::OpenApplication(int32_t aApplication)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long desktopBackgroundColor; */
NS_IMETHODIMP nsShellService::GetDesktopBackgroundColor(uint32_t *aDesktopBackgroundColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsShellService::SetDesktopBackgroundColor(uint32_t aDesktopBackgroundColor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void openApplicationWithURI (in nsIFile aApplication, in ACString aURI); */
NS_IMETHODIMP nsShellService::OpenApplicationWithURI(nsIFile *aApplication, const nsACString & aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile defaultFeedReader; */
NS_IMETHODIMP nsShellService::GetDefaultFeedReader(nsIFile * *aDefaultFeedReader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIShellService_h__ */
