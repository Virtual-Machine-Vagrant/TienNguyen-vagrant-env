/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIAutoCompleteSimpleResult.idl
 */

#ifndef __gen_nsIAutoCompleteSimpleResult_h__
#define __gen_nsIAutoCompleteSimpleResult_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIAutoCompleteResult_h__
#include "nsIAutoCompleteResult.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAutoCompleteSimpleResultListener; /* forward declaration */


/* starting interface:    nsIAutoCompleteSimpleResult */
#define NS_IAUTOCOMPLETESIMPLERESULT_IID_STR "23de9c96-becb-4d0d-a9bb-1d131ce361b5"

#define NS_IAUTOCOMPLETESIMPLERESULT_IID \
  {0x23de9c96, 0xbecb, 0x4d0d, \
    { 0xa9, 0xbb, 0x1d, 0x13, 0x1c, 0xe3, 0x61, 0xb5 }}

class NS_NO_VTABLE nsIAutoCompleteSimpleResult : public nsIAutoCompleteResult {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAUTOCOMPLETESIMPLERESULT_IID)

  /* void setSearchString (in AString aSearchString); */
  NS_IMETHOD SetSearchString(const nsAString & aSearchString) = 0;

  /* void setErrorDescription (in AString aErrorDescription); */
  NS_IMETHOD SetErrorDescription(const nsAString & aErrorDescription) = 0;

  /* void setDefaultIndex (in long aDefaultIndex); */
  NS_IMETHOD SetDefaultIndex(int32_t aDefaultIndex) = 0;

  /* void setSearchResult (in unsigned short aSearchResult); */
  NS_IMETHOD SetSearchResult(uint16_t aSearchResult) = 0;

  /* void setTypeAheadResult (in boolean aHidden); */
  NS_IMETHOD SetTypeAheadResult(bool aHidden) = 0;

  /* void insertMatchAt (in long aIndex, in AString aValue, in AString aComment, [optional] in AString aImage, [optional] in AString aStyle, [optional] in AString aFinalCompleteValue, [optional] in AString aLabel); */
  NS_IMETHOD InsertMatchAt(int32_t aIndex, const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) = 0;

  /* void appendMatch (in AString aValue, in AString aComment, [optional] in AString aImage, [optional] in AString aStyle, [optional] in AString aFinalCompleteValue, [optional] in AString aLabel); */
  NS_IMETHOD AppendMatch(const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) = 0;

  /* nsIAutoCompleteSimpleResultListener getListener (); */
  NS_IMETHOD GetListener(nsIAutoCompleteSimpleResultListener * *_retval) = 0;

  /* void setListener (in nsIAutoCompleteSimpleResultListener aListener); */
  NS_IMETHOD SetListener(nsIAutoCompleteSimpleResultListener *aListener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAutoCompleteSimpleResult, NS_IAUTOCOMPLETESIMPLERESULT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAUTOCOMPLETESIMPLERESULT \
  NS_IMETHOD SetSearchString(const nsAString & aSearchString) override; \
  NS_IMETHOD SetErrorDescription(const nsAString & aErrorDescription) override; \
  NS_IMETHOD SetDefaultIndex(int32_t aDefaultIndex) override; \
  NS_IMETHOD SetSearchResult(uint16_t aSearchResult) override; \
  NS_IMETHOD SetTypeAheadResult(bool aHidden) override; \
  NS_IMETHOD InsertMatchAt(int32_t aIndex, const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) override; \
  NS_IMETHOD AppendMatch(const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) override; \
  NS_IMETHOD GetListener(nsIAutoCompleteSimpleResultListener * *_retval) override; \
  NS_IMETHOD SetListener(nsIAutoCompleteSimpleResultListener *aListener) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAUTOCOMPLETESIMPLERESULT \
  NS_METHOD SetSearchString(const nsAString & aSearchString); \
  NS_METHOD SetErrorDescription(const nsAString & aErrorDescription); \
  NS_METHOD SetDefaultIndex(int32_t aDefaultIndex); \
  NS_METHOD SetSearchResult(uint16_t aSearchResult); \
  NS_METHOD SetTypeAheadResult(bool aHidden); \
  NS_METHOD InsertMatchAt(int32_t aIndex, const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel); \
  NS_METHOD AppendMatch(const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel); \
  NS_METHOD GetListener(nsIAutoCompleteSimpleResultListener * *_retval); \
  NS_METHOD SetListener(nsIAutoCompleteSimpleResultListener *aListener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAUTOCOMPLETESIMPLERESULT(_to) \
  NS_IMETHOD SetSearchString(const nsAString & aSearchString) override { return _to SetSearchString(aSearchString); } \
  NS_IMETHOD SetErrorDescription(const nsAString & aErrorDescription) override { return _to SetErrorDescription(aErrorDescription); } \
  NS_IMETHOD SetDefaultIndex(int32_t aDefaultIndex) override { return _to SetDefaultIndex(aDefaultIndex); } \
  NS_IMETHOD SetSearchResult(uint16_t aSearchResult) override { return _to SetSearchResult(aSearchResult); } \
  NS_IMETHOD SetTypeAheadResult(bool aHidden) override { return _to SetTypeAheadResult(aHidden); } \
  NS_IMETHOD InsertMatchAt(int32_t aIndex, const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) override { return _to InsertMatchAt(aIndex, aValue, aComment, aImage, aStyle, aFinalCompleteValue, aLabel); } \
  NS_IMETHOD AppendMatch(const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) override { return _to AppendMatch(aValue, aComment, aImage, aStyle, aFinalCompleteValue, aLabel); } \
  NS_IMETHOD GetListener(nsIAutoCompleteSimpleResultListener * *_retval) override { return _to GetListener(_retval); } \
  NS_IMETHOD SetListener(nsIAutoCompleteSimpleResultListener *aListener) override { return _to SetListener(aListener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAUTOCOMPLETESIMPLERESULT(_to) \
  NS_IMETHOD SetSearchString(const nsAString & aSearchString) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchString(aSearchString); } \
  NS_IMETHOD SetErrorDescription(const nsAString & aErrorDescription) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetErrorDescription(aErrorDescription); } \
  NS_IMETHOD SetDefaultIndex(int32_t aDefaultIndex) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultIndex(aDefaultIndex); } \
  NS_IMETHOD SetSearchResult(uint16_t aSearchResult) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchResult(aSearchResult); } \
  NS_IMETHOD SetTypeAheadResult(bool aHidden) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTypeAheadResult(aHidden); } \
  NS_IMETHOD InsertMatchAt(int32_t aIndex, const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertMatchAt(aIndex, aValue, aComment, aImage, aStyle, aFinalCompleteValue, aLabel); } \
  NS_IMETHOD AppendMatch(const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendMatch(aValue, aComment, aImage, aStyle, aFinalCompleteValue, aLabel); } \
  NS_IMETHOD GetListener(nsIAutoCompleteSimpleResultListener * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetListener(_retval); } \
  NS_IMETHOD SetListener(nsIAutoCompleteSimpleResultListener *aListener) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetListener(aListener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAutoCompleteSimpleResult : public nsIAutoCompleteSimpleResult
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAUTOCOMPLETESIMPLERESULT

  nsAutoCompleteSimpleResult();

private:
  ~nsAutoCompleteSimpleResult();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAutoCompleteSimpleResult, nsIAutoCompleteSimpleResult)

nsAutoCompleteSimpleResult::nsAutoCompleteSimpleResult()
{
  /* member initializers and constructor code */
}

nsAutoCompleteSimpleResult::~nsAutoCompleteSimpleResult()
{
  /* destructor code */
}

/* void setSearchString (in AString aSearchString); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::SetSearchString(const nsAString & aSearchString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setErrorDescription (in AString aErrorDescription); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::SetErrorDescription(const nsAString & aErrorDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setDefaultIndex (in long aDefaultIndex); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::SetDefaultIndex(int32_t aDefaultIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSearchResult (in unsigned short aSearchResult); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::SetSearchResult(uint16_t aSearchResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTypeAheadResult (in boolean aHidden); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::SetTypeAheadResult(bool aHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertMatchAt (in long aIndex, in AString aValue, in AString aComment, [optional] in AString aImage, [optional] in AString aStyle, [optional] in AString aFinalCompleteValue, [optional] in AString aLabel); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::InsertMatchAt(int32_t aIndex, const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendMatch (in AString aValue, in AString aComment, [optional] in AString aImage, [optional] in AString aStyle, [optional] in AString aFinalCompleteValue, [optional] in AString aLabel); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::AppendMatch(const nsAString & aValue, const nsAString & aComment, const nsAString & aImage, const nsAString & aStyle, const nsAString & aFinalCompleteValue, const nsAString & aLabel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAutoCompleteSimpleResultListener getListener (); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::GetListener(nsIAutoCompleteSimpleResultListener * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setListener (in nsIAutoCompleteSimpleResultListener aListener); */
NS_IMETHODIMP nsAutoCompleteSimpleResult::SetListener(nsIAutoCompleteSimpleResultListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIAutoCompleteSimpleResultListener */
#define NS_IAUTOCOMPLETESIMPLERESULTLISTENER_IID_STR "004efdc5-1989-4874-8a7a-345bf2fa33af"

#define NS_IAUTOCOMPLETESIMPLERESULTLISTENER_IID \
  {0x004efdc5, 0x1989, 0x4874, \
    { 0x8a, 0x7a, 0x34, 0x5b, 0xf2, 0xfa, 0x33, 0xaf }}

class NS_NO_VTABLE nsIAutoCompleteSimpleResultListener : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IAUTOCOMPLETESIMPLERESULTLISTENER_IID)

  /* void onValueRemoved (in nsIAutoCompleteSimpleResult aResult, in AString aValue, in boolean aRemoveFromDb); */
  NS_IMETHOD OnValueRemoved(nsIAutoCompleteSimpleResult *aResult, const nsAString & aValue, bool aRemoveFromDb) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAutoCompleteSimpleResultListener, NS_IAUTOCOMPLETESIMPLERESULTLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIAUTOCOMPLETESIMPLERESULTLISTENER \
  NS_IMETHOD OnValueRemoved(nsIAutoCompleteSimpleResult *aResult, const nsAString & aValue, bool aRemoveFromDb) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIAUTOCOMPLETESIMPLERESULTLISTENER \
  NS_METHOD OnValueRemoved(nsIAutoCompleteSimpleResult *aResult, const nsAString & aValue, bool aRemoveFromDb); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIAUTOCOMPLETESIMPLERESULTLISTENER(_to) \
  NS_IMETHOD OnValueRemoved(nsIAutoCompleteSimpleResult *aResult, const nsAString & aValue, bool aRemoveFromDb) override { return _to OnValueRemoved(aResult, aValue, aRemoveFromDb); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIAUTOCOMPLETESIMPLERESULTLISTENER(_to) \
  NS_IMETHOD OnValueRemoved(nsIAutoCompleteSimpleResult *aResult, const nsAString & aValue, bool aRemoveFromDb) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnValueRemoved(aResult, aValue, aRemoveFromDb); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAutoCompleteSimpleResultListener : public nsIAutoCompleteSimpleResultListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIAUTOCOMPLETESIMPLERESULTLISTENER

  nsAutoCompleteSimpleResultListener();

private:
  ~nsAutoCompleteSimpleResultListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsAutoCompleteSimpleResultListener, nsIAutoCompleteSimpleResultListener)

nsAutoCompleteSimpleResultListener::nsAutoCompleteSimpleResultListener()
{
  /* member initializers and constructor code */
}

nsAutoCompleteSimpleResultListener::~nsAutoCompleteSimpleResultListener()
{
  /* destructor code */
}

/* void onValueRemoved (in nsIAutoCompleteSimpleResult aResult, in AString aValue, in boolean aRemoveFromDb); */
NS_IMETHODIMP nsAutoCompleteSimpleResultListener::OnValueRemoved(nsIAutoCompleteSimpleResult *aResult, const nsAString & aValue, bool aRemoveFromDb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAutoCompleteSimpleResult_h__ */
