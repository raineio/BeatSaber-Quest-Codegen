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
  // Forward declaring type: ExecuteInEditMode
  class ExecuteInEditMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ExecuteInEditMode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExecuteInEditMode*, "UnityEngine", "ExecuteInEditMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ExecuteInEditMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 1045EA4
  class ExecuteInEditMode : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F99BBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteInEditMode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ExecuteInEditMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteInEditMode*, creationType>()));
    }
  }; // UnityEngine.ExecuteInEditMode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ExecuteInEditMode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
