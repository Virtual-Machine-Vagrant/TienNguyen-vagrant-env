/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsITVService.idl
 */

#ifndef __gen_nsITVService_h__
#define __gen_nsITVService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "mozilla/Assertions.h"
#include "mozilla/DebugOnly.h"

#include "mozilla/Assertions.h"
#include "mozilla/DebugOnly.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

#define TV_TUNER_DATA_CID \
  { 0x1f36be28, 0xf9fe, 0x2dc3, { 0xbf, 0x2a, 0x17, 0x97, 0x93, 0x40, 0xff, 0xe1 } }
#define TV_TUNER_DATA_CONTRACTID \
  "@mozilla.org/tv/tvtunerdata;1"

/* starting interface:    nsITVTunerData */
#define NS_ITVTUNERDATA_IID_STR "c6d39e86-022b-4db5-b0df-602abfbeac69"

#define NS_ITVTUNERDATA_IID \
  {0xc6d39e86, 0x022b, 0x4db5, \
    { 0xb0, 0xdf, 0x60, 0x2a, 0xbf, 0xbe, 0xac, 0x69 }}

class NS_NO_VTABLE nsITVTunerData : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITVTUNERDATA_IID)

  enum {
    TV_STREAM_TYPE_SIMULATOR = 0U,
    TV_STREAM_TYPE_HW = 1U
  };

  /* attribute unsigned short streamType; */
  NS_IMETHOD GetStreamType(uint16_t *aStreamType) = 0;
  NS_IMETHOD SetStreamType(uint16_t aStreamType) = 0;

  /* attribute DOMString id; */
  NS_IMETHOD GetId(nsAString & aId) = 0;
  NS_IMETHOD SetId(const nsAString & aId) = 0;

  /* void getSupportedSourceTypes ([optional] out unsigned long count, [array, size_is (count), retval] out string sourceTypes); */
  NS_IMETHOD GetSupportedSourceTypes(uint32_t *count, char * **sourceTypes) = 0;

  /* void setSupportedSourceTypes (in unsigned long count, [array, size_is (count)] in string sourceTypes); */
  NS_IMETHOD SetSupportedSourceTypes(uint32_t count, const char * *sourceTypes) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITVTunerData, NS_ITVTUNERDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITVTUNERDATA \
  NS_IMETHOD GetStreamType(uint16_t *aStreamType) override; \
  NS_IMETHOD SetStreamType(uint16_t aStreamType) override; \
  NS_IMETHOD GetId(nsAString & aId) override; \
  NS_IMETHOD SetId(const nsAString & aId) override; \
  NS_IMETHOD GetSupportedSourceTypes(uint32_t *count, char * **sourceTypes) override; \
  NS_IMETHOD SetSupportedSourceTypes(uint32_t count, const char * *sourceTypes) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITVTUNERDATA \
  NS_METHOD GetStreamType(uint16_t *aStreamType); \
  NS_METHOD SetStreamType(uint16_t aStreamType); \
  NS_METHOD GetId(nsAString & aId); \
  NS_METHOD SetId(const nsAString & aId); \
  NS_METHOD GetSupportedSourceTypes(uint32_t *count, char * **sourceTypes); \
  NS_METHOD SetSupportedSourceTypes(uint32_t count, const char * *sourceTypes); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITVTUNERDATA(_to) \
  NS_IMETHOD GetStreamType(uint16_t *aStreamType) override { return _to GetStreamType(aStreamType); } \
  NS_IMETHOD SetStreamType(uint16_t aStreamType) override { return _to SetStreamType(aStreamType); } \
  NS_IMETHOD GetId(nsAString & aId) override { return _to GetId(aId); } \
  NS_IMETHOD SetId(const nsAString & aId) override { return _to SetId(aId); } \
  NS_IMETHOD GetSupportedSourceTypes(uint32_t *count, char * **sourceTypes) override { return _to GetSupportedSourceTypes(count, sourceTypes); } \
  NS_IMETHOD SetSupportedSourceTypes(uint32_t count, const char * *sourceTypes) override { return _to SetSupportedSourceTypes(count, sourceTypes); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITVTUNERDATA(_to) \
  NS_IMETHOD GetStreamType(uint16_t *aStreamType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStreamType(aStreamType); } \
  NS_IMETHOD SetStreamType(uint16_t aStreamType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStreamType(aStreamType); } \
  NS_IMETHOD GetId(nsAString & aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_IMETHOD SetId(const nsAString & aId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetId(aId); } \
  NS_IMETHOD GetSupportedSourceTypes(uint32_t *count, char * **sourceTypes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSupportedSourceTypes(count, sourceTypes); } \
  NS_IMETHOD SetSupportedSourceTypes(uint32_t count, const char * *sourceTypes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSupportedSourceTypes(count, sourceTypes); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTVTunerData : public nsITVTunerData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITVTUNERDATA

  nsTVTunerData();

private:
  ~nsTVTunerData();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTVTunerData, nsITVTunerData)

nsTVTunerData::nsTVTunerData()
{
  /* member initializers and constructor code */
}

nsTVTunerData::~nsTVTunerData()
{
  /* destructor code */
}

/* attribute unsigned short streamType; */
NS_IMETHODIMP nsTVTunerData::GetStreamType(uint16_t *aStreamType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVTunerData::SetStreamType(uint16_t aStreamType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString id; */
NS_IMETHODIMP nsTVTunerData::GetId(nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVTunerData::SetId(const nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getSupportedSourceTypes ([optional] out unsigned long count, [array, size_is (count), retval] out string sourceTypes); */
NS_IMETHODIMP nsTVTunerData::GetSupportedSourceTypes(uint32_t *count, char * **sourceTypes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSupportedSourceTypes (in unsigned long count, [array, size_is (count)] in string sourceTypes); */
NS_IMETHODIMP nsTVTunerData::SetSupportedSourceTypes(uint32_t count, const char * *sourceTypes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define TV_CHANNEL_DATA_CID \
  { 0xdafe6881, 0x0964, 0xdb5b, { 0x59, 0xc6, 0x20, 0x0b, 0xa6, 0x59, 0xe6, 0x68 } }
#define TV_CHANNEL_DATA_CONTRACTID \
  "@mozilla.org/tv/tvchanneldata;1"

/* starting interface:    nsITVChannelData */
#define NS_ITVCHANNELDATA_IID_STR "5d01ea74-2db6-11e4-9dba-74d02b97e723"

#define NS_ITVCHANNELDATA_IID \
  {0x5d01ea74, 0x2db6, 0x11e4, \
    { 0x9d, 0xba, 0x74, 0xd0, 0x2b, 0x97, 0xe7, 0x23 }}

class NS_NO_VTABLE nsITVChannelData : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITVCHANNELDATA_IID)

  /* attribute DOMString networkId; */
  NS_IMETHOD GetNetworkId(nsAString & aNetworkId) = 0;
  NS_IMETHOD SetNetworkId(const nsAString & aNetworkId) = 0;

  /* attribute DOMString transportStreamId; */
  NS_IMETHOD GetTransportStreamId(nsAString & aTransportStreamId) = 0;
  NS_IMETHOD SetTransportStreamId(const nsAString & aTransportStreamId) = 0;

  /* attribute DOMString serviceId; */
  NS_IMETHOD GetServiceId(nsAString & aServiceId) = 0;
  NS_IMETHOD SetServiceId(const nsAString & aServiceId) = 0;

  /* attribute DOMString type; */
  NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString number; */
  NS_IMETHOD GetNumber(nsAString & aNumber) = 0;
  NS_IMETHOD SetNumber(const nsAString & aNumber) = 0;

  /* attribute DOMString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* [infallible] attribute boolean isEmergency; */
  NS_IMETHOD GetIsEmergency(bool *aIsEmergency) = 0;
  inline bool GetIsEmergency()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsEmergency(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }
  NS_IMETHOD SetIsEmergency(bool aIsEmergency) = 0;

  /* [infallible] attribute boolean isFree; */
  NS_IMETHOD GetIsFree(bool *aIsFree) = 0;
  inline bool GetIsFree()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsFree(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }
  NS_IMETHOD SetIsFree(bool aIsFree) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITVChannelData, NS_ITVCHANNELDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITVCHANNELDATA \
  NS_IMETHOD GetNetworkId(nsAString & aNetworkId) override; \
  NS_IMETHOD SetNetworkId(const nsAString & aNetworkId) override; \
  NS_IMETHOD GetTransportStreamId(nsAString & aTransportStreamId) override; \
  NS_IMETHOD SetTransportStreamId(const nsAString & aTransportStreamId) override; \
  NS_IMETHOD GetServiceId(nsAString & aServiceId) override; \
  NS_IMETHOD SetServiceId(const nsAString & aServiceId) override; \
  NS_IMETHOD GetType(nsAString & aType) override; \
  NS_IMETHOD SetType(const nsAString & aType) override; \
  NS_IMETHOD GetNumber(nsAString & aNumber) override; \
  NS_IMETHOD SetNumber(const nsAString & aNumber) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD SetName(const nsAString & aName) override; \
  using nsITVChannelData::GetIsEmergency; \
  NS_IMETHOD GetIsEmergency(bool *aIsEmergency) override; \
  NS_IMETHOD SetIsEmergency(bool aIsEmergency) override; \
  using nsITVChannelData::GetIsFree; \
  NS_IMETHOD GetIsFree(bool *aIsFree) override; \
  NS_IMETHOD SetIsFree(bool aIsFree) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITVCHANNELDATA \
  NS_METHOD GetNetworkId(nsAString & aNetworkId); \
  NS_METHOD SetNetworkId(const nsAString & aNetworkId); \
  NS_METHOD GetTransportStreamId(nsAString & aTransportStreamId); \
  NS_METHOD SetTransportStreamId(const nsAString & aTransportStreamId); \
  NS_METHOD GetServiceId(nsAString & aServiceId); \
  NS_METHOD SetServiceId(const nsAString & aServiceId); \
  NS_METHOD GetType(nsAString & aType); \
  NS_METHOD SetType(const nsAString & aType); \
  NS_METHOD GetNumber(nsAString & aNumber); \
  NS_METHOD SetNumber(const nsAString & aNumber); \
  NS_METHOD GetName(nsAString & aName); \
  NS_METHOD SetName(const nsAString & aName); \
  using nsITVChannelData::GetIsEmergency; \
  NS_METHOD GetIsEmergency(bool *aIsEmergency); \
  NS_METHOD SetIsEmergency(bool aIsEmergency); \
  using nsITVChannelData::GetIsFree; \
  NS_METHOD GetIsFree(bool *aIsFree); \
  NS_METHOD SetIsFree(bool aIsFree); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITVCHANNELDATA(_to) \
  NS_IMETHOD GetNetworkId(nsAString & aNetworkId) override { return _to GetNetworkId(aNetworkId); } \
  NS_IMETHOD SetNetworkId(const nsAString & aNetworkId) override { return _to SetNetworkId(aNetworkId); } \
  NS_IMETHOD GetTransportStreamId(nsAString & aTransportStreamId) override { return _to GetTransportStreamId(aTransportStreamId); } \
  NS_IMETHOD SetTransportStreamId(const nsAString & aTransportStreamId) override { return _to SetTransportStreamId(aTransportStreamId); } \
  NS_IMETHOD GetServiceId(nsAString & aServiceId) override { return _to GetServiceId(aServiceId); } \
  NS_IMETHOD SetServiceId(const nsAString & aServiceId) override { return _to SetServiceId(aServiceId); } \
  NS_IMETHOD GetType(nsAString & aType) override { return _to GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) override { return _to SetType(aType); } \
  NS_IMETHOD GetNumber(nsAString & aNumber) override { return _to GetNumber(aNumber); } \
  NS_IMETHOD SetNumber(const nsAString & aNumber) override { return _to SetNumber(aNumber); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return _to SetName(aName); } \
  using nsITVChannelData::GetIsEmergency; \
  NS_IMETHOD GetIsEmergency(bool *aIsEmergency) override { return _to GetIsEmergency(aIsEmergency); } \
  NS_IMETHOD SetIsEmergency(bool aIsEmergency) override { return _to SetIsEmergency(aIsEmergency); } \
  using nsITVChannelData::GetIsFree; \
  NS_IMETHOD GetIsFree(bool *aIsFree) override { return _to GetIsFree(aIsFree); } \
  NS_IMETHOD SetIsFree(bool aIsFree) override { return _to SetIsFree(aIsFree); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITVCHANNELDATA(_to) \
  NS_IMETHOD GetNetworkId(nsAString & aNetworkId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNetworkId(aNetworkId); } \
  NS_IMETHOD SetNetworkId(const nsAString & aNetworkId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNetworkId(aNetworkId); } \
  NS_IMETHOD GetTransportStreamId(nsAString & aTransportStreamId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransportStreamId(aTransportStreamId); } \
  NS_IMETHOD SetTransportStreamId(const nsAString & aTransportStreamId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTransportStreamId(aTransportStreamId); } \
  NS_IMETHOD GetServiceId(nsAString & aServiceId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetServiceId(aServiceId); } \
  NS_IMETHOD SetServiceId(const nsAString & aServiceId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetServiceId(aServiceId); } \
  NS_IMETHOD GetType(nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD SetType(const nsAString & aType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_IMETHOD GetNumber(nsAString & aNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumber(aNumber); } \
  NS_IMETHOD SetNumber(const nsAString & aNumber) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNumber(aNumber); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD SetName(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_IMETHOD GetIsEmergency(bool *aIsEmergency) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsEmergency(aIsEmergency); } \
  NS_IMETHOD SetIsEmergency(bool aIsEmergency) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsEmergency(aIsEmergency); } \
  NS_IMETHOD GetIsFree(bool *aIsFree) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsFree(aIsFree); } \
  NS_IMETHOD SetIsFree(bool aIsFree) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsFree(aIsFree); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTVChannelData : public nsITVChannelData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITVCHANNELDATA

  nsTVChannelData();

private:
  ~nsTVChannelData();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTVChannelData, nsITVChannelData)

nsTVChannelData::nsTVChannelData()
{
  /* member initializers and constructor code */
}

nsTVChannelData::~nsTVChannelData()
{
  /* destructor code */
}

/* attribute DOMString networkId; */
NS_IMETHODIMP nsTVChannelData::GetNetworkId(nsAString & aNetworkId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetNetworkId(const nsAString & aNetworkId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString transportStreamId; */
NS_IMETHODIMP nsTVChannelData::GetTransportStreamId(nsAString & aTransportStreamId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetTransportStreamId(const nsAString & aTransportStreamId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString serviceId; */
NS_IMETHODIMP nsTVChannelData::GetServiceId(nsAString & aServiceId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetServiceId(const nsAString & aServiceId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString type; */
NS_IMETHODIMP nsTVChannelData::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString number; */
NS_IMETHODIMP nsTVChannelData::GetNumber(nsAString & aNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetNumber(const nsAString & aNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString name; */
NS_IMETHODIMP nsTVChannelData::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] attribute boolean isEmergency; */
NS_IMETHODIMP nsTVChannelData::GetIsEmergency(bool *aIsEmergency)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetIsEmergency(bool aIsEmergency)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] attribute boolean isFree; */
NS_IMETHODIMP nsTVChannelData::GetIsFree(bool *aIsFree)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVChannelData::SetIsFree(bool aIsFree)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define TV_PROGRAM_DATA_CID \
  { 0x11415eeb, 0x27a6, 0x1c04, { 0x91, 0x33, 0x3e, 0x0a, 0xdd, 0x48, 0x5d, 0xb3 } }
#define TV_PROGRAM_DATA_CONTRACTID \
  "@mozilla.org/tv/tvprogramdata;1"

/* starting interface:    nsITVProgramData */
#define NS_ITVPROGRAMDATA_IID_STR "ed65422e-2d97-11e4-89d6-74d02b97e723"

#define NS_ITVPROGRAMDATA_IID \
  {0xed65422e, 0x2d97, 0x11e4, \
    { 0x89, 0xd6, 0x74, 0xd0, 0x2b, 0x97, 0xe7, 0x23 }}

class NS_NO_VTABLE nsITVProgramData : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITVPROGRAMDATA_IID)

  /* attribute DOMString eventId; */
  NS_IMETHOD GetEventId(nsAString & aEventId) = 0;
  NS_IMETHOD SetEventId(const nsAString & aEventId) = 0;

  /* attribute DOMString title; */
  NS_IMETHOD GetTitle(nsAString & aTitle) = 0;
  NS_IMETHOD SetTitle(const nsAString & aTitle) = 0;

  /* [infallible] attribute unsigned long long startTime; */
  NS_IMETHOD GetStartTime(uint64_t *aStartTime) = 0;
  inline uint64_t GetStartTime()
  {
    uint64_t result;
    mozilla::DebugOnly<nsresult> rv = GetStartTime(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }
  NS_IMETHOD SetStartTime(uint64_t aStartTime) = 0;

  /* [infallible] attribute unsigned long long duration; */
  NS_IMETHOD GetDuration(uint64_t *aDuration) = 0;
  inline uint64_t GetDuration()
  {
    uint64_t result;
    mozilla::DebugOnly<nsresult> rv = GetDuration(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }
  NS_IMETHOD SetDuration(uint64_t aDuration) = 0;

  /* attribute DOMString description; */
  NS_IMETHOD GetDescription(nsAString & aDescription) = 0;
  NS_IMETHOD SetDescription(const nsAString & aDescription) = 0;

  /* attribute DOMString rating; */
  NS_IMETHOD GetRating(nsAString & aRating) = 0;
  NS_IMETHOD SetRating(const nsAString & aRating) = 0;

  /* void getAudioLanguages ([optional] out unsigned long count, [array, size_is (count), retval] out string languages); */
  NS_IMETHOD GetAudioLanguages(uint32_t *count, char * **languages) = 0;

  /* void setAudioLanguages (in unsigned long count, [array, size_is (count)] in string languages); */
  NS_IMETHOD SetAudioLanguages(uint32_t count, const char * *languages) = 0;

  /* void getSubtitleLanguages ([optional] out unsigned long count, [array, size_is (count), retval] out string languages); */
  NS_IMETHOD GetSubtitleLanguages(uint32_t *count, char * **languages) = 0;

  /* void setSubtitleLanguages (in unsigned long count, [array, size_is (count)] in string languages); */
  NS_IMETHOD SetSubtitleLanguages(uint32_t count, const char * *languages) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITVProgramData, NS_ITVPROGRAMDATA_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITVPROGRAMDATA \
  NS_IMETHOD GetEventId(nsAString & aEventId) override; \
  NS_IMETHOD SetEventId(const nsAString & aEventId) override; \
  NS_IMETHOD GetTitle(nsAString & aTitle) override; \
  NS_IMETHOD SetTitle(const nsAString & aTitle) override; \
  using nsITVProgramData::GetStartTime; \
  NS_IMETHOD GetStartTime(uint64_t *aStartTime) override; \
  NS_IMETHOD SetStartTime(uint64_t aStartTime) override; \
  using nsITVProgramData::GetDuration; \
  NS_IMETHOD GetDuration(uint64_t *aDuration) override; \
  NS_IMETHOD SetDuration(uint64_t aDuration) override; \
  NS_IMETHOD GetDescription(nsAString & aDescription) override; \
  NS_IMETHOD SetDescription(const nsAString & aDescription) override; \
  NS_IMETHOD GetRating(nsAString & aRating) override; \
  NS_IMETHOD SetRating(const nsAString & aRating) override; \
  NS_IMETHOD GetAudioLanguages(uint32_t *count, char * **languages) override; \
  NS_IMETHOD SetAudioLanguages(uint32_t count, const char * *languages) override; \
  NS_IMETHOD GetSubtitleLanguages(uint32_t *count, char * **languages) override; \
  NS_IMETHOD SetSubtitleLanguages(uint32_t count, const char * *languages) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITVPROGRAMDATA \
  NS_METHOD GetEventId(nsAString & aEventId); \
  NS_METHOD SetEventId(const nsAString & aEventId); \
  NS_METHOD GetTitle(nsAString & aTitle); \
  NS_METHOD SetTitle(const nsAString & aTitle); \
  using nsITVProgramData::GetStartTime; \
  NS_METHOD GetStartTime(uint64_t *aStartTime); \
  NS_METHOD SetStartTime(uint64_t aStartTime); \
  using nsITVProgramData::GetDuration; \
  NS_METHOD GetDuration(uint64_t *aDuration); \
  NS_METHOD SetDuration(uint64_t aDuration); \
  NS_METHOD GetDescription(nsAString & aDescription); \
  NS_METHOD SetDescription(const nsAString & aDescription); \
  NS_METHOD GetRating(nsAString & aRating); \
  NS_METHOD SetRating(const nsAString & aRating); \
  NS_METHOD GetAudioLanguages(uint32_t *count, char * **languages); \
  NS_METHOD SetAudioLanguages(uint32_t count, const char * *languages); \
  NS_METHOD GetSubtitleLanguages(uint32_t *count, char * **languages); \
  NS_METHOD SetSubtitleLanguages(uint32_t count, const char * *languages); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITVPROGRAMDATA(_to) \
  NS_IMETHOD GetEventId(nsAString & aEventId) override { return _to GetEventId(aEventId); } \
  NS_IMETHOD SetEventId(const nsAString & aEventId) override { return _to SetEventId(aEventId); } \
  NS_IMETHOD GetTitle(nsAString & aTitle) override { return _to GetTitle(aTitle); } \
  NS_IMETHOD SetTitle(const nsAString & aTitle) override { return _to SetTitle(aTitle); } \
  using nsITVProgramData::GetStartTime; \
  NS_IMETHOD GetStartTime(uint64_t *aStartTime) override { return _to GetStartTime(aStartTime); } \
  NS_IMETHOD SetStartTime(uint64_t aStartTime) override { return _to SetStartTime(aStartTime); } \
  using nsITVProgramData::GetDuration; \
  NS_IMETHOD GetDuration(uint64_t *aDuration) override { return _to GetDuration(aDuration); } \
  NS_IMETHOD SetDuration(uint64_t aDuration) override { return _to SetDuration(aDuration); } \
  NS_IMETHOD GetDescription(nsAString & aDescription) override { return _to GetDescription(aDescription); } \
  NS_IMETHOD SetDescription(const nsAString & aDescription) override { return _to SetDescription(aDescription); } \
  NS_IMETHOD GetRating(nsAString & aRating) override { return _to GetRating(aRating); } \
  NS_IMETHOD SetRating(const nsAString & aRating) override { return _to SetRating(aRating); } \
  NS_IMETHOD GetAudioLanguages(uint32_t *count, char * **languages) override { return _to GetAudioLanguages(count, languages); } \
  NS_IMETHOD SetAudioLanguages(uint32_t count, const char * *languages) override { return _to SetAudioLanguages(count, languages); } \
  NS_IMETHOD GetSubtitleLanguages(uint32_t *count, char * **languages) override { return _to GetSubtitleLanguages(count, languages); } \
  NS_IMETHOD SetSubtitleLanguages(uint32_t count, const char * *languages) override { return _to SetSubtitleLanguages(count, languages); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITVPROGRAMDATA(_to) \
  NS_IMETHOD GetEventId(nsAString & aEventId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventId(aEventId); } \
  NS_IMETHOD SetEventId(const nsAString & aEventId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEventId(aEventId); } \
  NS_IMETHOD GetTitle(nsAString & aTitle) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_IMETHOD SetTitle(const nsAString & aTitle) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTitle(aTitle); } \
  NS_IMETHOD GetStartTime(uint64_t *aStartTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartTime(aStartTime); } \
  NS_IMETHOD SetStartTime(uint64_t aStartTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStartTime(aStartTime); } \
  NS_IMETHOD GetDuration(uint64_t *aDuration) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDuration(aDuration); } \
  NS_IMETHOD SetDuration(uint64_t aDuration) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDuration(aDuration); } \
  NS_IMETHOD GetDescription(nsAString & aDescription) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } \
  NS_IMETHOD SetDescription(const nsAString & aDescription) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDescription(aDescription); } \
  NS_IMETHOD GetRating(nsAString & aRating) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRating(aRating); } \
  NS_IMETHOD SetRating(const nsAString & aRating) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRating(aRating); } \
  NS_IMETHOD GetAudioLanguages(uint32_t *count, char * **languages) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAudioLanguages(count, languages); } \
  NS_IMETHOD SetAudioLanguages(uint32_t count, const char * *languages) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAudioLanguages(count, languages); } \
  NS_IMETHOD GetSubtitleLanguages(uint32_t *count, char * **languages) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubtitleLanguages(count, languages); } \
  NS_IMETHOD SetSubtitleLanguages(uint32_t count, const char * *languages) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSubtitleLanguages(count, languages); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTVProgramData : public nsITVProgramData
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITVPROGRAMDATA

  nsTVProgramData();

private:
  ~nsTVProgramData();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTVProgramData, nsITVProgramData)

nsTVProgramData::nsTVProgramData()
{
  /* member initializers and constructor code */
}

nsTVProgramData::~nsTVProgramData()
{
  /* destructor code */
}

/* attribute DOMString eventId; */
NS_IMETHODIMP nsTVProgramData::GetEventId(nsAString & aEventId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVProgramData::SetEventId(const nsAString & aEventId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString title; */
NS_IMETHODIMP nsTVProgramData::GetTitle(nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVProgramData::SetTitle(const nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] attribute unsigned long long startTime; */
NS_IMETHODIMP nsTVProgramData::GetStartTime(uint64_t *aStartTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVProgramData::SetStartTime(uint64_t aStartTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [infallible] attribute unsigned long long duration; */
NS_IMETHODIMP nsTVProgramData::GetDuration(uint64_t *aDuration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVProgramData::SetDuration(uint64_t aDuration)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString description; */
NS_IMETHODIMP nsTVProgramData::GetDescription(nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVProgramData::SetDescription(const nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString rating; */
NS_IMETHODIMP nsTVProgramData::GetRating(nsAString & aRating)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVProgramData::SetRating(const nsAString & aRating)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getAudioLanguages ([optional] out unsigned long count, [array, size_is (count), retval] out string languages); */
NS_IMETHODIMP nsTVProgramData::GetAudioLanguages(uint32_t *count, char * **languages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAudioLanguages (in unsigned long count, [array, size_is (count)] in string languages); */
NS_IMETHODIMP nsTVProgramData::SetAudioLanguages(uint32_t count, const char * *languages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getSubtitleLanguages ([optional] out unsigned long count, [array, size_is (count), retval] out string languages); */
NS_IMETHODIMP nsTVProgramData::GetSubtitleLanguages(uint32_t *count, char * **languages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSubtitleLanguages (in unsigned long count, [array, size_is (count)] in string languages); */
NS_IMETHODIMP nsTVProgramData::SetSubtitleLanguages(uint32_t count, const char * *languages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITVSourceListener */
#define NS_ITVSOURCELISTENER_IID_STR "47746633-1b77-4df4-9424-d315bde3d455"

#define NS_ITVSOURCELISTENER_IID \
  {0x47746633, 0x1b77, 0x4df4, \
    { 0x94, 0x24, 0xd3, 0x15, 0xbd, 0xe3, 0xd4, 0x55 }}

class NS_NO_VTABLE nsITVSourceListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITVSOURCELISTENER_IID)

  /* void notifyChannelScanned (in DOMString tunerId, in DOMString sourceType, in nsITVChannelData channelData); */
  NS_IMETHOD NotifyChannelScanned(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData) = 0;

  /* void notifyChannelScanComplete (in DOMString tunerId, in DOMString sourceType); */
  NS_IMETHOD NotifyChannelScanComplete(const nsAString & tunerId, const nsAString & sourceType) = 0;

  /* void notifyChannelScanStopped (in DOMString tunerId, in DOMString sourceType); */
  NS_IMETHOD NotifyChannelScanStopped(const nsAString & tunerId, const nsAString & sourceType) = 0;

  /* void notifyEITBroadcasted (in DOMString tunerId, in DOMString sourceType, in nsITVChannelData channelData, [array, size_is (count)] in nsITVProgramData programDataList, in unsigned long count); */
  NS_IMETHOD NotifyEITBroadcasted(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData, nsITVProgramData **programDataList, uint32_t count) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITVSourceListener, NS_ITVSOURCELISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITVSOURCELISTENER \
  NS_IMETHOD NotifyChannelScanned(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData) override; \
  NS_IMETHOD NotifyChannelScanComplete(const nsAString & tunerId, const nsAString & sourceType) override; \
  NS_IMETHOD NotifyChannelScanStopped(const nsAString & tunerId, const nsAString & sourceType) override; \
  NS_IMETHOD NotifyEITBroadcasted(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData, nsITVProgramData **programDataList, uint32_t count) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITVSOURCELISTENER \
  NS_METHOD NotifyChannelScanned(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData); \
  NS_METHOD NotifyChannelScanComplete(const nsAString & tunerId, const nsAString & sourceType); \
  NS_METHOD NotifyChannelScanStopped(const nsAString & tunerId, const nsAString & sourceType); \
  NS_METHOD NotifyEITBroadcasted(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData, nsITVProgramData **programDataList, uint32_t count); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITVSOURCELISTENER(_to) \
  NS_IMETHOD NotifyChannelScanned(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData) override { return _to NotifyChannelScanned(tunerId, sourceType, channelData); } \
  NS_IMETHOD NotifyChannelScanComplete(const nsAString & tunerId, const nsAString & sourceType) override { return _to NotifyChannelScanComplete(tunerId, sourceType); } \
  NS_IMETHOD NotifyChannelScanStopped(const nsAString & tunerId, const nsAString & sourceType) override { return _to NotifyChannelScanStopped(tunerId, sourceType); } \
  NS_IMETHOD NotifyEITBroadcasted(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData, nsITVProgramData **programDataList, uint32_t count) override { return _to NotifyEITBroadcasted(tunerId, sourceType, channelData, programDataList, count); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITVSOURCELISTENER(_to) \
  NS_IMETHOD NotifyChannelScanned(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyChannelScanned(tunerId, sourceType, channelData); } \
  NS_IMETHOD NotifyChannelScanComplete(const nsAString & tunerId, const nsAString & sourceType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyChannelScanComplete(tunerId, sourceType); } \
  NS_IMETHOD NotifyChannelScanStopped(const nsAString & tunerId, const nsAString & sourceType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyChannelScanStopped(tunerId, sourceType); } \
  NS_IMETHOD NotifyEITBroadcasted(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData, nsITVProgramData **programDataList, uint32_t count) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyEITBroadcasted(tunerId, sourceType, channelData, programDataList, count); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTVSourceListener : public nsITVSourceListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITVSOURCELISTENER

  nsTVSourceListener();

private:
  ~nsTVSourceListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTVSourceListener, nsITVSourceListener)

nsTVSourceListener::nsTVSourceListener()
{
  /* member initializers and constructor code */
}

nsTVSourceListener::~nsTVSourceListener()
{
  /* destructor code */
}

/* void notifyChannelScanned (in DOMString tunerId, in DOMString sourceType, in nsITVChannelData channelData); */
NS_IMETHODIMP nsTVSourceListener::NotifyChannelScanned(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyChannelScanComplete (in DOMString tunerId, in DOMString sourceType); */
NS_IMETHODIMP nsTVSourceListener::NotifyChannelScanComplete(const nsAString & tunerId, const nsAString & sourceType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyChannelScanStopped (in DOMString tunerId, in DOMString sourceType); */
NS_IMETHODIMP nsTVSourceListener::NotifyChannelScanStopped(const nsAString & tunerId, const nsAString & sourceType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyEITBroadcasted (in DOMString tunerId, in DOMString sourceType, in nsITVChannelData channelData, [array, size_is (count)] in nsITVProgramData programDataList, in unsigned long count); */
NS_IMETHODIMP nsTVSourceListener::NotifyEITBroadcasted(const nsAString & tunerId, const nsAString & sourceType, nsITVChannelData *channelData, nsITVProgramData **programDataList, uint32_t count)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsITVServiceCallback */
#define NS_ITVSERVICECALLBACK_IID_STR "01582a11-4707-455d-8d2a-2c8de8227dad"

#define NS_ITVSERVICECALLBACK_IID \
  {0x01582a11, 0x4707, 0x455d, \
    { 0x8d, 0x2a, 0x2c, 0x8d, 0xe8, 0x22, 0x7d, 0xad }}

class NS_NO_VTABLE nsITVServiceCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITVSERVICECALLBACK_IID)

  enum {
    TV_ERROR_OK = 0U,
    TV_ERROR_FAILURE = 1U,
    TV_ERROR_INVALID_ARG = 2U,
    TV_ERROR_NO_SIGNAL = 3U,
    TV_ERROR_NOT_SUPPORTED = 4U
  };

  /* void notifyError (in unsigned short errorCode); */
  NS_IMETHOD NotifyError(uint16_t errorCode) = 0;

  /* void notifySuccess ([optional] in nsIArray dataList); */
  NS_IMETHOD NotifySuccess(nsIArray *dataList) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITVServiceCallback, NS_ITVSERVICECALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITVSERVICECALLBACK \
  NS_IMETHOD NotifyError(uint16_t errorCode) override; \
  NS_IMETHOD NotifySuccess(nsIArray *dataList) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITVSERVICECALLBACK \
  NS_METHOD NotifyError(uint16_t errorCode); \
  NS_METHOD NotifySuccess(nsIArray *dataList); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITVSERVICECALLBACK(_to) \
  NS_IMETHOD NotifyError(uint16_t errorCode) override { return _to NotifyError(errorCode); } \
  NS_IMETHOD NotifySuccess(nsIArray *dataList) override { return _to NotifySuccess(dataList); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITVSERVICECALLBACK(_to) \
  NS_IMETHOD NotifyError(uint16_t errorCode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyError(errorCode); } \
  NS_IMETHOD NotifySuccess(nsIArray *dataList) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifySuccess(dataList); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTVServiceCallback : public nsITVServiceCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITVSERVICECALLBACK

  nsTVServiceCallback();

private:
  ~nsTVServiceCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTVServiceCallback, nsITVServiceCallback)

nsTVServiceCallback::nsTVServiceCallback()
{
  /* member initializers and constructor code */
}

nsTVServiceCallback::~nsTVServiceCallback()
{
  /* destructor code */
}

/* void notifyError (in unsigned short errorCode); */
NS_IMETHODIMP nsTVServiceCallback::NotifyError(uint16_t errorCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifySuccess ([optional] in nsIArray dataList); */
NS_IMETHODIMP nsTVServiceCallback::NotifySuccess(nsIArray *dataList)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define TV_SERVICE_CONTRACTID \
  "@mozilla.org/tv/tvservice;1"

/* starting interface:    nsITVService */
#define NS_ITVSERVICE_IID_STR "e52f93f1-6071-468b-a198-d8e6bc5ca348"

#define NS_ITVSERVICE_IID \
  {0xe52f93f1, 0x6071, 0x468b, \
    { 0xa1, 0x98, 0xd8, 0xe6, 0xbc, 0x5c, 0xa3, 0x48 }}

class NS_NO_VTABLE nsITVService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITVSERVICE_IID)

  /* attribute nsITVSourceListener sourceListener; */
  NS_IMETHOD GetSourceListener(nsITVSourceListener * *aSourceListener) = 0;
  NS_IMETHOD SetSourceListener(nsITVSourceListener *aSourceListener) = 0;

  /* void getTuners (in nsITVServiceCallback callback); */
  NS_IMETHOD GetTuners(nsITVServiceCallback *callback) = 0;

  /* void setSource (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
  NS_IMETHOD SetSource(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) = 0;

  /* void startScanningChannels (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
  NS_IMETHOD StartScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) = 0;

  /* void stopScanningChannels (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
  NS_IMETHOD StopScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) = 0;

  /* void clearScannedChannelsCache (); */
  NS_IMETHOD ClearScannedChannelsCache(void) = 0;

  /* void setChannel (in DOMString tunerId, in DOMString sourceType, in DOMString channelNumber, in nsITVServiceCallback callback); */
  NS_IMETHOD SetChannel(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, nsITVServiceCallback *callback) = 0;

  /* void getChannels (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
  NS_IMETHOD GetChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) = 0;

  /* void getPrograms (in DOMString tunerId, in DOMString sourceType, in DOMString channelNumber, in unsigned long long startTime, in unsigned long long endTime, in nsITVServiceCallback callback); */
  NS_IMETHOD GetPrograms(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, uint64_t startTime, uint64_t endTime, nsITVServiceCallback *callback) = 0;

  /* void getOverlayId (in DOMString tunerId, in nsITVServiceCallback callback); */
  NS_IMETHOD GetOverlayId(const nsAString & tunerId, nsITVServiceCallback *callback) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITVService, NS_ITVSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITVSERVICE \
  NS_IMETHOD GetSourceListener(nsITVSourceListener * *aSourceListener) override; \
  NS_IMETHOD SetSourceListener(nsITVSourceListener *aSourceListener) override; \
  NS_IMETHOD GetTuners(nsITVServiceCallback *callback) override; \
  NS_IMETHOD SetSource(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override; \
  NS_IMETHOD StartScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override; \
  NS_IMETHOD StopScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override; \
  NS_IMETHOD ClearScannedChannelsCache(void) override; \
  NS_IMETHOD SetChannel(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, nsITVServiceCallback *callback) override; \
  NS_IMETHOD GetChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override; \
  NS_IMETHOD GetPrograms(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, uint64_t startTime, uint64_t endTime, nsITVServiceCallback *callback) override; \
  NS_IMETHOD GetOverlayId(const nsAString & tunerId, nsITVServiceCallback *callback) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSITVSERVICE \
  NS_METHOD GetSourceListener(nsITVSourceListener * *aSourceListener); \
  NS_METHOD SetSourceListener(nsITVSourceListener *aSourceListener); \
  NS_METHOD GetTuners(nsITVServiceCallback *callback); \
  NS_METHOD SetSource(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback); \
  NS_METHOD StartScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback); \
  NS_METHOD StopScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback); \
  NS_METHOD ClearScannedChannelsCache(void); \
  NS_METHOD SetChannel(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, nsITVServiceCallback *callback); \
  NS_METHOD GetChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback); \
  NS_METHOD GetPrograms(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, uint64_t startTime, uint64_t endTime, nsITVServiceCallback *callback); \
  NS_METHOD GetOverlayId(const nsAString & tunerId, nsITVServiceCallback *callback); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITVSERVICE(_to) \
  NS_IMETHOD GetSourceListener(nsITVSourceListener * *aSourceListener) override { return _to GetSourceListener(aSourceListener); } \
  NS_IMETHOD SetSourceListener(nsITVSourceListener *aSourceListener) override { return _to SetSourceListener(aSourceListener); } \
  NS_IMETHOD GetTuners(nsITVServiceCallback *callback) override { return _to GetTuners(callback); } \
  NS_IMETHOD SetSource(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return _to SetSource(tunerId, sourceType, callback); } \
  NS_IMETHOD StartScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return _to StartScanningChannels(tunerId, sourceType, callback); } \
  NS_IMETHOD StopScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return _to StopScanningChannels(tunerId, sourceType, callback); } \
  NS_IMETHOD ClearScannedChannelsCache(void) override { return _to ClearScannedChannelsCache(); } \
  NS_IMETHOD SetChannel(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, nsITVServiceCallback *callback) override { return _to SetChannel(tunerId, sourceType, channelNumber, callback); } \
  NS_IMETHOD GetChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return _to GetChannels(tunerId, sourceType, callback); } \
  NS_IMETHOD GetPrograms(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, uint64_t startTime, uint64_t endTime, nsITVServiceCallback *callback) override { return _to GetPrograms(tunerId, sourceType, channelNumber, startTime, endTime, callback); } \
  NS_IMETHOD GetOverlayId(const nsAString & tunerId, nsITVServiceCallback *callback) override { return _to GetOverlayId(tunerId, callback); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITVSERVICE(_to) \
  NS_IMETHOD GetSourceListener(nsITVSourceListener * *aSourceListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceListener(aSourceListener); } \
  NS_IMETHOD SetSourceListener(nsITVSourceListener *aSourceListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSourceListener(aSourceListener); } \
  NS_IMETHOD GetTuners(nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTuners(callback); } \
  NS_IMETHOD SetSource(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSource(tunerId, sourceType, callback); } \
  NS_IMETHOD StartScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StartScanningChannels(tunerId, sourceType, callback); } \
  NS_IMETHOD StopScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->StopScanningChannels(tunerId, sourceType, callback); } \
  NS_IMETHOD ClearScannedChannelsCache(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearScannedChannelsCache(); } \
  NS_IMETHOD SetChannel(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChannel(tunerId, sourceType, channelNumber, callback); } \
  NS_IMETHOD GetChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChannels(tunerId, sourceType, callback); } \
  NS_IMETHOD GetPrograms(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, uint64_t startTime, uint64_t endTime, nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrograms(tunerId, sourceType, channelNumber, startTime, endTime, callback); } \
  NS_IMETHOD GetOverlayId(const nsAString & tunerId, nsITVServiceCallback *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOverlayId(tunerId, callback); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTVService : public nsITVService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITVSERVICE

  nsTVService();

private:
  ~nsTVService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsTVService, nsITVService)

nsTVService::nsTVService()
{
  /* member initializers and constructor code */
}

nsTVService::~nsTVService()
{
  /* destructor code */
}

/* attribute nsITVSourceListener sourceListener; */
NS_IMETHODIMP nsTVService::GetSourceListener(nsITVSourceListener * *aSourceListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTVService::SetSourceListener(nsITVSourceListener *aSourceListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getTuners (in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::GetTuners(nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSource (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::SetSource(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void startScanningChannels (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::StartScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopScanningChannels (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::StopScanningChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearScannedChannelsCache (); */
NS_IMETHODIMP nsTVService::ClearScannedChannelsCache()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setChannel (in DOMString tunerId, in DOMString sourceType, in DOMString channelNumber, in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::SetChannel(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getChannels (in DOMString tunerId, in DOMString sourceType, in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::GetChannels(const nsAString & tunerId, const nsAString & sourceType, nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getPrograms (in DOMString tunerId, in DOMString sourceType, in DOMString channelNumber, in unsigned long long startTime, in unsigned long long endTime, in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::GetPrograms(const nsAString & tunerId, const nsAString & sourceType, const nsAString & channelNumber, uint64_t startTime, uint64_t endTime, nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getOverlayId (in DOMString tunerId, in nsITVServiceCallback callback); */
NS_IMETHODIMP nsTVService::GetOverlayId(const nsAString & tunerId, nsITVServiceCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITVService_h__ */
