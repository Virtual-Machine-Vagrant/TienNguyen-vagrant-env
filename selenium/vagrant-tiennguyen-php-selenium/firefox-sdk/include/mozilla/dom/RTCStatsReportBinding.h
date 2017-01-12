/* THIS FILE IS AUTOGENERATED FROM RTCStatsReport.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_RTCStatsReportBinding_h
#define mozilla_dom_RTCStatsReportBinding_h

#include "RTCStatsReportBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"
#include "mozilla/dom/ToJSValue.h"
#include "nsWeakReference.h"

namespace mozilla {
namespace dom {

struct NativePropertyHooks;
class ProtoAndIfaceCache;
struct RTCCodecStats;
struct RTCCodecStatsAtoms;
struct RTCIceCandidatePairStats;
struct RTCIceCandidatePairStatsAtoms;
struct RTCIceCandidateStats;
struct RTCIceCandidateStatsAtoms;
struct RTCIceComponentStats;
struct RTCIceComponentStatsAtoms;
struct RTCInboundRTPStreamStats;
struct RTCInboundRTPStreamStatsAtoms;
struct RTCMediaStreamStats;
struct RTCMediaStreamStatsAtoms;
struct RTCMediaStreamTrackStats;
struct RTCMediaStreamTrackStatsAtoms;
struct RTCOutboundRTPStreamStats;
struct RTCOutboundRTPStreamStatsAtoms;
struct RTCRTPStreamStatsAtoms;
struct RTCStatsAtoms;
class RTCStatsReport;
struct RTCStatsReportAtoms;
class RTCStatsReportCallback;
struct RTCStatsReportInternalAtoms;
struct RTCTransportStats;
struct RTCTransportStatsAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

enum class RTCStatsType : uint32_t {
  Inboundrtp,
  Outboundrtp,
  Session,
  Track,
  Transport,
  Candidatepair,
  Localcandidate,
  Remotecandidate,
  EndGuard_
};

namespace RTCStatsTypeValues {
extern const EnumEntry strings[9];
} // namespace RTCStatsTypeValues

bool
ToJSValue(JSContext* aCx, RTCStatsType aArgument, JS::MutableHandle<JS::Value> aValue);


enum class RTCStatsIceCandidatePairState : uint32_t {
  Frozen,
  Waiting,
  Inprogress,
  Failed,
  Succeeded,
  Cancelled,
  EndGuard_
};

namespace RTCStatsIceCandidatePairStateValues {
extern const EnumEntry strings[7];
} // namespace RTCStatsIceCandidatePairStateValues

bool
ToJSValue(JSContext* aCx, RTCStatsIceCandidatePairState aArgument, JS::MutableHandle<JS::Value> aValue);


enum class RTCStatsIceCandidateType : uint32_t {
  Host,
  Serverreflexive,
  Peerreflexive,
  Relayed,
  EndGuard_
};

namespace RTCStatsIceCandidateTypeValues {
extern const EnumEntry strings[5];
} // namespace RTCStatsIceCandidateTypeValues

bool
ToJSValue(JSContext* aCx, RTCStatsIceCandidateType aArgument, JS::MutableHandle<JS::Value> aValue);


struct RTCStats : public DictionaryBase
{
  Optional<nsString> mId;
  Optional<double> mTimestamp;
  Optional<RTCStatsType> mType;

  RTCStats();

  explicit inline RTCStats(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCStats(const RTCStats& aOther)
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
  operator=(const RTCStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCStats : public RTCStats
{
  inline FastRTCStats()
    : RTCStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCCodecStats : public RTCStats
{
  Optional<uint32_t> mChannels;
  Optional<uint32_t> mClockRate;
  Optional<nsString> mCodec;
  Optional<nsString> mParameters;
  Optional<uint32_t> mPayloadType;

  RTCCodecStats();

  explicit inline RTCCodecStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCCodecStats(const RTCCodecStats& aOther)
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
  operator=(const RTCCodecStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCCodecStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCCodecStats : public RTCCodecStats
{
  inline FastRTCCodecStats()
    : RTCCodecStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCIceCandidatePairStats : public RTCStats
{
  Optional<nsString> mComponentId;
  Optional<nsString> mLocalCandidateId;
  Optional<bool> mNominated;
  Optional<uint64_t> mPriority;
  Optional<bool> mReadable;
  Optional<nsString> mRemoteCandidateId;
  Optional<bool> mSelected;
  Optional<RTCStatsIceCandidatePairState> mState;

  RTCIceCandidatePairStats();

  explicit inline RTCIceCandidatePairStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCIceCandidatePairStats(const RTCIceCandidatePairStats& aOther)
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
  operator=(const RTCIceCandidatePairStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCIceCandidatePairStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCIceCandidatePairStats : public RTCIceCandidatePairStats
{
  inline FastRTCIceCandidatePairStats()
    : RTCIceCandidatePairStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCIceCandidateStats : public RTCStats
{
  Optional<nsString> mCandidateId;
  Optional<RTCStatsIceCandidateType> mCandidateType;
  Optional<nsString> mComponentId;
  Optional<nsString> mIpAddress;
  Optional<nsString> mMozLocalTransport;
  Optional<int32_t> mPortNumber;
  Optional<nsString> mTransport;

  RTCIceCandidateStats();

  explicit inline RTCIceCandidateStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCIceCandidateStats(const RTCIceCandidateStats& aOther)
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
  operator=(const RTCIceCandidateStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCIceCandidateStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCIceCandidateStats : public RTCIceCandidateStats
{
  inline FastRTCIceCandidateStats()
    : RTCIceCandidateStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCIceComponentStats : public RTCStats
{
  Optional<bool> mActiveConnection;
  Optional<uint32_t> mBytesReceived;
  Optional<uint32_t> mBytesSent;
  Optional<int32_t> mComponent;
  Optional<nsString> mTransportId;

  RTCIceComponentStats();

  explicit inline RTCIceComponentStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCIceComponentStats(const RTCIceComponentStats& aOther)
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
  operator=(const RTCIceComponentStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCIceComponentStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCIceComponentStats : public RTCIceComponentStats
{
  inline FastRTCIceComponentStats()
    : RTCIceComponentStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCMediaStreamStats : public RTCStats
{
  Optional<nsString> mStreamIdentifier;
  Optional<Sequence<nsString>> mTrackIds;

  RTCMediaStreamStats();

  explicit inline RTCMediaStreamStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCMediaStreamStats(const RTCMediaStreamStats& aOther)
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
  operator=(const RTCMediaStreamStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCMediaStreamStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCMediaStreamStats : public RTCMediaStreamStats
{
  inline FastRTCMediaStreamStats()
    : RTCMediaStreamStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCMediaStreamTrackStats : public RTCStats
{
  Optional<double> mAudioLevel;
  Optional<double> mEchoReturnLoss;
  Optional<double> mEchoReturnLossEnhancement;
  Optional<uint32_t> mFrameHeight;
  Optional<uint32_t> mFrameWidth;
  Optional<uint32_t> mFramesCorrupted;
  Optional<uint32_t> mFramesDecoded;
  Optional<uint32_t> mFramesDropped;
  Optional<double> mFramesPerSecond;
  Optional<uint32_t> mFramesReceived;
  Optional<uint32_t> mFramesSent;
  Optional<bool> mRemoteSource;
  Optional<Sequence<nsString>> mSsrcIds;
  Optional<nsString> mTrackIdentifier;

  RTCMediaStreamTrackStats();

  explicit inline RTCMediaStreamTrackStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCMediaStreamTrackStats(const RTCMediaStreamTrackStats& aOther)
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
  operator=(const RTCMediaStreamTrackStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCMediaStreamTrackStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCMediaStreamTrackStats : public RTCMediaStreamTrackStats
{
  inline FastRTCMediaStreamTrackStats()
    : RTCMediaStreamTrackStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCRTPStreamStats : public RTCStats
{
  Optional<double> mBitrateMean;
  Optional<double> mBitrateStdDev;
  Optional<nsString> mCodecId;
  Optional<double> mFramerateMean;
  Optional<double> mFramerateStdDev;
  bool mIsRemote;
  Optional<nsString> mMediaTrackId;
  Optional<nsString> mMediaType;
  Optional<nsString> mRemoteId;
  Optional<nsString> mSsrc;
  Optional<nsString> mTransportId;

  RTCRTPStreamStats();

  explicit inline RTCRTPStreamStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCRTPStreamStats(const RTCRTPStreamStats& aOther)
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
  operator=(const RTCRTPStreamStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCRTPStreamStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCRTPStreamStats : public RTCRTPStreamStats
{
  inline FastRTCRTPStreamStats()
    : RTCRTPStreamStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCTransportStats : public RTCStats
{
  Optional<uint32_t> mBytesReceived;
  Optional<uint32_t> mBytesSent;

  RTCTransportStats();

  explicit inline RTCTransportStats(const FastDictionaryInitializer& )
    : RTCStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCTransportStats(const RTCTransportStats& aOther)
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
  operator=(const RTCTransportStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCTransportStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCTransportStats : public RTCTransportStats
{
  inline FastRTCTransportStats()
    : RTCTransportStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCInboundRTPStreamStats : public RTCRTPStreamStats
{
  Optional<uint64_t> mBytesReceived;
  Optional<uint32_t> mDiscardedPackets;
  Optional<double> mJitter;
  Optional<int32_t> mMozAvSyncDelay;
  Optional<int32_t> mMozJitterBufferDelay;
  Optional<int32_t> mMozRtt;
  Optional<uint32_t> mPacketsLost;
  Optional<uint32_t> mPacketsReceived;

  RTCInboundRTPStreamStats();

  explicit inline RTCInboundRTPStreamStats(const FastDictionaryInitializer& )
    : RTCRTPStreamStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCInboundRTPStreamStats(const RTCInboundRTPStreamStats& aOther)
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
  operator=(const RTCInboundRTPStreamStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCInboundRTPStreamStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCInboundRTPStreamStats : public RTCInboundRTPStreamStats
{
  inline FastRTCInboundRTPStreamStats()
    : RTCInboundRTPStreamStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCOutboundRTPStreamStats : public RTCRTPStreamStats
{
  Optional<uint64_t> mBytesSent;
  Optional<uint32_t> mDroppedFrames;
  Optional<uint32_t> mPacketsSent;
  Optional<double> mTargetBitrate;

  RTCOutboundRTPStreamStats();

  explicit inline RTCOutboundRTPStreamStats(const FastDictionaryInitializer& )
    : RTCRTPStreamStats(FastDictionaryInitializer())
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCOutboundRTPStreamStats(const RTCOutboundRTPStreamStats& aOther)
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
  operator=(const RTCOutboundRTPStreamStats& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCOutboundRTPStreamStatsAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCOutboundRTPStreamStats : public RTCOutboundRTPStreamStats
{
  inline FastRTCOutboundRTPStreamStats()
    : RTCOutboundRTPStreamStats(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


struct RTCStatsReportInternal : public DictionaryBase
{
  Optional<bool> mClosed;
  Optional<Sequence<RTCCodecStats>> mCodecStats;
  Optional<Sequence<RTCIceCandidatePairStats>> mIceCandidatePairStats;
  Optional<Sequence<RTCIceCandidateStats>> mIceCandidateStats;
  Optional<Sequence<RTCIceComponentStats>> mIceComponentStats;
  Optional<Sequence<RTCInboundRTPStreamStats>> mInboundRTPStreamStats;
  Optional<nsString> mLocalSdp;
  Optional<Sequence<RTCMediaStreamStats>> mMediaStreamStats;
  Optional<Sequence<RTCMediaStreamTrackStats>> mMediaStreamTrackStats;
  Optional<Sequence<RTCOutboundRTPStreamStats>> mOutboundRTPStreamStats;
  nsString mPcid;
  Optional<nsString> mRemoteSdp;
  Optional<double> mTimestamp;
  Optional<Sequence<RTCTransportStats>> mTransportStats;

  RTCStatsReportInternal();

  explicit inline RTCStatsReportInternal(const FastDictionaryInitializer& )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

  explicit inline RTCStatsReportInternal(const RTCStatsReportInternal& aOther)
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
  operator=(const RTCStatsReportInternal& aOther);

private:
  static bool
  InitIds(JSContext* cx, RTCStatsReportInternalAtoms* atomsCache);
};

namespace binding_detail {
struct FastRTCStatsReportInternal : public RTCStatsReportInternal
{
  inline FastRTCStatsReportInternal()
    : RTCStatsReportInternal(FastDictionaryInitializer())
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class RTCStatsReportCallback : public CallbackFunction
{
public:
  explicit inline RTCStatsReportCallback(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCx, aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS::IsCallable(mCallback));
  }

  explicit inline RTCStatsReportCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisVal, RTCStatsReport& obj, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "RTCStatsReportCallback";
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
    return Call(s.GetContext(), thisValJS, obj, aRv);
  }

  inline void
  Call(RTCStatsReport& obj, ErrorResult& aRv, const char* aExecutionReason = nullptr, ExceptionHandling aExceptionHandling = eReportExceptions, JSCompartment* aCompartment = nullptr)
  {
    if (!aExecutionReason) {
      aExecutionReason = "RTCStatsReportCallback";
    }
    CallSetup s(this, aRv, aExecutionReason, aExceptionHandling, aCompartment);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, obj, aRv);
  }

  template <typename T>
  inline void
  Call(const T& thisVal, RTCStatsReport& obj, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(thisVal, obj, rv, aExecutionReason);
  }

  inline void
  Call(RTCStatsReport& obj, const char* aExecutionReason = nullptr)
  {
    IgnoredErrorResult rv;
    return Call(obj, rv, aExecutionReason, eReportExceptions, nullptr);
  }

  inline bool
  operator==(const RTCStatsReportCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, RTCStatsReport& obj, ErrorResult& aRv);
};


namespace RTCStatsReportBinding {

  typedef mozilla::dom::RTCStatsReport NativeType;

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
  Wrap(JSContext* aCx, mozilla::dom::RTCStatsReport* aObject, nsWrapperCache* aCache, JS::Handle<JSObject*> aGivenProto, JS::MutableHandle<JSObject*> aReflector);

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

} // namespace RTCStatsReportBinding



class RTCStatsReportJSImpl : public CallbackInterface
{
public:
  explicit inline RTCStatsReportJSImpl(JSContext* aCx, JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCx, aCallback, aIncumbentGlobal)
  {
  }

  void ForEach(RTCStatsReportCallback& callbackFn, JS::Handle<JS::Value> thisArg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Get(const nsAString& key, JS::MutableHandle<JSObject*> aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  bool Has(const nsAString& key, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const RTCStatsReportJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  void GetMozPcid(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

private:
  static bool
  InitIds(JSContext* cx, RTCStatsReportAtoms* atomsCache);
};


class RTCStatsReport final : public nsSupportsWeakReference,
                             public nsWrapperCache
{
public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(RTCStatsReport)

private:
  RefPtr<RTCStatsReportJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  RTCStatsReport(JS::Handle<JSObject*> aJSImplObject, nsIGlobalObject* aParent);

private:
  ~RTCStatsReport();

public:
  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  void GetMozPcid(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void ForEach(RTCStatsReportCallback& callbackFn, JS::Handle<JS::Value> thisArg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Get(const nsAString& key, JS::MutableHandle<JSObject*> aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  bool Has(const nsAString& key, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_RTCStatsReportBinding_h
