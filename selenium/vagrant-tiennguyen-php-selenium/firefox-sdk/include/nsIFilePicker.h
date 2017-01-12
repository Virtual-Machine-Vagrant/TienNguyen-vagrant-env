/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIFilePicker.idl
 */

#ifndef __gen_nsIFilePicker_h__
#define __gen_nsIFilePicker_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */

class nsIURI; /* forward declaration */

class mozIDOMWindowProxy; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIFilePickerShownCallback */
#define NS_IFILEPICKERSHOWNCALLBACK_IID_STR "0d79adad-b244-49a5-9997-2a8cad93fc44"

#define NS_IFILEPICKERSHOWNCALLBACK_IID \
  {0x0d79adad, 0xb244, 0x49a5, \
    { 0x99, 0x97, 0x2a, 0x8c, 0xad, 0x93, 0xfc, 0x44 }}

class NS_NO_VTABLE nsIFilePickerShownCallback : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFILEPICKERSHOWNCALLBACK_IID)

  /* void done (in short aResult); */
  NS_IMETHOD Done(int16_t aResult) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFilePickerShownCallback, NS_IFILEPICKERSHOWNCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFILEPICKERSHOWNCALLBACK \
  NS_IMETHOD Done(int16_t aResult) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFILEPICKERSHOWNCALLBACK \
  NS_METHOD Done(int16_t aResult); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFILEPICKERSHOWNCALLBACK(_to) \
  NS_IMETHOD Done(int16_t aResult) override { return _to Done(aResult); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFILEPICKERSHOWNCALLBACK(_to) \
  NS_IMETHOD Done(int16_t aResult) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Done(aResult); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFilePickerShownCallback : public nsIFilePickerShownCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFILEPICKERSHOWNCALLBACK

  nsFilePickerShownCallback();

private:
  ~nsFilePickerShownCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFilePickerShownCallback, nsIFilePickerShownCallback)

nsFilePickerShownCallback::nsFilePickerShownCallback()
{
  /* member initializers and constructor code */
}

nsFilePickerShownCallback::~nsFilePickerShownCallback()
{
  /* destructor code */
}

/* void done (in short aResult); */
NS_IMETHODIMP nsFilePickerShownCallback::Done(int16_t aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIFilePicker */
#define NS_IFILEPICKER_IID_STR "9285b984-02d3-46b4-9514-7da8c471a747"

#define NS_IFILEPICKER_IID \
  {0x9285b984, 0x02d3, 0x46b4, \
    { 0x95, 0x14, 0x7d, 0xa8, 0xc4, 0x71, 0xa7, 0x47 }}

class NS_NO_VTABLE nsIFilePicker : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IFILEPICKER_IID)

  enum {
    modeOpen = 0,
    modeSave = 1,
    modeGetFolder = 2,
    modeOpenMultiple = 3,
    returnOK = 0,
    returnCancel = 1,
    returnReplace = 2,
    filterAll = 1,
    filterHTML = 2,
    filterText = 4,
    filterImages = 8,
    filterXML = 16,
    filterXUL = 32,
    filterApps = 64,
    filterAllowURLs = 128,
    filterAudio = 256,
    filterVideo = 512
  };

  /* void init (in mozIDOMWindowProxy parent, in AString title, in short mode); */
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsAString & title, int16_t mode) = 0;

  /* void appendFilters (in long filterMask); */
  NS_IMETHOD AppendFilters(int32_t filterMask) = 0;

  /* void appendFilter (in AString title, in AString filter); */
  NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter) = 0;

  /* attribute AString defaultString; */
  NS_IMETHOD GetDefaultString(nsAString & aDefaultString) = 0;
  NS_IMETHOD SetDefaultString(const nsAString & aDefaultString) = 0;

  /* attribute AString defaultExtension; */
  NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension) = 0;
  NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension) = 0;

  /* attribute long filterIndex; */
  NS_IMETHOD GetFilterIndex(int32_t *aFilterIndex) = 0;
  NS_IMETHOD SetFilterIndex(int32_t aFilterIndex) = 0;

  /* attribute nsIFile displayDirectory; */
  NS_IMETHOD GetDisplayDirectory(nsIFile * *aDisplayDirectory) = 0;
  NS_IMETHOD SetDisplayDirectory(nsIFile *aDisplayDirectory) = 0;

  /* readonly attribute nsIFile file; */
  NS_IMETHOD GetFile(nsIFile * *aFile) = 0;

  /* readonly attribute nsIURI fileURL; */
  NS_IMETHOD GetFileURL(nsIURI * *aFileURL) = 0;

  /* readonly attribute nsISimpleEnumerator files; */
  NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles) = 0;

  /* readonly attribute nsISupports domFileOrDirectory; */
  NS_IMETHOD GetDomFileOrDirectory(nsISupports * *aDomFileOrDirectory) = 0;

  /* readonly attribute nsISimpleEnumerator domFileOrDirectoryEnumerator; */
  NS_IMETHOD GetDomFileOrDirectoryEnumerator(nsISimpleEnumerator * *aDomFileOrDirectoryEnumerator) = 0;

  /* attribute boolean addToRecentDocs; */
  NS_IMETHOD GetAddToRecentDocs(bool *aAddToRecentDocs) = 0;
  NS_IMETHOD SetAddToRecentDocs(bool aAddToRecentDocs) = 0;

  /* [deprecated] short show (); */
  NS_IMETHOD Show(int16_t *_retval) = 0;

  /* void open (in nsIFilePickerShownCallback aFilePickerShownCallback); */
  NS_IMETHOD Open(nsIFilePickerShownCallback *aFilePickerShownCallback) = 0;

  /* readonly attribute short mode; */
  NS_IMETHOD GetMode(int16_t *aMode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIFilePicker, NS_IFILEPICKER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFILEPICKER \
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsAString & title, int16_t mode) override; \
  NS_IMETHOD AppendFilters(int32_t filterMask) override; \
  NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter) override; \
  NS_IMETHOD GetDefaultString(nsAString & aDefaultString) override; \
  NS_IMETHOD SetDefaultString(const nsAString & aDefaultString) override; \
  NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension) override; \
  NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension) override; \
  NS_IMETHOD GetFilterIndex(int32_t *aFilterIndex) override; \
  NS_IMETHOD SetFilterIndex(int32_t aFilterIndex) override; \
  NS_IMETHOD GetDisplayDirectory(nsIFile * *aDisplayDirectory) override; \
  NS_IMETHOD SetDisplayDirectory(nsIFile *aDisplayDirectory) override; \
  NS_IMETHOD GetFile(nsIFile * *aFile) override; \
  NS_IMETHOD GetFileURL(nsIURI * *aFileURL) override; \
  NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles) override; \
  NS_IMETHOD GetDomFileOrDirectory(nsISupports * *aDomFileOrDirectory) override; \
  NS_IMETHOD GetDomFileOrDirectoryEnumerator(nsISimpleEnumerator * *aDomFileOrDirectoryEnumerator) override; \
  NS_IMETHOD GetAddToRecentDocs(bool *aAddToRecentDocs) override; \
  NS_IMETHOD SetAddToRecentDocs(bool aAddToRecentDocs) override; \
  NS_IMETHOD Show(int16_t *_retval) override; \
  NS_IMETHOD Open(nsIFilePickerShownCallback *aFilePickerShownCallback) override; \
  NS_IMETHOD GetMode(int16_t *aMode) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIFILEPICKER \
  NS_METHOD Init(mozIDOMWindowProxy *parent, const nsAString & title, int16_t mode); \
  NS_METHOD AppendFilters(int32_t filterMask); \
  NS_METHOD AppendFilter(const nsAString & title, const nsAString & filter); \
  NS_METHOD GetDefaultString(nsAString & aDefaultString); \
  NS_METHOD SetDefaultString(const nsAString & aDefaultString); \
  NS_METHOD GetDefaultExtension(nsAString & aDefaultExtension); \
  NS_METHOD SetDefaultExtension(const nsAString & aDefaultExtension); \
  NS_METHOD GetFilterIndex(int32_t *aFilterIndex); \
  NS_METHOD SetFilterIndex(int32_t aFilterIndex); \
  NS_METHOD GetDisplayDirectory(nsIFile * *aDisplayDirectory); \
  NS_METHOD SetDisplayDirectory(nsIFile *aDisplayDirectory); \
  NS_METHOD GetFile(nsIFile * *aFile); \
  NS_METHOD GetFileURL(nsIURI * *aFileURL); \
  NS_METHOD GetFiles(nsISimpleEnumerator * *aFiles); \
  NS_METHOD GetDomFileOrDirectory(nsISupports * *aDomFileOrDirectory); \
  NS_METHOD GetDomFileOrDirectoryEnumerator(nsISimpleEnumerator * *aDomFileOrDirectoryEnumerator); \
  NS_METHOD GetAddToRecentDocs(bool *aAddToRecentDocs); \
  NS_METHOD SetAddToRecentDocs(bool aAddToRecentDocs); \
  NS_METHOD Show(int16_t *_retval); \
  NS_METHOD Open(nsIFilePickerShownCallback *aFilePickerShownCallback); \
  NS_METHOD GetMode(int16_t *aMode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFILEPICKER(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsAString & title, int16_t mode) override { return _to Init(parent, title, mode); } \
  NS_IMETHOD AppendFilters(int32_t filterMask) override { return _to AppendFilters(filterMask); } \
  NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter) override { return _to AppendFilter(title, filter); } \
  NS_IMETHOD GetDefaultString(nsAString & aDefaultString) override { return _to GetDefaultString(aDefaultString); } \
  NS_IMETHOD SetDefaultString(const nsAString & aDefaultString) override { return _to SetDefaultString(aDefaultString); } \
  NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension) override { return _to GetDefaultExtension(aDefaultExtension); } \
  NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension) override { return _to SetDefaultExtension(aDefaultExtension); } \
  NS_IMETHOD GetFilterIndex(int32_t *aFilterIndex) override { return _to GetFilterIndex(aFilterIndex); } \
  NS_IMETHOD SetFilterIndex(int32_t aFilterIndex) override { return _to SetFilterIndex(aFilterIndex); } \
  NS_IMETHOD GetDisplayDirectory(nsIFile * *aDisplayDirectory) override { return _to GetDisplayDirectory(aDisplayDirectory); } \
  NS_IMETHOD SetDisplayDirectory(nsIFile *aDisplayDirectory) override { return _to SetDisplayDirectory(aDisplayDirectory); } \
  NS_IMETHOD GetFile(nsIFile * *aFile) override { return _to GetFile(aFile); } \
  NS_IMETHOD GetFileURL(nsIURI * *aFileURL) override { return _to GetFileURL(aFileURL); } \
  NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles) override { return _to GetFiles(aFiles); } \
  NS_IMETHOD GetDomFileOrDirectory(nsISupports * *aDomFileOrDirectory) override { return _to GetDomFileOrDirectory(aDomFileOrDirectory); } \
  NS_IMETHOD GetDomFileOrDirectoryEnumerator(nsISimpleEnumerator * *aDomFileOrDirectoryEnumerator) override { return _to GetDomFileOrDirectoryEnumerator(aDomFileOrDirectoryEnumerator); } \
  NS_IMETHOD GetAddToRecentDocs(bool *aAddToRecentDocs) override { return _to GetAddToRecentDocs(aAddToRecentDocs); } \
  NS_IMETHOD SetAddToRecentDocs(bool aAddToRecentDocs) override { return _to SetAddToRecentDocs(aAddToRecentDocs); } \
  NS_IMETHOD Show(int16_t *_retval) override { return _to Show(_retval); } \
  NS_IMETHOD Open(nsIFilePickerShownCallback *aFilePickerShownCallback) override { return _to Open(aFilePickerShownCallback); } \
  NS_IMETHOD GetMode(int16_t *aMode) override { return _to GetMode(aMode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFILEPICKER(_to) \
  NS_IMETHOD Init(mozIDOMWindowProxy *parent, const nsAString & title, int16_t mode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(parent, title, mode); } \
  NS_IMETHOD AppendFilters(int32_t filterMask) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendFilters(filterMask); } \
  NS_IMETHOD AppendFilter(const nsAString & title, const nsAString & filter) override { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendFilter(title, filter); } \
  NS_IMETHOD GetDefaultString(nsAString & aDefaultString) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultString(aDefaultString); } \
  NS_IMETHOD SetDefaultString(const nsAString & aDefaultString) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultString(aDefaultString); } \
  NS_IMETHOD GetDefaultExtension(nsAString & aDefaultExtension) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultExtension(aDefaultExtension); } \
  NS_IMETHOD SetDefaultExtension(const nsAString & aDefaultExtension) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultExtension(aDefaultExtension); } \
  NS_IMETHOD GetFilterIndex(int32_t *aFilterIndex) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilterIndex(aFilterIndex); } \
  NS_IMETHOD SetFilterIndex(int32_t aFilterIndex) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFilterIndex(aFilterIndex); } \
  NS_IMETHOD GetDisplayDirectory(nsIFile * *aDisplayDirectory) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisplayDirectory(aDisplayDirectory); } \
  NS_IMETHOD SetDisplayDirectory(nsIFile *aDisplayDirectory) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisplayDirectory(aDisplayDirectory); } \
  NS_IMETHOD GetFile(nsIFile * *aFile) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(aFile); } \
  NS_IMETHOD GetFileURL(nsIURI * *aFileURL) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileURL(aFileURL); } \
  NS_IMETHOD GetFiles(nsISimpleEnumerator * *aFiles) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFiles(aFiles); } \
  NS_IMETHOD GetDomFileOrDirectory(nsISupports * *aDomFileOrDirectory) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomFileOrDirectory(aDomFileOrDirectory); } \
  NS_IMETHOD GetDomFileOrDirectoryEnumerator(nsISimpleEnumerator * *aDomFileOrDirectoryEnumerator) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDomFileOrDirectoryEnumerator(aDomFileOrDirectoryEnumerator); } \
  NS_IMETHOD GetAddToRecentDocs(bool *aAddToRecentDocs) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAddToRecentDocs(aAddToRecentDocs); } \
  NS_IMETHOD SetAddToRecentDocs(bool aAddToRecentDocs) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAddToRecentDocs(aAddToRecentDocs); } \
  NS_IMETHOD Show(int16_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Show(_retval); } \
  NS_IMETHOD Open(nsIFilePickerShownCallback *aFilePickerShownCallback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(aFilePickerShownCallback); } \
  NS_IMETHOD GetMode(int16_t *aMode) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMode(aMode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsFilePicker : public nsIFilePicker
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIFILEPICKER

  nsFilePicker();

private:
  ~nsFilePicker();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsFilePicker, nsIFilePicker)

nsFilePicker::nsFilePicker()
{
  /* member initializers and constructor code */
}

nsFilePicker::~nsFilePicker()
{
  /* destructor code */
}

/* void init (in mozIDOMWindowProxy parent, in AString title, in short mode); */
NS_IMETHODIMP nsFilePicker::Init(mozIDOMWindowProxy *parent, const nsAString & title, int16_t mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendFilters (in long filterMask); */
NS_IMETHODIMP nsFilePicker::AppendFilters(int32_t filterMask)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendFilter (in AString title, in AString filter); */
NS_IMETHODIMP nsFilePicker::AppendFilter(const nsAString & title, const nsAString & filter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString defaultString; */
NS_IMETHODIMP nsFilePicker::GetDefaultString(nsAString & aDefaultString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetDefaultString(const nsAString & aDefaultString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString defaultExtension; */
NS_IMETHODIMP nsFilePicker::GetDefaultExtension(nsAString & aDefaultExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetDefaultExtension(const nsAString & aDefaultExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long filterIndex; */
NS_IMETHODIMP nsFilePicker::GetFilterIndex(int32_t *aFilterIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetFilterIndex(int32_t aFilterIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIFile displayDirectory; */
NS_IMETHODIMP nsFilePicker::GetDisplayDirectory(nsIFile * *aDisplayDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetDisplayDirectory(nsIFile *aDisplayDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile file; */
NS_IMETHODIMP nsFilePicker::GetFile(nsIFile * *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI fileURL; */
NS_IMETHODIMP nsFilePicker::GetFileURL(nsIURI * *aFileURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator files; */
NS_IMETHODIMP nsFilePicker::GetFiles(nsISimpleEnumerator * *aFiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports domFileOrDirectory; */
NS_IMETHODIMP nsFilePicker::GetDomFileOrDirectory(nsISupports * *aDomFileOrDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator domFileOrDirectoryEnumerator; */
NS_IMETHODIMP nsFilePicker::GetDomFileOrDirectoryEnumerator(nsISimpleEnumerator * *aDomFileOrDirectoryEnumerator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean addToRecentDocs; */
NS_IMETHODIMP nsFilePicker::GetAddToRecentDocs(bool *aAddToRecentDocs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsFilePicker::SetAddToRecentDocs(bool aAddToRecentDocs)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] short show (); */
NS_IMETHODIMP nsFilePicker::Show(int16_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void open (in nsIFilePickerShownCallback aFilePickerShownCallback); */
NS_IMETHODIMP nsFilePicker::Open(nsIFilePickerShownCallback *aFilePickerShownCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute short mode; */
NS_IMETHODIMP nsFilePicker::GetMode(int16_t *aMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIFilePicker_h__ */
