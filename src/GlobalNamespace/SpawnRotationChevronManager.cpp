// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: SpawnRotationChevronManager
#include "GlobalNamespace/SpawnRotationChevronManager.hpp"
// Including type: SpawnRotationChevronManager/DirectionData
#include "GlobalNamespace/SpawnRotationChevronManager_DirectionData.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
// Including type: IAudioTimeSource
#include "GlobalNamespace/IAudioTimeSource.hpp"
// Including type: BeatmapObjectSpawnController
#include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: SpawnRotationProcessor
#include "GlobalNamespace/SpawnRotationProcessor.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: SpawnRotationChevron/Pool
#include "GlobalNamespace/SpawnRotationChevron_Pool.hpp"
// Including type: BeatmapObjectCallbackController/BeatmapObjectCallbackData
#include "GlobalNamespace/BeatmapObjectCallbackController_BeatmapObjectCallbackData.hpp"
// Including type: BeatmapObjectCallbackController/BeatmapEventCallbackData
#include "GlobalNamespace/BeatmapObjectCallbackController_BeatmapEventCallbackData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SpawnRotationChevronManager.Start
void GlobalNamespace::SpawnRotationChevronManager::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnRotationChevronManager").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: SpawnRotationChevronManager.Update
void GlobalNamespace::SpawnRotationChevronManager::Update() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnRotationChevronManager").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: SpawnRotationChevronManager.OnDestroy
void GlobalNamespace::SpawnRotationChevronManager::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnRotationChevronManager").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: SpawnRotationChevronManager.HandleBeatmapObjectCallback
void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback(GlobalNamespace::BeatmapObjectData* beatmapObjectData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnRotationChevronManager").WithContext("HandleBeatmapObjectCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleBeatmapObjectCallback", {}, ::il2cpp_utils::ExtractTypes(beatmapObjectData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, beatmapObjectData);
}
// Autogenerated method: SpawnRotationChevronManager.HandleBeatmapEventCallback
void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapEventCallback(GlobalNamespace::BeatmapEventData* beatmapEventData) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnRotationChevronManager").WithContext("HandleBeatmapEventCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleBeatmapEventCallback", {}, ::il2cpp_utils::ExtractTypes(beatmapEventData)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, beatmapEventData);
}
// Autogenerated method: SpawnRotationChevronManager.HandleBeatmapObjectSpawnControllerDidInit
void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnRotationChevronManager").WithContext("HandleBeatmapObjectSpawnControllerDidInit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleBeatmapObjectSpawnControllerDidInit", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: SpawnRotationChevronManager..ctor
GlobalNamespace::SpawnRotationChevronManager* GlobalNamespace::SpawnRotationChevronManager::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SpawnRotationChevronManager").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<SpawnRotationChevronManager*>());
}