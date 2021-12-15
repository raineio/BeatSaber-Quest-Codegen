// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshCollider
  class MeshCollider;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::MeshCollider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshCollider*, "UnityEngine", "MeshCollider");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MeshCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: EC814C
  // [RequiredByNativeCodeAttribute] Offset: EC814C
  // [NativeHeaderAttribute] Offset: EC814C
  class MeshCollider : public UnityEngine::Collider {
    public:
    // public UnityEngine.Mesh get_sharedMesh()
    // Offset: 0x26B5BAC
    UnityEngine::Mesh* get_sharedMesh();
    // public System.Void set_sharedMesh(UnityEngine.Mesh value)
    // Offset: 0x26B5BEC
    void set_sharedMesh(UnityEngine::Mesh* value);
    // public System.Void set_convex(System.Boolean value)
    // Offset: 0x26B5C3C
    void set_convex(bool value);
  }; // UnityEngine.MeshCollider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MeshCollider::get_sharedMesh
// Il2CppName: get_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh* (UnityEngine::MeshCollider::*)()>(&UnityEngine::MeshCollider::get_sharedMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshCollider*), "get_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshCollider::set_sharedMesh
// Il2CppName: set_sharedMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshCollider::*)(UnityEngine::Mesh*)>(&UnityEngine::MeshCollider::set_sharedMesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshCollider*), "set_sharedMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::MeshCollider::set_convex
// Il2CppName: set_convex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::MeshCollider::*)(bool)>(&UnityEngine::MeshCollider::set_convex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::MeshCollider*), "set_convex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
