// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.RagdollUtility
#include "RootMotion/FinalIK/RagdollUtility.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Joint
  class Joint;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(RootMotion::FinalIK::RagdollUtility::Rigidbone);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RagdollUtility::Rigidbone*, "RootMotion.FinalIK", "RagdollUtility/Rigidbone");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Rigidbone
  // [TokenAttribute] Offset: FFFFFFFF
  class RagdollUtility::Rigidbone : public ::Il2CppObject {
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
    // public UnityEngine.Rigidbody r
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Rigidbody* r;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.Transform t
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* t;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Collider collider
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // public UnityEngine.Joint joint
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Joint* joint;
    // Field size check
    static_assert(sizeof(UnityEngine::Joint*) == 0x8);
    // public UnityEngine.Rigidbody c
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Rigidbody* c;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // public System.Boolean updateAnchor
    // Size: 0x1
    // Offset: 0x38
    bool updateAnchor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateAnchor and: deltaPosition
    char __padding5[0x3] = {};
    // public UnityEngine.Vector3 deltaPosition
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 deltaPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion deltaRotation
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Quaternion deltaRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Single deltaTime
    // Size: 0x4
    // Offset: 0x58
    float deltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion lastRotation
    // Size: 0x10
    // Offset: 0x68
    UnityEngine::Quaternion lastRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Rigidbody r
    UnityEngine::Rigidbody*& dyn_r();
    // Get instance field reference: public UnityEngine.Transform t
    UnityEngine::Transform*& dyn_t();
    // Get instance field reference: public UnityEngine.Collider collider
    UnityEngine::Collider*& dyn_collider();
    // Get instance field reference: public UnityEngine.Joint joint
    UnityEngine::Joint*& dyn_joint();
    // Get instance field reference: public UnityEngine.Rigidbody c
    UnityEngine::Rigidbody*& dyn_c();
    // Get instance field reference: public System.Boolean updateAnchor
    bool& dyn_updateAnchor();
    // Get instance field reference: public UnityEngine.Vector3 deltaPosition
    UnityEngine::Vector3& dyn_deltaPosition();
    // Get instance field reference: public UnityEngine.Quaternion deltaRotation
    UnityEngine::Quaternion& dyn_deltaRotation();
    // Get instance field reference: public System.Single deltaTime
    float& dyn_deltaTime();
    // Get instance field reference: public UnityEngine.Vector3 lastPosition
    UnityEngine::Vector3& dyn_lastPosition();
    // Get instance field reference: public UnityEngine.Quaternion lastRotation
    UnityEngine::Quaternion& dyn_lastRotation();
    // public System.Void .ctor(UnityEngine.Rigidbody r)
    // Offset: 0x1C9A8DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RagdollUtility::Rigidbone* New_ctor(UnityEngine::Rigidbody* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::RagdollUtility::Rigidbone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RagdollUtility::Rigidbone*, creationType>(r)));
    }
    // public System.Void RecordVelocity()
    // Offset: 0x1C9B4E8
    void RecordVelocity();
    // public System.Void WakeUp(System.Single velocityWeight, System.Single angularVelocityWeight)
    // Offset: 0x1C9B2CC
    void WakeUp(float velocityWeight, float angularVelocityWeight);
  }; // RootMotion.FinalIK.RagdollUtility/RootMotion.FinalIK.Rigidbone
  #pragma pack(pop)
  static check_size<sizeof(RagdollUtility::Rigidbone), 104 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_RagdollUtility_RigidboneSizeCheck;
  static_assert(sizeof(RagdollUtility::Rigidbone) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Rigidbone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Rigidbone::RecordVelocity
// Il2CppName: RecordVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::Rigidbone::*)()>(&RootMotion::FinalIK::RagdollUtility::Rigidbone::RecordVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility::Rigidbone*), "RecordVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RagdollUtility::Rigidbone::WakeUp
// Il2CppName: WakeUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RagdollUtility::Rigidbone::*)(float, float)>(&RootMotion::FinalIK::RagdollUtility::Rigidbone::WakeUp)> {
  static const MethodInfo* get() {
    static auto* velocityWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* angularVelocityWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RagdollUtility::Rigidbone*), "WakeUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{velocityWeight, angularVelocityWeight});
  }
};
