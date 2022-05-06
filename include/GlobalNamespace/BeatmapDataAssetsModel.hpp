// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataAssetsModel
  class BeatmapDataAssetsModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataAssetsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataAssetsModel*, "", "BeatmapDataAssetsModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataAssetsModel
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataAssetsModel : public ::Il2CppObject {
    public:
    // static public System.String BeatmapLevelDataAssetNameForBeatmapLevel(System.String levelID)
    // Offset: 0x1350DD0
    static ::StringW BeatmapLevelDataAssetNameForBeatmapLevel(::StringW levelID);
    // static public System.String AssetBundleNameForBeatmapLevel(System.String levelID)
    // Offset: 0x1350E24
    static ::StringW AssetBundleNameForBeatmapLevel(::StringW levelID);
  }; // BeatmapDataAssetsModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataAssetsModel::BeatmapLevelDataAssetNameForBeatmapLevel
// Il2CppName: BeatmapLevelDataAssetNameForBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::BeatmapDataAssetsModel::BeatmapLevelDataAssetNameForBeatmapLevel)> {
  static const MethodInfo* get() {
    static auto* levelID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataAssetsModel*), "BeatmapLevelDataAssetNameForBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataAssetsModel::AssetBundleNameForBeatmapLevel
// Il2CppName: AssetBundleNameForBeatmapLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::BeatmapDataAssetsModel::AssetBundleNameForBeatmapLevel)> {
  static const MethodInfo* get() {
    static auto* levelID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataAssetsModel*), "AssetBundleNameForBeatmapLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelID});
  }
};
