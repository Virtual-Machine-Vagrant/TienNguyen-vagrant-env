/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIFileURL.idl
 */

#ifndef __gen_nsIFileURL_h__
#define __gen_nsIFileURL_h__


#ifndef __gen_nsIURL_h__
#include "nsIURL.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */


/* starting interface:    nsIFileURL */
#define NS_IFILEURL_IID_STR "e91ac988-27c2-448b-b1a1-3822e1ef1987"

#define NS_IFILEURL_IID \
  {0xe91ac988, 0x27c2, 0x448b, \
    { 0xb1, 0xa1, 0x38, 0x22, 0xe1, 0xef, 0x19, 0x87 }}

class NS_NO_VTABLE nsIFileURL : public nsIURL {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFILEURL_IID)

  /* attribute nsIFile file; */
  NS_IMETHOD GetFile(nsIFile * *aFile) = 0;
  NS_IMETHOD SetFile(nsIFile *aFile) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFileURL, NS_IFILEURL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFILEURL \
  NS_IMETHOD GetFile(nsIFile * *aFile) override; \
  NS_IMETHOD SetFile(nsIFile *aFile) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFILEURL \
  NS_METHOD GetFile(nsIFile * *aFile); \
  NS_METHOD SetFile(nsIFile *aFile); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFILEURL(_to) \
  NS_IMETHOD GetFile(nsIFile * *aFile) override { return _to GetFile(aFile); } \
  NS_IMETHOD SetFile(nsIFile *aFile) override { return _to SetFile(aFile); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFILEURL(_to) \
  NS_IMETHOD GetFile(nsIFile * *aFile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(aFile); } \
  NS_IMETHOD SetFile(nsIFile *aFile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFile(aFile); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFileURL : public nsIFileURL
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFILEURL

  nsFileURL();

private:
  ~nsFileURL();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFileURL, nsIFileURL)

nsFileURL::nsFileURL()
{
  /* member initializers and constructor code */
}

nsFileURL::~nsFileURL()
{
  /* destructor code */
}

/* attribute nsIFile file; */
NS_IMETHODIMP nsFileURL::GetFile(nsIFile * *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFileURL::SetFile(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFileURL_h__ */
