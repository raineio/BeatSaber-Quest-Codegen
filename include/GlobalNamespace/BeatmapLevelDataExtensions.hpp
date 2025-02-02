// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: PreviewDifficultyBeatmap
  class PreviewDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelDataExtensions
  class BeatmapLevelDataExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataExtensions*, "", "BeatmapLevelDataExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapLevelDataExtensions : public ::Il2CppObject {
    public:
    // static public IDifficultyBeatmap GetDifficultyBeatmap(IBeatmapLevelData beatmapLevelData, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty difficulty)
    // Offset: 0x156E5DC
    static ::GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);
    // static public IDifficultyBeatmapSet GetDifficultyBeatmapSet(IBeatmapLevelData beatmapLevelData, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x156E994
    static ::GlobalNamespace::IDifficultyBeatmapSet* GetDifficultyBeatmapSet(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // static public IDifficultyBeatmap GetDifficultyBeatmap(IBeatmapLevelData beatmapLevelData, PreviewDifficultyBeatmap previewDifficultyBeatmap)
    // Offset: 0x156EDD8
    static ::GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::PreviewDifficultyBeatmap* previewDifficultyBeatmap);
    // static public IDifficultyBeatmapSet GetDifficultyBeatmapSet(IBeatmapLevelData beatmapLevelData, System.String beatmapCharacteristicName)
    // Offset: 0x156EDF8
    static ::GlobalNamespace::IDifficultyBeatmapSet* GetDifficultyBeatmapSet(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::StringW beatmapCharacteristicName);
  }; // BeatmapLevelDataExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap
// Il2CppName: GetDifficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* difficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, beatmapCharacteristic, difficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet
// Il2CppName: GetDifficultyBeatmapSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, beatmapCharacteristic});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap
// Il2CppName: GetDifficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::PreviewDifficultyBeatmap*)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* previewDifficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, previewDifficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet
// Il2CppName: GetDifficultyBeatmapSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (*)(::GlobalNamespace::IBeatmapLevelData*, ::StringW)>(&GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelData")->byval_arg;
    static auto* beatmapCharacteristicName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataExtensions*), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData, beatmapCharacteristicName});
  }
};
