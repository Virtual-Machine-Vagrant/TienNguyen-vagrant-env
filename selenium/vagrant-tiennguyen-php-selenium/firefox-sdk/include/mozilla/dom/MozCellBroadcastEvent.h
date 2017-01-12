/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim:set ts=2 sw=2 sts=2 et cindent: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/* THIS FILE IS AUTOGENERATED FROM MozCellBroadcastEvent.webidl BY Codegen.py - DO NOT EDIT */

#ifndef mozilla_dom_MozCellBroadcastEvent_h
#define mozilla_dom_MozCellBroadcastEvent_h

#include "mozilla/Attributes.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/Event.h"
#include "mozilla/dom/MozCellBroadcastEventBinding.h"

struct JSContext;
namespace mozilla {
namespace dom {

class MozCellBroadcastEvent : public Event
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS_INHERITED(MozCellBroadcastEvent, Event)
protected:
  virtual ~MozCellBroadcastEvent();
  explicit MozCellBroadcastEvent(mozilla::dom::EventTarget* aOwner);

  RefPtr<CellBroadcastMessage> mMessage;

public:
  virtual MozCellBroadcastEvent* AsMozCellBroadcastEvent() override;

  virtual JSObject* WrapObjectInternal(JSContext* aCx, JS::Handle<JSObject*> aGivenProto) override;

  static already_AddRefed<MozCellBroadcastEvent> Constructor(mozilla::dom::EventTarget* aOwner, const nsAString& aType, const MozCellBroadcastEventInit& aEventInitDict);

  static already_AddRefed<MozCellBroadcastEvent> Constructor(const GlobalObject& aGlobal, const nsAString& aType, const MozCellBroadcastEventInit& aEventInitDict, ErrorResult& aRv);

  CellBroadcastMessage* GetMessage() const;
};

} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_MozCellBroadcastEvent_h
