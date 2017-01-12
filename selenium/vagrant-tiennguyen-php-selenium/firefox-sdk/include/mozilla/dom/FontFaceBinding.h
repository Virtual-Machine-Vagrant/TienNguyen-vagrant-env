/* THIS FILE IS AUTOGENERATED FROM FontFace.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_FontFaceBinding_h
#define mozilla_dom_FontFaceBinding_h

#include "js/RootingAPI.h"
#include "jsfriendapi.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/TypedArray.h"
#include "mozilla/dom/UnionMember.h"

namespace mozilla {
namespace dom {

class FontFace;
struct FontFaceAtoms;
struct FontFaceDescriptorsAtoms;
struct NativePropertyHooks;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class FontFaceLoadStatus : uint32_t {
  Unloaded,
  Loading,
  Loaded,
  Error,
  EndGuard_
};

namespace FontFaceLoadStatusValues {
extern const EnumEntry strings[5];
} // namespace FontFaceLoadStatusValues

bool
ToJSValue(JSContext* aCx, FontFaceLoadStatus aArgument, JS::MutableHandle<JS::Value> aValue);


struct FontFaceDescriptors : public DictionaryBase
{
  nsString mDisplay;
  nsString mFeatureSettings;
  nsString mStretch;
  nsString mStyle;
  nsString mUnicodeRange;
  nsString mVariant;
  nsString mWeight;

  FontFaceDescriptors();

  explicit inline FontFaceDescriptors(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline FontFaceDescriptors(const FontFaceDescriptors& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  bool
  ToJSON(nsAString& aJSON) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const FontFaceDescriptors& aOther);

private:
  static bool
  InitIds(JSContext* cx, FontFaceDescriptorsAtoms* atomsCache);
};

namespace binding_detail {
struct FastFontFaceDescriptors : public FontFaceDescriptors
{
  inline FastFontFaceDescriptors()
    : FontFaceDescriptors(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class StringOrArrayBufferOrArrayBufferView
{
  friend class StringOrArrayBufferOrArrayBufferViewArgument;
  enum Type
  {
    eUninitialized,
    eString,
    eArrayBuffer,
    eArrayBufferView
  };

  union Value
  {
    UnionMember<binding_detail::FakeString > mString;
    UnionMember<RootedTypedArray<ArrayBuffer> > mArrayBuffer;
    UnionMember<RootedTypedArray<ArrayBufferView> > mArrayBufferView;

  };

  Type mType;
  Value mValue;

  StringOrArrayBufferOrArrayBufferView(const StringOrArrayBufferOrArrayBufferView&) = delete;
  void operator=(const StringOrArrayBufferOrArrayBufferView) = delete;
public:
  explicit inline StringOrArrayBufferOrArrayBufferView()
    : mType(eUninitialized)
  {
  }

  inline ~StringOrArrayBufferOrArrayBufferView()
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


class OwningStringOrArrayBufferOrArrayBufferView : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningStringOrArrayBufferOrArrayBufferView& aUnion);
  enum Type
  {
    eUninitialized,
    eString,
    eArrayBuffer,
    eArrayBufferView
  };

  union Value
  {
    UnionMember<nsString > mString;
    UnionMember<ArrayBuffer > mArrayBuffer;
    UnionMember<ArrayBufferView > mArrayBufferView;

  };

  Type mType;
  Value mValue;

  OwningStringOrArrayBufferOrArrayBufferView(const OwningStringOrArrayBufferOrArrayBufferView&) = delete;
  void operator=(const OwningStringOrArrayBufferOrArrayBufferView) = delete;
public:
  explicit inline OwningStringOrArrayBufferOrArrayBufferView()
    : mType(eUninitialized)
  {
  }

  inline ~OwningStringOrArrayBufferOrArrayBufferView()
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
  DestroyArrayBuffer();

  void
  DestroyArrayBufferView();
};


namespace FontFaceBinding {

  typedef mozilla::dom::FontFace NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::FontFace* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, T* aObject, JS::Handle<JSObject*> aGivenProto)
  {
    JS::Rooted<JSObject*> reflector(aCx);
    return Wrap(aCx, aObject, aObject, aGivenProto, &reflector) ? reflector.get() : nullptr;
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceCache& aProtoAndIfaceCache, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObjectHandle(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

  JSObject*
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

} // namespace FontFaceBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_FontFaceBinding_h
