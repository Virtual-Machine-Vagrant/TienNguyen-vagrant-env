/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISystemUpdateProvider.idl
 */

#ifndef __gen_nsISystemUpdateProvider_h__
#define __gen_nsISystemUpdateProvider_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISystemUpdateListener */
#define NS_ISYSTEMUPDATELISTENER_IID_STR "775edbf5-b4a9-400c-b0ad-ea3c3a027097"

#define NS_ISYSTEMUPDATELISTENER_IID \
  {0x775edbf5, 0xb4a9, 0x400c, \
    { 0xb0, 0xad, 0xea, 0x3c, 0x3a, 0x02, 0x70, 0x97 }}

class NS_NO_VTABLE nsISystemUpdateListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISYSTEMUPDATELISTENER_IID)

  /* void onUpdateAvailable (in DOMString type, in DOMString version, in DOMString description, in unsigned long long buildDate, in unsigned long long size); */
  NS_IMETHOD OnUpdateAvailable(const nsAString & type, const nsAString & version, const nsAString & description, uint64_t buildDate, uint64_t size) = 0;

  /* void onProgress (in unsigned long long loaded, in unsigned long long total); */
  NS_IMETHOD OnProgress(uint64_t loaded, uint64_t total) = 0;

  /* void onUpdateReady (); */
  NS_IMETHOD OnUpdateReady(void) = 0;

  /* void onError (in DOMString errMsg); */
  NS_IMETHOD OnError(const nsAString & errMsg) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISystemUpdateListener, NS_ISYSTEMUPDATELISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISYSTEMUPDATELISTENER \
  NS_IMETHOD OnUpdateAvailable(const nsAString & type, const nsAString & version, const nsAString & description, uint64_t buildDate, uint64_t size) override; \
  NS_IMETHOD OnProgress(uint64_t loaded, uint64_t total) override; \
  NS_IMETHOD OnUpdateReady(void) override; \
  NS_IMETHOD OnError(const nsAString & errMsg) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISYSTEMUPDATELISTENER \
  NS_METHOD OnUpdateAvailable(const nsAString & type, const nsAString & version, const nsAString & description, uint64_t buildDate, uint64_t size); \
  NS_METHOD OnProgress(uint64_t loaded, uint64_t total); \
  NS_METHOD OnUpdateReady(void); \
  NS_METHOD OnError(const nsAString & errMsg); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISYSTEMUPDATELISTENER(_to) \
  NS_IMETHOD OnUpdateAvailable(const nsAString & type, const nsAString & version, const nsAString & description, uint64_t buildDate, uint64_t size) override { return _to OnUpdateAvailable(type, version, description, buildDate, size); } \
  NS_IMETHOD OnProgress(uint64_t loaded, uint64_t total) override { return _to OnProgress(loaded, total); } \
  NS_IMETHOD OnUpdateReady(void) override { return _to OnUpdateReady(); } \
  NS_IMETHOD OnError(const nsAString & errMsg) override { return _to OnError(errMsg); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISYSTEMUPDATELISTENER(_to) \
  NS_IMETHOD OnUpdateAvailable(const nsAString & type, const nsAString & version, const nsAString & description, uint64_t buildDate, uint64_t size) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnUpdateAvailable(type, version, description, buildDate, size); } \
  NS_IMETHOD OnProgress(uint64_t loaded, uint64_t total) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnProgress(loaded, total); } \
  NS_IMETHOD OnUpdateReady(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnUpdateReady(); } \
  NS_IMETHOD OnError(const nsAString & errMsg) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnError(errMsg); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSystemUpdateListener : public nsISystemUpdateListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISYSTEMUPDATELISTENER

  nsSystemUpdateListener();

private:
  ~nsSystemUpdateListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSystemUpdateListener, nsISystemUpdateListener)

nsSystemUpdateListener::nsSystemUpdateListener()
{
  /* member initializers and constructor code */
}

nsSystemUpdateListener::~nsSystemUpdateListener()
{
  /* destructor code */
}

/* void onUpdateAvailable (in DOMString type, in DOMString version, in DOMString description, in unsigned long long buildDate, in unsigned long long size); */
NS_IMETHODIMP nsSystemUpdateListener::OnUpdateAvailable(const nsAString & type, const nsAString & version, const nsAString & description, uint64_t buildDate, uint64_t size)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onProgress (in unsigned long long loaded, in unsigned long long total); */
NS_IMETHODIMP nsSystemUpdateListener::OnProgress(uint64_t loaded, uint64_t total)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onUpdateReady (); */
NS_IMETHODIMP nsSystemUpdateListener::OnUpdateReady()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onError (in DOMString errMsg); */
NS_IMETHODIMP nsSystemUpdateListener::OnError(const nsAString & errMsg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISystemUpdateProvider */
#define NS_ISYSTEMUPDATEPROVIDER_IID_STR "c9b7c166-b9cf-4396-a6de-39275e1c0a36"

#define NS_ISYSTEMUPDATEPROVIDER_IID \
  {0xc9b7c166, 0xb9cf, 0x4396, \
    { 0xa6, 0xde, 0x39, 0x27, 0x5e, 0x1c, 0x0a, 0x36 }}

class NS_NO_VTABLE nsISystemUpdateProvider : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISYSTEMUPDATEPROVIDER_IID)

  /* void checkForUpdate (); */
  NS_IMETHOD CheckForUpdate(void) = 0;

  /* void startDownload (); */
  NS_IMETHOD StartDownload(void) = 0;

  /* void stopDownload (); */
  NS_IMETHOD StopDownload(void) = 0;

  /* void applyUpdate (); */
  NS_IMETHOD ApplyUpdate(void) = 0;

  /* bool setParameter (in DOMString name, in DOMString value); */
  NS_IMETHOD SetParameter(const nsAString & name, const nsAString & value, bool *_retval) = 0;

  /* DOMString getParameter (in DOMString name); */
  NS_IMETHOD GetParameter(const nsAString & name, nsAString & _retval) = 0;

  /* void setListener (in nsISystemUpdateListener listener); */
  NS_IMETHOD SetListener(nsISystemUpdateListener *listener) = 0;

  /* void unsetListener (); */
  NS_IMETHOD UnsetListener(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISystemUpdateProvider, NS_ISYSTEMUPDATEPROVIDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISYSTEMUPDATEPROVIDER \
  NS_IMETHOD CheckForUpdate(void) override; \
  NS_IMETHOD StartDownload(void) override; \
  NS_IMETHOD StopDownload(void) override; \
  NS_IMETHOD ApplyUpdate(void) override; \
  NS_IMETHOD SetParameter(const nsAString & name, const nsAString & value, bool *_retval) override; \
  NS_IMETHOD GetParameter(const nsAString & name, nsAString & _retval) override; \
  NS_IMETHOD SetListener(nsISystemUpdateListener *listener) override; \
  NS_IMETHOD UnsetListener(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISYSTEMUPDATEPROVIDER \
  NS_METHOD CheckForUpdate(void); \
  NS_METHOD StartDownload(void); \
  NS_METHOD StopDownload(void); \
  NS_METHOD ApplyUpdate(void); \
  NS_METHOD SetParameter(const nsAString & name, const nsAString & value, bool *_retval); \
  NS_METHOD GetParameter(const nsAString & name, nsAString & _retval); \
  NS_METHOD SetListener(nsISystemUpdateListener *listener); \
  NS_METHOD UnsetListener(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISYSTEMUPDATEPROVIDER(_to) \
  NS_IMETHOD CheckForUpdate(void) override { return _to CheckForUpdate(); } \
  NS_IMETHOD StartDownload(void) override { return _to StartDownload(); } \
  NS_IMETHOD StopDownload(void) override { return _to StopDownload(); } \
  NS_IMETHOD ApplyUpdate(void) override { return _to ApplyUpdate(); } \
  NS_IMETHOD SetParameter(const nsAString & name, const nsAString & value, bool *_retval) override { return _to SetParameter(name, value, _retval); } \
  NS_IMETHOD GetParameter(const nsAString & name, nsAString & _retval) override { return _to GetParameter(name, _retval); } \
  NS_IMETHOD SetListener(nsISystemUpdateListener *listener) override { return _to SetListener(listener); } \
  NS_IMETHOD UnsetListener(void) override { return _to UnsetListener(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISYSTEMUPDATEPROVIDER(_to) \
  NS_IMETHOD CheckForUpdate(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckForUpdate(); } \
  NS_IMETHOD StartDownload(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartDownload(); } \
  NS_IMETHOD StopDownload(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopDownload(); } \
  NS_IMETHOD ApplyUpdate(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ApplyUpdate(); } \
  NS_IMETHOD SetParameter(const nsAString & name, const nsAString & value, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetParameter(name, value, _retval); } \
  NS_IMETHOD GetParameter(const nsAString & name, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParameter(name, _retval); } \
  NS_IMETHOD SetListener(nsISystemUpdateListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetListener(listener); } \
  NS_IMETHOD UnsetListener(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnsetListener(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSystemUpdateProvider : public nsISystemUpdateProvider
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISYSTEMUPDATEPROVIDER

  nsSystemUpdateProvider();

private:
  ~nsSystemUpdateProvider();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSystemUpdateProvider, nsISystemUpdateProvider)

nsSystemUpdateProvider::nsSystemUpdateProvider()
{
  /* member initializers and constructor code */
}

nsSystemUpdateProvider::~nsSystemUpdateProvider()
{
  /* destructor code */
}

/* void checkForUpdate (); */
NS_IMETHODIMP nsSystemUpdateProvider::CheckForUpdate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void startDownload (); */
NS_IMETHODIMP nsSystemUpdateProvider::StartDownload()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopDownload (); */
NS_IMETHODIMP nsSystemUpdateProvider::StopDownload()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void applyUpdate (); */
NS_IMETHODIMP nsSystemUpdateProvider::ApplyUpdate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool setParameter (in DOMString name, in DOMString value); */
NS_IMETHODIMP nsSystemUpdateProvider::SetParameter(const nsAString & name, const nsAString & value, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* DOMString getParameter (in DOMString name); */
NS_IMETHODIMP nsSystemUpdateProvider::GetParameter(const nsAString & name, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setListener (in nsISystemUpdateListener listener); */
NS_IMETHODIMP nsSystemUpdateProvider::SetListener(nsISystemUpdateListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unsetListener (); */
NS_IMETHODIMP nsSystemUpdateProvider::UnsetListener()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISystemUpdateProvider_h__ */
