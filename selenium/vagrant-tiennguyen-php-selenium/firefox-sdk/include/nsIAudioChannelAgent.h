/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAudioChannelAgent.idl
 */

#ifndef __gen_nsIAudioChannelAgent_h__
#define __gen_nsIAudioChannelAgent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindow; /* forward declaration */


/* starting interface:    nsIAudioChannelAgentCallback */
#define NS_IAUDIOCHANNELAGENTCALLBACK_IID_STR "15c05894-408e-4798-b527-a8c32d9c5f8c"

#define NS_IAUDIOCHANNELAGENTCALLBACK_IID \
  {0x15c05894, 0x408e, 0x4798, \
    { 0xb5, 0x27, 0xa8, 0xc3, 0x2d, 0x9c, 0x5f, 0x8c }}

class NS_NO_VTABLE nsIAudioChannelAgentCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAUDIOCHANNELAGENTCALLBACK_IID)

  /* void windowVolumeChanged (in float aVolume, in bool aMuted); */
  NS_IMETHOD WindowVolumeChanged(float aVolume, bool aMuted) = 0;

  /* void windowAudioCaptureChanged (in bool aCapture); */
  NS_IMETHOD WindowAudioCaptureChanged(bool aCapture) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAudioChannelAgentCallback, NS_IAUDIOCHANNELAGENTCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAUDIOCHANNELAGENTCALLBACK \
  NS_IMETHOD WindowVolumeChanged(float aVolume, bool aMuted) override; \
  NS_IMETHOD WindowAudioCaptureChanged(bool aCapture) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAUDIOCHANNELAGENTCALLBACK \
  NS_METHOD WindowVolumeChanged(float aVolume, bool aMuted); \
  NS_METHOD WindowAudioCaptureChanged(bool aCapture); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAUDIOCHANNELAGENTCALLBACK(_to) \
  NS_IMETHOD WindowVolumeChanged(float aVolume, bool aMuted) override { return _to WindowVolumeChanged(aVolume, aMuted); } \
  NS_IMETHOD WindowAudioCaptureChanged(bool aCapture) override { return _to WindowAudioCaptureChanged(aCapture); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAUDIOCHANNELAGENTCALLBACK(_to) \
  NS_IMETHOD WindowVolumeChanged(float aVolume, bool aMuted) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowVolumeChanged(aVolume, aMuted); } \
  NS_IMETHOD WindowAudioCaptureChanged(bool aCapture) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WindowAudioCaptureChanged(aCapture); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAudioChannelAgentCallback : public nsIAudioChannelAgentCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAUDIOCHANNELAGENTCALLBACK

  nsAudioChannelAgentCallback();

private:
  ~nsAudioChannelAgentCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAudioChannelAgentCallback, nsIAudioChannelAgentCallback)

nsAudioChannelAgentCallback::nsAudioChannelAgentCallback()
{
  /* member initializers and constructor code */
}

nsAudioChannelAgentCallback::~nsAudioChannelAgentCallback()
{
  /* destructor code */
}

/* void windowVolumeChanged (in float aVolume, in bool aMuted); */
NS_IMETHODIMP nsAudioChannelAgentCallback::WindowVolumeChanged(float aVolume, bool aMuted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void windowAudioCaptureChanged (in bool aCapture); */
NS_IMETHODIMP nsAudioChannelAgentCallback::WindowAudioCaptureChanged(bool aCapture)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAudioChannelAgent */
#define NS_IAUDIOCHANNELAGENT_IID_STR "ab7e21c0-970c-11e5-a837-0800200c9a66"

#define NS_IAUDIOCHANNELAGENT_IID \
  {0xab7e21c0, 0x970c, 0x11e5, \
    { 0xa8, 0x37, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class nsIAudioChannelAgent : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAUDIOCHANNELAGENT_IID)

  enum {
    AUDIO_AGENT_CHANNEL_NORMAL = 0,
    AUDIO_AGENT_CHANNEL_CONTENT = 1,
    AUDIO_AGENT_CHANNEL_NOTIFICATION = 2,
    AUDIO_AGENT_CHANNEL_ALARM = 3,
    AUDIO_AGENT_CHANNEL_TELEPHONY = 4,
    AUDIO_AGENT_CHANNEL_RINGER = 5,
    AUDIO_AGENT_CHANNEL_PUBLICNOTIFICATION = 6,
    AUDIO_AGENT_CHANNEL_SYSTEM = 7,
    AUDIO_AGENT_CHANNEL_ERROR = 1000,
    AUDIO_AGENT_STATE_NORMAL = 0,
    AUDIO_AGENT_STATE_MUTED = 1,
    AUDIO_AGENT_STATE_FADED = 2
  };

  /* readonly attribute long audioChannelType; */
  NS_IMETHOD GetAudioChannelType(int32_t *aAudioChannelType) = 0;

   inline int32_t AudioChannelType() {
    int32_t channel;
    return NS_SUCCEEDED(GetAudioChannelType(&channel)) ? channel : AUDIO_AGENT_CHANNEL_ERROR;
  }
    /* void init (in mozIDOMWindow window, in long channelType, in nsIAudioChannelAgentCallback callback); */
  NS_IMETHOD Init(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) = 0;

  /* void initWithWeakCallback (in mozIDOMWindow window, in long channelType, in nsIAudioChannelAgentCallback callback); */
  NS_IMETHOD InitWithWeakCallback(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) = 0;

  /* void notifyStartedPlaying (out float volume, out bool muted); */
  NS_IMETHOD NotifyStartedPlaying(float *volume, bool *muted) = 0;

  /* void notifyStoppedPlaying (); */
  NS_IMETHOD NotifyStoppedPlaying(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAudioChannelAgent, NS_IAUDIOCHANNELAGENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAUDIOCHANNELAGENT \
  NS_IMETHOD GetAudioChannelType(int32_t *aAudioChannelType) override; \
  NS_IMETHOD Init(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) override; \
  NS_IMETHOD InitWithWeakCallback(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) override; \
  NS_IMETHOD NotifyStartedPlaying(float *volume, bool *muted) override; \
  NS_IMETHOD NotifyStoppedPlaying(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAUDIOCHANNELAGENT \
  NS_METHOD GetAudioChannelType(int32_t *aAudioChannelType); \
  NS_METHOD Init(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback); \
  NS_METHOD InitWithWeakCallback(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback); \
  NS_METHOD NotifyStartedPlaying(float *volume, bool *muted); \
  NS_METHOD NotifyStoppedPlaying(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAUDIOCHANNELAGENT(_to) \
  NS_IMETHOD GetAudioChannelType(int32_t *aAudioChannelType) override { return _to GetAudioChannelType(aAudioChannelType); } \
  NS_IMETHOD Init(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) override { return _to Init(window, channelType, callback); } \
  NS_IMETHOD InitWithWeakCallback(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) override { return _to InitWithWeakCallback(window, channelType, callback); } \
  NS_IMETHOD NotifyStartedPlaying(float *volume, bool *muted) override { return _to NotifyStartedPlaying(volume, muted); } \
  NS_IMETHOD NotifyStoppedPlaying(void) override { return _to NotifyStoppedPlaying(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAUDIOCHANNELAGENT(_to) \
  NS_IMETHOD GetAudioChannelType(int32_t *aAudioChannelType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAudioChannelType(aAudioChannelType); } \
  NS_IMETHOD Init(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(window, channelType, callback); } \
  NS_IMETHOD InitWithWeakCallback(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithWeakCallback(window, channelType, callback); } \
  NS_IMETHOD NotifyStartedPlaying(float *volume, bool *muted) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyStartedPlaying(volume, muted); } \
  NS_IMETHOD NotifyStoppedPlaying(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyStoppedPlaying(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAudioChannelAgent : public nsIAudioChannelAgent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAUDIOCHANNELAGENT

  nsAudioChannelAgent();

private:
  ~nsAudioChannelAgent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAudioChannelAgent, nsIAudioChannelAgent)

nsAudioChannelAgent::nsAudioChannelAgent()
{
  /* member initializers and constructor code */
}

nsAudioChannelAgent::~nsAudioChannelAgent()
{
  /* destructor code */
}

/* readonly attribute long audioChannelType; */
NS_IMETHODIMP nsAudioChannelAgent::GetAudioChannelType(int32_t *aAudioChannelType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void init (in mozIDOMWindow window, in long channelType, in nsIAudioChannelAgentCallback callback); */
NS_IMETHODIMP nsAudioChannelAgent::Init(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initWithWeakCallback (in mozIDOMWindow window, in long channelType, in nsIAudioChannelAgentCallback callback); */
NS_IMETHODIMP nsAudioChannelAgent::InitWithWeakCallback(mozIDOMWindow *window, int32_t channelType, nsIAudioChannelAgentCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyStartedPlaying (out float volume, out bool muted); */
NS_IMETHODIMP nsAudioChannelAgent::NotifyStartedPlaying(float *volume, bool *muted)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyStoppedPlaying (); */
NS_IMETHODIMP nsAudioChannelAgent::NotifyStoppedPlaying()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAudioChannelAgent_h__ */
