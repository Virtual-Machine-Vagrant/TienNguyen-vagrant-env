/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../dist/idl/xpctest_attributes.idl
 */

#ifndef __gen_xpctest_attributes_h__
#define __gen_xpctest_attributes_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIXPCTestObjectReadOnly */
#define NS_IXPCTESTOBJECTREADONLY_IID_STR "42fbd9f6-b12d-47ef-b7a1-02d73c11fe53"

#define NS_IXPCTESTOBJECTREADONLY_IID \
  {0x42fbd9f6, 0xb12d, 0x47ef, \
    { 0xb7, 0xa1, 0x02, 0xd7, 0x3c, 0x11, 0xfe, 0x53 }}

class NS_NO_VTABLE nsIXPCTestObjectReadOnly : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTOBJECTREADONLY_IID)

  /* readonly attribute string strReadOnly; */
  NS_IMETHOD GetStrReadOnly(char * *aStrReadOnly) = 0;

  /* readonly attribute boolean boolReadOnly; */
  NS_IMETHOD GetBoolReadOnly(bool *aBoolReadOnly) = 0;

  /* readonly attribute short shortReadOnly; */
  NS_IMETHOD GetShortReadOnly(int16_t *aShortReadOnly) = 0;

  /* readonly attribute long longReadOnly; */
  NS_IMETHOD GetLongReadOnly(int32_t *aLongReadOnly) = 0;

  /* readonly attribute float floatReadOnly; */
  NS_IMETHOD GetFloatReadOnly(float *aFloatReadOnly) = 0;

  /* readonly attribute char charReadOnly; */
  NS_IMETHOD GetCharReadOnly(char *aCharReadOnly) = 0;

  /* readonly attribute PRTime timeReadOnly; */
  NS_IMETHOD GetTimeReadOnly(PRTime *aTimeReadOnly) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestObjectReadOnly, NS_IXPCTESTOBJECTREADONLY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTOBJECTREADONLY \
  NS_IMETHOD GetStrReadOnly(char * *aStrReadOnly) override; \
  NS_IMETHOD GetBoolReadOnly(bool *aBoolReadOnly) override; \
  NS_IMETHOD GetShortReadOnly(int16_t *aShortReadOnly) override; \
  NS_IMETHOD GetLongReadOnly(int32_t *aLongReadOnly) override; \
  NS_IMETHOD GetFloatReadOnly(float *aFloatReadOnly) override; \
  NS_IMETHOD GetCharReadOnly(char *aCharReadOnly) override; \
  NS_IMETHOD GetTimeReadOnly(PRTime *aTimeReadOnly) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTOBJECTREADONLY \
  NS_METHOD GetStrReadOnly(char * *aStrReadOnly); \
  NS_METHOD GetBoolReadOnly(bool *aBoolReadOnly); \
  NS_METHOD GetShortReadOnly(int16_t *aShortReadOnly); \
  NS_METHOD GetLongReadOnly(int32_t *aLongReadOnly); \
  NS_METHOD GetFloatReadOnly(float *aFloatReadOnly); \
  NS_METHOD GetCharReadOnly(char *aCharReadOnly); \
  NS_METHOD GetTimeReadOnly(PRTime *aTimeReadOnly); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTOBJECTREADONLY(_to) \
  NS_IMETHOD GetStrReadOnly(char * *aStrReadOnly) override { return _to GetStrReadOnly(aStrReadOnly); } \
  NS_IMETHOD GetBoolReadOnly(bool *aBoolReadOnly) override { return _to GetBoolReadOnly(aBoolReadOnly); } \
  NS_IMETHOD GetShortReadOnly(int16_t *aShortReadOnly) override { return _to GetShortReadOnly(aShortReadOnly); } \
  NS_IMETHOD GetLongReadOnly(int32_t *aLongReadOnly) override { return _to GetLongReadOnly(aLongReadOnly); } \
  NS_IMETHOD GetFloatReadOnly(float *aFloatReadOnly) override { return _to GetFloatReadOnly(aFloatReadOnly); } \
  NS_IMETHOD GetCharReadOnly(char *aCharReadOnly) override { return _to GetCharReadOnly(aCharReadOnly); } \
  NS_IMETHOD GetTimeReadOnly(PRTime *aTimeReadOnly) override { return _to GetTimeReadOnly(aTimeReadOnly); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTOBJECTREADONLY(_to) \
  NS_IMETHOD GetStrReadOnly(char * *aStrReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStrReadOnly(aStrReadOnly); } \
  NS_IMETHOD GetBoolReadOnly(bool *aBoolReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoolReadOnly(aBoolReadOnly); } \
  NS_IMETHOD GetShortReadOnly(int16_t *aShortReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShortReadOnly(aShortReadOnly); } \
  NS_IMETHOD GetLongReadOnly(int32_t *aLongReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLongReadOnly(aLongReadOnly); } \
  NS_IMETHOD GetFloatReadOnly(float *aFloatReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFloatReadOnly(aFloatReadOnly); } \
  NS_IMETHOD GetCharReadOnly(char *aCharReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharReadOnly(aCharReadOnly); } \
  NS_IMETHOD GetTimeReadOnly(PRTime *aTimeReadOnly) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeReadOnly(aTimeReadOnly); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestObjectReadOnly : public nsIXPCTestObjectReadOnly
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTOBJECTREADONLY

  nsXPCTestObjectReadOnly();

private:
  ~nsXPCTestObjectReadOnly();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestObjectReadOnly, nsIXPCTestObjectReadOnly)

nsXPCTestObjectReadOnly::nsXPCTestObjectReadOnly()
{
  /* member initializers and constructor code */
}

nsXPCTestObjectReadOnly::~nsXPCTestObjectReadOnly()
{
  /* destructor code */
}

/* readonly attribute string strReadOnly; */
NS_IMETHODIMP nsXPCTestObjectReadOnly::GetStrReadOnly(char * *aStrReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean boolReadOnly; */
NS_IMETHODIMP nsXPCTestObjectReadOnly::GetBoolReadOnly(bool *aBoolReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute short shortReadOnly; */
NS_IMETHODIMP nsXPCTestObjectReadOnly::GetShortReadOnly(int16_t *aShortReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long longReadOnly; */
NS_IMETHODIMP nsXPCTestObjectReadOnly::GetLongReadOnly(int32_t *aLongReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute float floatReadOnly; */
NS_IMETHODIMP nsXPCTestObjectReadOnly::GetFloatReadOnly(float *aFloatReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute char charReadOnly; */
NS_IMETHODIMP nsXPCTestObjectReadOnly::GetCharReadOnly(char *aCharReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime timeReadOnly; */
NS_IMETHODIMP nsXPCTestObjectReadOnly::GetTimeReadOnly(PRTime *aTimeReadOnly)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXPCTestObjectReadWrite */
#define NS_IXPCTESTOBJECTREADWRITE_IID_STR "f07529b0-a479-4954-aba5-ab3142c6b1cb"

#define NS_IXPCTESTOBJECTREADWRITE_IID \
  {0xf07529b0, 0xa479, 0x4954, \
    { 0xab, 0xa5, 0xab, 0x31, 0x42, 0xc6, 0xb1, 0xcb }}

class NS_NO_VTABLE nsIXPCTestObjectReadWrite : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXPCTESTOBJECTREADWRITE_IID)

  /* attribute string stringProperty; */
  NS_IMETHOD GetStringProperty(char * *aStringProperty) = 0;
  NS_IMETHOD SetStringProperty(const char * aStringProperty) = 0;

  /* attribute boolean booleanProperty; */
  NS_IMETHOD GetBooleanProperty(bool *aBooleanProperty) = 0;
  NS_IMETHOD SetBooleanProperty(bool aBooleanProperty) = 0;

  /* attribute short shortProperty; */
  NS_IMETHOD GetShortProperty(int16_t *aShortProperty) = 0;
  NS_IMETHOD SetShortProperty(int16_t aShortProperty) = 0;

  /* attribute long longProperty; */
  NS_IMETHOD GetLongProperty(int32_t *aLongProperty) = 0;
  NS_IMETHOD SetLongProperty(int32_t aLongProperty) = 0;

  /* attribute float floatProperty; */
  NS_IMETHOD GetFloatProperty(float *aFloatProperty) = 0;
  NS_IMETHOD SetFloatProperty(float aFloatProperty) = 0;

  /* attribute char charProperty; */
  NS_IMETHOD GetCharProperty(char *aCharProperty) = 0;
  NS_IMETHOD SetCharProperty(char aCharProperty) = 0;

  /* attribute PRTime timeProperty; */
  NS_IMETHOD GetTimeProperty(PRTime *aTimeProperty) = 0;
  NS_IMETHOD SetTimeProperty(PRTime aTimeProperty) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXPCTestObjectReadWrite, NS_IXPCTESTOBJECTREADWRITE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPCTESTOBJECTREADWRITE \
  NS_IMETHOD GetStringProperty(char * *aStringProperty) override; \
  NS_IMETHOD SetStringProperty(const char * aStringProperty) override; \
  NS_IMETHOD GetBooleanProperty(bool *aBooleanProperty) override; \
  NS_IMETHOD SetBooleanProperty(bool aBooleanProperty) override; \
  NS_IMETHOD GetShortProperty(int16_t *aShortProperty) override; \
  NS_IMETHOD SetShortProperty(int16_t aShortProperty) override; \
  NS_IMETHOD GetLongProperty(int32_t *aLongProperty) override; \
  NS_IMETHOD SetLongProperty(int32_t aLongProperty) override; \
  NS_IMETHOD GetFloatProperty(float *aFloatProperty) override; \
  NS_IMETHOD SetFloatProperty(float aFloatProperty) override; \
  NS_IMETHOD GetCharProperty(char *aCharProperty) override; \
  NS_IMETHOD SetCharProperty(char aCharProperty) override; \
  NS_IMETHOD GetTimeProperty(PRTime *aTimeProperty) override; \
  NS_IMETHOD SetTimeProperty(PRTime aTimeProperty) override; 

/* Use this macro when declaring the members of this interface when the
   class doesn't implement the interface. This is useful for forwarding. */
#define NS_DECL_NON_VIRTUAL_NSIXPCTESTOBJECTREADWRITE \
  NS_METHOD GetStringProperty(char * *aStringProperty); \
  NS_METHOD SetStringProperty(const char * aStringProperty); \
  NS_METHOD GetBooleanProperty(bool *aBooleanProperty); \
  NS_METHOD SetBooleanProperty(bool aBooleanProperty); \
  NS_METHOD GetShortProperty(int16_t *aShortProperty); \
  NS_METHOD SetShortProperty(int16_t aShortProperty); \
  NS_METHOD GetLongProperty(int32_t *aLongProperty); \
  NS_METHOD SetLongProperty(int32_t aLongProperty); \
  NS_METHOD GetFloatProperty(float *aFloatProperty); \
  NS_METHOD SetFloatProperty(float aFloatProperty); \
  NS_METHOD GetCharProperty(char *aCharProperty); \
  NS_METHOD SetCharProperty(char aCharProperty); \
  NS_METHOD GetTimeProperty(PRTime *aTimeProperty); \
  NS_METHOD SetTimeProperty(PRTime aTimeProperty); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPCTESTOBJECTREADWRITE(_to) \
  NS_IMETHOD GetStringProperty(char * *aStringProperty) override { return _to GetStringProperty(aStringProperty); } \
  NS_IMETHOD SetStringProperty(const char * aStringProperty) override { return _to SetStringProperty(aStringProperty); } \
  NS_IMETHOD GetBooleanProperty(bool *aBooleanProperty) override { return _to GetBooleanProperty(aBooleanProperty); } \
  NS_IMETHOD SetBooleanProperty(bool aBooleanProperty) override { return _to SetBooleanProperty(aBooleanProperty); } \
  NS_IMETHOD GetShortProperty(int16_t *aShortProperty) override { return _to GetShortProperty(aShortProperty); } \
  NS_IMETHOD SetShortProperty(int16_t aShortProperty) override { return _to SetShortProperty(aShortProperty); } \
  NS_IMETHOD GetLongProperty(int32_t *aLongProperty) override { return _to GetLongProperty(aLongProperty); } \
  NS_IMETHOD SetLongProperty(int32_t aLongProperty) override { return _to SetLongProperty(aLongProperty); } \
  NS_IMETHOD GetFloatProperty(float *aFloatProperty) override { return _to GetFloatProperty(aFloatProperty); } \
  NS_IMETHOD SetFloatProperty(float aFloatProperty) override { return _to SetFloatProperty(aFloatProperty); } \
  NS_IMETHOD GetCharProperty(char *aCharProperty) override { return _to GetCharProperty(aCharProperty); } \
  NS_IMETHOD SetCharProperty(char aCharProperty) override { return _to SetCharProperty(aCharProperty); } \
  NS_IMETHOD GetTimeProperty(PRTime *aTimeProperty) override { return _to GetTimeProperty(aTimeProperty); } \
  NS_IMETHOD SetTimeProperty(PRTime aTimeProperty) override { return _to SetTimeProperty(aTimeProperty); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPCTESTOBJECTREADWRITE(_to) \
  NS_IMETHOD GetStringProperty(char * *aStringProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringProperty(aStringProperty); } \
  NS_IMETHOD SetStringProperty(const char * aStringProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStringProperty(aStringProperty); } \
  NS_IMETHOD GetBooleanProperty(bool *aBooleanProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBooleanProperty(aBooleanProperty); } \
  NS_IMETHOD SetBooleanProperty(bool aBooleanProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBooleanProperty(aBooleanProperty); } \
  NS_IMETHOD GetShortProperty(int16_t *aShortProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetShortProperty(aShortProperty); } \
  NS_IMETHOD SetShortProperty(int16_t aShortProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetShortProperty(aShortProperty); } \
  NS_IMETHOD GetLongProperty(int32_t *aLongProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLongProperty(aLongProperty); } \
  NS_IMETHOD SetLongProperty(int32_t aLongProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLongProperty(aLongProperty); } \
  NS_IMETHOD GetFloatProperty(float *aFloatProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFloatProperty(aFloatProperty); } \
  NS_IMETHOD SetFloatProperty(float aFloatProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFloatProperty(aFloatProperty); } \
  NS_IMETHOD GetCharProperty(char *aCharProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharProperty(aCharProperty); } \
  NS_IMETHOD SetCharProperty(char aCharProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharProperty(aCharProperty); } \
  NS_IMETHOD GetTimeProperty(PRTime *aTimeProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTimeProperty(aTimeProperty); } \
  NS_IMETHOD SetTimeProperty(PRTime aTimeProperty) override { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTimeProperty(aTimeProperty); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXPCTestObjectReadWrite : public nsIXPCTestObjectReadWrite
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXPCTESTOBJECTREADWRITE

  nsXPCTestObjectReadWrite();

private:
  ~nsXPCTestObjectReadWrite();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS(nsXPCTestObjectReadWrite, nsIXPCTestObjectReadWrite)

nsXPCTestObjectReadWrite::nsXPCTestObjectReadWrite()
{
  /* member initializers and constructor code */
}

nsXPCTestObjectReadWrite::~nsXPCTestObjectReadWrite()
{
  /* destructor code */
}

/* attribute string stringProperty; */
NS_IMETHODIMP nsXPCTestObjectReadWrite::GetStringProperty(char * *aStringProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestObjectReadWrite::SetStringProperty(const char * aStringProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean booleanProperty; */
NS_IMETHODIMP nsXPCTestObjectReadWrite::GetBooleanProperty(bool *aBooleanProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestObjectReadWrite::SetBooleanProperty(bool aBooleanProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute short shortProperty; */
NS_IMETHODIMP nsXPCTestObjectReadWrite::GetShortProperty(int16_t *aShortProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestObjectReadWrite::SetShortProperty(int16_t aShortProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long longProperty; */
NS_IMETHODIMP nsXPCTestObjectReadWrite::GetLongProperty(int32_t *aLongProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestObjectReadWrite::SetLongProperty(int32_t aLongProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute float floatProperty; */
NS_IMETHODIMP nsXPCTestObjectReadWrite::GetFloatProperty(float *aFloatProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestObjectReadWrite::SetFloatProperty(float aFloatProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute char charProperty; */
NS_IMETHODIMP nsXPCTestObjectReadWrite::GetCharProperty(char *aCharProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestObjectReadWrite::SetCharProperty(char aCharProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute PRTime timeProperty; */
NS_IMETHODIMP nsXPCTestObjectReadWrite::GetTimeProperty(PRTime *aTimeProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXPCTestObjectReadWrite::SetTimeProperty(PRTime aTimeProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_xpctest_attributes_h__ */
