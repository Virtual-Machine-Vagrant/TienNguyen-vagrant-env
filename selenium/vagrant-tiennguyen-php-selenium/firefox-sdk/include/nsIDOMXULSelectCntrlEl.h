/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIDOMXULSelectCntrlEl.idl
 */

#ifndef __gen_nsIDOMXULSelectCntrlEl_h__
#define __gen_nsIDOMXULSelectCntrlEl_h__


#ifndef __gen_nsIDOMXULControlElement_h__
#include "nsIDOMXULControlElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMXULSelectControlItemElement; /* forward declaration */


/* starting interface:    nsIDOMXULSelectControlElement */
#define NS_IDOMXULSELECTCONTROLELEMENT_IID_STR "9bf188a7-d6f9-431b-b5c7-118013998e8b"

#define NS_IDOMXULSELECTCONTROLELEMENT_IID \
  {0x9bf188a7, 0xd6f9, 0x431b, \
    { 0xb5, 0xc7, 0x11, 0x80, 0x13, 0x99, 0x8e, 0x8b }}

class NS_NO_VTABLE nsIDOMXULSelectControlElement : public nsIDOMXULControlElement {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXULSELECTCONTROLELEMENT_IID)

  /* attribute nsIDOMXULSelectControlItemElement selectedItem; */
  NS_IMETHOD GetSelectedItem(nsIDOMXULSelectControlItemElement * *aSelectedItem) = 0;
  NS_IMETHOD SetSelectedItem(nsIDOMXULSelectControlItemElement *aSelectedItem) = 0;

  /* attribute long selectedIndex; */
  NS_IMETHOD GetSelectedIndex(int32_t *aSelectedIndex) = 0;
  NS_IMETHOD SetSelectedIndex(int32_t aSelectedIndex) = 0;

  /* attribute DOMString value; */
  NS_IMETHOD GetValue(nsAString & aValue) = 0;
  NS_IMETHOD SetValue(const nsAString & aValue) = 0;

  /* nsIDOMXULSelectControlItemElement appendItem (in DOMString label, in DOMString value); */
  NS_IMETHOD AppendItem(const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) = 0;

  /* nsIDOMXULSelectControlItemElement insertItemAt (in long index, in DOMString label, in DOMString value); */
  NS_IMETHOD InsertItemAt(int32_t index, const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) = 0;

  /* nsIDOMXULSelectControlItemElement removeItemAt (in long index); */
  NS_IMETHOD RemoveItemAt(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) = 0;

  /* readonly attribute unsigned long itemCount; */
  NS_IMETHOD GetItemCount(uint32_t *aItemCount) = 0;

  /* long getIndexOfItem (in nsIDOMXULSelectControlItemElement item); */
  NS_IMETHOD GetIndexOfItem(nsIDOMXULSelectControlItemElement *item, int32_t *_retval) = 0;

  /* nsIDOMXULSelectControlItemElement getItemAtIndex (in long index); */
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXULSelectControlElement, NS_IDOMXULSELECTCONTROLELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXULSELECTCONTROLELEMENT \
  NS_IMETHOD GetSelectedItem(nsIDOMXULSelectControlItemElement * *aSelectedItem) override; \
  NS_IMETHOD SetSelectedItem(nsIDOMXULSelectControlItemElement *aSelectedItem) override; \
  NS_IMETHOD GetSelectedIndex(int32_t *aSelectedIndex) override; \
  NS_IMETHOD SetSelectedIndex(int32_t aSelectedIndex) override; \
  NS_IMETHOD GetValue(nsAString & aValue) override; \
  NS_IMETHOD SetValue(const nsAString & aValue) override; \
  NS_IMETHOD AppendItem(const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) override; \
  NS_IMETHOD InsertItemAt(int32_t index, const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) override; \
  NS_IMETHOD RemoveItemAt(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) override; \
  NS_IMETHOD GetItemCount(uint32_t *aItemCount) override; \
  NS_IMETHOD GetIndexOfItem(nsIDOMXULSelectControlItemElement *item, int32_t *_retval) override; \
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIDOMXULSELECTCONTROLELEMENT \
  NS_METHOD GetSelectedItem(nsIDOMXULSelectControlItemElement * *aSelectedItem); \
  NS_METHOD SetSelectedItem(nsIDOMXULSelectControlItemElement *aSelectedItem); \
  NS_METHOD GetSelectedIndex(int32_t *aSelectedIndex); \
  NS_METHOD SetSelectedIndex(int32_t aSelectedIndex); \
  NS_METHOD GetValue(nsAString & aValue); \
  NS_METHOD SetValue(const nsAString & aValue); \
  NS_METHOD AppendItem(const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval); \
  NS_METHOD InsertItemAt(int32_t index, const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval); \
  NS_METHOD RemoveItemAt(int32_t index, nsIDOMXULSelectControlItemElement * *_retval); \
  NS_METHOD GetItemCount(uint32_t *aItemCount); \
  NS_METHOD GetIndexOfItem(nsIDOMXULSelectControlItemElement *item, int32_t *_retval); \
  NS_METHOD GetItemAtIndex(int32_t index, nsIDOMXULSelectControlItemElement * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXULSELECTCONTROLELEMENT(_to) \
  NS_IMETHOD GetSelectedItem(nsIDOMXULSelectControlItemElement * *aSelectedItem) override { return _to GetSelectedItem(aSelectedItem); } \
  NS_IMETHOD SetSelectedItem(nsIDOMXULSelectControlItemElement *aSelectedItem) override { return _to SetSelectedItem(aSelectedItem); } \
  NS_IMETHOD GetSelectedIndex(int32_t *aSelectedIndex) override { return _to GetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD SetSelectedIndex(int32_t aSelectedIndex) override { return _to SetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD GetValue(nsAString & aValue) override { return _to GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) override { return _to SetValue(aValue); } \
  NS_IMETHOD AppendItem(const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) override { return _to AppendItem(label, value, _retval); } \
  NS_IMETHOD InsertItemAt(int32_t index, const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) override { return _to InsertItemAt(index, label, value, _retval); } \
  NS_IMETHOD RemoveItemAt(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) override { return _to RemoveItemAt(index, _retval); } \
  NS_IMETHOD GetItemCount(uint32_t *aItemCount) override { return _to GetItemCount(aItemCount); } \
  NS_IMETHOD GetIndexOfItem(nsIDOMXULSelectControlItemElement *item, int32_t *_retval) override { return _to GetIndexOfItem(item, _retval); } \
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) override { return _to GetItemAtIndex(index, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXULSELECTCONTROLELEMENT(_to) \
  NS_IMETHOD GetSelectedItem(nsIDOMXULSelectControlItemElement * *aSelectedItem) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedItem(aSelectedItem); } \
  NS_IMETHOD SetSelectedItem(nsIDOMXULSelectControlItemElement *aSelectedItem) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectedItem(aSelectedItem); } \
  NS_IMETHOD GetSelectedIndex(int32_t *aSelectedIndex) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD SetSelectedIndex(int32_t aSelectedIndex) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelectedIndex(aSelectedIndex); } \
  NS_IMETHOD GetValue(nsAString & aValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_IMETHOD SetValue(const nsAString & aValue) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_IMETHOD AppendItem(const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendItem(label, value, _retval); } \
  NS_IMETHOD InsertItemAt(int32_t index, const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertItemAt(index, label, value, _retval); } \
  NS_IMETHOD RemoveItemAt(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveItemAt(index, _retval); } \
  NS_IMETHOD GetItemCount(uint32_t *aItemCount) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemCount(aItemCount); } \
  NS_IMETHOD GetIndexOfItem(nsIDOMXULSelectControlItemElement *item, int32_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndexOfItem(item, _retval); } \
  NS_IMETHOD GetItemAtIndex(int32_t index, nsIDOMXULSelectControlItemElement * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetItemAtIndex(index, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXULSelectControlElement : public nsIDOMXULSelectControlElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXULSELECTCONTROLELEMENT

  nsDOMXULSelectControlElement();

private:
  ~nsDOMXULSelectControlElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsDOMXULSelectControlElement, nsIDOMXULSelectControlElement)

nsDOMXULSelectControlElement::nsDOMXULSelectControlElement()
{
  /* member initializers and constructor code */
}

nsDOMXULSelectControlElement::~nsDOMXULSelectControlElement()
{
  /* destructor code */
}

/* attribute nsIDOMXULSelectControlItemElement selectedItem; */
NS_IMETHODIMP nsDOMXULSelectControlElement::GetSelectedItem(nsIDOMXULSelectControlItemElement * *aSelectedItem)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULSelectControlElement::SetSelectedItem(nsIDOMXULSelectControlItemElement *aSelectedItem)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long selectedIndex; */
NS_IMETHODIMP nsDOMXULSelectControlElement::GetSelectedIndex(int32_t *aSelectedIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULSelectControlElement::SetSelectedIndex(int32_t aSelectedIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString value; */
NS_IMETHODIMP nsDOMXULSelectControlElement::GetValue(nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMXULSelectControlElement::SetValue(const nsAString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMXULSelectControlItemElement appendItem (in DOMString label, in DOMString value); */
NS_IMETHODIMP nsDOMXULSelectControlElement::AppendItem(const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMXULSelectControlItemElement insertItemAt (in long index, in DOMString label, in DOMString value); */
NS_IMETHODIMP nsDOMXULSelectControlElement::InsertItemAt(int32_t index, const nsAString & label, const nsAString & value, nsIDOMXULSelectControlItemElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMXULSelectControlItemElement removeItemAt (in long index); */
NS_IMETHODIMP nsDOMXULSelectControlElement::RemoveItemAt(int32_t index, nsIDOMXULSelectControlItemElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long itemCount; */
NS_IMETHODIMP nsDOMXULSelectControlElement::GetItemCount(uint32_t *aItemCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getIndexOfItem (in nsIDOMXULSelectControlItemElement item); */
NS_IMETHODIMP nsDOMXULSelectControlElement::GetIndexOfItem(nsIDOMXULSelectControlItemElement *item, int32_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMXULSelectControlItemElement getItemAtIndex (in long index); */
NS_IMETHODIMP nsDOMXULSelectControlElement::GetItemAtIndex(int32_t index, nsIDOMXULSelectControlItemElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXULSelectCntrlEl_h__ */
