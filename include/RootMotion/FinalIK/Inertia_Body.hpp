// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Inertia
#include "RootMotion/FinalIK/Inertia.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::Inertia::Body);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Inertia::Body*, "RootMotion.FinalIK", "Inertia/Body");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body
  // [TokenAttribute] Offset: FFFFFFFF
  class Inertia::Body : public ::Il2CppObject {
    public:
    // Nested type: ::RootMotion::FinalIK::Inertia::Body::EffectorLink
    class EffectorLink;
    public:
    // [TooltipAttribute] Offset: 0x114A814
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x114A84C
    // public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::RootMotion::FinalIK::Inertia::Body::EffectorLink*> effectorLinks;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::Inertia::Body::EffectorLink*>) == 0x8);
    // [TooltipAttribute] Offset: 0x114A884
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x20
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114A8BC
    // public System.Single acceleration
    // Size: 0x4
    // Offset: 0x24
    float acceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114A8F4
    // [RangeAttribute] Offset: 0x114A8F4
    // public System.Single matchVelocity
    // Size: 0x4
    // Offset: 0x28
    float matchVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x114A948
    // public System.Single gravity
    // Size: 0x4
    // Offset: 0x2C
    float gravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 delta
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 delta;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lazyPoint
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 lazyPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x54
    ::UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0x60
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::Inertia::Body::EffectorLink*>& dyn_effectorLinks();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: public System.Single acceleration
    [[deprecated("Use field access instead!")]] float& dyn_acceleration();
    // Get instance field reference: public System.Single matchVelocity
    [[deprecated("Use field access instead!")]] float& dyn_matchVelocity();
    // Get instance field reference: public System.Single gravity
    [[deprecated("Use field access instead!")]] float& dyn_gravity();
    // Get instance field reference: private UnityEngine.Vector3 delta
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_delta();
    // Get instance field reference: private UnityEngine.Vector3 lazyPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lazyPoint();
    // Get instance field reference: private UnityEngine.Vector3 direction
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_direction();
    // Get instance field reference: private UnityEngine.Vector3 lastPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastPosition();
    // Get instance field reference: private System.Boolean firstUpdate
    [[deprecated("Use field access instead!")]] bool& dyn_firstUpdate();
    // public System.Void .ctor()
    // Offset: 0x2459EF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Inertia::Body* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::Inertia::Body::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Inertia::Body*, creationType>()));
    }
    // public System.Void Reset()
    // Offset: 0x24599DC
    void Reset();
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight, System.Single deltaTime)
    // Offset: 0x2459B74
    void Update(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, float deltaTime);
  }; // RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body
  #pragma pack(pop)
  static check_size<sizeof(Inertia::Body), 96 + sizeof(bool)> __RootMotion_FinalIK_Inertia_BodySizeCheck;
  static_assert(sizeof(Inertia::Body) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::Body::*)()>(&RootMotion::FinalIK::Inertia::Body::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia::Body*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::Body::*)(::RootMotion::FinalIK::IKSolverFullBodyBiped*, float, float)>(&RootMotion::FinalIK::Inertia::Body::Update)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia::Body*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight, deltaTime});
  }
};
