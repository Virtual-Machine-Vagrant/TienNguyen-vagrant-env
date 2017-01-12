/* THIS FILE IS AUTOGENERATED FROM ExtendableMessageEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_ExtendableMessageEventBinding_h
#define mozilla_dom_ExtendableMessageEventBinding_h

#include "ExtendableEventBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/MessagePort.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/UnionMember.h"

namespace mozilla {
namespace dom {

class ClientOrServiceWorkerOrMessagePort;
struct ExtendableMessageEventInitAtoms;
class MessagePort;
struct NativePropertyHooks;
class OwningClientOrServiceWorkerOrMessagePort;
class ProtoAndIfaceCache;

namespace workers {

class ExtendableMessageEvent;
struct ExtendableMessageEventAtoms;
class ServiceWorker;
class ServiceWorkerClient;

} // namespace workers

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

void
ImplCycleCollectionTraverse(nsCycleCollectionTraversalCallback& aCallback, OwningClientOrServiceWorkerOrMessagePort& aUnion, const char* aName, uint32_t aFlags = 0);


void
ImplCycleCollectionUnlink(OwningClientOrServiceWorkerOrMessagePort& aUnion);


class ClientOrServiceWorkerOrMessagePort
{
  friend class ClientOrServiceWorkerOrMessagePortArgument;
  enum Type
  {
    eUninitialized,
    eClient,
    eServiceWorker,
    eMessagePort
  };

  union Value
  {
    UnionMember<NonNull<mozilla::dom::workers::ServiceWorkerClient> > mClient;
    UnionMember<NonNull<mozilla::dom::workers::ServiceWorker> > mServiceWorker;
    UnionMember<NonNull<mozilla::dom::MessagePort> > mMessagePort;

  };

  Type mType;
  Value mValue;

  ClientOrServiceWorkerOrMessagePort(const ClientOrServiceWorkerOrMessagePort&) = delete;
  void operator=(const ClientOrServiceWorkerOrMessagePort) = delete;
public:
  explicit inline ClientOrServiceWorkerOrMessagePort()
    : mType(eUninitialized)
  {
  }

  inline ~ClientOrServiceWorkerOrMessagePort()
  {
    Uninit();
  }

  inline NonNull<mozilla::dom::workers::ServiceWorkerClient>&
  RawSetAsClient()
  {
    if (mType == eClient) {
      return mValue.mClient.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eClient;
    return mValue.mClient.SetValue();
  }

  inline NonNull<mozilla::dom::workers::ServiceWorkerClient>&
  SetAsClient()
  {
    if (mType == eClient) {
      return mValue.mClient.Value();
    }
    Uninit();
    mType = eClient;
    return mValue.mClient.SetValue();
  }

  inline bool
  IsClient() const
  {
    return mType == eClient;
  }

  inline NonNull<mozilla::dom::workers::ServiceWorkerClient>&
  GetAsClient()
  {
    MOZ_ASSERT(IsClient(), "Wrong type!");
    return mValue.mClient.Value();
  }

  inline mozilla::dom::workers::ServiceWorkerClient&
  GetAsClient() const
  {
    MOZ_ASSERT(IsClient(), "Wrong type!");
    return mValue.mClient.Value();
  }

  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  RawSetAsServiceWorker()
  {
    if (mType == eServiceWorker) {
      return mValue.mServiceWorker.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eServiceWorker;
    return mValue.mServiceWorker.SetValue();
  }

  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  SetAsServiceWorker()
  {
    if (mType == eServiceWorker) {
      return mValue.mServiceWorker.Value();
    }
    Uninit();
    mType = eServiceWorker;
    return mValue.mServiceWorker.SetValue();
  }

  inline bool
  IsServiceWorker() const
  {
    return mType == eServiceWorker;
  }

  inline NonNull<mozilla::dom::workers::ServiceWorker>&
  GetAsServiceWorker()
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  inline mozilla::dom::workers::ServiceWorker&
  GetAsServiceWorker() const
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort()
  {
    if (mType == eMessagePort) {
      return mValue.mMessagePort.Value();
    }
    MOZ_ASSERT(mType == eUninitialized);
    mType = eMessagePort;
    return mValue.mMessagePort.SetValue();
  }

  inline NonNull<mozilla::dom::MessagePort>&
  SetAsMessagePort()
  {
    if (mType == eMessagePort) {
      return mValue.mMessagePort.Value();
    }
    Uninit();
    mType = eMessagePort;
    return mValue.mMessagePort.SetValue();
  }

  inline bool
  IsMessagePort() const
  {
    return mType == eMessagePort;
  }

  inline NonNull<mozilla::dom::MessagePort>&
  GetAsMessagePort()
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  inline mozilla::dom::MessagePort&
  GetAsMessagePort() const
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  inline void
  Uninit()
  {
    switch (mType) {
      case eUninitialized: {
        break;
      }
      case eClient: {
        DestroyClient();
        break;
      }
      case eServiceWorker: {
        DestroyServiceWorker();
        break;
      }
      case eMessagePort: {
        DestroyMessagePort();
        break;
      }
    }
  }

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

private:
  inline void
  DestroyClient()
  {
    MOZ_ASSERT(IsClient(), "Wrong type!");
    mValue.mClient.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyServiceWorker()
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    mValue.mServiceWorker.Destroy();
    mType = eUninitialized;
  }

  inline void
  DestroyMessagePort()
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    mValue.mMessagePort.Destroy();
    mType = eUninitialized;
  }
};


class OwningClientOrServiceWorkerOrMessagePort : public AllOwningUnionBase
{
  friend void ImplCycleCollectionUnlink(OwningClientOrServiceWorkerOrMessagePort& aUnion);
  enum Type
  {
    eUninitialized,
    eClient,
    eServiceWorker,
    eMessagePort
  };

  union Value
  {
    UnionMember<OwningNonNull<mozilla::dom::workers::ServiceWorkerClient> > mClient;
    UnionMember<OwningNonNull<mozilla::dom::workers::ServiceWorker> > mServiceWorker;
    UnionMember<OwningNonNull<mozilla::dom::MessagePort> > mMessagePort;

  };

  Type mType;
  Value mValue;

public:
  explicit inline OwningClientOrServiceWorkerOrMessagePort()
    : mType(eUninitialized)
  {
  }

  explicit inline OwningClientOrServiceWorkerOrMessagePort(const OwningClientOrServiceWorkerOrMessagePort& aOther)
    : mType(eUninitialized)
  {
    *this = aOther;
  }

  inline ~OwningClientOrServiceWorkerOrMessagePort()
  {
    Uninit();
  }

  OwningNonNull<mozilla::dom::workers::ServiceWorkerClient>&
  RawSetAsClient();

  OwningNonNull<mozilla::dom::workers::ServiceWorkerClient>&
  SetAsClient();

  bool
  TrySetToClient(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsClient() const
  {
    return mType == eClient;
  }

  inline OwningNonNull<mozilla::dom::workers::ServiceWorkerClient>&
  GetAsClient()
  {
    MOZ_ASSERT(IsClient(), "Wrong type!");
    return mValue.mClient.Value();
  }

  inline OwningNonNull<mozilla::dom::workers::ServiceWorkerClient> const &
  GetAsClient() const
  {
    MOZ_ASSERT(IsClient(), "Wrong type!");
    return mValue.mClient.Value();
  }

  OwningNonNull<mozilla::dom::workers::ServiceWorker>&
  RawSetAsServiceWorker();

  OwningNonNull<mozilla::dom::workers::ServiceWorker>&
  SetAsServiceWorker();

  bool
  TrySetToServiceWorker(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsServiceWorker() const
  {
    return mType == eServiceWorker;
  }

  inline OwningNonNull<mozilla::dom::workers::ServiceWorker>&
  GetAsServiceWorker()
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  inline OwningNonNull<mozilla::dom::workers::ServiceWorker> const &
  GetAsServiceWorker() const
  {
    MOZ_ASSERT(IsServiceWorker(), "Wrong type!");
    return mValue.mServiceWorker.Value();
  }

  OwningNonNull<mozilla::dom::MessagePort>&
  RawSetAsMessagePort();

  OwningNonNull<mozilla::dom::MessagePort>&
  SetAsMessagePort();

  bool
  TrySetToMessagePort(JSContext* cx, JS::Handle<JS::Value> value, bool& tryNext, bool passedToJSImpl = false);

  inline bool
  IsMessagePort() const
  {
    return mType == eMessagePort;
  }

  inline OwningNonNull<mozilla::dom::MessagePort>&
  GetAsMessagePort()
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  inline OwningNonNull<mozilla::dom::MessagePort> const &
  GetAsMessagePort() const
  {
    MOZ_ASSERT(IsMessagePort(), "Wrong type!");
    return mValue.mMessagePort.Value();
  }

  void
  Uninit();

  bool
  ToJSVal(JSContext* cx, JS::Handle<JSObject*> scopeObj, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceUnion(JSTracer* trc);

  void
  operator=(const OwningClientOrServiceWorkerOrMessagePort& aOther);

private:
  void
  DestroyClient();

  void
  DestroyServiceWorker();

  void
  DestroyMessagePort();
};


struct ExtendableMessageEventInit : public ExtendableEventInit
{
  JS::Value mData;
  nsString mLastEventId;
  nsString mOrigin;
  Optional<Nullable<Sequence<OwningNonNull<mozilla::dom::MessagePort>>>> mPorts;
  Optional<Nullable<OwningClientOrServiceWorkerOrMessagePort >> mSource;

  ExtendableMessageEventInit();

  explicit inline ExtendableMessageEventInit(const FastDictionaryInitializer& )
    : ExtendableEventInit(FastDictionaryInitializer()),
      mData(JS::UndefinedValue())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  ExtendableMessageEventInit(const ExtendableMessageEventInit&) = delete;
  void operator=(const ExtendableMessageEventInit) = delete;

  static bool
  InitIds(JSContext* cx, ExtendableMessageEventInitAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);
};

namespace binding_detail {
struct FastExtendableMessageEventInit : public ExtendableMessageEventInit
{
  inline FastExtendableMessageEventInit()
    : ExtendableMessageEventInit(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace ExtendableMessageEventBinding {

  typedef mozilla::dom::workers::ExtendableMessageEvent NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::workers::ExtendableMessageEvent* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace ExtendableMessageEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_ExtendableMessageEventBinding_h
