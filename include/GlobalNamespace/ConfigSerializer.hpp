// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConfigSerializer
  class ConfigSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConfigSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ConfigSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfigSerializer : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x161B570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConfigSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigSerializer*, creationType>()));
    }
    // static public System.Void SaveConfig(System.Object config, System.String filePath)
    // Offset: 0x161AB70
    static void SaveConfig(::Il2CppObject* config, ::StringW filePath);
    // static public System.Boolean LoadConfig(System.Object config, System.String filePath)
    // Offset: 0x161AFA8
    static bool LoadConfig(::Il2CppObject* config, ::StringW filePath);
  }; // ConfigSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::SaveConfig
// Il2CppName: SaveConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::StringW)>(&GlobalNamespace::ConfigSerializer::SaveConfig)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConfigSerializer*), "SaveConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, filePath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConfigSerializer::LoadConfig
// Il2CppName: LoadConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::StringW)>(&GlobalNamespace::ConfigSerializer::LoadConfig)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConfigSerializer*), "LoadConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config, filePath});
  }
};
