// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PreviewDifficultyBeatmapSetExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PreviewDifficultyBeatmapSetExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PreviewDifficultyBeatmapSetExtensions
    PreviewDifficultyBeatmapSetExtensions() noexcept {}
    // static public BeatmapCharacteristicSO[] GetBeatmapCharacteristics(PreviewDifficultyBeatmapSet[] previewDifficultyBeatmapSet)
    // Offset: 0x10A7BA0
    static ::Array<GlobalNamespace::BeatmapCharacteristicSO*>* GetBeatmapCharacteristics(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSet);
    // static public PreviewDifficultyBeatmapSet[] GetPreviewDifficultyBeatmapSetWithout360Movement(PreviewDifficultyBeatmapSet[] previewDifficultyBeatmapSet)
    // Offset: 0x10A7344
    static ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* GetPreviewDifficultyBeatmapSetWithout360Movement(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSet);
  }; // PreviewDifficultyBeatmapSetExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*, "", "PreviewDifficultyBeatmapSetExtensions");
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics
// Il2CppName: GetBeatmapCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::BeatmapCharacteristicSO*>* (*)(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*)>(&GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*), "GetBeatmapCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement
// Il2CppName: GetPreviewDifficultyBeatmapSetWithout360Movement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* (*)(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*)>(&GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*), "GetPreviewDifficultyBeatmapSetWithout360Movement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*>()});
  }
};
