/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIInputStreamChannel.idl
 */

#ifndef __gen_nsIInputStreamChannel_h__
#define __gen_nsIInputStreamChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInputStream; /* forward declaration */

class nsIURI; /* forward declaration */


/* starting interface:    nsIInputStreamChannel */
#define NS_IINPUTSTREAMCHANNEL_IID_STR "ea730238-4bfd-4015-8489-8f264d05b343"

#define NS_IINPUTSTREAMCHANNEL_IID \
  {0xea730238, 0x4bfd, 0x4015, \
    { 0x84, 0x89, 0x8f, 0x26, 0x4d, 0x05, 0xb3, 0x43 }}

class NS_NO_VTABLE nsIInputStreamChannel : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINPUTSTREAMCHANNEL_IID)

  /* void setURI (in nsIURI aURI); */
  NS_IMETHOD SetURI(nsIURI *aURI) = 0;

  /* attribute nsIInputStream contentStream; */
  NS_IMETHOD GetContentStream(nsIInputStream * *aContentStream) = 0;
  NS_IMETHOD SetContentStream(nsIInputStream *aContentStream) = 0;

  /* attribute AString srcdocData; */
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) = 0;
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) = 0;

  /* readonly attribute boolean isSrcdocChannel; */
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) = 0;

  /* attribute nsIURI baseURI; */
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) = 0;
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIInputStreamChannel, NS_IINPUTSTREAMCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINPUTSTREAMCHANNEL \
  NS_IMETHOD SetURI(nsIURI *aURI) override; \
  NS_IMETHOD GetContentStream(nsIInputStream * *aContentStream) override; \
  NS_IMETHOD SetContentStream(nsIInputStream *aContentStream) override; \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override; \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override; \
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) override; \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override; \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIINPUTSTREAMCHANNEL \
  NS_METHOD SetURI(nsIURI *aURI); \
  NS_METHOD GetContentStream(nsIInputStream * *aContentStream); \
  NS_METHOD SetContentStream(nsIInputStream *aContentStream); \
  NS_METHOD GetSrcdocData(nsAString & aSrcdocData); \
  NS_METHOD SetSrcdocData(const nsAString & aSrcdocData); \
  NS_METHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel); \
  NS_METHOD GetBaseURI(nsIURI * *aBaseURI); \
  NS_METHOD SetBaseURI(nsIURI *aBaseURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINPUTSTREAMCHANNEL(_to) \
  NS_IMETHOD SetURI(nsIURI *aURI) override { return _to SetURI(aURI); } \
  NS_IMETHOD GetContentStream(nsIInputStream * *aContentStream) override { return _to GetContentStream(aContentStream); } \
  NS_IMETHOD SetContentStream(nsIInputStream *aContentStream) override { return _to SetContentStream(aContentStream); } \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override { return _to GetSrcdocData(aSrcdocData); } \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override { return _to SetSrcdocData(aSrcdocData); } \
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) override { return _to GetIsSrcdocChannel(aIsSrcdocChannel); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return _to GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return _to SetBaseURI(aBaseURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINPUTSTREAMCHANNEL(_to) \
  NS_IMETHOD SetURI(nsIURI *aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetURI(aURI); } \
  NS_IMETHOD GetContentStream(nsIInputStream * *aContentStream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentStream(aContentStream); } \
  NS_IMETHOD SetContentStream(nsIInputStream *aContentStream) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentStream(aContentStream); } \
  NS_IMETHOD GetSrcdocData(nsAString & aSrcdocData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSrcdocData(aSrcdocData); } \
  NS_IMETHOD SetSrcdocData(const nsAString & aSrcdocData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSrcdocData(aSrcdocData); } \
  NS_IMETHOD GetIsSrcdocChannel(bool *aIsSrcdocChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSrcdocChannel(aIsSrcdocChannel); } \
  NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseURI(aBaseURI); } \
  NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBaseURI(aBaseURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsInputStreamChannel : public nsIInputStreamChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINPUTSTREAMCHANNEL

  nsInputStreamChannel();

private:
  ~nsInputStreamChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsInputStreamChannel, nsIInputStreamChannel)

nsInputStreamChannel::nsInputStreamChannel()
{
  /* member initializers and constructor code */
}

nsInputStreamChannel::~nsInputStreamChannel()
{
  /* destructor code */
}

/* void setURI (in nsIURI aURI); */
NS_IMETHODIMP nsInputStreamChannel::SetURI(nsIURI *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIInputStream contentStream; */
NS_IMETHODIMP nsInputStreamChannel::GetContentStream(nsIInputStream * *aContentStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsInputStreamChannel::SetContentStream(nsIInputStream *aContentStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString srcdocData; */
NS_IMETHODIMP nsInputStreamChannel::GetSrcdocData(nsAString & aSrcdocData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsInputStreamChannel::SetSrcdocData(const nsAString & aSrcdocData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSrcdocChannel; */
NS_IMETHODIMP nsInputStreamChannel::GetIsSrcdocChannel(bool *aIsSrcdocChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI baseURI; */
NS_IMETHODIMP nsInputStreamChannel::GetBaseURI(nsIURI * *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsInputStreamChannel::SetBaseURI(nsIURI *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIInputStreamChannel_h__ */
