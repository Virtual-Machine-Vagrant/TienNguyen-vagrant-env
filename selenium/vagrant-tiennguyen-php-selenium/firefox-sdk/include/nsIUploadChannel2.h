/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIUploadChannel2.idl
 */

#ifndef __gen_nsIUploadChannel2_h__
#define __gen_nsIUploadChannel2_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInputStream; /* forward declaration */

class nsIRunnable; /* forward declaration */


/* starting interface:    nsIUploadChannel2 */
#define NS_IUPLOADCHANNEL2_IID_STR "2f712b52-19c5-4e0c-9e8f-b5c7c3b67049"

#define NS_IUPLOADCHANNEL2_IID \
  {0x2f712b52, 0x19c5, 0x4e0c, \
    { 0x9e, 0x8f, 0xb5, 0xc7, 0xc3, 0xb6, 0x70, 0x49 }}

class NS_NO_VTABLE nsIUploadChannel2 : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IUPLOADCHANNEL2_IID)

  /* void explicitSetUploadStream (in nsIInputStream aStream, in ACString aContentType, in long long aContentLength, in ACString aMethod, in boolean aStreamHasHeaders); */
  NS_IMETHOD ExplicitSetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, int64_t aContentLength, const nsACString & aMethod, bool aStreamHasHeaders) = 0;

  /* readonly attribute boolean uploadStreamHasHeaders; */
  NS_IMETHOD GetUploadStreamHasHeaders(bool *aUploadStreamHasHeaders) = 0;

  /* [noscript] void ensureUploadStreamIsCloneable (in nsIRunnable aCallback); */
  NS_IMETHOD EnsureUploadStreamIsCloneable(nsIRunnable *aCallback) = 0;

  /* [noscript] nsIInputStream cloneUploadStream (); */
  NS_IMETHOD CloneUploadStream(nsIInputStream * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUploadChannel2, NS_IUPLOADCHANNEL2_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIUPLOADCHANNEL2 \
  NS_IMETHOD ExplicitSetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, int64_t aContentLength, const nsACString & aMethod, bool aStreamHasHeaders) override; \
  NS_IMETHOD GetUploadStreamHasHeaders(bool *aUploadStreamHasHeaders) override; \
  NS_IMETHOD EnsureUploadStreamIsCloneable(nsIRunnable *aCallback) override; \
  NS_IMETHOD CloneUploadStream(nsIInputStream * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIUPLOADCHANNEL2 \
  NS_METHOD ExplicitSetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, int64_t aContentLength, const nsACString & aMethod, bool aStreamHasHeaders); \
  NS_METHOD GetUploadStreamHasHeaders(bool *aUploadStreamHasHeaders); \
  NS_METHOD EnsureUploadStreamIsCloneable(nsIRunnable *aCallback); \
  NS_METHOD CloneUploadStream(nsIInputStream * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIUPLOADCHANNEL2(_to) \
  NS_IMETHOD ExplicitSetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, int64_t aContentLength, const nsACString & aMethod, bool aStreamHasHeaders) override { return _to ExplicitSetUploadStream(aStream, aContentType, aContentLength, aMethod, aStreamHasHeaders); } \
  NS_IMETHOD GetUploadStreamHasHeaders(bool *aUploadStreamHasHeaders) override { return _to GetUploadStreamHasHeaders(aUploadStreamHasHeaders); } \
  NS_IMETHOD EnsureUploadStreamIsCloneable(nsIRunnable *aCallback) override { return _to EnsureUploadStreamIsCloneable(aCallback); } \
  NS_IMETHOD CloneUploadStream(nsIInputStream * *_retval) override { return _to CloneUploadStream(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIUPLOADCHANNEL2(_to) \
  NS_IMETHOD ExplicitSetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, int64_t aContentLength, const nsACString & aMethod, bool aStreamHasHeaders) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ExplicitSetUploadStream(aStream, aContentType, aContentLength, aMethod, aStreamHasHeaders); } \
  NS_IMETHOD GetUploadStreamHasHeaders(bool *aUploadStreamHasHeaders) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUploadStreamHasHeaders(aUploadStreamHasHeaders); } \
  NS_IMETHOD EnsureUploadStreamIsCloneable(nsIRunnable *aCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EnsureUploadStreamIsCloneable(aCallback); } \
  NS_IMETHOD CloneUploadStream(nsIInputStream * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->CloneUploadStream(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUploadChannel2 : public nsIUploadChannel2
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIUPLOADCHANNEL2

  nsUploadChannel2();

private:
  ~nsUploadChannel2();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsUploadChannel2, nsIUploadChannel2)

nsUploadChannel2::nsUploadChannel2()
{
  /* member initializers and constructor code */
}

nsUploadChannel2::~nsUploadChannel2()
{
  /* destructor code */
}

/* void explicitSetUploadStream (in nsIInputStream aStream, in ACString aContentType, in long long aContentLength, in ACString aMethod, in boolean aStreamHasHeaders); */
NS_IMETHODIMP nsUploadChannel2::ExplicitSetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, int64_t aContentLength, const nsACString & aMethod, bool aStreamHasHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean uploadStreamHasHeaders; */
NS_IMETHODIMP nsUploadChannel2::GetUploadStreamHasHeaders(bool *aUploadStreamHasHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void ensureUploadStreamIsCloneable (in nsIRunnable aCallback); */
NS_IMETHODIMP nsUploadChannel2::EnsureUploadStreamIsCloneable(nsIRunnable *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIInputStream cloneUploadStream (); */
NS_IMETHODIMP nsUploadChannel2::CloneUploadStream(nsIInputStream * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUploadChannel2_h__ */
