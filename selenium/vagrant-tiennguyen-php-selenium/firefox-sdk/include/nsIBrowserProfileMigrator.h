/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIBrowserProfileMigrator.idl
 */

#ifndef __gen_nsIBrowserProfileMigrator_h__
#define __gen_nsIBrowserProfileMigrator_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIProfileStartup; /* forward declaration */


/* starting interface:    nsIBrowserProfileMigrator */
#define NS_IBROWSERPROFILEMIGRATOR_IID_STR "22b56ffc-3149-43c5-b5a9-b3a6b678de93"

#define NS_IBROWSERPROFILEMIGRATOR_IID \
  {0x22b56ffc, 0x3149, 0x43c5, \
    { 0xb5, 0xa9, 0xb3, 0xa6, 0xb6, 0x78, 0xde, 0x93 }}

class NS_NO_VTABLE nsIBrowserProfileMigrator : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBROWSERPROFILEMIGRATOR_IID)

  enum {
    ALL = 0U,
    SETTINGS = 1U,
    COOKIES = 2U,
    HISTORY = 4U,
    FORMDATA = 8U,
    PASSWORDS = 16U,
    BOOKMARKS = 32U,
    OTHERDATA = 64U,
    SESSION = 128U
  };

  /* void migrate (in unsigned short aItems, in nsIProfileStartup aStartup, in jsval aProfile); */
  NS_IMETHOD Migrate(uint16_t aItems, nsIProfileStartup *aStartup, JS::HandleValue aProfile) = 0;

  /* unsigned short getMigrateData (in jsval aProfile, in boolean aDoingStartup); */
  NS_IMETHOD GetMigrateData(JS::HandleValue aProfile, bool aDoingStartup, uint16_t *_retval) = 0;

  /* readonly attribute boolean sourceExists; */
  NS_IMETHOD GetSourceExists(bool *aSourceExists) = 0;

  /* readonly attribute jsval sourceProfiles; */
  NS_IMETHOD GetSourceProfiles(JS::MutableHandleValue aSourceProfiles) = 0;

  /* readonly attribute AUTF8String sourceHomePageURL; */
  NS_IMETHOD GetSourceHomePageURL(nsACString & aSourceHomePageURL) = 0;

  /* readonly attribute boolean sourceLocked; */
  NS_IMETHOD GetSourceLocked(bool *aSourceLocked) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBrowserProfileMigrator, NS_IBROWSERPROFILEMIGRATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBROWSERPROFILEMIGRATOR \
  NS_IMETHOD Migrate(uint16_t aItems, nsIProfileStartup *aStartup, JS::HandleValue aProfile) override; \
  NS_IMETHOD GetMigrateData(JS::HandleValue aProfile, bool aDoingStartup, uint16_t *_retval) override; \
  NS_IMETHOD GetSourceExists(bool *aSourceExists) override; \
  NS_IMETHOD GetSourceProfiles(JS::MutableHandleValue aSourceProfiles) override; \
  NS_IMETHOD GetSourceHomePageURL(nsACString & aSourceHomePageURL) override; \
  NS_IMETHOD GetSourceLocked(bool *aSourceLocked) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIBROWSERPROFILEMIGRATOR \
  NS_METHOD Migrate(uint16_t aItems, nsIProfileStartup *aStartup, JS::HandleValue aProfile); \
  NS_METHOD GetMigrateData(JS::HandleValue aProfile, bool aDoingStartup, uint16_t *_retval); \
  NS_METHOD GetSourceExists(bool *aSourceExists); \
  NS_METHOD GetSourceProfiles(JS::MutableHandleValue aSourceProfiles); \
  NS_METHOD GetSourceHomePageURL(nsACString & aSourceHomePageURL); \
  NS_METHOD GetSourceLocked(bool *aSourceLocked); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBROWSERPROFILEMIGRATOR(_to) \
  NS_IMETHOD Migrate(uint16_t aItems, nsIProfileStartup *aStartup, JS::HandleValue aProfile) override { return _to Migrate(aItems, aStartup, aProfile); } \
  NS_IMETHOD GetMigrateData(JS::HandleValue aProfile, bool aDoingStartup, uint16_t *_retval) override { return _to GetMigrateData(aProfile, aDoingStartup, _retval); } \
  NS_IMETHOD GetSourceExists(bool *aSourceExists) override { return _to GetSourceExists(aSourceExists); } \
  NS_IMETHOD GetSourceProfiles(JS::MutableHandleValue aSourceProfiles) override { return _to GetSourceProfiles(aSourceProfiles); } \
  NS_IMETHOD GetSourceHomePageURL(nsACString & aSourceHomePageURL) override { return _to GetSourceHomePageURL(aSourceHomePageURL); } \
  NS_IMETHOD GetSourceLocked(bool *aSourceLocked) override { return _to GetSourceLocked(aSourceLocked); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBROWSERPROFILEMIGRATOR(_to) \
  NS_IMETHOD Migrate(uint16_t aItems, nsIProfileStartup *aStartup, JS::HandleValue aProfile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Migrate(aItems, aStartup, aProfile); } \
  NS_IMETHOD GetMigrateData(JS::HandleValue aProfile, bool aDoingStartup, uint16_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMigrateData(aProfile, aDoingStartup, _retval); } \
  NS_IMETHOD GetSourceExists(bool *aSourceExists) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceExists(aSourceExists); } \
  NS_IMETHOD GetSourceProfiles(JS::MutableHandleValue aSourceProfiles) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceProfiles(aSourceProfiles); } \
  NS_IMETHOD GetSourceHomePageURL(nsACString & aSourceHomePageURL) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceHomePageURL(aSourceHomePageURL); } \
  NS_IMETHOD GetSourceLocked(bool *aSourceLocked) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceLocked(aSourceLocked); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBrowserProfileMigrator : public nsIBrowserProfileMigrator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBROWSERPROFILEMIGRATOR

  nsBrowserProfileMigrator();

private:
  ~nsBrowserProfileMigrator();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsBrowserProfileMigrator, nsIBrowserProfileMigrator)

nsBrowserProfileMigrator::nsBrowserProfileMigrator()
{
  /* member initializers and constructor code */
}

nsBrowserProfileMigrator::~nsBrowserProfileMigrator()
{
  /* destructor code */
}

/* void migrate (in unsigned short aItems, in nsIProfileStartup aStartup, in jsval aProfile); */
NS_IMETHODIMP nsBrowserProfileMigrator::Migrate(uint16_t aItems, nsIProfileStartup *aStartup, JS::HandleValue aProfile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned short getMigrateData (in jsval aProfile, in boolean aDoingStartup); */
NS_IMETHODIMP nsBrowserProfileMigrator::GetMigrateData(JS::HandleValue aProfile, bool aDoingStartup, uint16_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean sourceExists; */
NS_IMETHODIMP nsBrowserProfileMigrator::GetSourceExists(bool *aSourceExists)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsval sourceProfiles; */
NS_IMETHODIMP nsBrowserProfileMigrator::GetSourceProfiles(JS::MutableHandleValue aSourceProfiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String sourceHomePageURL; */
NS_IMETHODIMP nsBrowserProfileMigrator::GetSourceHomePageURL(nsACString & aSourceHomePageURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean sourceLocked; */
NS_IMETHODIMP nsBrowserProfileMigrator::GetSourceLocked(bool *aSourceLocked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIBrowserProfileMigrator_h__ */
