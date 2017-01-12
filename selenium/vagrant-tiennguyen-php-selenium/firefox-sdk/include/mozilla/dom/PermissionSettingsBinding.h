/* THIS FILE IS AUTOGENERATED FROM PermissionSettings.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_PermissionSettingsBinding_h
#define mozilla_dom_PermissionSettingsBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"
#include "nsWeakReference.h"

namespace mozilla {
namespace dom {

struct NativePropertyHooks;
class PermissionSettings;
struct PermissionSettingsAtoms;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

namespace PermissionSettingsBinding {

  typedef mozilla::dom::PermissionSettings NativeType;

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

  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  bool
  Wrap(JSContext* aCx, mozilla::dom::PermissionSettings* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace PermissionSettingsBinding



class PermissionSettingsJSImpl : public CallbackInterface
{
public:
  explicit inline PermissionSettingsJSImpl(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCx, aCallback, aIncumbentGlobal)
  {
  }

  void Get(const nsAString& permission, const nsAString& manifestURI, const nsAString& origin, bool browserFlag, nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Set(const nsAString& permission, const nsAString& value, const nsAString& manifestURI, const nsAString& origin, bool browserFlag, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  bool IsExplicit(const nsAString& permission, const nsAString& manifestURI, const nsAString& origin, bool browserFlag, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Remove(const nsAString& permission, const nsAString& manifestURI, const nsAString& origin, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const PermissionSettingsJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

private:
  static bool
  InitIds(JSContext* cx, PermissionSettingsAtoms* atomsCache);
};


class PermissionSettings final : public nsSupportsWeakReference,
                                 public nsWrapperCache
{
public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(PermissionSettings)

private:
  RefPtr<PermissionSettingsJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  PermissionSettings(JS::Handle<JSObject*> aJSImplObject, nsIGlobalObject* aParent);

private:
  ~PermissionSettings();

public:
  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  void Get(const nsAString& permission, const nsAString& manifestURI, const nsAString& origin, bool browserFlag, nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Set(const nsAString& permission, const nsAString& value, const nsAString& manifestURI, const nsAString& origin, bool browserFlag, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  bool IsExplicit(const nsAString& permission, const nsAString& manifestURI, const nsAString& origin, bool browserFlag, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Remove(const nsAString& permission, const nsAString& manifestURI, const nsAString& origin, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_PermissionSettingsBinding_h