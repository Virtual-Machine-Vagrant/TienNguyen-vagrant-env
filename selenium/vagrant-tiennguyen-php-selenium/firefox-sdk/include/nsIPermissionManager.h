/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIPermissionManager.idl
 */

#ifndef __gen_nsIPermissionManager_h__
#define __gen_nsIPermissionManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIObserver; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class mozIDOMWindow; /* forward declaration */

class nsIPermission; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIPermissionManager */
#define NS_IPERMISSIONMANAGER_IID_STR "4dcb3851-eba2-4e42-b236-82d2596fca22"

#define NS_IPERMISSIONMANAGER_IID \
  {0x4dcb3851, 0xeba2, 0x4e42, \
    { 0xb2, 0x36, 0x82, 0xd2, 0x59, 0x6f, 0xca, 0x22 }}

class NS_NO_VTABLE nsIPermissionManager : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPERMISSIONMANAGER_IID)

  enum {
    UNKNOWN_ACTION = 0U,
    ALLOW_ACTION = 1U,
    DENY_ACTION = 2U,
    PROMPT_ACTION = 3U,
    EXPIRE_NEVER = 0U,
    EXPIRE_SESSION = 1U,
    EXPIRE_TIME = 2U
  };

  /* void add (in nsIURI uri, in string type, in uint32_t permission, [optional] in uint32_t expireType, [optional] in int64_t expireTime); */
  NS_IMETHOD Add(nsIURI *uri, const char * type, uint32_t permission, uint32_t expireType, int64_t expireTime) = 0;

  /* void addFromPrincipal (in nsIPrincipal principal, in string typed, in uint32_t permission, [optional] in uint32_t expireType, [optional] in int64_t expireTime); */
  NS_IMETHOD AddFromPrincipal(nsIPrincipal *principal, const char * typed, uint32_t permission, uint32_t expireType, int64_t expireTime) = 0;

  /* void remove (in nsIURI uri, in string type); */
  NS_IMETHOD Remove(nsIURI *uri, const char * type) = 0;

  /* void removeFromPrincipal (in nsIPrincipal principal, in string type); */
  NS_IMETHOD RemoveFromPrincipal(nsIPrincipal *principal, const char * type) = 0;

  /* void removePermission (in nsIPermission perm); */
  NS_IMETHOD RemovePermission(nsIPermission *perm) = 0;

  /* void removeAll (); */
  NS_IMETHOD RemoveAll(void) = 0;

  /* void removeAllSince (in int64_t since); */
  NS_IMETHOD RemoveAllSince(int64_t since) = 0;

  /* uint32_t testPermission (in nsIURI uri, in string type); */
  NS_IMETHOD TestPermission(nsIURI *uri, const char * type, uint32_t *_retval) = 0;

  /* uint32_t testPermissionFromPrincipal (in nsIPrincipal principal, in string type); */
  NS_IMETHOD TestPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) = 0;

  /* uint32_t testPermissionFromWindow (in mozIDOMWindow window, in string type); */
  NS_IMETHOD TestPermissionFromWindow(mozIDOMWindow *window, const char * type, uint32_t *_retval) = 0;

  /* uint32_t testExactPermission (in nsIURI uri, in string type); */
  NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, uint32_t *_retval) = 0;

  /* uint32_t testExactPermissionFromPrincipal (in nsIPrincipal principal, in string type); */
  NS_IMETHOD TestExactPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) = 0;

  /* uint32_t testExactPermanentPermission (in nsIPrincipal principal, in string type); */
  NS_IMETHOD TestExactPermanentPermission(nsIPrincipal *principal, const char * type, uint32_t *_retval) = 0;

  /* nsIPermission getPermissionObject (in nsIPrincipal principal, in string type, in boolean exactHost); */
  NS_IMETHOD GetPermissionObject(nsIPrincipal *principal, const char * type, bool exactHost, nsIPermission * *_retval) = 0;

  /* void addrefAppId (in unsigned long appId); */
  NS_IMETHOD AddrefAppId(uint32_t appId) = 0;

  /* void releaseAppId (in unsigned long appId); */
  NS_IMETHOD ReleaseAppId(uint32_t appId) = 0;

  /* readonly attribute nsISimpleEnumerator enumerator; */
  NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator) = 0;

  /* void removePermissionsWithAttributes (in DOMString patternAsJSON); */
  NS_IMETHOD RemovePermissionsWithAttributes(const nsAString & patternAsJSON) = 0;

  /* void updateExpireTime (in nsIPrincipal principal, in string type, in boolean exactHost, in uint64_t sessionExpireTime, in uint64_t persistentExpireTime); */
  NS_IMETHOD UpdateExpireTime(nsIPrincipal *principal, const char * type, bool exactHost, uint64_t sessionExpireTime, uint64_t persistentExpireTime) = 0;

  /* void refreshPermission (); */
  NS_IMETHOD RefreshPermission(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPermissionManager, NS_IPERMISSIONMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPERMISSIONMANAGER \
  NS_IMETHOD Add(nsIURI *uri, const char * type, uint32_t permission, uint32_t expireType, int64_t expireTime) override; \
  NS_IMETHOD AddFromPrincipal(nsIPrincipal *principal, const char * typed, uint32_t permission, uint32_t expireType, int64_t expireTime) override; \
  NS_IMETHOD Remove(nsIURI *uri, const char * type) override; \
  NS_IMETHOD RemoveFromPrincipal(nsIPrincipal *principal, const char * type) override; \
  NS_IMETHOD RemovePermission(nsIPermission *perm) override; \
  NS_IMETHOD RemoveAll(void) override; \
  NS_IMETHOD RemoveAllSince(int64_t since) override; \
  NS_IMETHOD TestPermission(nsIURI *uri, const char * type, uint32_t *_retval) override; \
  NS_IMETHOD TestPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) override; \
  NS_IMETHOD TestPermissionFromWindow(mozIDOMWindow *window, const char * type, uint32_t *_retval) override; \
  NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, uint32_t *_retval) override; \
  NS_IMETHOD TestExactPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) override; \
  NS_IMETHOD TestExactPermanentPermission(nsIPrincipal *principal, const char * type, uint32_t *_retval) override; \
  NS_IMETHOD GetPermissionObject(nsIPrincipal *principal, const char * type, bool exactHost, nsIPermission * *_retval) override; \
  NS_IMETHOD AddrefAppId(uint32_t appId) override; \
  NS_IMETHOD ReleaseAppId(uint32_t appId) override; \
  NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator) override; \
  NS_IMETHOD RemovePermissionsWithAttributes(const nsAString & patternAsJSON) override; \
  NS_IMETHOD UpdateExpireTime(nsIPrincipal *principal, const char * type, bool exactHost, uint64_t sessionExpireTime, uint64_t persistentExpireTime) override; \
  NS_IMETHOD RefreshPermission(void) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIPERMISSIONMANAGER \
  NS_METHOD Add(nsIURI *uri, const char * type, uint32_t permission, uint32_t expireType, int64_t expireTime); \
  NS_METHOD AddFromPrincipal(nsIPrincipal *principal, const char * typed, uint32_t permission, uint32_t expireType, int64_t expireTime); \
  NS_METHOD Remove(nsIURI *uri, const char * type); \
  NS_METHOD RemoveFromPrincipal(nsIPrincipal *principal, const char * type); \
  NS_METHOD RemovePermission(nsIPermission *perm); \
  NS_METHOD RemoveAll(void); \
  NS_METHOD RemoveAllSince(int64_t since); \
  NS_METHOD TestPermission(nsIURI *uri, const char * type, uint32_t *_retval); \
  NS_METHOD TestPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval); \
  NS_METHOD TestPermissionFromWindow(mozIDOMWindow *window, const char * type, uint32_t *_retval); \
  NS_METHOD TestExactPermission(nsIURI *uri, const char * type, uint32_t *_retval); \
  NS_METHOD TestExactPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval); \
  NS_METHOD TestExactPermanentPermission(nsIPrincipal *principal, const char * type, uint32_t *_retval); \
  NS_METHOD GetPermissionObject(nsIPrincipal *principal, const char * type, bool exactHost, nsIPermission * *_retval); \
  NS_METHOD AddrefAppId(uint32_t appId); \
  NS_METHOD ReleaseAppId(uint32_t appId); \
  NS_METHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator); \
  NS_METHOD RemovePermissionsWithAttributes(const nsAString & patternAsJSON); \
  NS_METHOD UpdateExpireTime(nsIPrincipal *principal, const char * type, bool exactHost, uint64_t sessionExpireTime, uint64_t persistentExpireTime); \
  NS_METHOD RefreshPermission(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPERMISSIONMANAGER(_to) \
  NS_IMETHOD Add(nsIURI *uri, const char * type, uint32_t permission, uint32_t expireType, int64_t expireTime) override { return _to Add(uri, type, permission, expireType, expireTime); } \
  NS_IMETHOD AddFromPrincipal(nsIPrincipal *principal, const char * typed, uint32_t permission, uint32_t expireType, int64_t expireTime) override { return _to AddFromPrincipal(principal, typed, permission, expireType, expireTime); } \
  NS_IMETHOD Remove(nsIURI *uri, const char * type) override { return _to Remove(uri, type); } \
  NS_IMETHOD RemoveFromPrincipal(nsIPrincipal *principal, const char * type) override { return _to RemoveFromPrincipal(principal, type); } \
  NS_IMETHOD RemovePermission(nsIPermission *perm) override { return _to RemovePermission(perm); } \
  NS_IMETHOD RemoveAll(void) override { return _to RemoveAll(); } \
  NS_IMETHOD RemoveAllSince(int64_t since) override { return _to RemoveAllSince(since); } \
  NS_IMETHOD TestPermission(nsIURI *uri, const char * type, uint32_t *_retval) override { return _to TestPermission(uri, type, _retval); } \
  NS_IMETHOD TestPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) override { return _to TestPermissionFromPrincipal(principal, type, _retval); } \
  NS_IMETHOD TestPermissionFromWindow(mozIDOMWindow *window, const char * type, uint32_t *_retval) override { return _to TestPermissionFromWindow(window, type, _retval); } \
  NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, uint32_t *_retval) override { return _to TestExactPermission(uri, type, _retval); } \
  NS_IMETHOD TestExactPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) override { return _to TestExactPermissionFromPrincipal(principal, type, _retval); } \
  NS_IMETHOD TestExactPermanentPermission(nsIPrincipal *principal, const char * type, uint32_t *_retval) override { return _to TestExactPermanentPermission(principal, type, _retval); } \
  NS_IMETHOD GetPermissionObject(nsIPrincipal *principal, const char * type, bool exactHost, nsIPermission * *_retval) override { return _to GetPermissionObject(principal, type, exactHost, _retval); } \
  NS_IMETHOD AddrefAppId(uint32_t appId) override { return _to AddrefAppId(appId); } \
  NS_IMETHOD ReleaseAppId(uint32_t appId) override { return _to ReleaseAppId(appId); } \
  NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator) override { return _to GetEnumerator(aEnumerator); } \
  NS_IMETHOD RemovePermissionsWithAttributes(const nsAString & patternAsJSON) override { return _to RemovePermissionsWithAttributes(patternAsJSON); } \
  NS_IMETHOD UpdateExpireTime(nsIPrincipal *principal, const char * type, bool exactHost, uint64_t sessionExpireTime, uint64_t persistentExpireTime) override { return _to UpdateExpireTime(principal, type, exactHost, sessionExpireTime, persistentExpireTime); } \
  NS_IMETHOD RefreshPermission(void) override { return _to RefreshPermission(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPERMISSIONMANAGER(_to) \
  NS_IMETHOD Add(nsIURI *uri, const char * type, uint32_t permission, uint32_t expireType, int64_t expireTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Add(uri, type, permission, expireType, expireTime); } \
  NS_IMETHOD AddFromPrincipal(nsIPrincipal *principal, const char * typed, uint32_t permission, uint32_t expireType, int64_t expireTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddFromPrincipal(principal, typed, permission, expireType, expireTime); } \
  NS_IMETHOD Remove(nsIURI *uri, const char * type) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Remove(uri, type); } \
  NS_IMETHOD RemoveFromPrincipal(nsIPrincipal *principal, const char * type) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFromPrincipal(principal, type); } \
  NS_IMETHOD RemovePermission(nsIPermission *perm) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemovePermission(perm); } \
  NS_IMETHOD RemoveAll(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAll(); } \
  NS_IMETHOD RemoveAllSince(int64_t since) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveAllSince(since); } \
  NS_IMETHOD TestPermission(nsIURI *uri, const char * type, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TestPermission(uri, type, _retval); } \
  NS_IMETHOD TestPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TestPermissionFromPrincipal(principal, type, _retval); } \
  NS_IMETHOD TestPermissionFromWindow(mozIDOMWindow *window, const char * type, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TestPermissionFromWindow(window, type, _retval); } \
  NS_IMETHOD TestExactPermission(nsIURI *uri, const char * type, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TestExactPermission(uri, type, _retval); } \
  NS_IMETHOD TestExactPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TestExactPermissionFromPrincipal(principal, type, _retval); } \
  NS_IMETHOD TestExactPermanentPermission(nsIPrincipal *principal, const char * type, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->TestExactPermanentPermission(principal, type, _retval); } \
  NS_IMETHOD GetPermissionObject(nsIPrincipal *principal, const char * type, bool exactHost, nsIPermission * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPermissionObject(principal, type, exactHost, _retval); } \
  NS_IMETHOD AddrefAppId(uint32_t appId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddrefAppId(appId); } \
  NS_IMETHOD ReleaseAppId(uint32_t appId) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReleaseAppId(appId); } \
  NS_IMETHOD GetEnumerator(nsISimpleEnumerator * *aEnumerator) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnumerator(aEnumerator); } \
  NS_IMETHOD RemovePermissionsWithAttributes(const nsAString & patternAsJSON) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemovePermissionsWithAttributes(patternAsJSON); } \
  NS_IMETHOD UpdateExpireTime(nsIPrincipal *principal, const char * type, bool exactHost, uint64_t sessionExpireTime, uint64_t persistentExpireTime) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateExpireTime(principal, type, exactHost, sessionExpireTime, persistentExpireTime); } \
  NS_IMETHOD RefreshPermission(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RefreshPermission(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPermissionManager : public nsIPermissionManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPERMISSIONMANAGER

  nsPermissionManager();

private:
  ~nsPermissionManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsPermissionManager, nsIPermissionManager)

nsPermissionManager::nsPermissionManager()
{
  /* member initializers and constructor code */
}

nsPermissionManager::~nsPermissionManager()
{
  /* destructor code */
}

/* void add (in nsIURI uri, in string type, in uint32_t permission, [optional] in uint32_t expireType, [optional] in int64_t expireTime); */
NS_IMETHODIMP nsPermissionManager::Add(nsIURI *uri, const char * type, uint32_t permission, uint32_t expireType, int64_t expireTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addFromPrincipal (in nsIPrincipal principal, in string typed, in uint32_t permission, [optional] in uint32_t expireType, [optional] in int64_t expireTime); */
NS_IMETHODIMP nsPermissionManager::AddFromPrincipal(nsIPrincipal *principal, const char * typed, uint32_t permission, uint32_t expireType, int64_t expireTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void remove (in nsIURI uri, in string type); */
NS_IMETHODIMP nsPermissionManager::Remove(nsIURI *uri, const char * type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFromPrincipal (in nsIPrincipal principal, in string type); */
NS_IMETHODIMP nsPermissionManager::RemoveFromPrincipal(nsIPrincipal *principal, const char * type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removePermission (in nsIPermission perm); */
NS_IMETHODIMP nsPermissionManager::RemovePermission(nsIPermission *perm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAll (); */
NS_IMETHODIMP nsPermissionManager::RemoveAll()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeAllSince (in int64_t since); */
NS_IMETHODIMP nsPermissionManager::RemoveAllSince(int64_t since)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t testPermission (in nsIURI uri, in string type); */
NS_IMETHODIMP nsPermissionManager::TestPermission(nsIURI *uri, const char * type, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t testPermissionFromPrincipal (in nsIPrincipal principal, in string type); */
NS_IMETHODIMP nsPermissionManager::TestPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t testPermissionFromWindow (in mozIDOMWindow window, in string type); */
NS_IMETHODIMP nsPermissionManager::TestPermissionFromWindow(mozIDOMWindow *window, const char * type, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t testExactPermission (in nsIURI uri, in string type); */
NS_IMETHODIMP nsPermissionManager::TestExactPermission(nsIURI *uri, const char * type, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t testExactPermissionFromPrincipal (in nsIPrincipal principal, in string type); */
NS_IMETHODIMP nsPermissionManager::TestExactPermissionFromPrincipal(nsIPrincipal *principal, const char * type, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* uint32_t testExactPermanentPermission (in nsIPrincipal principal, in string type); */
NS_IMETHODIMP nsPermissionManager::TestExactPermanentPermission(nsIPrincipal *principal, const char * type, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPermission getPermissionObject (in nsIPrincipal principal, in string type, in boolean exactHost); */
NS_IMETHODIMP nsPermissionManager::GetPermissionObject(nsIPrincipal *principal, const char * type, bool exactHost, nsIPermission * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addrefAppId (in unsigned long appId); */
NS_IMETHODIMP nsPermissionManager::AddrefAppId(uint32_t appId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void releaseAppId (in unsigned long appId); */
NS_IMETHODIMP nsPermissionManager::ReleaseAppId(uint32_t appId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator enumerator; */
NS_IMETHODIMP nsPermissionManager::GetEnumerator(nsISimpleEnumerator * *aEnumerator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removePermissionsWithAttributes (in DOMString patternAsJSON); */
NS_IMETHODIMP nsPermissionManager::RemovePermissionsWithAttributes(const nsAString & patternAsJSON)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateExpireTime (in nsIPrincipal principal, in string type, in boolean exactHost, in uint64_t sessionExpireTime, in uint64_t persistentExpireTime); */
NS_IMETHODIMP nsPermissionManager::UpdateExpireTime(nsIPrincipal *principal, const char * type, bool exactHost, uint64_t sessionExpireTime, uint64_t persistentExpireTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void refreshPermission (); */
NS_IMETHODIMP nsPermissionManager::RefreshPermission()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_PERMISSIONMANAGER_CONTRACTID "@mozilla.org/permissionmanager;1"
#define PERM_CHANGE_NOTIFICATION "perm-changed"

#endif /* __gen_nsIPermissionManager_h__ */
