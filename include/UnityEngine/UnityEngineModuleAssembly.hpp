// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: UnityEngineModuleAssembly
  class UnityEngineModuleAssembly;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UnityEngineModuleAssembly);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityEngineModuleAssembly*, "UnityEngine", "UnityEngineModuleAssembly");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnityEngineModuleAssembly
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1087EF4
  // [VisibleToOtherModulesAttribute] Offset: 1087EF4
  class UnityEngineModuleAssembly : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B95F28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityEngineModuleAssembly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UnityEngineModuleAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityEngineModuleAssembly*, creationType>()));
    }
  }; // UnityEngine.UnityEngineModuleAssembly
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UnityEngineModuleAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
