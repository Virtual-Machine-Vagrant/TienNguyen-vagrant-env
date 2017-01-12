/* THIS FILE IS AUTOGENERATED FROM Downloads.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_DownloadsBinding_h
#define mozilla_dom_DownloadsBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/DOMEventTargetHelper.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Date.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"
#include "nsWeakReference.h"

namespace mozilla {
namespace dom {

struct AdoptDownloadDict;
struct AdoptDownloadDictAtoms;
class DOMDownload;
struct DOMDownloadAtoms;
class DOMDownloadManager;
struct DOMDownloadManagerAtoms;
class DOMError;
class EventHandlerNonNull;
struct NativePropertyHooks;
class Promise;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class DownloadState : uint32_t {
  Downloading,
  Stopped,
  Succeeded,
  Finalized,
  EndGuard_
};

namespace DownloadStateValues {
extern const EnumEntry strings[5];
} // namespace DownloadStateValues

bool
ToJSValue(JSContext* aCx, DownloadState aArgument, JS::MutableHandle<JS::Value> aValue);


struct AdoptDownloadDict : public DictionaryBase
{
  Optional<nsString> mContentType;
  Optional<Nullable<Date>> mStartTime;
  Optional<nsString> mStorageName;
  Optional<nsString> mStoragePath;
  Optional<nsString> mUrl;

  AdoptDownloadDict();

  explicit inline AdoptDownloadDict(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  AdoptDownloadDict(const AdoptDownloadDict&) = delete;
  void operator=(const AdoptDownloadDict) = delete;

  static bool
  InitIds(JSContext* cx, AdoptDownloadDictAtoms* atomsCache);

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
struct FastAdoptDownloadDict : public AdoptDownloadDict
{
  inline FastAdoptDownloadDict()
    : AdoptDownloadDict(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace DOMDownloadBinding {

  typedef mozilla::dom::DOMDownload NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::DOMDownload* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace DOMDownloadBinding



namespace DOMDownloadManagerBinding {

  typedef mozilla::dom::DOMDownloadManager NativeType;

  JSObject*
  ConstructNavigatorObject(JSContext* aCx, JS::Handle<JSObject*> aObj);

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::DOMDownloadManager* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace DOMDownloadManagerBinding



class DOMDownloadJSImpl : public CallbackInterface
{
public:
  explicit inline DOMDownloadJSImpl(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCx, aCallback, aIncumbentGlobal)
  {
  }

  already_AddRefed<Promise> Pause(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<Promise> Resume(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const DOMDownloadJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  int64_t GetTotalBytes(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  int64_t GetCurrentBytes(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetUrl(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetPath(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetStorageName(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetStoragePath(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  DownloadState GetState(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetContentType(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  Date GetStartTime(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetId(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetSourceAppManifestURL(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<DOMError> GetError(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<EventHandlerNonNull> GetOnstatechange(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void SetOnstatechange(EventHandlerNonNull* arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

private:
  static bool
  InitIds(JSContext* cx, DOMDownloadAtoms* atomsCache);
};


class DOMDownload final : public mozilla::DOMEventTargetHelper
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_CLASS_INHERITED(DOMDownload, mozilla::DOMEventTargetHelper)

private:
  RefPtr<DOMDownloadJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  DOMDownload(JS::Handle<JSObject*> aJSImplObject, nsIGlobalObject* aParent);

private:
  ~DOMDownload();

public:
  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  int64_t GetTotalBytes(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  int64_t GetCurrentBytes(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void GetUrl(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void GetPath(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void GetStorageName(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void GetStoragePath(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  DownloadState GetState(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void GetContentType(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  Date GetStartTime(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void GetId(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void GetSourceAppManifestURL(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<DOMError> GetError(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<Promise> Pause(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<Promise> Resume(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<EventHandlerNonNull> GetOnstatechange(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void SetOnstatechange(EventHandlerNonNull* arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


class DOMDownloadManagerJSImpl : public CallbackInterface
{
public:
  explicit inline DOMDownloadManagerJSImpl(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCx, aCallback, aIncumbentGlobal)
  {
  }

  already_AddRefed<Promise> GetDownloads(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<Promise> Remove(DOMDownload& download, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void ClearAllDone(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<Promise> AdoptDownload(const AdoptDownloadDict& download, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const DOMDownloadManagerJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  already_AddRefed<EventHandlerNonNull> GetOndownloadstart(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void SetOndownloadstart(EventHandlerNonNull* arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

private:
  static bool
  InitIds(JSContext* cx, DOMDownloadManagerAtoms* atomsCache);
};


class DOMDownloadManager final : public mozilla::DOMEventTargetHelper
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_CLASS_INHERITED(DOMDownloadManager, mozilla::DOMEventTargetHelper)

private:
  RefPtr<DOMDownloadManagerJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  DOMDownloadManager(JS::Handle<JSObject*> aJSImplObject, nsIGlobalObject* aParent);

private:
  ~DOMDownloadManager();

public:
  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<Promise> GetDownloads(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<Promise> Remove(DOMDownload& download, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void ClearAllDone(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  // Return a raw pointer here to avoid refcounting, but make sure it's safe (the object should be kept alive by the callee).
  already_AddRefed<Promise> AdoptDownload(const AdoptDownloadDict& download, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<EventHandlerNonNull> GetOndownloadstart(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void SetOndownloadstart(EventHandlerNonNull* arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_DownloadsBinding_h
