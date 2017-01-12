/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowserChrome3.idl
 */

#ifndef __gen_nsIWebBrowserChrome3_h__
#define __gen_nsIWebBrowserChrome3_h__


#ifndef __gen_nsIWebBrowserChrome2_h__
#include "nsIWebBrowserChrome2.h"
#endif

#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

#ifndef __gen_nsIDOMNode_h__
#include "nsIDOMNode.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDocShell; /* forward declaration */

class nsIInputStream; /* forward declaration */


/* starting interface:    nsIWebBrowserChrome3 */
#define NS_IWEBBROWSERCHROME3_IID_STR "542b6625-35a9-426a-8257-c12a345383b0"

#define NS_IWEBBROWSERCHROME3_IID \
  {0x542b6625, 0x35a9, 0x426a, \
    { 0x82, 0x57, 0xc1, 0x2a, 0x34, 0x53, 0x83, 0xb0 }}

class NS_NO_VTABLE nsIWebBrowserChrome3 : public nsIWebBrowserChrome2 {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERCHROME3_IID)

  /* AString onBeforeLinkTraversal (in AString originalTarget, in nsIURI linkURI, in nsIDOMNode linkNode, in boolean isAppTab); */
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) = 0;

  /* bool shouldLoadURI (in nsIDocShell aDocShell, in nsIURI aURI, in nsIURI aReferrer); */
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserChrome3, NS_IWEBBROWSERCHROME3_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERCHROME3 \
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) override; \
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERCHROME3 \
  NS_METHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval); \
  NS_METHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERCHROME3(_to) \
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) override { return _to OnBeforeLinkTraversal(originalTarget, linkURI, linkNode, isAppTab, _retval); } \
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) override { return _to ShouldLoadURI(aDocShell, aURI, aReferrer, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERCHROME3(_to) \
  NS_IMETHOD OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnBeforeLinkTraversal(originalTarget, linkURI, linkNode, isAppTab, _retval); } \
  NS_IMETHOD ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ShouldLoadURI(aDocShell, aURI, aReferrer, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserChrome3 : public nsIWebBrowserChrome3
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERCHROME3

  nsWebBrowserChrome3();

private:
  ~nsWebBrowserChrome3();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserChrome3, nsIWebBrowserChrome3)

nsWebBrowserChrome3::nsWebBrowserChrome3()
{
  /* member initializers and constructor code */
}

nsWebBrowserChrome3::~nsWebBrowserChrome3()
{
  /* destructor code */
}

/* AString onBeforeLinkTraversal (in AString originalTarget, in nsIURI linkURI, in nsIDOMNode linkNode, in boolean isAppTab); */
NS_IMETHODIMP nsWebBrowserChrome3::OnBeforeLinkTraversal(const nsAString & originalTarget, nsIURI *linkURI, nsIDOMNode *linkNode, bool isAppTab, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool shouldLoadURI (in nsIDocShell aDocShell, in nsIURI aURI, in nsIURI aReferrer); */
NS_IMETHODIMP nsWebBrowserChrome3::ShouldLoadURI(nsIDocShell *aDocShell, nsIURI *aURI, nsIURI *aReferrer, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserChrome3_h__ */
