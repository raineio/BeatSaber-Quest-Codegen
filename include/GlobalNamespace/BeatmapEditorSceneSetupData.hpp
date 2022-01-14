// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEditorSceneSetupData
  class BeatmapEditorSceneSetupData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BeatmapEditorSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEditorSceneSetupData*, "", "BeatmapEditorSceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEditorSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEditorSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _levelDirPath
    // Size: 0x8
    // Offset: 0x10
    ::StringW levelDirPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _levelAssetPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW levelAssetPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _levelDirPath
    ::StringW& dyn__levelDirPath();
    // Get instance field reference: private System.String _levelAssetPath
    ::StringW& dyn__levelAssetPath();
    // public System.String get_levelDirPath()
    // Offset: 0x131EC04
    ::StringW get_levelDirPath();
    // public System.String get_levelAssetPath()
    // Offset: 0x131EC0C
    ::StringW get_levelAssetPath();
    // public System.Void .ctor(System.String levelDirPath, System.String levelAssetPath)
    // Offset: 0x131EC14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEditorSceneSetupData* New_ctor(::StringW levelDirPath, ::StringW levelAssetPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapEditorSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEditorSceneSetupData*, creationType>(levelDirPath, levelAssetPath)));
    }
  }; // BeatmapEditorSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEditorSceneSetupData), 24 + sizeof(::StringW)> __GlobalNamespace_BeatmapEditorSceneSetupDataSizeCheck;
  static_assert(sizeof(BeatmapEditorSceneSetupData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorSceneSetupData::get_levelDirPath
// Il2CppName: get_levelDirPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapEditorSceneSetupData::*)()>(&GlobalNamespace::BeatmapEditorSceneSetupData::get_levelDirPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEditorSceneSetupData*), "get_levelDirPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorSceneSetupData::get_levelAssetPath
// Il2CppName: get_levelAssetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BeatmapEditorSceneSetupData::*)()>(&GlobalNamespace::BeatmapEditorSceneSetupData::get_levelAssetPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEditorSceneSetupData*), "get_levelAssetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
