// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HEU_ScriptMeshInputUVLayoutExample
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ScriptMeshInputUVLayoutExample : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode
    struct OutputMode;
    // static public System.Void ApplyUVLayoutTo(UnityEngine.GameObject[] gameObjects, HEU_ScriptMeshInputUVLayoutExample/OutputMode outputMode, System.String output_name_suffix)
    // Offset: 0x14385EC
    static void ApplyUVLayoutTo(::ArrayW<UnityEngine::GameObject*> gameObjects, GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode outputMode, ::Il2CppString* output_name_suffix);
    // public System.Void .ctor()
    // Offset: 0x1438DB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ScriptMeshInputUVLayoutExample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ScriptMeshInputUVLayoutExample*, creationType>()));
    }
  }; // HEU_ScriptMeshInputUVLayoutExample
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*, "", "HEU_ScriptMeshInputUVLayoutExample");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::ApplyUVLayoutTo
// Il2CppName: ApplyUVLayoutTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::GameObject*>, GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::OutputMode, ::Il2CppString*)>(&GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::ApplyUVLayoutTo)> {
  static const MethodInfo* get() {
    static auto* gameObjects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* outputMode = &::il2cpp_utils::GetClassFromName("", "HEU_ScriptMeshInputUVLayoutExample/OutputMode")->byval_arg;
    static auto* output_name_suffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample*), "ApplyUVLayoutTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObjects, outputMode, output_name_suffix});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ScriptMeshInputUVLayoutExample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
