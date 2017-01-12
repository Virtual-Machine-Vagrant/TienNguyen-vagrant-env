/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMHTMLCanvasElement.idl
 */

#ifndef __gen_nsIDOMHTMLCanvasElement_h__
#define __gen_nsIDOMHTMLCanvasElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

#include "js/Value.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMBlob; /* forward declaration */

class nsIVariant; /* forward declaration */

class nsIInputStreamCallback; /* forward declaration */


/* starting interface:    nsIDOMHTMLCanvasElement */
#define NS_IDOMHTMLCANVASELEMENT_IID_STR "4e8f1316-b601-471d-8f44-3c650d91ee9b"

#define NS_IDOMHTMLCANVASELEMENT_IID \
  {0x4e8f1316, 0xb601, 0x471d, \
    { 0x8f, 0x44, 0x3c, 0x65, 0x0d, 0x91, 0xee, 0x9b }}

class NS_NO_VTABLE nsIDOMHTMLCanvasElement : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLCANVASELEMENT_IID)

  /* attribute unsigned long width; */
  NS_IMETHOD GetWidth(uint32_t *aWidth) = 0;
  NS_IMETHOD SetWidth(uint32_t aWidth) = 0;

  /* attribute unsigned long height; */
  NS_IMETHOD GetHeight(uint32_t *aHeight) = 0;
  NS_IMETHOD SetHeight(uint32_t aHeight) = 0;

  /* attribute boolean mozOpaque; */
  NS_IMETHOD GetMozOpaque(bool *aMozOpaque) = 0;
  NS_IMETHOD SetMozOpaque(bool aMozOpaque) = 0;

  /* [implicit_jscontext] DOMString toDataURL ([optional] in DOMString type, [optional] in jsval params); */
  NS_IMETHOD ToDataURL(const nsAString & type, JS::HandleValue params, JSContext* cx, nsAString & _retval) = 0;

  /* nsISupports mozGetAsFile (in DOMString name, [optional] in DOMString type); */
  NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, nsISupports * *_retval) = 0;

  /* nsISupports MozGetIPCContext (in DOMString contextId); */
  NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLCanvasElement, NS_IDOMHTMLCANVASELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLCANVASELEMENT \
  NS_IMETHOD GetWidth(uint32_t *aWidth) override; \
  NS_IMETHOD SetWidth(uint32_t aWidth) override; \
  NS_IMETHOD GetHeight(uint32_t *aHeight) override; \
  NS_IMETHOD SetHeight(uint32_t aHeight) override; \
  NS_IMETHOD GetMozOpaque(bool *aMozOpaque) override; \
  NS_IMETHOD SetMozOpaque(bool aMozOpaque) override; \
  NS_IMETHOD ToDataURL(const nsAString & type, JS::HandleValue params, JSContext* cx, nsAString & _retval) override; \
  NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, nsISupports * *_retval) override; \
  NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMHTMLCANVASELEMENT \
  NS_METHOD GetWidth(uint32_t *aWidth); \
  NS_METHOD SetWidth(uint32_t aWidth); \
  NS_METHOD GetHeight(uint32_t *aHeight); \
  NS_METHOD SetHeight(uint32_t aHeight); \
  NS_METHOD GetMozOpaque(bool *aMozOpaque); \
  NS_METHOD SetMozOpaque(bool aMozOpaque); \
  NS_METHOD ToDataURL(const nsAString & type, JS::HandleValue params, JSContext* cx, nsAString & _retval); \
  NS_METHOD MozGetAsFile(const nsAString & name, const nsAString & type, nsISupports * *_retval); \
  NS_METHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLCANVASELEMENT(_to) \
  NS_IMETHOD GetWidth(uint32_t *aWidth) override { return _to GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(uint32_t aWidth) override { return _to SetWidth(aWidth); } \
  NS_IMETHOD GetHeight(uint32_t *aHeight) override { return _to GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(uint32_t aHeight) override { return _to SetHeight(aHeight); } \
  NS_IMETHOD GetMozOpaque(bool *aMozOpaque) override { return _to GetMozOpaque(aMozOpaque); } \
  NS_IMETHOD SetMozOpaque(bool aMozOpaque) override { return _to SetMozOpaque(aMozOpaque); } \
  NS_IMETHOD ToDataURL(const nsAString & type, JS::HandleValue params, JSContext* cx, nsAString & _retval) override { return _to ToDataURL(type, params, cx, _retval); } \
  NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, nsISupports * *_retval) override { return _to MozGetAsFile(name, type, _retval); } \
  NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval) override { return _to MozGetIPCContext(contextId, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLCANVASELEMENT(_to) \
  NS_IMETHOD GetWidth(uint32_t *aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_IMETHOD SetWidth(uint32_t aWidth) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWidth(aWidth); } \
  NS_IMETHOD GetHeight(uint32_t *aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_IMETHOD SetHeight(uint32_t aHeight) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHeight(aHeight); } \
  NS_IMETHOD GetMozOpaque(bool *aMozOpaque) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozOpaque(aMozOpaque); } \
  NS_IMETHOD SetMozOpaque(bool aMozOpaque) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMozOpaque(aMozOpaque); } \
  NS_IMETHOD ToDataURL(const nsAString & type, JS::HandleValue params, JSContext* cx, nsAString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ToDataURL(type, params, cx, _retval); } \
  NS_IMETHOD MozGetAsFile(const nsAString & name, const nsAString & type, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetAsFile(name, type, _retval); } \
  NS_IMETHOD MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->MozGetIPCContext(contextId, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLCanvasElement : public nsIDOMHTMLCanvasElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLCANVASELEMENT

  nsDOMHTMLCanvasElement();

private:
  ~nsDOMHTMLCanvasElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMHTMLCanvasElement, nsIDOMHTMLCanvasElement)

nsDOMHTMLCanvasElement::nsDOMHTMLCanvasElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLCanvasElement::~nsDOMHTMLCanvasElement()
{
  /* destructor code */
}

/* attribute unsigned long width; */
NS_IMETHODIMP nsDOMHTMLCanvasElement::GetWidth(uint32_t *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCanvasElement::SetWidth(uint32_t aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long height; */
NS_IMETHODIMP nsDOMHTMLCanvasElement::GetHeight(uint32_t *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCanvasElement::SetHeight(uint32_t aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean mozOpaque; */
NS_IMETHODIMP nsDOMHTMLCanvasElement::GetMozOpaque(bool *aMozOpaque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCanvasElement::SetMozOpaque(bool aMozOpaque)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] DOMString toDataURL ([optional] in DOMString type, [optional] in jsval params); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::ToDataURL(const nsAString & type, JS::HandleValue params, JSContext* cx, nsAString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports mozGetAsFile (in DOMString name, [optional] in DOMString type); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::MozGetAsFile(const nsAString & name, const nsAString & type, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports MozGetIPCContext (in DOMString contextId); */
NS_IMETHODIMP nsDOMHTMLCanvasElement::MozGetIPCContext(const nsAString & contextId, nsISupports * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLCanvasElement_h__ */
