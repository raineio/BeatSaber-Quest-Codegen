// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: QueryTriggerInteraction
  struct QueryTriggerInteraction;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PhysicsScene
  // [NativeHeaderAttribute] Offset: DA36DC
  struct PhysicsScene/*, public System::ValueType, public System::IEquatable_1<UnityEngine::PhysicsScene>*/ {
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PhysicsScene
    constexpr PhysicsScene(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::PhysicsScene>
    operator System::IEquatable_1<UnityEngine::PhysicsScene>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::PhysicsScene>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // public System.Boolean Equals(UnityEngine.PhysicsScene other)
    // Offset: 0xF2384C
    bool Equals(UnityEngine::PhysicsScene other);
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xF2385C
    bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9A64
    static bool Internal_RaycastTest(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xF23864
    bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, ref UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9B54
    static bool Internal_Raycast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Int32 Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xF2386C
    int Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9C64
    static int Internal_RaycastNonAlloc(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_CapsuleCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9D70
    static bool Query_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_CapsuleCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9EC4
    static bool Internal_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xF23874
    bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_SphereCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23DA02C
    static bool Query_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_SphereCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23DA164
    static bool Internal_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xF23894
    bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 OverlapBoxNonAlloc_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23DA2B4
    static int OverlapBoxNonAlloc_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Int32 OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xF2389C
    int OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9ADC
    static bool Internal_RaycastTest_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, ref UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9BE4
    static bool Internal_Raycast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9CF0
    static int Internal_RaycastNonAlloc_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_CapsuleCast_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 point1, ref UnityEngine.Vector3 point2, System.Single radius, ref UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23D9E24
    static bool Query_CapsuleCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& point1, UnityEngine::Vector3& point2, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_SphereCast_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 origin, System.Single radius, ref UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23DA0CC
    static bool Query_SphereCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& origin, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 OverlapBoxNonAlloc_Internal_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, ref UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x23DA344
    static int OverlapBoxNonAlloc_Internal_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& center, UnityEngine::Vector3& halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion& orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public override System.String ToString()
    // Offset: 0xF23834
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xF2383C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF23844
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.PhysicsScene
  #pragma pack(pop)
  static check_size<sizeof(PhysicsScene), 0 + sizeof(int)> __UnityEngine_PhysicsSceneSizeCheck;
  static_assert(sizeof(PhysicsScene) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::PhysicsScene)>(&UnityEngine::PhysicsScene::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastTest
// Il2CppName: Internal_RaycastTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Ray, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastTest)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_Raycast
// Il2CppName: Internal_Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Ray, float, UnityEngine::RaycastHit&, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_Raycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, ::Array<UnityEngine::RaycastHit>*, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Raycast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::RaycastHit>*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastNonAlloc
// Il2CppName: Internal_RaycastNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::PhysicsScene, UnityEngine::Ray, ::Array<UnityEngine::RaycastHit>*, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastNonAlloc)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::RaycastHit>*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Query_CapsuleCast
// Il2CppName: Query_CapsuleCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, float, UnityEngine::RaycastHit&, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_CapsuleCast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Query_CapsuleCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_CapsuleCast
// Il2CppName: Internal_CapsuleCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_CapsuleCast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_CapsuleCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::CapsuleCast
// Il2CppName: CapsuleCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::CapsuleCast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "CapsuleCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Query_SphereCast
// Il2CppName: Query_SphereCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, float, UnityEngine::Vector3, float, UnityEngine::RaycastHit&, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_SphereCast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Query_SphereCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_SphereCast
// Il2CppName: Internal_SphereCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_SphereCast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_SphereCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::SphereCast
// Il2CppName: SphereCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::RaycastHit&, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::SphereCast)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "SphereCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal
// Il2CppName: OverlapBoxNonAlloc_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::PhysicsScene, UnityEngine::Vector3, UnityEngine::Vector3, ::Array<UnityEngine::Collider*>*, UnityEngine::Quaternion, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "OverlapBoxNonAlloc_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Collider*>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::OverlapBox
// Il2CppName: OverlapBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene::*)(UnityEngine::Vector3, UnityEngine::Vector3, ::Array<UnityEngine::Collider*>*, UnityEngine::Quaternion, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::OverlapBox)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "OverlapBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Collider*>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastTest_Injected
// Il2CppName: Internal_RaycastTest_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene&, UnityEngine::Ray&, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastTest_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastTest_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_Raycast_Injected
// Il2CppName: Internal_Raycast_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene&, UnityEngine::Ray&, float, UnityEngine::RaycastHit&, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_Raycast_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_Raycast_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected
// Il2CppName: Internal_RaycastNonAlloc_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::PhysicsScene&, UnityEngine::Ray&, ::Array<UnityEngine::RaycastHit>*, float, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Internal_RaycastNonAlloc_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Internal_RaycastNonAlloc_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray&>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::RaycastHit>*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Query_CapsuleCast_Injected
// Il2CppName: Query_CapsuleCast_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene&, UnityEngine::Vector3&, UnityEngine::Vector3&, float, UnityEngine::Vector3&, float, UnityEngine::RaycastHit&, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_CapsuleCast_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Query_CapsuleCast_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Query_SphereCast_Injected
// Il2CppName: Query_SphereCast_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::PhysicsScene&, UnityEngine::Vector3&, float, UnityEngine::Vector3&, float, UnityEngine::RaycastHit&, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::Query_SphereCast_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Query_SphereCast_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RaycastHit&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal_Injected
// Il2CppName: OverlapBoxNonAlloc_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::PhysicsScene&, UnityEngine::Vector3&, UnityEngine::Vector3&, ::Array<UnityEngine::Collider*>*, UnityEngine::Quaternion&, int, UnityEngine::QueryTriggerInteraction)>(&UnityEngine::PhysicsScene::OverlapBoxNonAlloc_Internal_Injected)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "OverlapBoxNonAlloc_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::PhysicsScene&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3&>(), ::il2cpp_utils::ExtractIndependentType<::Array<UnityEngine::Collider*>*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion&>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::QueryTriggerInteraction>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::PhysicsScene::*)()>(&UnityEngine::PhysicsScene::ToString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::PhysicsScene::*)()>(&UnityEngine::PhysicsScene::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::PhysicsScene::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::PhysicsScene::*)(::Il2CppObject*)>(&UnityEngine::PhysicsScene::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::PhysicsScene), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
