// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DirectionalLightWithId
  class DirectionalLightWithId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithId*, "", "DirectionalLightWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalLightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class DirectionalLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // private DirectionalLight _light
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::DirectionalLight* light;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DirectionalLight*) == 0x8);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x38
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minIntensity
    // Size: 0x4
    // Offset: 0x3C
    float minIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private DirectionalLight _light
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DirectionalLight*& dyn__light();
    // Get instance field reference: private System.Single _intensity
    [[deprecated("Use field access instead!")]] float& dyn__intensity();
    // Get instance field reference: private System.Single _minIntensity
    [[deprecated("Use field access instead!")]] float& dyn__minIntensity();
    // public System.Void .ctor()
    // Offset: 0x1E78AE0
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DirectionalLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalLightWithId*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1E78A24
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // DirectionalLightWithId
  #pragma pack(pop)
  static check_size<sizeof(DirectionalLightWithId), 60 + sizeof(float)> __GlobalNamespace_DirectionalLightWithIdSizeCheck;
  static_assert(sizeof(DirectionalLightWithId) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DirectionalLightWithId::*)(::UnityEngine::Color)>(&GlobalNamespace::DirectionalLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
