// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataObstaclesAndBombsTransform
  class BeatmapDataObstaclesAndBombsTransform;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*, "", "BeatmapDataObstaclesAndBombsTransform");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataObstaclesAndBombsTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataObstaclesAndBombsTransform : public ::Il2CppObject {
    public:
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData, GameplayModifiers/EnabledObstacleType enabledObstaclesType, System.Boolean noBombs)
    // Offset: 0x12D0E34
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstaclesType, bool noBombs);
    // static private System.Boolean ShouldUseBeatmapObject(BeatmapObjectData beatmapObjectData, GameplayModifiers/EnabledObstacleType enabledObstaclesType, System.Boolean noBombs)
    // Offset: 0x12D11A8
    static bool ShouldUseBeatmapObject(GlobalNamespace::BeatmapObjectData* beatmapObjectData, GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstaclesType, bool noBombs);
  }; // BeatmapDataObstaclesAndBombsTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IReadonlyBeatmapData* (*)(GlobalNamespace::IReadonlyBeatmapData*, GlobalNamespace::GameplayModifiers::EnabledObstacleType, bool)>(&GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::CreateTransformedData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* enabledObstaclesType = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers/EnabledObstacleType")->byval_arg;
    static auto* noBombs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData, enabledObstaclesType, noBombs});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::ShouldUseBeatmapObject
// Il2CppName: ShouldUseBeatmapObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::BeatmapObjectData*, GlobalNamespace::GameplayModifiers::EnabledObstacleType, bool)>(&GlobalNamespace::BeatmapDataObstaclesAndBombsTransform::ShouldUseBeatmapObject)> {
  static const MethodInfo* get() {
    static auto* beatmapObjectData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectData")->byval_arg;
    static auto* enabledObstaclesType = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers/EnabledObstacleType")->byval_arg;
    static auto* noBombs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*), "ShouldUseBeatmapObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapObjectData, enabledObstaclesType, noBombs});
  }
};
