// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BasicBeatmapObjectManager
#include "GlobalNamespace/BasicBeatmapObjectManager.hpp"
// Including type: BasicBeatmapObjectManager/InitData
#include "GlobalNamespace/BasicBeatmapObjectManager_InitData.hpp"
// Including type: MonoMemoryPoolContainer`1
#include "GlobalNamespace/MonoMemoryPoolContainer_1.hpp"
// Including type: ObstacleData
#include "GlobalNamespace/ObstacleData.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: GameNoteController/Pool
#include "GlobalNamespace/GameNoteController_Pool.hpp"
// Including type: BombNoteController/Pool
#include "GlobalNamespace/BombNoteController_Pool.hpp"
// Including type: ObstacleController/Pool
#include "GlobalNamespace/ObstacleController_Pool.hpp"
// Including type: BeatmapObjectSpawnMovementData/ObstacleSpawnData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_ObstacleSpawnData.hpp"
// Including type: BeatmapObjectSpawnMovementData/NoteSpawnData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_NoteSpawnData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BasicBeatmapObjectManager..ctor
GlobalNamespace::BasicBeatmapObjectManager* GlobalNamespace::BasicBeatmapObjectManager::New_ctor(GlobalNamespace::BasicBeatmapObjectManager::InitData* initData, GlobalNamespace::GameNoteController::Pool* gameNotePool, GlobalNamespace::BombNoteController::Pool* bombNotePool, GlobalNamespace::ObstacleController::Pool* obstaclePool) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<BasicBeatmapObjectManager*>(initData, gameNotePool, bombNotePool, obstaclePool));
}
// Autogenerated method: BasicBeatmapObjectManager.GetMaxYForRangeInMiddleTwoLanes
float GlobalNamespace::BasicBeatmapObjectManager::GetMaxYForRangeInMiddleTwoLanes(float zStart, float zEnd) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("GetMaxYForRangeInMiddleTwoLanes");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "GetMaxYForRangeInMiddleTwoLanes", {}, ::il2cpp_utils::ExtractTypes(zStart, zEnd)));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method, zStart, zEnd);
}
// Autogenerated method: BasicBeatmapObjectManager.get_activeObstacleControllers
System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>* GlobalNamespace::BasicBeatmapObjectManager::get_activeObstacleControllers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("get_activeObstacleControllers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>*>(), "get_activeObstacleControllers", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>*, false>(this, ___internal__method);
}
// Autogenerated method: BasicBeatmapObjectManager.SpawnObstacleInternal
GlobalNamespace::ObstacleController* GlobalNamespace::BasicBeatmapObjectManager::SpawnObstacleInternal(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("SpawnObstacleInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::ObstacleController*>(), "SpawnObstacleInternal", {}, ::il2cpp_utils::ExtractTypes(obstacleData, obstacleSpawnData, rotation)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::ObstacleController*, false>(this, ___internal__method, obstacleData, obstacleSpawnData, rotation);
}
// Autogenerated method: BasicBeatmapObjectManager.SpawnBombNoteInternal
GlobalNamespace::NoteController* GlobalNamespace::BasicBeatmapObjectManager::SpawnBombNoteInternal(GlobalNamespace::NoteData* bombNoteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("SpawnBombNoteInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::NoteController*>(), "SpawnBombNoteInternal", {}, ::il2cpp_utils::ExtractTypes(bombNoteData, noteSpawnData, rotation)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::NoteController*, false>(this, ___internal__method, bombNoteData, noteSpawnData, rotation);
}
// Autogenerated method: BasicBeatmapObjectManager.SpawnBasicNoteInternal
GlobalNamespace::NoteController* GlobalNamespace::BasicBeatmapObjectManager::SpawnBasicNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("SpawnBasicNoteInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::NoteController*>(), "SpawnBasicNoteInternal", {}, ::il2cpp_utils::ExtractTypes(noteData, noteSpawnData, rotation, cutDirectionAngleOffset)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::NoteController*, false>(this, ___internal__method, noteData, noteSpawnData, rotation, cutDirectionAngleOffset);
}
// Autogenerated method: BasicBeatmapObjectManager.DespawnInternal
void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(GlobalNamespace::NoteController* noteController) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("DespawnInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DespawnInternal", {}, ::il2cpp_utils::ExtractTypes(noteController)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, noteController);
}
// Autogenerated method: BasicBeatmapObjectManager.DespawnInternal
void GlobalNamespace::BasicBeatmapObjectManager::DespawnInternal(GlobalNamespace::ObstacleController* obstacleController) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("DespawnInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DespawnInternal", {}, ::il2cpp_utils::ExtractTypes(obstacleController)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, obstacleController);
}
// Autogenerated method: BasicBeatmapObjectManager.DissolveAllObjects
void GlobalNamespace::BasicBeatmapObjectManager::DissolveAllObjects() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("DissolveAllObjects");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "DissolveAllObjects", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BasicBeatmapObjectManager.HideAllBeatmapObjects
void GlobalNamespace::BasicBeatmapObjectManager::HideAllBeatmapObjects(bool hide) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("HideAllBeatmapObjects");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HideAllBeatmapObjects", {}, ::il2cpp_utils::ExtractTypes(hide)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, hide);
}
// Autogenerated method: BasicBeatmapObjectManager.PauseAllBeatmapObjects
void GlobalNamespace::BasicBeatmapObjectManager::PauseAllBeatmapObjects(bool pause) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BasicBeatmapObjectManager").WithContext("PauseAllBeatmapObjects");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "PauseAllBeatmapObjects", {}, ::il2cpp_utils::ExtractTypes(pause)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, pause);
}