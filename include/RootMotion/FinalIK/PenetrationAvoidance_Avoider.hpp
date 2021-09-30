// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.PenetrationAvoidance
#include "RootMotion/FinalIK/PenetrationAvoidance.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.PenetrationAvoidance/RootMotion.FinalIK.Avoider
  // [TokenAttribute] Offset: FFFFFFFF
  class PenetrationAvoidance::Avoider : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink
    class EffectorLink;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [TooltipAttribute] Offset: 0xEF77C8
    // public UnityEngine.Transform[] raycastFrom
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<UnityEngine::Transform*> raycastFrom;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::Transform*>) == 0x8);
    // [TooltipAttribute] Offset: 0xEF7800
    // public UnityEngine.Transform raycastTo
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* raycastTo;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xEF7838
    // [RangeAttribute] Offset: 0xEF7838
    // public System.Single raycastRadius
    // Size: 0x4
    // Offset: 0x20
    float raycastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: raycastRadius and: effectors
    char __padding2[0x4] = {};
    // [TooltipAttribute] Offset: 0xEF788C
    // public RootMotion.FinalIK.PenetrationAvoidance/RootMotion.FinalIK.Avoider/RootMotion.FinalIK.EffectorLink[] effectors
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*> effectors;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*>) == 0x8);
    // [TooltipAttribute] Offset: 0xEF78C4
    // public System.Single smoothTimeIn
    // Size: 0x4
    // Offset: 0x30
    float smoothTimeIn;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF78FC
    // public System.Single smoothTimeOut
    // Size: 0x4
    // Offset: 0x34
    float smoothTimeOut;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF7934
    // public UnityEngine.LayerMask layers
    // Size: 0x4
    // Offset: 0x38
    UnityEngine::LayerMask layers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // private UnityEngine.Vector3 offset
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 offsetTarget
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 offsetTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 offsetV
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 offsetV;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Transform[] raycastFrom
    ::ArrayW<UnityEngine::Transform*>& dyn_raycastFrom();
    // Get instance field reference: public UnityEngine.Transform raycastTo
    UnityEngine::Transform*& dyn_raycastTo();
    // Get instance field reference: public System.Single raycastRadius
    float& dyn_raycastRadius();
    // Get instance field reference: public RootMotion.FinalIK.PenetrationAvoidance/RootMotion.FinalIK.Avoider/RootMotion.FinalIK.EffectorLink[] effectors
    ::ArrayW<RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*>& dyn_effectors();
    // Get instance field reference: public System.Single smoothTimeIn
    float& dyn_smoothTimeIn();
    // Get instance field reference: public System.Single smoothTimeOut
    float& dyn_smoothTimeOut();
    // Get instance field reference: public UnityEngine.LayerMask layers
    UnityEngine::LayerMask& dyn_layers();
    // Get instance field reference: private UnityEngine.Vector3 offset
    UnityEngine::Vector3& dyn_offset();
    // Get instance field reference: private UnityEngine.Vector3 offsetTarget
    UnityEngine::Vector3& dyn_offsetTarget();
    // Get instance field reference: private UnityEngine.Vector3 offsetV
    UnityEngine::Vector3& dyn_offsetV();
    // public System.Void Solve(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x1C5F19C
    void Solve(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // private UnityEngine.Vector3 GetOffsetTarget(RootMotion.FinalIK.IKSolverFullBodyBiped solver)
    // Offset: 0x1C5F3A8
    UnityEngine::Vector3 GetOffsetTarget(RootMotion::FinalIK::IKSolverFullBodyBiped* solver);
    // private UnityEngine.Vector3 Raycast(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x1C5F540
    UnityEngine::Vector3 Raycast(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
    // public System.Void .ctor()
    // Offset: 0x1C5F7B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PenetrationAvoidance::Avoider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::PenetrationAvoidance::Avoider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PenetrationAvoidance::Avoider*, creationType>()));
    }
  }; // RootMotion.FinalIK.PenetrationAvoidance/RootMotion.FinalIK.Avoider
  #pragma pack(pop)
  static check_size<sizeof(PenetrationAvoidance::Avoider), 84 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_PenetrationAvoidance_AvoiderSizeCheck;
  static_assert(sizeof(PenetrationAvoidance::Avoider) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::PenetrationAvoidance::Avoider*, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::PenetrationAvoidance::Avoider::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::PenetrationAvoidance::Avoider::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float)>(&RootMotion::FinalIK::PenetrationAvoidance::Avoider::Solve)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::PenetrationAvoidance::Avoider*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::PenetrationAvoidance::Avoider::GetOffsetTarget
// Il2CppName: GetOffsetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::PenetrationAvoidance::Avoider::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*)>(&RootMotion::FinalIK::PenetrationAvoidance::Avoider::GetOffsetTarget)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::PenetrationAvoidance::Avoider*), "GetOffsetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::PenetrationAvoidance::Avoider::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::PenetrationAvoidance::Avoider::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::PenetrationAvoidance::Avoider::Raycast)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::PenetrationAvoidance::Avoider*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::PenetrationAvoidance::Avoider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
