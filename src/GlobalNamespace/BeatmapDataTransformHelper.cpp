// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapDataTransformHelper
#include "GlobalNamespace/BeatmapDataTransformHelper.hpp"
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: PracticeSettings
#include "GlobalNamespace/PracticeSettings.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapDataTransformHelper.CreateTransformedBeatmapData
GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataTransformHelper::CreateTransformedBeatmapData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PracticeSettings* practiceSettings, bool leftHanded, bool staticLights) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapDataTransformHelper").WithContext("CreateTransformedBeatmapData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "BeatmapDataTransformHelper", il2cpp_utils::NoArgClass<GlobalNamespace::IReadonlyBeatmapData*>(), "CreateTransformedBeatmapData", {}, ::il2cpp_utils::ExtractTypes(beatmapData, gameplayModifiers, practiceSettings, leftHanded, staticLights)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IReadonlyBeatmapData*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, beatmapData, gameplayModifiers, practiceSettings, leftHanded, staticLights);
}
// Autogenerated method: BeatmapDataTransformHelper..ctor
GlobalNamespace::BeatmapDataTransformHelper* GlobalNamespace::BeatmapDataTransformHelper::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapDataTransformHelper").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<BeatmapDataTransformHelper*>());
}