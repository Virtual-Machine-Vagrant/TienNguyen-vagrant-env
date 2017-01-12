/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMNSEditableElement.idl
 */

#ifndef __gen_nsIDOMNSEditableElement_h__
#define __gen_nsIDOMNSEditableElement_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIEditor; /* forward declaration */


/* starting interface:    nsIDOMNSEditableElement */
#define NS_IDOMNSEDITABLEELEMENT_IID_STR "3503de34-6631-4594-b7be-c36ff6a520c4"

#define NS_IDOMNSEDITABLEELEMENT_IID \
  {0x3503de34, 0x6631, 0x4594, \
    { 0xb7, 0xbe, 0xc3, 0x6f, 0xf6, 0xa5, 0x20, 0xc4 }}

class NS_NO_VTABLE nsIDOMNSEditableElement : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMNSEDITABLEELEMENT_IID)

  /* [noscript] readonly attribute nsIEditor editor; */
  NS_IMETHOD GetEditor(nsIEditor * *aEditor) = 0;

  /* [noscript] void setUserInput (in DOMString input); */
  NS_IMETHOD SetUserInput(const nsAString & input) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMNSEditableElement, NS_IDOMNSEDITABLEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMNSEDITABLEELEMENT \
  NS_IMETHOD GetEditor(nsIEditor * *aEditor) override; \
  NS_IMETHOD SetUserInput(const nsAString & input) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMNSEDITABLEELEMENT \
  NS_METHOD GetEditor(nsIEditor * *aEditor); \
  NS_METHOD SetUserInput(const nsAString & input); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMNSEDITABLEELEMENT(_to) \
  NS_IMETHOD GetEditor(nsIEditor * *aEditor) override { return _to GetEditor(aEditor); } \
  NS_IMETHOD SetUserInput(const nsAString & input) override { return _to SetUserInput(input); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMNSEDITABLEELEMENT(_to) \
  NS_IMETHOD GetEditor(nsIEditor * *aEditor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEditor(aEditor); } \
  NS_IMETHOD SetUserInput(const nsAString & input) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUserInput(input); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMNSEditableElement : public nsIDOMNSEditableElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMNSEDITABLEELEMENT

  nsDOMNSEditableElement();

private:
  ~nsDOMNSEditableElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMNSEditableElement, nsIDOMNSEditableElement)

nsDOMNSEditableElement::nsDOMNSEditableElement()
{
  /* member initializers and constructor code */
}

nsDOMNSEditableElement::~nsDOMNSEditableElement()
{
  /* destructor code */
}

/* [noscript] readonly attribute nsIEditor editor; */
NS_IMETHODIMP nsDOMNSEditableElement::GetEditor(nsIEditor * *aEditor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setUserInput (in DOMString input); */
NS_IMETHODIMP nsDOMNSEditableElement::SetUserInput(const nsAString & input)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMNSEditableElement_h__ */
