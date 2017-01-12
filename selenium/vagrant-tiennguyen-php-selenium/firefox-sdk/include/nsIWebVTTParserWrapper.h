/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIWebVTTParserWrapper.idl
 */

#ifndef __gen_nsIWebVTTParserWrapper_h__
#define __gen_nsIWebVTTParserWrapper_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMHTMLElement; /* forward declaration */

class nsIWebVTTListener; /* forward declaration */

class mozIDOMWindow; /* forward declaration */

class nsIVariant; /* forward declaration */


/* starting interface:    nsIWebVTTParserWrapper */
#define NS_IWEBVTTPARSERWRAPPER_IID_STR "8dfe016e-1701-4618-9f5e-9a6154e853f0"

#define NS_IWEBVTTPARSERWRAPPER_IID \
  {0x8dfe016e, 0x1701, 0x4618, \
    { 0x9f, 0x5e, 0x9a, 0x61, 0x54, 0xe8, 0x53, 0xf0 }}

class NS_NO_VTABLE nsIWebVTTParserWrapper : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBVTTPARSERWRAPPER_IID)

  /* void loadParser (in mozIDOMWindow window); */
  NS_IMETHOD LoadParser(mozIDOMWindow *window) = 0;

  /* void parse (in ACString data); */
  NS_IMETHOD Parse(const nsACString & data) = 0;

  /* void flush (); */
  NS_IMETHOD Flush(void) = 0;

  /* void watch (in nsIWebVTTListener callback); */
  NS_IMETHOD Watch(nsIWebVTTListener *callback) = 0;

  /* nsIDOMHTMLElement convertCueToDOMTree (in mozIDOMWindow window, in nsISupports cue); */
  NS_IMETHOD ConvertCueToDOMTree(mozIDOMWindow *window, nsISupports *cue, nsIDOMHTMLElement * *_retval) = 0;

  /* void processCues (in mozIDOMWindow window, in nsIVariant cues, in nsISupports overlay); */
  NS_IMETHOD ProcessCues(mozIDOMWindow *window, nsIVariant *cues, nsISupports *overlay) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebVTTParserWrapper, NS_IWEBVTTPARSERWRAPPER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBVTTPARSERWRAPPER \
  NS_IMETHOD LoadParser(mozIDOMWindow *window) override; \
  NS_IMETHOD Parse(const nsACString & data) override; \
  NS_IMETHOD Flush(void) override; \
  NS_IMETHOD Watch(nsIWebVTTListener *callback) override; \
  NS_IMETHOD ConvertCueToDOMTree(mozIDOMWindow *window, nsISupports *cue, nsIDOMHTMLElement * *_retval) override; \
  NS_IMETHOD ProcessCues(mozIDOMWindow *window, nsIVariant *cues, nsISupports *overlay) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIWEBVTTPARSERWRAPPER \
  NS_METHOD LoadParser(mozIDOMWindow *window); \
  NS_METHOD Parse(const nsACString & data); \
  NS_METHOD Flush(void); \
  NS_METHOD Watch(nsIWebVTTListener *callback); \
  NS_METHOD ConvertCueToDOMTree(mozIDOMWindow *window, nsISupports *cue, nsIDOMHTMLElement * *_retval); \
  NS_METHOD ProcessCues(mozIDOMWindow *window, nsIVariant *cues, nsISupports *overlay); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBVTTPARSERWRAPPER(_to) \
  NS_IMETHOD LoadParser(mozIDOMWindow *window) override { return _to LoadParser(window); } \
  NS_IMETHOD Parse(const nsACString & data) override { return _to Parse(data); } \
  NS_IMETHOD Flush(void) override { return _to Flush(); } \
  NS_IMETHOD Watch(nsIWebVTTListener *callback) override { return _to Watch(callback); } \
  NS_IMETHOD ConvertCueToDOMTree(mozIDOMWindow *window, nsISupports *cue, nsIDOMHTMLElement * *_retval) override { return _to ConvertCueToDOMTree(window, cue, _retval); } \
  NS_IMETHOD ProcessCues(mozIDOMWindow *window, nsIVariant *cues, nsISupports *overlay) override { return _to ProcessCues(window, cues, overlay); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBVTTPARSERWRAPPER(_to) \
  NS_IMETHOD LoadParser(mozIDOMWindow *window) override { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadParser(window); } \
  NS_IMETHOD Parse(const nsACString & data) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Parse(data); } \
  NS_IMETHOD Flush(void) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Flush(); } \
  NS_IMETHOD Watch(nsIWebVTTListener *callback) override { return !_to ? NS_ERROR_NULL_POINTER : _to->Watch(callback); } \
  NS_IMETHOD ConvertCueToDOMTree(mozIDOMWindow *window, nsISupports *cue, nsIDOMHTMLElement * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertCueToDOMTree(window, cue, _retval); } \
  NS_IMETHOD ProcessCues(mozIDOMWindow *window, nsIVariant *cues, nsISupports *overlay) override { return !_to ? NS_ERROR_NULL_POINTER : _to->ProcessCues(window, cues, overlay); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebVTTParserWrapper : public nsIWebVTTParserWrapper
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBVTTPARSERWRAPPER

  nsWebVTTParserWrapper();

private:
  ~nsWebVTTParserWrapper();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsWebVTTParserWrapper, nsIWebVTTParserWrapper)

nsWebVTTParserWrapper::nsWebVTTParserWrapper()
{
  /* member initializers and constructor code */
}

nsWebVTTParserWrapper::~nsWebVTTParserWrapper()
{
  /* destructor code */
}

/* void loadParser (in mozIDOMWindow window); */
NS_IMETHODIMP nsWebVTTParserWrapper::LoadParser(mozIDOMWindow *window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void parse (in ACString data); */
NS_IMETHODIMP nsWebVTTParserWrapper::Parse(const nsACString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void flush (); */
NS_IMETHODIMP nsWebVTTParserWrapper::Flush()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void watch (in nsIWebVTTListener callback); */
NS_IMETHODIMP nsWebVTTParserWrapper::Watch(nsIWebVTTListener *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMHTMLElement convertCueToDOMTree (in mozIDOMWindow window, in nsISupports cue); */
NS_IMETHODIMP nsWebVTTParserWrapper::ConvertCueToDOMTree(mozIDOMWindow *window, nsISupports *cue, nsIDOMHTMLElement * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void processCues (in mozIDOMWindow window, in nsIVariant cues, in nsISupports overlay); */
NS_IMETHODIMP nsWebVTTParserWrapper::ProcessCues(mozIDOMWindow *window, nsIVariant *cues, nsISupports *overlay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_WEBVTTPARSERWRAPPER_CONTRACTID "@mozilla.org/webvttParserWrapper;1"

#endif /* __gen_nsIWebVTTParserWrapper_h__ */
