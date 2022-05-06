// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.ScriptableRenderContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1047D48
  // [NativeTypeAttribute] Offset: 1047D48
  // [NativeHeaderAttribute] Offset: 1047D48
  // [NativeHeaderAttribute] Offset: 1047D48
  // [NativeHeaderAttribute] Offset: 1047D48
  // [NativeHeaderAttribute] Offset: 1047D48
  struct ScriptableRenderContext/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*/ {
    public:
    public:
    // private System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: ScriptableRenderContext
    constexpr ScriptableRenderContext(::System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: private System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0x2116B78
    // ABORTED: conflicts with another method.  ScriptableRenderContext(::System::IntPtr ptr);
    // private System.Int32 GetNumberOfCameras_Internal()
    // Offset: 0x2117220
    int GetNumberOfCameras_Internal();
    // private UnityEngine.Camera GetCamera_Internal(System.Int32 index)
    // Offset: 0x21172A0
    ::UnityEngine::Camera* GetCamera_Internal(int index);
    // System.Int32 GetNumberOfCameras()
    // Offset: 0x2116968
    int GetNumberOfCameras();
    // UnityEngine.Camera GetCamera(System.Int32 index)
    // Offset: 0x21169A8
    ::UnityEngine::Camera* GetCamera(int index);
    // public System.Boolean Equals(UnityEngine.Rendering.ScriptableRenderContext other)
    // Offset: 0x2117340
    bool Equals(::UnityEngine::Rendering::ScriptableRenderContext other);
    // static private System.Int32 GetNumberOfCameras_Internal_Injected(ref UnityEngine.Rendering.ScriptableRenderContext _unity_self)
    // Offset: 0x2117260
    static int GetNumberOfCameras_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self);
    // static private UnityEngine.Camera GetCamera_Internal_Injected(ref UnityEngine.Rendering.ScriptableRenderContext _unity_self, System.Int32 index)
    // Offset: 0x21172F0
    static ::UnityEngine::Camera* GetCamera_Internal_Injected(ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, int index);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x21173B8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2117444
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.ScriptableRenderContext
  #pragma pack(pop)
  static check_size<sizeof(ScriptableRenderContext), 0 + sizeof(::System::IntPtr)> __UnityEngine_Rendering_ScriptableRenderContextSizeCheck;
  static_assert(sizeof(ScriptableRenderContext) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::ScriptableRenderContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras_Internal
// Il2CppName: GetNumberOfCameras_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ScriptableRenderContext::*)()>(&UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "GetNumberOfCameras_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::GetCamera_Internal
// Il2CppName: GetCamera_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::Rendering::ScriptableRenderContext::*)(int)>(&UnityEngine::Rendering::ScriptableRenderContext::GetCamera_Internal)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "GetCamera_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras
// Il2CppName: GetNumberOfCameras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ScriptableRenderContext::*)()>(&UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "GetNumberOfCameras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::GetCamera
// Il2CppName: GetCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (UnityEngine::Rendering::ScriptableRenderContext::*)(int)>(&UnityEngine::Rendering::ScriptableRenderContext::GetCamera)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "GetCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ScriptableRenderContext::*)(::UnityEngine::Rendering::ScriptableRenderContext)>(&UnityEngine::Rendering::ScriptableRenderContext::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras_Internal_Injected
// Il2CppName: GetNumberOfCameras_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::Rendering::ScriptableRenderContext>)>(&UnityEngine::Rendering::ScriptableRenderContext::GetNumberOfCameras_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "GetNumberOfCameras_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::GetCamera_Internal_Injected
// Il2CppName: GetCamera_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (*)(ByRef<::UnityEngine::Rendering::ScriptableRenderContext>, int)>(&UnityEngine::Rendering::ScriptableRenderContext::GetCamera_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "GetCamera_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ScriptableRenderContext::*)(::Il2CppObject*)>(&UnityEngine::Rendering::ScriptableRenderContext::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ScriptableRenderContext::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ScriptableRenderContext::*)()>(&UnityEngine::Rendering::ScriptableRenderContext::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ScriptableRenderContext), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
