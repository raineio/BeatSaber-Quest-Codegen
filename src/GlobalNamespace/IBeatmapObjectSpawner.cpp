// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: IBeatmapObjectSpawner
#include "GlobalNamespace/IBeatmapObjectSpawner.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Including type: ObstacleData
#include "GlobalNamespace/ObstacleData.hpp"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: BeatmapObjectSpawnMovementData/ObstacleSpawnData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_ObstacleSpawnData.hpp"
// Including type: BeatmapObjectSpawnMovementData/NoteSpawnData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_NoteSpawnData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IBeatmapObjectSpawner.SpawnObstacle
GlobalNamespace::ObstacleController* GlobalNamespace::IBeatmapObjectSpawner::SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ObstacleController*>(this, "SpawnObstacle", obstacleData, obstacleSpawnData, rotation));
}
// Autogenerated method: IBeatmapObjectSpawner.SpawnBombNote
GlobalNamespace::NoteController* GlobalNamespace::IBeatmapObjectSpawner::SpawnBombNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::NoteController*>(this, "SpawnBombNote", noteData, noteSpawnData, rotation));
}
// Autogenerated method: IBeatmapObjectSpawner.SpawnBasicNote
GlobalNamespace::NoteController* GlobalNamespace::IBeatmapObjectSpawner::SpawnBasicNote(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::NoteController*>(this, "SpawnBasicNote", noteData, noteSpawnData, rotation, cutDirectionAngleOffset));
}
