/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPerformanceStats.idl
 */

#ifndef __gen_nsIPerformanceStats_h__
#define __gen_nsIPerformanceStats_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIArray_h__
#include "nsIArray.h"
#endif

#ifndef __gen_nsIDOMWindow_h__
#include "nsIDOMWindow.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPerformanceGroupDetails */
#define NS_IPERFORMANCEGROUPDETAILS_IID_STR "994c56be-939a-4f20-8364-124f6422d86a"

#define NS_IPERFORMANCEGROUPDETAILS_IID \
  {0x994c56be, 0x939a, 0x4f20, \
    { 0x83, 0x64, 0x12, 0x4f, 0x64, 0x22, 0xd8, 0x6a }}

class NS_NO_VTABLE nsIPerformanceGroupDetails : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERFORMANCEGROUPDETAILS_IID)

  /* readonly attribute AString groupId; */
  NS_IMETHOD GetGroupId(nsAString & aGroupId) = 0;

  /* readonly attribute AString name; */
  NS_IMETHOD GetName(nsAString & aName) = 0;

  /* readonly attribute AString addonId; */
  NS_IMETHOD GetAddonId(nsAString & aAddonId) = 0;

  /* readonly attribute uint64_t windowId; */
  NS_IMETHOD GetWindowId(uint64_t *aWindowId) = 0;

  /* readonly attribute bool isSystem; */
  NS_IMETHOD GetIsSystem(bool *aIsSystem) = 0;

  /* readonly attribute unsigned long long processId; */
  NS_IMETHOD GetProcessId(uint64_t *aProcessId) = 0;

  /* readonly attribute bool isContentProcess; */
  NS_IMETHOD GetIsContentProcess(bool *aIsContentProcess) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPerformanceGroupDetails, NS_IPERFORMANCEGROUPDETAILS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERFORMANCEGROUPDETAILS \
  NS_IMETHOD GetGroupId(nsAString & aGroupId) override; \
  NS_IMETHOD GetName(nsAString & aName) override; \
  NS_IMETHOD GetAddonId(nsAString & aAddonId) override; \
  NS_IMETHOD GetWindowId(uint64_t *aWindowId) override; \
  NS_IMETHOD GetIsSystem(bool *aIsSystem) override; \
  NS_IMETHOD GetProcessId(uint64_t *aProcessId) override; \
  NS_IMETHOD GetIsContentProcess(bool *aIsContentProcess) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERFORMANCEGROUPDETAILS \
  NS_METHOD GetGroupId(nsAString & aGroupId); \
  NS_METHOD GetName(nsAString & aName); \
  NS_METHOD GetAddonId(nsAString & aAddonId); \
  NS_METHOD GetWindowId(uint64_t *aWindowId); \
  NS_METHOD GetIsSystem(bool *aIsSystem); \
  NS_METHOD GetProcessId(uint64_t *aProcessId); \
  NS_METHOD GetIsContentProcess(bool *aIsContentProcess); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERFORMANCEGROUPDETAILS(_to) \
  NS_IMETHOD GetGroupId(nsAString & aGroupId) override { return _to GetGroupId(aGroupId); } \
  NS_IMETHOD GetName(nsAString & aName) override { return _to GetName(aName); } \
  NS_IMETHOD GetAddonId(nsAString & aAddonId) override { return _to GetAddonId(aAddonId); } \
  NS_IMETHOD GetWindowId(uint64_t *aWindowId) override { return _to GetWindowId(aWindowId); } \
  NS_IMETHOD GetIsSystem(bool *aIsSystem) override { return _to GetIsSystem(aIsSystem); } \
  NS_IMETHOD GetProcessId(uint64_t *aProcessId) override { return _to GetProcessId(aProcessId); } \
  NS_IMETHOD GetIsContentProcess(bool *aIsContentProcess) override { return _to GetIsContentProcess(aIsContentProcess); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERFORMANCEGROUPDETAILS(_to) \
  NS_IMETHOD GetGroupId(nsAString & aGroupId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGroupId(aGroupId); } \
  NS_IMETHOD GetName(nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD GetAddonId(nsAString & aAddonId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddonId(aAddonId); } \
  NS_IMETHOD GetWindowId(uint64_t *aWindowId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowId(aWindowId); } \
  NS_IMETHOD GetIsSystem(bool *aIsSystem) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSystem(aIsSystem); } \
  NS_IMETHOD GetProcessId(uint64_t *aProcessId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProcessId(aProcessId); } \
  NS_IMETHOD GetIsContentProcess(bool *aIsContentProcess) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsContentProcess(aIsContentProcess); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPerformanceGroupDetails : public nsIPerformanceGroupDetails
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERFORMANCEGROUPDETAILS

  nsPerformanceGroupDetails();

private:
  ~nsPerformanceGroupDetails();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPerformanceGroupDetails, nsIPerformanceGroupDetails)

nsPerformanceGroupDetails::nsPerformanceGroupDetails()
{
  /* member initializers and constructor code */
}

nsPerformanceGroupDetails::~nsPerformanceGroupDetails()
{
  /* destructor code */
}

/* readonly attribute AString groupId; */
NS_IMETHODIMP nsPerformanceGroupDetails::GetGroupId(nsAString & aGroupId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString name; */
NS_IMETHODIMP nsPerformanceGroupDetails::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString addonId; */
NS_IMETHODIMP nsPerformanceGroupDetails::GetAddonId(nsAString & aAddonId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint64_t windowId; */
NS_IMETHODIMP nsPerformanceGroupDetails::GetWindowId(uint64_t *aWindowId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool isSystem; */
NS_IMETHODIMP nsPerformanceGroupDetails::GetIsSystem(bool *aIsSystem)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long processId; */
NS_IMETHODIMP nsPerformanceGroupDetails::GetProcessId(uint64_t *aProcessId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute bool isContentProcess; */
NS_IMETHODIMP nsPerformanceGroupDetails::GetIsContentProcess(bool *aIsContentProcess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPerformanceStats */
#define NS_IPERFORMANCESTATS_IID_STR "8a635d4b-aa56-466b-9a7d-9f91ca9405ef"

#define NS_IPERFORMANCESTATS_IID \
  {0x8a635d4b, 0xaa56, 0x466b, \
    { 0x9a, 0x7d, 0x9f, 0x91, 0xca, 0x94, 0x05, 0xef }}

class NS_NO_VTABLE nsIPerformanceStats : public nsIPerformanceGroupDetails {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERFORMANCESTATS_IID)

  /* readonly attribute unsigned long long totalUserTime; */
  NS_IMETHOD GetTotalUserTime(uint64_t *aTotalUserTime) = 0;

  /* readonly attribute unsigned long long totalSystemTime; */
  NS_IMETHOD GetTotalSystemTime(uint64_t *aTotalSystemTime) = 0;

  /* readonly attribute unsigned long long totalCPOWTime; */
  NS_IMETHOD GetTotalCPOWTime(uint64_t *aTotalCPOWTime) = 0;

  /* readonly attribute unsigned long long ticks; */
  NS_IMETHOD GetTicks(uint64_t *aTicks) = 0;

  /* void getDurations ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out unsigned long long aNumberOfOccurrences); */
  NS_IMETHOD GetDurations(uint32_t *aCount, uint64_t **aNumberOfOccurrences) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPerformanceStats, NS_IPERFORMANCESTATS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERFORMANCESTATS \
  NS_IMETHOD GetTotalUserTime(uint64_t *aTotalUserTime) override; \
  NS_IMETHOD GetTotalSystemTime(uint64_t *aTotalSystemTime) override; \
  NS_IMETHOD GetTotalCPOWTime(uint64_t *aTotalCPOWTime) override; \
  NS_IMETHOD GetTicks(uint64_t *aTicks) override; \
  NS_IMETHOD GetDurations(uint32_t *aCount, uint64_t **aNumberOfOccurrences) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERFORMANCESTATS \
  NS_METHOD GetTotalUserTime(uint64_t *aTotalUserTime); \
  NS_METHOD GetTotalSystemTime(uint64_t *aTotalSystemTime); \
  NS_METHOD GetTotalCPOWTime(uint64_t *aTotalCPOWTime); \
  NS_METHOD GetTicks(uint64_t *aTicks); \
  NS_METHOD GetDurations(uint32_t *aCount, uint64_t **aNumberOfOccurrences); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERFORMANCESTATS(_to) \
  NS_IMETHOD GetTotalUserTime(uint64_t *aTotalUserTime) override { return _to GetTotalUserTime(aTotalUserTime); } \
  NS_IMETHOD GetTotalSystemTime(uint64_t *aTotalSystemTime) override { return _to GetTotalSystemTime(aTotalSystemTime); } \
  NS_IMETHOD GetTotalCPOWTime(uint64_t *aTotalCPOWTime) override { return _to GetTotalCPOWTime(aTotalCPOWTime); } \
  NS_IMETHOD GetTicks(uint64_t *aTicks) override { return _to GetTicks(aTicks); } \
  NS_IMETHOD GetDurations(uint32_t *aCount, uint64_t **aNumberOfOccurrences) override { return _to GetDurations(aCount, aNumberOfOccurrences); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERFORMANCESTATS(_to) \
  NS_IMETHOD GetTotalUserTime(uint64_t *aTotalUserTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTotalUserTime(aTotalUserTime); } \
  NS_IMETHOD GetTotalSystemTime(uint64_t *aTotalSystemTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTotalSystemTime(aTotalSystemTime); } \
  NS_IMETHOD GetTotalCPOWTime(uint64_t *aTotalCPOWTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTotalCPOWTime(aTotalCPOWTime); } \
  NS_IMETHOD GetTicks(uint64_t *aTicks) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTicks(aTicks); } \
  NS_IMETHOD GetDurations(uint32_t *aCount, uint64_t **aNumberOfOccurrences) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDurations(aCount, aNumberOfOccurrences); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPerformanceStats : public nsIPerformanceStats
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERFORMANCESTATS

  nsPerformanceStats();

private:
  ~nsPerformanceStats();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPerformanceStats, nsIPerformanceStats)

nsPerformanceStats::nsPerformanceStats()
{
  /* member initializers and constructor code */
}

nsPerformanceStats::~nsPerformanceStats()
{
  /* destructor code */
}

/* readonly attribute unsigned long long totalUserTime; */
NS_IMETHODIMP nsPerformanceStats::GetTotalUserTime(uint64_t *aTotalUserTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long totalSystemTime; */
NS_IMETHODIMP nsPerformanceStats::GetTotalSystemTime(uint64_t *aTotalSystemTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long totalCPOWTime; */
NS_IMETHODIMP nsPerformanceStats::GetTotalCPOWTime(uint64_t *aTotalCPOWTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long ticks; */
NS_IMETHODIMP nsPerformanceStats::GetTicks(uint64_t *aTicks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getDurations ([optional] out unsigned long aCount, [array, size_is (aCount), retval] out unsigned long long aNumberOfOccurrences); */
NS_IMETHODIMP nsPerformanceStats::GetDurations(uint32_t *aCount, uint64_t **aNumberOfOccurrences)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPerformanceSnapshot */
#define NS_IPERFORMANCESNAPSHOT_IID_STR "13cc235b-739e-4690-b0e3-d89cbe036a93"

#define NS_IPERFORMANCESNAPSHOT_IID \
  {0x13cc235b, 0x739e, 0x4690, \
    { 0xb0, 0xe3, 0xd8, 0x9c, 0xbe, 0x03, 0x6a, 0x93 }}

class NS_NO_VTABLE nsIPerformanceSnapshot : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERFORMANCESNAPSHOT_IID)

  /* nsIArray getComponentsData (); */
  NS_IMETHOD GetComponentsData(nsIArray * *_retval) = 0;

  /* nsIPerformanceStats getProcessData (); */
  NS_IMETHOD GetProcessData(nsIPerformanceStats * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPerformanceSnapshot, NS_IPERFORMANCESNAPSHOT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERFORMANCESNAPSHOT \
  NS_IMETHOD GetComponentsData(nsIArray * *_retval) override; \
  NS_IMETHOD GetProcessData(nsIPerformanceStats * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERFORMANCESNAPSHOT \
  NS_METHOD GetComponentsData(nsIArray * *_retval); \
  NS_METHOD GetProcessData(nsIPerformanceStats * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERFORMANCESNAPSHOT(_to) \
  NS_IMETHOD GetComponentsData(nsIArray * *_retval) override { return _to GetComponentsData(_retval); } \
  NS_IMETHOD GetProcessData(nsIPerformanceStats * *_retval) override { return _to GetProcessData(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERFORMANCESNAPSHOT(_to) \
  NS_IMETHOD GetComponentsData(nsIArray * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetComponentsData(_retval); } \
  NS_IMETHOD GetProcessData(nsIPerformanceStats * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProcessData(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPerformanceSnapshot : public nsIPerformanceSnapshot
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERFORMANCESNAPSHOT

  nsPerformanceSnapshot();

private:
  ~nsPerformanceSnapshot();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPerformanceSnapshot, nsIPerformanceSnapshot)

nsPerformanceSnapshot::nsPerformanceSnapshot()
{
  /* member initializers and constructor code */
}

nsPerformanceSnapshot::~nsPerformanceSnapshot()
{
  /* destructor code */
}

/* nsIArray getComponentsData (); */
NS_IMETHODIMP nsPerformanceSnapshot::GetComponentsData(nsIArray * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPerformanceStats getProcessData (); */
NS_IMETHODIMP nsPerformanceSnapshot::GetProcessData(nsIPerformanceStats * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPerformanceAlert */
#define NS_IPERFORMANCEALERT_IID_STR "a85706ab-d703-4687-8865-78cd771eab93"

#define NS_IPERFORMANCEALERT_IID \
  {0xa85706ab, 0xd703, 0x4687, \
    { 0x88, 0x65, 0x78, 0xcd, 0x77, 0x1e, 0xab, 0x93 }}

class NS_NO_VTABLE nsIPerformanceAlert : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERFORMANCEALERT_IID)

  enum {
    REASON_SLOWDOWN = 1U,
    REASON_JANK_IN_ANIMATION = 2U,
    REASON_JANK_IN_INPUT = 4U
  };

  /* readonly attribute unsigned long reason; */
  NS_IMETHOD GetReason(uint32_t *aReason) = 0;

  /* readonly attribute unsigned long long highestJank; */
  NS_IMETHOD GetHighestJank(uint64_t *aHighestJank) = 0;

  /* readonly attribute unsigned long long highestCPOW; */
  NS_IMETHOD GetHighestCPOW(uint64_t *aHighestCPOW) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPerformanceAlert, NS_IPERFORMANCEALERT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERFORMANCEALERT \
  NS_IMETHOD GetReason(uint32_t *aReason) override; \
  NS_IMETHOD GetHighestJank(uint64_t *aHighestJank) override; \
  NS_IMETHOD GetHighestCPOW(uint64_t *aHighestCPOW) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERFORMANCEALERT \
  NS_METHOD GetReason(uint32_t *aReason); \
  NS_METHOD GetHighestJank(uint64_t *aHighestJank); \
  NS_METHOD GetHighestCPOW(uint64_t *aHighestCPOW); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERFORMANCEALERT(_to) \
  NS_IMETHOD GetReason(uint32_t *aReason) override { return _to GetReason(aReason); } \
  NS_IMETHOD GetHighestJank(uint64_t *aHighestJank) override { return _to GetHighestJank(aHighestJank); } \
  NS_IMETHOD GetHighestCPOW(uint64_t *aHighestCPOW) override { return _to GetHighestCPOW(aHighestCPOW); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERFORMANCEALERT(_to) \
  NS_IMETHOD GetReason(uint32_t *aReason) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReason(aReason); } \
  NS_IMETHOD GetHighestJank(uint64_t *aHighestJank) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHighestJank(aHighestJank); } \
  NS_IMETHOD GetHighestCPOW(uint64_t *aHighestCPOW) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHighestCPOW(aHighestCPOW); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPerformanceAlert : public nsIPerformanceAlert
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERFORMANCEALERT

  nsPerformanceAlert();

private:
  ~nsPerformanceAlert();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPerformanceAlert, nsIPerformanceAlert)

nsPerformanceAlert::nsPerformanceAlert()
{
  /* member initializers and constructor code */
}

nsPerformanceAlert::~nsPerformanceAlert()
{
  /* destructor code */
}

/* readonly attribute unsigned long reason; */
NS_IMETHODIMP nsPerformanceAlert::GetReason(uint32_t *aReason)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long highestJank; */
NS_IMETHODIMP nsPerformanceAlert::GetHighestJank(uint64_t *aHighestJank)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long highestCPOW; */
NS_IMETHODIMP nsPerformanceAlert::GetHighestCPOW(uint64_t *aHighestCPOW)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPerformanceObserver */
#define NS_IPERFORMANCEOBSERVER_IID_STR "b746a929-3fec-420b-8ed8-c35d71995e05"

#define NS_IPERFORMANCEOBSERVER_IID \
  {0xb746a929, 0x3fec, 0x420b, \
    { 0x8e, 0xd8, 0xc3, 0x5d, 0x71, 0x99, 0x5e, 0x05 }}

class NS_NO_VTABLE nsIPerformanceObserver : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERFORMANCEOBSERVER_IID)

  /* void observe (in nsIPerformanceGroupDetails target, in nsIPerformanceAlert alert); */
  NS_IMETHOD Observe(nsIPerformanceGroupDetails *target, nsIPerformanceAlert *alert) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPerformanceObserver, NS_IPERFORMANCEOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERFORMANCEOBSERVER \
  NS_IMETHOD Observe(nsIPerformanceGroupDetails *target, nsIPerformanceAlert *alert) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERFORMANCEOBSERVER \
  NS_METHOD Observe(nsIPerformanceGroupDetails *target, nsIPerformanceAlert *alert); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERFORMANCEOBSERVER(_to) \
  NS_IMETHOD Observe(nsIPerformanceGroupDetails *target, nsIPerformanceAlert *alert) override { return _to Observe(target, alert); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERFORMANCEOBSERVER(_to) \
  NS_IMETHOD Observe(nsIPerformanceGroupDetails *target, nsIPerformanceAlert *alert) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Observe(target, alert); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPerformanceObserver : public nsIPerformanceObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERFORMANCEOBSERVER

  nsPerformanceObserver();

private:
  ~nsPerformanceObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPerformanceObserver, nsIPerformanceObserver)

nsPerformanceObserver::nsPerformanceObserver()
{
  /* member initializers and constructor code */
}

nsPerformanceObserver::~nsPerformanceObserver()
{
  /* destructor code */
}

/* void observe (in nsIPerformanceGroupDetails target, in nsIPerformanceAlert alert); */
NS_IMETHODIMP nsPerformanceObserver::Observe(nsIPerformanceGroupDetails *target, nsIPerformanceAlert *alert)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPerformanceObservable */
#define NS_IPERFORMANCEOBSERVABLE_IID_STR "b85720d0-e328-4342-9e46-8ca1acf8c70e"

#define NS_IPERFORMANCEOBSERVABLE_IID \
  {0xb85720d0, 0xe328, 0x4342, \
    { 0x9e, 0x46, 0x8c, 0xa1, 0xac, 0xf8, 0xc7, 0x0e }}

class NS_NO_VTABLE nsIPerformanceObservable : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERFORMANCEOBSERVABLE_IID)

  /* readonly attribute nsIPerformanceGroupDetails target; */
  NS_IMETHOD GetTarget(nsIPerformanceGroupDetails * *aTarget) = 0;

  /* void addJankObserver (in nsIPerformanceObserver observer); */
  NS_IMETHOD AddJankObserver(nsIPerformanceObserver *observer) = 0;

  /* void removeJankObserver (in nsIPerformanceObserver observer); */
  NS_IMETHOD RemoveJankObserver(nsIPerformanceObserver *observer) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPerformanceObservable, NS_IPERFORMANCEOBSERVABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERFORMANCEOBSERVABLE \
  NS_IMETHOD GetTarget(nsIPerformanceGroupDetails * *aTarget) override; \
  NS_IMETHOD AddJankObserver(nsIPerformanceObserver *observer) override; \
  NS_IMETHOD RemoveJankObserver(nsIPerformanceObserver *observer) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERFORMANCEOBSERVABLE \
  NS_METHOD GetTarget(nsIPerformanceGroupDetails * *aTarget); \
  NS_METHOD AddJankObserver(nsIPerformanceObserver *observer); \
  NS_METHOD RemoveJankObserver(nsIPerformanceObserver *observer); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERFORMANCEOBSERVABLE(_to) \
  NS_IMETHOD GetTarget(nsIPerformanceGroupDetails * *aTarget) override { return _to GetTarget(aTarget); } \
  NS_IMETHOD AddJankObserver(nsIPerformanceObserver *observer) override { return _to AddJankObserver(observer); } \
  NS_IMETHOD RemoveJankObserver(nsIPerformanceObserver *observer) override { return _to RemoveJankObserver(observer); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERFORMANCEOBSERVABLE(_to) \
  NS_IMETHOD GetTarget(nsIPerformanceGroupDetails * *aTarget) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_IMETHOD AddJankObserver(nsIPerformanceObserver *observer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddJankObserver(observer); } \
  NS_IMETHOD RemoveJankObserver(nsIPerformanceObserver *observer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveJankObserver(observer); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPerformanceObservable : public nsIPerformanceObservable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERFORMANCEOBSERVABLE

  nsPerformanceObservable();

private:
  ~nsPerformanceObservable();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPerformanceObservable, nsIPerformanceObservable)

nsPerformanceObservable::nsPerformanceObservable()
{
  /* member initializers and constructor code */
}

nsPerformanceObservable::~nsPerformanceObservable()
{
  /* destructor code */
}

/* readonly attribute nsIPerformanceGroupDetails target; */
NS_IMETHODIMP nsPerformanceObservable::GetTarget(nsIPerformanceGroupDetails * *aTarget)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addJankObserver (in nsIPerformanceObserver observer); */
NS_IMETHODIMP nsPerformanceObservable::AddJankObserver(nsIPerformanceObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeJankObserver (in nsIPerformanceObserver observer); */
NS_IMETHODIMP nsPerformanceObservable::RemoveJankObserver(nsIPerformanceObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPerformanceStatsService */
#define NS_IPERFORMANCESTATSSERVICE_IID_STR "505bc42e-be38-4a53-baba-92cb33690cde"

#define NS_IPERFORMANCESTATSSERVICE_IID \
  {0x505bc42e, 0xbe38, 0x4a53, \
    { 0xba, 0xba, 0x92, 0xcb, 0x33, 0x69, 0x0c, 0xde }}

class NS_NO_VTABLE nsIPerformanceStatsService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERFORMANCESTATSSERVICE_IID)

  /* [implicit_jscontext] attribute bool isMonitoringCPOW; */
  NS_IMETHOD GetIsMonitoringCPOW(JSContext* cx, bool *aIsMonitoringCPOW) = 0;
  NS_IMETHOD SetIsMonitoringCPOW(JSContext* cx, bool aIsMonitoringCPOW) = 0;

  /* [implicit_jscontext] attribute bool isMonitoringJank; */
  NS_IMETHOD GetIsMonitoringJank(JSContext* cx, bool *aIsMonitoringJank) = 0;
  NS_IMETHOD SetIsMonitoringJank(JSContext* cx, bool aIsMonitoringJank) = 0;

  /* [implicit_jscontext] attribute bool isMonitoringPerCompartment; */
  NS_IMETHOD GetIsMonitoringPerCompartment(JSContext* cx, bool *aIsMonitoringPerCompartment) = 0;
  NS_IMETHOD SetIsMonitoringPerCompartment(JSContext* cx, bool aIsMonitoringPerCompartment) = 0;

  /* [implicit_jscontext] nsIPerformanceSnapshot getSnapshot (); */
  NS_IMETHOD GetSnapshot(JSContext* cx, nsIPerformanceSnapshot * *_retval) = 0;

  /* attribute unsigned long long jankAlertThreshold; */
  NS_IMETHOD GetJankAlertThreshold(uint64_t *aJankAlertThreshold) = 0;
  NS_IMETHOD SetJankAlertThreshold(uint64_t aJankAlertThreshold) = 0;

  /* attribute short animationJankLevelThreshold; */
  NS_IMETHOD GetAnimationJankLevelThreshold(int16_t *aAnimationJankLevelThreshold) = 0;
  NS_IMETHOD SetAnimationJankLevelThreshold(int16_t aAnimationJankLevelThreshold) = 0;

  /* attribute unsigned long long userInputDelayThreshold; */
  NS_IMETHOD GetUserInputDelayThreshold(uint64_t *aUserInputDelayThreshold) = 0;
  NS_IMETHOD SetUserInputDelayThreshold(uint64_t aUserInputDelayThreshold) = 0;

  /* attribute unsigned long jankAlertBufferingDelay; */
  NS_IMETHOD GetJankAlertBufferingDelay(uint32_t *aJankAlertBufferingDelay) = 0;
  NS_IMETHOD SetJankAlertBufferingDelay(uint32_t aJankAlertBufferingDelay) = 0;

  /* nsIPerformanceObservable getObservableAddon (in AString addonId); */
  NS_IMETHOD GetObservableAddon(const nsAString & addonId, nsIPerformanceObservable * *_retval) = 0;

  /* nsIPerformanceObservable getObservableWindow (in unsigned long long windowId); */
  NS_IMETHOD GetObservableWindow(uint64_t windowId, nsIPerformanceObservable * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPerformanceStatsService, NS_IPERFORMANCESTATSSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERFORMANCESTATSSERVICE \
  NS_IMETHOD GetIsMonitoringCPOW(JSContext* cx, bool *aIsMonitoringCPOW) override; \
  NS_IMETHOD SetIsMonitoringCPOW(JSContext* cx, bool aIsMonitoringCPOW) override; \
  NS_IMETHOD GetIsMonitoringJank(JSContext* cx, bool *aIsMonitoringJank) override; \
  NS_IMETHOD SetIsMonitoringJank(JSContext* cx, bool aIsMonitoringJank) override; \
  NS_IMETHOD GetIsMonitoringPerCompartment(JSContext* cx, bool *aIsMonitoringPerCompartment) override; \
  NS_IMETHOD SetIsMonitoringPerCompartment(JSContext* cx, bool aIsMonitoringPerCompartment) override; \
  NS_IMETHOD GetSnapshot(JSContext* cx, nsIPerformanceSnapshot * *_retval) override; \
  NS_IMETHOD GetJankAlertThreshold(uint64_t *aJankAlertThreshold) override; \
  NS_IMETHOD SetJankAlertThreshold(uint64_t aJankAlertThreshold) override; \
  NS_IMETHOD GetAnimationJankLevelThreshold(int16_t *aAnimationJankLevelThreshold) override; \
  NS_IMETHOD SetAnimationJankLevelThreshold(int16_t aAnimationJankLevelThreshold) override; \
  NS_IMETHOD GetUserInputDelayThreshold(uint64_t *aUserInputDelayThreshold) override; \
  NS_IMETHOD SetUserInputDelayThreshold(uint64_t aUserInputDelayThreshold) override; \
  NS_IMETHOD GetJankAlertBufferingDelay(uint32_t *aJankAlertBufferingDelay) override; \
  NS_IMETHOD SetJankAlertBufferingDelay(uint32_t aJankAlertBufferingDelay) override; \
  NS_IMETHOD GetObservableAddon(const nsAString & addonId, nsIPerformanceObservable * *_retval) override; \
  NS_IMETHOD GetObservableWindow(uint64_t windowId, nsIPerformanceObservable * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERFORMANCESTATSSERVICE \
  NS_METHOD GetIsMonitoringCPOW(JSContext* cx, bool *aIsMonitoringCPOW); \
  NS_METHOD SetIsMonitoringCPOW(JSContext* cx, bool aIsMonitoringCPOW); \
  NS_METHOD GetIsMonitoringJank(JSContext* cx, bool *aIsMonitoringJank); \
  NS_METHOD SetIsMonitoringJank(JSContext* cx, bool aIsMonitoringJank); \
  NS_METHOD GetIsMonitoringPerCompartment(JSContext* cx, bool *aIsMonitoringPerCompartment); \
  NS_METHOD SetIsMonitoringPerCompartment(JSContext* cx, bool aIsMonitoringPerCompartment); \
  NS_METHOD GetSnapshot(JSContext* cx, nsIPerformanceSnapshot * *_retval); \
  NS_METHOD GetJankAlertThreshold(uint64_t *aJankAlertThreshold); \
  NS_METHOD SetJankAlertThreshold(uint64_t aJankAlertThreshold); \
  NS_METHOD GetAnimationJankLevelThreshold(int16_t *aAnimationJankLevelThreshold); \
  NS_METHOD SetAnimationJankLevelThreshold(int16_t aAnimationJankLevelThreshold); \
  NS_METHOD GetUserInputDelayThreshold(uint64_t *aUserInputDelayThreshold); \
  NS_METHOD SetUserInputDelayThreshold(uint64_t aUserInputDelayThreshold); \
  NS_METHOD GetJankAlertBufferingDelay(uint32_t *aJankAlertBufferingDelay); \
  NS_METHOD SetJankAlertBufferingDelay(uint32_t aJankAlertBufferingDelay); \
  NS_METHOD GetObservableAddon(const nsAString & addonId, nsIPerformanceObservable * *_retval); \
  NS_METHOD GetObservableWindow(uint64_t windowId, nsIPerformanceObservable * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERFORMANCESTATSSERVICE(_to) \
  NS_IMETHOD GetIsMonitoringCPOW(JSContext* cx, bool *aIsMonitoringCPOW) override { return _to GetIsMonitoringCPOW(cx, aIsMonitoringCPOW); } \
  NS_IMETHOD SetIsMonitoringCPOW(JSContext* cx, bool aIsMonitoringCPOW) override { return _to SetIsMonitoringCPOW(cx, aIsMonitoringCPOW); } \
  NS_IMETHOD GetIsMonitoringJank(JSContext* cx, bool *aIsMonitoringJank) override { return _to GetIsMonitoringJank(cx, aIsMonitoringJank); } \
  NS_IMETHOD SetIsMonitoringJank(JSContext* cx, bool aIsMonitoringJank) override { return _to SetIsMonitoringJank(cx, aIsMonitoringJank); } \
  NS_IMETHOD GetIsMonitoringPerCompartment(JSContext* cx, bool *aIsMonitoringPerCompartment) override { return _to GetIsMonitoringPerCompartment(cx, aIsMonitoringPerCompartment); } \
  NS_IMETHOD SetIsMonitoringPerCompartment(JSContext* cx, bool aIsMonitoringPerCompartment) override { return _to SetIsMonitoringPerCompartment(cx, aIsMonitoringPerCompartment); } \
  NS_IMETHOD GetSnapshot(JSContext* cx, nsIPerformanceSnapshot * *_retval) override { return _to GetSnapshot(cx, _retval); } \
  NS_IMETHOD GetJankAlertThreshold(uint64_t *aJankAlertThreshold) override { return _to GetJankAlertThreshold(aJankAlertThreshold); } \
  NS_IMETHOD SetJankAlertThreshold(uint64_t aJankAlertThreshold) override { return _to SetJankAlertThreshold(aJankAlertThreshold); } \
  NS_IMETHOD GetAnimationJankLevelThreshold(int16_t *aAnimationJankLevelThreshold) override { return _to GetAnimationJankLevelThreshold(aAnimationJankLevelThreshold); } \
  NS_IMETHOD SetAnimationJankLevelThreshold(int16_t aAnimationJankLevelThreshold) override { return _to SetAnimationJankLevelThreshold(aAnimationJankLevelThreshold); } \
  NS_IMETHOD GetUserInputDelayThreshold(uint64_t *aUserInputDelayThreshold) override { return _to GetUserInputDelayThreshold(aUserInputDelayThreshold); } \
  NS_IMETHOD SetUserInputDelayThreshold(uint64_t aUserInputDelayThreshold) override { return _to SetUserInputDelayThreshold(aUserInputDelayThreshold); } \
  NS_IMETHOD GetJankAlertBufferingDelay(uint32_t *aJankAlertBufferingDelay) override { return _to GetJankAlertBufferingDelay(aJankAlertBufferingDelay); } \
  NS_IMETHOD SetJankAlertBufferingDelay(uint32_t aJankAlertBufferingDelay) override { return _to SetJankAlertBufferingDelay(aJankAlertBufferingDelay); } \
  NS_IMETHOD GetObservableAddon(const nsAString & addonId, nsIPerformanceObservable * *_retval) override { return _to GetObservableAddon(addonId, _retval); } \
  NS_IMETHOD GetObservableWindow(uint64_t windowId, nsIPerformanceObservable * *_retval) override { return _to GetObservableWindow(windowId, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERFORMANCESTATSSERVICE(_to) \
  NS_IMETHOD GetIsMonitoringCPOW(JSContext* cx, bool *aIsMonitoringCPOW) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsMonitoringCPOW(cx, aIsMonitoringCPOW); } \
  NS_IMETHOD SetIsMonitoringCPOW(JSContext* cx, bool aIsMonitoringCPOW) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsMonitoringCPOW(cx, aIsMonitoringCPOW); } \
  NS_IMETHOD GetIsMonitoringJank(JSContext* cx, bool *aIsMonitoringJank) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsMonitoringJank(cx, aIsMonitoringJank); } \
  NS_IMETHOD SetIsMonitoringJank(JSContext* cx, bool aIsMonitoringJank) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsMonitoringJank(cx, aIsMonitoringJank); } \
  NS_IMETHOD GetIsMonitoringPerCompartment(JSContext* cx, bool *aIsMonitoringPerCompartment) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsMonitoringPerCompartment(cx, aIsMonitoringPerCompartment); } \
  NS_IMETHOD SetIsMonitoringPerCompartment(JSContext* cx, bool aIsMonitoringPerCompartment) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIsMonitoringPerCompartment(cx, aIsMonitoringPerCompartment); } \
  NS_IMETHOD GetSnapshot(JSContext* cx, nsIPerformanceSnapshot * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSnapshot(cx, _retval); } \
  NS_IMETHOD GetJankAlertThreshold(uint64_t *aJankAlertThreshold) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJankAlertThreshold(aJankAlertThreshold); } \
  NS_IMETHOD SetJankAlertThreshold(uint64_t aJankAlertThreshold) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJankAlertThreshold(aJankAlertThreshold); } \
  NS_IMETHOD GetAnimationJankLevelThreshold(int16_t *aAnimationJankLevelThreshold) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnimationJankLevelThreshold(aAnimationJankLevelThreshold); } \
  NS_IMETHOD SetAnimationJankLevelThreshold(int16_t aAnimationJankLevelThreshold) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAnimationJankLevelThreshold(aAnimationJankLevelThreshold); } \
  NS_IMETHOD GetUserInputDelayThreshold(uint64_t *aUserInputDelayThreshold) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserInputDelayThreshold(aUserInputDelayThreshold); } \
  NS_IMETHOD SetUserInputDelayThreshold(uint64_t aUserInputDelayThreshold) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserInputDelayThreshold(aUserInputDelayThreshold); } \
  NS_IMETHOD GetJankAlertBufferingDelay(uint32_t *aJankAlertBufferingDelay) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJankAlertBufferingDelay(aJankAlertBufferingDelay); } \
  NS_IMETHOD SetJankAlertBufferingDelay(uint32_t aJankAlertBufferingDelay) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJankAlertBufferingDelay(aJankAlertBufferingDelay); } \
  NS_IMETHOD GetObservableAddon(const nsAString & addonId, nsIPerformanceObservable * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObservableAddon(addonId, _retval); } \
  NS_IMETHOD GetObservableWindow(uint64_t windowId, nsIPerformanceObservable * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObservableWindow(windowId, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPerformanceStatsService : public nsIPerformanceStatsService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERFORMANCESTATSSERVICE

  nsPerformanceStatsService();

private:
  ~nsPerformanceStatsService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPerformanceStatsService, nsIPerformanceStatsService)

nsPerformanceStatsService::nsPerformanceStatsService()
{
  /* member initializers and constructor code */
}

nsPerformanceStatsService::~nsPerformanceStatsService()
{
  /* destructor code */
}

/* [implicit_jscontext] attribute bool isMonitoringCPOW; */
NS_IMETHODIMP nsPerformanceStatsService::GetIsMonitoringCPOW(JSContext* cx, bool *aIsMonitoringCPOW)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPerformanceStatsService::SetIsMonitoringCPOW(JSContext* cx, bool aIsMonitoringCPOW)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute bool isMonitoringJank; */
NS_IMETHODIMP nsPerformanceStatsService::GetIsMonitoringJank(JSContext* cx, bool *aIsMonitoringJank)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPerformanceStatsService::SetIsMonitoringJank(JSContext* cx, bool aIsMonitoringJank)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] attribute bool isMonitoringPerCompartment; */
NS_IMETHODIMP nsPerformanceStatsService::GetIsMonitoringPerCompartment(JSContext* cx, bool *aIsMonitoringPerCompartment)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPerformanceStatsService::SetIsMonitoringPerCompartment(JSContext* cx, bool aIsMonitoringPerCompartment)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] nsIPerformanceSnapshot getSnapshot (); */
NS_IMETHODIMP nsPerformanceStatsService::GetSnapshot(JSContext* cx, nsIPerformanceSnapshot * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long long jankAlertThreshold; */
NS_IMETHODIMP nsPerformanceStatsService::GetJankAlertThreshold(uint64_t *aJankAlertThreshold)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPerformanceStatsService::SetJankAlertThreshold(uint64_t aJankAlertThreshold)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute short animationJankLevelThreshold; */
NS_IMETHODIMP nsPerformanceStatsService::GetAnimationJankLevelThreshold(int16_t *aAnimationJankLevelThreshold)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPerformanceStatsService::SetAnimationJankLevelThreshold(int16_t aAnimationJankLevelThreshold)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long long userInputDelayThreshold; */
NS_IMETHODIMP nsPerformanceStatsService::GetUserInputDelayThreshold(uint64_t *aUserInputDelayThreshold)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPerformanceStatsService::SetUserInputDelayThreshold(uint64_t aUserInputDelayThreshold)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long jankAlertBufferingDelay; */
NS_IMETHODIMP nsPerformanceStatsService::GetJankAlertBufferingDelay(uint32_t *aJankAlertBufferingDelay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsPerformanceStatsService::SetJankAlertBufferingDelay(uint32_t aJankAlertBufferingDelay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPerformanceObservable getObservableAddon (in AString addonId); */
NS_IMETHODIMP nsPerformanceStatsService::GetObservableAddon(const nsAString & addonId, nsIPerformanceObservable * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPerformanceObservable getObservableWindow (in unsigned long long windowId); */
NS_IMETHODIMP nsPerformanceStatsService::GetObservableWindow(uint64_t windowId, nsIPerformanceObservable * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_TOOLKIT_PERFORMANCESTATSSERVICE_CID {0xfd7435d4, 0x9ec4, 0x4699, \
      {0xad, 0xd4, 0x1b, 0xe8, 0x3d, 0xd6, 0x8e, 0xf3} }
#define NS_TOOLKIT_PERFORMANCESTATSSERVICE_CONTRACTID "@mozilla.org/toolkit/performance-stats-service;1"

#endif /* __gen_nsIPerformanceStats_h__ */
