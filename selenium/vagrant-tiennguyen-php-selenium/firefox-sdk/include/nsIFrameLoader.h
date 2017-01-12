/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIFrameLoader.idl
 */

#ifndef __gen_nsIFrameLoader_h__
#define __gen_nsIFrameLoader_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "mozilla/Assertions.h"
#include "mozilla/DebugOnly.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIApplication; /* forward declaration */

class nsFrameLoader; /* forward declaration */

class nsIDocShell; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIFrame; /* forward declaration */

class nsSubDocumentFrame; /* forward declaration */

class nsIMessageSender; /* forward declaration */

class nsIVariant; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsITabParent; /* forward declaration */

class nsILoadContext; /* forward declaration */


/* starting interface:    nsIFrameLoader */
#define NS_IFRAMELOADER_IID_STR "1645af04-1bc7-4363-8f2c-eb9679220ab1"

#define NS_IFRAMELOADER_IID \
  {0x1645af04, 0x1bc7, 0x4363, \
    { 0x8f, 0x2c, 0xeb, 0x96, 0x79, 0x22, 0x0a, 0xb1 }}

class NS_NO_VTABLE nsIFrameLoader : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMELOADER_IID)

  /* readonly attribute nsIDocShell docShell; */
  NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) = 0;

  /* readonly attribute nsITabParent tabParent; */
  NS_IMETHOD GetTabParent(nsITabParent * *aTabParent) = 0;

  /* readonly attribute nsILoadContext loadContext; */
  NS_IMETHOD GetLoadContext(nsILoadContext * *aLoadContext) = 0;

  /* void loadFrame (); */
  NS_IMETHOD LoadFrame(void) = 0;

  /* void loadURI (in nsIURI aURI); */
  NS_IMETHOD LoadURI(nsIURI *aURI) = 0;

  /* void switchProcessAndLoadURI (in nsIURI aURI, in ACString aPackageId); */
  NS_IMETHOD SwitchProcessAndLoadURI(nsIURI *aURI, const nsACString & aPackageId) = 0;

  /* void setIsPrerendered (); */
  NS_IMETHOD SetIsPrerendered(void) = 0;

  /* void destroy (); */
  NS_IMETHOD Destroy(void) = 0;

  /* readonly attribute boolean depthTooGreat; */
  NS_IMETHOD GetDepthTooGreat(bool *aDepthTooGreat) = 0;

  /* [noscript] void updatePositionAndSize (in nsSubDocumentFrame aIFrame); */
  NS_IMETHOD UpdatePositionAndSize(nsSubDocumentFrame *aIFrame) = 0;

  /* void activateRemoteFrame (); */
  NS_IMETHOD ActivateRemoteFrame(void) = 0;

  /* void deactivateRemoteFrame (); */
  NS_IMETHOD DeactivateRemoteFrame(void) = 0;

  /* void sendCrossProcessMouseEvent (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
  NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, int32_t aButton, int32_t aClickCount, int32_t aModifiers, bool aIgnoreRootScrollFrame) = 0;

  /* void activateFrameEvent (in AString aType, in boolean capture); */
  NS_IMETHOD ActivateFrameEvent(const nsAString & aType, bool capture) = 0;

  /* readonly attribute nsIMessageSender messageManager; */
  NS_IMETHOD GetMessageManager(nsIMessageSender * *aMessageManager) = 0;

  /* void sendCrossProcessKeyEvent (in AString aType, in long aKeyCode, in long aCharCode, in long aModifiers, [optional] in boolean aPreventDefault); */
  NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, int32_t aKeyCode, int32_t aCharCode, int32_t aModifiers, bool aPreventDefault) = 0;

  /* void requestNotifyAfterRemotePaint (); */
  NS_IMETHOD RequestNotifyAfterRemotePaint(void) = 0;

  /* void requestNotifyLayerTreeReady (); */
  NS_IMETHOD RequestNotifyLayerTreeReady(void) = 0;

  /* void requestNotifyLayerTreeCleared (); */
  NS_IMETHOD RequestNotifyLayerTreeCleared(void) = 0;

  enum {
    EVENT_MODE_NORMAL_DISPATCH = 0U,
    EVENT_MODE_DONT_FORWARD_TO_CHILD = 1U
  };

  /* attribute unsigned long eventMode; */
  NS_IMETHOD GetEventMode(uint32_t *aEventMode) = 0;
  NS_IMETHOD SetEventMode(uint32_t aEventMode) = 0;

  /* attribute boolean clipSubdocument; */
  NS_IMETHOD GetClipSubdocument(bool *aClipSubdocument) = 0;
  NS_IMETHOD SetClipSubdocument(bool aClipSubdocument) = 0;

  /* attribute boolean clampScrollPosition; */
  NS_IMETHOD GetClampScrollPosition(bool *aClampScrollPosition) = 0;
  NS_IMETHOD SetClampScrollPosition(bool aClampScrollPosition) = 0;

  /* readonly attribute nsIDOMElement ownerElement; */
  NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement) = 0;

  /* readonly attribute unsigned long long childID; */
  NS_IMETHOD GetChildID(uint64_t *aChildID) = 0;

  /* [infallible] attribute boolean visible; */
  NS_IMETHOD GetVisible(bool *aVisible) = 0;
  inline bool GetVisible()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetVisible(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }
  NS_IMETHOD SetVisible(bool aVisible) = 0;

  /* readonly attribute boolean ownerIsMozBrowserOrAppFrame; */
  NS_IMETHOD GetOwnerIsMozBrowserOrAppFrame(bool *aOwnerIsMozBrowserOrAppFrame) = 0;

  /* readonly attribute boolean ownerIsWidget; */
  NS_IMETHOD GetOwnerIsWidget(bool *aOwnerIsWidget) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameLoader, NS_IFRAMELOADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMELOADER \
  NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) override; \
  NS_IMETHOD GetTabParent(nsITabParent * *aTabParent) override; \
  NS_IMETHOD GetLoadContext(nsILoadContext * *aLoadContext) override; \
  NS_IMETHOD LoadFrame(void) override; \
  NS_IMETHOD LoadURI(nsIURI *aURI) override; \
  NS_IMETHOD SwitchProcessAndLoadURI(nsIURI *aURI, const nsACString & aPackageId) override; \
  NS_IMETHOD SetIsPrerendered(void) override; \
  NS_IMETHOD Destroy(void) override; \
  NS_IMETHOD GetDepthTooGreat(bool *aDepthTooGreat) override; \
  NS_IMETHOD UpdatePositionAndSize(nsSubDocumentFrame *aIFrame) override; \
  NS_IMETHOD ActivateRemoteFrame(void) override; \
  NS_IMETHOD DeactivateRemoteFrame(void) override; \
  NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, int32_t aButton, int32_t aClickCount, int32_t aModifiers, bool aIgnoreRootScrollFrame) override; \
  NS_IMETHOD ActivateFrameEvent(const nsAString & aType, bool capture) override; \
  NS_IMETHOD GetMessageManager(nsIMessageSender * *aMessageManager) override; \
  NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, int32_t aKeyCode, int32_t aCharCode, int32_t aModifiers, bool aPreventDefault) override; \
  NS_IMETHOD RequestNotifyAfterRemotePaint(void) override; \
  NS_IMETHOD RequestNotifyLayerTreeReady(void) override; \
  NS_IMETHOD RequestNotifyLayerTreeCleared(void) override; \
  NS_IMETHOD GetEventMode(uint32_t *aEventMode) override; \
  NS_IMETHOD SetEventMode(uint32_t aEventMode) override; \
  NS_IMETHOD GetClipSubdocument(bool *aClipSubdocument) override; \
  NS_IMETHOD SetClipSubdocument(bool aClipSubdocument) override; \
  NS_IMETHOD GetClampScrollPosition(bool *aClampScrollPosition) override; \
  NS_IMETHOD SetClampScrollPosition(bool aClampScrollPosition) override; \
  NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement) override; \
  NS_IMETHOD GetChildID(uint64_t *aChildID) override; \
  using nsIFrameLoader::GetVisible; \
  NS_IMETHOD GetVisible(bool *aVisible) override; \
  NS_IMETHOD SetVisible(bool aVisible) override; \
  NS_IMETHOD GetOwnerIsMozBrowserOrAppFrame(bool *aOwnerIsMozBrowserOrAppFrame) override; \
  NS_IMETHOD GetOwnerIsWidget(bool *aOwnerIsWidget) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFRAMELOADER \
  NS_METHOD GetDocShell(nsIDocShell * *aDocShell); \
  NS_METHOD GetTabParent(nsITabParent * *aTabParent); \
  NS_METHOD GetLoadContext(nsILoadContext * *aLoadContext); \
  NS_METHOD LoadFrame(void); \
  NS_METHOD LoadURI(nsIURI *aURI); \
  NS_METHOD SwitchProcessAndLoadURI(nsIURI *aURI, const nsACString & aPackageId); \
  NS_METHOD SetIsPrerendered(void); \
  NS_METHOD Destroy(void); \
  NS_METHOD GetDepthTooGreat(bool *aDepthTooGreat); \
  NS_METHOD UpdatePositionAndSize(nsSubDocumentFrame *aIFrame); \
  NS_METHOD ActivateRemoteFrame(void); \
  NS_METHOD DeactivateRemoteFrame(void); \
  NS_METHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, int32_t aButton, int32_t aClickCount, int32_t aModifiers, bool aIgnoreRootScrollFrame); \
  NS_METHOD ActivateFrameEvent(const nsAString & aType, bool capture); \
  NS_METHOD GetMessageManager(nsIMessageSender * *aMessageManager); \
  NS_METHOD SendCrossProcessKeyEvent(const nsAString & aType, int32_t aKeyCode, int32_t aCharCode, int32_t aModifiers, bool aPreventDefault); \
  NS_METHOD RequestNotifyAfterRemotePaint(void); \
  NS_METHOD RequestNotifyLayerTreeReady(void); \
  NS_METHOD RequestNotifyLayerTreeCleared(void); \
  NS_METHOD GetEventMode(uint32_t *aEventMode); \
  NS_METHOD SetEventMode(uint32_t aEventMode); \
  NS_METHOD GetClipSubdocument(bool *aClipSubdocument); \
  NS_METHOD SetClipSubdocument(bool aClipSubdocument); \
  NS_METHOD GetClampScrollPosition(bool *aClampScrollPosition); \
  NS_METHOD SetClampScrollPosition(bool aClampScrollPosition); \
  NS_METHOD GetOwnerElement(nsIDOMElement * *aOwnerElement); \
  NS_METHOD GetChildID(uint64_t *aChildID); \
  using nsIFrameLoader::GetVisible; \
  NS_METHOD GetVisible(bool *aVisible); \
  NS_METHOD SetVisible(bool aVisible); \
  NS_METHOD GetOwnerIsMozBrowserOrAppFrame(bool *aOwnerIsMozBrowserOrAppFrame); \
  NS_METHOD GetOwnerIsWidget(bool *aOwnerIsWidget); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMELOADER(_to) \
  NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) override { return _to GetDocShell(aDocShell); } \
  NS_IMETHOD GetTabParent(nsITabParent * *aTabParent) override { return _to GetTabParent(aTabParent); } \
  NS_IMETHOD GetLoadContext(nsILoadContext * *aLoadContext) override { return _to GetLoadContext(aLoadContext); } \
  NS_IMETHOD LoadFrame(void) override { return _to LoadFrame(); } \
  NS_IMETHOD LoadURI(nsIURI *aURI) override { return _to LoadURI(aURI); } \
  NS_IMETHOD SwitchProcessAndLoadURI(nsIURI *aURI, const nsACString & aPackageId) override { return _to SwitchProcessAndLoadURI(aURI, aPackageId); } \
  NS_IMETHOD SetIsPrerendered(void) override { return _to SetIsPrerendered(); } \
  NS_IMETHOD Destroy(void) override { return _to Destroy(); } \
  NS_IMETHOD GetDepthTooGreat(bool *aDepthTooGreat) override { return _to GetDepthTooGreat(aDepthTooGreat); } \
  NS_IMETHOD UpdatePositionAndSize(nsSubDocumentFrame *aIFrame) override { return _to UpdatePositionAndSize(aIFrame); } \
  NS_IMETHOD ActivateRemoteFrame(void) override { return _to ActivateRemoteFrame(); } \
  NS_IMETHOD DeactivateRemoteFrame(void) override { return _to DeactivateRemoteFrame(); } \
  NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, int32_t aButton, int32_t aClickCount, int32_t aModifiers, bool aIgnoreRootScrollFrame) override { return _to SendCrossProcessMouseEvent(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_IMETHOD ActivateFrameEvent(const nsAString & aType, bool capture) override { return _to ActivateFrameEvent(aType, capture); } \
  NS_IMETHOD GetMessageManager(nsIMessageSender * *aMessageManager) override { return _to GetMessageManager(aMessageManager); } \
  NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, int32_t aKeyCode, int32_t aCharCode, int32_t aModifiers, bool aPreventDefault) override { return _to SendCrossProcessKeyEvent(aType, aKeyCode, aCharCode, aModifiers, aPreventDefault); } \
  NS_IMETHOD RequestNotifyAfterRemotePaint(void) override { return _to RequestNotifyAfterRemotePaint(); } \
  NS_IMETHOD RequestNotifyLayerTreeReady(void) override { return _to RequestNotifyLayerTreeReady(); } \
  NS_IMETHOD RequestNotifyLayerTreeCleared(void) override { return _to RequestNotifyLayerTreeCleared(); } \
  NS_IMETHOD GetEventMode(uint32_t *aEventMode) override { return _to GetEventMode(aEventMode); } \
  NS_IMETHOD SetEventMode(uint32_t aEventMode) override { return _to SetEventMode(aEventMode); } \
  NS_IMETHOD GetClipSubdocument(bool *aClipSubdocument) override { return _to GetClipSubdocument(aClipSubdocument); } \
  NS_IMETHOD SetClipSubdocument(bool aClipSubdocument) override { return _to SetClipSubdocument(aClipSubdocument); } \
  NS_IMETHOD GetClampScrollPosition(bool *aClampScrollPosition) override { return _to GetClampScrollPosition(aClampScrollPosition); } \
  NS_IMETHOD SetClampScrollPosition(bool aClampScrollPosition) override { return _to SetClampScrollPosition(aClampScrollPosition); } \
  NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement) override { return _to GetOwnerElement(aOwnerElement); } \
  NS_IMETHOD GetChildID(uint64_t *aChildID) override { return _to GetChildID(aChildID); } \
  using nsIFrameLoader::GetVisible; \
  NS_IMETHOD GetVisible(bool *aVisible) override { return _to GetVisible(aVisible); } \
  NS_IMETHOD SetVisible(bool aVisible) override { return _to SetVisible(aVisible); } \
  NS_IMETHOD GetOwnerIsMozBrowserOrAppFrame(bool *aOwnerIsMozBrowserOrAppFrame) override { return _to GetOwnerIsMozBrowserOrAppFrame(aOwnerIsMozBrowserOrAppFrame); } \
  NS_IMETHOD GetOwnerIsWidget(bool *aOwnerIsWidget) override { return _to GetOwnerIsWidget(aOwnerIsWidget); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMELOADER(_to) \
  NS_IMETHOD GetDocShell(nsIDocShell * *aDocShell) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocShell(aDocShell); } \
  NS_IMETHOD GetTabParent(nsITabParent * *aTabParent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabParent(aTabParent); } \
  NS_IMETHOD GetLoadContext(nsILoadContext * *aLoadContext) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLoadContext(aLoadContext); } \
  NS_IMETHOD LoadFrame(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadFrame(); } \
  NS_IMETHOD LoadURI(nsIURI *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadURI(aURI); } \
  NS_IMETHOD SwitchProcessAndLoadURI(nsIURI *aURI, const nsACString & aPackageId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SwitchProcessAndLoadURI(aURI, aPackageId); } \
  NS_IMETHOD SetIsPrerendered(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsPrerendered(); } \
  NS_IMETHOD Destroy(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Destroy(); } \
  NS_IMETHOD GetDepthTooGreat(bool *aDepthTooGreat) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDepthTooGreat(aDepthTooGreat); } \
  NS_IMETHOD UpdatePositionAndSize(nsSubDocumentFrame *aIFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdatePositionAndSize(aIFrame); } \
  NS_IMETHOD ActivateRemoteFrame(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateRemoteFrame(); } \
  NS_IMETHOD DeactivateRemoteFrame(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DeactivateRemoteFrame(); } \
  NS_IMETHOD SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, int32_t aButton, int32_t aClickCount, int32_t aModifiers, bool aIgnoreRootScrollFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendCrossProcessMouseEvent(aType, aX, aY, aButton, aClickCount, aModifiers, aIgnoreRootScrollFrame); } \
  NS_IMETHOD ActivateFrameEvent(const nsAString & aType, bool capture) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateFrameEvent(aType, capture); } \
  NS_IMETHOD GetMessageManager(nsIMessageSender * *aMessageManager) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessageManager(aMessageManager); } \
  NS_IMETHOD SendCrossProcessKeyEvent(const nsAString & aType, int32_t aKeyCode, int32_t aCharCode, int32_t aModifiers, bool aPreventDefault) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendCrossProcessKeyEvent(aType, aKeyCode, aCharCode, aModifiers, aPreventDefault); } \
  NS_IMETHOD RequestNotifyAfterRemotePaint(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestNotifyAfterRemotePaint(); } \
  NS_IMETHOD RequestNotifyLayerTreeReady(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestNotifyLayerTreeReady(); } \
  NS_IMETHOD RequestNotifyLayerTreeCleared(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestNotifyLayerTreeCleared(); } \
  NS_IMETHOD GetEventMode(uint32_t *aEventMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventMode(aEventMode); } \
  NS_IMETHOD SetEventMode(uint32_t aEventMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEventMode(aEventMode); } \
  NS_IMETHOD GetClipSubdocument(bool *aClipSubdocument) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClipSubdocument(aClipSubdocument); } \
  NS_IMETHOD SetClipSubdocument(bool aClipSubdocument) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetClipSubdocument(aClipSubdocument); } \
  NS_IMETHOD GetClampScrollPosition(bool *aClampScrollPosition) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClampScrollPosition(aClampScrollPosition); } \
  NS_IMETHOD SetClampScrollPosition(bool aClampScrollPosition) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetClampScrollPosition(aClampScrollPosition); } \
  NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerElement(aOwnerElement); } \
  NS_IMETHOD GetChildID(uint64_t *aChildID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChildID(aChildID); } \
  NS_IMETHOD GetVisible(bool *aVisible) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVisible(aVisible); } \
  NS_IMETHOD SetVisible(bool aVisible) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVisible(aVisible); } \
  NS_IMETHOD GetOwnerIsMozBrowserOrAppFrame(bool *aOwnerIsMozBrowserOrAppFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerIsMozBrowserOrAppFrame(aOwnerIsMozBrowserOrAppFrame); } \
  NS_IMETHOD GetOwnerIsWidget(bool *aOwnerIsWidget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerIsWidget(aOwnerIsWidget); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameLoader : public nsIFrameLoader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMELOADER

  nsFrameLoader();

private:
  ~nsFrameLoader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFrameLoader, nsIFrameLoader)

nsFrameLoader::nsFrameLoader()
{
  /* member initializers and constructor code */
}

nsFrameLoader::~nsFrameLoader()
{
  /* destructor code */
}

/* readonly attribute nsIDocShell docShell; */
NS_IMETHODIMP nsFrameLoader::GetDocShell(nsIDocShell * *aDocShell)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsITabParent tabParent; */
NS_IMETHODIMP nsFrameLoader::GetTabParent(nsITabParent * *aTabParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsILoadContext loadContext; */
NS_IMETHODIMP nsFrameLoader::GetLoadContext(nsILoadContext * *aLoadContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadFrame (); */
NS_IMETHODIMP nsFrameLoader::LoadFrame()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadURI (in nsIURI aURI); */
NS_IMETHODIMP nsFrameLoader::LoadURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void switchProcessAndLoadURI (in nsIURI aURI, in ACString aPackageId); */
NS_IMETHODIMP nsFrameLoader::SwitchProcessAndLoadURI(nsIURI *aURI, const nsACString & aPackageId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setIsPrerendered (); */
NS_IMETHODIMP nsFrameLoader::SetIsPrerendered()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void destroy (); */
NS_IMETHODIMP nsFrameLoader::Destroy()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean depthTooGreat; */
NS_IMETHODIMP nsFrameLoader::GetDepthTooGreat(bool *aDepthTooGreat)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void updatePositionAndSize (in nsSubDocumentFrame aIFrame); */
NS_IMETHODIMP nsFrameLoader::UpdatePositionAndSize(nsSubDocumentFrame *aIFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void activateRemoteFrame (); */
NS_IMETHODIMP nsFrameLoader::ActivateRemoteFrame()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deactivateRemoteFrame (); */
NS_IMETHODIMP nsFrameLoader::DeactivateRemoteFrame()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendCrossProcessMouseEvent (in AString aType, in float aX, in float aY, in long aButton, in long aClickCount, in long aModifiers, [optional] in boolean aIgnoreRootScrollFrame); */
NS_IMETHODIMP nsFrameLoader::SendCrossProcessMouseEvent(const nsAString & aType, float aX, float aY, int32_t aButton, int32_t aClickCount, int32_t aModifiers, bool aIgnoreRootScrollFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void activateFrameEvent (in AString aType, in boolean capture); */
NS_IMETHODIMP nsFrameLoader::ActivateFrameEvent(const nsAString & aType, bool capture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIMessageSender messageManager; */
NS_IMETHODIMP nsFrameLoader::GetMessageManager(nsIMessageSender * *aMessageManager)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendCrossProcessKeyEvent (in AString aType, in long aKeyCode, in long aCharCode, in long aModifiers, [optional] in boolean aPreventDefault); */
NS_IMETHODIMP nsFrameLoader::SendCrossProcessKeyEvent(const nsAString & aType, int32_t aKeyCode, int32_t aCharCode, int32_t aModifiers, bool aPreventDefault)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestNotifyAfterRemotePaint (); */
NS_IMETHODIMP nsFrameLoader::RequestNotifyAfterRemotePaint()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestNotifyLayerTreeReady (); */
NS_IMETHODIMP nsFrameLoader::RequestNotifyLayerTreeReady()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void requestNotifyLayerTreeCleared (); */
NS_IMETHODIMP nsFrameLoader::RequestNotifyLayerTreeCleared()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long eventMode; */
NS_IMETHODIMP nsFrameLoader::GetEventMode(uint32_t *aEventMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFrameLoader::SetEventMode(uint32_t aEventMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean clipSubdocument; */
NS_IMETHODIMP nsFrameLoader::GetClipSubdocument(bool *aClipSubdocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFrameLoader::SetClipSubdocument(bool aClipSubdocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean clampScrollPosition; */
NS_IMETHODIMP nsFrameLoader::GetClampScrollPosition(bool *aClampScrollPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFrameLoader::SetClampScrollPosition(bool aClampScrollPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMElement ownerElement; */
NS_IMETHODIMP nsFrameLoader::GetOwnerElement(nsIDOMElement * *aOwnerElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long childID; */
NS_IMETHODIMP nsFrameLoader::GetChildID(uint64_t *aChildID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] attribute boolean visible; */
NS_IMETHODIMP nsFrameLoader::GetVisible(bool *aVisible)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFrameLoader::SetVisible(bool aVisible)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean ownerIsMozBrowserOrAppFrame; */
NS_IMETHODIMP nsFrameLoader::GetOwnerIsMozBrowserOrAppFrame(bool *aOwnerIsMozBrowserOrAppFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean ownerIsWidget; */
NS_IMETHODIMP nsFrameLoader::GetOwnerIsWidget(bool *aOwnerIsWidget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

class nsFrameLoader;

/* starting interface:    nsIFrameLoaderOwner */
#define NS_IFRAMELOADEROWNER_IID_STR "adc1b3ba-8deb-4943-8045-e6de0044f2ce"

#define NS_IFRAMELOADEROWNER_IID \
  {0xadc1b3ba, 0x8deb, 0x4943, \
    { 0x80, 0x45, 0xe6, 0xde, 0x00, 0x44, 0xf2, 0xce }}

class NS_NO_VTABLE nsIFrameLoaderOwner : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFRAMELOADEROWNER_IID)

  /* readonly attribute nsIFrameLoader frameLoader; */
  NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader) = 0;

  /* [noscript,notxpcom] alreadyAddRefed_nsFrameLoader GetFrameLoader (); */
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void) = 0;

  /* readonly attribute mozIApplication parentApplication; */
  NS_IMETHOD GetParentApplication(mozIApplication * *aParentApplication) = 0;

  /* void setIsPrerendered (); */
  NS_IMETHOD SetIsPrerendered(void) = 0;

  /* void swapFrameLoaders (in nsIFrameLoaderOwner aOtherOwner); */
  NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFrameLoaderOwner, NS_IFRAMELOADEROWNER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFRAMELOADEROWNER \
  NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader) override; \
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void) override; \
  NS_IMETHOD GetParentApplication(mozIApplication * *aParentApplication) override; \
  NS_IMETHOD SetIsPrerendered(void) override; \
  NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFRAMELOADEROWNER \
  NS_METHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader); \
  NS_METHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void); \
  NS_METHOD GetParentApplication(mozIApplication * *aParentApplication); \
  NS_METHOD SetIsPrerendered(void); \
  NS_METHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFRAMELOADEROWNER(_to) \
  NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader) override { return _to GetFrameLoader(aFrameLoader); } \
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void) override { return _to GetFrameLoader(); } \
  NS_IMETHOD GetParentApplication(mozIApplication * *aParentApplication) override { return _to GetParentApplication(aParentApplication); } \
  NS_IMETHOD SetIsPrerendered(void) override { return _to SetIsPrerendered(); } \
  NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner) override { return _to SwapFrameLoaders(aOtherOwner); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFRAMELOADEROWNER(_to) \
  NS_IMETHOD GetFrameLoader(nsIFrameLoader * *aFrameLoader) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFrameLoader(aFrameLoader); } \
  NS_IMETHOD_(already_AddRefed<nsFrameLoader>) GetFrameLoader(void) override; \
  NS_IMETHOD GetParentApplication(mozIApplication * *aParentApplication) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentApplication(aParentApplication); } \
  NS_IMETHOD SetIsPrerendered(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsPrerendered(); } \
  NS_IMETHOD SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SwapFrameLoaders(aOtherOwner); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFrameLoaderOwner : public nsIFrameLoaderOwner
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFRAMELOADEROWNER

  nsFrameLoaderOwner();

private:
  ~nsFrameLoaderOwner();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFrameLoaderOwner, nsIFrameLoaderOwner)

nsFrameLoaderOwner::nsFrameLoaderOwner()
{
  /* member initializers and constructor code */
}

nsFrameLoaderOwner::~nsFrameLoaderOwner()
{
  /* destructor code */
}

/* readonly attribute nsIFrameLoader frameLoader; */
NS_IMETHODIMP nsFrameLoaderOwner::GetFrameLoader(nsIFrameLoader * *aFrameLoader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] alreadyAddRefed_nsFrameLoader GetFrameLoader (); */
NS_IMETHODIMP_(already_AddRefed<nsFrameLoader>) nsFrameLoaderOwner::GetFrameLoader()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIApplication parentApplication; */
NS_IMETHODIMP nsFrameLoaderOwner::GetParentApplication(mozIApplication * *aParentApplication)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setIsPrerendered (); */
NS_IMETHODIMP nsFrameLoaderOwner::SetIsPrerendered()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void swapFrameLoaders (in nsIFrameLoaderOwner aOtherOwner); */
NS_IMETHODIMP nsFrameLoaderOwner::SwapFrameLoaders(nsIFrameLoaderOwner *aOtherOwner)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFrameLoader_h__ */
