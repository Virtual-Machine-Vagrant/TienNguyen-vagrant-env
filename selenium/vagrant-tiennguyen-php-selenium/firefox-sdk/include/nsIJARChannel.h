/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIJARChannel.idl
 */

#ifndef __gen_nsIJARChannel_h__
#define __gen_nsIJARChannel_h__


#ifndef __gen_nsIChannel_h__
#include "nsIChannel.h"
#endif

#include "mozilla/Assertions.h"
#include "mozilla/DebugOnly.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */

class nsIZipEntry; /* forward declaration */


/* starting interface:    nsIJARChannel */
#define NS_IJARCHANNEL_IID_STR "e72b179b-d5df-4d87-b5de-fd73a65c60f6"

#define NS_IJARCHANNEL_IID \
  {0xe72b179b, 0xd5df, 0x4d87, \
    { 0xb5, 0xde, 0xfd, 0x73, 0xa6, 0x5c, 0x60, 0xf6 }}

class NS_NO_VTABLE nsIJARChannel : public nsIChannel {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IJARCHANNEL_IID)

  /* [infallible] readonly attribute boolean isUnsafe; */
  NS_IMETHOD GetIsUnsafe(bool *aIsUnsafe) = 0;
  inline bool GetIsUnsafe()
  {
    bool result;
    mozilla::DebugOnly<nsresult> rv = GetIsUnsafe(&result);
    MOZ_ASSERT(NS_SUCCEEDED(rv));
    return result;
  }

  /* void setAppURI (in nsIURI uri); */
  NS_IMETHOD SetAppURI(nsIURI *uri) = 0;

  /* readonly attribute nsIFile jarFile; */
  NS_IMETHOD GetJarFile(nsIFile * *aJarFile) = 0;

  /* readonly attribute nsIZipEntry zipEntry; */
  NS_IMETHOD GetZipEntry(nsIZipEntry * *aZipEntry) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIJARChannel, NS_IJARCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIJARCHANNEL \
  using nsIJARChannel::GetIsUnsafe; \
  NS_IMETHOD GetIsUnsafe(bool *aIsUnsafe) override; \
  NS_IMETHOD SetAppURI(nsIURI *uri) override; \
  NS_IMETHOD GetJarFile(nsIFile * *aJarFile) override; \
  NS_IMETHOD GetZipEntry(nsIZipEntry * *aZipEntry) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIJARCHANNEL \
  using nsIJARChannel::GetIsUnsafe; \
  NS_METHOD GetIsUnsafe(bool *aIsUnsafe); \
  NS_METHOD SetAppURI(nsIURI *uri); \
  NS_METHOD GetJarFile(nsIFile * *aJarFile); \
  NS_METHOD GetZipEntry(nsIZipEntry * *aZipEntry); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIJARCHANNEL(_to) \
  using nsIJARChannel::GetIsUnsafe; \
  NS_IMETHOD GetIsUnsafe(bool *aIsUnsafe) override { return _to GetIsUnsafe(aIsUnsafe); } \
  NS_IMETHOD SetAppURI(nsIURI *uri) override { return _to SetAppURI(uri); } \
  NS_IMETHOD GetJarFile(nsIFile * *aJarFile) override { return _to GetJarFile(aJarFile); } \
  NS_IMETHOD GetZipEntry(nsIZipEntry * *aZipEntry) override { return _to GetZipEntry(aZipEntry); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIJARCHANNEL(_to) \
  NS_IMETHOD GetIsUnsafe(bool *aIsUnsafe) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsUnsafe(aIsUnsafe); } \
  NS_IMETHOD SetAppURI(nsIURI *uri) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAppURI(uri); } \
  NS_IMETHOD GetJarFile(nsIFile * *aJarFile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJarFile(aJarFile); } \
  NS_IMETHOD GetZipEntry(nsIZipEntry * *aZipEntry) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZipEntry(aZipEntry); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsJARChannel : public nsIJARChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIJARCHANNEL

  nsJARChannel();

private:
  ~nsJARChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsJARChannel, nsIJARChannel)

nsJARChannel::nsJARChannel()
{
  /* member initializers and constructor code */
}

nsJARChannel::~nsJARChannel()
{
  /* destructor code */
}

/* [infallible] readonly attribute boolean isUnsafe; */
NS_IMETHODIMP nsJARChannel::GetIsUnsafe(bool *aIsUnsafe)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setAppURI (in nsIURI uri); */
NS_IMETHODIMP nsJARChannel::SetAppURI(nsIURI *uri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile jarFile; */
NS_IMETHODIMP nsJARChannel::GetJarFile(nsIFile * *aJarFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIZipEntry zipEntry; */
NS_IMETHODIMP nsJARChannel::GetZipEntry(nsIZipEntry * *aZipEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIJARChannel_h__ */
