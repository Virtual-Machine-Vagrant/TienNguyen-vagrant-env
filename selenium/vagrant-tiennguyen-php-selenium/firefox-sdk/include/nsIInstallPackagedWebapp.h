/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIInstallPackagedWebapp.idl
 */

#ifndef __gen_nsIInstallPackagedWebapp_h__
#define __gen_nsIInstallPackagedWebapp_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIInstallPackagedWebapp */
#define NS_IINSTALLPACKAGEDWEBAPP_IID_STR "3b4b69a0-56dc-11e5-a837-0800200c9a66"

#define NS_IINSTALLPACKAGEDWEBAPP_IID \
  {0x3b4b69a0, 0x56dc, 0x11e5, \
    { 0xa8, 0x37, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66 }}

class NS_NO_VTABLE nsIInstallPackagedWebapp : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IINSTALLPACKAGEDWEBAPP_IID)

  /* boolean installPackagedWebapp (in string aManifestContent, in string aOrigin, in string aManifestURL); */
  NS_IMETHOD InstallPackagedWebapp(const char * aManifestContent, const char * aOrigin, const char * aManifestURL, bool *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIInstallPackagedWebapp, NS_IINSTALLPACKAGEDWEBAPP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINSTALLPACKAGEDWEBAPP \
  NS_IMETHOD InstallPackagedWebapp(const char * aManifestContent, const char * aOrigin, const char * aManifestURL, bool *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIINSTALLPACKAGEDWEBAPP \
  NS_METHOD InstallPackagedWebapp(const char * aManifestContent, const char * aOrigin, const char * aManifestURL, bool *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINSTALLPACKAGEDWEBAPP(_to) \
  NS_IMETHOD InstallPackagedWebapp(const char * aManifestContent, const char * aOrigin, const char * aManifestURL, bool *_retval) override { return _to InstallPackagedWebapp(aManifestContent, aOrigin, aManifestURL, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINSTALLPACKAGEDWEBAPP(_to) \
  NS_IMETHOD InstallPackagedWebapp(const char * aManifestContent, const char * aOrigin, const char * aManifestURL, bool *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InstallPackagedWebapp(aManifestContent, aOrigin, aManifestURL, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsInstallPackagedWebapp : public nsIInstallPackagedWebapp
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINSTALLPACKAGEDWEBAPP

  nsInstallPackagedWebapp();

private:
  ~nsInstallPackagedWebapp();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsInstallPackagedWebapp, nsIInstallPackagedWebapp)

nsInstallPackagedWebapp::nsInstallPackagedWebapp()
{
  /* member initializers and constructor code */
}

nsInstallPackagedWebapp::~nsInstallPackagedWebapp()
{
  /* destructor code */
}

/* boolean installPackagedWebapp (in string aManifestContent, in string aOrigin, in string aManifestURL); */
NS_IMETHODIMP nsInstallPackagedWebapp::InstallPackagedWebapp(const char * aManifestContent, const char * aOrigin, const char * aManifestURL, bool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIInstallPackagedWebapp_h__ */
