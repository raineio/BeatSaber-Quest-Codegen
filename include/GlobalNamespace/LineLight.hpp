// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LineLight
  class LineLight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LineLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineLight*, "", "LineLight");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: LineLight
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class LineLight : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Vector3 _p0
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 p0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _p1
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 p1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Collections.Generic.List`1<LineLight> _lineLights
    static ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* _get__lineLights();
    // Set static field: static private System.Collections.Generic.List`1<LineLight> _lineLights
    static void _set__lineLights(::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* value);
    // Get instance field reference: private UnityEngine.Vector3 _p0
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__p0();
    // Get instance field reference: private UnityEngine.Vector3 _p1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__p1();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // public UnityEngine.Vector3 get_p0()
    // Offset: 0x1CDA4AC
    ::UnityEngine::Vector3 get_p0();
    // public UnityEngine.Vector3 get_p1()
    // Offset: 0x1CDA4B8
    ::UnityEngine::Vector3 get_p1();
    // public UnityEngine.Color get_color()
    // Offset: 0x1CDA4C4
    ::UnityEngine::Color get_color();
    // static public System.Collections.Generic.List`1<LineLight> get_lineLights()
    // Offset: 0x1CDA4D0
    static ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* get_lineLights();
    // public System.Void .ctor()
    // Offset: 0x1CDA6D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LineLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LineLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LineLight*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CDA6DC
    static void _cctor();
    // protected System.Void OnEnable()
    // Offset: 0x1CDA538
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1CDA5BC
    void OnDisable();
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1CDA640
    void OnDrawGizmos();
  }; // LineLight
  #pragma pack(pop)
  static check_size<sizeof(LineLight), 48 + sizeof(::UnityEngine::Color)> __GlobalNamespace_LineLightSizeCheck;
  static_assert(sizeof(LineLight) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LineLight::get_p0
// Il2CppName: get_p0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::LineLight::*)()>(&GlobalNamespace::LineLight::get_p0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), "get_p0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLight::get_p1
// Il2CppName: get_p1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::LineLight::*)()>(&GlobalNamespace::LineLight::get_p1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), "get_p1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLight::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::LineLight::*)()>(&GlobalNamespace::LineLight::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLight::get_lineLights
// Il2CppName: get_lineLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LineLight*>* (*)()>(&GlobalNamespace::LineLight::get_lineLights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), "get_lineLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LineLight::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LineLight::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLight::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineLight::*)()>(&GlobalNamespace::LineLight::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLight::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineLight::*)()>(&GlobalNamespace::LineLight::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LineLight::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LineLight::*)()>(&GlobalNamespace::LineLight::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LineLight*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
