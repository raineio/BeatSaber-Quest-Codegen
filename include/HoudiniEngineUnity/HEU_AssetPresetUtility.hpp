// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_AssetPresetUtility
  class HEU_AssetPresetUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetPresetUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetPresetUtility*, "HoudiniEngineUnity", "HEU_AssetPresetUtility");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetPresetUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetPresetUtility : public ::Il2CppObject {
    public:
    // Get static field: static public System.Char[] PRESET_IDENTIFIER
    static ::ArrayW<::Il2CppChar> _get_PRESET_IDENTIFIER();
    // Set static field: static public System.Char[] PRESET_IDENTIFIER
    static void _set_PRESET_IDENTIFIER(::ArrayW<::Il2CppChar> value);
    // Get static field: static public System.Int32 PRESET_VERSION
    static int _get_PRESET_VERSION();
    // Set static field: static public System.Int32 PRESET_VERSION
    static void _set_PRESET_VERSION(int value);
    // static private System.Void .cctor()
    // Offset: 0x1736F6C
    static void _cctor();
    // static public System.Void SaveAssetPresetToFile(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String filePath)
    // Offset: 0x17363F4
    static void SaveAssetPresetToFile(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW filePath);
    // static public System.Void LoadPresetFileIntoAssetAndCook(HoudiniEngineUnity.HEU_HoudiniAsset asset, System.String filePath)
    // Offset: 0x17369C4
    static void LoadPresetFileIntoAssetAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW filePath);
  }; // HoudiniEngineUnity.HEU_AssetPresetUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetPresetUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_AssetPresetUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetPresetUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetPresetUtility::SaveAssetPresetToFile
// Il2CppName: SaveAssetPresetToFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW)>(&HoudiniEngineUnity::HEU_AssetPresetUtility::SaveAssetPresetToFile)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetPresetUtility*), "SaveAssetPresetToFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, filePath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetPresetUtility::LoadPresetFileIntoAssetAndCook
// Il2CppName: LoadPresetFileIntoAssetAndCook
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW)>(&HoudiniEngineUnity::HEU_AssetPresetUtility::LoadPresetFileIntoAssetAndCook)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetPresetUtility*), "LoadPresetFileIntoAssetAndCook", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, filePath});
  }
};
