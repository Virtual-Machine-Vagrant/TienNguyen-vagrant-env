/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM DataStoreChangeEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_DataStoreChangeEvent_h
#define mozilla_dom_DataStoreChangeEvent_h

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/DataStoreChangeEventBinding.h"
#include "mozilla/dom/Event.h"

struct JSContext;
namespace mozilla {
namespace dom {

class DataStoreChangeEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(DataStoreChangeEvent, Event)
protected:
  virtual ~DataStoreChangeEvent();
  explicit DataStoreChangeEvent(mozilla::dom::EventTarget* aOwner);

  nsString mRevisionId;
  Nullable<OwningStringOrUnsignedLong> mId;
  nsString mOperation;
  nsString mOwner;

public:
  virtual DataStoreChangeEvent* AsDataStoreChangeEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<DataStoreChangeEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const DataStoreChangeEventInit& aEventInitDict);

  static already_AddRefed<DataStoreChangeEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const DataStoreChangeEventInit& aEventInitDict, ErrorResult& aRv);

  void GetRevisionId(nsString& aRetVal) const;

  void GetId(Nullable<OwningStringOrUnsignedLong>& aRetVal) const;

  void GetOperation(nsString& aRetVal) const;

  void GetOwner(nsString& aRetVal) const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_DataStoreChangeEvent_h
