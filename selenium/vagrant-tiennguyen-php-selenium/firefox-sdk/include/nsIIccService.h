/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIIccService.idl
 */

#ifndef __gen_nsIIccService_h__
#define __gen_nsIIccService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIIcc; /* forward declaration */

class nsIIccContact; /* forward declaration */

class nsIIccInfo; /* forward declaration */

class nsIStkDownloadEvent; /* forward declaration */

class nsIStkProactiveCmd; /* forward declaration */

class nsIStkTerminalResponse; /* forward declaration */


/* starting interface:    nsIIccListener */
#define NS_IICCLISTENER_IID_STR "71b33012-eca2-11e4-a40d-9ff040a6fe2a"

#define NS_IICCLISTENER_IID \
  {0x71b33012, 0xeca2, 0x11e4, \
    { 0xa4, 0x0d, 0x9f, 0xf0, 0x40, 0xa6, 0xfe, 0x2a }}

class NS_NO_VTABLE nsIIccListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IICCLISTENER_IID)

  /* void notifyStkCommand (in nsIStkProactiveCmd aStkProactiveCmd); */
  NS_IMETHOD NotifyStkCommand(nsIStkProactiveCmd *aStkProactiveCmd) = 0;

  /* void notifyStkSessionEnd (); */
  NS_IMETHOD NotifyStkSessionEnd(void) = 0;

  /* void notifyCardStateChanged (); */
  NS_IMETHOD NotifyCardStateChanged(void) = 0;

  /* void notifyIccInfoChanged (); */
  NS_IMETHOD NotifyIccInfoChanged(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIccListener, NS_IICCLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIICCLISTENER \
  NS_IMETHOD NotifyStkCommand(nsIStkProactiveCmd *aStkProactiveCmd) override; \
  NS_IMETHOD NotifyStkSessionEnd(void) override; \
  NS_IMETHOD NotifyCardStateChanged(void) override; \
  NS_IMETHOD NotifyIccInfoChanged(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIICCLISTENER \
  NS_METHOD NotifyStkCommand(nsIStkProactiveCmd *aStkProactiveCmd); \
  NS_METHOD NotifyStkSessionEnd(void); \
  NS_METHOD NotifyCardStateChanged(void); \
  NS_METHOD NotifyIccInfoChanged(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIICCLISTENER(_to) \
  NS_IMETHOD NotifyStkCommand(nsIStkProactiveCmd *aStkProactiveCmd) override { return _to NotifyStkCommand(aStkProactiveCmd); } \
  NS_IMETHOD NotifyStkSessionEnd(void) override { return _to NotifyStkSessionEnd(); } \
  NS_IMETHOD NotifyCardStateChanged(void) override { return _to NotifyCardStateChanged(); } \
  NS_IMETHOD NotifyIccInfoChanged(void) override { return _to NotifyIccInfoChanged(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIICCLISTENER(_to) \
  NS_IMETHOD NotifyStkCommand(nsIStkProactiveCmd *aStkProactiveCmd) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyStkCommand(aStkProactiveCmd); } \
  NS_IMETHOD NotifyStkSessionEnd(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyStkSessionEnd(); } \
  NS_IMETHOD NotifyCardStateChanged(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyCardStateChanged(); } \
  NS_IMETHOD NotifyIccInfoChanged(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyIccInfoChanged(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIccListener : public nsIIccListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIICCLISTENER

  nsIccListener();

private:
  ~nsIccListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIccListener, nsIIccListener)

nsIccListener::nsIccListener()
{
  /* member initializers and constructor code */
}

nsIccListener::~nsIccListener()
{
  /* destructor code */
}

/* void notifyStkCommand (in nsIStkProactiveCmd aStkProactiveCmd); */
NS_IMETHODIMP nsIccListener::NotifyStkCommand(nsIStkProactiveCmd *aStkProactiveCmd)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyStkSessionEnd (); */
NS_IMETHODIMP nsIccListener::NotifyStkSessionEnd()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyCardStateChanged (); */
NS_IMETHODIMP nsIccListener::NotifyCardStateChanged()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyIccInfoChanged (); */
NS_IMETHODIMP nsIccListener::NotifyIccInfoChanged()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIIccCallback */
#define NS_IICCCALLBACK_IID_STR "b7b0623f-fb2c-4cec-b0dc-00ac2fe7b296"

#define NS_IICCCALLBACK_IID \
  {0xb7b0623f, 0xfb2c, 0x4cec, \
    { 0xb0, 0xdc, 0x00, 0xac, 0x2f, 0xe7, 0xb2, 0x96 }}

class NS_NO_VTABLE nsIIccCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IICCCALLBACK_IID)

  /* void notifySuccess (); */
  NS_IMETHOD NotifySuccess(void) = 0;

  /* void notifySuccessWithBoolean (in boolean aResult); */
  NS_IMETHOD NotifySuccessWithBoolean(bool aResult) = 0;

  /* void notifyGetCardLockRetryCount (in long aCount); */
  NS_IMETHOD NotifyGetCardLockRetryCount(int32_t aCount) = 0;

  /* void notifyRetrievedIccContacts ([array, size_is (aCount)] in nsIIccContact aContacts, in uint32_t aCount); */
  NS_IMETHOD NotifyRetrievedIccContacts(nsIIccContact **aContacts, uint32_t aCount) = 0;

  /* void notifyUpdatedIccContact (in nsIIccContact aContact); */
  NS_IMETHOD NotifyUpdatedIccContact(nsIIccContact *aContact) = 0;

  /* void notifyError (in DOMString aErrorMsg); */
  NS_IMETHOD NotifyError(const nsAString & aErrorMsg) = 0;

  /* void notifyCardLockError (in DOMString aErrorMsg, in long aRetryCount); */
  NS_IMETHOD NotifyCardLockError(const nsAString & aErrorMsg, int32_t aRetryCount) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIccCallback, NS_IICCCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIICCCALLBACK \
  NS_IMETHOD NotifySuccess(void) override; \
  NS_IMETHOD NotifySuccessWithBoolean(bool aResult) override; \
  NS_IMETHOD NotifyGetCardLockRetryCount(int32_t aCount) override; \
  NS_IMETHOD NotifyRetrievedIccContacts(nsIIccContact **aContacts, uint32_t aCount) override; \
  NS_IMETHOD NotifyUpdatedIccContact(nsIIccContact *aContact) override; \
  NS_IMETHOD NotifyError(const nsAString & aErrorMsg) override; \
  NS_IMETHOD NotifyCardLockError(const nsAString & aErrorMsg, int32_t aRetryCount) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIICCCALLBACK \
  NS_METHOD NotifySuccess(void); \
  NS_METHOD NotifySuccessWithBoolean(bool aResult); \
  NS_METHOD NotifyGetCardLockRetryCount(int32_t aCount); \
  NS_METHOD NotifyRetrievedIccContacts(nsIIccContact **aContacts, uint32_t aCount); \
  NS_METHOD NotifyUpdatedIccContact(nsIIccContact *aContact); \
  NS_METHOD NotifyError(const nsAString & aErrorMsg); \
  NS_METHOD NotifyCardLockError(const nsAString & aErrorMsg, int32_t aRetryCount); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIICCCALLBACK(_to) \
  NS_IMETHOD NotifySuccess(void) override { return _to NotifySuccess(); } \
  NS_IMETHOD NotifySuccessWithBoolean(bool aResult) override { return _to NotifySuccessWithBoolean(aResult); } \
  NS_IMETHOD NotifyGetCardLockRetryCount(int32_t aCount) override { return _to NotifyGetCardLockRetryCount(aCount); } \
  NS_IMETHOD NotifyRetrievedIccContacts(nsIIccContact **aContacts, uint32_t aCount) override { return _to NotifyRetrievedIccContacts(aContacts, aCount); } \
  NS_IMETHOD NotifyUpdatedIccContact(nsIIccContact *aContact) override { return _to NotifyUpdatedIccContact(aContact); } \
  NS_IMETHOD NotifyError(const nsAString & aErrorMsg) override { return _to NotifyError(aErrorMsg); } \
  NS_IMETHOD NotifyCardLockError(const nsAString & aErrorMsg, int32_t aRetryCount) override { return _to NotifyCardLockError(aErrorMsg, aRetryCount); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIICCCALLBACK(_to) \
  NS_IMETHOD NotifySuccess(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySuccess(); } \
  NS_IMETHOD NotifySuccessWithBoolean(bool aResult) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySuccessWithBoolean(aResult); } \
  NS_IMETHOD NotifyGetCardLockRetryCount(int32_t aCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyGetCardLockRetryCount(aCount); } \
  NS_IMETHOD NotifyRetrievedIccContacts(nsIIccContact **aContacts, uint32_t aCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyRetrievedIccContacts(aContacts, aCount); } \
  NS_IMETHOD NotifyUpdatedIccContact(nsIIccContact *aContact) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyUpdatedIccContact(aContact); } \
  NS_IMETHOD NotifyError(const nsAString & aErrorMsg) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyError(aErrorMsg); } \
  NS_IMETHOD NotifyCardLockError(const nsAString & aErrorMsg, int32_t aRetryCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyCardLockError(aErrorMsg, aRetryCount); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIccCallback : public nsIIccCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIICCCALLBACK

  nsIccCallback();

private:
  ~nsIccCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIccCallback, nsIIccCallback)

nsIccCallback::nsIccCallback()
{
  /* member initializers and constructor code */
}

nsIccCallback::~nsIccCallback()
{
  /* destructor code */
}

/* void notifySuccess (); */
NS_IMETHODIMP nsIccCallback::NotifySuccess()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifySuccessWithBoolean (in boolean aResult); */
NS_IMETHODIMP nsIccCallback::NotifySuccessWithBoolean(bool aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyGetCardLockRetryCount (in long aCount); */
NS_IMETHODIMP nsIccCallback::NotifyGetCardLockRetryCount(int32_t aCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyRetrievedIccContacts ([array, size_is (aCount)] in nsIIccContact aContacts, in uint32_t aCount); */
NS_IMETHODIMP nsIccCallback::NotifyRetrievedIccContacts(nsIIccContact **aContacts, uint32_t aCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyUpdatedIccContact (in nsIIccContact aContact); */
NS_IMETHODIMP nsIccCallback::NotifyUpdatedIccContact(nsIIccContact *aContact)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyError (in DOMString aErrorMsg); */
NS_IMETHODIMP nsIccCallback::NotifyError(const nsAString & aErrorMsg)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyCardLockError (in DOMString aErrorMsg, in long aRetryCount); */
NS_IMETHODIMP nsIccCallback::NotifyCardLockError(const nsAString & aErrorMsg, int32_t aRetryCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIIccChannelCallback */
#define NS_IICCCHANNELCALLBACK_IID_STR "6136acab-b50e-494a-a86d-df392a032897"

#define NS_IICCCHANNELCALLBACK_IID \
  {0x6136acab, 0xb50e, 0x494a, \
    { 0xa8, 0x6d, 0xdf, 0x39, 0x2a, 0x03, 0x28, 0x97 }}

class NS_NO_VTABLE nsIIccChannelCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IICCCHANNELCALLBACK_IID)

  /* void notifyOpenChannelSuccess (in long channel); */
  NS_IMETHOD NotifyOpenChannelSuccess(int32_t channel) = 0;

  /* void notifyCloseChannelSuccess (); */
  NS_IMETHOD NotifyCloseChannelSuccess(void) = 0;

  /* void notifyExchangeAPDUResponse (in octet sw1, in octet sw2, in DOMString data); */
  NS_IMETHOD NotifyExchangeAPDUResponse(uint8_t sw1, uint8_t sw2, const nsAString & data) = 0;

  /* void notifyError (in DOMString error); */
  NS_IMETHOD NotifyError(const nsAString & error) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIccChannelCallback, NS_IICCCHANNELCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIICCCHANNELCALLBACK \
  NS_IMETHOD NotifyOpenChannelSuccess(int32_t channel) override; \
  NS_IMETHOD NotifyCloseChannelSuccess(void) override; \
  NS_IMETHOD NotifyExchangeAPDUResponse(uint8_t sw1, uint8_t sw2, const nsAString & data) override; \
  NS_IMETHOD NotifyError(const nsAString & error) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIICCCHANNELCALLBACK \
  NS_METHOD NotifyOpenChannelSuccess(int32_t channel); \
  NS_METHOD NotifyCloseChannelSuccess(void); \
  NS_METHOD NotifyExchangeAPDUResponse(uint8_t sw1, uint8_t sw2, const nsAString & data); \
  NS_METHOD NotifyError(const nsAString & error); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIICCCHANNELCALLBACK(_to) \
  NS_IMETHOD NotifyOpenChannelSuccess(int32_t channel) override { return _to NotifyOpenChannelSuccess(channel); } \
  NS_IMETHOD NotifyCloseChannelSuccess(void) override { return _to NotifyCloseChannelSuccess(); } \
  NS_IMETHOD NotifyExchangeAPDUResponse(uint8_t sw1, uint8_t sw2, const nsAString & data) override { return _to NotifyExchangeAPDUResponse(sw1, sw2, data); } \
  NS_IMETHOD NotifyError(const nsAString & error) override { return _to NotifyError(error); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIICCCHANNELCALLBACK(_to) \
  NS_IMETHOD NotifyOpenChannelSuccess(int32_t channel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyOpenChannelSuccess(channel); } \
  NS_IMETHOD NotifyCloseChannelSuccess(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyCloseChannelSuccess(); } \
  NS_IMETHOD NotifyExchangeAPDUResponse(uint8_t sw1, uint8_t sw2, const nsAString & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyExchangeAPDUResponse(sw1, sw2, data); } \
  NS_IMETHOD NotifyError(const nsAString & error) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyError(error); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIccChannelCallback : public nsIIccChannelCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIICCCHANNELCALLBACK

  nsIccChannelCallback();

private:
  ~nsIccChannelCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIccChannelCallback, nsIIccChannelCallback)

nsIccChannelCallback::nsIccChannelCallback()
{
  /* member initializers and constructor code */
}

nsIccChannelCallback::~nsIccChannelCallback()
{
  /* destructor code */
}

/* void notifyOpenChannelSuccess (in long channel); */
NS_IMETHODIMP nsIccChannelCallback::NotifyOpenChannelSuccess(int32_t channel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyCloseChannelSuccess (); */
NS_IMETHODIMP nsIccChannelCallback::NotifyCloseChannelSuccess()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyExchangeAPDUResponse (in octet sw1, in octet sw2, in DOMString data); */
NS_IMETHODIMP nsIccChannelCallback::NotifyExchangeAPDUResponse(uint8_t sw1, uint8_t sw2, const nsAString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyError (in DOMString error); */
NS_IMETHODIMP nsIccChannelCallback::NotifyError(const nsAString & error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define ICC_SERVICE_CID \
  { 0xbab0277a, 0x900e, 0x11e4, { 0x80, 0xc7, 0xdb, 0xd7, 0xad, 0x05, 0x24, 0x01 } }
#define ICC_SERVICE_CONTRACTID \
  "@mozilla.org/icc/iccservice;1"
template<typename T> struct already_AddRefed;

/* starting interface:    nsIIccService */
#define NS_IICCSERVICE_IID_STR "6590a04c-9ca4-11e4-ae95-570876ecc428"

#define NS_IICCSERVICE_IID \
  {0x6590a04c, 0x9ca4, 0x11e4, \
    { 0xae, 0x95, 0x57, 0x08, 0x76, 0xec, 0xc4, 0x28 }}

class NS_NO_VTABLE nsIIccService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IICCSERVICE_IID)

  /* nsIIcc getIccByServiceId (in unsigned long aServiceId); */
  NS_IMETHOD GetIccByServiceId(uint32_t aServiceId, nsIIcc * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIccService, NS_IICCSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIICCSERVICE \
  NS_IMETHOD GetIccByServiceId(uint32_t aServiceId, nsIIcc * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIICCSERVICE \
  NS_METHOD GetIccByServiceId(uint32_t aServiceId, nsIIcc * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIICCSERVICE(_to) \
  NS_IMETHOD GetIccByServiceId(uint32_t aServiceId, nsIIcc * *_retval) override { return _to GetIccByServiceId(aServiceId, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIICCSERVICE(_to) \
  NS_IMETHOD GetIccByServiceId(uint32_t aServiceId, nsIIcc * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIccByServiceId(aServiceId, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIccService : public nsIIccService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIICCSERVICE

  nsIccService();

private:
  ~nsIccService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIccService, nsIIccService)

nsIccService::nsIccService()
{
  /* member initializers and constructor code */
}

nsIccService::~nsIccService()
{
  /* destructor code */
}

/* nsIIcc getIccByServiceId (in unsigned long aServiceId); */
NS_IMETHODIMP nsIccService::GetIccByServiceId(uint32_t aServiceId, nsIIcc * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

already_AddRefed<nsIIccService>
NS_CreateIccService();

/* starting interface:    nsIIcc */
#define NS_IICC_IID_STR "1791f102-b081-4435-8555-37eb035fa4e2"

#define NS_IICC_IID \
  {0x1791f102, 0xb081, 0x4435, \
    { 0x85, 0x55, 0x37, 0xeb, 0x03, 0x5f, 0xa4, 0xe2 }}

class NS_NO_VTABLE nsIIcc : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IICC_IID)

  enum {
    CARD_STATE_UNKNOWN = 0U,
    CARD_STATE_READY = 1U,
    CARD_STATE_PIN_REQUIRED = 2U,
    CARD_STATE_PUK_REQUIRED = 3U,
    CARD_STATE_PERMANENT_BLOCKED = 4U,
    CARD_STATE_PERSONALIZATION_IN_PROGRESS = 5U,
    CARD_STATE_PERSONALIZATION_READY = 6U,
    CARD_STATE_NETWORK_LOCKED = 7U,
    CARD_STATE_NETWORK_SUBSET_LOCKED = 8U,
    CARD_STATE_CORPORATE_LOCKED = 9U,
    CARD_STATE_SERVICE_PROVIDER_LOCKED = 10U,
    CARD_STATE_SIM_LOCKED = 11U,
    CARD_STATE_NETWORK_PUK_REQUIRED = 12U,
    CARD_STATE_NETWORK_SUBSET_PUK_REQUIRED = 13U,
    CARD_STATE_CORPORATE_PUK_REQUIRED = 14U,
    CARD_STATE_SERVICE_PROVIDER_PUK_REQUIRED = 15U,
    CARD_STATE_SIM_PUK_REQUIRED = 16U,
    CARD_STATE_NETWORK1_LOCKED = 17U,
    CARD_STATE_NETWORK2_LOCKED = 18U,
    CARD_STATE_HRPD_NETWORK_LOCKED = 19U,
    CARD_STATE_RUIM_CORPORATE_LOCKED = 20U,
    CARD_STATE_RUIM_SERVICE_PROVIDER_LOCKED = 21U,
    CARD_STATE_RUIM_LOCKED = 22U,
    CARD_STATE_NETWORK1_PUK_REQUIRED = 23U,
    CARD_STATE_NETWORK2_PUK_REQUIRED = 24U,
    CARD_STATE_HRPD_NETWORK_PUK_REQUIRED = 25U,
    CARD_STATE_RUIM_CORPORATE_PUK_REQUIRED = 26U,
    CARD_STATE_RUIM_SERVICE_PROVIDER_PUK_REQUIRED = 27U,
    CARD_STATE_RUIM_PUK_REQUIRED = 28U,
    CARD_STATE_ILLEGAL = 29U,
    CARD_STATE_UNDETECTED = 4294967295U,
    CARD_LOCK_TYPE_PIN = 0U,
    CARD_LOCK_TYPE_PIN2 = 1U,
    CARD_LOCK_TYPE_PUK = 2U,
    CARD_LOCK_TYPE_PUK2 = 3U,
    CARD_LOCK_TYPE_NCK = 4U,
    CARD_LOCK_TYPE_NSCK = 5U,
    CARD_LOCK_TYPE_NCK1 = 6U,
    CARD_LOCK_TYPE_NCK2 = 7U,
    CARD_LOCK_TYPE_HNCK = 8U,
    CARD_LOCK_TYPE_CCK = 9U,
    CARD_LOCK_TYPE_SPCK = 10U,
    CARD_LOCK_TYPE_PCK = 11U,
    CARD_LOCK_TYPE_RCCK = 12U,
    CARD_LOCK_TYPE_RSPCK = 13U,
    CARD_LOCK_TYPE_NCK_PUK = 14U,
    CARD_LOCK_TYPE_NSCK_PUK = 15U,
    CARD_LOCK_TYPE_NCK1_PUK = 16U,
    CARD_LOCK_TYPE_NCK2_PUK = 17U,
    CARD_LOCK_TYPE_HNCK_PUK = 18U,
    CARD_LOCK_TYPE_CCK_PUK = 19U,
    CARD_LOCK_TYPE_SPCK_PUK = 20U,
    CARD_LOCK_TYPE_PCK_PUK = 21U,
    CARD_LOCK_TYPE_RCCK_PUK = 22U,
    CARD_LOCK_TYPE_RSPCK_PUK = 23U,
    CARD_LOCK_TYPE_FDN = 24U,
    CARD_CONTACT_TYPE_ADN = 0U,
    CARD_CONTACT_TYPE_FDN = 1U,
    CARD_CONTACT_TYPE_SDN = 2U,
    CARD_MVNO_TYPE_IMSI = 0U,
    CARD_MVNO_TYPE_SPN = 1U,
    CARD_MVNO_TYPE_GID = 2U,
    CARD_SERVICE_FDN = 0U,
    CONTACT_TYPE_ADN = 0U,
    CONTACT_TYPE_FDN = 1U,
    CONTACT_TYPE_SDN = 2U
  };

  /* void registerListener (in nsIIccListener aListener); */
  NS_IMETHOD RegisterListener(nsIIccListener *aListener) = 0;

  /* void unregisterListener (in nsIIccListener aListener); */
  NS_IMETHOD UnregisterListener(nsIIccListener *aListener) = 0;

  /* readonly attribute nsIIccInfo iccInfo; */
  NS_IMETHOD GetIccInfo(nsIIccInfo * *aIccInfo) = 0;

  /* readonly attribute unsigned long cardState; */
  NS_IMETHOD GetCardState(uint32_t *aCardState) = 0;

  /* readonly attribute DOMString imsi; */
  NS_IMETHOD GetImsi(nsAString & aImsi) = 0;

  /* void getCardLockEnabled (in unsigned long aLockType, in nsIIccCallback aCallback); */
  NS_IMETHOD GetCardLockEnabled(uint32_t aLockType, nsIIccCallback *aCallback) = 0;

  /* void unlockCardLock (in unsigned long aLockType, in DOMString aPassword, in DOMString aNewPin, in nsIIccCallback aCallback); */
  NS_IMETHOD UnlockCardLock(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPin, nsIIccCallback *aCallback) = 0;

  /* void setCardLockEnabled (in unsigned long aLockType, in DOMString aPassword, in boolean aEnabled, in nsIIccCallback aCallback); */
  NS_IMETHOD SetCardLockEnabled(uint32_t aLockType, const nsAString & aPassword, bool aEnabled, nsIIccCallback *aCallback) = 0;

  /* void changeCardLockPassword (in unsigned long aLockType, in DOMString aPassword, in DOMString aNewPassword, in nsIIccCallback aCallback); */
  NS_IMETHOD ChangeCardLockPassword(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPassword, nsIIccCallback *aCallback) = 0;

  /* void getCardLockRetryCount (in unsigned long aLockType, in nsIIccCallback aCallback); */
  NS_IMETHOD GetCardLockRetryCount(uint32_t aLockType, nsIIccCallback *aCallback) = 0;

  /* void matchMvno (in unsigned long aMvnoType, in DOMString aMvnoData, in nsIIccCallback aCallback); */
  NS_IMETHOD MatchMvno(uint32_t aMvnoType, const nsAString & aMvnoData, nsIIccCallback *aCallback) = 0;

  /* void getServiceStateEnabled (in unsigned long aService, in nsIIccCallback aCallback); */
  NS_IMETHOD GetServiceStateEnabled(uint32_t aService, nsIIccCallback *aCallback) = 0;

  /* void iccOpenChannel (in DOMString aAid, in nsIIccChannelCallback aCallback); */
  NS_IMETHOD IccOpenChannel(const nsAString & aAid, nsIIccChannelCallback *aCallback) = 0;

  /* void iccExchangeAPDU (in long aChannel, in octet aCla, in octet aIns, in octet aP1, in octet aP2, in short aP3, in DOMString aData, in nsIIccChannelCallback aCallback); */
  NS_IMETHOD IccExchangeAPDU(int32_t aChannel, uint8_t aCla, uint8_t aIns, uint8_t aP1, uint8_t aP2, int16_t aP3, const nsAString & aData, nsIIccChannelCallback *aCallback) = 0;

  /* void iccCloseChannel (in long aChannel, in nsIIccChannelCallback aCallback); */
  NS_IMETHOD IccCloseChannel(int32_t aChannel, nsIIccChannelCallback *aCallback) = 0;

  /* void sendStkResponse (in nsIStkProactiveCmd aCommand, in nsIStkTerminalResponse aResponse); */
  NS_IMETHOD SendStkResponse(nsIStkProactiveCmd *aCommand, nsIStkTerminalResponse *aResponse) = 0;

  /* void sendStkMenuSelection (in unsigned short aItemIdentifier, in boolean aHelpRequested); */
  NS_IMETHOD SendStkMenuSelection(uint16_t aItemIdentifier, bool aHelpRequested) = 0;

  /* void sendStkTimerExpiration (in unsigned short aTimerId, in unsigned long aTimerValue); */
  NS_IMETHOD SendStkTimerExpiration(uint16_t aTimerId, uint32_t aTimerValue) = 0;

  /* void sendStkEventDownload (in nsIStkDownloadEvent aEvent); */
  NS_IMETHOD SendStkEventDownload(nsIStkDownloadEvent *aEvent) = 0;

  /* void readContacts (in unsigned long aContactType, in nsIIccCallback aCallback); */
  NS_IMETHOD ReadContacts(uint32_t aContactType, nsIIccCallback *aCallback) = 0;

  /* void updateContact (in unsigned long aContactType, in nsIIccContact aContact, in DOMString aPin2, in nsIIccCallback aCallback); */
  NS_IMETHOD UpdateContact(uint32_t aContactType, nsIIccContact *aContact, const nsAString & aPin2, nsIIccCallback *aCallback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIcc, NS_IICC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIICC \
  NS_IMETHOD RegisterListener(nsIIccListener *aListener) override; \
  NS_IMETHOD UnregisterListener(nsIIccListener *aListener) override; \
  NS_IMETHOD GetIccInfo(nsIIccInfo * *aIccInfo) override; \
  NS_IMETHOD GetCardState(uint32_t *aCardState) override; \
  NS_IMETHOD GetImsi(nsAString & aImsi) override; \
  NS_IMETHOD GetCardLockEnabled(uint32_t aLockType, nsIIccCallback *aCallback) override; \
  NS_IMETHOD UnlockCardLock(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPin, nsIIccCallback *aCallback) override; \
  NS_IMETHOD SetCardLockEnabled(uint32_t aLockType, const nsAString & aPassword, bool aEnabled, nsIIccCallback *aCallback) override; \
  NS_IMETHOD ChangeCardLockPassword(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPassword, nsIIccCallback *aCallback) override; \
  NS_IMETHOD GetCardLockRetryCount(uint32_t aLockType, nsIIccCallback *aCallback) override; \
  NS_IMETHOD MatchMvno(uint32_t aMvnoType, const nsAString & aMvnoData, nsIIccCallback *aCallback) override; \
  NS_IMETHOD GetServiceStateEnabled(uint32_t aService, nsIIccCallback *aCallback) override; \
  NS_IMETHOD IccOpenChannel(const nsAString & aAid, nsIIccChannelCallback *aCallback) override; \
  NS_IMETHOD IccExchangeAPDU(int32_t aChannel, uint8_t aCla, uint8_t aIns, uint8_t aP1, uint8_t aP2, int16_t aP3, const nsAString & aData, nsIIccChannelCallback *aCallback) override; \
  NS_IMETHOD IccCloseChannel(int32_t aChannel, nsIIccChannelCallback *aCallback) override; \
  NS_IMETHOD SendStkResponse(nsIStkProactiveCmd *aCommand, nsIStkTerminalResponse *aResponse) override; \
  NS_IMETHOD SendStkMenuSelection(uint16_t aItemIdentifier, bool aHelpRequested) override; \
  NS_IMETHOD SendStkTimerExpiration(uint16_t aTimerId, uint32_t aTimerValue) override; \
  NS_IMETHOD SendStkEventDownload(nsIStkDownloadEvent *aEvent) override; \
  NS_IMETHOD ReadContacts(uint32_t aContactType, nsIIccCallback *aCallback) override; \
  NS_IMETHOD UpdateContact(uint32_t aContactType, nsIIccContact *aContact, const nsAString & aPin2, nsIIccCallback *aCallback) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIICC \
  NS_METHOD RegisterListener(nsIIccListener *aListener); \
  NS_METHOD UnregisterListener(nsIIccListener *aListener); \
  NS_METHOD GetIccInfo(nsIIccInfo * *aIccInfo); \
  NS_METHOD GetCardState(uint32_t *aCardState); \
  NS_METHOD GetImsi(nsAString & aImsi); \
  NS_METHOD GetCardLockEnabled(uint32_t aLockType, nsIIccCallback *aCallback); \
  NS_METHOD UnlockCardLock(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPin, nsIIccCallback *aCallback); \
  NS_METHOD SetCardLockEnabled(uint32_t aLockType, const nsAString & aPassword, bool aEnabled, nsIIccCallback *aCallback); \
  NS_METHOD ChangeCardLockPassword(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPassword, nsIIccCallback *aCallback); \
  NS_METHOD GetCardLockRetryCount(uint32_t aLockType, nsIIccCallback *aCallback); \
  NS_METHOD MatchMvno(uint32_t aMvnoType, const nsAString & aMvnoData, nsIIccCallback *aCallback); \
  NS_METHOD GetServiceStateEnabled(uint32_t aService, nsIIccCallback *aCallback); \
  NS_METHOD IccOpenChannel(const nsAString & aAid, nsIIccChannelCallback *aCallback); \
  NS_METHOD IccExchangeAPDU(int32_t aChannel, uint8_t aCla, uint8_t aIns, uint8_t aP1, uint8_t aP2, int16_t aP3, const nsAString & aData, nsIIccChannelCallback *aCallback); \
  NS_METHOD IccCloseChannel(int32_t aChannel, nsIIccChannelCallback *aCallback); \
  NS_METHOD SendStkResponse(nsIStkProactiveCmd *aCommand, nsIStkTerminalResponse *aResponse); \
  NS_METHOD SendStkMenuSelection(uint16_t aItemIdentifier, bool aHelpRequested); \
  NS_METHOD SendStkTimerExpiration(uint16_t aTimerId, uint32_t aTimerValue); \
  NS_METHOD SendStkEventDownload(nsIStkDownloadEvent *aEvent); \
  NS_METHOD ReadContacts(uint32_t aContactType, nsIIccCallback *aCallback); \
  NS_METHOD UpdateContact(uint32_t aContactType, nsIIccContact *aContact, const nsAString & aPin2, nsIIccCallback *aCallback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIICC(_to) \
  NS_IMETHOD RegisterListener(nsIIccListener *aListener) override { return _to RegisterListener(aListener); } \
  NS_IMETHOD UnregisterListener(nsIIccListener *aListener) override { return _to UnregisterListener(aListener); } \
  NS_IMETHOD GetIccInfo(nsIIccInfo * *aIccInfo) override { return _to GetIccInfo(aIccInfo); } \
  NS_IMETHOD GetCardState(uint32_t *aCardState) override { return _to GetCardState(aCardState); } \
  NS_IMETHOD GetImsi(nsAString & aImsi) override { return _to GetImsi(aImsi); } \
  NS_IMETHOD GetCardLockEnabled(uint32_t aLockType, nsIIccCallback *aCallback) override { return _to GetCardLockEnabled(aLockType, aCallback); } \
  NS_IMETHOD UnlockCardLock(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPin, nsIIccCallback *aCallback) override { return _to UnlockCardLock(aLockType, aPassword, aNewPin, aCallback); } \
  NS_IMETHOD SetCardLockEnabled(uint32_t aLockType, const nsAString & aPassword, bool aEnabled, nsIIccCallback *aCallback) override { return _to SetCardLockEnabled(aLockType, aPassword, aEnabled, aCallback); } \
  NS_IMETHOD ChangeCardLockPassword(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPassword, nsIIccCallback *aCallback) override { return _to ChangeCardLockPassword(aLockType, aPassword, aNewPassword, aCallback); } \
  NS_IMETHOD GetCardLockRetryCount(uint32_t aLockType, nsIIccCallback *aCallback) override { return _to GetCardLockRetryCount(aLockType, aCallback); } \
  NS_IMETHOD MatchMvno(uint32_t aMvnoType, const nsAString & aMvnoData, nsIIccCallback *aCallback) override { return _to MatchMvno(aMvnoType, aMvnoData, aCallback); } \
  NS_IMETHOD GetServiceStateEnabled(uint32_t aService, nsIIccCallback *aCallback) override { return _to GetServiceStateEnabled(aService, aCallback); } \
  NS_IMETHOD IccOpenChannel(const nsAString & aAid, nsIIccChannelCallback *aCallback) override { return _to IccOpenChannel(aAid, aCallback); } \
  NS_IMETHOD IccExchangeAPDU(int32_t aChannel, uint8_t aCla, uint8_t aIns, uint8_t aP1, uint8_t aP2, int16_t aP3, const nsAString & aData, nsIIccChannelCallback *aCallback) override { return _to IccExchangeAPDU(aChannel, aCla, aIns, aP1, aP2, aP3, aData, aCallback); } \
  NS_IMETHOD IccCloseChannel(int32_t aChannel, nsIIccChannelCallback *aCallback) override { return _to IccCloseChannel(aChannel, aCallback); } \
  NS_IMETHOD SendStkResponse(nsIStkProactiveCmd *aCommand, nsIStkTerminalResponse *aResponse) override { return _to SendStkResponse(aCommand, aResponse); } \
  NS_IMETHOD SendStkMenuSelection(uint16_t aItemIdentifier, bool aHelpRequested) override { return _to SendStkMenuSelection(aItemIdentifier, aHelpRequested); } \
  NS_IMETHOD SendStkTimerExpiration(uint16_t aTimerId, uint32_t aTimerValue) override { return _to SendStkTimerExpiration(aTimerId, aTimerValue); } \
  NS_IMETHOD SendStkEventDownload(nsIStkDownloadEvent *aEvent) override { return _to SendStkEventDownload(aEvent); } \
  NS_IMETHOD ReadContacts(uint32_t aContactType, nsIIccCallback *aCallback) override { return _to ReadContacts(aContactType, aCallback); } \
  NS_IMETHOD UpdateContact(uint32_t aContactType, nsIIccContact *aContact, const nsAString & aPin2, nsIIccCallback *aCallback) override { return _to UpdateContact(aContactType, aContact, aPin2, aCallback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIICC(_to) \
  NS_IMETHOD RegisterListener(nsIIccListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterListener(aListener); } \
  NS_IMETHOD UnregisterListener(nsIIccListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterListener(aListener); } \
  NS_IMETHOD GetIccInfo(nsIIccInfo * *aIccInfo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIccInfo(aIccInfo); } \
  NS_IMETHOD GetCardState(uint32_t *aCardState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardState(aCardState); } \
  NS_IMETHOD GetImsi(nsAString & aImsi) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImsi(aImsi); } \
  NS_IMETHOD GetCardLockEnabled(uint32_t aLockType, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardLockEnabled(aLockType, aCallback); } \
  NS_IMETHOD UnlockCardLock(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPin, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UnlockCardLock(aLockType, aPassword, aNewPin, aCallback); } \
  NS_IMETHOD SetCardLockEnabled(uint32_t aLockType, const nsAString & aPassword, bool aEnabled, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCardLockEnabled(aLockType, aPassword, aEnabled, aCallback); } \
  NS_IMETHOD ChangeCardLockPassword(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPassword, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ChangeCardLockPassword(aLockType, aPassword, aNewPassword, aCallback); } \
  NS_IMETHOD GetCardLockRetryCount(uint32_t aLockType, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCardLockRetryCount(aLockType, aCallback); } \
  NS_IMETHOD MatchMvno(uint32_t aMvnoType, const nsAString & aMvnoData, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MatchMvno(aMvnoType, aMvnoData, aCallback); } \
  NS_IMETHOD GetServiceStateEnabled(uint32_t aService, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetServiceStateEnabled(aService, aCallback); } \
  NS_IMETHOD IccOpenChannel(const nsAString & aAid, nsIIccChannelCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IccOpenChannel(aAid, aCallback); } \
  NS_IMETHOD IccExchangeAPDU(int32_t aChannel, uint8_t aCla, uint8_t aIns, uint8_t aP1, uint8_t aP2, int16_t aP3, const nsAString & aData, nsIIccChannelCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IccExchangeAPDU(aChannel, aCla, aIns, aP1, aP2, aP3, aData, aCallback); } \
  NS_IMETHOD IccCloseChannel(int32_t aChannel, nsIIccChannelCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IccCloseChannel(aChannel, aCallback); } \
  NS_IMETHOD SendStkResponse(nsIStkProactiveCmd *aCommand, nsIStkTerminalResponse *aResponse) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendStkResponse(aCommand, aResponse); } \
  NS_IMETHOD SendStkMenuSelection(uint16_t aItemIdentifier, bool aHelpRequested) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendStkMenuSelection(aItemIdentifier, aHelpRequested); } \
  NS_IMETHOD SendStkTimerExpiration(uint16_t aTimerId, uint32_t aTimerValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendStkTimerExpiration(aTimerId, aTimerValue); } \
  NS_IMETHOD SendStkEventDownload(nsIStkDownloadEvent *aEvent) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SendStkEventDownload(aEvent); } \
  NS_IMETHOD ReadContacts(uint32_t aContactType, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadContacts(aContactType, aCallback); } \
  NS_IMETHOD UpdateContact(uint32_t aContactType, nsIIccContact *aContact, const nsAString & aPin2, nsIIccCallback *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateContact(aContactType, aContact, aPin2, aCallback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIcc : public nsIIcc
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIICC

  nsIcc();

private:
  ~nsIcc();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIcc, nsIIcc)

nsIcc::nsIcc()
{
  /* member initializers and constructor code */
}

nsIcc::~nsIcc()
{
  /* destructor code */
}

/* void registerListener (in nsIIccListener aListener); */
NS_IMETHODIMP nsIcc::RegisterListener(nsIIccListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterListener (in nsIIccListener aListener); */
NS_IMETHODIMP nsIcc::UnregisterListener(nsIIccListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIIccInfo iccInfo; */
NS_IMETHODIMP nsIcc::GetIccInfo(nsIIccInfo * *aIccInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long cardState; */
NS_IMETHODIMP nsIcc::GetCardState(uint32_t *aCardState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString imsi; */
NS_IMETHODIMP nsIcc::GetImsi(nsAString & aImsi)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCardLockEnabled (in unsigned long aLockType, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::GetCardLockEnabled(uint32_t aLockType, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unlockCardLock (in unsigned long aLockType, in DOMString aPassword, in DOMString aNewPin, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::UnlockCardLock(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPin, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCardLockEnabled (in unsigned long aLockType, in DOMString aPassword, in boolean aEnabled, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::SetCardLockEnabled(uint32_t aLockType, const nsAString & aPassword, bool aEnabled, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void changeCardLockPassword (in unsigned long aLockType, in DOMString aPassword, in DOMString aNewPassword, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::ChangeCardLockPassword(uint32_t aLockType, const nsAString & aPassword, const nsAString & aNewPassword, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCardLockRetryCount (in unsigned long aLockType, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::GetCardLockRetryCount(uint32_t aLockType, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void matchMvno (in unsigned long aMvnoType, in DOMString aMvnoData, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::MatchMvno(uint32_t aMvnoType, const nsAString & aMvnoData, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getServiceStateEnabled (in unsigned long aService, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::GetServiceStateEnabled(uint32_t aService, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void iccOpenChannel (in DOMString aAid, in nsIIccChannelCallback aCallback); */
NS_IMETHODIMP nsIcc::IccOpenChannel(const nsAString & aAid, nsIIccChannelCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void iccExchangeAPDU (in long aChannel, in octet aCla, in octet aIns, in octet aP1, in octet aP2, in short aP3, in DOMString aData, in nsIIccChannelCallback aCallback); */
NS_IMETHODIMP nsIcc::IccExchangeAPDU(int32_t aChannel, uint8_t aCla, uint8_t aIns, uint8_t aP1, uint8_t aP2, int16_t aP3, const nsAString & aData, nsIIccChannelCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void iccCloseChannel (in long aChannel, in nsIIccChannelCallback aCallback); */
NS_IMETHODIMP nsIcc::IccCloseChannel(int32_t aChannel, nsIIccChannelCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendStkResponse (in nsIStkProactiveCmd aCommand, in nsIStkTerminalResponse aResponse); */
NS_IMETHODIMP nsIcc::SendStkResponse(nsIStkProactiveCmd *aCommand, nsIStkTerminalResponse *aResponse)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendStkMenuSelection (in unsigned short aItemIdentifier, in boolean aHelpRequested); */
NS_IMETHODIMP nsIcc::SendStkMenuSelection(uint16_t aItemIdentifier, bool aHelpRequested)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendStkTimerExpiration (in unsigned short aTimerId, in unsigned long aTimerValue); */
NS_IMETHODIMP nsIcc::SendStkTimerExpiration(uint16_t aTimerId, uint32_t aTimerValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sendStkEventDownload (in nsIStkDownloadEvent aEvent); */
NS_IMETHODIMP nsIcc::SendStkEventDownload(nsIStkDownloadEvent *aEvent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readContacts (in unsigned long aContactType, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::ReadContacts(uint32_t aContactType, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateContact (in unsigned long aContactType, in nsIIccContact aContact, in DOMString aPin2, in nsIIccCallback aCallback); */
NS_IMETHODIMP nsIcc::UpdateContact(uint32_t aContactType, nsIIccContact *aContact, const nsAString & aPin2, nsIIccCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIccService_h__ */
