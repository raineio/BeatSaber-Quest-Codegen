// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColor
  class BloomPrePassBackgroundColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColor*, "", "BloomPrePassBackgroundColor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColor
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColor : public ::GlobalNamespace::BloomPrePassNonLightPass {
    public:
    public:
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x20
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x24
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _grayscaleFactor
    // Size: 0x4
    // Offset: 0x28
    float grayscaleFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: grayscaleFactor and: shader
    char __padding2[0x4] = {};
    // [SpaceAttribute] Offset: 0x10BDC50
    // private UnityEngine.Shader _shader
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10BDC88
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10BDC98
    // Get static field: static private UnityEngine.Material _material
    static ::UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(::UnityEngine::Material* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10BDCA8
    // Get static field: static private System.Boolean _initialized
    static bool _get__initialized();
    // Set static field: static private System.Boolean _initialized
    static void _set__initialized(bool value);
    // Get instance field reference: private System.Single _intensity
    [[deprecated("Use field access instead!")]] float& dyn__intensity();
    // Get instance field reference: private System.Single _minAlpha
    [[deprecated("Use field access instead!")]] float& dyn__minAlpha();
    // Get instance field reference: private System.Single _grayscaleFactor
    [[deprecated("Use field access instead!")]] float& dyn__grayscaleFactor();
    // Get instance field reference: private UnityEngine.Shader _shader
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn__shader();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // public UnityEngine.Color get_color()
    // Offset: 0x1E6AFA8
    ::UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1E6AFB4
    void set_color(::UnityEngine::Color value);
    // private UnityEngine.Color get_bgColor()
    // Offset: 0x1E6AFC0
    ::UnityEngine::Color get_bgColor();
    // private System.Void InitIfNeeded()
    // Offset: 0x1E6B04C
    void InitIfNeeded();
    // public System.Void .ctor()
    // Offset: 0x1E6B2F0
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColor*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E6B374
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    static void _cctor();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1E6B208
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);
  }; // BloomPrePassBackgroundColor
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColor), 56 + sizeof(::UnityEngine::Color)> __GlobalNamespace_BloomPrePassBackgroundColorSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColor) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColor::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::BloomPrePassBackgroundColor::*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColor*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColor::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColor::*)(::UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColor::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColor*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColor::get_bgColor
// Il2CppName: get_bgColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::BloomPrePassBackgroundColor::*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::get_bgColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColor*), "get_bgColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColor::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColor::*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColor*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassBackgroundColor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColor*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColor::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColor::*)(::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassBackgroundColor::Render)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColor*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, viewMatrix, projectionMatrix});
  }
};
