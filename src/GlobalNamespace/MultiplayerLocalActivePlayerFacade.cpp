// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLocalActivePlayerFacade
#include "GlobalNamespace/MultiplayerLocalActivePlayerFacade.hpp"
// Including type: MultiplayerLocalActivePlayerFacade/Factory
#include "GlobalNamespace/MultiplayerLocalActivePlayerFacade_Factory.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
// Including type: MultiplayerLocalActivePlayerIntroAnimator
#include "GlobalNamespace/MultiplayerLocalActivePlayerIntroAnimator.hpp"
// Including type: MultiplayerLocalActivePlayerOutroAnimator
#include "GlobalNamespace/MultiplayerLocalActivePlayerOutroAnimator.hpp"
// Including type: GameSongController
#include "GlobalNamespace/GameSongController.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerLocalActivePlayerFacade.get_introAnimator
GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("get_introAnimator");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*>(), "get_introAnimator", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.get_outroAnimator
GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("get_outroAnimator");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator*>(), "get_outroAnimator", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerLocalActivePlayerOutroAnimator*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.DisablePlayer
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("DisablePlayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DisablePlayer", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.PauseSpawning
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("PauseSpawning");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "PauseSpawning", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.ResumeSpawning
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("ResumeSpawning");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ResumeSpawning", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.__ForceStopSong
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("__ForceStopSong");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "__ForceStopSong", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.get_songController
GlobalNamespace::IStartSeekSongController* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("get_songController");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::IStartSeekSongController*>(), "get_songController", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IStartSeekSongController*, false>(this, ___internal__method);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.add_playerDidFinishEvent
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("add_playerDidFinishEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_playerDidFinishEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.remove_playerDidFinishEvent
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::LevelCompletionResults*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("remove_playerDidFinishEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_playerDidFinishEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.add_playerNetworkDidFailedEvent
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("add_playerNetworkDidFailedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "add_playerNetworkDidFailedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.remove_playerNetworkDidFailedEvent
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::PlayerNetworkFailReason>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("remove_playerNetworkDidFailedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "remove_playerNetworkDidFailedEvent", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.ReportPlayerDidFinish
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish(GlobalNamespace::LevelCompletionResults* results) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("ReportPlayerDidFinish");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ReportPlayerDidFinish", {}, ::il2cpp_utils::ExtractTypes(results)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, results);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade.ReportPlayerNetworkDidFailed
void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed(GlobalNamespace::PlayerNetworkFailReason failReason) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext("ReportPlayerNetworkDidFailed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "ReportPlayerNetworkDidFailed", {}, ::il2cpp_utils::ExtractTypes(failReason)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, failReason);
}
// Autogenerated method: MultiplayerLocalActivePlayerFacade..ctor
GlobalNamespace::MultiplayerLocalActivePlayerFacade* GlobalNamespace::MultiplayerLocalActivePlayerFacade::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerLocalActivePlayerFacade").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<MultiplayerLocalActivePlayerFacade*>());
}