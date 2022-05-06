// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PreviewDifficultyBeatmapSetExtensions
  class PreviewDifficultyBeatmapSetExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*, "", "PreviewDifficultyBeatmapSetExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PreviewDifficultyBeatmapSetExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PreviewDifficultyBeatmapSetExtensions : public ::Il2CppObject {
    public:
    // static public BeatmapCharacteristicSO[] GetBeatmapCharacteristics(PreviewDifficultyBeatmapSet[] previewDifficultyBeatmapSet)
    // Offset: 0x13E08B0
    static ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> GetBeatmapCharacteristics(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*> previewDifficultyBeatmapSet);
    // static public System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> GetPreviewDifficultyBeatmapSetWithout360Movement(System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSet)
    // Offset: 0x13DFCE4
    static ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* GetPreviewDifficultyBeatmapSetWithout360Movement(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSet);
  }; // PreviewDifficultyBeatmapSetExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics
// Il2CppName: GetBeatmapCharacteristics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*> (*)(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*>)>(&GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetBeatmapCharacteristics)> {
  static const MethodInfo* get() {
    static auto* previewDifficultyBeatmapSet = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmapSet"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*), "GetBeatmapCharacteristics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewDifficultyBeatmapSet});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement
// Il2CppName: GetPreviewDifficultyBeatmapSetWithout360Movement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*)>(&GlobalNamespace::PreviewDifficultyBeatmapSetExtensions::GetPreviewDifficultyBeatmapSetWithout360Movement)> {
  static const MethodInfo* get() {
    static auto* previewDifficultyBeatmapSet = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmapSet")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmapSetExtensions*), "GetPreviewDifficultyBeatmapSetWithout360Movement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewDifficultyBeatmapSet});
  }
};
