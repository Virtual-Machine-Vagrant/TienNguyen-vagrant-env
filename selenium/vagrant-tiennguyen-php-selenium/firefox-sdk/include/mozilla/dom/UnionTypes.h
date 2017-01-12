#ifndef mozilla_dom_UnionTypes_h
#define mozilla_dom_UnionTypes_h

#include "jsfriendapi.h"
#include "mozilla/OwningNonNull.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/MozMap.h"
#include "mozilla/dom/TypedArray.h"
#include "mozilla/dom/UnionMember.h"

class nsGenericHTMLElement;

namespace mozilla {
namespace dom {

class Blob;
class CanvasGradient;
class CanvasPattern;
class Directory;
class File;
class HTMLOptGroupElement;
class HTMLOptionElement;
class OwningArrayBufferOrArrayBufferViewOrBlobOrString;
class OwningCanvasPatternOrCanvasGradient;
class OwningCanvasPatternOrNullOrCanvasGradient;
class OwningFileOrDirectory;
class OwningHTMLElementOrLong;
class OwningHTMLOptionElementOrHTMLOptGroupElement;
class OwningStringOrBlobOrArrayBufferOrArrayBufferView;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {
void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningArrayBufferOrArrayBufferViewOrBlobOrString& aUnion, const char* aName, uint32_t aFlags = 0);

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningCanvasPatternOrCanvasGradient& aUnion, const char* aName, uint32_t aFlags = 0);

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningCanvasPatternOrNullOrCanvasGradient& aUnion, const char* aName, uint32_t aFlags = 0);

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningFileOrDirectory& aUnion, const char* aName, uint32_t aFlags = 0);

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningHTMLElementOrLong& aUnion, const char* aName, uint32_t aFlags = 0);

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningHTMLOptionElementOrHTMLOptGroupElement& aUnion, const char* aName, uint32_t aFlags = 0);

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningStringOrBlobOrArrayBufferOrArrayBufferView& aUnion, const char* aName, uint32_t aFlags = 0);

void
ImplCycleCollectionUnlink(OwningArrayBufferOrArrayBufferViewOrBlobOrString& aUnion);

void
ImplCycleCollectionUnlink(OwningCanvasPatternOrCanvasGradient& aUnion);

void
ImplCycleCollectionUnlink(OwningCanvasPatternOrNullOrCanvasGradient& aUnion);

void
ImplCycleCollectionUnlink(OwningFileOrDirectory& aUnion);

void
ImplCycleCollectionUnlink(OwningHTMLElementOrLong& aUnion);

void
ImplCycleCollectionUnlink(OwningHTMLOptionElementOrHTMLOptGroupElement& aUnion);

void
ImplCycleCollectionUnlink(OwningStringOrBlobOrArrayBufferOrArrayBufferView& aUnion);

class ArrayBufferOrArrayBufferViewOrBlobOrString
{
  friend class ArrayBufferOrArrayBufferViewOrBlobOrStringArgument;
  enum Type
  {
    eUninitialized,
    eArrayBuffer,
    eArrayBufferView,
    eBlob,
    eString
  };

  union Value
  {
    UnionMember<RootedTypedArray<ArrayBuffer> > mArrayBuffer;
    UnionMember<RootedTypedArray<ArrayBufferView> > mArrayBufferView;
    UnionMember<NonNull<mozilla::dom::Blob> > mBlob;
    UnionMember<binding_detail::FakeString > mString;

  };

  Type mType;
  Value mValue;

  ArrayBufferOrArrayBufferViewOrBlobOrString(const ArrayBufferOrArrayBufferViewOrBlobOrString&) = delete;
  void operator=(const ArrayBufferOrArrayBufferViewOrBlobOrString) = delete;
public:
  explicit inline ArrayBufferOrArrayBufferViewOrBlobOrString()
    : mType(eUninitialized)
  {
  }

  inline ~ArrayBufferOrArrayBufferViewOrBlobOrString()
  {
    Uninit();
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBuffer>&
  SetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    Uninit();
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline RootedTypedArray<ArrayBuffer>&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    if (mType == eArrayBufferView) {
      return mValue.mArrayBufferView.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eArrayBufferView;
    return mValue.mArrayBufferView.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  SetAsArrayBufferView(JSContext* cx)
  {
    if (mType == eArrayBufferView) {
      return mValue.mArrayBufferView.Value();
    }
    Uninit();
    mType = eArrayBufferView;
    return mValue.mArrayBufferView.SetValue(cx);
  }

  inline bool
  IsArrayBufferView() const
  {
    return mType == eArrayBufferView;
  }

  inline RootedTypedArray<ArrayBufferView>&
  GetAsArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline ArrayBufferView const &
  GetAsArrayBufferView() const
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    if (mType == eBlob) {
      return mValue.mBlob.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eBlob;
    return mValue.mBlob.SetValue();
  }

  inline NonNull<mozilla::dom::Blob>&
  SetAsBlob()
  {
    if (mType == eBlob) {
      return mValue.mBlob.Value();
    }
    Uninit();
    mType = eBlob;
    return mValue.mBlob.SetValue();
  }

  inline bool
  IsBlob() const
  {
    return mType == eBlob;
  }

  inline NonNull<mozilla::dom::Blob>&
  GetAsBlob()
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  inline mozilla::dom::Blob&
  GetAsBlob() const
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eArrayBuffer: {
        DestroyArrayBuffer();
        break;
      }
      case eArrayBufferView: {
        DestroyArrayBufferView();
        break;
      }
      case eBlob: {
        DestroyBlob();
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    mValue.mArrayBuffer.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    mValue.mArrayBufferView.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyBlob()
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    mValue.mBlob.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }
};

class ArrayBufferOrLong
{
  friend class ArrayBufferOrLongArgument;
  enum Type
  {
    eUninitialized,
    eArrayBuffer,
    eLong
  };

  union Value
  {
    UnionMember<RootedTypedArray<ArrayBuffer> > mArrayBuffer;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  ArrayBufferOrLong(const ArrayBufferOrLong&) = delete;
  void operator=(const ArrayBufferOrLong) = delete;
public:
  explicit inline ArrayBufferOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~ArrayBufferOrLong()
  {
    Uninit();
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBuffer>&
  SetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    Uninit();
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline RootedTypedArray<ArrayBuffer>&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline int32_t&
  RawSetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline int32_t&
  SetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    Uninit();
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eArrayBuffer: {
        DestroyArrayBuffer();
        break;
      }
      case eLong: {
        DestroyLong();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    mValue.mArrayBuffer.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    mValue.mLong.Destroy();
    mType = eUninitialized;
  }
};

class ArrayBufferViewOrArrayBuffer
{
  friend class ArrayBufferViewOrArrayBufferArgument;
  enum Type
  {
    eUninitialized,
    eArrayBufferView,
    eArrayBuffer
  };

  union Value
  {
    UnionMember<RootedTypedArray<ArrayBufferView> > mArrayBufferView;
    UnionMember<RootedTypedArray<ArrayBuffer> > mArrayBuffer;

  };

  Type mType;
  Value mValue;

  ArrayBufferViewOrArrayBuffer(const ArrayBufferViewOrArrayBuffer&) = delete;
  void operator=(const ArrayBufferViewOrArrayBuffer) = delete;
public:
  explicit inline ArrayBufferViewOrArrayBuffer()
    : mType(eUninitialized)
  {
  }

  inline ~ArrayBufferViewOrArrayBuffer()
  {
    Uninit();
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    if (mType == eArrayBufferView) {
      return mValue.mArrayBufferView.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eArrayBufferView;
    return mValue.mArrayBufferView.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  SetAsArrayBufferView(JSContext* cx)
  {
    if (mType == eArrayBufferView) {
      return mValue.mArrayBufferView.Value();
    }
    Uninit();
    mType = eArrayBufferView;
    return mValue.mArrayBufferView.SetValue(cx);
  }

  inline bool
  IsArrayBufferView() const
  {
    return mType == eArrayBufferView;
  }

  inline RootedTypedArray<ArrayBufferView>&
  GetAsArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline ArrayBufferView const &
  GetAsArrayBufferView() const
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBuffer>&
  SetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    Uninit();
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline RootedTypedArray<ArrayBuffer>&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eArrayBufferView: {
        DestroyArrayBufferView();
        break;
      }
      case eArrayBuffer: {
        DestroyArrayBuffer();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    mValue.mArrayBufferView.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    mValue.mArrayBuffer.Destroy();
    mType = eUninitialized;
  }
};

class ByteStringOrLong
{
  friend class ByteStringOrLongArgument;
  enum Type
  {
    eUninitialized,
    eByteString,
    eLong
  };

  union Value
  {
    UnionMember<nsCString > mByteString;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  ByteStringOrLong(const ByteStringOrLong&) = delete;
  void operator=(const ByteStringOrLong) = delete;
public:
  explicit inline ByteStringOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~ByteStringOrLong()
  {
    Uninit();
  }

  inline nsCString&
  RawSetAsByteString()
  {
    if (mType == eByteString) {
      return mValue.mByteString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eByteString;
    return mValue.mByteString.SetValue();
  }

  inline nsCString&
  SetAsByteString()
  {
    if (mType == eByteString) {
      return mValue.mByteString.Value();
    }
    Uninit();
    mType = eByteString;
    return mValue.mByteString.SetValue();
  }

  inline bool
  IsByteString() const
  {
    return mType == eByteString;
  }

  inline nsCString&
  GetAsByteString()
  {
    MOZ_ASSERT(IsByteString(), "Wrong type!");
    return mValue.mByteString.Value();
  }

  inline const nsCString&
  GetAsByteString() const
  {
    MOZ_ASSERT(IsByteString(), "Wrong type!");
    return mValue.mByteString.Value();
  }

  inline int32_t&
  RawSetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline int32_t&
  SetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    Uninit();
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eByteString: {
        DestroyByteString();
        break;
      }
      case eLong: {
        DestroyLong();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyByteString()
  {
    MOZ_ASSERT(IsByteString(), "Wrong type!");
    mValue.mByteString.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    mValue.mLong.Destroy();
    mType = eUninitialized;
  }
};

class CanvasPatternOrCanvasGradient
{
  friend class CanvasPatternOrCanvasGradientArgument;
  enum Type
  {
    eUninitialized,
    eCanvasPattern,
    eCanvasGradient
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::CanvasPattern> > mCanvasPattern;
    UnionMember<NonNull<mozilla::dom::CanvasGradient> > mCanvasGradient;

  };

  Type mType;
  Value mValue;

  CanvasPatternOrCanvasGradient(const CanvasPatternOrCanvasGradient&) = delete;
  void operator=(const CanvasPatternOrCanvasGradient) = delete;
public:
  explicit inline CanvasPatternOrCanvasGradient()
    : mType(eUninitialized)
  {
  }

  inline ~CanvasPatternOrCanvasGradient()
  {
    Uninit();
  }

  inline NonNull<mozilla::dom::CanvasPattern>&
  RawSetAsCanvasPattern()
  {
    if (mType == eCanvasPattern) {
      return mValue.mCanvasPattern.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eCanvasPattern;
    return mValue.mCanvasPattern.SetValue();
  }

  inline NonNull<mozilla::dom::CanvasPattern>&
  SetAsCanvasPattern()
  {
    if (mType == eCanvasPattern) {
      return mValue.mCanvasPattern.Value();
    }
    Uninit();
    mType = eCanvasPattern;
    return mValue.mCanvasPattern.SetValue();
  }

  inline bool
  IsCanvasPattern() const
  {
    return mType == eCanvasPattern;
  }

  inline NonNull<mozilla::dom::CanvasPattern>&
  GetAsCanvasPattern()
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  inline mozilla::dom::CanvasPattern&
  GetAsCanvasPattern() const
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  inline NonNull<mozilla::dom::CanvasGradient>&
  RawSetAsCanvasGradient()
  {
    if (mType == eCanvasGradient) {
      return mValue.mCanvasGradient.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eCanvasGradient;
    return mValue.mCanvasGradient.SetValue();
  }

  inline NonNull<mozilla::dom::CanvasGradient>&
  SetAsCanvasGradient()
  {
    if (mType == eCanvasGradient) {
      return mValue.mCanvasGradient.Value();
    }
    Uninit();
    mType = eCanvasGradient;
    return mValue.mCanvasGradient.SetValue();
  }

  inline bool
  IsCanvasGradient() const
  {
    return mType == eCanvasGradient;
  }

  inline NonNull<mozilla::dom::CanvasGradient>&
  GetAsCanvasGradient()
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  inline mozilla::dom::CanvasGradient&
  GetAsCanvasGradient() const
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eCanvasPattern: {
        DestroyCanvasPattern();
        break;
      }
      case eCanvasGradient: {
        DestroyCanvasGradient();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyCanvasPattern()
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    mValue.mCanvasPattern.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyCanvasGradient()
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    mValue.mCanvasGradient.Destroy();
    mType = eUninitialized;
  }
};

class CanvasPatternOrNullOrCanvasGradient
{
  friend class CanvasPatternOrNullOrCanvasGradientArgument;
  enum Type
  {
    eUninitialized,
    eNull,
    eCanvasPattern,
    eCanvasGradient
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::CanvasPattern> > mCanvasPattern;
    UnionMember<NonNull<mozilla::dom::CanvasGradient> > mCanvasGradient;

  };

  Type mType;
  Value mValue;

  CanvasPatternOrNullOrCanvasGradient(const CanvasPatternOrNullOrCanvasGradient&) = delete;
  void operator=(const CanvasPatternOrNullOrCanvasGradient) = delete;
public:
  explicit inline CanvasPatternOrNullOrCanvasGradient()
    : mType(eUninitialized)
  {
  }

  inline ~CanvasPatternOrNullOrCanvasGradient()
  {
    Uninit();
  }

  inline bool
  IsNull() const
  {
    return mType == eNull;
  }

  inline void
  SetNull()
  {
    Uninit();
    mType = eNull;
  }

  inline NonNull<mozilla::dom::CanvasPattern>&
  RawSetAsCanvasPattern()
  {
    if (mType == eCanvasPattern) {
      return mValue.mCanvasPattern.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eCanvasPattern;
    return mValue.mCanvasPattern.SetValue();
  }

  inline NonNull<mozilla::dom::CanvasPattern>&
  SetAsCanvasPattern()
  {
    if (mType == eCanvasPattern) {
      return mValue.mCanvasPattern.Value();
    }
    Uninit();
    mType = eCanvasPattern;
    return mValue.mCanvasPattern.SetValue();
  }

  inline bool
  IsCanvasPattern() const
  {
    return mType == eCanvasPattern;
  }

  inline NonNull<mozilla::dom::CanvasPattern>&
  GetAsCanvasPattern()
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  inline mozilla::dom::CanvasPattern&
  GetAsCanvasPattern() const
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  inline NonNull<mozilla::dom::CanvasGradient>&
  RawSetAsCanvasGradient()
  {
    if (mType == eCanvasGradient) {
      return mValue.mCanvasGradient.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eCanvasGradient;
    return mValue.mCanvasGradient.SetValue();
  }

  inline NonNull<mozilla::dom::CanvasGradient>&
  SetAsCanvasGradient()
  {
    if (mType == eCanvasGradient) {
      return mValue.mCanvasGradient.Value();
    }
    Uninit();
    mType = eCanvasGradient;
    return mValue.mCanvasGradient.SetValue();
  }

  inline bool
  IsCanvasGradient() const
  {
    return mType == eCanvasGradient;
  }

  inline NonNull<mozilla::dom::CanvasGradient>&
  GetAsCanvasGradient()
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  inline mozilla::dom::CanvasGradient&
  GetAsCanvasGradient() const
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eNull: {
        break;
      }
      case eCanvasPattern: {
        DestroyCanvasPattern();
        break;
      }
      case eCanvasGradient: {
        DestroyCanvasGradient();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyCanvasPattern()
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    mValue.mCanvasPattern.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyCanvasGradient()
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    mValue.mCanvasGradient.Destroy();
    mType = eUninitialized;
  }
};

class DoubleOrString
{
  friend class DoubleOrStringArgument;
  enum Type
  {
    eUninitialized,
    eDouble,
    eString
  };

  union Value
  {
    UnionMember<double > mDouble;
    UnionMember<binding_detail::FakeString > mString;

  };

  Type mType;
  Value mValue;

  DoubleOrString(const DoubleOrString&) = delete;
  void operator=(const DoubleOrString) = delete;
public:
  explicit inline DoubleOrString()
    : mType(eUninitialized)
  {
  }

  inline ~DoubleOrString()
  {
    Uninit();
  }

  inline double&
  RawSetAsDouble()
  {
    if (mType == eDouble) {
      return mValue.mDouble.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eDouble;
    return mValue.mDouble.SetValue();
  }

  inline double&
  SetAsDouble()
  {
    if (mType == eDouble) {
      return mValue.mDouble.Value();
    }
    Uninit();
    mType = eDouble;
    return mValue.mDouble.SetValue();
  }

  inline bool
  IsDouble() const
  {
    return mType == eDouble;
  }

  inline double&
  GetAsDouble()
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  inline double
  GetAsDouble() const
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eDouble: {
        DestroyDouble();
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyDouble()
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    mValue.mDouble.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }
};

class FileOrDirectory
{
  friend class FileOrDirectoryArgument;
  enum Type
  {
    eUninitialized,
    eFile,
    eDirectory
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::File> > mFile;
    UnionMember<NonNull<mozilla::dom::Directory> > mDirectory;

  };

  Type mType;
  Value mValue;

  FileOrDirectory(const FileOrDirectory&) = delete;
  void operator=(const FileOrDirectory) = delete;
public:
  explicit inline FileOrDirectory()
    : mType(eUninitialized)
  {
  }

  inline ~FileOrDirectory()
  {
    Uninit();
  }

  inline NonNull<mozilla::dom::File>&
  RawSetAsFile()
  {
    if (mType == eFile) {
      return mValue.mFile.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eFile;
    return mValue.mFile.SetValue();
  }

  inline NonNull<mozilla::dom::File>&
  SetAsFile()
  {
    if (mType == eFile) {
      return mValue.mFile.Value();
    }
    Uninit();
    mType = eFile;
    return mValue.mFile.SetValue();
  }

  inline bool
  IsFile() const
  {
    return mType == eFile;
  }

  inline NonNull<mozilla::dom::File>&
  GetAsFile()
  {
    MOZ_ASSERT(IsFile(), "Wrong type!");
    return mValue.mFile.Value();
  }

  inline mozilla::dom::File&
  GetAsFile() const
  {
    MOZ_ASSERT(IsFile(), "Wrong type!");
    return mValue.mFile.Value();
  }

  inline NonNull<mozilla::dom::Directory>&
  RawSetAsDirectory()
  {
    if (mType == eDirectory) {
      return mValue.mDirectory.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eDirectory;
    return mValue.mDirectory.SetValue();
  }

  inline NonNull<mozilla::dom::Directory>&
  SetAsDirectory()
  {
    if (mType == eDirectory) {
      return mValue.mDirectory.Value();
    }
    Uninit();
    mType = eDirectory;
    return mValue.mDirectory.SetValue();
  }

  inline bool
  IsDirectory() const
  {
    return mType == eDirectory;
  }

  inline NonNull<mozilla::dom::Directory>&
  GetAsDirectory()
  {
    MOZ_ASSERT(IsDirectory(), "Wrong type!");
    return mValue.mDirectory.Value();
  }

  inline mozilla::dom::Directory&
  GetAsDirectory() const
  {
    MOZ_ASSERT(IsDirectory(), "Wrong type!");
    return mValue.mDirectory.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eFile: {
        DestroyFile();
        break;
      }
      case eDirectory: {
        DestroyDirectory();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyFile()
  {
    MOZ_ASSERT(IsFile(), "Wrong type!");
    mValue.mFile.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyDirectory()
  {
    MOZ_ASSERT(IsDirectory(), "Wrong type!");
    mValue.mDirectory.Destroy();
    mType = eUninitialized;
  }
};

class FloatOrString
{
  friend class FloatOrStringArgument;
  enum Type
  {
    eUninitialized,
    eFloat,
    eString
  };

  union Value
  {
    UnionMember<float > mFloat;
    UnionMember<binding_detail::FakeString > mString;

  };

  Type mType;
  Value mValue;

  FloatOrString(const FloatOrString&) = delete;
  void operator=(const FloatOrString) = delete;
public:
  explicit inline FloatOrString()
    : mType(eUninitialized)
  {
  }

  inline ~FloatOrString()
  {
    Uninit();
  }

  inline float&
  RawSetAsFloat()
  {
    if (mType == eFloat) {
      return mValue.mFloat.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eFloat;
    return mValue.mFloat.SetValue();
  }

  inline float&
  SetAsFloat()
  {
    if (mType == eFloat) {
      return mValue.mFloat.Value();
    }
    Uninit();
    mType = eFloat;
    return mValue.mFloat.SetValue();
  }

  inline bool
  IsFloat() const
  {
    return mType == eFloat;
  }

  inline float&
  GetAsFloat()
  {
    MOZ_ASSERT(IsFloat(), "Wrong type!");
    return mValue.mFloat.Value();
  }

  inline float
  GetAsFloat() const
  {
    MOZ_ASSERT(IsFloat(), "Wrong type!");
    return mValue.mFloat.Value();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eFloat: {
        DestroyFloat();
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyFloat()
  {
    MOZ_ASSERT(IsFloat(), "Wrong type!");
    mValue.mFloat.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }
};

class HTMLElementOrLong
{
  friend class HTMLElementOrLongArgument;
  enum Type
  {
    eUninitialized,
    eHTMLElement,
    eLong
  };

  union Value
  {
    UnionMember<NonNull<nsGenericHTMLElement> > mHTMLElement;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  HTMLElementOrLong(const HTMLElementOrLong&) = delete;
  void operator=(const HTMLElementOrLong) = delete;
public:
  explicit inline HTMLElementOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~HTMLElementOrLong()
  {
    Uninit();
  }

  inline NonNull<nsGenericHTMLElement>&
  RawSetAsHTMLElement()
  {
    if (mType == eHTMLElement) {
      return mValue.mHTMLElement.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eHTMLElement;
    return mValue.mHTMLElement.SetValue();
  }

  inline NonNull<nsGenericHTMLElement>&
  SetAsHTMLElement()
  {
    if (mType == eHTMLElement) {
      return mValue.mHTMLElement.Value();
    }
    Uninit();
    mType = eHTMLElement;
    return mValue.mHTMLElement.SetValue();
  }

  inline bool
  IsHTMLElement() const
  {
    return mType == eHTMLElement;
  }

  inline NonNull<nsGenericHTMLElement>&
  GetAsHTMLElement()
  {
    MOZ_ASSERT(IsHTMLElement(), "Wrong type!");
    return mValue.mHTMLElement.Value();
  }

  inline nsGenericHTMLElement&
  GetAsHTMLElement() const
  {
    MOZ_ASSERT(IsHTMLElement(), "Wrong type!");
    return mValue.mHTMLElement.Value();
  }

  inline int32_t&
  RawSetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline int32_t&
  SetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    Uninit();
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eHTMLElement: {
        DestroyHTMLElement();
        break;
      }
      case eLong: {
        DestroyLong();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyHTMLElement()
  {
    MOZ_ASSERT(IsHTMLElement(), "Wrong type!");
    mValue.mHTMLElement.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    mValue.mLong.Destroy();
    mType = eUninitialized;
  }
};

class HTMLOptionElementOrHTMLOptGroupElement
{
  friend class HTMLOptionElementOrHTMLOptGroupElementArgument;
  enum Type
  {
    eUninitialized,
    eHTMLOptionElement,
    eHTMLOptGroupElement
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::HTMLOptionElement> > mHTMLOptionElement;
    UnionMember<NonNull<mozilla::dom::HTMLOptGroupElement> > mHTMLOptGroupElement;

  };

  Type mType;
  Value mValue;

  HTMLOptionElementOrHTMLOptGroupElement(const HTMLOptionElementOrHTMLOptGroupElement&) = delete;
  void operator=(const HTMLOptionElementOrHTMLOptGroupElement) = delete;
public:
  explicit inline HTMLOptionElementOrHTMLOptGroupElement()
    : mType(eUninitialized)
  {
  }

  inline ~HTMLOptionElementOrHTMLOptGroupElement()
  {
    Uninit();
  }

  inline NonNull<mozilla::dom::HTMLOptionElement>&
  RawSetAsHTMLOptionElement()
  {
    if (mType == eHTMLOptionElement) {
      return mValue.mHTMLOptionElement.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eHTMLOptionElement;
    return mValue.mHTMLOptionElement.SetValue();
  }

  inline NonNull<mozilla::dom::HTMLOptionElement>&
  SetAsHTMLOptionElement()
  {
    if (mType == eHTMLOptionElement) {
      return mValue.mHTMLOptionElement.Value();
    }
    Uninit();
    mType = eHTMLOptionElement;
    return mValue.mHTMLOptionElement.SetValue();
  }

  inline bool
  IsHTMLOptionElement() const
  {
    return mType == eHTMLOptionElement;
  }

  inline NonNull<mozilla::dom::HTMLOptionElement>&
  GetAsHTMLOptionElement()
  {
    MOZ_ASSERT(IsHTMLOptionElement(), "Wrong type!");
    return mValue.mHTMLOptionElement.Value();
  }

  inline mozilla::dom::HTMLOptionElement&
  GetAsHTMLOptionElement() const
  {
    MOZ_ASSERT(IsHTMLOptionElement(), "Wrong type!");
    return mValue.mHTMLOptionElement.Value();
  }

  inline NonNull<mozilla::dom::HTMLOptGroupElement>&
  RawSetAsHTMLOptGroupElement()
  {
    if (mType == eHTMLOptGroupElement) {
      return mValue.mHTMLOptGroupElement.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eHTMLOptGroupElement;
    return mValue.mHTMLOptGroupElement.SetValue();
  }

  inline NonNull<mozilla::dom::HTMLOptGroupElement>&
  SetAsHTMLOptGroupElement()
  {
    if (mType == eHTMLOptGroupElement) {
      return mValue.mHTMLOptGroupElement.Value();
    }
    Uninit();
    mType = eHTMLOptGroupElement;
    return mValue.mHTMLOptGroupElement.SetValue();
  }

  inline bool
  IsHTMLOptGroupElement() const
  {
    return mType == eHTMLOptGroupElement;
  }

  inline NonNull<mozilla::dom::HTMLOptGroupElement>&
  GetAsHTMLOptGroupElement()
  {
    MOZ_ASSERT(IsHTMLOptGroupElement(), "Wrong type!");
    return mValue.mHTMLOptGroupElement.Value();
  }

  inline mozilla::dom::HTMLOptGroupElement&
  GetAsHTMLOptGroupElement() const
  {
    MOZ_ASSERT(IsHTMLOptGroupElement(), "Wrong type!");
    return mValue.mHTMLOptGroupElement.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eHTMLOptionElement: {
        DestroyHTMLOptionElement();
        break;
      }
      case eHTMLOptGroupElement: {
        DestroyHTMLOptGroupElement();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyHTMLOptionElement()
  {
    MOZ_ASSERT(IsHTMLOptionElement(), "Wrong type!");
    mValue.mHTMLOptionElement.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyHTMLOptGroupElement()
  {
    MOZ_ASSERT(IsHTMLOptGroupElement(), "Wrong type!");
    mValue.mHTMLOptGroupElement.Destroy();
    mType = eUninitialized;
  }
};

class LongOrAnyMozMap
{
  friend class LongOrAnyMozMapArgument;
  enum Type
  {
    eUninitialized,
    eLong,
    eAnyMozMap
  };

  union Value
  {
    UnionMember<int32_t > mLong;
    UnionMember<MozMap<JS::Value> > mAnyMozMap;

  };

  Type mType;
  Value mValue;

  LongOrAnyMozMap(const LongOrAnyMozMap&) = delete;
  void operator=(const LongOrAnyMozMap) = delete;
public:
  explicit inline LongOrAnyMozMap()
    : mType(eUninitialized)
  {
  }

  inline ~LongOrAnyMozMap()
  {
    Uninit();
  }

  inline int32_t&
  RawSetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline int32_t&
  SetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    Uninit();
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline MozMap<JS::Value>&
  RawSetAsAnyMozMap()
  {
    if (mType == eAnyMozMap) {
      return mValue.mAnyMozMap.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eAnyMozMap;
    return mValue.mAnyMozMap.SetValue();
  }

  inline MozMap<JS::Value>&
  SetAsAnyMozMap()
  {
    if (mType == eAnyMozMap) {
      return mValue.mAnyMozMap.Value();
    }
    Uninit();
    mType = eAnyMozMap;
    return mValue.mAnyMozMap.SetValue();
  }

  inline bool
  IsAnyMozMap() const
  {
    return mType == eAnyMozMap;
  }

  inline MozMap<JS::Value>&
  GetAsAnyMozMap()
  {
    MOZ_ASSERT(IsAnyMozMap(), "Wrong type!");
    return mValue.mAnyMozMap.Value();
  }

  inline const MozMap<JS::Value>&
  GetAsAnyMozMap() const
  {
    MOZ_ASSERT(IsAnyMozMap(), "Wrong type!");
    return mValue.mAnyMozMap.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eLong: {
        DestroyLong();
        break;
      }
      case eAnyMozMap: {
        DestroyAnyMozMap();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    mValue.mLong.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyAnyMozMap()
  {
    MOZ_ASSERT(IsAnyMozMap(), "Wrong type!");
    mValue.mAnyMozMap.Destroy();
    mType = eUninitialized;
  }
};

class ObjectOrLong
{
  friend class ObjectOrLongArgument;
  enum Type
  {
    eUninitialized,
    eObject,
    eLong
  };

  union Value
  {
    UnionMember<JS::Rooted<JSObject*> > mObject;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  ObjectOrLong(const ObjectOrLong&) = delete;
  void operator=(const ObjectOrLong) = delete;
public:
  explicit inline ObjectOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~ObjectOrLong()
  {
    Uninit();
  }

  inline bool
  IsObject() const
  {
    return mType == eObject;
  }

  inline JS::Rooted<JSObject*>&
  GetAsObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline JSObject*
  GetAsObject() const
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline int32_t&
  RawSetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline int32_t&
  SetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType != eObject, "This will not play well with Rooted");
    Uninit();
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eObject: {
        DestroyObject();
        break;
      }
      case eLong: {
        DestroyLong();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    mValue.mObject.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    mValue.mLong.Destroy();
    mType = eUninitialized;
  }
};

class ObjectOrNullOrLong
{
  friend class ObjectOrNullOrLongArgument;
  enum Type
  {
    eUninitialized,
    eNull,
    eObject,
    eLong
  };

  union Value
  {
    UnionMember<JS::Rooted<JSObject*> > mObject;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  ObjectOrNullOrLong(const ObjectOrNullOrLong&) = delete;
  void operator=(const ObjectOrNullOrLong) = delete;
public:
  explicit inline ObjectOrNullOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~ObjectOrNullOrLong()
  {
    Uninit();
  }

  inline bool
  IsNull() const
  {
    return mType == eNull;
  }

  inline void
  SetNull()
  {
    Uninit();
    mType = eNull;
  }

  inline bool
  IsObject() const
  {
    return mType == eObject;
  }

  inline JS::Rooted<JSObject*>&
  GetAsObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline JSObject*
  GetAsObject() const
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline int32_t&
  RawSetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline int32_t&
  SetAsLong()
  {
    if (mType == eLong) {
      return mValue.mLong.Value();
    }
    MOZ_ASSERT(mType != eObject, "This will not play well with Rooted");
    Uninit();
    mType = eLong;
    return mValue.mLong.SetValue();
  }

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eNull: {
        break;
      }
      case eObject: {
        DestroyObject();
        break;
      }
      case eLong: {
        DestroyLong();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    mValue.mObject.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    mValue.mLong.Destroy();
    mType = eUninitialized;
  }
};

class StringOrBlobOrArrayBufferOrArrayBufferView
{
  friend class StringOrBlobOrArrayBufferOrArrayBufferViewArgument;
  enum Type
  {
    eUninitialized,
    eString,
    eBlob,
    eArrayBuffer,
    eArrayBufferView
  };

  union Value
  {
    UnionMember<binding_detail::FakeString > mString;
    UnionMember<NonNull<mozilla::dom::Blob> > mBlob;
    UnionMember<RootedTypedArray<ArrayBuffer> > mArrayBuffer;
    UnionMember<RootedTypedArray<ArrayBufferView> > mArrayBufferView;

  };

  Type mType;
  Value mValue;

  StringOrBlobOrArrayBufferOrArrayBufferView(const StringOrBlobOrArrayBufferOrArrayBufferView&) = delete;
  void operator=(const StringOrBlobOrArrayBufferOrArrayBufferView) = delete;
public:
  explicit inline StringOrBlobOrArrayBufferOrArrayBufferView()
    : mType(eUninitialized)
  {
  }

  inline ~StringOrBlobOrArrayBufferOrArrayBufferView()
  {
    Uninit();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline NonNull<mozilla::dom::Blob>&
  RawSetAsBlob()
  {
    if (mType == eBlob) {
      return mValue.mBlob.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eBlob;
    return mValue.mBlob.SetValue();
  }

  inline NonNull<mozilla::dom::Blob>&
  SetAsBlob()
  {
    if (mType == eBlob) {
      return mValue.mBlob.Value();
    }
    Uninit();
    mType = eBlob;
    return mValue.mBlob.SetValue();
  }

  inline bool
  IsBlob() const
  {
    return mType == eBlob;
  }

  inline NonNull<mozilla::dom::Blob>&
  GetAsBlob()
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  inline mozilla::dom::Blob&
  GetAsBlob() const
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  inline RootedTypedArray<ArrayBuffer>&
  RawSetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBuffer>&
  SetAsArrayBuffer(JSContext* cx)
  {
    if (mType == eArrayBuffer) {
      return mValue.mArrayBuffer.Value();
    }
    Uninit();
    mType = eArrayBuffer;
    return mValue.mArrayBuffer.SetValue(cx);
  }

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline RootedTypedArray<ArrayBuffer>&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline RootedTypedArray<ArrayBufferView>&
  RawSetAsArrayBufferView(JSContext* cx)
  {
    if (mType == eArrayBufferView) {
      return mValue.mArrayBufferView.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eArrayBufferView;
    return mValue.mArrayBufferView.SetValue(cx);
  }

  inline RootedTypedArray<ArrayBufferView>&
  SetAsArrayBufferView(JSContext* cx)
  {
    if (mType == eArrayBufferView) {
      return mValue.mArrayBufferView.Value();
    }
    Uninit();
    mType = eArrayBufferView;
    return mValue.mArrayBufferView.SetValue(cx);
  }

  inline bool
  IsArrayBufferView() const
  {
    return mType == eArrayBufferView;
  }

  inline RootedTypedArray<ArrayBufferView>&
  GetAsArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline ArrayBufferView const &
  GetAsArrayBufferView() const
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
      case eBlob: {
        DestroyBlob();
        break;
      }
      case eArrayBuffer: {
        DestroyArrayBuffer();
        break;
      }
      case eArrayBufferView: {
        DestroyArrayBufferView();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyBlob()
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    mValue.mBlob.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    mValue.mArrayBuffer.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    mValue.mArrayBufferView.Destroy();
    mType = eUninitialized;
  }
};

class StringOrObject
{
  friend class StringOrObjectArgument;
  enum Type
  {
    eUninitialized,
    eString,
    eObject
  };

  union Value
  {
    UnionMember<binding_detail::FakeString > mString;
    UnionMember<JS::Rooted<JSObject*> > mObject;

  };

  Type mType;
  Value mValue;

  StringOrObject(const StringOrObject&) = delete;
  void operator=(const StringOrObject) = delete;
public:
  explicit inline StringOrObject()
    : mType(eUninitialized)
  {
  }

  inline ~StringOrObject()
  {
    Uninit();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType != eObject, "This will not play well with Rooted");
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline bool
  IsObject() const
  {
    return mType == eObject;
  }

  inline JS::Rooted<JSObject*>&
  GetAsObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline JSObject*
  GetAsObject() const
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
      case eObject: {
        DestroyObject();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    mValue.mObject.Destroy();
    mType = eUninitialized;
  }
};

class StringOrStringSequence
{
  friend class StringOrStringSequenceArgument;
  enum Type
  {
    eUninitialized,
    eString,
    eStringSequence
  };

  union Value
  {
    UnionMember<binding_detail::FakeString > mString;
    UnionMember<binding_detail::AutoSequence<nsString> > mStringSequence;

  };

  Type mType;
  Value mValue;

  StringOrStringSequence(const StringOrStringSequence&) = delete;
  void operator=(const StringOrStringSequence) = delete;
public:
  explicit inline StringOrStringSequence()
    : mType(eUninitialized)
  {
  }

  inline ~StringOrStringSequence()
  {
    Uninit();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline binding_detail::AutoSequence<nsString>&
  RawSetAsStringSequence()
  {
    if (mType == eStringSequence) {
      return mValue.mStringSequence.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eStringSequence;
    return mValue.mStringSequence.SetValue();
  }

  inline binding_detail::AutoSequence<nsString>&
  SetAsStringSequence()
  {
    if (mType == eStringSequence) {
      return mValue.mStringSequence.Value();
    }
    Uninit();
    mType = eStringSequence;
    return mValue.mStringSequence.SetValue();
  }

  inline bool
  IsStringSequence() const
  {
    return mType == eStringSequence;
  }

  inline binding_detail::AutoSequence<nsString>&
  GetAsStringSequence()
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  inline const Sequence<nsString>&
  GetAsStringSequence() const
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
      case eStringSequence: {
        DestroyStringSequence();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyStringSequence()
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    mValue.mStringSequence.Destroy();
    mType = eUninitialized;
  }
};

class UnrestrictedDoubleOrString
{
  friend class UnrestrictedDoubleOrStringArgument;
  enum Type
  {
    eUninitialized,
    eUnrestrictedDouble,
    eString
  };

  union Value
  {
    UnionMember<double > mUnrestrictedDouble;
    UnionMember<binding_detail::FakeString > mString;

  };

  Type mType;
  Value mValue;

  UnrestrictedDoubleOrString(const UnrestrictedDoubleOrString&) = delete;
  void operator=(const UnrestrictedDoubleOrString) = delete;
public:
  explicit inline UnrestrictedDoubleOrString()
    : mType(eUninitialized)
  {
  }

  inline ~UnrestrictedDoubleOrString()
  {
    Uninit();
  }

  inline double&
  RawSetAsUnrestrictedDouble()
  {
    if (mType == eUnrestrictedDouble) {
      return mValue.mUnrestrictedDouble.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eUnrestrictedDouble;
    return mValue.mUnrestrictedDouble.SetValue();
  }

  inline double&
  SetAsUnrestrictedDouble()
  {
    if (mType == eUnrestrictedDouble) {
      return mValue.mUnrestrictedDouble.Value();
    }
    Uninit();
    mType = eUnrestrictedDouble;
    return mValue.mUnrestrictedDouble.SetValue();
  }

  inline bool
  IsUnrestrictedDouble() const
  {
    return mType == eUnrestrictedDouble;
  }

  inline double&
  GetAsUnrestrictedDouble()
  {
    MOZ_ASSERT(IsUnrestrictedDouble(), "Wrong type!");
    return mValue.mUnrestrictedDouble.Value();
  }

  inline double
  GetAsUnrestrictedDouble() const
  {
    MOZ_ASSERT(IsUnrestrictedDouble(), "Wrong type!");
    return mValue.mUnrestrictedDouble.Value();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eUnrestrictedDouble: {
        DestroyUnrestrictedDouble();
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyUnrestrictedDouble()
  {
    MOZ_ASSERT(IsUnrestrictedDouble(), "Wrong type!");
    mValue.mUnrestrictedDouble.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }
};

class UnrestrictedFloatOrString
{
  friend class UnrestrictedFloatOrStringArgument;
  enum Type
  {
    eUninitialized,
    eUnrestrictedFloat,
    eString
  };

  union Value
  {
    UnionMember<float > mUnrestrictedFloat;
    UnionMember<binding_detail::FakeString > mString;

  };

  Type mType;
  Value mValue;

  UnrestrictedFloatOrString(const UnrestrictedFloatOrString&) = delete;
  void operator=(const UnrestrictedFloatOrString) = delete;
public:
  explicit inline UnrestrictedFloatOrString()
    : mType(eUninitialized)
  {
  }

  inline ~UnrestrictedFloatOrString()
  {
    Uninit();
  }

  inline float&
  RawSetAsUnrestrictedFloat()
  {
    if (mType == eUnrestrictedFloat) {
      return mValue.mUnrestrictedFloat.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eUnrestrictedFloat;
    return mValue.mUnrestrictedFloat.SetValue();
  }

  inline float&
  SetAsUnrestrictedFloat()
  {
    if (mType == eUnrestrictedFloat) {
      return mValue.mUnrestrictedFloat.Value();
    }
    Uninit();
    mType = eUnrestrictedFloat;
    return mValue.mUnrestrictedFloat.SetValue();
  }

  inline bool
  IsUnrestrictedFloat() const
  {
    return mType == eUnrestrictedFloat;
  }

  inline float&
  GetAsUnrestrictedFloat()
  {
    MOZ_ASSERT(IsUnrestrictedFloat(), "Wrong type!");
    return mValue.mUnrestrictedFloat.Value();
  }

  inline float
  GetAsUnrestrictedFloat() const
  {
    MOZ_ASSERT(IsUnrestrictedFloat(), "Wrong type!");
    return mValue.mUnrestrictedFloat.Value();
  }

  inline binding_detail::FakeString&
  RawSetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline binding_detail::FakeString&
  SetAsString()
  {
    if (mType == eString) {
      return mValue.mString.Value();
    }
    Uninit();
    mType = eString;
    return mValue.mString.SetValue();
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline binding_detail::FakeString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline const nsAString&
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eUnrestrictedFloat: {
        DestroyUnrestrictedFloat();
        break;
      }
      case eString: {
        DestroyString();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyUnrestrictedFloat()
  {
    MOZ_ASSERT(IsUnrestrictedFloat(), "Wrong type!");
    mValue.mUnrestrictedFloat.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    mValue.mString.Destroy();
    mType = eUninitialized;
  }
};

class OwningArrayBufferOrArrayBufferViewOrBlobOrString : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningArrayBufferOrArrayBufferViewOrBlobOrString& aUnion);
  enum Type
  {
    eUninitialized,
    eArrayBuffer,
    eArrayBufferView,
    eBlob,
    eString
  };

  union Value
  {
    UnionMember<ArrayBuffer > mArrayBuffer;
    UnionMember<ArrayBufferView > mArrayBufferView;
    UnionMember<OwningNonNull<mozilla::dom::Blob> > mBlob;
    UnionMember<nsString > mString;

  };

  Type mType;
  Value mValue;

  OwningArrayBufferOrArrayBufferViewOrBlobOrString(const OwningArrayBufferOrArrayBufferViewOrBlobOrString&) = delete;
  void operator=(const OwningArrayBufferOrArrayBufferViewOrBlobOrString) = delete;
public:
  explicit inline OwningArrayBufferOrArrayBufferViewOrBlobOrString()
    : mType(eUninitialized)
  {
  }

  inline ~OwningArrayBufferOrArrayBufferViewOrBlobOrString()
  {
    Uninit();
  }

  ArrayBuffer&
  RawSetAsArrayBuffer();

  ArrayBuffer&
  SetAsArrayBuffer();

  bool
  TrySetToArrayBuffer(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline ArrayBuffer&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  ArrayBufferView&
  RawSetAsArrayBufferView();

  ArrayBufferView&
  SetAsArrayBufferView();

  bool
  TrySetToArrayBufferView(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsArrayBufferView() const
  {
    return mType == eArrayBufferView;
  }

  inline ArrayBufferView&
  GetAsArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline ArrayBufferView const &
  GetAsArrayBufferView() const
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  OwningNonNull<mozilla::dom::Blob>&
  RawSetAsBlob();

  OwningNonNull<mozilla::dom::Blob>&
  SetAsBlob();

  bool
  TrySetToBlob(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsBlob() const
  {
    return mType == eBlob;
  }

  inline OwningNonNull<mozilla::dom::Blob>&
  GetAsBlob()
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  inline OwningNonNull<mozilla::dom::Blob> const &
  GetAsBlob() const
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyArrayBuffer();

  void
  DestroyArrayBufferView();

  void
  DestroyBlob();

  void
  DestroyString();
};

class OwningArrayBufferOrLong : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningArrayBufferOrLong& aUnion);
  enum Type
  {
    eUninitialized,
    eArrayBuffer,
    eLong
  };

  union Value
  {
    UnionMember<ArrayBuffer > mArrayBuffer;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  OwningArrayBufferOrLong(const OwningArrayBufferOrLong&) = delete;
  void operator=(const OwningArrayBufferOrLong) = delete;
public:
  explicit inline OwningArrayBufferOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~OwningArrayBufferOrLong()
  {
    Uninit();
  }

  ArrayBuffer&
  RawSetAsArrayBuffer();

  ArrayBuffer&
  SetAsArrayBuffer();

  bool
  TrySetToArrayBuffer(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline ArrayBuffer&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  int32_t&
  RawSetAsLong();

  int32_t&
  SetAsLong();

  bool
  TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t const &
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyArrayBuffer();

  void
  DestroyLong();
};

class OwningArrayBufferViewOrArrayBuffer : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningArrayBufferViewOrArrayBuffer& aUnion);
  enum Type
  {
    eUninitialized,
    eArrayBufferView,
    eArrayBuffer
  };

  union Value
  {
    UnionMember<ArrayBufferView > mArrayBufferView;
    UnionMember<ArrayBuffer > mArrayBuffer;

  };

  Type mType;
  Value mValue;

  OwningArrayBufferViewOrArrayBuffer(const OwningArrayBufferViewOrArrayBuffer&) = delete;
  void operator=(const OwningArrayBufferViewOrArrayBuffer) = delete;
public:
  explicit inline OwningArrayBufferViewOrArrayBuffer()
    : mType(eUninitialized)
  {
  }

  inline ~OwningArrayBufferViewOrArrayBuffer()
  {
    Uninit();
  }

  ArrayBufferView&
  RawSetAsArrayBufferView();

  ArrayBufferView&
  SetAsArrayBufferView();

  bool
  TrySetToArrayBufferView(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsArrayBufferView() const
  {
    return mType == eArrayBufferView;
  }

  inline ArrayBufferView&
  GetAsArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline ArrayBufferView const &
  GetAsArrayBufferView() const
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  ArrayBuffer&
  RawSetAsArrayBuffer();

  ArrayBuffer&
  SetAsArrayBuffer();

  bool
  TrySetToArrayBuffer(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline ArrayBuffer&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyArrayBufferView();

  void
  DestroyArrayBuffer();
};

class OwningByteStringOrLong : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningByteStringOrLong& aUnion);
  enum Type
  {
    eUninitialized,
    eByteString,
    eLong
  };

  union Value
  {
    UnionMember<nsCString > mByteString;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningByteStringOrLong()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningByteStringOrLong(const OwningByteStringOrLong& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningByteStringOrLong()
  {
    Uninit();
  }

  nsCString&
  RawSetAsByteString();

  nsCString&
  SetAsByteString();

  bool
  TrySetToByteString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsByteString() const
  {
    return mType == eByteString;
  }

  inline nsCString&
  GetAsByteString()
  {
    MOZ_ASSERT(IsByteString(), "Wrong type!");
    return mValue.mByteString.Value();
  }

  inline nsCString const &
  GetAsByteString() const
  {
    MOZ_ASSERT(IsByteString(), "Wrong type!");
    return mValue.mByteString.Value();
  }

  int32_t&
  RawSetAsLong();

  int32_t&
  SetAsLong();

  bool
  TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t const &
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningByteStringOrLong& aOther);

private:
  void
  DestroyByteString();

  void
  DestroyLong();
};

class OwningCanvasPatternOrCanvasGradient : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningCanvasPatternOrCanvasGradient& aUnion);
  enum Type
  {
    eUninitialized,
    eCanvasPattern,
    eCanvasGradient
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::CanvasPattern> > mCanvasPattern;
    UnionMember<OwningNonNull<mozilla::dom::CanvasGradient> > mCanvasGradient;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningCanvasPatternOrCanvasGradient()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningCanvasPatternOrCanvasGradient(const OwningCanvasPatternOrCanvasGradient& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningCanvasPatternOrCanvasGradient()
  {
    Uninit();
  }

  OwningNonNull<mozilla::dom::CanvasPattern>&
  RawSetAsCanvasPattern();

  OwningNonNull<mozilla::dom::CanvasPattern>&
  SetAsCanvasPattern();

  bool
  TrySetToCanvasPattern(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsCanvasPattern() const
  {
    return mType == eCanvasPattern;
  }

  inline OwningNonNull<mozilla::dom::CanvasPattern>&
  GetAsCanvasPattern()
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  inline OwningNonNull<mozilla::dom::CanvasPattern> const &
  GetAsCanvasPattern() const
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  OwningNonNull<mozilla::dom::CanvasGradient>&
  RawSetAsCanvasGradient();

  OwningNonNull<mozilla::dom::CanvasGradient>&
  SetAsCanvasGradient();

  bool
  TrySetToCanvasGradient(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsCanvasGradient() const
  {
    return mType == eCanvasGradient;
  }

  inline OwningNonNull<mozilla::dom::CanvasGradient>&
  GetAsCanvasGradient()
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  inline OwningNonNull<mozilla::dom::CanvasGradient> const &
  GetAsCanvasGradient() const
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningCanvasPatternOrCanvasGradient& aOther);

private:
  void
  DestroyCanvasPattern();

  void
  DestroyCanvasGradient();
};

class OwningCanvasPatternOrNullOrCanvasGradient : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningCanvasPatternOrNullOrCanvasGradient& aUnion);
  enum Type
  {
    eUninitialized,
    eNull,
    eCanvasPattern,
    eCanvasGradient
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::CanvasPattern> > mCanvasPattern;
    UnionMember<OwningNonNull<mozilla::dom::CanvasGradient> > mCanvasGradient;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningCanvasPatternOrNullOrCanvasGradient()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningCanvasPatternOrNullOrCanvasGradient(const OwningCanvasPatternOrNullOrCanvasGradient& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningCanvasPatternOrNullOrCanvasGradient()
  {
    Uninit();
  }

  inline bool
  IsNull() const
  {
    return mType == eNull;
  }

  inline void
  SetNull()
  {
    Uninit();
    mType = eNull;
  }

  OwningNonNull<mozilla::dom::CanvasPattern>&
  RawSetAsCanvasPattern();

  OwningNonNull<mozilla::dom::CanvasPattern>&
  SetAsCanvasPattern();

  bool
  TrySetToCanvasPattern(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsCanvasPattern() const
  {
    return mType == eCanvasPattern;
  }

  inline OwningNonNull<mozilla::dom::CanvasPattern>&
  GetAsCanvasPattern()
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  inline OwningNonNull<mozilla::dom::CanvasPattern> const &
  GetAsCanvasPattern() const
  {
    MOZ_ASSERT(IsCanvasPattern(), "Wrong type!");
    return mValue.mCanvasPattern.Value();
  }

  OwningNonNull<mozilla::dom::CanvasGradient>&
  RawSetAsCanvasGradient();

  OwningNonNull<mozilla::dom::CanvasGradient>&
  SetAsCanvasGradient();

  bool
  TrySetToCanvasGradient(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsCanvasGradient() const
  {
    return mType == eCanvasGradient;
  }

  inline OwningNonNull<mozilla::dom::CanvasGradient>&
  GetAsCanvasGradient()
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  inline OwningNonNull<mozilla::dom::CanvasGradient> const &
  GetAsCanvasGradient() const
  {
    MOZ_ASSERT(IsCanvasGradient(), "Wrong type!");
    return mValue.mCanvasGradient.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningCanvasPatternOrNullOrCanvasGradient& aOther);

private:
  void
  DestroyCanvasPattern();

  void
  DestroyCanvasGradient();
};

class OwningDoubleOrString : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningDoubleOrString& aUnion);
  enum Type
  {
    eUninitialized,
    eDouble,
    eString
  };

  union Value
  {
    UnionMember<double > mDouble;
    UnionMember<nsString > mString;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningDoubleOrString()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningDoubleOrString(const OwningDoubleOrString& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningDoubleOrString()
  {
    Uninit();
  }

  double&
  RawSetAsDouble();

  double&
  SetAsDouble();

  bool
  TrySetToDouble(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsDouble() const
  {
    return mType == eDouble;
  }

  inline double&
  GetAsDouble()
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  inline double const &
  GetAsDouble() const
  {
    MOZ_ASSERT(IsDouble(), "Wrong type!");
    return mValue.mDouble.Value();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningDoubleOrString& aOther);

private:
  void
  DestroyDouble();

  void
  DestroyString();
};

class OwningFileOrDirectory : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningFileOrDirectory& aUnion);
  enum Type
  {
    eUninitialized,
    eFile,
    eDirectory
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::File> > mFile;
    UnionMember<OwningNonNull<mozilla::dom::Directory> > mDirectory;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningFileOrDirectory()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningFileOrDirectory(const OwningFileOrDirectory& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningFileOrDirectory()
  {
    Uninit();
  }

  OwningNonNull<mozilla::dom::File>&
  RawSetAsFile();

  OwningNonNull<mozilla::dom::File>&
  SetAsFile();

  bool
  TrySetToFile(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsFile() const
  {
    return mType == eFile;
  }

  inline OwningNonNull<mozilla::dom::File>&
  GetAsFile()
  {
    MOZ_ASSERT(IsFile(), "Wrong type!");
    return mValue.mFile.Value();
  }

  inline OwningNonNull<mozilla::dom::File> const &
  GetAsFile() const
  {
    MOZ_ASSERT(IsFile(), "Wrong type!");
    return mValue.mFile.Value();
  }

  OwningNonNull<mozilla::dom::Directory>&
  RawSetAsDirectory();

  OwningNonNull<mozilla::dom::Directory>&
  SetAsDirectory();

  bool
  TrySetToDirectory(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsDirectory() const
  {
    return mType == eDirectory;
  }

  inline OwningNonNull<mozilla::dom::Directory>&
  GetAsDirectory()
  {
    MOZ_ASSERT(IsDirectory(), "Wrong type!");
    return mValue.mDirectory.Value();
  }

  inline OwningNonNull<mozilla::dom::Directory> const &
  GetAsDirectory() const
  {
    MOZ_ASSERT(IsDirectory(), "Wrong type!");
    return mValue.mDirectory.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningFileOrDirectory& aOther);

private:
  void
  DestroyFile();

  void
  DestroyDirectory();
};

class OwningFloatOrString : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningFloatOrString& aUnion);
  enum Type
  {
    eUninitialized,
    eFloat,
    eString
  };

  union Value
  {
    UnionMember<float > mFloat;
    UnionMember<nsString > mString;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningFloatOrString()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningFloatOrString(const OwningFloatOrString& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningFloatOrString()
  {
    Uninit();
  }

  float&
  RawSetAsFloat();

  float&
  SetAsFloat();

  bool
  TrySetToFloat(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsFloat() const
  {
    return mType == eFloat;
  }

  inline float&
  GetAsFloat()
  {
    MOZ_ASSERT(IsFloat(), "Wrong type!");
    return mValue.mFloat.Value();
  }

  inline float const &
  GetAsFloat() const
  {
    MOZ_ASSERT(IsFloat(), "Wrong type!");
    return mValue.mFloat.Value();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningFloatOrString& aOther);

private:
  void
  DestroyFloat();

  void
  DestroyString();
};

class OwningHTMLElementOrLong : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningHTMLElementOrLong& aUnion);
  enum Type
  {
    eUninitialized,
    eHTMLElement,
    eLong
  };

  union Value
  {
    UnionMember<OwningNonNull<nsGenericHTMLElement> > mHTMLElement;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningHTMLElementOrLong()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningHTMLElementOrLong(const OwningHTMLElementOrLong& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningHTMLElementOrLong()
  {
    Uninit();
  }

  OwningNonNull<nsGenericHTMLElement>&
  RawSetAsHTMLElement();

  OwningNonNull<nsGenericHTMLElement>&
  SetAsHTMLElement();

  bool
  TrySetToHTMLElement(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsHTMLElement() const
  {
    return mType == eHTMLElement;
  }

  inline OwningNonNull<nsGenericHTMLElement>&
  GetAsHTMLElement()
  {
    MOZ_ASSERT(IsHTMLElement(), "Wrong type!");
    return mValue.mHTMLElement.Value();
  }

  inline OwningNonNull<nsGenericHTMLElement> const &
  GetAsHTMLElement() const
  {
    MOZ_ASSERT(IsHTMLElement(), "Wrong type!");
    return mValue.mHTMLElement.Value();
  }

  int32_t&
  RawSetAsLong();

  int32_t&
  SetAsLong();

  bool
  TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t const &
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningHTMLElementOrLong& aOther);

private:
  void
  DestroyHTMLElement();

  void
  DestroyLong();
};

class OwningHTMLOptionElementOrHTMLOptGroupElement : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningHTMLOptionElementOrHTMLOptGroupElement& aUnion);
  enum Type
  {
    eUninitialized,
    eHTMLOptionElement,
    eHTMLOptGroupElement
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::HTMLOptionElement> > mHTMLOptionElement;
    UnionMember<OwningNonNull<mozilla::dom::HTMLOptGroupElement> > mHTMLOptGroupElement;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningHTMLOptionElementOrHTMLOptGroupElement()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningHTMLOptionElementOrHTMLOptGroupElement(const OwningHTMLOptionElementOrHTMLOptGroupElement& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningHTMLOptionElementOrHTMLOptGroupElement()
  {
    Uninit();
  }

  OwningNonNull<mozilla::dom::HTMLOptionElement>&
  RawSetAsHTMLOptionElement();

  OwningNonNull<mozilla::dom::HTMLOptionElement>&
  SetAsHTMLOptionElement();

  bool
  TrySetToHTMLOptionElement(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsHTMLOptionElement() const
  {
    return mType == eHTMLOptionElement;
  }

  inline OwningNonNull<mozilla::dom::HTMLOptionElement>&
  GetAsHTMLOptionElement()
  {
    MOZ_ASSERT(IsHTMLOptionElement(), "Wrong type!");
    return mValue.mHTMLOptionElement.Value();
  }

  inline OwningNonNull<mozilla::dom::HTMLOptionElement> const &
  GetAsHTMLOptionElement() const
  {
    MOZ_ASSERT(IsHTMLOptionElement(), "Wrong type!");
    return mValue.mHTMLOptionElement.Value();
  }

  OwningNonNull<mozilla::dom::HTMLOptGroupElement>&
  RawSetAsHTMLOptGroupElement();

  OwningNonNull<mozilla::dom::HTMLOptGroupElement>&
  SetAsHTMLOptGroupElement();

  bool
  TrySetToHTMLOptGroupElement(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsHTMLOptGroupElement() const
  {
    return mType == eHTMLOptGroupElement;
  }

  inline OwningNonNull<mozilla::dom::HTMLOptGroupElement>&
  GetAsHTMLOptGroupElement()
  {
    MOZ_ASSERT(IsHTMLOptGroupElement(), "Wrong type!");
    return mValue.mHTMLOptGroupElement.Value();
  }

  inline OwningNonNull<mozilla::dom::HTMLOptGroupElement> const &
  GetAsHTMLOptGroupElement() const
  {
    MOZ_ASSERT(IsHTMLOptGroupElement(), "Wrong type!");
    return mValue.mHTMLOptGroupElement.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningHTMLOptionElementOrHTMLOptGroupElement& aOther);

private:
  void
  DestroyHTMLOptionElement();

  void
  DestroyHTMLOptGroupElement();
};

class OwningLongOrAnyMozMap : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningLongOrAnyMozMap& aUnion);
  enum Type
  {
    eUninitialized,
    eLong,
    eAnyMozMap
  };

  union Value
  {
    UnionMember<int32_t > mLong;
    UnionMember<MozMap<JS::Value> > mAnyMozMap;

  };

  Type mType;
  Value mValue;

  OwningLongOrAnyMozMap(const OwningLongOrAnyMozMap&) = delete;
  void operator=(const OwningLongOrAnyMozMap) = delete;
public:
  explicit inline OwningLongOrAnyMozMap()
    : mType(eUninitialized)
  {
  }

  inline ~OwningLongOrAnyMozMap()
  {
    Uninit();
  }

  int32_t&
  RawSetAsLong();

  int32_t&
  SetAsLong();

  bool
  TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t const &
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  MozMap<JS::Value>&
  RawSetAsAnyMozMap();

  MozMap<JS::Value>&
  SetAsAnyMozMap();

  bool
  TrySetToAnyMozMap(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsAnyMozMap() const
  {
    return mType == eAnyMozMap;
  }

  inline MozMap<JS::Value>&
  GetAsAnyMozMap()
  {
    MOZ_ASSERT(IsAnyMozMap(), "Wrong type!");
    return mValue.mAnyMozMap.Value();
  }

  inline MozMap<JS::Value> const &
  GetAsAnyMozMap() const
  {
    MOZ_ASSERT(IsAnyMozMap(), "Wrong type!");
    return mValue.mAnyMozMap.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyLong();

  void
  DestroyAnyMozMap();
};

class OwningObjectOrLong : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningObjectOrLong& aUnion);
  enum Type
  {
    eUninitialized,
    eObject,
    eLong
  };

  union Value
  {
    UnionMember<JSObject* > mObject;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  OwningObjectOrLong(const OwningObjectOrLong&) = delete;
  void operator=(const OwningObjectOrLong) = delete;
public:
  explicit inline OwningObjectOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~OwningObjectOrLong()
  {
    Uninit();
  }

  JSObject*&
  RawSetAsObject();

  JSObject*&
  SetAsObject();

  inline bool
  SetToObject(JSContext* cx, JSObject* obj, bool passedToJSImpl = false)
  {
    MOZ_ASSERT(mType == eUninitialized);
    mValue.mObject.SetValue(obj);
    mType = eObject;
    if (passedToJSImpl && !CallerSubsumes(obj)) {
      ThrowErrorMessage(cx, MSG_PERMISSION_DENIED_TO_PASS_ARG, "%s");
      return false;
    }
    return true;
  }

  inline bool
  IsObject() const
  {
    return mType == eObject;
  }

  inline JSObject*&
  GetAsObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline JSObject* const &
  GetAsObject() const
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  int32_t&
  RawSetAsLong();

  int32_t&
  SetAsLong();

  bool
  TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t const &
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyObject();

  void
  DestroyLong();
};

class OwningObjectOrNullOrLong : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningObjectOrNullOrLong& aUnion);
  enum Type
  {
    eUninitialized,
    eNull,
    eObject,
    eLong
  };

  union Value
  {
    UnionMember<JSObject* > mObject;
    UnionMember<int32_t > mLong;

  };

  Type mType;
  Value mValue;

  OwningObjectOrNullOrLong(const OwningObjectOrNullOrLong&) = delete;
  void operator=(const OwningObjectOrNullOrLong) = delete;
public:
  explicit inline OwningObjectOrNullOrLong()
    : mType(eUninitialized)
  {
  }

  inline ~OwningObjectOrNullOrLong()
  {
    Uninit();
  }

  inline bool
  IsNull() const
  {
    return mType == eNull;
  }

  inline void
  SetNull()
  {
    Uninit();
    mType = eNull;
  }

  JSObject*&
  RawSetAsObject();

  JSObject*&
  SetAsObject();

  inline bool
  SetToObject(JSContext* cx, JSObject* obj, bool passedToJSImpl = false)
  {
    MOZ_ASSERT(mType == eUninitialized);
    mValue.mObject.SetValue(obj);
    mType = eObject;
    if (passedToJSImpl && !CallerSubsumes(obj)) {
      ThrowErrorMessage(cx, MSG_PERMISSION_DENIED_TO_PASS_ARG, "%s");
      return false;
    }
    return true;
  }

  inline bool
  IsObject() const
  {
    return mType == eObject;
  }

  inline JSObject*&
  GetAsObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline JSObject* const &
  GetAsObject() const
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  int32_t&
  RawSetAsLong();

  int32_t&
  SetAsLong();

  bool
  TrySetToLong(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsLong() const
  {
    return mType == eLong;
  }

  inline int32_t&
  GetAsLong()
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  inline int32_t const &
  GetAsLong() const
  {
    MOZ_ASSERT(IsLong(), "Wrong type!");
    return mValue.mLong.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyObject();

  void
  DestroyLong();
};

class OwningStringOrBlobOrArrayBufferOrArrayBufferView : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningStringOrBlobOrArrayBufferOrArrayBufferView& aUnion);
  enum Type
  {
    eUninitialized,
    eString,
    eBlob,
    eArrayBuffer,
    eArrayBufferView
  };

  union Value
  {
    UnionMember<nsString > mString;
    UnionMember<OwningNonNull<mozilla::dom::Blob> > mBlob;
    UnionMember<ArrayBuffer > mArrayBuffer;
    UnionMember<ArrayBufferView > mArrayBufferView;

  };

  Type mType;
  Value mValue;

  OwningStringOrBlobOrArrayBufferOrArrayBufferView(const OwningStringOrBlobOrArrayBufferOrArrayBufferView&) = delete;
  void operator=(const OwningStringOrBlobOrArrayBufferOrArrayBufferView) = delete;
public:
  explicit inline OwningStringOrBlobOrArrayBufferOrArrayBufferView()
    : mType(eUninitialized)
  {
  }

  inline ~OwningStringOrBlobOrArrayBufferOrArrayBufferView()
  {
    Uninit();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  OwningNonNull<mozilla::dom::Blob>&
  RawSetAsBlob();

  OwningNonNull<mozilla::dom::Blob>&
  SetAsBlob();

  bool
  TrySetToBlob(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsBlob() const
  {
    return mType == eBlob;
  }

  inline OwningNonNull<mozilla::dom::Blob>&
  GetAsBlob()
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  inline OwningNonNull<mozilla::dom::Blob> const &
  GetAsBlob() const
  {
    MOZ_ASSERT(IsBlob(), "Wrong type!");
    return mValue.mBlob.Value();
  }

  ArrayBuffer&
  RawSetAsArrayBuffer();

  ArrayBuffer&
  SetAsArrayBuffer();

  bool
  TrySetToArrayBuffer(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsArrayBuffer() const
  {
    return mType == eArrayBuffer;
  }

  inline ArrayBuffer&
  GetAsArrayBuffer()
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  inline ArrayBuffer const &
  GetAsArrayBuffer() const
  {
    MOZ_ASSERT(IsArrayBuffer(), "Wrong type!");
    return mValue.mArrayBuffer.Value();
  }

  ArrayBufferView&
  RawSetAsArrayBufferView();

  ArrayBufferView&
  SetAsArrayBufferView();

  bool
  TrySetToArrayBufferView(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsArrayBufferView() const
  {
    return mType == eArrayBufferView;
  }

  inline ArrayBufferView&
  GetAsArrayBufferView()
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  inline ArrayBufferView const &
  GetAsArrayBufferView() const
  {
    MOZ_ASSERT(IsArrayBufferView(), "Wrong type!");
    return mValue.mArrayBufferView.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyString();

  void
  DestroyBlob();

  void
  DestroyArrayBuffer();

  void
  DestroyArrayBufferView();
};

class OwningStringOrObject : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningStringOrObject& aUnion);
  enum Type
  {
    eUninitialized,
    eString,
    eObject
  };

  union Value
  {
    UnionMember<nsString > mString;
    UnionMember<JSObject* > mObject;

  };

  Type mType;
  Value mValue;

  OwningStringOrObject(const OwningStringOrObject&) = delete;
  void operator=(const OwningStringOrObject) = delete;
public:
  explicit inline OwningStringOrObject()
    : mType(eUninitialized)
  {
  }

  inline ~OwningStringOrObject()
  {
    Uninit();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  JSObject*&
  RawSetAsObject();

  JSObject*&
  SetAsObject();

  inline bool
  SetToObject(JSContext* cx, JSObject* obj, bool passedToJSImpl = false)
  {
    MOZ_ASSERT(mType == eUninitialized);
    mValue.mObject.SetValue(obj);
    mType = eObject;
    if (passedToJSImpl && !CallerSubsumes(obj)) {
      ThrowErrorMessage(cx, MSG_PERMISSION_DENIED_TO_PASS_ARG, "%s");
      return false;
    }
    return true;
  }

  inline bool
  IsObject() const
  {
    return mType == eObject;
  }

  inline JSObject*&
  GetAsObject()
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  inline JSObject* const &
  GetAsObject() const
  {
    MOZ_ASSERT(IsObject(), "Wrong type!");
    return mValue.mObject.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

private:
  void
  DestroyString();

  void
  DestroyObject();
};

class OwningStringOrStringSequence : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningStringOrStringSequence& aUnion);
  enum Type
  {
    eUninitialized,
    eString,
    eStringSequence
  };

  union Value
  {
    UnionMember<nsString > mString;
    UnionMember<Sequence<nsString> > mStringSequence;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningStringOrStringSequence()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningStringOrStringSequence(const OwningStringOrStringSequence& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningStringOrStringSequence()
  {
    Uninit();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  Sequence<nsString>&
  RawSetAsStringSequence();

  Sequence<nsString>&
  SetAsStringSequence();

  bool
  TrySetToStringSequence(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsStringSequence() const
  {
    return mType == eStringSequence;
  }

  inline Sequence<nsString>&
  GetAsStringSequence()
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  inline Sequence<nsString> const &
  GetAsStringSequence() const
  {
    MOZ_ASSERT(IsStringSequence(), "Wrong type!");
    return mValue.mStringSequence.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningStringOrStringSequence& aOther);

private:
  void
  DestroyString();

  void
  DestroyStringSequence();
};

class OwningUnrestrictedDoubleOrString : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningUnrestrictedDoubleOrString& aUnion);
  enum Type
  {
    eUninitialized,
    eUnrestrictedDouble,
    eString
  };

  union Value
  {
    UnionMember<double > mUnrestrictedDouble;
    UnionMember<nsString > mString;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningUnrestrictedDoubleOrString()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningUnrestrictedDoubleOrString(const OwningUnrestrictedDoubleOrString& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningUnrestrictedDoubleOrString()
  {
    Uninit();
  }

  double&
  RawSetAsUnrestrictedDouble();

  double&
  SetAsUnrestrictedDouble();

  bool
  TrySetToUnrestrictedDouble(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsUnrestrictedDouble() const
  {
    return mType == eUnrestrictedDouble;
  }

  inline double&
  GetAsUnrestrictedDouble()
  {
    MOZ_ASSERT(IsUnrestrictedDouble(), "Wrong type!");
    return mValue.mUnrestrictedDouble.Value();
  }

  inline double const &
  GetAsUnrestrictedDouble() const
  {
    MOZ_ASSERT(IsUnrestrictedDouble(), "Wrong type!");
    return mValue.mUnrestrictedDouble.Value();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningUnrestrictedDoubleOrString& aOther);

private:
  void
  DestroyUnrestrictedDouble();

  void
  DestroyString();
};

class OwningUnrestrictedFloatOrString : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningUnrestrictedFloatOrString& aUnion);
  enum Type
  {
    eUninitialized,
    eUnrestrictedFloat,
    eString
  };

  union Value
  {
    UnionMember<float > mUnrestrictedFloat;
    UnionMember<nsString > mString;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningUnrestrictedFloatOrString()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningUnrestrictedFloatOrString(const OwningUnrestrictedFloatOrString& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningUnrestrictedFloatOrString()
  {
    Uninit();
  }

  float&
  RawSetAsUnrestrictedFloat();

  float&
  SetAsUnrestrictedFloat();

  bool
  TrySetToUnrestrictedFloat(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsUnrestrictedFloat() const
  {
    return mType == eUnrestrictedFloat;
  }

  inline float&
  GetAsUnrestrictedFloat()
  {
    MOZ_ASSERT(IsUnrestrictedFloat(), "Wrong type!");
    return mValue.mUnrestrictedFloat.Value();
  }

  inline float const &
  GetAsUnrestrictedFloat() const
  {
    MOZ_ASSERT(IsUnrestrictedFloat(), "Wrong type!");
    return mValue.mUnrestrictedFloat.Value();
  }

  nsString&
  RawSetAsString();

  nsString&
  SetAsString();

  bool
  TrySetToString(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline void
  SetStringData(const nsString::char_type* aData, nsString::size_type aLength)
  {
    RawSetAsString().Assign(aData, aLength);
  }

  inline bool
  IsString() const
  {
    return mType == eString;
  }

  inline nsString&
  GetAsString()
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  inline nsString const &
  GetAsString() const
  {
    MOZ_ASSERT(IsString(), "Wrong type!");
    return mValue.mString.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningUnrestrictedFloatOrString& aOther);

private:
  void
  DestroyUnrestrictedFloat();

  void
  DestroyString();
};
} // namespace dom
} // namespace mozilla


#endif // mozilla_dom_UnionTypes_h
