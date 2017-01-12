/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIURL.idl
 */

#ifndef __gen_nsIURL_h__
#define __gen_nsIURL_h__


#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIURL */
#define NS_IURL_IID_STR "86adcd89-0b70-47a2-b0fe-5bb2c5f37e31"

#define NS_IURL_IID \
  {0x86adcd89, 0x0b70, 0x47a2, \
    { 0xb0, 0xfe, 0x5b, 0xb2, 0xc5, 0xf3, 0x7e, 0x31 }}

class NS_NO_VTABLE nsIURL : public nsIURI {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURL_IID)

  /* attribute AUTF8String filePath; */
  NS_IMETHOD GetFilePath(nsACString & aFilePath) = 0;
  NS_IMETHOD SetFilePath(const nsACString & aFilePath) = 0;

  /* attribute AUTF8String query; */
  NS_IMETHOD GetQuery(nsACString & aQuery) = 0;
  NS_IMETHOD SetQuery(const nsACString & aQuery) = 0;

  /* attribute AUTF8String directory; */
  NS_IMETHOD GetDirectory(nsACString & aDirectory) = 0;
  NS_IMETHOD SetDirectory(const nsACString & aDirectory) = 0;

  /* attribute AUTF8String fileName; */
  NS_IMETHOD GetFileName(nsACString & aFileName) = 0;
  NS_IMETHOD SetFileName(const nsACString & aFileName) = 0;

  /* attribute AUTF8String fileBaseName; */
  NS_IMETHOD GetFileBaseName(nsACString & aFileBaseName) = 0;
  NS_IMETHOD SetFileBaseName(const nsACString & aFileBaseName) = 0;

  /* attribute AUTF8String fileExtension; */
  NS_IMETHOD GetFileExtension(nsACString & aFileExtension) = 0;
  NS_IMETHOD SetFileExtension(const nsACString & aFileExtension) = 0;

  /* AUTF8String getCommonBaseSpec (in nsIURI aURIToCompare); */
  NS_IMETHOD GetCommonBaseSpec(nsIURI *aURIToCompare, nsACString & _retval) = 0;

  /* AUTF8String getRelativeSpec (in nsIURI aURIToCompare); */
  NS_IMETHOD GetRelativeSpec(nsIURI *aURIToCompare, nsACString & _retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIURL, NS_IURL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURL \
  NS_IMETHOD GetFilePath(nsACString & aFilePath) override; \
  NS_IMETHOD SetFilePath(const nsACString & aFilePath) override; \
  NS_IMETHOD GetQuery(nsACString & aQuery) override; \
  NS_IMETHOD SetQuery(const nsACString & aQuery) override; \
  NS_IMETHOD GetDirectory(nsACString & aDirectory) override; \
  NS_IMETHOD SetDirectory(const nsACString & aDirectory) override; \
  NS_IMETHOD GetFileName(nsACString & aFileName) override; \
  NS_IMETHOD SetFileName(const nsACString & aFileName) override; \
  NS_IMETHOD GetFileBaseName(nsACString & aFileBaseName) override; \
  NS_IMETHOD SetFileBaseName(const nsACString & aFileBaseName) override; \
  NS_IMETHOD GetFileExtension(nsACString & aFileExtension) override; \
  NS_IMETHOD SetFileExtension(const nsACString & aFileExtension) override; \
  NS_IMETHOD GetCommonBaseSpec(nsIURI *aURIToCompare, nsACString & _retval) override; \
  NS_IMETHOD GetRelativeSpec(nsIURI *aURIToCompare, nsACString & _retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIURL \
  NS_METHOD GetFilePath(nsACString & aFilePath); \
  NS_METHOD SetFilePath(const nsACString & aFilePath); \
  NS_METHOD GetQuery(nsACString & aQuery); \
  NS_METHOD SetQuery(const nsACString & aQuery); \
  NS_METHOD GetDirectory(nsACString & aDirectory); \
  NS_METHOD SetDirectory(const nsACString & aDirectory); \
  NS_METHOD GetFileName(nsACString & aFileName); \
  NS_METHOD SetFileName(const nsACString & aFileName); \
  NS_METHOD GetFileBaseName(nsACString & aFileBaseName); \
  NS_METHOD SetFileBaseName(const nsACString & aFileBaseName); \
  NS_METHOD GetFileExtension(nsACString & aFileExtension); \
  NS_METHOD SetFileExtension(const nsACString & aFileExtension); \
  NS_METHOD GetCommonBaseSpec(nsIURI *aURIToCompare, nsACString & _retval); \
  NS_METHOD GetRelativeSpec(nsIURI *aURIToCompare, nsACString & _retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURL(_to) \
  NS_IMETHOD GetFilePath(nsACString & aFilePath) override { return _to GetFilePath(aFilePath); } \
  NS_IMETHOD SetFilePath(const nsACString & aFilePath) override { return _to SetFilePath(aFilePath); } \
  NS_IMETHOD GetQuery(nsACString & aQuery) override { return _to GetQuery(aQuery); } \
  NS_IMETHOD SetQuery(const nsACString & aQuery) override { return _to SetQuery(aQuery); } \
  NS_IMETHOD GetDirectory(nsACString & aDirectory) override { return _to GetDirectory(aDirectory); } \
  NS_IMETHOD SetDirectory(const nsACString & aDirectory) override { return _to SetDirectory(aDirectory); } \
  NS_IMETHOD GetFileName(nsACString & aFileName) override { return _to GetFileName(aFileName); } \
  NS_IMETHOD SetFileName(const nsACString & aFileName) override { return _to SetFileName(aFileName); } \
  NS_IMETHOD GetFileBaseName(nsACString & aFileBaseName) override { return _to GetFileBaseName(aFileBaseName); } \
  NS_IMETHOD SetFileBaseName(const nsACString & aFileBaseName) override { return _to SetFileBaseName(aFileBaseName); } \
  NS_IMETHOD GetFileExtension(nsACString & aFileExtension) override { return _to GetFileExtension(aFileExtension); } \
  NS_IMETHOD SetFileExtension(const nsACString & aFileExtension) override { return _to SetFileExtension(aFileExtension); } \
  NS_IMETHOD GetCommonBaseSpec(nsIURI *aURIToCompare, nsACString & _retval) override { return _to GetCommonBaseSpec(aURIToCompare, _retval); } \
  NS_IMETHOD GetRelativeSpec(nsIURI *aURIToCompare, nsACString & _retval) override { return _to GetRelativeSpec(aURIToCompare, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURL(_to) \
  NS_IMETHOD GetFilePath(nsACString & aFilePath) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilePath(aFilePath); } \
  NS_IMETHOD SetFilePath(const nsACString & aFilePath) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilePath(aFilePath); } \
  NS_IMETHOD GetQuery(nsACString & aQuery) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetQuery(aQuery); } \
  NS_IMETHOD SetQuery(const nsACString & aQuery) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetQuery(aQuery); } \
  NS_IMETHOD GetDirectory(nsACString & aDirectory) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirectory(aDirectory); } \
  NS_IMETHOD SetDirectory(const nsACString & aDirectory) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDirectory(aDirectory); } \
  NS_IMETHOD GetFileName(nsACString & aFileName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileName(aFileName); } \
  NS_IMETHOD SetFileName(const nsACString & aFileName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileName(aFileName); } \
  NS_IMETHOD GetFileBaseName(nsACString & aFileBaseName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileBaseName(aFileBaseName); } \
  NS_IMETHOD SetFileBaseName(const nsACString & aFileBaseName) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileBaseName(aFileBaseName); } \
  NS_IMETHOD GetFileExtension(nsACString & aFileExtension) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileExtension(aFileExtension); } \
  NS_IMETHOD SetFileExtension(const nsACString & aFileExtension) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileExtension(aFileExtension); } \
  NS_IMETHOD GetCommonBaseSpec(nsIURI *aURIToCompare, nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCommonBaseSpec(aURIToCompare, _retval); } \
  NS_IMETHOD GetRelativeSpec(nsIURI *aURIToCompare, nsACString & _retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelativeSpec(aURIToCompare, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsURL : public nsIURL
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURL

  nsURL();

private:
  ~nsURL();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsURL, nsIURL)

nsURL::nsURL()
{
  /* member initializers and constructor code */
}

nsURL::~nsURL()
{
  /* destructor code */
}

/* attribute AUTF8String filePath; */
NS_IMETHODIMP nsURL::GetFilePath(nsACString & aFilePath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsURL::SetFilePath(const nsACString & aFilePath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String query; */
NS_IMETHODIMP nsURL::GetQuery(nsACString & aQuery)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsURL::SetQuery(const nsACString & aQuery)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String directory; */
NS_IMETHODIMP nsURL::GetDirectory(nsACString & aDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsURL::SetDirectory(const nsACString & aDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String fileName; */
NS_IMETHODIMP nsURL::GetFileName(nsACString & aFileName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsURL::SetFileName(const nsACString & aFileName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String fileBaseName; */
NS_IMETHODIMP nsURL::GetFileBaseName(nsACString & aFileBaseName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsURL::SetFileBaseName(const nsACString & aFileBaseName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String fileExtension; */
NS_IMETHODIMP nsURL::GetFileExtension(nsACString & aFileExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsURL::SetFileExtension(const nsACString & aFileExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String getCommonBaseSpec (in nsIURI aURIToCompare); */
NS_IMETHODIMP nsURL::GetCommonBaseSpec(nsIURI *aURIToCompare, nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String getRelativeSpec (in nsIURI aURIToCompare); */
NS_IMETHODIMP nsURL::GetRelativeSpec(nsIURI *aURIToCompare, nsACString & _retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIURL_h__ */
