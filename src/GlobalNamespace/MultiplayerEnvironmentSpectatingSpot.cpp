// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerEnvironmentSpectatingSpot
#include "GlobalNamespace/MultiplayerEnvironmentSpectatingSpot.hpp"
// Including type: MultiplayerSpectatingSpotManager
#include "GlobalNamespace/MultiplayerSpectatingSpotManager.hpp"
// Including type: MultiplayerActivePlayersTimeOffsetAverage
#include "GlobalNamespace/MultiplayerActivePlayersTimeOffsetAverage.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: IMultiplayerObservable
#include "GlobalNamespace/IMultiplayerObservable.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.Start
void GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.OnDisable
void GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::OnDisable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("OnDisable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDisable", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.add_hasBeenRemovedEvent
void GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::add_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("add_hasBeenRemovedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_hasBeenRemovedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.remove_hasBeenRemovedEvent
void GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::remove_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("remove_hasBeenRemovedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_hasBeenRemovedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.get_observable
GlobalNamespace::IMultiplayerObservable* GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_observable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("get_observable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::IMultiplayerObservable*>(), "get_observable", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IMultiplayerObservable*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.get_spotName
::Il2CppString* GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_spotName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("get_spotName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_spotName", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.get_isMain
bool GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::get_isMain() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("get_isMain");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_isMain", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.SetIsObserved
void GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::SetIsObserved(bool isObserved) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("SetIsObserved");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetIsObserved", {}, ::il2cpp_utils::ExtractTypes(isObserved)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, isObserved);
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot..ctor
GlobalNamespace::MultiplayerEnvironmentSpectatingSpot* GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerEnvironmentSpectatingSpot*>());
}
// Autogenerated method: MultiplayerEnvironmentSpectatingSpot.IMultiplayerSpectatingSpot.get_transform
UnityEngine::Transform* GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::GlobalNamespace_IMultiplayerSpectatingSpot_get_transform() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerEnvironmentSpectatingSpot").WithContext("IMultiplayerSpectatingSpot.get_transform");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<UnityEngine::Transform*>(), "IMultiplayerSpectatingSpot.get_transform", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<UnityEngine::Transform*, false>(this, ___internal__method);
}