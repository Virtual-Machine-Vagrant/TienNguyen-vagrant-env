/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAlertsService.idl
 */

#ifndef __gen_nsIAlertsService_h__
#define __gen_nsIAlertsService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIObserver_h__
#include "nsIObserver.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIPrincipal; /* forward declaration */

class nsIURI; /* forward declaration */

#define ALERT_NOTIFICATION_CONTRACTID "@mozilla.org/alert-notification;1"

/* starting interface:    nsIAlertNotification */
#define NS_IALERTNOTIFICATION_IID_STR "1650a064-79d5-4eb6-8c9e-57dd6522b6ac"

#define NS_IALERTNOTIFICATION_IID \
  {0x1650a064, 0x79d5, 0x4eb6, \
    { 0x8c, 0x9e, 0x57, 0xdd, 0x65, 0x22, 0xb6, 0xac }}

class NS_NO_VTABLE nsIAlertNotification : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTNOTIFICATION_IID)

  /* void init ([optional] in AString name, [optional] in AString imageURL, [optional] in AString title, [optional] in AString text, [optional] in boolean textClickable, [optional] in AString cookie, [optional] in AString dir, [optional] in AString lang, [optional] in AString data, [optional] in nsIPrincipal principal, [optional] in boolean inPrivateBrowsing); */
  NS_IMETHOD Init(const nsAString & name, const nsAString & imageURL, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) = 0;

  /* readonly attribute AString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;

  /* readonly attribute AString imageURL; */
  NS_IMETHOD GetImageURL(nsAString & aImageURL) = 0;

  /* readonly attribute AString title; */
  NS_IMETHOD GetTitle(nsAString & aTitle) = 0;

  /* readonly attribute AString text; */
  NS_IMETHOD GetText(nsAString & aText) = 0;

  /* readonly attribute boolean textClickable; */
  NS_IMETHOD GetTextClickable(bool *aTextClickable) = 0;

  /* readonly attribute AString cookie; */
  NS_IMETHOD GetCookie(nsAString & aCookie) = 0;

  /* readonly attribute AString dir; */
  NS_IMETHOD GetDir(nsAString & aDir) = 0;

  /* readonly attribute AString lang; */
  NS_IMETHOD GetLang(nsAString & aLang) = 0;

  /* readonly attribute AString data; */
  NS_IMETHOD GetData(nsAString & aData) = 0;

  /* readonly attribute nsIPrincipal principal; */
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) = 0;

  /* readonly attribute nsIURI URI; */
  NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

  /* readonly attribute boolean inPrivateBrowsing; */
  NS_IMETHOD GetInPrivateBrowsing(bool *aInPrivateBrowsing) = 0;

  /* readonly attribute boolean actionable; */
  NS_IMETHOD GetActionable(bool *aActionable) = 0;

  /* readonly attribute AString source; */
  NS_IMETHOD GetSource(nsAString & aSource) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertNotification, NS_IALERTNOTIFICATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTNOTIFICATION \
  NS_IMETHOD Init(const nsAString & name, const nsAString & imageURL, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD GetImageURL(nsAString & aImageURL) override; \
  NS_IMETHOD GetTitle(nsAString & aTitle) override; \
  NS_IMETHOD GetText(nsAString & aText) override; \
  NS_IMETHOD GetTextClickable(bool *aTextClickable) override; \
  NS_IMETHOD GetCookie(nsAString & aCookie) override; \
  NS_IMETHOD GetDir(nsAString & aDir) override; \
  NS_IMETHOD GetLang(nsAString & aLang) override; \
  NS_IMETHOD GetData(nsAString & aData) override; \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override; \
  NS_IMETHOD GetURI(nsIURI * *aURI) override; \
  NS_IMETHOD GetInPrivateBrowsing(bool *aInPrivateBrowsing) override; \
  NS_IMETHOD GetActionable(bool *aActionable) override; \
  NS_IMETHOD GetSource(nsAString & aSource) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIALERTNOTIFICATION \
  NS_METHOD Init(const nsAString & name, const nsAString & imageURL, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing); \
  NS_METHOD GetName(nsAString & aName); \
  NS_METHOD GetImageURL(nsAString & aImageURL); \
  NS_METHOD GetTitle(nsAString & aTitle); \
  NS_METHOD GetText(nsAString & aText); \
  NS_METHOD GetTextClickable(bool *aTextClickable); \
  NS_METHOD GetCookie(nsAString & aCookie); \
  NS_METHOD GetDir(nsAString & aDir); \
  NS_METHOD GetLang(nsAString & aLang); \
  NS_METHOD GetData(nsAString & aData); \
  NS_METHOD GetPrincipal(nsIPrincipal * *aPrincipal); \
  NS_METHOD GetURI(nsIURI * *aURI); \
  NS_METHOD GetInPrivateBrowsing(bool *aInPrivateBrowsing); \
  NS_METHOD GetActionable(bool *aActionable); \
  NS_METHOD GetSource(nsAString & aSource); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTNOTIFICATION(_to) \
  NS_IMETHOD Init(const nsAString & name, const nsAString & imageURL, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) override { return _to Init(name, imageURL, title, text, textClickable, cookie, dir, lang, data, principal, inPrivateBrowsing); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD GetImageURL(nsAString & aImageURL) override { return _to GetImageURL(aImageURL); } \
  NS_IMETHOD GetTitle(nsAString & aTitle) override { return _to GetTitle(aTitle); } \
  NS_IMETHOD GetText(nsAString & aText) override { return _to GetText(aText); } \
  NS_IMETHOD GetTextClickable(bool *aTextClickable) override { return _to GetTextClickable(aTextClickable); } \
  NS_IMETHOD GetCookie(nsAString & aCookie) override { return _to GetCookie(aCookie); } \
  NS_IMETHOD GetDir(nsAString & aDir) override { return _to GetDir(aDir); } \
  NS_IMETHOD GetLang(nsAString & aLang) override { return _to GetLang(aLang); } \
  NS_IMETHOD GetData(nsAString & aData) override { return _to GetData(aData); } \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return _to GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return _to GetURI(aURI); } \
  NS_IMETHOD GetInPrivateBrowsing(bool *aInPrivateBrowsing) override { return _to GetInPrivateBrowsing(aInPrivateBrowsing); } \
  NS_IMETHOD GetActionable(bool *aActionable) override { return _to GetActionable(aActionable); } \
  NS_IMETHOD GetSource(nsAString & aSource) override { return _to GetSource(aSource); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTNOTIFICATION(_to) \
  NS_IMETHOD Init(const nsAString & name, const nsAString & imageURL, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(name, imageURL, title, text, textClickable, cookie, dir, lang, data, principal, inPrivateBrowsing); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD GetImageURL(nsAString & aImageURL) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImageURL(aImageURL); } \
  NS_IMETHOD GetTitle(nsAString & aTitle) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_IMETHOD GetText(nsAString & aText) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetText(aText); } \
  NS_IMETHOD GetTextClickable(bool *aTextClickable) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTextClickable(aTextClickable); } \
  NS_IMETHOD GetCookie(nsAString & aCookie) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCookie(aCookie); } \
  NS_IMETHOD GetDir(nsAString & aDir) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDir(aDir); } \
  NS_IMETHOD GetLang(nsAString & aLang) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLang(aLang); } \
  NS_IMETHOD GetData(nsAString & aData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD GetPrincipal(nsIPrincipal * *aPrincipal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrincipal(aPrincipal); } \
  NS_IMETHOD GetURI(nsIURI * *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } \
  NS_IMETHOD GetInPrivateBrowsing(bool *aInPrivateBrowsing) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInPrivateBrowsing(aInPrivateBrowsing); } \
  NS_IMETHOD GetActionable(bool *aActionable) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActionable(aActionable); } \
  NS_IMETHOD GetSource(nsAString & aSource) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSource(aSource); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertNotification : public nsIAlertNotification
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTNOTIFICATION

  nsAlertNotification();

private:
  ~nsAlertNotification();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAlertNotification, nsIAlertNotification)

nsAlertNotification::nsAlertNotification()
{
  /* member initializers and constructor code */
}

nsAlertNotification::~nsAlertNotification()
{
  /* destructor code */
}

/* void init ([optional] in AString name, [optional] in AString imageURL, [optional] in AString title, [optional] in AString text, [optional] in boolean textClickable, [optional] in AString cookie, [optional] in AString dir, [optional] in AString lang, [optional] in AString data, [optional] in nsIPrincipal principal, [optional] in boolean inPrivateBrowsing); */
NS_IMETHODIMP nsAlertNotification::Init(const nsAString & name, const nsAString & imageURL, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString name; */
NS_IMETHODIMP nsAlertNotification::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString imageURL; */
NS_IMETHODIMP nsAlertNotification::GetImageURL(nsAString & aImageURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString title; */
NS_IMETHODIMP nsAlertNotification::GetTitle(nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString text; */
NS_IMETHODIMP nsAlertNotification::GetText(nsAString & aText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean textClickable; */
NS_IMETHODIMP nsAlertNotification::GetTextClickable(bool *aTextClickable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString cookie; */
NS_IMETHODIMP nsAlertNotification::GetCookie(nsAString & aCookie)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString dir; */
NS_IMETHODIMP nsAlertNotification::GetDir(nsAString & aDir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString lang; */
NS_IMETHODIMP nsAlertNotification::GetLang(nsAString & aLang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString data; */
NS_IMETHODIMP nsAlertNotification::GetData(nsAString & aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIPrincipal principal; */
NS_IMETHODIMP nsAlertNotification::GetPrincipal(nsIPrincipal * *aPrincipal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP nsAlertNotification::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean inPrivateBrowsing; */
NS_IMETHODIMP nsAlertNotification::GetInPrivateBrowsing(bool *aInPrivateBrowsing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean actionable; */
NS_IMETHODIMP nsAlertNotification::GetActionable(bool *aActionable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString source; */
NS_IMETHODIMP nsAlertNotification::GetSource(nsAString & aSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAlertsService */
#define NS_IALERTSSERVICE_IID_STR "f7a36392-d98b-4141-a7d7-4e46642684e3"

#define NS_IALERTSSERVICE_IID \
  {0xf7a36392, 0xd98b, 0x4141, \
    { 0xa7, 0xd7, 0x4e, 0x46, 0x64, 0x26, 0x84, 0xe3 }}

class NS_NO_VTABLE nsIAlertsService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTSSERVICE_IID)

  /* void showAlert (in nsIAlertNotification alert, [optional] in nsIObserver alertListener); */
  NS_IMETHOD ShowAlert(nsIAlertNotification *alert, nsIObserver *alertListener) = 0;

  /* void showAlertNotification (in AString imageUrl, in AString title, in AString text, [optional] in boolean textClickable, [optional] in AString cookie, [optional] in nsIObserver alertListener, [optional] in AString name, [optional] in AString dir, [optional] in AString lang, [optional] in AString data, [optional] in nsIPrincipal principal, [optional] in boolean inPrivateBrowsing); */
  NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) = 0;

  /* void closeAlert ([optional] in AString name, [optional] in nsIPrincipal principal); */
  NS_IMETHOD CloseAlert(const nsAString & name, nsIPrincipal *principal) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertsService, NS_IALERTSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTSSERVICE \
  NS_IMETHOD ShowAlert(nsIAlertNotification *alert, nsIObserver *alertListener) override; \
  NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) override; \
  NS_IMETHOD CloseAlert(const nsAString & name, nsIPrincipal *principal) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIALERTSSERVICE \
  NS_METHOD ShowAlert(nsIAlertNotification *alert, nsIObserver *alertListener); \
  NS_METHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing); \
  NS_METHOD CloseAlert(const nsAString & name, nsIPrincipal *principal); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTSSERVICE(_to) \
  NS_IMETHOD ShowAlert(nsIAlertNotification *alert, nsIObserver *alertListener) override { return _to ShowAlert(alert, alertListener); } \
  NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) override { return _to ShowAlertNotification(imageUrl, title, text, textClickable, cookie, alertListener, name, dir, lang, data, principal, inPrivateBrowsing); } \
  NS_IMETHOD CloseAlert(const nsAString & name, nsIPrincipal *principal) override { return _to CloseAlert(name, principal); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTSSERVICE(_to) \
  NS_IMETHOD ShowAlert(nsIAlertNotification *alert, nsIObserver *alertListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowAlert(alert, alertListener); } \
  NS_IMETHOD ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowAlertNotification(imageUrl, title, text, textClickable, cookie, alertListener, name, dir, lang, data, principal, inPrivateBrowsing); } \
  NS_IMETHOD CloseAlert(const nsAString & name, nsIPrincipal *principal) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CloseAlert(name, principal); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertsService : public nsIAlertsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTSSERVICE

  nsAlertsService();

private:
  ~nsAlertsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAlertsService, nsIAlertsService)

nsAlertsService::nsAlertsService()
{
  /* member initializers and constructor code */
}

nsAlertsService::~nsAlertsService()
{
  /* destructor code */
}

/* void showAlert (in nsIAlertNotification alert, [optional] in nsIObserver alertListener); */
NS_IMETHODIMP nsAlertsService::ShowAlert(nsIAlertNotification *alert, nsIObserver *alertListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void showAlertNotification (in AString imageUrl, in AString title, in AString text, [optional] in boolean textClickable, [optional] in AString cookie, [optional] in nsIObserver alertListener, [optional] in AString name, [optional] in AString dir, [optional] in AString lang, [optional] in AString data, [optional] in nsIPrincipal principal, [optional] in boolean inPrivateBrowsing); */
NS_IMETHODIMP nsAlertsService::ShowAlertNotification(const nsAString & imageUrl, const nsAString & title, const nsAString & text, bool textClickable, const nsAString & cookie, nsIObserver *alertListener, const nsAString & name, const nsAString & dir, const nsAString & lang, const nsAString & data, nsIPrincipal *principal, bool inPrivateBrowsing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void closeAlert ([optional] in AString name, [optional] in nsIPrincipal principal); */
NS_IMETHODIMP nsAlertsService::CloseAlert(const nsAString & name, nsIPrincipal *principal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAlertsDoNotDisturb */
#define NS_IALERTSDONOTDISTURB_IID_STR "c5d63e3a-259d-45a8-b964-8377967cb4d2"

#define NS_IALERTSDONOTDISTURB_IID \
  {0xc5d63e3a, 0x259d, 0x45a8, \
    { 0xb9, 0x64, 0x83, 0x77, 0x96, 0x7c, 0xb4, 0xd2 }}

class NS_NO_VTABLE nsIAlertsDoNotDisturb : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTSDONOTDISTURB_IID)

  /* attribute bool manualDoNotDisturb; */
  NS_IMETHOD GetManualDoNotDisturb(bool *aManualDoNotDisturb) = 0;
  NS_IMETHOD SetManualDoNotDisturb(bool aManualDoNotDisturb) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertsDoNotDisturb, NS_IALERTSDONOTDISTURB_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTSDONOTDISTURB \
  NS_IMETHOD GetManualDoNotDisturb(bool *aManualDoNotDisturb) override; \
  NS_IMETHOD SetManualDoNotDisturb(bool aManualDoNotDisturb) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIALERTSDONOTDISTURB \
  NS_METHOD GetManualDoNotDisturb(bool *aManualDoNotDisturb); \
  NS_METHOD SetManualDoNotDisturb(bool aManualDoNotDisturb); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTSDONOTDISTURB(_to) \
  NS_IMETHOD GetManualDoNotDisturb(bool *aManualDoNotDisturb) override { return _to GetManualDoNotDisturb(aManualDoNotDisturb); } \
  NS_IMETHOD SetManualDoNotDisturb(bool aManualDoNotDisturb) override { return _to SetManualDoNotDisturb(aManualDoNotDisturb); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTSDONOTDISTURB(_to) \
  NS_IMETHOD GetManualDoNotDisturb(bool *aManualDoNotDisturb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManualDoNotDisturb(aManualDoNotDisturb); } \
  NS_IMETHOD SetManualDoNotDisturb(bool aManualDoNotDisturb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetManualDoNotDisturb(aManualDoNotDisturb); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertsDoNotDisturb : public nsIAlertsDoNotDisturb
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTSDONOTDISTURB

  nsAlertsDoNotDisturb();

private:
  ~nsAlertsDoNotDisturb();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAlertsDoNotDisturb, nsIAlertsDoNotDisturb)

nsAlertsDoNotDisturb::nsAlertsDoNotDisturb()
{
  /* member initializers and constructor code */
}

nsAlertsDoNotDisturb::~nsAlertsDoNotDisturb()
{
  /* destructor code */
}

/* attribute bool manualDoNotDisturb; */
NS_IMETHODIMP nsAlertsDoNotDisturb::GetManualDoNotDisturb(bool *aManualDoNotDisturb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsAlertsDoNotDisturb::SetManualDoNotDisturb(bool aManualDoNotDisturb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAlertsProgressListener */
#define NS_IALERTSPROGRESSLISTENER_IID_STR "df1bd4b0-3a8c-40e6-806a-203f38b0bd9f"

#define NS_IALERTSPROGRESSLISTENER_IID \
  {0xdf1bd4b0, 0x3a8c, 0x40e6, \
    { 0x80, 0x6a, 0x20, 0x3f, 0x38, 0xb0, 0xbd, 0x9f }}

class NS_NO_VTABLE nsIAlertsProgressListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTSPROGRESSLISTENER_IID)

  /* void onProgress (in AString name, in long long progress, in long long progressMax, [optional] in AString text); */
  NS_IMETHOD OnProgress(const nsAString & name, int64_t progress, int64_t progressMax, const nsAString & text) = 0;

  /* void onCancel (in AString name); */
  NS_IMETHOD OnCancel(const nsAString & name) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertsProgressListener, NS_IALERTSPROGRESSLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTSPROGRESSLISTENER \
  NS_IMETHOD OnProgress(const nsAString & name, int64_t progress, int64_t progressMax, const nsAString & text) override; \
  NS_IMETHOD OnCancel(const nsAString & name) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIALERTSPROGRESSLISTENER \
  NS_METHOD OnProgress(const nsAString & name, int64_t progress, int64_t progressMax, const nsAString & text); \
  NS_METHOD OnCancel(const nsAString & name); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTSPROGRESSLISTENER(_to) \
  NS_IMETHOD OnProgress(const nsAString & name, int64_t progress, int64_t progressMax, const nsAString & text) override { return _to OnProgress(name, progress, progressMax, text); } \
  NS_IMETHOD OnCancel(const nsAString & name) override { return _to OnCancel(name); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTSPROGRESSLISTENER(_to) \
  NS_IMETHOD OnProgress(const nsAString & name, int64_t progress, int64_t progressMax, const nsAString & text) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnProgress(name, progress, progressMax, text); } \
  NS_IMETHOD OnCancel(const nsAString & name) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnCancel(name); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertsProgressListener : public nsIAlertsProgressListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTSPROGRESSLISTENER

  nsAlertsProgressListener();

private:
  ~nsAlertsProgressListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAlertsProgressListener, nsIAlertsProgressListener)

nsAlertsProgressListener::nsAlertsProgressListener()
{
  /* member initializers and constructor code */
}

nsAlertsProgressListener::~nsAlertsProgressListener()
{
  /* destructor code */
}

/* void onProgress (in AString name, in long long progress, in long long progressMax, [optional] in AString text); */
NS_IMETHODIMP nsAlertsProgressListener::OnProgress(const nsAString & name, int64_t progress, int64_t progressMax, const nsAString & text)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onCancel (in AString name); */
NS_IMETHODIMP nsAlertsProgressListener::OnCancel(const nsAString & name)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAlertsIconData */
#define NS_IALERTSICONDATA_IID_STR "fc6d7f0a-0cf6-4268-8c71-ab640842b9b1"

#define NS_IALERTSICONDATA_IID \
  {0xfc6d7f0a, 0x0cf6, 0x4268, \
    { 0x8c, 0x71, 0xab, 0x64, 0x08, 0x42, 0xb9, 0xb1 }}

class NS_NO_VTABLE nsIAlertsIconData : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTSICONDATA_IID)

  /* void showAlertWithIconData (in nsIAlertNotification alert, [optional] in nsIObserver alertListener, [optional] in uint32_t iconSize, [array, size_is (iconSize), const] in uint8_t iconData); */
  NS_IMETHOD ShowAlertWithIconData(nsIAlertNotification *alert, nsIObserver *alertListener, uint32_t iconSize, const uint8_t *iconData) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertsIconData, NS_IALERTSICONDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTSICONDATA \
  NS_IMETHOD ShowAlertWithIconData(nsIAlertNotification *alert, nsIObserver *alertListener, uint32_t iconSize, const uint8_t *iconData) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIALERTSICONDATA \
  NS_METHOD ShowAlertWithIconData(nsIAlertNotification *alert, nsIObserver *alertListener, uint32_t iconSize, const uint8_t *iconData); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTSICONDATA(_to) \
  NS_IMETHOD ShowAlertWithIconData(nsIAlertNotification *alert, nsIObserver *alertListener, uint32_t iconSize, const uint8_t *iconData) override { return _to ShowAlertWithIconData(alert, alertListener, iconSize, iconData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTSICONDATA(_to) \
  NS_IMETHOD ShowAlertWithIconData(nsIAlertNotification *alert, nsIObserver *alertListener, uint32_t iconSize, const uint8_t *iconData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowAlertWithIconData(alert, alertListener, iconSize, iconData); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertsIconData : public nsIAlertsIconData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTSICONDATA

  nsAlertsIconData();

private:
  ~nsAlertsIconData();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAlertsIconData, nsIAlertsIconData)

nsAlertsIconData::nsAlertsIconData()
{
  /* member initializers and constructor code */
}

nsAlertsIconData::~nsAlertsIconData()
{
  /* destructor code */
}

/* void showAlertWithIconData (in nsIAlertNotification alert, [optional] in nsIObserver alertListener, [optional] in uint32_t iconSize, [array, size_is (iconSize), const] in uint8_t iconData); */
NS_IMETHODIMP nsAlertsIconData::ShowAlertWithIconData(nsIAlertNotification *alert, nsIObserver *alertListener, uint32_t iconSize, const uint8_t *iconData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAlertsIconURI */
#define NS_IALERTSICONURI_IID_STR "f3c82915-bf60-41ea-91ce-6c46b22e381a"

#define NS_IALERTSICONURI_IID \
  {0xf3c82915, 0xbf60, 0x41ea, \
    { 0x91, 0xce, 0x6c, 0x46, 0xb2, 0x2e, 0x38, 0x1a }}

class NS_NO_VTABLE nsIAlertsIconURI : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IALERTSICONURI_IID)

  /* void showAlertWithIconURI (in nsIAlertNotification alert, [optional] in nsIObserver alertListener, [optional] in nsIURI iconURI); */
  NS_IMETHOD ShowAlertWithIconURI(nsIAlertNotification *alert, nsIObserver *alertListener, nsIURI *iconURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAlertsIconURI, NS_IALERTSICONURI_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIALERTSICONURI \
  NS_IMETHOD ShowAlertWithIconURI(nsIAlertNotification *alert, nsIObserver *alertListener, nsIURI *iconURI) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIALERTSICONURI \
  NS_METHOD ShowAlertWithIconURI(nsIAlertNotification *alert, nsIObserver *alertListener, nsIURI *iconURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIALERTSICONURI(_to) \
  NS_IMETHOD ShowAlertWithIconURI(nsIAlertNotification *alert, nsIObserver *alertListener, nsIURI *iconURI) override { return _to ShowAlertWithIconURI(alert, alertListener, iconURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIALERTSICONURI(_to) \
  NS_IMETHOD ShowAlertWithIconURI(nsIAlertNotification *alert, nsIObserver *alertListener, nsIURI *iconURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShowAlertWithIconURI(alert, alertListener, iconURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAlertsIconURI : public nsIAlertsIconURI
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIALERTSICONURI

  nsAlertsIconURI();

private:
  ~nsAlertsIconURI();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAlertsIconURI, nsIAlertsIconURI)

nsAlertsIconURI::nsAlertsIconURI()
{
  /* member initializers and constructor code */
}

nsAlertsIconURI::~nsAlertsIconURI()
{
  /* destructor code */
}

/* void showAlertWithIconURI (in nsIAlertNotification alert, [optional] in nsIObserver alertListener, [optional] in nsIURI iconURI); */
NS_IMETHODIMP nsAlertsIconURI::ShowAlertWithIconURI(nsIAlertNotification *alert, nsIObserver *alertListener, nsIURI *iconURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAlertsService_h__ */
