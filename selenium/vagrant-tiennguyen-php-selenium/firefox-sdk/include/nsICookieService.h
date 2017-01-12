/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsICookieService.idl
 */

#ifndef __gen_nsICookieService_h__
#define __gen_nsICookieService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIPrompt; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    nsICookieService */
#define NS_ICOOKIESERVICE_IID_STR "1e94e283-2811-4f43-b947-d22b1549d824"

#define NS_ICOOKIESERVICE_IID \
  {0x1e94e283, 0x2811, 0x4f43, \
    { 0xb9, 0x47, 0xd2, 0x2b, 0x15, 0x49, 0xd8, 0x24 }}

class NS_NO_VTABLE nsICookieService : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOOKIESERVICE_IID)

  enum {
    BEHAVIOR_ACCEPT = 0U,
    BEHAVIOR_REJECT_FOREIGN = 1U,
    BEHAVIOR_REJECT = 2U,
    BEHAVIOR_LIMIT_FOREIGN = 3U,
    ACCEPT_NORMALLY = 0U,
    ACCEPT_SESSION = 2U,
    ACCEPT_FOR_N_DAYS = 3U
  };

  /* string getCookieString (in nsIURI aURI, in nsIChannel aChannel); */
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval) = 0;

  /* string getCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIChannel aChannel); */
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval) = 0;

  /* void setCookieString (in nsIURI aURI, in nsIPrompt aPrompt, in string aCookie, in nsIChannel aChannel); */
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel) = 0;

  /* void setCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIPrompt aPrompt, in string aCookie, in string aServerTime, in nsIChannel aChannel); */
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICookieService, NS_ICOOKIESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOOKIESERVICE \
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval) override; \
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval) override; \
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel) override; \
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSICOOKIESERVICE \
  NS_METHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval); \
  NS_METHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval); \
  NS_METHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel); \
  NS_METHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOOKIESERVICE(_to) \
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval) override { return _to GetCookieString(aURI, aChannel, _retval); } \
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval) override { return _to GetCookieStringFromHttp(aURI, aFirstURI, aChannel, _retval); } \
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel) override { return _to SetCookieString(aURI, aPrompt, aCookie, aChannel); } \
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel) override { return _to SetCookieStringFromHttp(aURI, aFirstURI, aPrompt, aCookie, aServerTime, aChannel); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOOKIESERVICE(_to) \
  NS_IMETHOD GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCookieString(aURI, aChannel, _retval); } \
  NS_IMETHOD GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCookieStringFromHttp(aURI, aFirstURI, aChannel, _retval); } \
  NS_IMETHOD SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCookieString(aURI, aPrompt, aCookie, aChannel); } \
  NS_IMETHOD SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCookieStringFromHttp(aURI, aFirstURI, aPrompt, aCookie, aServerTime, aChannel); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCookieService : public nsICookieService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOOKIESERVICE

  nsCookieService();

private:
  ~nsCookieService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsCookieService, nsICookieService)

nsCookieService::nsCookieService()
{
  /* member initializers and constructor code */
}

nsCookieService::~nsCookieService()
{
  /* destructor code */
}

/* string getCookieString (in nsIURI aURI, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::GetCookieString(nsIURI *aURI, nsIChannel *aChannel, char * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string getCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::GetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIChannel *aChannel, char * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCookieString (in nsIURI aURI, in nsIPrompt aPrompt, in string aCookie, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::SetCookieString(nsIURI *aURI, nsIPrompt *aPrompt, const char * aCookie, nsIChannel *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCookieStringFromHttp (in nsIURI aURI, in nsIURI aFirstURI, in nsIPrompt aPrompt, in string aCookie, in string aServerTime, in nsIChannel aChannel); */
NS_IMETHODIMP nsCookieService::SetCookieStringFromHttp(nsIURI *aURI, nsIURI *aFirstURI, nsIPrompt *aPrompt, const char * aCookie, const char * aServerTime, nsIChannel *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICookieService_h__ */
