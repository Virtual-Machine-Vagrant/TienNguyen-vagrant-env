/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIFormSubmitObserver.idl
 */

#ifndef __gen_nsIFormSubmitObserver_h__
#define __gen_nsIFormSubmitObserver_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMHTMLFormElement; /* forward declaration */

class mozIDOMWindow; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIArray; /* forward declaration */


/* starting interface:    nsIFormSubmitObserver */
#define NS_IFORMSUBMITOBSERVER_IID_STR "867cb7e7-835d-408b-9788-d2834d284e03"

#define NS_IFORMSUBMITOBSERVER_IID \
  {0x867cb7e7, 0x835d, 0x408b, \
    { 0x97, 0x88, 0xd2, 0x83, 0x4d, 0x28, 0x4e, 0x03 }}

class NS_NO_VTABLE nsIFormSubmitObserver : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFORMSUBMITOBSERVER_IID)

  /* void notify (in nsIDOMHTMLFormElement formNode, in mozIDOMWindow window, in nsIURI actionURL, out boolean cancelSubmit); */
  NS_IMETHOD Notify(nsIDOMHTMLFormElement *formNode, mozIDOMWindow *window, nsIURI *actionURL, bool *cancelSubmit) = 0;

  /* void notifyInvalidSubmit (in nsIDOMHTMLFormElement formNode, in nsIArray invalidElements); */
  NS_IMETHOD NotifyInvalidSubmit(nsIDOMHTMLFormElement *formNode, nsIArray *invalidElements) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFormSubmitObserver, NS_IFORMSUBMITOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFORMSUBMITOBSERVER \
  NS_IMETHOD Notify(nsIDOMHTMLFormElement *formNode, mozIDOMWindow *window, nsIURI *actionURL, bool *cancelSubmit) override; \
  NS_IMETHOD NotifyInvalidSubmit(nsIDOMHTMLFormElement *formNode, nsIArray *invalidElements) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFORMSUBMITOBSERVER \
  NS_METHOD Notify(nsIDOMHTMLFormElement *formNode, mozIDOMWindow *window, nsIURI *actionURL, bool *cancelSubmit); \
  NS_METHOD NotifyInvalidSubmit(nsIDOMHTMLFormElement *formNode, nsIArray *invalidElements); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFORMSUBMITOBSERVER(_to) \
  NS_IMETHOD Notify(nsIDOMHTMLFormElement *formNode, mozIDOMWindow *window, nsIURI *actionURL, bool *cancelSubmit) override { return _to Notify(formNode, window, actionURL, cancelSubmit); } \
  NS_IMETHOD NotifyInvalidSubmit(nsIDOMHTMLFormElement *formNode, nsIArray *invalidElements) override { return _to NotifyInvalidSubmit(formNode, invalidElements); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFORMSUBMITOBSERVER(_to) \
  NS_IMETHOD Notify(nsIDOMHTMLFormElement *formNode, mozIDOMWindow *window, nsIURI *actionURL, bool *cancelSubmit) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Notify(formNode, window, actionURL, cancelSubmit); } \
  NS_IMETHOD NotifyInvalidSubmit(nsIDOMHTMLFormElement *formNode, nsIArray *invalidElements) override { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyInvalidSubmit(formNode, invalidElements); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFormSubmitObserver : public nsIFormSubmitObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFORMSUBMITOBSERVER

  nsFormSubmitObserver();

private:
  ~nsFormSubmitObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFormSubmitObserver, nsIFormSubmitObserver)

nsFormSubmitObserver::nsFormSubmitObserver()
{
  /* member initializers and constructor code */
}

nsFormSubmitObserver::~nsFormSubmitObserver()
{
  /* destructor code */
}

/* void notify (in nsIDOMHTMLFormElement formNode, in mozIDOMWindow window, in nsIURI actionURL, out boolean cancelSubmit); */
NS_IMETHODIMP nsFormSubmitObserver::Notify(nsIDOMHTMLFormElement *formNode, mozIDOMWindow *window, nsIURI *actionURL, bool *cancelSubmit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyInvalidSubmit (in nsIDOMHTMLFormElement formNode, in nsIArray invalidElements); */
NS_IMETHODIMP nsFormSubmitObserver::NotifyInvalidSubmit(nsIDOMHTMLFormElement *formNode, nsIArray *invalidElements)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_FORMSUBMIT_SUBJECT "formsubmit"
#define NS_EARLYFORMSUBMIT_SUBJECT "earlyformsubmit"
#define NS_FIRST_FORMSUBMIT_CATEGORY "firstformsubmit"
#define NS_PASSWORDMANAGER_CATEGORY "passwordmanager"
#define NS_INVALIDFORMSUBMIT_SUBJECT "invalidformsubmit"

#endif /* __gen_nsIFormSubmitObserver_h__ */
