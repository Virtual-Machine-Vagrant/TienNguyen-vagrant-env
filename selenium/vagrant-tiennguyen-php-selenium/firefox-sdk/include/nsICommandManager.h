/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICommandManager.idl
 */

#ifndef __gen_nsICommandManager_h__
#define __gen_nsICommandManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIObserver_h__
#include "nsIObserver.h"
#endif

#ifndef __gen_nsICommandParams_h__
#include "nsICommandParams.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsICommandManager */
#define NS_ICOMMANDMANAGER_IID_STR "bb5a1730-d83b-4fa2-831b-35b9d5842e84"

#define NS_ICOMMANDMANAGER_IID \
  {0xbb5a1730, 0xd83b, 0x4fa2, \
    { 0x83, 0x1b, 0x35, 0xb9, 0xd5, 0x84, 0x2e, 0x84 }}

class NS_NO_VTABLE nsICommandManager : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOMMANDMANAGER_IID)

  /* void addCommandObserver (in nsIObserver aCommandObserver, in string aCommandToObserve); */
  NS_IMETHOD AddCommandObserver(nsIObserver *aCommandObserver, const char * aCommandToObserve) = 0;

  /* void removeCommandObserver (in nsIObserver aCommandObserver, in string aCommandObserved); */
  NS_IMETHOD RemoveCommandObserver(nsIObserver *aCommandObserver, const char * aCommandObserved) = 0;

  /* boolean isCommandSupported (in string aCommandName, in mozIDOMWindowProxy aTargetWindow); */
  NS_IMETHOD IsCommandSupported(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) = 0;

  /* boolean isCommandEnabled (in string aCommandName, in mozIDOMWindowProxy aTargetWindow); */
  NS_IMETHOD IsCommandEnabled(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) = 0;

  /* void getCommandState (in string aCommandName, in mozIDOMWindowProxy aTargetWindow, in nsICommandParams aCommandParams); */
  NS_IMETHOD GetCommandState(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, nsICommandParams *aCommandParams) = 0;

  /* void doCommand (in string aCommandName, in nsICommandParams aCommandParams, in mozIDOMWindowProxy aTargetWindow); */
  NS_IMETHOD DoCommand(const char * aCommandName, nsICommandParams *aCommandParams, mozIDOMWindowProxy *aTargetWindow) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICommandManager, NS_ICOMMANDMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOMMANDMANAGER \
  NS_IMETHOD AddCommandObserver(nsIObserver *aCommandObserver, const char * aCommandToObserve) override; \
  NS_IMETHOD RemoveCommandObserver(nsIObserver *aCommandObserver, const char * aCommandObserved) override; \
  NS_IMETHOD IsCommandSupported(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) override; \
  NS_IMETHOD IsCommandEnabled(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) override; \
  NS_IMETHOD GetCommandState(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, nsICommandParams *aCommandParams) override; \
  NS_IMETHOD DoCommand(const char * aCommandName, nsICommandParams *aCommandParams, mozIDOMWindowProxy *aTargetWindow) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICOMMANDMANAGER \
  NS_METHOD AddCommandObserver(nsIObserver *aCommandObserver, const char * aCommandToObserve); \
  NS_METHOD RemoveCommandObserver(nsIObserver *aCommandObserver, const char * aCommandObserved); \
  NS_METHOD IsCommandSupported(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval); \
  NS_METHOD IsCommandEnabled(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval); \
  NS_METHOD GetCommandState(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, nsICommandParams *aCommandParams); \
  NS_METHOD DoCommand(const char * aCommandName, nsICommandParams *aCommandParams, mozIDOMWindowProxy *aTargetWindow); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOMMANDMANAGER(_to) \
  NS_IMETHOD AddCommandObserver(nsIObserver *aCommandObserver, const char * aCommandToObserve) override { return _to AddCommandObserver(aCommandObserver, aCommandToObserve); } \
  NS_IMETHOD RemoveCommandObserver(nsIObserver *aCommandObserver, const char * aCommandObserved) override { return _to RemoveCommandObserver(aCommandObserver, aCommandObserved); } \
  NS_IMETHOD IsCommandSupported(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) override { return _to IsCommandSupported(aCommandName, aTargetWindow, _retval); } \
  NS_IMETHOD IsCommandEnabled(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) override { return _to IsCommandEnabled(aCommandName, aTargetWindow, _retval); } \
  NS_IMETHOD GetCommandState(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, nsICommandParams *aCommandParams) override { return _to GetCommandState(aCommandName, aTargetWindow, aCommandParams); } \
  NS_IMETHOD DoCommand(const char * aCommandName, nsICommandParams *aCommandParams, mozIDOMWindowProxy *aTargetWindow) override { return _to DoCommand(aCommandName, aCommandParams, aTargetWindow); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOMMANDMANAGER(_to) \
  NS_IMETHOD AddCommandObserver(nsIObserver *aCommandObserver, const char * aCommandToObserve) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AddCommandObserver(aCommandObserver, aCommandToObserve); } \
  NS_IMETHOD RemoveCommandObserver(nsIObserver *aCommandObserver, const char * aCommandObserved) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveCommandObserver(aCommandObserver, aCommandObserved); } \
  NS_IMETHOD IsCommandSupported(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCommandSupported(aCommandName, aTargetWindow, _retval); } \
  NS_IMETHOD IsCommandEnabled(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCommandEnabled(aCommandName, aTargetWindow, _retval); } \
  NS_IMETHOD GetCommandState(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, nsICommandParams *aCommandParams) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCommandState(aCommandName, aTargetWindow, aCommandParams); } \
  NS_IMETHOD DoCommand(const char * aCommandName, nsICommandParams *aCommandParams, mozIDOMWindowProxy *aTargetWindow) override { return !_to ? NS_ERROR_NULL_POINTER : _to->DoCommand(aCommandName, aCommandParams, aTargetWindow); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCommandManager : public nsICommandManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOMMANDMANAGER

  nsCommandManager();

private:
  ~nsCommandManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCommandManager, nsICommandManager)

nsCommandManager::nsCommandManager()
{
  /* member initializers and constructor code */
}

nsCommandManager::~nsCommandManager()
{
  /* destructor code */
}

/* void addCommandObserver (in nsIObserver aCommandObserver, in string aCommandToObserve); */
NS_IMETHODIMP nsCommandManager::AddCommandObserver(nsIObserver *aCommandObserver, const char * aCommandToObserve)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeCommandObserver (in nsIObserver aCommandObserver, in string aCommandObserved); */
NS_IMETHODIMP nsCommandManager::RemoveCommandObserver(nsIObserver *aCommandObserver, const char * aCommandObserved)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isCommandSupported (in string aCommandName, in mozIDOMWindowProxy aTargetWindow); */
NS_IMETHODIMP nsCommandManager::IsCommandSupported(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isCommandEnabled (in string aCommandName, in mozIDOMWindowProxy aTargetWindow); */
NS_IMETHODIMP nsCommandManager::IsCommandEnabled(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCommandState (in string aCommandName, in mozIDOMWindowProxy aTargetWindow, in nsICommandParams aCommandParams); */
NS_IMETHODIMP nsCommandManager::GetCommandState(const char * aCommandName, mozIDOMWindowProxy *aTargetWindow, nsICommandParams *aCommandParams)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void doCommand (in string aCommandName, in nsICommandParams aCommandParams, in mozIDOMWindowProxy aTargetWindow); */
NS_IMETHODIMP nsCommandManager::DoCommand(const char * aCommandName, nsICommandParams *aCommandParams, mozIDOMWindowProxy *aTargetWindow)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_COMMAND_MANAGER_CID \
{ 0x64edb481, 0x0c04, 0x11d5, { 0xa7, 0x3c, 0xe9, 0x64, 0xb9, 0x68, 0xb0, 0xbc } }
#define NS_COMMAND_MANAGER_CONTRACTID \
 "@mozilla.org/embedcomp/command-manager;1"

#endif /* __gen_nsICommandManager_h__ */
