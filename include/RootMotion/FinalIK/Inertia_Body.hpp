// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Inertia
#include "RootMotion/FinalIK/Inertia.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Inertia/Body
  class Inertia::Body : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Inertia::Body::EffectorLink
    class EffectorLink;
    // [TooltipAttribute] Offset: 0xE0D820
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0D858
    // public RootMotion.FinalIK.Inertia/Body/EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>* effectorLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0D890
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x20
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D8C8
    // public System.Single acceleration
    // Size: 0x4
    // Offset: 0x24
    float acceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D900
    // [RangeAttribute] Offset: 0xE0D900
    // public System.Single matchVelocity
    // Size: 0x4
    // Offset: 0x28
    float matchVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0D954
    // public System.Single gravity
    // Size: 0x4
    // Offset: 0x2C
    float gravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 delta
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 delta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lazyPoint
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 lazyPoint;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0x60
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Body
    Body(UnityEngine::Transform* transform_ = {}, ::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>* effectorLinks_ = {}, float speed_ = {}, float acceleration_ = {}, float matchVelocity_ = {}, float gravity_ = {}, UnityEngine::Vector3 delta_ = {}, UnityEngine::Vector3 lazyPoint_ = {}, UnityEngine::Vector3 direction_ = {}, UnityEngine::Vector3 lastPosition_ = {}, bool firstUpdate_ = {}) noexcept : transform{transform_}, effectorLinks{effectorLinks_}, speed{speed_}, acceleration{acceleration_}, matchVelocity{matchVelocity_}, gravity{gravity_}, delta{delta_}, lazyPoint{lazyPoint_}, direction{direction_}, lastPosition{lastPosition_}, firstUpdate{firstUpdate_} {}
    // public System.Void Reset()
    // Offset: 0x1E05024
    void Reset();
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight, System.Single deltaTime)
    // Offset: 0x1E051BC
    void Update(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x1E0553C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Inertia::Body* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Inertia::Body::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Inertia::Body*, creationType>()));
    }
  }; // RootMotion.FinalIK.Inertia/Body
  #pragma pack(pop)
  static check_size<sizeof(Inertia::Body), 96 + sizeof(bool)> __RootMotion_FinalIK_Inertia_BodySizeCheck;
  static_assert(sizeof(Inertia::Body) == 0x61);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Inertia::Body*, "RootMotion.FinalIK", "Inertia/Body");
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::Body::*)()>(&RootMotion::FinalIK::Inertia::Body::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia::Body*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::Body::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float, float)>(&RootMotion::FinalIK::Inertia::Body::Update)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia::Body*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::FinalIK::IKSolverFullBodyBiped*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
