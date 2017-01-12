/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIBrowserElementAPI.idl
 */

#ifndef __gen_nsIBrowserElementAPI_h__
#define __gen_nsIBrowserElementAPI_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDOMRequest; /* forward declaration */

class nsIFrameLoader; /* forward declaration */


/* starting interface:    nsIBrowserElementNextPaintListener */
#define NS_IBROWSERELEMENTNEXTPAINTLISTENER_IID_STR "00d0e19d-bd67-491f-8e85-b9905224d3bb"

#define NS_IBROWSERELEMENTNEXTPAINTLISTENER_IID \
  {0x00d0e19d, 0xbd67, 0x491f, \
    { 0x8e, 0x85, 0xb9, 0x90, 0x52, 0x24, 0xd3, 0xbb }}

class NS_NO_VTABLE nsIBrowserElementNextPaintListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBROWSERELEMENTNEXTPAINTLISTENER_IID)

  /* void recvNextPaint (); */
  NS_IMETHOD RecvNextPaint(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBrowserElementNextPaintListener, NS_IBROWSERELEMENTNEXTPAINTLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBROWSERELEMENTNEXTPAINTLISTENER \
  NS_IMETHOD RecvNextPaint(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIBROWSERELEMENTNEXTPAINTLISTENER \
  NS_METHOD RecvNextPaint(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBROWSERELEMENTNEXTPAINTLISTENER(_to) \
  NS_IMETHOD RecvNextPaint(void) override { return _to RecvNextPaint(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBROWSERELEMENTNEXTPAINTLISTENER(_to) \
  NS_IMETHOD RecvNextPaint(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RecvNextPaint(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBrowserElementNextPaintListener : public nsIBrowserElementNextPaintListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBROWSERELEMENTNEXTPAINTLISTENER

  nsBrowserElementNextPaintListener();

private:
  ~nsBrowserElementNextPaintListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsBrowserElementNextPaintListener, nsIBrowserElementNextPaintListener)

nsBrowserElementNextPaintListener::nsBrowserElementNextPaintListener()
{
  /* member initializers and constructor code */
}

nsBrowserElementNextPaintListener::~nsBrowserElementNextPaintListener()
{
  /* destructor code */
}

/* void recvNextPaint (); */
NS_IMETHODIMP nsBrowserElementNextPaintListener::RecvNextPaint()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define BROWSER_ELEMENT_API_CONTRACTID "@mozilla.org/dom/browser-element-api;1"
#define BROWSER_ELEMENT_API_CID                                 \
    { 0x651db7e3, 0x1734, 0x4536,                               \
      { 0xb1, 0x5a, 0x5b, 0x3a, 0xe6, 0x44, 0x13, 0x4c } }

/* starting interface:    nsIBrowserElementAPI */
#define NS_IBROWSERELEMENTAPI_IID_STR "57758c10-6036-11e5-a837-0800200c9a66"

#define NS_IBROWSERELEMENTAPI_IID \
  {0x57758c10, 0x6036, 0x11e5, \
    { 0xa8, 0x37, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE nsIBrowserElementAPI : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBROWSERELEMENTAPI_IID)

  enum {
    FIND_CASE_SENSITIVE = 0,
    FIND_CASE_INSENSITIVE = 1,
    FIND_FORWARD = 0,
    FIND_BACKWARD = 1
  };

  /* void setFrameLoader (in nsIFrameLoader frameLoader); */
  NS_IMETHOD SetFrameLoader(nsIFrameLoader *frameLoader) = 0;

  /* void setVisible (in boolean visible); */
  NS_IMETHOD SetVisible(bool visible) = 0;

  /* nsIDOMDOMRequest getVisible (); */
  NS_IMETHOD GetVisible(nsIDOMDOMRequest * *_retval) = 0;

  /* void setActive (in boolean active); */
  NS_IMETHOD SetActive(bool active) = 0;

  /* boolean getActive (); */
  NS_IMETHOD GetActive(bool *_retval) = 0;

  /* void sendMouseEvent (in DOMString type, in uint32_t x, in uint32_t y, in uint32_t button, in uint32_t clickCount, in uint32_t mifiers); */
  NS_IMETHOD SendMouseEvent(const nsAString & type, uint32_t x, uint32_t y, uint32_t button, uint32_t clickCount, uint32_t mifiers) = 0;

  /* void sendTouchEvent (in DOMString aType, [array, size_is (count), const] in uint32_t aIdentifiers, [array, size_is (count), const] in int32_t aXs, [array, size_is (count), const] in int32_t aYs, [array, size_is (count), const] in uint32_t aRxs, [array, size_is (count), const] in uint32_t aRys, [array, size_is (count), const] in float aRotationAngles, [array, size_is (count), const] in float aForces, in uint32_t count, in long aModifiers); */
  NS_IMETHOD SendTouchEvent(const nsAString & aType, const uint32_t *aIdentifiers, const int32_t *aXs, const int32_t *aYs, const uint32_t *aRxs, const uint32_t *aRys, const float *aRotationAngles, const float *aForces, uint32_t count, int32_t aModifiers) = 0;

  /* void goBack (); */
  NS_IMETHOD GoBack(void) = 0;

  /* void goForward (); */
  NS_IMETHOD GoForward(void) = 0;

  /* void reload (in boolean hardReload); */
  NS_IMETHOD Reload(bool hardReload) = 0;

  /* void stop (); */
  NS_IMETHOD Stop(void) = 0;

  /* nsIDOMDOMRequest download (in DOMString url, [optional] in jsval options); */
  NS_IMETHOD Download(const nsAString & url, JS::HandleValue options, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest purgeHistory (); */
  NS_IMETHOD PurgeHistory(nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest getScreenshot (in uint32_t width, in uint32_t height, [optional] in DOMString mimeType); */
  NS_IMETHOD GetScreenshot(uint32_t width, uint32_t height, const nsAString & mimeType, nsIDOMDOMRequest * *_retval) = 0;

  /* void zoom (in float zoom); */
  NS_IMETHOD Zoom(float zoom) = 0;

  /* nsIDOMDOMRequest getCanGoBack (); */
  NS_IMETHOD GetCanGoBack(nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest getCanGoForward (); */
  NS_IMETHOD GetCanGoForward(nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest getContentDimensions (); */
  NS_IMETHOD GetContentDimensions(nsIDOMDOMRequest * *_retval) = 0;

  /* void findAll (in DOMString searchString, in long caseSensitivity); */
  NS_IMETHOD FindAll(const nsAString & searchString, int32_t caseSensitivity) = 0;

  /* void findNext (in long direction); */
  NS_IMETHOD FindNext(int32_t direction) = 0;

  /* void clearMatch (); */
  NS_IMETHOD ClearMatch(void) = 0;

  /* void mute (); */
  NS_IMETHOD Mute(void) = 0;

  /* void unmute (); */
  NS_IMETHOD Unmute(void) = 0;

  /* nsIDOMDOMRequest getMuted (); */
  NS_IMETHOD GetMuted(nsIDOMDOMRequest * *_retval) = 0;

  /* void setVolume (in float volume); */
  NS_IMETHOD SetVolume(float volume) = 0;

  /* nsIDOMDOMRequest getVolume (); */
  NS_IMETHOD GetVolume(nsIDOMDOMRequest * *_retval) = 0;

  /* void addNextPaintListener (in nsIBrowserElementNextPaintListener listener); */
  NS_IMETHOD AddNextPaintListener(nsIBrowserElementNextPaintListener *listener) = 0;

  /* void removeNextPaintListener (in nsIBrowserElementNextPaintListener listener); */
  NS_IMETHOD RemoveNextPaintListener(nsIBrowserElementNextPaintListener *listener) = 0;

  /* nsIDOMDOMRequest setInputMethodActive (in boolean isActive); */
  NS_IMETHOD SetInputMethodActive(bool isActive, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest getAudioChannelVolume (in uint32_t audioChannel); */
  NS_IMETHOD GetAudioChannelVolume(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest setAudioChannelVolume (in uint32_t audioChannel, in float volume); */
  NS_IMETHOD SetAudioChannelVolume(uint32_t audioChannel, float volume, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest getAudioChannelMuted (in uint32_t audioChannel); */
  NS_IMETHOD GetAudioChannelMuted(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest setAudioChannelMuted (in uint32_t audioChannel, in bool muted); */
  NS_IMETHOD SetAudioChannelMuted(uint32_t audioChannel, bool muted, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest isAudioChannelActive (in uint32_t audioChannel); */
  NS_IMETHOD IsAudioChannelActive(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest notifyChannel (in DOMString event, in DOMString manifest, in uint32_t audioChannel); */
  NS_IMETHOD NotifyChannel(const nsAString & event, const nsAString & manifest, uint32_t audioChannel, nsIDOMDOMRequest * *_retval) = 0;

  /* void setNFCFocus (in boolean isFocus); */
  NS_IMETHOD SetNFCFocus(bool isFocus) = 0;

  /* nsIDOMDOMRequest executeScript (in DOMString script, in jsval options); */
  NS_IMETHOD ExecuteScript(const nsAString & script, JS::HandleValue options, nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest getWebManifest (); */
  NS_IMETHOD GetWebManifest(nsIDOMDOMRequest * *_retval) = 0;

  /* nsIDOMDOMRequest getStructuredData (); */
  NS_IMETHOD GetStructuredData(nsIDOMDOMRequest * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBrowserElementAPI, NS_IBROWSERELEMENTAPI_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBROWSERELEMENTAPI \
  NS_IMETHOD SetFrameLoader(nsIFrameLoader *frameLoader) override; \
  NS_IMETHOD SetVisible(bool visible) override; \
  NS_IMETHOD GetVisible(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD SetActive(bool active) override; \
  NS_IMETHOD GetActive(bool *_retval) override; \
  NS_IMETHOD SendMouseEvent(const nsAString & type, uint32_t x, uint32_t y, uint32_t button, uint32_t clickCount, uint32_t mifiers) override; \
  NS_IMETHOD SendTouchEvent(const nsAString & aType, const uint32_t *aIdentifiers, const int32_t *aXs, const int32_t *aYs, const uint32_t *aRxs, const uint32_t *aRys, const float *aRotationAngles, const float *aForces, uint32_t count, int32_t aModifiers) override; \
  NS_IMETHOD GoBack(void) override; \
  NS_IMETHOD GoForward(void) override; \
  NS_IMETHOD Reload(bool hardReload) override; \
  NS_IMETHOD Stop(void) override; \
  NS_IMETHOD Download(const nsAString & url, JS::HandleValue options, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD PurgeHistory(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD GetScreenshot(uint32_t width, uint32_t height, const nsAString & mimeType, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD Zoom(float zoom) override; \
  NS_IMETHOD GetCanGoBack(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD GetCanGoForward(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD GetContentDimensions(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD FindAll(const nsAString & searchString, int32_t caseSensitivity) override; \
  NS_IMETHOD FindNext(int32_t direction) override; \
  NS_IMETHOD ClearMatch(void) override; \
  NS_IMETHOD Mute(void) override; \
  NS_IMETHOD Unmute(void) override; \
  NS_IMETHOD GetMuted(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD SetVolume(float volume) override; \
  NS_IMETHOD GetVolume(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD AddNextPaintListener(nsIBrowserElementNextPaintListener *listener) override; \
  NS_IMETHOD RemoveNextPaintListener(nsIBrowserElementNextPaintListener *listener) override; \
  NS_IMETHOD SetInputMethodActive(bool isActive, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD GetAudioChannelVolume(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD SetAudioChannelVolume(uint32_t audioChannel, float volume, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD GetAudioChannelMuted(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD SetAudioChannelMuted(uint32_t audioChannel, bool muted, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD IsAudioChannelActive(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD NotifyChannel(const nsAString & event, const nsAString & manifest, uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD SetNFCFocus(bool isFocus) override; \
  NS_IMETHOD ExecuteScript(const nsAString & script, JS::HandleValue options, nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD GetWebManifest(nsIDOMDOMRequest * *_retval) override; \
  NS_IMETHOD GetStructuredData(nsIDOMDOMRequest * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIBROWSERELEMENTAPI \
  NS_METHOD SetFrameLoader(nsIFrameLoader *frameLoader); \
  NS_METHOD SetVisible(bool visible); \
  NS_METHOD GetVisible(nsIDOMDOMRequest * *_retval); \
  NS_METHOD SetActive(bool active); \
  NS_METHOD GetActive(bool *_retval); \
  NS_METHOD SendMouseEvent(const nsAString & type, uint32_t x, uint32_t y, uint32_t button, uint32_t clickCount, uint32_t mifiers); \
  NS_METHOD SendTouchEvent(const nsAString & aType, const uint32_t *aIdentifiers, const int32_t *aXs, const int32_t *aYs, const uint32_t *aRxs, const uint32_t *aRys, const float *aRotationAngles, const float *aForces, uint32_t count, int32_t aModifiers); \
  NS_METHOD GoBack(void); \
  NS_METHOD GoForward(void); \
  NS_METHOD Reload(bool hardReload); \
  NS_METHOD Stop(void); \
  NS_METHOD Download(const nsAString & url, JS::HandleValue options, nsIDOMDOMRequest * *_retval); \
  NS_METHOD PurgeHistory(nsIDOMDOMRequest * *_retval); \
  NS_METHOD GetScreenshot(uint32_t width, uint32_t height, const nsAString & mimeType, nsIDOMDOMRequest * *_retval); \
  NS_METHOD Zoom(float zoom); \
  NS_METHOD GetCanGoBack(nsIDOMDOMRequest * *_retval); \
  NS_METHOD GetCanGoForward(nsIDOMDOMRequest * *_retval); \
  NS_METHOD GetContentDimensions(nsIDOMDOMRequest * *_retval); \
  NS_METHOD FindAll(const nsAString & searchString, int32_t caseSensitivity); \
  NS_METHOD FindNext(int32_t direction); \
  NS_METHOD ClearMatch(void); \
  NS_METHOD Mute(void); \
  NS_METHOD Unmute(void); \
  NS_METHOD GetMuted(nsIDOMDOMRequest * *_retval); \
  NS_METHOD SetVolume(float volume); \
  NS_METHOD GetVolume(nsIDOMDOMRequest * *_retval); \
  NS_METHOD AddNextPaintListener(nsIBrowserElementNextPaintListener *listener); \
  NS_METHOD RemoveNextPaintListener(nsIBrowserElementNextPaintListener *listener); \
  NS_METHOD SetInputMethodActive(bool isActive, nsIDOMDOMRequest * *_retval); \
  NS_METHOD GetAudioChannelVolume(uint32_t audioChannel, nsIDOMDOMRequest * *_retval); \
  NS_METHOD SetAudioChannelVolume(uint32_t audioChannel, float volume, nsIDOMDOMRequest * *_retval); \
  NS_METHOD GetAudioChannelMuted(uint32_t audioChannel, nsIDOMDOMRequest * *_retval); \
  NS_METHOD SetAudioChannelMuted(uint32_t audioChannel, bool muted, nsIDOMDOMRequest * *_retval); \
  NS_METHOD IsAudioChannelActive(uint32_t audioChannel, nsIDOMDOMRequest * *_retval); \
  NS_METHOD NotifyChannel(const nsAString & event, const nsAString & manifest, uint32_t audioChannel, nsIDOMDOMRequest * *_retval); \
  NS_METHOD SetNFCFocus(bool isFocus); \
  NS_METHOD ExecuteScript(const nsAString & script, JS::HandleValue options, nsIDOMDOMRequest * *_retval); \
  NS_METHOD GetWebManifest(nsIDOMDOMRequest * *_retval); \
  NS_METHOD GetStructuredData(nsIDOMDOMRequest * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBROWSERELEMENTAPI(_to) \
  NS_IMETHOD SetFrameLoader(nsIFrameLoader *frameLoader) override { return _to SetFrameLoader(frameLoader); } \
  NS_IMETHOD SetVisible(bool visible) override { return _to SetVisible(visible); } \
  NS_IMETHOD GetVisible(nsIDOMDOMRequest * *_retval) override { return _to GetVisible(_retval); } \
  NS_IMETHOD SetActive(bool active) override { return _to SetActive(active); } \
  NS_IMETHOD GetActive(bool *_retval) override { return _to GetActive(_retval); } \
  NS_IMETHOD SendMouseEvent(const nsAString & type, uint32_t x, uint32_t y, uint32_t button, uint32_t clickCount, uint32_t mifiers) override { return _to SendMouseEvent(type, x, y, button, clickCount, mifiers); } \
  NS_IMETHOD SendTouchEvent(const nsAString & aType, const uint32_t *aIdentifiers, const int32_t *aXs, const int32_t *aYs, const uint32_t *aRxs, const uint32_t *aRys, const float *aRotationAngles, const float *aForces, uint32_t count, int32_t aModifiers) override { return _to SendTouchEvent(aType, aIdentifiers, aXs, aYs, aRxs, aRys, aRotationAngles, aForces, count, aModifiers); } \
  NS_IMETHOD GoBack(void) override { return _to GoBack(); } \
  NS_IMETHOD GoForward(void) override { return _to GoForward(); } \
  NS_IMETHOD Reload(bool hardReload) override { return _to Reload(hardReload); } \
  NS_IMETHOD Stop(void) override { return _to Stop(); } \
  NS_IMETHOD Download(const nsAString & url, JS::HandleValue options, nsIDOMDOMRequest * *_retval) override { return _to Download(url, options, _retval); } \
  NS_IMETHOD PurgeHistory(nsIDOMDOMRequest * *_retval) override { return _to PurgeHistory(_retval); } \
  NS_IMETHOD GetScreenshot(uint32_t width, uint32_t height, const nsAString & mimeType, nsIDOMDOMRequest * *_retval) override { return _to GetScreenshot(width, height, mimeType, _retval); } \
  NS_IMETHOD Zoom(float zoom) override { return _to Zoom(zoom); } \
  NS_IMETHOD GetCanGoBack(nsIDOMDOMRequest * *_retval) override { return _to GetCanGoBack(_retval); } \
  NS_IMETHOD GetCanGoForward(nsIDOMDOMRequest * *_retval) override { return _to GetCanGoForward(_retval); } \
  NS_IMETHOD GetContentDimensions(nsIDOMDOMRequest * *_retval) override { return _to GetContentDimensions(_retval); } \
  NS_IMETHOD FindAll(const nsAString & searchString, int32_t caseSensitivity) override { return _to FindAll(searchString, caseSensitivity); } \
  NS_IMETHOD FindNext(int32_t direction) override { return _to FindNext(direction); } \
  NS_IMETHOD ClearMatch(void) override { return _to ClearMatch(); } \
  NS_IMETHOD Mute(void) override { return _to Mute(); } \
  NS_IMETHOD Unmute(void) override { return _to Unmute(); } \
  NS_IMETHOD GetMuted(nsIDOMDOMRequest * *_retval) override { return _to GetMuted(_retval); } \
  NS_IMETHOD SetVolume(float volume) override { return _to SetVolume(volume); } \
  NS_IMETHOD GetVolume(nsIDOMDOMRequest * *_retval) override { return _to GetVolume(_retval); } \
  NS_IMETHOD AddNextPaintListener(nsIBrowserElementNextPaintListener *listener) override { return _to AddNextPaintListener(listener); } \
  NS_IMETHOD RemoveNextPaintListener(nsIBrowserElementNextPaintListener *listener) override { return _to RemoveNextPaintListener(listener); } \
  NS_IMETHOD SetInputMethodActive(bool isActive, nsIDOMDOMRequest * *_retval) override { return _to SetInputMethodActive(isActive, _retval); } \
  NS_IMETHOD GetAudioChannelVolume(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return _to GetAudioChannelVolume(audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelVolume(uint32_t audioChannel, float volume, nsIDOMDOMRequest * *_retval) override { return _to SetAudioChannelVolume(audioChannel, volume, _retval); } \
  NS_IMETHOD GetAudioChannelMuted(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return _to GetAudioChannelMuted(audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelMuted(uint32_t audioChannel, bool muted, nsIDOMDOMRequest * *_retval) override { return _to SetAudioChannelMuted(audioChannel, muted, _retval); } \
  NS_IMETHOD IsAudioChannelActive(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return _to IsAudioChannelActive(audioChannel, _retval); } \
  NS_IMETHOD NotifyChannel(const nsAString & event, const nsAString & manifest, uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return _to NotifyChannel(event, manifest, audioChannel, _retval); } \
  NS_IMETHOD SetNFCFocus(bool isFocus) override { return _to SetNFCFocus(isFocus); } \
  NS_IMETHOD ExecuteScript(const nsAString & script, JS::HandleValue options, nsIDOMDOMRequest * *_retval) override { return _to ExecuteScript(script, options, _retval); } \
  NS_IMETHOD GetWebManifest(nsIDOMDOMRequest * *_retval) override { return _to GetWebManifest(_retval); } \
  NS_IMETHOD GetStructuredData(nsIDOMDOMRequest * *_retval) override { return _to GetStructuredData(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBROWSERELEMENTAPI(_to) \
  NS_IMETHOD SetFrameLoader(nsIFrameLoader *frameLoader) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFrameLoader(frameLoader); } \
  NS_IMETHOD SetVisible(bool visible) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVisible(visible); } \
  NS_IMETHOD GetVisible(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVisible(_retval); } \
  NS_IMETHOD SetActive(bool active) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetActive(active); } \
  NS_IMETHOD GetActive(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActive(_retval); } \
  NS_IMETHOD SendMouseEvent(const nsAString & type, uint32_t x, uint32_t y, uint32_t button, uint32_t clickCount, uint32_t mifiers) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendMouseEvent(type, x, y, button, clickCount, mifiers); } \
  NS_IMETHOD SendTouchEvent(const nsAString & aType, const uint32_t *aIdentifiers, const int32_t *aXs, const int32_t *aYs, const uint32_t *aRxs, const uint32_t *aRys, const float *aRotationAngles, const float *aForces, uint32_t count, int32_t aModifiers) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendTouchEvent(aType, aIdentifiers, aXs, aYs, aRxs, aRys, aRotationAngles, aForces, count, aModifiers); } \
  NS_IMETHOD GoBack(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GoBack(); } \
  NS_IMETHOD GoForward(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GoForward(); } \
  NS_IMETHOD Reload(bool hardReload) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Reload(hardReload); } \
  NS_IMETHOD Stop(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Stop(); } \
  NS_IMETHOD Download(const nsAString & url, JS::HandleValue options, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Download(url, options, _retval); } \
  NS_IMETHOD PurgeHistory(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PurgeHistory(_retval); } \
  NS_IMETHOD GetScreenshot(uint32_t width, uint32_t height, const nsAString & mimeType, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScreenshot(width, height, mimeType, _retval); } \
  NS_IMETHOD Zoom(float zoom) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Zoom(zoom); } \
  NS_IMETHOD GetCanGoBack(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanGoBack(_retval); } \
  NS_IMETHOD GetCanGoForward(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanGoForward(_retval); } \
  NS_IMETHOD GetContentDimensions(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDimensions(_retval); } \
  NS_IMETHOD FindAll(const nsAString & searchString, int32_t caseSensitivity) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FindAll(searchString, caseSensitivity); } \
  NS_IMETHOD FindNext(int32_t direction) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FindNext(direction); } \
  NS_IMETHOD ClearMatch(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearMatch(); } \
  NS_IMETHOD Mute(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Mute(); } \
  NS_IMETHOD Unmute(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Unmute(); } \
  NS_IMETHOD GetMuted(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMuted(_retval); } \
  NS_IMETHOD SetVolume(float volume) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVolume(volume); } \
  NS_IMETHOD GetVolume(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVolume(_retval); } \
  NS_IMETHOD AddNextPaintListener(nsIBrowserElementNextPaintListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddNextPaintListener(listener); } \
  NS_IMETHOD RemoveNextPaintListener(nsIBrowserElementNextPaintListener *listener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveNextPaintListener(listener); } \
  NS_IMETHOD SetInputMethodActive(bool isActive, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInputMethodActive(isActive, _retval); } \
  NS_IMETHOD GetAudioChannelVolume(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAudioChannelVolume(audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelVolume(uint32_t audioChannel, float volume, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAudioChannelVolume(audioChannel, volume, _retval); } \
  NS_IMETHOD GetAudioChannelMuted(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAudioChannelMuted(audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelMuted(uint32_t audioChannel, bool muted, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAudioChannelMuted(audioChannel, muted, _retval); } \
  NS_IMETHOD IsAudioChannelActive(uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAudioChannelActive(audioChannel, _retval); } \
  NS_IMETHOD NotifyChannel(const nsAString & event, const nsAString & manifest, uint32_t audioChannel, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyChannel(event, manifest, audioChannel, _retval); } \
  NS_IMETHOD SetNFCFocus(bool isFocus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNFCFocus(isFocus); } \
  NS_IMETHOD ExecuteScript(const nsAString & script, JS::HandleValue options, nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ExecuteScript(script, options, _retval); } \
  NS_IMETHOD GetWebManifest(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWebManifest(_retval); } \
  NS_IMETHOD GetStructuredData(nsIDOMDOMRequest * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStructuredData(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBrowserElementAPI : public nsIBrowserElementAPI
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBROWSERELEMENTAPI

  nsBrowserElementAPI();

private:
  ~nsBrowserElementAPI();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsBrowserElementAPI, nsIBrowserElementAPI)

nsBrowserElementAPI::nsBrowserElementAPI()
{
  /* member initializers and constructor code */
}

nsBrowserElementAPI::~nsBrowserElementAPI()
{
  /* destructor code */
}

/* void setFrameLoader (in nsIFrameLoader frameLoader); */
NS_IMETHODIMP nsBrowserElementAPI::SetFrameLoader(nsIFrameLoader *frameLoader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setVisible (in boolean visible); */
NS_IMETHODIMP nsBrowserElementAPI::SetVisible(bool visible)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getVisible (); */
NS_IMETHODIMP nsBrowserElementAPI::GetVisible(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setActive (in boolean active); */
NS_IMETHODIMP nsBrowserElementAPI::SetActive(bool active)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getActive (); */
NS_IMETHODIMP nsBrowserElementAPI::GetActive(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendMouseEvent (in DOMString type, in uint32_t x, in uint32_t y, in uint32_t button, in uint32_t clickCount, in uint32_t mifiers); */
NS_IMETHODIMP nsBrowserElementAPI::SendMouseEvent(const nsAString & type, uint32_t x, uint32_t y, uint32_t button, uint32_t clickCount, uint32_t mifiers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendTouchEvent (in DOMString aType, [array, size_is (count), const] in uint32_t aIdentifiers, [array, size_is (count), const] in int32_t aXs, [array, size_is (count), const] in int32_t aYs, [array, size_is (count), const] in uint32_t aRxs, [array, size_is (count), const] in uint32_t aRys, [array, size_is (count), const] in float aRotationAngles, [array, size_is (count), const] in float aForces, in uint32_t count, in long aModifiers); */
NS_IMETHODIMP nsBrowserElementAPI::SendTouchEvent(const nsAString & aType, const uint32_t *aIdentifiers, const int32_t *aXs, const int32_t *aYs, const uint32_t *aRxs, const uint32_t *aRys, const float *aRotationAngles, const float *aForces, uint32_t count, int32_t aModifiers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void goBack (); */
NS_IMETHODIMP nsBrowserElementAPI::GoBack()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void goForward (); */
NS_IMETHODIMP nsBrowserElementAPI::GoForward()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void reload (in boolean hardReload); */
NS_IMETHODIMP nsBrowserElementAPI::Reload(bool hardReload)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stop (); */
NS_IMETHODIMP nsBrowserElementAPI::Stop()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest download (in DOMString url, [optional] in jsval options); */
NS_IMETHODIMP nsBrowserElementAPI::Download(const nsAString & url, JS::HandleValue options, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest purgeHistory (); */
NS_IMETHODIMP nsBrowserElementAPI::PurgeHistory(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getScreenshot (in uint32_t width, in uint32_t height, [optional] in DOMString mimeType); */
NS_IMETHODIMP nsBrowserElementAPI::GetScreenshot(uint32_t width, uint32_t height, const nsAString & mimeType, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void zoom (in float zoom); */
NS_IMETHODIMP nsBrowserElementAPI::Zoom(float zoom)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getCanGoBack (); */
NS_IMETHODIMP nsBrowserElementAPI::GetCanGoBack(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getCanGoForward (); */
NS_IMETHODIMP nsBrowserElementAPI::GetCanGoForward(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getContentDimensions (); */
NS_IMETHODIMP nsBrowserElementAPI::GetContentDimensions(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void findAll (in DOMString searchString, in long caseSensitivity); */
NS_IMETHODIMP nsBrowserElementAPI::FindAll(const nsAString & searchString, int32_t caseSensitivity)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void findNext (in long direction); */
NS_IMETHODIMP nsBrowserElementAPI::FindNext(int32_t direction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearMatch (); */
NS_IMETHODIMP nsBrowserElementAPI::ClearMatch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void mute (); */
NS_IMETHODIMP nsBrowserElementAPI::Mute()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unmute (); */
NS_IMETHODIMP nsBrowserElementAPI::Unmute()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getMuted (); */
NS_IMETHODIMP nsBrowserElementAPI::GetMuted(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setVolume (in float volume); */
NS_IMETHODIMP nsBrowserElementAPI::SetVolume(float volume)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getVolume (); */
NS_IMETHODIMP nsBrowserElementAPI::GetVolume(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addNextPaintListener (in nsIBrowserElementNextPaintListener listener); */
NS_IMETHODIMP nsBrowserElementAPI::AddNextPaintListener(nsIBrowserElementNextPaintListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeNextPaintListener (in nsIBrowserElementNextPaintListener listener); */
NS_IMETHODIMP nsBrowserElementAPI::RemoveNextPaintListener(nsIBrowserElementNextPaintListener *listener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest setInputMethodActive (in boolean isActive); */
NS_IMETHODIMP nsBrowserElementAPI::SetInputMethodActive(bool isActive, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getAudioChannelVolume (in uint32_t audioChannel); */
NS_IMETHODIMP nsBrowserElementAPI::GetAudioChannelVolume(uint32_t audioChannel, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest setAudioChannelVolume (in uint32_t audioChannel, in float volume); */
NS_IMETHODIMP nsBrowserElementAPI::SetAudioChannelVolume(uint32_t audioChannel, float volume, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getAudioChannelMuted (in uint32_t audioChannel); */
NS_IMETHODIMP nsBrowserElementAPI::GetAudioChannelMuted(uint32_t audioChannel, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest setAudioChannelMuted (in uint32_t audioChannel, in bool muted); */
NS_IMETHODIMP nsBrowserElementAPI::SetAudioChannelMuted(uint32_t audioChannel, bool muted, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest isAudioChannelActive (in uint32_t audioChannel); */
NS_IMETHODIMP nsBrowserElementAPI::IsAudioChannelActive(uint32_t audioChannel, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest notifyChannel (in DOMString event, in DOMString manifest, in uint32_t audioChannel); */
NS_IMETHODIMP nsBrowserElementAPI::NotifyChannel(const nsAString & event, const nsAString & manifest, uint32_t audioChannel, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setNFCFocus (in boolean isFocus); */
NS_IMETHODIMP nsBrowserElementAPI::SetNFCFocus(bool isFocus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest executeScript (in DOMString script, in jsval options); */
NS_IMETHODIMP nsBrowserElementAPI::ExecuteScript(const nsAString & script, JS::HandleValue options, nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getWebManifest (); */
NS_IMETHODIMP nsBrowserElementAPI::GetWebManifest(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMDOMRequest getStructuredData (); */
NS_IMETHODIMP nsBrowserElementAPI::GetStructuredData(nsIDOMDOMRequest * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIBrowserElementAPI_h__ */
