// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplayerSpectatorController
#include "GlobalNamespace/MultiplayerSpectatorController.hpp"
// Including type: MultiplayerSpectatorController/<SwitchToDefaultSpotWithFadeCoroutine>d__17
#include "GlobalNamespace/MultiplayerSpectatorController_-SwitchToDefaultSpotWithFadeCoroutine-d__17.hpp"
// Including type: MultiplayerSpectatorController/<SwitchToDefaultSpotCoroutine>d__18
#include "GlobalNamespace/MultiplayerSpectatorController_-SwitchToDefaultSpotCoroutine-d__18.hpp"
// Including type: MultiplayerSpectatingSpotManager
#include "GlobalNamespace/MultiplayerSpectatingSpotManager.hpp"
// Including type: MultiplayerLocalInactivePlayerSongSyncController
#include "GlobalNamespace/MultiplayerLocalInactivePlayerSongSyncController.hpp"
// Including type: MultiplayerController/State
#include "GlobalNamespace/MultiplayerController.hpp"
// Including type: FadeInOutController
#include "GlobalNamespace/FadeInOutController.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: IMultiplayerSpectatingSpot
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerSpectatorController.add_spectatingSpotDidChangeEvent
void GlobalNamespace::MultiplayerSpectatorController::add_spectatingSpotDidChangeEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("add_spectatingSpotDidChangeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_spectatingSpotDidChangeEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerSpectatorController.remove_spectatingSpotDidChangeEvent
void GlobalNamespace::MultiplayerSpectatorController::remove_spectatingSpotDidChangeEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("remove_spectatingSpotDidChangeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_spectatingSpotDidChangeEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerSpectatorController.get_currentSpot
GlobalNamespace::IMultiplayerSpectatingSpot* GlobalNamespace::MultiplayerSpectatorController::get_currentSpot() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("get_currentSpot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::IMultiplayerSpectatingSpot*>(), "get_currentSpot", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IMultiplayerSpectatingSpot*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.Awake
void GlobalNamespace::MultiplayerSpectatorController::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Awake", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.Start
void GlobalNamespace::MultiplayerSpectatorController::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.OnDestroy
void GlobalNamespace::MultiplayerSpectatorController::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.SwitchToDefaultSpot
void GlobalNamespace::MultiplayerSpectatorController::SwitchToDefaultSpot() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("SwitchToDefaultSpot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SwitchToDefaultSpot", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.SwitchToPrev
void GlobalNamespace::MultiplayerSpectatorController::SwitchToPrev() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("SwitchToPrev");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SwitchToPrev", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.SwitchToNext
void GlobalNamespace::MultiplayerSpectatorController::SwitchToNext() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("SwitchToNext");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SwitchToNext", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.SwitchToDefaultSpotWithFadeCoroutine
System::Collections::IEnumerator* GlobalNamespace::MultiplayerSpectatorController::SwitchToDefaultSpotWithFadeCoroutine() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("SwitchToDefaultSpotWithFadeCoroutine");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IEnumerator*>(), "SwitchToDefaultSpotWithFadeCoroutine", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.SwitchToDefaultSpotCoroutine
System::Collections::IEnumerator* GlobalNamespace::MultiplayerSpectatorController::SwitchToDefaultSpotCoroutine() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("SwitchToDefaultSpotCoroutine");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::IEnumerator*>(), "SwitchToDefaultSpotCoroutine", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerSpectatorController.SwitchToSpectatingSpot
void GlobalNamespace::MultiplayerSpectatorController::SwitchToSpectatingSpot(GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("SwitchToSpectatingSpot");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SwitchToSpectatingSpot", {}, ::il2cpp_utils::ExtractTypes(spectatingSpot)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, spectatingSpot);
}
// Autogenerated method: MultiplayerSpectatorController.HandleStateChanged
void GlobalNamespace::MultiplayerSpectatorController::HandleStateChanged(GlobalNamespace::MultiplayerController::State state) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext("HandleStateChanged");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleStateChanged", {}, ::il2cpp_utils::ExtractTypes(state)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, state);
}
// Autogenerated method: MultiplayerSpectatorController..ctor
GlobalNamespace::MultiplayerSpectatorController* GlobalNamespace::MultiplayerSpectatorController::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerSpectatorController").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerSpectatorController*>());
}