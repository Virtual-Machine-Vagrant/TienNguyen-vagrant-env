/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIMultiPartChannel.idl
 */

#ifndef __gen_nsIMultiPartChannel_h__
#define __gen_nsIMultiPartChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIChannel; /* forward declaration */


/* starting interface:    nsIMultiPartChannel */
#define NS_IMULTIPARTCHANNEL_IID_STR "4fefb490-5567-11e5-a837-0800200c9a66"

#define NS_IMULTIPARTCHANNEL_IID \
  {0x4fefb490, 0x5567, 0x11e5, \
    { 0xa8, 0x37, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE nsIMultiPartChannel : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMULTIPARTCHANNEL_IID)

  /* readonly attribute nsIChannel baseChannel; */
  NS_IMETHOD GetBaseChannel(nsIChannel * *aBaseChannel) = 0;

  /* readonly attribute uint32_t partID; */
  NS_IMETHOD GetPartID(uint32_t *aPartID) = 0;

  /* readonly attribute boolean isLastPart; */
  NS_IMETHOD GetIsLastPart(bool *aIsLastPart) = 0;

  /* readonly attribute ACString preamble; */
  NS_IMETHOD GetPreamble(nsACString & aPreamble) = 0;

  /* readonly attribute ACString originalResponseHeader; */
  NS_IMETHOD GetOriginalResponseHeader(nsACString & aOriginalResponseHeader) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMultiPartChannel, NS_IMULTIPARTCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMULTIPARTCHANNEL \
  NS_IMETHOD GetBaseChannel(nsIChannel * *aBaseChannel) override; \
  NS_IMETHOD GetPartID(uint32_t *aPartID) override; \
  NS_IMETHOD GetIsLastPart(bool *aIsLastPart) override; \
  NS_IMETHOD GetPreamble(nsACString & aPreamble) override; \
  NS_IMETHOD GetOriginalResponseHeader(nsACString & aOriginalResponseHeader) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIMULTIPARTCHANNEL \
  NS_METHOD GetBaseChannel(nsIChannel * *aBaseChannel); \
  NS_METHOD GetPartID(uint32_t *aPartID); \
  NS_METHOD GetIsLastPart(bool *aIsLastPart); \
  NS_METHOD GetPreamble(nsACString & aPreamble); \
  NS_METHOD GetOriginalResponseHeader(nsACString & aOriginalResponseHeader); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMULTIPARTCHANNEL(_to) \
  NS_IMETHOD GetBaseChannel(nsIChannel * *aBaseChannel) override { return _to GetBaseChannel(aBaseChannel); } \
  NS_IMETHOD GetPartID(uint32_t *aPartID) override { return _to GetPartID(aPartID); } \
  NS_IMETHOD GetIsLastPart(bool *aIsLastPart) override { return _to GetIsLastPart(aIsLastPart); } \
  NS_IMETHOD GetPreamble(nsACString & aPreamble) override { return _to GetPreamble(aPreamble); } \
  NS_IMETHOD GetOriginalResponseHeader(nsACString & aOriginalResponseHeader) override { return _to GetOriginalResponseHeader(aOriginalResponseHeader); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMULTIPARTCHANNEL(_to) \
  NS_IMETHOD GetBaseChannel(nsIChannel * *aBaseChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseChannel(aBaseChannel); } \
  NS_IMETHOD GetPartID(uint32_t *aPartID) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPartID(aPartID); } \
  NS_IMETHOD GetIsLastPart(bool *aIsLastPart) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsLastPart(aIsLastPart); } \
  NS_IMETHOD GetPreamble(nsACString & aPreamble) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreamble(aPreamble); } \
  NS_IMETHOD GetOriginalResponseHeader(nsACString & aOriginalResponseHeader) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalResponseHeader(aOriginalResponseHeader); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMultiPartChannel : public nsIMultiPartChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMULTIPARTCHANNEL

  nsMultiPartChannel();

private:
  ~nsMultiPartChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsMultiPartChannel, nsIMultiPartChannel)

nsMultiPartChannel::nsMultiPartChannel()
{
  /* member initializers and constructor code */
}

nsMultiPartChannel::~nsMultiPartChannel()
{
  /* destructor code */
}

/* readonly attribute nsIChannel baseChannel; */
NS_IMETHODIMP nsMultiPartChannel::GetBaseChannel(nsIChannel * *aBaseChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute uint32_t partID; */
NS_IMETHODIMP nsMultiPartChannel::GetPartID(uint32_t *aPartID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isLastPart; */
NS_IMETHODIMP nsMultiPartChannel::GetIsLastPart(bool *aIsLastPart)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString preamble; */
NS_IMETHODIMP nsMultiPartChannel::GetPreamble(nsACString & aPreamble)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString originalResponseHeader; */
NS_IMETHODIMP nsMultiPartChannel::GetOriginalResponseHeader(nsACString & aOriginalResponseHeader)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMultiPartChannel_h__ */
