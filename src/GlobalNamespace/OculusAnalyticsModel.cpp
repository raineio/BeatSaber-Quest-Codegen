// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusAnalyticsModel
#include "GlobalNamespace/OculusAnalyticsModel.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OculusAnalyticsModel.get_supportsOpenDataPrivacyPage
bool GlobalNamespace::OculusAnalyticsModel::get_supportsOpenDataPrivacyPage() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusAnalyticsModel").WithContext("get_supportsOpenDataPrivacyPage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_supportsOpenDataPrivacyPage", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: OculusAnalyticsModel.OpenDataPrivacyPage
void GlobalNamespace::OculusAnalyticsModel::OpenDataPrivacyPage() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusAnalyticsModel").WithContext("OpenDataPrivacyPage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OpenDataPrivacyPage", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: OculusAnalyticsModel.LogEvent
void GlobalNamespace::OculusAnalyticsModel::LogEvent(::Il2CppString* eventType, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* eventData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusAnalyticsModel").WithContext("LogEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LogEvent", {}, ::il2cpp_utils::ExtractTypes(eventType, eventData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, eventType, eventData);
}
// Autogenerated method: OculusAnalyticsModel..ctor
GlobalNamespace::OculusAnalyticsModel* GlobalNamespace::OculusAnalyticsModel::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OculusAnalyticsModel").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<OculusAnalyticsModel*>());
}