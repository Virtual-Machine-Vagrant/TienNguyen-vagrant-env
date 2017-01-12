/* THIS FILE IS AUTOGENERATED FROM BrowserElementDictionaries.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_BrowserElementDictionariesBinding_h
#define mozilla_dom_BrowserElementDictionariesBinding_h

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"
#include "nsINode.h"

class nsINode;

namespace mozilla {
namespace dom {

struct DOMWindowResizeEventDetailAtoms;
struct NativePropertyHooks;
struct OpenWindowEventDetailAtoms;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct DOMWindowResizeEventDetail : public DictionaryBase
{
  int32_t mHeight;
  int32_t mWidth;

  DOMWindowResizeEventDetail();

  explicit inline DOMWindowResizeEventDetail(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline DOMWindowResizeEventDetail(const DOMWindowResizeEventDetail& aOther)
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
  operator=(const DOMWindowResizeEventDetail& aOther);

private:
  static bool
  InitIds(JSContext* cx, DOMWindowResizeEventDetailAtoms* atomsCache);
};

namespace binding_detail {
struct FastDOMWindowResizeEventDetail : public DOMWindowResizeEventDetail
{
  inline FastDOMWindowResizeEventDetail()
    : DOMWindowResizeEventDetail(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct OpenWindowEventDetail : public DictionaryBase
{
  nsString mFeatures;
  RefPtr<nsINode> mFrameElement;
  nsString mName;
  nsString mUrl;

  OpenWindowEventDetail();

  explicit inline OpenWindowEventDetail(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline OpenWindowEventDetail(const OpenWindowEventDetail& aOther)
  {
    *this = aOther;
  }

  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value", bool passedToJSImpl = false);

  bool
  Init(const nsAString& aJSON);

  bool
  ToObjectInternal(JSContext* cx, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const OpenWindowEventDetail& aOther);

private:
  static bool
  InitIds(JSContext* cx, OpenWindowEventDetailAtoms* atomsCache);
};

namespace binding_detail {
struct FastOpenWindowEventDetail : public OpenWindowEventDetail
{
  inline FastOpenWindowEventDetail()
    : OpenWindowEventDetail(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_BrowserElementDictionariesBinding_h