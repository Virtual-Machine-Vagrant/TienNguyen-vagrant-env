/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIViewSourceChannel.idl
 */

#ifndef __gen_nsIViewSourceChannel_h__
#define __gen_nsIViewSourceChannel_h__


#ifndef __gen_nsIChannel_h__
#include "nsIChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIViewSourceChannel */
#define NS_IVIEWSOURCECHANNEL_IID_STR "3e9800f8-edb7-4c9a-9285-09b4f045b019"

#define NS_IVIEWSOURCECHANNEL_IID \
  {0x3e9800f8, 0xedb7, 0x4c9a, \
    { 0x92, 0x85, 0x09, 0xb4, 0xf0, 0x45, 0xb0, 0x19 }}

class NS_NO_VTABLE nsIViewSourceChannel : public nsIChannel {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IVIEWSOURCECHANNEL_IID)

  /* attribute ACString originalContentType; */
  NS_IMETHOD GetOriginalContentType(nsACString & aOriginalContentType) = 0;
  NS_IMETHOD SetOriginalContentType(const nsACString & aOriginalContentType) = 0;

  /* readonly attribute boolean isSrcdocChannel; */
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) = 0;

  /* attribute nsIURI baseURI; */
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) = 0;
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIViewSourceChannel, NS_IVIEWSOURCECHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIVIEWSOURCECHANNEL \
  NS_IMETHOD GetOriginalContentType(nsACString & aOriginalContentType) override; \
  NS_IMETHOD SetOriginalContentType(const nsACString & aOriginalContentType) override; \
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) override; \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override; \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIVIEWSOURCECHANNEL \
  NS_METHOD GetOriginalContentType(nsACString & aOriginalContentType); \
  NS_METHOD SetOriginalContentType(const nsACString & aOriginalContentType); \
  NS_METHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel); \
  NS_METHOD GetBaseURI(nsIURI * *aBaseURI); \
  NS_METHOD SetBaseURI(nsIURI *aBaseURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIVIEWSOURCECHANNEL(_to) \
  NS_IMETHOD GetOriginalContentType(nsACString & aOriginalContentType) override { return _to GetOriginalContentType(aOriginalContentType); } \
  NS_IMETHOD SetOriginalContentType(const nsACString & aOriginalContentType) override { return _to SetOriginalContentType(aOriginalContentType); } \
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) override { return _to GetIsSrcdocChannel(aIsSrcdocChannel); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return _to GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return _to SetBaseURI(aBaseURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIVIEWSOURCECHANNEL(_to) \
  NS_IMETHOD GetOriginalContentType(nsACString & aOriginalContentType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalContentType(aOriginalContentType); } \
  NS_IMETHOD SetOriginalContentType(const nsACString & aOriginalContentType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOriginalContentType(aOriginalContentType); } \
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSrcdocChannel(aIsSrcdocChannel); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBaseURI(aBaseURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsViewSourceChannel : public nsIViewSourceChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIVIEWSOURCECHANNEL

  nsViewSourceChannel();

private:
  ~nsViewSourceChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsViewSourceChannel, nsIViewSourceChannel)

nsViewSourceChannel::nsViewSourceChannel()
{
  /* member initializers and constructor code */
}

nsViewSourceChannel::~nsViewSourceChannel()
{
  /* destructor code */
}

/* attribute ACString originalContentType; */
NS_IMETHODIMP nsViewSourceChannel::GetOriginalContentType(nsACString & aOriginalContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsViewSourceChannel::SetOriginalContentType(const nsACString & aOriginalContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSrcdocChannel; */
NS_IMETHODIMP nsViewSourceChannel::GetIsSrcdocChannel(bool *aIsSrcdocChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI baseURI; */
NS_IMETHODIMP nsViewSourceChannel::GetBaseURI(nsIURI * *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsViewSourceChannel::SetBaseURI(nsIURI *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIViewSourceChannel_h__ */
