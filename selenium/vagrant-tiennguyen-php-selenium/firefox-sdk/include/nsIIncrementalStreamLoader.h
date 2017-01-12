/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIIncrementalStreamLoader.idl
 */

#ifndef __gen_nsIIncrementalStreamLoader_h__
#define __gen_nsIIncrementalStreamLoader_h__


#ifndef __gen_nsIStreamListener_h__
#include "nsIStreamListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIRequest; /* forward declaration */

class nsIIncrementalStreamLoader; /* forward declaration */


/* starting interface:    nsIIncrementalStreamLoaderObserver */
#define NS_IINCREMENTALSTREAMLOADEROBSERVER_IID_STR "07c3d2cc-5454-4618-9f4f-cd93de9504a4"

#define NS_IINCREMENTALSTREAMLOADEROBSERVER_IID \
  {0x07c3d2cc, 0x5454, 0x4618, \
    { 0x9f, 0x4f, 0xcd, 0x93, 0xde, 0x95, 0x04, 0xa4 }}

class NS_NO_VTABLE nsIIncrementalStreamLoaderObserver : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINCREMENTALSTREAMLOADEROBSERVER_IID)

  /* void onIncrementalData (in nsIIncrementalStreamLoader loader, in nsISupports ctxt, in unsigned long dataLength, [array, size_is (dataLength), const] in octet data, inout unsigned long consumedLength); */
  NS_IMETHOD OnIncrementalData(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, uint32_t dataLength, const uint8_t *data, uint32_t *consumedLength) = 0;

  /* void onStreamComplete (in nsIIncrementalStreamLoader loader, in nsISupports ctxt, in nsresult status, in unsigned long resultLength, [array, size_is (resultLength), const] in octet result); */
  NS_IMETHOD OnStreamComplete(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, nsresult status, uint32_t resultLength, const uint8_t *result) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIncrementalStreamLoaderObserver, NS_IINCREMENTALSTREAMLOADEROBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINCREMENTALSTREAMLOADEROBSERVER \
  NS_IMETHOD OnIncrementalData(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, uint32_t dataLength, const uint8_t *data, uint32_t *consumedLength) override; \
  NS_IMETHOD OnStreamComplete(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, nsresult status, uint32_t resultLength, const uint8_t *result) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIINCREMENTALSTREAMLOADEROBSERVER \
  NS_METHOD OnIncrementalData(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, uint32_t dataLength, const uint8_t *data, uint32_t *consumedLength); \
  NS_METHOD OnStreamComplete(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, nsresult status, uint32_t resultLength, const uint8_t *result); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINCREMENTALSTREAMLOADEROBSERVER(_to) \
  NS_IMETHOD OnIncrementalData(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, uint32_t dataLength, const uint8_t *data, uint32_t *consumedLength) override { return _to OnIncrementalData(loader, ctxt, dataLength, data, consumedLength); } \
  NS_IMETHOD OnStreamComplete(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, nsresult status, uint32_t resultLength, const uint8_t *result) override { return _to OnStreamComplete(loader, ctxt, status, resultLength, result); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINCREMENTALSTREAMLOADEROBSERVER(_to) \
  NS_IMETHOD OnIncrementalData(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, uint32_t dataLength, const uint8_t *data, uint32_t *consumedLength) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnIncrementalData(loader, ctxt, dataLength, data, consumedLength); } \
  NS_IMETHOD OnStreamComplete(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, nsresult status, uint32_t resultLength, const uint8_t *result) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnStreamComplete(loader, ctxt, status, resultLength, result); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIncrementalStreamLoaderObserver : public nsIIncrementalStreamLoaderObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINCREMENTALSTREAMLOADEROBSERVER

  nsIncrementalStreamLoaderObserver();

private:
  ~nsIncrementalStreamLoaderObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIncrementalStreamLoaderObserver, nsIIncrementalStreamLoaderObserver)

nsIncrementalStreamLoaderObserver::nsIncrementalStreamLoaderObserver()
{
  /* member initializers and constructor code */
}

nsIncrementalStreamLoaderObserver::~nsIncrementalStreamLoaderObserver()
{
  /* destructor code */
}

/* void onIncrementalData (in nsIIncrementalStreamLoader loader, in nsISupports ctxt, in unsigned long dataLength, [array, size_is (dataLength), const] in octet data, inout unsigned long consumedLength); */
NS_IMETHODIMP nsIncrementalStreamLoaderObserver::OnIncrementalData(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, uint32_t dataLength, const uint8_t *data, uint32_t *consumedLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onStreamComplete (in nsIIncrementalStreamLoader loader, in nsISupports ctxt, in nsresult status, in unsigned long resultLength, [array, size_is (resultLength), const] in octet result); */
NS_IMETHODIMP nsIncrementalStreamLoaderObserver::OnStreamComplete(nsIIncrementalStreamLoader *loader, nsISupports *ctxt, nsresult status, uint32_t resultLength, const uint8_t *result)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIIncrementalStreamLoader */
#define NS_IINCREMENTALSTREAMLOADER_IID_STR "a023b060-ba23-431a-b449-2dd63e220554"

#define NS_IINCREMENTALSTREAMLOADER_IID \
  {0xa023b060, 0xba23, 0x431a, \
    { 0xb4, 0x49, 0x2d, 0xd6, 0x3e, 0x22, 0x05, 0x54 }}

class NS_NO_VTABLE nsIIncrementalStreamLoader : public nsIStreamListener {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINCREMENTALSTREAMLOADER_IID)

  /* void init (in nsIIncrementalStreamLoaderObserver aObserver); */
  NS_IMETHOD Init(nsIIncrementalStreamLoaderObserver *aObserver) = 0;

  /* readonly attribute unsigned long numBytesRead; */
  NS_IMETHOD GetNumBytesRead(uint32_t *aNumBytesRead) = 0;

  /* readonly attribute nsIRequest request; */
  NS_IMETHOD GetRequest(nsIRequest * *aRequest) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIIncrementalStreamLoader, NS_IINCREMENTALSTREAMLOADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINCREMENTALSTREAMLOADER \
  NS_IMETHOD Init(nsIIncrementalStreamLoaderObserver *aObserver) override; \
  NS_IMETHOD GetNumBytesRead(uint32_t *aNumBytesRead) override; \
  NS_IMETHOD GetRequest(nsIRequest * *aRequest) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIINCREMENTALSTREAMLOADER \
  NS_METHOD Init(nsIIncrementalStreamLoaderObserver *aObserver); \
  NS_METHOD GetNumBytesRead(uint32_t *aNumBytesRead); \
  NS_METHOD GetRequest(nsIRequest * *aRequest); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINCREMENTALSTREAMLOADER(_to) \
  NS_IMETHOD Init(nsIIncrementalStreamLoaderObserver *aObserver) override { return _to Init(aObserver); } \
  NS_IMETHOD GetNumBytesRead(uint32_t *aNumBytesRead) override { return _to GetNumBytesRead(aNumBytesRead); } \
  NS_IMETHOD GetRequest(nsIRequest * *aRequest) override { return _to GetRequest(aRequest); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINCREMENTALSTREAMLOADER(_to) \
  NS_IMETHOD Init(nsIIncrementalStreamLoaderObserver *aObserver) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aObserver); } \
  NS_IMETHOD GetNumBytesRead(uint32_t *aNumBytesRead) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumBytesRead(aNumBytesRead); } \
  NS_IMETHOD GetRequest(nsIRequest * *aRequest) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequest(aRequest); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsIncrementalStreamLoader : public nsIIncrementalStreamLoader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINCREMENTALSTREAMLOADER

  nsIncrementalStreamLoader();

private:
  ~nsIncrementalStreamLoader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsIncrementalStreamLoader, nsIIncrementalStreamLoader)

nsIncrementalStreamLoader::nsIncrementalStreamLoader()
{
  /* member initializers and constructor code */
}

nsIncrementalStreamLoader::~nsIncrementalStreamLoader()
{
  /* destructor code */
}

/* void init (in nsIIncrementalStreamLoaderObserver aObserver); */
NS_IMETHODIMP nsIncrementalStreamLoader::Init(nsIIncrementalStreamLoaderObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long numBytesRead; */
NS_IMETHODIMP nsIncrementalStreamLoader::GetNumBytesRead(uint32_t *aNumBytesRead)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIRequest request; */
NS_IMETHODIMP nsIncrementalStreamLoader::GetRequest(nsIRequest * *aRequest)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIIncrementalStreamLoader_h__ */
