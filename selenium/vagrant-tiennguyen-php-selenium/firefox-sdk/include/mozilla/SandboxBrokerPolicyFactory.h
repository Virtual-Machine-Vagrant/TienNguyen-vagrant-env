/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=8 sts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_SandboxBrokerPolicyFactory_h
#define mozilla_SandboxBrokerPolicyFactory_h

#include "mozilla/SandboxBroker.h"

namespace mozilla {

class SandboxBrokerPolicyFactory {
public:
  SandboxBrokerPolicyFactory();

#ifdef MOZ_CONTENT_SANDBOX
  UniquePtr<SandboxBroker::Policy> GetContentPolicy(int aPid);
#endif

private:
  UniquePtr<const SandboxBroker::Policy> mCommonContentPolicy;
  // B2G devices tend to have hardware-specific paths used by device
  // drivers, so rollout of filesystem isolation will need per-device
  // testing.  This predicate allows that to happen gradually.
  static bool IsSystemSupported();
};

} // namespace mozilla

#endif // mozilla_SandboxBrokerPolicyFactory_h
