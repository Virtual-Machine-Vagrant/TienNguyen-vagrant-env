/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsISessionStore.idl
 */

#ifndef __gen_nsISessionStore_h__
#define __gen_nsISessionStore_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMWindow; /* forward declaration */

class nsIDOMNode; /* forward declaration */


/* starting interface:    nsISessionStore */
#define NS_ISESSIONSTORE_IID_STR "4580f5eb-693d-423d-b0ce-2cb20a962e4d"

#define NS_ISESSIONSTORE_IID \
  {0x4580f5eb, 0x693d, 0x423d, \
    { 0xb0, 0xce, 0x2c, 0xb2, 0x0a, 0x96, 0x2e, 0x4d }}

class NS_NO_VTABLE nsISessionStore : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISESSIONSTORE_IID)

  /* attribute boolean canRestoreLastSession; */
  NS_IMETHOD GetCanRestoreLastSession(bool *aCanRestoreLastSession) = 0;
  NS_IMETHOD SetCanRestoreLastSession(bool aCanRestoreLastSession) = 0;

  /* void restoreLastSession (); */
  NS_IMETHOD RestoreLastSession(void) = 0;

  /* AString getBrowserState (); */
  NS_IMETHOD GetBrowserState(nsAString & _retval) = 0;

  /* void setBrowserState (in AString aState); */
  NS_IMETHOD SetBrowserState(const nsAString & aState) = 0;

  /* AString getWindowState (in nsIDOMWindow aWindow); */
  NS_IMETHOD GetWindowState(nsIDOMWindow *aWindow, nsAString & _retval) = 0;

  /* void setWindowState (in nsIDOMWindow aWindow, in AString aState, in boolean aOverwrite); */
  NS_IMETHOD SetWindowState(nsIDOMWindow *aWindow, const nsAString & aState, bool aOverwrite) = 0;

  /* AString getTabState (in nsIDOMNode aTab); */
  NS_IMETHOD GetTabState(nsIDOMNode *aTab, nsAString & _retval) = 0;

  /* void setTabState (in nsIDOMNode aTab, in AString aState); */
  NS_IMETHOD SetTabState(nsIDOMNode *aTab, const nsAString & aState) = 0;

  /* nsIDOMNode duplicateTab (in nsIDOMWindow aWindow, in nsIDOMNode aTab, [optional] in long aDelta); */
  NS_IMETHOD DuplicateTab(nsIDOMWindow *aWindow, nsIDOMNode *aTab, int32_t aDelta, nsIDOMNode * *_retval) = 0;

  /* unsigned long getClosedTabCount (in nsIDOMWindow aWindow); */
  NS_IMETHOD GetClosedTabCount(nsIDOMWindow *aWindow, uint32_t *_retval) = 0;

  /* AString getClosedTabData (in nsIDOMWindow aWindow); */
  NS_IMETHOD GetClosedTabData(nsIDOMWindow *aWindow, nsAString & _retval) = 0;

  /* nsIDOMNode undoCloseTab (in nsIDOMWindow aWindow, in unsigned long aIndex); */
  NS_IMETHOD UndoCloseTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) = 0;

  /* nsIDOMNode forgetClosedTab (in nsIDOMWindow aWindow, in unsigned long aIndex); */
  NS_IMETHOD ForgetClosedTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) = 0;

  /* unsigned long getClosedWindowCount (); */
  NS_IMETHOD GetClosedWindowCount(uint32_t *_retval) = 0;

  /* AString getClosedWindowData (); */
  NS_IMETHOD GetClosedWindowData(nsAString & _retval) = 0;

  /* nsIDOMWindow undoCloseWindow (in unsigned long aIndex); */
  NS_IMETHOD UndoCloseWindow(uint32_t aIndex, nsIDOMWindow * *_retval) = 0;

  /* nsIDOMNode forgetClosedWindow (in unsigned long aIndex); */
  NS_IMETHOD ForgetClosedWindow(uint32_t aIndex, nsIDOMNode * *_retval) = 0;

  /* AString getWindowValue (in nsIDOMWindow aWindow, in AString aKey); */
  NS_IMETHOD GetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, nsAString & _retval) = 0;

  /* void setWindowValue (in nsIDOMWindow aWindow, in AString aKey, in jsval aStringValue); */
  NS_IMETHOD SetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, JS::HandleValue aStringValue) = 0;

  /* void deleteWindowValue (in nsIDOMWindow aWindow, in AString aKey); */
  NS_IMETHOD DeleteWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey) = 0;

  /* AString getTabValue (in nsIDOMNode aTab, in AString aKey); */
  NS_IMETHOD GetTabValue(nsIDOMNode *aTab, const nsAString & aKey, nsAString & _retval) = 0;

  /* void setTabValue (in nsIDOMNode aTab, in AString aKey, in jsval aStringValue); */
  NS_IMETHOD SetTabValue(nsIDOMNode *aTab, const nsAString & aKey, JS::HandleValue aStringValue) = 0;

  /* void deleteTabValue (in nsIDOMNode aTab, in AString aKey); */
  NS_IMETHOD DeleteTabValue(nsIDOMNode *aTab, const nsAString & aKey) = 0;

  /* AString getGlobalValue (in AString aKey); */
  NS_IMETHOD GetGlobalValue(const nsAString & aKey, nsAString & _retval) = 0;

  /* void setGlobalValue (in AString aKey, in jsval aStringValue); */
  NS_IMETHOD SetGlobalValue(const nsAString & aKey, JS::HandleValue aStringValue) = 0;

  /* void deleteGlobalValue (in AString aKey); */
  NS_IMETHOD DeleteGlobalValue(const nsAString & aKey) = 0;

  /* void persistTabAttribute (in AString aName); */
  NS_IMETHOD PersistTabAttribute(const nsAString & aName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISessionStore, NS_ISESSIONSTORE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISESSIONSTORE \
  NS_IMETHOD GetCanRestoreLastSession(bool *aCanRestoreLastSession) override; \
  NS_IMETHOD SetCanRestoreLastSession(bool aCanRestoreLastSession) override; \
  NS_IMETHOD RestoreLastSession(void) override; \
  NS_IMETHOD GetBrowserState(nsAString & _retval) override; \
  NS_IMETHOD SetBrowserState(const nsAString & aState) override; \
  NS_IMETHOD GetWindowState(nsIDOMWindow *aWindow, nsAString & _retval) override; \
  NS_IMETHOD SetWindowState(nsIDOMWindow *aWindow, const nsAString & aState, bool aOverwrite) override; \
  NS_IMETHOD GetTabState(nsIDOMNode *aTab, nsAString & _retval) override; \
  NS_IMETHOD SetTabState(nsIDOMNode *aTab, const nsAString & aState) override; \
  NS_IMETHOD DuplicateTab(nsIDOMWindow *aWindow, nsIDOMNode *aTab, int32_t aDelta, nsIDOMNode * *_retval) override; \
  NS_IMETHOD GetClosedTabCount(nsIDOMWindow *aWindow, uint32_t *_retval) override; \
  NS_IMETHOD GetClosedTabData(nsIDOMWindow *aWindow, nsAString & _retval) override; \
  NS_IMETHOD UndoCloseTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) override; \
  NS_IMETHOD ForgetClosedTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) override; \
  NS_IMETHOD GetClosedWindowCount(uint32_t *_retval) override; \
  NS_IMETHOD GetClosedWindowData(nsAString & _retval) override; \
  NS_IMETHOD UndoCloseWindow(uint32_t aIndex, nsIDOMWindow * *_retval) override; \
  NS_IMETHOD ForgetClosedWindow(uint32_t aIndex, nsIDOMNode * *_retval) override; \
  NS_IMETHOD GetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, nsAString & _retval) override; \
  NS_IMETHOD SetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, JS::HandleValue aStringValue) override; \
  NS_IMETHOD DeleteWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey) override; \
  NS_IMETHOD GetTabValue(nsIDOMNode *aTab, const nsAString & aKey, nsAString & _retval) override; \
  NS_IMETHOD SetTabValue(nsIDOMNode *aTab, const nsAString & aKey, JS::HandleValue aStringValue) override; \
  NS_IMETHOD DeleteTabValue(nsIDOMNode *aTab, const nsAString & aKey) override; \
  NS_IMETHOD GetGlobalValue(const nsAString & aKey, nsAString & _retval) override; \
  NS_IMETHOD SetGlobalValue(const nsAString & aKey, JS::HandleValue aStringValue) override; \
  NS_IMETHOD DeleteGlobalValue(const nsAString & aKey) override; \
  NS_IMETHOD PersistTabAttribute(const nsAString & aName) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSISESSIONSTORE \
  NS_METHOD GetCanRestoreLastSession(bool *aCanRestoreLastSession); \
  NS_METHOD SetCanRestoreLastSession(bool aCanRestoreLastSession); \
  NS_METHOD RestoreLastSession(void); \
  NS_METHOD GetBrowserState(nsAString & _retval); \
  NS_METHOD SetBrowserState(const nsAString & aState); \
  NS_METHOD GetWindowState(nsIDOMWindow *aWindow, nsAString & _retval); \
  NS_METHOD SetWindowState(nsIDOMWindow *aWindow, const nsAString & aState, bool aOverwrite); \
  NS_METHOD GetTabState(nsIDOMNode *aTab, nsAString & _retval); \
  NS_METHOD SetTabState(nsIDOMNode *aTab, const nsAString & aState); \
  NS_METHOD DuplicateTab(nsIDOMWindow *aWindow, nsIDOMNode *aTab, int32_t aDelta, nsIDOMNode * *_retval); \
  NS_METHOD GetClosedTabCount(nsIDOMWindow *aWindow, uint32_t *_retval); \
  NS_METHOD GetClosedTabData(nsIDOMWindow *aWindow, nsAString & _retval); \
  NS_METHOD UndoCloseTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval); \
  NS_METHOD ForgetClosedTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval); \
  NS_METHOD GetClosedWindowCount(uint32_t *_retval); \
  NS_METHOD GetClosedWindowData(nsAString & _retval); \
  NS_METHOD UndoCloseWindow(uint32_t aIndex, nsIDOMWindow * *_retval); \
  NS_METHOD ForgetClosedWindow(uint32_t aIndex, nsIDOMNode * *_retval); \
  NS_METHOD GetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, nsAString & _retval); \
  NS_METHOD SetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, JS::HandleValue aStringValue); \
  NS_METHOD DeleteWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey); \
  NS_METHOD GetTabValue(nsIDOMNode *aTab, const nsAString & aKey, nsAString & _retval); \
  NS_METHOD SetTabValue(nsIDOMNode *aTab, const nsAString & aKey, JS::HandleValue aStringValue); \
  NS_METHOD DeleteTabValue(nsIDOMNode *aTab, const nsAString & aKey); \
  NS_METHOD GetGlobalValue(const nsAString & aKey, nsAString & _retval); \
  NS_METHOD SetGlobalValue(const nsAString & aKey, JS::HandleValue aStringValue); \
  NS_METHOD DeleteGlobalValue(const nsAString & aKey); \
  NS_METHOD PersistTabAttribute(const nsAString & aName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISESSIONSTORE(_to) \
  NS_IMETHOD GetCanRestoreLastSession(bool *aCanRestoreLastSession) override { return _to GetCanRestoreLastSession(aCanRestoreLastSession); } \
  NS_IMETHOD SetCanRestoreLastSession(bool aCanRestoreLastSession) override { return _to SetCanRestoreLastSession(aCanRestoreLastSession); } \
  NS_IMETHOD RestoreLastSession(void) override { return _to RestoreLastSession(); } \
  NS_IMETHOD GetBrowserState(nsAString & _retval) override { return _to GetBrowserState(_retval); } \
  NS_IMETHOD SetBrowserState(const nsAString & aState) override { return _to SetBrowserState(aState); } \
  NS_IMETHOD GetWindowState(nsIDOMWindow *aWindow, nsAString & _retval) override { return _to GetWindowState(aWindow, _retval); } \
  NS_IMETHOD SetWindowState(nsIDOMWindow *aWindow, const nsAString & aState, bool aOverwrite) override { return _to SetWindowState(aWindow, aState, aOverwrite); } \
  NS_IMETHOD GetTabState(nsIDOMNode *aTab, nsAString & _retval) override { return _to GetTabState(aTab, _retval); } \
  NS_IMETHOD SetTabState(nsIDOMNode *aTab, const nsAString & aState) override { return _to SetTabState(aTab, aState); } \
  NS_IMETHOD DuplicateTab(nsIDOMWindow *aWindow, nsIDOMNode *aTab, int32_t aDelta, nsIDOMNode * *_retval) override { return _to DuplicateTab(aWindow, aTab, aDelta, _retval); } \
  NS_IMETHOD GetClosedTabCount(nsIDOMWindow *aWindow, uint32_t *_retval) override { return _to GetClosedTabCount(aWindow, _retval); } \
  NS_IMETHOD GetClosedTabData(nsIDOMWindow *aWindow, nsAString & _retval) override { return _to GetClosedTabData(aWindow, _retval); } \
  NS_IMETHOD UndoCloseTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) override { return _to UndoCloseTab(aWindow, aIndex, _retval); } \
  NS_IMETHOD ForgetClosedTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) override { return _to ForgetClosedTab(aWindow, aIndex, _retval); } \
  NS_IMETHOD GetClosedWindowCount(uint32_t *_retval) override { return _to GetClosedWindowCount(_retval); } \
  NS_IMETHOD GetClosedWindowData(nsAString & _retval) override { return _to GetClosedWindowData(_retval); } \
  NS_IMETHOD UndoCloseWindow(uint32_t aIndex, nsIDOMWindow * *_retval) override { return _to UndoCloseWindow(aIndex, _retval); } \
  NS_IMETHOD ForgetClosedWindow(uint32_t aIndex, nsIDOMNode * *_retval) override { return _to ForgetClosedWindow(aIndex, _retval); } \
  NS_IMETHOD GetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, nsAString & _retval) override { return _to GetWindowValue(aWindow, aKey, _retval); } \
  NS_IMETHOD SetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, JS::HandleValue aStringValue) override { return _to SetWindowValue(aWindow, aKey, aStringValue); } \
  NS_IMETHOD DeleteWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey) override { return _to DeleteWindowValue(aWindow, aKey); } \
  NS_IMETHOD GetTabValue(nsIDOMNode *aTab, const nsAString & aKey, nsAString & _retval) override { return _to GetTabValue(aTab, aKey, _retval); } \
  NS_IMETHOD SetTabValue(nsIDOMNode *aTab, const nsAString & aKey, JS::HandleValue aStringValue) override { return _to SetTabValue(aTab, aKey, aStringValue); } \
  NS_IMETHOD DeleteTabValue(nsIDOMNode *aTab, const nsAString & aKey) override { return _to DeleteTabValue(aTab, aKey); } \
  NS_IMETHOD GetGlobalValue(const nsAString & aKey, nsAString & _retval) override { return _to GetGlobalValue(aKey, _retval); } \
  NS_IMETHOD SetGlobalValue(const nsAString & aKey, JS::HandleValue aStringValue) override { return _to SetGlobalValue(aKey, aStringValue); } \
  NS_IMETHOD DeleteGlobalValue(const nsAString & aKey) override { return _to DeleteGlobalValue(aKey); } \
  NS_IMETHOD PersistTabAttribute(const nsAString & aName) override { return _to PersistTabAttribute(aName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISESSIONSTORE(_to) \
  NS_IMETHOD GetCanRestoreLastSession(bool *aCanRestoreLastSession) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanRestoreLastSession(aCanRestoreLastSession); } \
  NS_IMETHOD SetCanRestoreLastSession(bool aCanRestoreLastSession) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCanRestoreLastSession(aCanRestoreLastSession); } \
  NS_IMETHOD RestoreLastSession(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RestoreLastSession(); } \
  NS_IMETHOD GetBrowserState(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBrowserState(_retval); } \
  NS_IMETHOD SetBrowserState(const nsAString & aState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBrowserState(aState); } \
  NS_IMETHOD GetWindowState(nsIDOMWindow *aWindow, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowState(aWindow, _retval); } \
  NS_IMETHOD SetWindowState(nsIDOMWindow *aWindow, const nsAString & aState, bool aOverwrite) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWindowState(aWindow, aState, aOverwrite); } \
  NS_IMETHOD GetTabState(nsIDOMNode *aTab, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabState(aTab, _retval); } \
  NS_IMETHOD SetTabState(nsIDOMNode *aTab, const nsAString & aState) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTabState(aTab, aState); } \
  NS_IMETHOD DuplicateTab(nsIDOMWindow *aWindow, nsIDOMNode *aTab, int32_t aDelta, nsIDOMNode * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DuplicateTab(aWindow, aTab, aDelta, _retval); } \
  NS_IMETHOD GetClosedTabCount(nsIDOMWindow *aWindow, uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClosedTabCount(aWindow, _retval); } \
  NS_IMETHOD GetClosedTabData(nsIDOMWindow *aWindow, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClosedTabData(aWindow, _retval); } \
  NS_IMETHOD UndoCloseTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UndoCloseTab(aWindow, aIndex, _retval); } \
  NS_IMETHOD ForgetClosedTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ForgetClosedTab(aWindow, aIndex, _retval); } \
  NS_IMETHOD GetClosedWindowCount(uint32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClosedWindowCount(_retval); } \
  NS_IMETHOD GetClosedWindowData(nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClosedWindowData(_retval); } \
  NS_IMETHOD UndoCloseWindow(uint32_t aIndex, nsIDOMWindow * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->UndoCloseWindow(aIndex, _retval); } \
  NS_IMETHOD ForgetClosedWindow(uint32_t aIndex, nsIDOMNode * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ForgetClosedWindow(aIndex, _retval); } \
  NS_IMETHOD GetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWindowValue(aWindow, aKey, _retval); } \
  NS_IMETHOD SetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, JS::HandleValue aStringValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWindowValue(aWindow, aKey, aStringValue); } \
  NS_IMETHOD DeleteWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteWindowValue(aWindow, aKey); } \
  NS_IMETHOD GetTabValue(nsIDOMNode *aTab, const nsAString & aKey, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTabValue(aTab, aKey, _retval); } \
  NS_IMETHOD SetTabValue(nsIDOMNode *aTab, const nsAString & aKey, JS::HandleValue aStringValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTabValue(aTab, aKey, aStringValue); } \
  NS_IMETHOD DeleteTabValue(nsIDOMNode *aTab, const nsAString & aKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteTabValue(aTab, aKey); } \
  NS_IMETHOD GetGlobalValue(const nsAString & aKey, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalValue(aKey, _retval); } \
  NS_IMETHOD SetGlobalValue(const nsAString & aKey, JS::HandleValue aStringValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGlobalValue(aKey, aStringValue); } \
  NS_IMETHOD DeleteGlobalValue(const nsAString & aKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteGlobalValue(aKey); } \
  NS_IMETHOD PersistTabAttribute(const nsAString & aName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->PersistTabAttribute(aName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSessionStore : public nsISessionStore
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISESSIONSTORE

  nsSessionStore();

private:
  ~nsSessionStore();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsSessionStore, nsISessionStore)

nsSessionStore::nsSessionStore()
{
  /* member initializers and constructor code */
}

nsSessionStore::~nsSessionStore()
{
  /* destructor code */
}

/* attribute boolean canRestoreLastSession; */
NS_IMETHODIMP nsSessionStore::GetCanRestoreLastSession(bool *aCanRestoreLastSession)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSessionStore::SetCanRestoreLastSession(bool aCanRestoreLastSession)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void restoreLastSession (); */
NS_IMETHODIMP nsSessionStore::RestoreLastSession()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getBrowserState (); */
NS_IMETHODIMP nsSessionStore::GetBrowserState(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setBrowserState (in AString aState); */
NS_IMETHODIMP nsSessionStore::SetBrowserState(const nsAString & aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getWindowState (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsSessionStore::GetWindowState(nsIDOMWindow *aWindow, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWindowState (in nsIDOMWindow aWindow, in AString aState, in boolean aOverwrite); */
NS_IMETHODIMP nsSessionStore::SetWindowState(nsIDOMWindow *aWindow, const nsAString & aState, bool aOverwrite)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getTabState (in nsIDOMNode aTab); */
NS_IMETHODIMP nsSessionStore::GetTabState(nsIDOMNode *aTab, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTabState (in nsIDOMNode aTab, in AString aState); */
NS_IMETHODIMP nsSessionStore::SetTabState(nsIDOMNode *aTab, const nsAString & aState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode duplicateTab (in nsIDOMWindow aWindow, in nsIDOMNode aTab, [optional] in long aDelta); */
NS_IMETHODIMP nsSessionStore::DuplicateTab(nsIDOMWindow *aWindow, nsIDOMNode *aTab, int32_t aDelta, nsIDOMNode * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long getClosedTabCount (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsSessionStore::GetClosedTabCount(nsIDOMWindow *aWindow, uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getClosedTabData (in nsIDOMWindow aWindow); */
NS_IMETHODIMP nsSessionStore::GetClosedTabData(nsIDOMWindow *aWindow, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode undoCloseTab (in nsIDOMWindow aWindow, in unsigned long aIndex); */
NS_IMETHODIMP nsSessionStore::UndoCloseTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode forgetClosedTab (in nsIDOMWindow aWindow, in unsigned long aIndex); */
NS_IMETHODIMP nsSessionStore::ForgetClosedTab(nsIDOMWindow *aWindow, uint32_t aIndex, nsIDOMNode * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long getClosedWindowCount (); */
NS_IMETHODIMP nsSessionStore::GetClosedWindowCount(uint32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getClosedWindowData (); */
NS_IMETHODIMP nsSessionStore::GetClosedWindowData(nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMWindow undoCloseWindow (in unsigned long aIndex); */
NS_IMETHODIMP nsSessionStore::UndoCloseWindow(uint32_t aIndex, nsIDOMWindow * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode forgetClosedWindow (in unsigned long aIndex); */
NS_IMETHODIMP nsSessionStore::ForgetClosedWindow(uint32_t aIndex, nsIDOMNode * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getWindowValue (in nsIDOMWindow aWindow, in AString aKey); */
NS_IMETHODIMP nsSessionStore::GetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWindowValue (in nsIDOMWindow aWindow, in AString aKey, in jsval aStringValue); */
NS_IMETHODIMP nsSessionStore::SetWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey, JS::HandleValue aStringValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteWindowValue (in nsIDOMWindow aWindow, in AString aKey); */
NS_IMETHODIMP nsSessionStore::DeleteWindowValue(nsIDOMWindow *aWindow, const nsAString & aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getTabValue (in nsIDOMNode aTab, in AString aKey); */
NS_IMETHODIMP nsSessionStore::GetTabValue(nsIDOMNode *aTab, const nsAString & aKey, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTabValue (in nsIDOMNode aTab, in AString aKey, in jsval aStringValue); */
NS_IMETHODIMP nsSessionStore::SetTabValue(nsIDOMNode *aTab, const nsAString & aKey, JS::HandleValue aStringValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteTabValue (in nsIDOMNode aTab, in AString aKey); */
NS_IMETHODIMP nsSessionStore::DeleteTabValue(nsIDOMNode *aTab, const nsAString & aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getGlobalValue (in AString aKey); */
NS_IMETHODIMP nsSessionStore::GetGlobalValue(const nsAString & aKey, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setGlobalValue (in AString aKey, in jsval aStringValue); */
NS_IMETHODIMP nsSessionStore::SetGlobalValue(const nsAString & aKey, JS::HandleValue aStringValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteGlobalValue (in AString aKey); */
NS_IMETHODIMP nsSessionStore::DeleteGlobalValue(const nsAString & aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void persistTabAttribute (in AString aName); */
NS_IMETHODIMP nsSessionStore::PersistTabAttribute(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISessionStore_h__ */
