// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PointLight
  class PointLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PointLightWithIds
  class PointLightWithIds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PointLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PointLightWithIds*, "", "PointLightWithIds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PointLightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class PointLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
    public:
    public:
    // private PointLight _pointLight
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::PointLight* pointLight;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PointLight*) == 0x8);
    public:
    // Get instance field reference: private PointLight _pointLight
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PointLight*& dyn__pointLight();
    // public System.Void .ctor()
    // Offset: 0x1E81C10
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::.ctor()
    // Base method: System.Void LightWithIds::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointLightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PointLightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointLightWithIds*, creationType>()));
    }
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1E81BF0
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // PointLightWithIds
  #pragma pack(pop)
  static check_size<sizeof(PointLightWithIds), 72 + sizeof(::GlobalNamespace::PointLight*)> __GlobalNamespace_PointLightWithIdsSizeCheck;
  static_assert(sizeof(PointLightWithIds) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PointLightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PointLightWithIds::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PointLightWithIds::*)(::UnityEngine::Color)>(&GlobalNamespace::PointLightWithIds::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PointLightWithIds*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
