/* THIS FILE IS AUTOGENERATED FROM XPathNSResolver.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_XPathNSResolverBinding_h
#define mozilla_dom_XPathNSResolverBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"

namespace mozilla {
namespace dom {

struct NativePropertyHooks;
class ProtoAndIfaceCache;
class XPathNSResolver;
struct XPathNSResolverAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

class XPathNSResolver : public CallbackInterface
{
public:
  explicit inline XPathNSResolver(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCx, aCallback, aIncumbentGlobal)
  {
  }

  template <typename T>
  inline void
  LookupNamespaceURI(const T& thisVal, const nsAString& prefix, nsString& aRetVal, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "XPathNSResolver.lookupNamespaceURI";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext());
    if (!ToJSValue(s.GetContext(), thisVal, &thisValJS)) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    return LookupNamespaceURI(s.GetContext(), thisValJS, prefix, aRetVal, aRv);
  }

  inline void
  LookupNamespaceURI(const nsAString& prefix, nsString& aRetVal, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "XPathNSResolver.lookupNamespaceURI";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return LookupNamespaceURI(s.GetContext(), JS::UndefinedHandleValue, prefix, aRetVal, aRv);
  }

  template <typename T>
  inline void
  LookupNamespaceURI(const T& thisVal, const nsAString& prefix, nsString& aRetVal, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return LookupNamespaceURI(thisVal, prefix, aRetVal, rv, aExecutionReason);
  }

  inline void
  LookupNamespaceURI(const nsAString& prefix, nsString& aRetVal, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return LookupNamespaceURI(prefix, aRetVal, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const XPathNSResolver& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

private:
  void LookupNamespaceURI(JSContext* cx, JS::Handle<JS::Value> aThisVal, const nsAString& prefix, nsString& aRetVal, ErrorResult& aRv);

  static bool
  InitIds(JSContext* cx, XPathNSResolverAtoms* atomsCache);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_XPathNSResolverBinding_h
