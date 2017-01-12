/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAudioChannelService.idl
 */

#ifndef __gen_nsIAudioChannelService_h__
#define __gen_nsIAudioChannelService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsIAudioChannelService */
#define NS_IAUDIOCHANNELSERVICE_IID_STR "5cb24dbc-36c7-46a4-9966-ac73141dc795"

#define NS_IAUDIOCHANNELSERVICE_IID \
  {0x5cb24dbc, 0x36c7, 0x46a4, \
    { 0x99, 0x66, 0xac, 0x73, 0x14, 0x1d, 0xc7, 0x95 }}

class NS_NO_VTABLE nsIAudioChannelService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAUDIOCHANNELSERVICE_IID)

  /* float getAudioChannelVolume (in mozIDOMWindowProxy window, in unsigned short audioChannel); */
  NS_IMETHOD GetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float *_retval) = 0;

  /* void setAudioChannelVolume (in mozIDOMWindowProxy window, in unsigned short audioChannel, in float volume); */
  NS_IMETHOD SetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float volume) = 0;

  /* boolean getAudioChannelMuted (in mozIDOMWindowProxy window, in unsigned short audioChannel); */
  NS_IMETHOD GetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) = 0;

  /* void setAudioChannelMuted (in mozIDOMWindowProxy window, in unsigned short audioChannel, in boolean muted); */
  NS_IMETHOD SetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool muted) = 0;

  /* boolean isAudioChannelActive (in mozIDOMWindowProxy window, in unsigned short audioChannel); */
  NS_IMETHOD IsAudioChannelActive(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAudioChannelService, NS_IAUDIOCHANNELSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAUDIOCHANNELSERVICE \
  NS_IMETHOD GetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float *_retval) override; \
  NS_IMETHOD SetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float volume) override; \
  NS_IMETHOD GetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) override; \
  NS_IMETHOD SetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool muted) override; \
  NS_IMETHOD IsAudioChannelActive(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAUDIOCHANNELSERVICE \
  NS_METHOD GetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float *_retval); \
  NS_METHOD SetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float volume); \
  NS_METHOD GetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval); \
  NS_METHOD SetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool muted); \
  NS_METHOD IsAudioChannelActive(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAUDIOCHANNELSERVICE(_to) \
  NS_IMETHOD GetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float *_retval) override { return _to GetAudioChannelVolume(window, audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float volume) override { return _to SetAudioChannelVolume(window, audioChannel, volume); } \
  NS_IMETHOD GetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) override { return _to GetAudioChannelMuted(window, audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool muted) override { return _to SetAudioChannelMuted(window, audioChannel, muted); } \
  NS_IMETHOD IsAudioChannelActive(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) override { return _to IsAudioChannelActive(window, audioChannel, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAUDIOCHANNELSERVICE(_to) \
  NS_IMETHOD GetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAudioChannelVolume(window, audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float volume) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAudioChannelVolume(window, audioChannel, volume); } \
  NS_IMETHOD GetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAudioChannelMuted(window, audioChannel, _retval); } \
  NS_IMETHOD SetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool muted) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAudioChannelMuted(window, audioChannel, muted); } \
  NS_IMETHOD IsAudioChannelActive(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAudioChannelActive(window, audioChannel, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAudioChannelService : public nsIAudioChannelService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAUDIOCHANNELSERVICE

  nsAudioChannelService();

private:
  ~nsAudioChannelService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAudioChannelService, nsIAudioChannelService)

nsAudioChannelService::nsAudioChannelService()
{
  /* member initializers and constructor code */
}

nsAudioChannelService::~nsAudioChannelService()
{
  /* destructor code */
}

/* float getAudioChannelVolume (in mozIDOMWindowProxy window, in unsigned short audioChannel); */
NS_IMETHODIMP nsAudioChannelService::GetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAudioChannelVolume (in mozIDOMWindowProxy window, in unsigned short audioChannel, in float volume); */
NS_IMETHODIMP nsAudioChannelService::SetAudioChannelVolume(mozIDOMWindowProxy *window, uint16_t audioChannel, float volume)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getAudioChannelMuted (in mozIDOMWindowProxy window, in unsigned short audioChannel); */
NS_IMETHODIMP nsAudioChannelService::GetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAudioChannelMuted (in mozIDOMWindowProxy window, in unsigned short audioChannel, in boolean muted); */
NS_IMETHODIMP nsAudioChannelService::SetAudioChannelMuted(mozIDOMWindowProxy *window, uint16_t audioChannel, bool muted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isAudioChannelActive (in mozIDOMWindowProxy window, in unsigned short audioChannel); */
NS_IMETHODIMP nsAudioChannelService::IsAudioChannelActive(mozIDOMWindowProxy *window, uint16_t audioChannel, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAudioChannelService_h__ */
