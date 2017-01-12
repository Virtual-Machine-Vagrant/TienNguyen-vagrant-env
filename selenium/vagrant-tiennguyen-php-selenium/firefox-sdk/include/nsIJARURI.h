/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIJARURI.idl
 */

#ifndef __gen_nsIJARURI_h__
#define __gen_nsIJARURI_h__


#ifndef __gen_nsIURL_h__
#include "nsIURL.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIJARURI */
#define NS_IJARURI_IID_STR "646a508c-f786-4e14-be6d-8dda2a633c60"

#define NS_IJARURI_IID \
  {0x646a508c, 0xf786, 0x4e14, \
    { 0xbe, 0x6d, 0x8d, 0xda, 0x2a, 0x63, 0x3c, 0x60 }}

class NS_NO_VTABLE nsIJARURI : public nsIURL {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IJARURI_IID)

  /* readonly attribute nsIURI JARFile; */
  NS_IMETHOD GetJARFile(nsIURI * *aJARFile) = 0;

  /* attribute AUTF8String JAREntry; */
  NS_IMETHOD GetJAREntry(nsACString & aJAREntry) = 0;
  NS_IMETHOD SetJAREntry(const nsACString & aJAREntry) = 0;

  /* nsIJARURI cloneWithJARFile (in nsIURI jarFile); */
  NS_IMETHOD CloneWithJARFile(nsIURI *jarFile, nsIJARURI * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIJARURI, NS_IJARURI_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIJARURI \
  NS_IMETHOD GetJARFile(nsIURI * *aJARFile) override; \
  NS_IMETHOD GetJAREntry(nsACString & aJAREntry) override; \
  NS_IMETHOD SetJAREntry(const nsACString & aJAREntry) override; \
  NS_IMETHOD CloneWithJARFile(nsIURI *jarFile, nsIJARURI * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIJARURI \
  NS_METHOD GetJARFile(nsIURI * *aJARFile); \
  NS_METHOD GetJAREntry(nsACString & aJAREntry); \
  NS_METHOD SetJAREntry(const nsACString & aJAREntry); \
  NS_METHOD CloneWithJARFile(nsIURI *jarFile, nsIJARURI * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIJARURI(_to) \
  NS_IMETHOD GetJARFile(nsIURI * *aJARFile) override { return _to GetJARFile(aJARFile); } \
  NS_IMETHOD GetJAREntry(nsACString & aJAREntry) override { return _to GetJAREntry(aJAREntry); } \
  NS_IMETHOD SetJAREntry(const nsACString & aJAREntry) override { return _to SetJAREntry(aJAREntry); } \
  NS_IMETHOD CloneWithJARFile(nsIURI *jarFile, nsIJARURI * *_retval) override { return _to CloneWithJARFile(jarFile, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIJARURI(_to) \
  NS_IMETHOD GetJARFile(nsIURI * *aJARFile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJARFile(aJARFile); } \
  NS_IMETHOD GetJAREntry(nsACString & aJAREntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJAREntry(aJAREntry); } \
  NS_IMETHOD SetJAREntry(const nsACString & aJAREntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetJAREntry(aJAREntry); } \
  NS_IMETHOD CloneWithJARFile(nsIURI *jarFile, nsIJARURI * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneWithJARFile(jarFile, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsJARURI : public nsIJARURI
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIJARURI

  nsJARURI();

private:
  ~nsJARURI();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsJARURI, nsIJARURI)

nsJARURI::nsJARURI()
{
  /* member initializers and constructor code */
}

nsJARURI::~nsJARURI()
{
  /* destructor code */
}

/* readonly attribute nsIURI JARFile; */
NS_IMETHODIMP nsJARURI::GetJARFile(nsIURI * *aJARFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String JAREntry; */
NS_IMETHODIMP nsJARURI::GetJAREntry(nsACString & aJAREntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsJARURI::SetJAREntry(const nsACString & aJAREntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIJARURI cloneWithJARFile (in nsIURI jarFile); */
NS_IMETHODIMP nsJARURI::CloneWithJARFile(nsIURI *jarFile, nsIJARURI * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIJARURI_h__ */
