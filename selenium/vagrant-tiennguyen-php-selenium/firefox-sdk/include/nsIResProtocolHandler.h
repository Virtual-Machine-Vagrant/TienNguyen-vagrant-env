/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIResProtocolHandler.idl
 */

#ifndef __gen_nsIResProtocolHandler_h__
#define __gen_nsIResProtocolHandler_h__


#ifndef __gen_nsISubstitutingProtocolHandler_h__
#include "nsISubstitutingProtocolHandler.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIResProtocolHandler */
#define NS_IRESPROTOCOLHANDLER_IID_STR "241d34ac-9ed5-46d7-910c-7a9d914aa0c5"

#define NS_IRESPROTOCOLHANDLER_IID \
  {0x241d34ac, 0x9ed5, 0x46d7, \
    { 0x91, 0x0c, 0x7a, 0x9d, 0x91, 0x4a, 0xa0, 0xc5 }}

class NS_NO_VTABLE nsIResProtocolHandler : public nsISubstitutingProtocolHandler {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IRESPROTOCOLHANDLER_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIResProtocolHandler, NS_IRESPROTOCOLHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIRESPROTOCOLHANDLER \
  /* no methods! */

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIRESPROTOCOLHANDLER \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIRESPROTOCOLHANDLER(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIRESPROTOCOLHANDLER(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsResProtocolHandler : public nsIResProtocolHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIRESPROTOCOLHANDLER

  nsResProtocolHandler();

private:
  ~nsResProtocolHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsResProtocolHandler, nsIResProtocolHandler)

nsResProtocolHandler::nsResProtocolHandler()
{
  /* member initializers and constructor code */
}

nsResProtocolHandler::~nsResProtocolHandler()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIResProtocolHandler_h__ */
