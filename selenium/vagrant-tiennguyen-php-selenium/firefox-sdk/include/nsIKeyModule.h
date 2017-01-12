/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/nsIKeyModule.idl
 */

#ifndef __gen_nsIKeyModule_h__
#define __gen_nsIKeyModule_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
 /* forward declaration */
 typedef struct PK11SymKeyStr PK11SymKey;

/* starting interface:    nsIKeyObject */
#define NS_IKEYOBJECT_IID_STR "ee2dc516-ba7b-4e77-89fe-c43b886ef715"

#define NS_IKEYOBJECT_IID \
  {0xee2dc516, 0xba7b, 0x4e77, \
    { 0x89, 0xfe, 0xc4, 0x3b, 0x88, 0x6e, 0xf7, 0x15 }}

class NS_NO_VTABLE nsIKeyObject : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IKEYOBJECT_IID)

  enum {
    SYM_KEY = 1,
    HMAC = 257
  };

  /* [noscript] void initKey (in short aAlgorithm, in PK11SymKeyPtr aKey); */
  NS_IMETHOD InitKey(int16_t aAlgorithm, PK11SymKey *aKey) = 0;

  /* [noscript] PK11SymKeyPtr getKeyObj (); */
  NS_IMETHOD GetKeyObj(PK11SymKey **_retval) = 0;

  /* short getType (); */
  NS_IMETHOD GetType(int16_t *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIKeyObject, NS_IKEYOBJECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIKEYOBJECT \
  NS_IMETHOD InitKey(int16_t aAlgorithm, PK11SymKey *aKey) override; \
  NS_IMETHOD GetKeyObj(PK11SymKey **_retval) override; \
  NS_IMETHOD GetType(int16_t *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIKEYOBJECT \
  NS_METHOD InitKey(int16_t aAlgorithm, PK11SymKey *aKey); \
  NS_METHOD GetKeyObj(PK11SymKey **_retval); \
  NS_METHOD GetType(int16_t *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIKEYOBJECT(_to) \
  NS_IMETHOD InitKey(int16_t aAlgorithm, PK11SymKey *aKey) override { return _to InitKey(aAlgorithm, aKey); } \
  NS_IMETHOD GetKeyObj(PK11SymKey **_retval) override { return _to GetKeyObj(_retval); } \
  NS_IMETHOD GetType(int16_t *_retval) override { return _to GetType(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIKEYOBJECT(_to) \
  NS_IMETHOD InitKey(int16_t aAlgorithm, PK11SymKey *aKey) override { return !_to ? NS_ERROR_NULL_POINTER : _to->InitKey(aAlgorithm, aKey); } \
  NS_IMETHOD GetKeyObj(PK11SymKey **_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKeyObj(_retval); } \
  NS_IMETHOD GetType(int16_t *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsKeyObject : public nsIKeyObject
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIKEYOBJECT

  nsKeyObject();

private:
  ~nsKeyObject();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsKeyObject, nsIKeyObject)

nsKeyObject::nsKeyObject()
{
  /* member initializers and constructor code */
}

nsKeyObject::~nsKeyObject()
{
  /* destructor code */
}

/* [noscript] void initKey (in short aAlgorithm, in PK11SymKeyPtr aKey); */
NS_IMETHODIMP nsKeyObject::InitKey(int16_t aAlgorithm, PK11SymKey *aKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] PK11SymKeyPtr getKeyObj (); */
NS_IMETHODIMP nsKeyObject::GetKeyObj(PK11SymKey **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* short getType (); */
NS_IMETHODIMP nsKeyObject::GetType(int16_t *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIKeyObjectFactory */
#define NS_IKEYOBJECTFACTORY_IID_STR "838bdbf1-8244-448f-8bcd-cede70227d75"

#define NS_IKEYOBJECTFACTORY_IID \
  {0x838bdbf1, 0x8244, 0x448f, \
    { 0x8b, 0xcd, 0xce, 0xde, 0x70, 0x22, 0x7d, 0x75 }}

class NS_NO_VTABLE nsIKeyObjectFactory : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IKEYOBJECTFACTORY_IID)

  /* nsIKeyObject keyFromString (in short aAlgorithm, in ACString aKey); */
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIKeyObjectFactory, NS_IKEYOBJECTFACTORY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIKEYOBJECTFACTORY \
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIKEYOBJECTFACTORY \
  NS_METHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIKEYOBJECTFACTORY(_to) \
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval) override { return _to KeyFromString(aAlgorithm, aKey, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIKEYOBJECTFACTORY(_to) \
  NS_IMETHOD KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval) override { return !_to ? NS_ERROR_NULL_POINTER : _to->KeyFromString(aAlgorithm, aKey, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsKeyObjectFactory : public nsIKeyObjectFactory
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIKEYOBJECTFACTORY

  nsKeyObjectFactory();

private:
  ~nsKeyObjectFactory();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsKeyObjectFactory, nsIKeyObjectFactory)

nsKeyObjectFactory::nsKeyObjectFactory()
{
  /* member initializers and constructor code */
}

nsKeyObjectFactory::~nsKeyObjectFactory()
{
  /* destructor code */
}

/* nsIKeyObject keyFromString (in short aAlgorithm, in ACString aKey); */
NS_IMETHODIMP nsKeyObjectFactory::KeyFromString(int16_t aAlgorithm, const nsACString & aKey, nsIKeyObject * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIKeyModule_h__ */
