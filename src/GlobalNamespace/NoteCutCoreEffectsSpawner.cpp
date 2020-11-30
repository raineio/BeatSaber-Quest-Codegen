// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteCutCoreEffectsSpawner
#include "GlobalNamespace/NoteCutCoreEffectsSpawner.hpp"
// Including type: NoteCutParticlesEffect
#include "GlobalNamespace/NoteCutParticlesEffect.hpp"
// Including type: NoteDebrisSpawner
#include "GlobalNamespace/NoteDebrisSpawner.hpp"
// Including type: NoteCutHapticEffect
#include "GlobalNamespace/NoteCutHapticEffect.hpp"
// Including type: ShockwaveEffect
#include "GlobalNamespace/ShockwaveEffect.hpp"
// Including type: BombExplosionEffect
#include "GlobalNamespace/BombExplosionEffect.hpp"
// Including type: ColorManager
#include "GlobalNamespace/ColorManager.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteCutCoreEffectsSpawner.Start
void GlobalNamespace::NoteCutCoreEffectsSpawner::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutCoreEffectsSpawner").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NoteCutCoreEffectsSpawner.OnDestroy
void GlobalNamespace::NoteCutCoreEffectsSpawner::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutCoreEffectsSpawner").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: NoteCutCoreEffectsSpawner.HandleNoteWasCut
void GlobalNamespace::NoteCutCoreEffectsSpawner::HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutCoreEffectsSpawner").WithContext("HandleNoteWasCut");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleNoteWasCut", {}, ::il2cpp_utils::ExtractTypes(noteController, noteCutInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController, noteCutInfo);
}
// Autogenerated method: NoteCutCoreEffectsSpawner.SpawnNoteCutEffect
void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnNoteCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutCoreEffectsSpawner").WithContext("SpawnNoteCutEffect");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SpawnNoteCutEffect", {}, ::il2cpp_utils::ExtractTypes(pos, noteController, noteCutInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, pos, noteController, noteCutInfo);
}
// Autogenerated method: NoteCutCoreEffectsSpawner.SpawnBombCutEffect
void GlobalNamespace::NoteCutCoreEffectsSpawner::SpawnBombCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutCoreEffectsSpawner").WithContext("SpawnBombCutEffect");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SpawnBombCutEffect", {}, ::il2cpp_utils::ExtractTypes(pos, noteController, noteCutInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, pos, noteController, noteCutInfo);
}
// Autogenerated method: NoteCutCoreEffectsSpawner..ctor
GlobalNamespace::NoteCutCoreEffectsSpawner* GlobalNamespace::NoteCutCoreEffectsSpawner::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutCoreEffectsSpawner").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<NoteCutCoreEffectsSpawner*>());
}