/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebBrowserPersistDocument.idl
 */

#ifndef __gen_nsIWebBrowserPersistDocument_h__
#define __gen_nsIWebBrowserPersistDocument_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDocument; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIOutputStream; /* forward declaration */

class nsITabParent; /* forward declaration */

class nsIWebBrowserPersistResourceVisitor; /* forward declaration */

class nsIWebBrowserPersistWriteCompletion; /* forward declaration */


/* starting interface:    nsIWebBrowserPersistURIMap */
#define NS_IWEBBROWSERPERSISTURIMAP_IID_STR "d52e8b93-2771-45e8-a5b0-6e12b667046b"

#define NS_IWEBBROWSERPERSISTURIMAP_IID \
  {0xd52e8b93, 0x2771, 0x45e8, \
    { 0xa5, 0xb0, 0x6e, 0x12, 0xb6, 0x67, 0x04, 0x6b }}

class NS_NO_VTABLE nsIWebBrowserPersistURIMap : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPERSISTURIMAP_IID)

  /* readonly attribute unsigned long numMappedURIs; */
  NS_IMETHOD GetNumMappedURIs(uint32_t *aNumMappedURIs) = 0;

  /* void getURIMapping (in unsigned long aIndex, out AUTF8String aMapFrom, out AUTF8String aMapTo); */
  NS_IMETHOD GetURIMapping(uint32_t aIndex, nsACString & aMapFrom, nsACString & aMapTo) = 0;

  /* readonly attribute AUTF8String targetBaseURI; */
  NS_IMETHOD GetTargetBaseURI(nsACString & aTargetBaseURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPersistURIMap, NS_IWEBBROWSERPERSISTURIMAP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPERSISTURIMAP \
  NS_IMETHOD GetNumMappedURIs(uint32_t *aNumMappedURIs) override; \
  NS_IMETHOD GetURIMapping(uint32_t aIndex, nsACString & aMapFrom, nsACString & aMapTo) override; \
  NS_IMETHOD GetTargetBaseURI(nsACString & aTargetBaseURI) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERPERSISTURIMAP \
  NS_METHOD GetNumMappedURIs(uint32_t *aNumMappedURIs); \
  NS_METHOD GetURIMapping(uint32_t aIndex, nsACString & aMapFrom, nsACString & aMapTo); \
  NS_METHOD GetTargetBaseURI(nsACString & aTargetBaseURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPERSISTURIMAP(_to) \
  NS_IMETHOD GetNumMappedURIs(uint32_t *aNumMappedURIs) override { return _to GetNumMappedURIs(aNumMappedURIs); } \
  NS_IMETHOD GetURIMapping(uint32_t aIndex, nsACString & aMapFrom, nsACString & aMapTo) override { return _to GetURIMapping(aIndex, aMapFrom, aMapTo); } \
  NS_IMETHOD GetTargetBaseURI(nsACString & aTargetBaseURI) override { return _to GetTargetBaseURI(aTargetBaseURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPERSISTURIMAP(_to) \
  NS_IMETHOD GetNumMappedURIs(uint32_t *aNumMappedURIs) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumMappedURIs(aNumMappedURIs); } \
  NS_IMETHOD GetURIMapping(uint32_t aIndex, nsACString & aMapFrom, nsACString & aMapTo) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURIMapping(aIndex, aMapFrom, aMapTo); } \
  NS_IMETHOD GetTargetBaseURI(nsACString & aTargetBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetBaseURI(aTargetBaseURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPersistURIMap : public nsIWebBrowserPersistURIMap
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPERSISTURIMAP

  nsWebBrowserPersistURIMap();

private:
  ~nsWebBrowserPersistURIMap();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserPersistURIMap, nsIWebBrowserPersistURIMap)

nsWebBrowserPersistURIMap::nsWebBrowserPersistURIMap()
{
  /* member initializers and constructor code */
}

nsWebBrowserPersistURIMap::~nsWebBrowserPersistURIMap()
{
  /* destructor code */
}

/* readonly attribute unsigned long numMappedURIs; */
NS_IMETHODIMP nsWebBrowserPersistURIMap::GetNumMappedURIs(uint32_t *aNumMappedURIs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getURIMapping (in unsigned long aIndex, out AUTF8String aMapFrom, out AUTF8String aMapTo); */
NS_IMETHODIMP nsWebBrowserPersistURIMap::GetURIMapping(uint32_t aIndex, nsACString & aMapFrom, nsACString & aMapTo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String targetBaseURI; */
NS_IMETHODIMP nsWebBrowserPersistURIMap::GetTargetBaseURI(nsACString & aTargetBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebBrowserPersistDocument */
#define NS_IWEBBROWSERPERSISTDOCUMENT_IID_STR "74aa4918-5d15-46b6-9ccf-74f9696d721d"

#define NS_IWEBBROWSERPERSISTDOCUMENT_IID \
  {0x74aa4918, 0x5d15, 0x46b6, \
    { 0x9c, 0xcf, 0x74, 0xf9, 0x69, 0x6d, 0x72, 0x1d }}

class NS_NO_VTABLE nsIWebBrowserPersistDocument : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPERSISTDOCUMENT_IID)

  /* readonly attribute boolean isPrivate; */
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) = 0;

  /* readonly attribute AUTF8String documentURI; */
  NS_IMETHOD GetDocumentURI(nsACString & aDocumentURI) = 0;

  /* readonly attribute AUTF8String baseURI; */
  NS_IMETHOD GetBaseURI(nsACString & aBaseURI) = 0;

  /* readonly attribute ACString contentType; */
  NS_IMETHOD GetContentType(nsACString & aContentType) = 0;

  /* readonly attribute ACString characterSet; */
  NS_IMETHOD GetCharacterSet(nsACString & aCharacterSet) = 0;

  /* readonly attribute AString title; */
  NS_IMETHOD GetTitle(nsAString & aTitle) = 0;

  /* readonly attribute AString referrer; */
  NS_IMETHOD GetReferrer(nsAString & aReferrer) = 0;

  /* readonly attribute AString contentDisposition; */
  NS_IMETHOD GetContentDisposition(nsAString & aContentDisposition) = 0;

  /* readonly attribute nsIInputStream postData; */
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) = 0;

  /* readonly attribute unsigned long cacheKey; */
  NS_IMETHOD GetCacheKey(uint32_t *aCacheKey) = 0;

  /* attribute unsigned long persistFlags; */
  NS_IMETHOD GetPersistFlags(uint32_t *aPersistFlags) = 0;
  NS_IMETHOD SetPersistFlags(uint32_t aPersistFlags) = 0;

  /* void readResources (in nsIWebBrowserPersistResourceVisitor aVisitor); */
  NS_IMETHOD ReadResources(nsIWebBrowserPersistResourceVisitor *aVisitor) = 0;

  /* void writeContent (in nsIOutputStream aStream, in nsIWebBrowserPersistURIMap aURIMap, in ACString aRequestedContentType, in unsigned long aEncoderFlags, in unsigned long aWrapColumn, in nsIWebBrowserPersistWriteCompletion aCompletion); */
  NS_IMETHOD WriteContent(nsIOutputStream *aStream, nsIWebBrowserPersistURIMap *aURIMap, const nsACString & aRequestedContentType, uint32_t aEncoderFlags, uint32_t aWrapColumn, nsIWebBrowserPersistWriteCompletion *aCompletion) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPersistDocument, NS_IWEBBROWSERPERSISTDOCUMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPERSISTDOCUMENT \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override; \
  NS_IMETHOD GetDocumentURI(nsACString & aDocumentURI) override; \
  NS_IMETHOD GetBaseURI(nsACString & aBaseURI) override; \
  NS_IMETHOD GetContentType(nsACString & aContentType) override; \
  NS_IMETHOD GetCharacterSet(nsACString & aCharacterSet) override; \
  NS_IMETHOD GetTitle(nsAString & aTitle) override; \
  NS_IMETHOD GetReferrer(nsAString & aReferrer) override; \
  NS_IMETHOD GetContentDisposition(nsAString & aContentDisposition) override; \
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) override; \
  NS_IMETHOD GetCacheKey(uint32_t *aCacheKey) override; \
  NS_IMETHOD GetPersistFlags(uint32_t *aPersistFlags) override; \
  NS_IMETHOD SetPersistFlags(uint32_t aPersistFlags) override; \
  NS_IMETHOD ReadResources(nsIWebBrowserPersistResourceVisitor *aVisitor) override; \
  NS_IMETHOD WriteContent(nsIOutputStream *aStream, nsIWebBrowserPersistURIMap *aURIMap, const nsACString & aRequestedContentType, uint32_t aEncoderFlags, uint32_t aWrapColumn, nsIWebBrowserPersistWriteCompletion *aCompletion) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERPERSISTDOCUMENT \
  NS_METHOD GetIsPrivate(bool *aIsPrivate); \
  NS_METHOD GetDocumentURI(nsACString & aDocumentURI); \
  NS_METHOD GetBaseURI(nsACString & aBaseURI); \
  NS_METHOD GetContentType(nsACString & aContentType); \
  NS_METHOD GetCharacterSet(nsACString & aCharacterSet); \
  NS_METHOD GetTitle(nsAString & aTitle); \
  NS_METHOD GetReferrer(nsAString & aReferrer); \
  NS_METHOD GetContentDisposition(nsAString & aContentDisposition); \
  NS_METHOD GetPostData(nsIInputStream * *aPostData); \
  NS_METHOD GetCacheKey(uint32_t *aCacheKey); \
  NS_METHOD GetPersistFlags(uint32_t *aPersistFlags); \
  NS_METHOD SetPersistFlags(uint32_t aPersistFlags); \
  NS_METHOD ReadResources(nsIWebBrowserPersistResourceVisitor *aVisitor); \
  NS_METHOD WriteContent(nsIOutputStream *aStream, nsIWebBrowserPersistURIMap *aURIMap, const nsACString & aRequestedContentType, uint32_t aEncoderFlags, uint32_t aWrapColumn, nsIWebBrowserPersistWriteCompletion *aCompletion); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPERSISTDOCUMENT(_to) \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override { return _to GetIsPrivate(aIsPrivate); } \
  NS_IMETHOD GetDocumentURI(nsACString & aDocumentURI) override { return _to GetDocumentURI(aDocumentURI); } \
  NS_IMETHOD GetBaseURI(nsACString & aBaseURI) override { return _to GetBaseURI(aBaseURI); } \
  NS_IMETHOD GetContentType(nsACString & aContentType) override { return _to GetContentType(aContentType); } \
  NS_IMETHOD GetCharacterSet(nsACString & aCharacterSet) override { return _to GetCharacterSet(aCharacterSet); } \
  NS_IMETHOD GetTitle(nsAString & aTitle) override { return _to GetTitle(aTitle); } \
  NS_IMETHOD GetReferrer(nsAString & aReferrer) override { return _to GetReferrer(aReferrer); } \
  NS_IMETHOD GetContentDisposition(nsAString & aContentDisposition) override { return _to GetContentDisposition(aContentDisposition); } \
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) override { return _to GetPostData(aPostData); } \
  NS_IMETHOD GetCacheKey(uint32_t *aCacheKey) override { return _to GetCacheKey(aCacheKey); } \
  NS_IMETHOD GetPersistFlags(uint32_t *aPersistFlags) override { return _to GetPersistFlags(aPersistFlags); } \
  NS_IMETHOD SetPersistFlags(uint32_t aPersistFlags) override { return _to SetPersistFlags(aPersistFlags); } \
  NS_IMETHOD ReadResources(nsIWebBrowserPersistResourceVisitor *aVisitor) override { return _to ReadResources(aVisitor); } \
  NS_IMETHOD WriteContent(nsIOutputStream *aStream, nsIWebBrowserPersistURIMap *aURIMap, const nsACString & aRequestedContentType, uint32_t aEncoderFlags, uint32_t aWrapColumn, nsIWebBrowserPersistWriteCompletion *aCompletion) override { return _to WriteContent(aStream, aURIMap, aRequestedContentType, aEncoderFlags, aWrapColumn, aCompletion); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPERSISTDOCUMENT(_to) \
  NS_IMETHOD GetIsPrivate(bool *aIsPrivate) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsPrivate(aIsPrivate); } \
  NS_IMETHOD GetDocumentURI(nsACString & aDocumentURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDocumentURI(aDocumentURI); } \
  NS_IMETHOD GetBaseURI(nsACString & aBaseURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseURI(aBaseURI); } \
  NS_IMETHOD GetContentType(nsACString & aContentType) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentType(aContentType); } \
  NS_IMETHOD GetCharacterSet(nsACString & aCharacterSet) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharacterSet(aCharacterSet); } \
  NS_IMETHOD GetTitle(nsAString & aTitle) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_IMETHOD GetReferrer(nsAString & aReferrer) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrer(aReferrer); } \
  NS_IMETHOD GetContentDisposition(nsAString & aContentDisposition) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentDisposition(aContentDisposition); } \
  NS_IMETHOD GetPostData(nsIInputStream * *aPostData) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPostData(aPostData); } \
  NS_IMETHOD GetCacheKey(uint32_t *aCacheKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheKey(aCacheKey); } \
  NS_IMETHOD GetPersistFlags(uint32_t *aPersistFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersistFlags(aPersistFlags); } \
  NS_IMETHOD SetPersistFlags(uint32_t aPersistFlags) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPersistFlags(aPersistFlags); } \
  NS_IMETHOD ReadResources(nsIWebBrowserPersistResourceVisitor *aVisitor) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadResources(aVisitor); } \
  NS_IMETHOD WriteContent(nsIOutputStream *aStream, nsIWebBrowserPersistURIMap *aURIMap, const nsACString & aRequestedContentType, uint32_t aEncoderFlags, uint32_t aWrapColumn, nsIWebBrowserPersistWriteCompletion *aCompletion) override { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteContent(aStream, aURIMap, aRequestedContentType, aEncoderFlags, aWrapColumn, aCompletion); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPersistDocument : public nsIWebBrowserPersistDocument
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPERSISTDOCUMENT

  nsWebBrowserPersistDocument();

private:
  ~nsWebBrowserPersistDocument();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserPersistDocument, nsIWebBrowserPersistDocument)

nsWebBrowserPersistDocument::nsWebBrowserPersistDocument()
{
  /* member initializers and constructor code */
}

nsWebBrowserPersistDocument::~nsWebBrowserPersistDocument()
{
  /* destructor code */
}

/* readonly attribute boolean isPrivate; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetIsPrivate(bool *aIsPrivate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String documentURI; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetDocumentURI(nsACString & aDocumentURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String baseURI; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetBaseURI(nsACString & aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString contentType; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetContentType(nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString characterSet; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetCharacterSet(nsACString & aCharacterSet)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString title; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetTitle(nsAString & aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString referrer; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetReferrer(nsAString & aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString contentDisposition; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetContentDisposition(nsAString & aContentDisposition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIInputStream postData; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetPostData(nsIInputStream * *aPostData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long cacheKey; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetCacheKey(uint32_t *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long persistFlags; */
NS_IMETHODIMP nsWebBrowserPersistDocument::GetPersistFlags(uint32_t *aPersistFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserPersistDocument::SetPersistFlags(uint32_t aPersistFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readResources (in nsIWebBrowserPersistResourceVisitor aVisitor); */
NS_IMETHODIMP nsWebBrowserPersistDocument::ReadResources(nsIWebBrowserPersistResourceVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void writeContent (in nsIOutputStream aStream, in nsIWebBrowserPersistURIMap aURIMap, in ACString aRequestedContentType, in unsigned long aEncoderFlags, in unsigned long aWrapColumn, in nsIWebBrowserPersistWriteCompletion aCompletion); */
NS_IMETHODIMP nsWebBrowserPersistDocument::WriteContent(nsIOutputStream *aStream, nsIWebBrowserPersistURIMap *aURIMap, const nsACString & aRequestedContentType, uint32_t aEncoderFlags, uint32_t aWrapColumn, nsIWebBrowserPersistWriteCompletion *aCompletion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebBrowserPersistResourceVisitor */
#define NS_IWEBBROWSERPERSISTRESOURCEVISITOR_IID_STR "8ce37706-b7d3-481a-be68-54f174fc0d0a"

#define NS_IWEBBROWSERPERSISTRESOURCEVISITOR_IID \
  {0x8ce37706, 0xb7d3, 0x481a, \
    { 0xbe, 0x68, 0x54, 0xf1, 0x74, 0xfc, 0x0d, 0x0a }}

class NS_NO_VTABLE nsIWebBrowserPersistResourceVisitor : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPERSISTRESOURCEVISITOR_IID)

  /* void visitResource (in nsIWebBrowserPersistDocument aDocument, in AUTF8String aURI); */
  NS_IMETHOD VisitResource(nsIWebBrowserPersistDocument *aDocument, const nsACString & aURI) = 0;

  /* void visitDocument (in nsIWebBrowserPersistDocument aDocument, in nsIWebBrowserPersistDocument aSubDocument); */
  NS_IMETHOD VisitDocument(nsIWebBrowserPersistDocument *aDocument, nsIWebBrowserPersistDocument *aSubDocument) = 0;

  /* void endVisit (in nsIWebBrowserPersistDocument aDocument, in nsresult aStatus); */
  NS_IMETHOD EndVisit(nsIWebBrowserPersistDocument *aDocument, nsresult aStatus) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPersistResourceVisitor, NS_IWEBBROWSERPERSISTRESOURCEVISITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPERSISTRESOURCEVISITOR \
  NS_IMETHOD VisitResource(nsIWebBrowserPersistDocument *aDocument, const nsACString & aURI) override; \
  NS_IMETHOD VisitDocument(nsIWebBrowserPersistDocument *aDocument, nsIWebBrowserPersistDocument *aSubDocument) override; \
  NS_IMETHOD EndVisit(nsIWebBrowserPersistDocument *aDocument, nsresult aStatus) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERPERSISTRESOURCEVISITOR \
  NS_METHOD VisitResource(nsIWebBrowserPersistDocument *aDocument, const nsACString & aURI); \
  NS_METHOD VisitDocument(nsIWebBrowserPersistDocument *aDocument, nsIWebBrowserPersistDocument *aSubDocument); \
  NS_METHOD EndVisit(nsIWebBrowserPersistDocument *aDocument, nsresult aStatus); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPERSISTRESOURCEVISITOR(_to) \
  NS_IMETHOD VisitResource(nsIWebBrowserPersistDocument *aDocument, const nsACString & aURI) override { return _to VisitResource(aDocument, aURI); } \
  NS_IMETHOD VisitDocument(nsIWebBrowserPersistDocument *aDocument, nsIWebBrowserPersistDocument *aSubDocument) override { return _to VisitDocument(aDocument, aSubDocument); } \
  NS_IMETHOD EndVisit(nsIWebBrowserPersistDocument *aDocument, nsresult aStatus) override { return _to EndVisit(aDocument, aStatus); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPERSISTRESOURCEVISITOR(_to) \
  NS_IMETHOD VisitResource(nsIWebBrowserPersistDocument *aDocument, const nsACString & aURI) override { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitResource(aDocument, aURI); } \
  NS_IMETHOD VisitDocument(nsIWebBrowserPersistDocument *aDocument, nsIWebBrowserPersistDocument *aSubDocument) override { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitDocument(aDocument, aSubDocument); } \
  NS_IMETHOD EndVisit(nsIWebBrowserPersistDocument *aDocument, nsresult aStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->EndVisit(aDocument, aStatus); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPersistResourceVisitor : public nsIWebBrowserPersistResourceVisitor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPERSISTRESOURCEVISITOR

  nsWebBrowserPersistResourceVisitor();

private:
  ~nsWebBrowserPersistResourceVisitor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserPersistResourceVisitor, nsIWebBrowserPersistResourceVisitor)

nsWebBrowserPersistResourceVisitor::nsWebBrowserPersistResourceVisitor()
{
  /* member initializers and constructor code */
}

nsWebBrowserPersistResourceVisitor::~nsWebBrowserPersistResourceVisitor()
{
  /* destructor code */
}

/* void visitResource (in nsIWebBrowserPersistDocument aDocument, in AUTF8String aURI); */
NS_IMETHODIMP nsWebBrowserPersistResourceVisitor::VisitResource(nsIWebBrowserPersistDocument *aDocument, const nsACString & aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void visitDocument (in nsIWebBrowserPersistDocument aDocument, in nsIWebBrowserPersistDocument aSubDocument); */
NS_IMETHODIMP nsWebBrowserPersistResourceVisitor::VisitDocument(nsIWebBrowserPersistDocument *aDocument, nsIWebBrowserPersistDocument *aSubDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void endVisit (in nsIWebBrowserPersistDocument aDocument, in nsresult aStatus); */
NS_IMETHODIMP nsWebBrowserPersistResourceVisitor::EndVisit(nsIWebBrowserPersistDocument *aDocument, nsresult aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebBrowserPersistWriteCompletion */
#define NS_IWEBBROWSERPERSISTWRITECOMPLETION_IID_STR "a07e6892-38ae-4207-8340-7fa6ec446ed6"

#define NS_IWEBBROWSERPERSISTWRITECOMPLETION_IID \
  {0xa07e6892, 0x38ae, 0x4207, \
    { 0x83, 0x40, 0x7f, 0xa6, 0xec, 0x44, 0x6e, 0xd6 }}

class NS_NO_VTABLE nsIWebBrowserPersistWriteCompletion : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPERSISTWRITECOMPLETION_IID)

  /* void onFinish (in nsIWebBrowserPersistDocument aDocument, in nsIOutputStream aStream, in ACString aContentType, in nsresult aStatus); */
  NS_IMETHOD OnFinish(nsIWebBrowserPersistDocument *aDocument, nsIOutputStream *aStream, const nsACString & aContentType, nsresult aStatus) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPersistWriteCompletion, NS_IWEBBROWSERPERSISTWRITECOMPLETION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPERSISTWRITECOMPLETION \
  NS_IMETHOD OnFinish(nsIWebBrowserPersistDocument *aDocument, nsIOutputStream *aStream, const nsACString & aContentType, nsresult aStatus) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERPERSISTWRITECOMPLETION \
  NS_METHOD OnFinish(nsIWebBrowserPersistDocument *aDocument, nsIOutputStream *aStream, const nsACString & aContentType, nsresult aStatus); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPERSISTWRITECOMPLETION(_to) \
  NS_IMETHOD OnFinish(nsIWebBrowserPersistDocument *aDocument, nsIOutputStream *aStream, const nsACString & aContentType, nsresult aStatus) override { return _to OnFinish(aDocument, aStream, aContentType, aStatus); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPERSISTWRITECOMPLETION(_to) \
  NS_IMETHOD OnFinish(nsIWebBrowserPersistDocument *aDocument, nsIOutputStream *aStream, const nsACString & aContentType, nsresult aStatus) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnFinish(aDocument, aStream, aContentType, aStatus); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPersistWriteCompletion : public nsIWebBrowserPersistWriteCompletion
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPERSISTWRITECOMPLETION

  nsWebBrowserPersistWriteCompletion();

private:
  ~nsWebBrowserPersistWriteCompletion();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserPersistWriteCompletion, nsIWebBrowserPersistWriteCompletion)

nsWebBrowserPersistWriteCompletion::nsWebBrowserPersistWriteCompletion()
{
  /* member initializers and constructor code */
}

nsWebBrowserPersistWriteCompletion::~nsWebBrowserPersistWriteCompletion()
{
  /* destructor code */
}

/* void onFinish (in nsIWebBrowserPersistDocument aDocument, in nsIOutputStream aStream, in ACString aContentType, in nsresult aStatus); */
NS_IMETHODIMP nsWebBrowserPersistWriteCompletion::OnFinish(nsIWebBrowserPersistDocument *aDocument, nsIOutputStream *aStream, const nsACString & aContentType, nsresult aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebBrowserPersistDocumentReceiver */
#define NS_IWEBBROWSERPERSISTDOCUMENTRECEIVER_IID_STR "321e3174-594f-4036-b7be-791b821bd376"

#define NS_IWEBBROWSERPERSISTDOCUMENTRECEIVER_IID \
  {0x321e3174, 0x594f, 0x4036, \
    { 0xb7, 0xbe, 0x79, 0x1b, 0x82, 0x1b, 0xd3, 0x76 }}

class NS_NO_VTABLE nsIWebBrowserPersistDocumentReceiver : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPERSISTDOCUMENTRECEIVER_IID)

  /* void onDocumentReady (in nsIWebBrowserPersistDocument aDocument); */
  NS_IMETHOD OnDocumentReady(nsIWebBrowserPersistDocument *aDocument) = 0;

  /* void onError (in nsresult aFailure); */
  NS_IMETHOD OnError(nsresult aFailure) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPersistDocumentReceiver, NS_IWEBBROWSERPERSISTDOCUMENTRECEIVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPERSISTDOCUMENTRECEIVER \
  NS_IMETHOD OnDocumentReady(nsIWebBrowserPersistDocument *aDocument) override; \
  NS_IMETHOD OnError(nsresult aFailure) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBBROWSERPERSISTDOCUMENTRECEIVER \
  NS_METHOD OnDocumentReady(nsIWebBrowserPersistDocument *aDocument); \
  NS_METHOD OnError(nsresult aFailure); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPERSISTDOCUMENTRECEIVER(_to) \
  NS_IMETHOD OnDocumentReady(nsIWebBrowserPersistDocument *aDocument) override { return _to OnDocumentReady(aDocument); } \
  NS_IMETHOD OnError(nsresult aFailure) override { return _to OnError(aFailure); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPERSISTDOCUMENTRECEIVER(_to) \
  NS_IMETHOD OnDocumentReady(nsIWebBrowserPersistDocument *aDocument) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDocumentReady(aDocument); } \
  NS_IMETHOD OnError(nsresult aFailure) override { return !_to ? NS_ERROR_NULL_POINTER : _to->OnError(aFailure); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPersistDocumentReceiver : public nsIWebBrowserPersistDocumentReceiver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPERSISTDOCUMENTRECEIVER

  nsWebBrowserPersistDocumentReceiver();

private:
  ~nsWebBrowserPersistDocumentReceiver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebBrowserPersistDocumentReceiver, nsIWebBrowserPersistDocumentReceiver)

nsWebBrowserPersistDocumentReceiver::nsWebBrowserPersistDocumentReceiver()
{
  /* member initializers and constructor code */
}

nsWebBrowserPersistDocumentReceiver::~nsWebBrowserPersistDocumentReceiver()
{
  /* destructor code */
}

/* void onDocumentReady (in nsIWebBrowserPersistDocument aDocument); */
NS_IMETHODIMP nsWebBrowserPersistDocumentReceiver::OnDocumentReady(nsIWebBrowserPersistDocument *aDocument)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onError (in nsresult aFailure); */
NS_IMETHODIMP nsWebBrowserPersistDocumentReceiver::OnError(nsresult aFailure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserPersistDocument_h__ */
