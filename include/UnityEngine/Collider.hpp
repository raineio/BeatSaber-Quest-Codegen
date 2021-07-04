// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Bounds
  struct Bounds;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Collider
  // [RequiredByNativeCodeAttribute] Offset: DA3360
  // [RequireComponent] Offset: DA3360
  // [NativeHeaderAttribute] Offset: DA3360
  class Collider : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: Collider
    Collider() noexcept {}
    // public System.Boolean get_enabled()
    // Offset: 0x23D6BE0
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x23D6C20
    void set_enabled(bool value);
    // public UnityEngine.Rigidbody get_attachedRigidbody()
    // Offset: 0x23D6C70
    UnityEngine::Rigidbody* get_attachedRigidbody();
    // public System.Boolean get_isTrigger()
    // Offset: 0x23D6CB0
    bool get_isTrigger();
    // public System.Void set_isTrigger(System.Boolean value)
    // Offset: 0x23D6CF0
    void set_isTrigger(bool value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x23D6D40
    UnityEngine::Bounds get_bounds();
    // private System.Void Internal_ClosestPointOnBounds(UnityEngine.Vector3 point, ref UnityEngine.Vector3 outPos, ref System.Single distance)
    // Offset: 0x23D6DFC
    void Internal_ClosestPointOnBounds(UnityEngine::Vector3 point, UnityEngine::Vector3& outPos, float& distance);
    // public UnityEngine.Vector3 ClosestPointOnBounds(UnityEngine.Vector3 position)
    // Offset: 0x23D6ED4
    UnityEngine::Vector3 ClosestPointOnBounds(UnityEngine::Vector3 position);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x23D6DAC
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void Internal_ClosestPointOnBounds_Injected(ref UnityEngine.Vector3 point, ref UnityEngine.Vector3 outPos, ref System.Single distance)
    // Offset: 0x23D6E6C
    void Internal_ClosestPointOnBounds_Injected(UnityEngine::Vector3& point, UnityEngine::Vector3& outPos, float& distance);
  }; // UnityEngine.Collider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Collider*, "UnityEngine", "Collider");
// Writing MetadataGetter for method: UnityEngine::Collider::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_enabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(bool)>(&UnityEngine::Collider::set_enabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_attachedRigidbody
// Il2CppName: get_attachedRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rigidbody* (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_attachedRigidbody)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_attachedRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_isTrigger
// Il2CppName: get_isTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_isTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_isTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::set_isTrigger
// Il2CppName: set_isTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(bool)>(&UnityEngine::Collider::set_isTrigger)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "set_isTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Bounds (UnityEngine::Collider::*)()>(&UnityEngine::Collider::get_bounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::Internal_ClosestPointOnBounds
// Il2CppName: Internal_ClosestPointOnBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(UnityEngine::Vector3, UnityEngine::Vector3&, float&)>(&UnityEngine::Collider::Internal_ClosestPointOnBounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "Internal_ClosestPointOnBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::ClosestPointOnBounds
// Il2CppName: ClosestPointOnBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Collider::*)(UnityEngine::Vector3)>(&UnityEngine::Collider::ClosestPointOnBounds)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "ClosestPointOnBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::get_bounds_Injected
// Il2CppName: get_bounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(UnityEngine::Bounds&)>(&UnityEngine::Collider::get_bounds_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "get_bounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Bounds&>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Collider::Internal_ClosestPointOnBounds_Injected
// Il2CppName: Internal_ClosestPointOnBounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Collider::*)(UnityEngine::Vector3&, UnityEngine::Vector3&, float&)>(&UnityEngine::Collider::Internal_ClosestPointOnBounds_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Collider*), "Internal_ClosestPointOnBounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
