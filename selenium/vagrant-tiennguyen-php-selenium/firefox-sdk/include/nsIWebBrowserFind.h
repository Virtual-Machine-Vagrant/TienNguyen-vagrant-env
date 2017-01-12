/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowserFind.idl
 */

#ifndef __gen_nsIWebBrowserFind_h__
#define __gen_nsIWebBrowserFind_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIDOMWindowProxy; /* forward declaration */


/* starting interface:    nsIWebBrowserFind */
#define NS_IWEBBROWSERFIND_IID_STR "e4920136-b3e0-49e0-b1cd-6c783d2591a8"

#define NS_IWEBBROWSERFIND_IID \
  {0xe4920136, 0xb3e0, 0x49e0, \
    { 0xb1, 0xcd, 0x6c, 0x78, 0x3d, 0x25, 0x91, 0xa8 }}

class NS_NO_VTABLE nsIWebBrowserFind : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERFIND_IID)

  /* boolean findNext (); */
  NS_IMETHOD FindNext(bool *_retval) = 0;

  /* attribute wstring searchString; */
  NS_IMETHOD GetSearchString(char16_t * *aSearchString) = 0;
  NS_IMETHOD SetSearchString(const char16_t * aSearchString) = 0;

  /* attribute boolean findBackwards; */
  NS_IMETHOD GetFindBackwards(bool *aFindBackwards) = 0;
  NS_IMETHOD SetFindBackwards(bool aFindBackwards) = 0;

  /* attribute boolean wrapFind; */
  NS_IMETHOD GetWrapFind(bool *aWrapFind) = 0;
  NS_IMETHOD SetWrapFind(bool aWrapFind) = 0;

  /* attribute boolean entireWord; */
  NS_IMETHOD GetEntireWord(bool *aEntireWord) = 0;
  NS_IMETHOD SetEntireWord(bool aEntireWord) = 0;

  /* attribute boolean matchCase; */
  NS_IMETHOD GetMatchCase(bool *aMatchCase) = 0;
  NS_IMETHOD SetMatchCase(bool aMatchCase) = 0;

  /* attribute boolean searchFrames; */
  NS_IMETHOD GetSearchFrames(bool *aSearchFrames) = 0;
  NS_IMETHOD SetSearchFrames(bool aSearchFrames) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserFind, NS_IWEBBROWSERFIND_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERFIND \
  NS_IMETHOD FindNext(bool *_retval) override; \
  NS_IMETHOD GetSearchString(char16_t * *aSearchString) override; \
  NS_IMETHOD SetSearchString(const char16_t * aSearchString) override; \
  NS_IMETHOD GetFindBackwards(bool *aFindBackwards) override; \
  NS_IMETHOD SetFindBackwards(bool aFindBackwards) override; \
  NS_IMETHOD GetWrapFind(bool *aWrapFind) override; \
  NS_IMETHOD SetWrapFind(bool aWrapFind) override; \
  NS_IMETHOD GetEntireWord(bool *aEntireWord) override; \
  NS_IMETHOD SetEntireWord(bool aEntireWord) override; \
  NS_IMETHOD GetMatchCase(bool *aMatchCase) override; \
  NS_IMETHOD SetMatchCase(bool aMatchCase) override; \
  NS_IMETHOD GetSearchFrames(bool *aSearchFrames) override; \
  NS_IMETHOD SetSearchFrames(bool aSearchFrames) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERFIND \
  NS_METHOD FindNext(bool *_retval); \
  NS_METHOD GetSearchString(char16_t * *aSearchString); \
  NS_METHOD SetSearchString(const char16_t * aSearchString); \
  NS_METHOD GetFindBackwards(bool *aFindBackwards); \
  NS_METHOD SetFindBackwards(bool aFindBackwards); \
  NS_METHOD GetWrapFind(bool *aWrapFind); \
  NS_METHOD SetWrapFind(bool aWrapFind); \
  NS_METHOD GetEntireWord(bool *aEntireWord); \
  NS_METHOD SetEntireWord(bool aEntireWord); \
  NS_METHOD GetMatchCase(bool *aMatchCase); \
  NS_METHOD SetMatchCase(bool aMatchCase); \
  NS_METHOD GetSearchFrames(bool *aSearchFrames); \
  NS_METHOD SetSearchFrames(bool aSearchFrames); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERFIND(_to) \
  NS_IMETHOD FindNext(bool *_retval) override { return _to FindNext(_retval); } \
  NS_IMETHOD GetSearchString(char16_t * *aSearchString) override { return _to GetSearchString(aSearchString); } \
  NS_IMETHOD SetSearchString(const char16_t * aSearchString) override { return _to SetSearchString(aSearchString); } \
  NS_IMETHOD GetFindBackwards(bool *aFindBackwards) override { return _to GetFindBackwards(aFindBackwards); } \
  NS_IMETHOD SetFindBackwards(bool aFindBackwards) override { return _to SetFindBackwards(aFindBackwards); } \
  NS_IMETHOD GetWrapFind(bool *aWrapFind) override { return _to GetWrapFind(aWrapFind); } \
  NS_IMETHOD SetWrapFind(bool aWrapFind) override { return _to SetWrapFind(aWrapFind); } \
  NS_IMETHOD GetEntireWord(bool *aEntireWord) override { return _to GetEntireWord(aEntireWord); } \
  NS_IMETHOD SetEntireWord(bool aEntireWord) override { return _to SetEntireWord(aEntireWord); } \
  NS_IMETHOD GetMatchCase(bool *aMatchCase) override { return _to GetMatchCase(aMatchCase); } \
  NS_IMETHOD SetMatchCase(bool aMatchCase) override { return _to SetMatchCase(aMatchCase); } \
  NS_IMETHOD GetSearchFrames(bool *aSearchFrames) override { return _to GetSearchFrames(aSearchFrames); } \
  NS_IMETHOD SetSearchFrames(bool aSearchFrames) override { return _to SetSearchFrames(aSearchFrames); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERFIND(_to) \
  NS_IMETHOD FindNext(bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->FindNext(_retval); } \
  NS_IMETHOD GetSearchString(char16_t * *aSearchString) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchString(aSearchString); } \
  NS_IMETHOD SetSearchString(const char16_t * aSearchString) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchString(aSearchString); } \
  NS_IMETHOD GetFindBackwards(bool *aFindBackwards) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFindBackwards(aFindBackwards); } \
  NS_IMETHOD SetFindBackwards(bool aFindBackwards) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFindBackwards(aFindBackwards); } \
  NS_IMETHOD GetWrapFind(bool *aWrapFind) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrapFind(aWrapFind); } \
  NS_IMETHOD SetWrapFind(bool aWrapFind) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWrapFind(aWrapFind); } \
  NS_IMETHOD GetEntireWord(bool *aEntireWord) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEntireWord(aEntireWord); } \
  NS_IMETHOD SetEntireWord(bool aEntireWord) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEntireWord(aEntireWord); } \
  NS_IMETHOD GetMatchCase(bool *aMatchCase) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMatchCase(aMatchCase); } \
  NS_IMETHOD SetMatchCase(bool aMatchCase) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMatchCase(aMatchCase); } \
  NS_IMETHOD GetSearchFrames(bool *aSearchFrames) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchFrames(aSearchFrames); } \
  NS_IMETHOD SetSearchFrames(bool aSearchFrames) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchFrames(aSearchFrames); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserFind : public nsIWebBrowserFind
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERFIND

  nsWebBrowserFind();

private:
  ~nsWebBrowserFind();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserFind, nsIWebBrowserFind)

nsWebBrowserFind::nsWebBrowserFind()
{
  /* member initializers and constructor code */
}

nsWebBrowserFind::~nsWebBrowserFind()
{
  /* destructor code */
}

/* boolean findNext (); */
NS_IMETHODIMP nsWebBrowserFind::FindNext(bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute wstring searchString; */
NS_IMETHODIMP nsWebBrowserFind::GetSearchString(char16_t * *aSearchString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetSearchString(const char16_t * aSearchString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean findBackwards; */
NS_IMETHODIMP nsWebBrowserFind::GetFindBackwards(bool *aFindBackwards)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetFindBackwards(bool aFindBackwards)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean wrapFind; */
NS_IMETHODIMP nsWebBrowserFind::GetWrapFind(bool *aWrapFind)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetWrapFind(bool aWrapFind)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean entireWord; */
NS_IMETHODIMP nsWebBrowserFind::GetEntireWord(bool *aEntireWord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetEntireWord(bool aEntireWord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean matchCase; */
NS_IMETHODIMP nsWebBrowserFind::GetMatchCase(bool *aMatchCase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetMatchCase(bool aMatchCase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean searchFrames; */
NS_IMETHODIMP nsWebBrowserFind::GetSearchFrames(bool *aSearchFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFind::SetSearchFrames(bool aSearchFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebBrowserFindInFrames */
#define NS_IWEBBROWSERFINDINFRAMES_IID_STR "e0f5d182-34bc-11d5-be5b-b760676c6ebc"

#define NS_IWEBBROWSERFINDINFRAMES_IID \
  {0xe0f5d182, 0x34bc, 0x11d5, \
    { 0xbe, 0x5b, 0xb7, 0x60, 0x67, 0x6c, 0x6e, 0xbc }}

class NS_NO_VTABLE nsIWebBrowserFindInFrames : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERFINDINFRAMES_IID)

  /* attribute mozIDOMWindowProxy currentSearchFrame; */
  NS_IMETHOD GetCurrentSearchFrame(mozIDOMWindowProxy * *aCurrentSearchFrame) = 0;
  NS_IMETHOD SetCurrentSearchFrame(mozIDOMWindowProxy *aCurrentSearchFrame) = 0;

  /* attribute mozIDOMWindowProxy rootSearchFrame; */
  NS_IMETHOD GetRootSearchFrame(mozIDOMWindowProxy * *aRootSearchFrame) = 0;
  NS_IMETHOD SetRootSearchFrame(mozIDOMWindowProxy *aRootSearchFrame) = 0;

  /* attribute boolean searchSubframes; */
  NS_IMETHOD GetSearchSubframes(bool *aSearchSubframes) = 0;
  NS_IMETHOD SetSearchSubframes(bool aSearchSubframes) = 0;

  /* attribute boolean searchParentFrames; */
  NS_IMETHOD GetSearchParentFrames(bool *aSearchParentFrames) = 0;
  NS_IMETHOD SetSearchParentFrames(bool aSearchParentFrames) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserFindInFrames, NS_IWEBBROWSERFINDINFRAMES_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERFINDINFRAMES \
  NS_IMETHOD GetCurrentSearchFrame(mozIDOMWindowProxy * *aCurrentSearchFrame) override; \
  NS_IMETHOD SetCurrentSearchFrame(mozIDOMWindowProxy *aCurrentSearchFrame) override; \
  NS_IMETHOD GetRootSearchFrame(mozIDOMWindowProxy * *aRootSearchFrame) override; \
  NS_IMETHOD SetRootSearchFrame(mozIDOMWindowProxy *aRootSearchFrame) override; \
  NS_IMETHOD GetSearchSubframes(bool *aSearchSubframes) override; \
  NS_IMETHOD SetSearchSubframes(bool aSearchSubframes) override; \
  NS_IMETHOD GetSearchParentFrames(bool *aSearchParentFrames) override; \
  NS_IMETHOD SetSearchParentFrames(bool aSearchParentFrames) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERFINDINFRAMES \
  NS_METHOD GetCurrentSearchFrame(mozIDOMWindowProxy * *aCurrentSearchFrame); \
  NS_METHOD SetCurrentSearchFrame(mozIDOMWindowProxy *aCurrentSearchFrame); \
  NS_METHOD GetRootSearchFrame(mozIDOMWindowProxy * *aRootSearchFrame); \
  NS_METHOD SetRootSearchFrame(mozIDOMWindowProxy *aRootSearchFrame); \
  NS_METHOD GetSearchSubframes(bool *aSearchSubframes); \
  NS_METHOD SetSearchSubframes(bool aSearchSubframes); \
  NS_METHOD GetSearchParentFrames(bool *aSearchParentFrames); \
  NS_METHOD SetSearchParentFrames(bool aSearchParentFrames); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERFINDINFRAMES(_to) \
  NS_IMETHOD GetCurrentSearchFrame(mozIDOMWindowProxy * *aCurrentSearchFrame) override { return _to GetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_IMETHOD SetCurrentSearchFrame(mozIDOMWindowProxy *aCurrentSearchFrame) override { return _to SetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_IMETHOD GetRootSearchFrame(mozIDOMWindowProxy * *aRootSearchFrame) override { return _to GetRootSearchFrame(aRootSearchFrame); } \
  NS_IMETHOD SetRootSearchFrame(mozIDOMWindowProxy *aRootSearchFrame) override { return _to SetRootSearchFrame(aRootSearchFrame); } \
  NS_IMETHOD GetSearchSubframes(bool *aSearchSubframes) override { return _to GetSearchSubframes(aSearchSubframes); } \
  NS_IMETHOD SetSearchSubframes(bool aSearchSubframes) override { return _to SetSearchSubframes(aSearchSubframes); } \
  NS_IMETHOD GetSearchParentFrames(bool *aSearchParentFrames) override { return _to GetSearchParentFrames(aSearchParentFrames); } \
  NS_IMETHOD SetSearchParentFrames(bool aSearchParentFrames) override { return _to SetSearchParentFrames(aSearchParentFrames); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERFINDINFRAMES(_to) \
  NS_IMETHOD GetCurrentSearchFrame(mozIDOMWindowProxy * *aCurrentSearchFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_IMETHOD SetCurrentSearchFrame(mozIDOMWindowProxy *aCurrentSearchFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentSearchFrame(aCurrentSearchFrame); } \
  NS_IMETHOD GetRootSearchFrame(mozIDOMWindowProxy * *aRootSearchFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootSearchFrame(aRootSearchFrame); } \
  NS_IMETHOD SetRootSearchFrame(mozIDOMWindowProxy *aRootSearchFrame) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRootSearchFrame(aRootSearchFrame); } \
  NS_IMETHOD GetSearchSubframes(bool *aSearchSubframes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchSubframes(aSearchSubframes); } \
  NS_IMETHOD SetSearchSubframes(bool aSearchSubframes) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchSubframes(aSearchSubframes); } \
  NS_IMETHOD GetSearchParentFrames(bool *aSearchParentFrames) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchParentFrames(aSearchParentFrames); } \
  NS_IMETHOD SetSearchParentFrames(bool aSearchParentFrames) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSearchParentFrames(aSearchParentFrames); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserFindInFrames : public nsIWebBrowserFindInFrames
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERFINDINFRAMES

  nsWebBrowserFindInFrames();

private:
  ~nsWebBrowserFindInFrames();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserFindInFrames, nsIWebBrowserFindInFrames)

nsWebBrowserFindInFrames::nsWebBrowserFindInFrames()
{
  /* member initializers and constructor code */
}

nsWebBrowserFindInFrames::~nsWebBrowserFindInFrames()
{
  /* destructor code */
}

/* attribute mozIDOMWindowProxy currentSearchFrame; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetCurrentSearchFrame(mozIDOMWindowProxy * *aCurrentSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetCurrentSearchFrame(mozIDOMWindowProxy *aCurrentSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute mozIDOMWindowProxy rootSearchFrame; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetRootSearchFrame(mozIDOMWindowProxy * *aRootSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetRootSearchFrame(mozIDOMWindowProxy *aRootSearchFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean searchSubframes; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetSearchSubframes(bool *aSearchSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetSearchSubframes(bool aSearchSubframes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean searchParentFrames; */
NS_IMETHODIMP nsWebBrowserFindInFrames::GetSearchParentFrames(bool *aSearchParentFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserFindInFrames::SetSearchParentFrames(bool aSearchParentFrames)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserFind_h__ */
