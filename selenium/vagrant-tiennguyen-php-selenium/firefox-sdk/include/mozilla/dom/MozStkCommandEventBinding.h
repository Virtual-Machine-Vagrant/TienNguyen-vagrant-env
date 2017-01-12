/* THIS FILE IS AUTOGENERATED FROM MozStkCommandEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_MozStkCommandEventBinding_h
#define mozilla_dom_MozStkCommandEventBinding_h

#include "EventBinding.h"
#include "MozStkCommandEventBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Date.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

struct MozStkBipMessageAtoms;
struct MozStkBrowserSettingAtoms;
struct MozStkBrowserTerminationEventAtoms;
struct MozStkCallEventAtoms;
struct MozStkCommandAtoms;
class MozStkCommandEvent;
struct MozStkCommandEventAtoms;
struct MozStkCommandEventInitAtoms;
struct MozStkDuration;
struct MozStkDurationAtoms;
struct MozStkGeneralEventAtoms;
struct MozStkIcon;
struct MozStkIconAtoms;
struct MozStkIconContainerAtoms;
struct MozStkInputAtoms;
struct MozStkItem;
struct MozStkItemAtoms;
struct MozStkLanguageSelectionEventAtoms;
struct MozStkLocalInfo;
struct MozStkLocalInfoAtoms;
struct MozStkLocationEventAtoms;
struct MozStkLocationInfo;
struct MozStkLocationInfoAtoms;
struct MozStkMenuAtoms;
struct MozStkPlayToneAtoms;
struct MozStkProvideLocalInfoAtoms;
struct MozStkResponseAtoms;
struct MozStkSetUpCallAtoms;
struct MozStkSetUpEventListAtoms;
struct MozStkTextMessage;
struct MozStkTextMessageAtoms;
struct MozStkTimer;
struct MozStkTimerAtoms;
struct NativePropertyHooks;
class ProtoAndIfaceCache;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class IccImageCodingScheme : uint32_t {
  Basic,
  Color,
  Color_transparency,
  EndGuard_
};

namespace IccImageCodingSchemeValues {
extern const EnumEntry strings[4];
} // namespace IccImageCodingSchemeValues

bool
ToJSValue(JSContext* aCx, IccImageCodingScheme aArgument, JS::MutableHandle<JS::Value> aValue);


struct MozStkBrowserTerminationEvent : public DictionaryBase
{
  Optional<uint16_t> mEventType;
  Optional<uint16_t> mTerminationCause;

  MozStkBrowserTerminationEvent();

  explicit inline MozStkBrowserTerminationEvent(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkBrowserTerminationEvent(const MozStkBrowserTerminationEvent& aOther)
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
  operator=(const MozStkBrowserTerminationEvent& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkBrowserTerminationEventAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkBrowserTerminationEvent : public MozStkBrowserTerminationEvent
{
  inline FastMozStkBrowserTerminationEvent()
    : MozStkBrowserTerminationEvent(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkCallEvent : public DictionaryBase
{
  Optional<nsString> mError;
  Optional<uint16_t> mEventType;
  Optional<bool> mIsIssuedByRemote;
  Optional<nsString> mNumber;

  MozStkCallEvent();

  explicit inline MozStkCallEvent(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkCallEvent(const MozStkCallEvent& aOther)
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
  operator=(const MozStkCallEvent& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkCallEventAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkCallEvent : public MozStkCallEvent
{
  inline FastMozStkCallEvent()
    : MozStkCallEvent(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkCommand : public DictionaryBase
{
  Optional<uint16_t> mCommandNumber;
  Optional<uint16_t> mCommandQualifier;
  JS::Value mOptions;
  Optional<uint16_t> mTypeOfCommand;

  MozStkCommand();

  explicit inline MozStkCommand(const FastDictionaryInitializer& )
    : mOptions(JS::UndefinedValue())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  MozStkCommand(const MozStkCommand&) = delete;
  void operator=(const MozStkCommand) = delete;

  static bool
  InitIds(JSContext* cx, MozStkCommandAtoms* atomsCache);

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
struct FastMozStkCommand : public MozStkCommand
{
  inline FastMozStkCommand()
    : MozStkCommand(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkCommandEventInit : public EventInit
{
  JS::Value mCommand;

  MozStkCommandEventInit();

  explicit inline MozStkCommandEventInit(const FastDictionaryInitializer& )
    : EventInit(FastDictionaryInitializer()),
      mCommand(JS::UndefinedValue())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  MozStkCommandEventInit(const MozStkCommandEventInit&) = delete;
  void operator=(const MozStkCommandEventInit) = delete;

  static bool
  InitIds(JSContext* cx, MozStkCommandEventInitAtoms* atomsCache);

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
struct FastMozStkCommandEventInit : public MozStkCommandEventInit
{
  inline FastMozStkCommandEventInit()
    : MozStkCommandEventInit(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkDuration : public DictionaryBase
{
  Optional<uint8_t> mTimeInterval;
  Optional<uint16_t> mTimeUnit;

  MozStkDuration();

  explicit inline MozStkDuration(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkDuration(const MozStkDuration& aOther)
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
  operator=(const MozStkDuration& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkDurationAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkDuration : public MozStkDuration
{
  inline FastMozStkDuration()
    : MozStkDuration(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkGeneralEvent : public DictionaryBase
{
  Optional<uint16_t> mEventType;

  MozStkGeneralEvent();

  explicit inline MozStkGeneralEvent(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkGeneralEvent(const MozStkGeneralEvent& aOther)
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
  operator=(const MozStkGeneralEvent& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkGeneralEventAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkGeneralEvent : public MozStkGeneralEvent
{
  inline FastMozStkGeneralEvent()
    : MozStkGeneralEvent(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkIcon : public DictionaryBase
{
  Optional<IccImageCodingScheme> mCodingScheme;
  Optional<uint32_t> mHeight;
  Optional<Sequence<uint32_t>> mPixels;
  Optional<uint32_t> mWidth;

  MozStkIcon();

  explicit inline MozStkIcon(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkIcon(const MozStkIcon& aOther)
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
  operator=(const MozStkIcon& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkIconAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkIcon : public MozStkIcon
{
  inline FastMozStkIcon()
    : MozStkIcon(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkLanguageSelectionEvent : public DictionaryBase
{
  Optional<uint16_t> mEventType;
  Optional<nsString> mLanguage;

  MozStkLanguageSelectionEvent();

  explicit inline MozStkLanguageSelectionEvent(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkLanguageSelectionEvent(const MozStkLanguageSelectionEvent& aOther)
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
  operator=(const MozStkLanguageSelectionEvent& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkLanguageSelectionEventAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkLanguageSelectionEvent : public MozStkLanguageSelectionEvent
{
  inline FastMozStkLanguageSelectionEvent()
    : MozStkLanguageSelectionEvent(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkLocationInfo : public DictionaryBase
{
  Optional<uint32_t> mGsmCellId;
  Optional<uint16_t> mGsmLocationAreaCode;
  Optional<nsString> mMcc;
  Optional<nsString> mMnc;

  MozStkLocationInfo();

  explicit inline MozStkLocationInfo(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkLocationInfo(const MozStkLocationInfo& aOther)
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
  operator=(const MozStkLocationInfo& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkLocationInfoAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkLocationInfo : public MozStkLocationInfo
{
  inline FastMozStkLocationInfo()
    : MozStkLocationInfo(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkProvideLocalInfo : public DictionaryBase
{
  Optional<uint16_t> mLocalInfoType;

  MozStkProvideLocalInfo();

  explicit inline MozStkProvideLocalInfo(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkProvideLocalInfo(const MozStkProvideLocalInfo& aOther)
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
  operator=(const MozStkProvideLocalInfo& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkProvideLocalInfoAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkProvideLocalInfo : public MozStkProvideLocalInfo
{
  inline FastMozStkProvideLocalInfo()
    : MozStkProvideLocalInfo(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkSetUpEventList : public DictionaryBase
{
  Optional<Sequence<uint16_t>> mEventList;

  MozStkSetUpEventList();

  explicit inline MozStkSetUpEventList(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkSetUpEventList(const MozStkSetUpEventList& aOther)
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
  operator=(const MozStkSetUpEventList& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkSetUpEventListAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkSetUpEventList : public MozStkSetUpEventList
{
  inline FastMozStkSetUpEventList()
    : MozStkSetUpEventList(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkTimer : public DictionaryBase
{
  Optional<uint16_t> mTimerAction;
  Optional<uint8_t> mTimerId;
  Optional<uint32_t> mTimerValue;

  MozStkTimer();

  explicit inline MozStkTimer(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkTimer(const MozStkTimer& aOther)
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
  operator=(const MozStkTimer& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkTimerAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkTimer : public MozStkTimer
{
  inline FastMozStkTimer()
    : MozStkTimer(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkIconContainer : public DictionaryBase
{
  Optional<bool> mIconSelfExplanatory;
  Optional<Sequence<MozStkIcon>> mIcons;

  MozStkIconContainer();

  explicit inline MozStkIconContainer(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkIconContainer(const MozStkIconContainer& aOther)
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
  operator=(const MozStkIconContainer& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkIconContainerAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkIconContainer : public MozStkIconContainer
{
  inline FastMozStkIconContainer()
    : MozStkIconContainer(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkLocalInfo : public DictionaryBase
{
  Optional<Date> mDate;
  Optional<nsString> mImei;
  Optional<nsString> mLanguage;
  MozStkLocationInfo mLocationInfo;

  MozStkLocalInfo();

  explicit inline MozStkLocalInfo(const FastDictionaryInitializer& )
    : mLocationInfo(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  MozStkLocalInfo(const MozStkLocalInfo&) = delete;
  void operator=(const MozStkLocalInfo) = delete;

  static bool
  InitIds(JSContext* cx, MozStkLocalInfoAtoms* atomsCache);

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
struct FastMozStkLocalInfo : public MozStkLocalInfo
{
  inline FastMozStkLocalInfo()
    : MozStkLocalInfo(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkLocationEvent : public DictionaryBase
{
  Optional<uint16_t> mEventType;
  MozStkLocationInfo mLocationInfo;
  Optional<uint16_t> mLocationStatus;

  MozStkLocationEvent();

  explicit inline MozStkLocationEvent(const FastDictionaryInitializer& )
    : mLocationInfo(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkLocationEvent(const MozStkLocationEvent& aOther)
    : mLocationInfo(FastDictionaryInitializer())
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
  operator=(const MozStkLocationEvent& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkLocationEventAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkLocationEvent : public MozStkLocationEvent
{
  inline FastMozStkLocationEvent()
    : MozStkLocationEvent(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkBipMessage : public MozStkIconContainer
{
  Optional<nsString> mText;

  MozStkBipMessage();

  explicit inline MozStkBipMessage(const FastDictionaryInitializer& )
    : MozStkIconContainer(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkBipMessage(const MozStkBipMessage& aOther)
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
  operator=(const MozStkBipMessage& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkBipMessageAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkBipMessage : public MozStkBipMessage
{
  inline FastMozStkBipMessage()
    : MozStkBipMessage(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkInput : public MozStkIconContainer
{
  Optional<nsString> mDefaultText;
  MozStkDuration mDuration;
  Optional<bool> mHideInput;
  Optional<bool> mIsAlphabet;
  Optional<bool> mIsHelpAvailable;
  Optional<bool> mIsPacked;
  Optional<bool> mIsUCS2;
  Optional<bool> mIsYesNoRequested;
  Optional<uint16_t> mMaxLength;
  Optional<uint16_t> mMinLength;
  Optional<nsString> mText;

  MozStkInput();

  explicit inline MozStkInput(const FastDictionaryInitializer& )
    : MozStkIconContainer(FastDictionaryInitializer()),
      mDuration(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkInput(const MozStkInput& aOther)
    : mDuration(FastDictionaryInitializer())
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
  operator=(const MozStkInput& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkInputAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkInput : public MozStkInput
{
  inline FastMozStkInput()
    : MozStkInput(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkItem : public MozStkIconContainer
{
  Optional<uint16_t> mIdentifier;
  Optional<nsString> mText;

  MozStkItem();

  explicit inline MozStkItem(const FastDictionaryInitializer& )
    : MozStkIconContainer(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkItem(const MozStkItem& aOther)
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
  operator=(const MozStkItem& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkItemAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkItem : public MozStkItem
{
  inline FastMozStkItem()
    : MozStkItem(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkPlayTone : public MozStkIconContainer
{
  MozStkDuration mDuration;
  Optional<bool> mIsVibrate;
  Optional<nsString> mText;
  Optional<uint16_t> mTone;

  MozStkPlayTone();

  explicit inline MozStkPlayTone(const FastDictionaryInitializer& )
    : MozStkIconContainer(FastDictionaryInitializer()),
      mDuration(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkPlayTone(const MozStkPlayTone& aOther)
    : mDuration(FastDictionaryInitializer())
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
  operator=(const MozStkPlayTone& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkPlayToneAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkPlayTone : public MozStkPlayTone
{
  inline FastMozStkPlayTone()
    : MozStkPlayTone(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkResponse : public DictionaryBase
{
  Optional<uint16_t> mAdditionalInformation;
  Optional<bool> mHasConfirmed;
  Optional<nsString> mInput;
  Optional<bool> mIsYesNo;
  Optional<uint16_t> mItemIdentifier;
  MozStkLocalInfo mLocalInfo;
  Optional<uint16_t> mResultCode;
  MozStkTimer mTimer;

  MozStkResponse();

  explicit inline MozStkResponse(const FastDictionaryInitializer& )
    : mLocalInfo(FastDictionaryInitializer()),
      mTimer(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  MozStkResponse(const MozStkResponse&) = delete;
  void operator=(const MozStkResponse) = delete;

  static bool
  InitIds(JSContext* cx, MozStkResponseAtoms* atomsCache);

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
struct FastMozStkResponse : public MozStkResponse
{
  inline FastMozStkResponse()
    : MozStkResponse(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkTextMessage : public MozStkIconContainer
{
  MozStkDuration mDuration;
  Optional<bool> mIsHighPriority;
  Optional<bool> mResponseNeeded;
  Optional<nsString> mText;
  Optional<bool> mUserClear;

  MozStkTextMessage();

  explicit inline MozStkTextMessage(const FastDictionaryInitializer& )
    : MozStkIconContainer(FastDictionaryInitializer()),
      mDuration(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkTextMessage(const MozStkTextMessage& aOther)
    : mDuration(FastDictionaryInitializer())
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
  operator=(const MozStkTextMessage& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkTextMessageAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkTextMessage : public MozStkTextMessage
{
  inline FastMozStkTextMessage()
    : MozStkTextMessage(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkBrowserSetting : public DictionaryBase
{
  MozStkTextMessage mConfirmMessage;
  Optional<uint16_t> mMode;
  Optional<nsString> mUrl;

  MozStkBrowserSetting();

  explicit inline MozStkBrowserSetting(const FastDictionaryInitializer& )
    : mConfirmMessage(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkBrowserSetting(const MozStkBrowserSetting& aOther)
    : mConfirmMessage(FastDictionaryInitializer())
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
  operator=(const MozStkBrowserSetting& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkBrowserSettingAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkBrowserSetting : public MozStkBrowserSetting
{
  inline FastMozStkBrowserSetting()
    : MozStkBrowserSetting(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkMenu : public MozStkIconContainer
{
  Optional<uint16_t> mDefaultItem;
  Optional<bool> mIsHelpAvailable;
  Optional<Sequence<MozStkItem>> mItems;
  Optional<Sequence<uint16_t>> mNextActionList;
  Optional<uint16_t> mPresentationType;
  Optional<nsString> mTitle;

  MozStkMenu();

  explicit inline MozStkMenu(const FastDictionaryInitializer& )
    : MozStkIconContainer(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkMenu(const MozStkMenu& aOther)
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
  operator=(const MozStkMenu& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkMenuAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkMenu : public MozStkMenu
{
  inline FastMozStkMenu()
    : MozStkMenu(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct MozStkSetUpCall : public DictionaryBase
{
  Optional<nsString> mAddress;
  MozStkTextMessage mCallMessage;
  MozStkTextMessage mConfirmMessage;
  MozStkDuration mDuration;

  MozStkSetUpCall();

  explicit inline MozStkSetUpCall(const FastDictionaryInitializer& )
    : mCallMessage(FastDictionaryInitializer()),
      mConfirmMessage(FastDictionaryInitializer()),
      mDuration(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline MozStkSetUpCall(const MozStkSetUpCall& aOther)
    : mCallMessage(FastDictionaryInitializer()),
      mConfirmMessage(FastDictionaryInitializer()),
      mDuration(FastDictionaryInitializer())
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
  operator=(const MozStkSetUpCall& aOther);

private:
  static bool
  InitIds(JSContext* cx, MozStkSetUpCallAtoms* atomsCache);
};

namespace binding_detail {
struct FastMozStkSetUpCall : public MozStkSetUpCall
{
  inline FastMozStkSetUpCall()
    : MozStkSetUpCall(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


namespace MozStkCommandEventBinding {

  typedef mozilla::dom::MozStkCommandEvent NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::MozStkCommandEvent* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace MozStkCommandEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MozStkCommandEventBinding_h
