// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LightType
  struct LightType;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: LightShadows
  struct LightShadows;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::Light);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Light*, "UnityEngine", "Light");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Light
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: EB38FC
  // [NativeHeaderAttribute] Offset: EB38FC
  // [RequireComponent] Offset: EB38FC
  // [NativeHeaderAttribute] Offset: EB38FC
  class Light : public UnityEngine::Behaviour {
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
    // private System.Int32 m_BakedIndex
    // Size: 0x4
    // Offset: 0x18
    int m_BakedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 m_BakedIndex
    int& dyn_m_BakedIndex();
    // public UnityEngine.LightType get_type()
    // Offset: 0x1D959DC
    UnityEngine::LightType get_type();
    // public System.Single get_spotAngle()
    // Offset: 0x1D95A1C
    float get_spotAngle();
    // public UnityEngine.Color get_color()
    // Offset: 0x1D95A5C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1D95B08
    void set_color(UnityEngine::Color value);
    // public System.Single get_intensity()
    // Offset: 0x1D95BB0
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x1D95BF0
    void set_intensity(float value);
    // public System.Single get_bounceIntensity()
    // Offset: 0x1D95C40
    float get_bounceIntensity();
    // public System.Single get_range()
    // Offset: 0x1D95C80
    float get_range();
    // public UnityEngine.LightShadows get_shadows()
    // Offset: 0x1D95CC0
    UnityEngine::LightShadows get_shadows();
    // private System.Void get_color_Injected(out UnityEngine.Color ret)
    // Offset: 0x1D95AB8
    void get_color_Injected(ByRef<UnityEngine::Color> ret);
    // private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x1D95B60
    void set_color_Injected(ByRef<UnityEngine::Color> value);
  }; // UnityEngine.Light
  #pragma pack(pop)
  static check_size<sizeof(Light), 24 + sizeof(int)> __UnityEngine_LightSizeCheck;
  static_assert(sizeof(Light) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Light::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LightType (UnityEngine::Light::*)()>(&UnityEngine::Light::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::get_spotAngle
// Il2CppName: get_spotAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Light::*)()>(&UnityEngine::Light::get_spotAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_spotAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::Light::*)()>(&UnityEngine::Light::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Light::*)(UnityEngine::Color)>(&UnityEngine::Light::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Light::*)()>(&UnityEngine::Light::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::set_intensity
// Il2CppName: set_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Light::*)(float)>(&UnityEngine::Light::set_intensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "set_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::get_bounceIntensity
// Il2CppName: get_bounceIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Light::*)()>(&UnityEngine::Light::get_bounceIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_bounceIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::get_range
// Il2CppName: get_range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Light::*)()>(&UnityEngine::Light::get_range)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::get_shadows
// Il2CppName: get_shadows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LightShadows (UnityEngine::Light::*)()>(&UnityEngine::Light::get_shadows)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_shadows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::get_color_Injected
// Il2CppName: get_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Light::*)(ByRef<UnityEngine::Color>)>(&UnityEngine::Light::get_color_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "get_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Light::set_color_Injected
// Il2CppName: set_color_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Light::*)(ByRef<UnityEngine::Color>)>(&UnityEngine::Light::set_color_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Light*), "set_color_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
