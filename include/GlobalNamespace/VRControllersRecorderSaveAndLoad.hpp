// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRControllersRecorderSaveData
  class VRControllersRecorderSaveData;
  // Forward declaring type: VRControllersRecorderData
  class VRControllersRecorderData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VRControllersRecorderSaveAndLoad
  class VRControllersRecorderSaveAndLoad;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::VRControllersRecorderSaveAndLoad);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveAndLoad*, "", "VRControllersRecorderSaveAndLoad");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveAndLoad
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveAndLoad : public ::Il2CppObject {
    public:
    // static private VRControllersRecorderSaveData LoadSaveDataFromFile(System.String filePath)
    // Offset: 0x1BDB528
    static GlobalNamespace::VRControllersRecorderSaveData* LoadSaveDataFromFile(::Il2CppString* filePath);
    // static private VRControllersRecorderSaveData LoadSaveDataFromTextAsset(UnityEngine.TextAsset textAsset)
    // Offset: 0x1BDB6EC
    static GlobalNamespace::VRControllersRecorderSaveData* LoadSaveDataFromTextAsset(UnityEngine::TextAsset* textAsset);
    // static public System.Void LoadFromFile(System.String filePath, VRControllersRecorderData data)
    // Offset: 0x1BDB7E0
    static void LoadFromFile(::Il2CppString* filePath, GlobalNamespace::VRControllersRecorderData* data);
    // static public System.Void SaveToFile(System.String filePath, VRControllersRecorderData data)
    // Offset: 0x1BDBA68
    static void SaveToFile(::Il2CppString* filePath, GlobalNamespace::VRControllersRecorderData* data);
  }; // VRControllersRecorderSaveAndLoad
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveAndLoad::LoadSaveDataFromFile
// Il2CppName: LoadSaveDataFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRControllersRecorderSaveData* (*)(::Il2CppString*)>(&GlobalNamespace::VRControllersRecorderSaveAndLoad::LoadSaveDataFromFile)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderSaveAndLoad*), "LoadSaveDataFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveAndLoad::LoadSaveDataFromTextAsset
// Il2CppName: LoadSaveDataFromTextAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::VRControllersRecorderSaveData* (*)(UnityEngine::TextAsset*)>(&GlobalNamespace::VRControllersRecorderSaveAndLoad::LoadSaveDataFromTextAsset)> {
  static const MethodInfo* get() {
    static auto* textAsset = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderSaveAndLoad*), "LoadSaveDataFromTextAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textAsset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveAndLoad::LoadFromFile
// Il2CppName: LoadFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, GlobalNamespace::VRControllersRecorderData*)>(&GlobalNamespace::VRControllersRecorderSaveAndLoad::LoadFromFile)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("", "VRControllersRecorderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderSaveAndLoad*), "LoadFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveAndLoad::SaveToFile
// Il2CppName: SaveToFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, GlobalNamespace::VRControllersRecorderData*)>(&GlobalNamespace::VRControllersRecorderSaveAndLoad::SaveToFile)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("", "VRControllersRecorderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRControllersRecorderSaveAndLoad*), "SaveToFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, data});
  }
};
