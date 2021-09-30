// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: InterpolationMode
  struct InterpolationMode;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Footstep
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverVR::Footstep : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Single stepSpeed
    // Size: 0x4
    // Offset: 0x10
    float stepSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 characterSpaceOffset
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 characterSpaceOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion stepToRootRot
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Quaternion stepToRootRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Boolean isSupportLeg
    // Size: 0x1
    // Offset: 0x4C
    bool isSupportLeg;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSupportLeg and: stepProgress
    char __padding5[0x3] = {};
    // private System.Single <stepProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    float stepProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 stepFrom
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 stepFrom;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 stepTo
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 stepTo;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion stepFromRot
    // Size: 0x10
    // Offset: 0x6C
    UnityEngine::Quaternion stepFromRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion stepToRot
    // Size: 0x10
    // Offset: 0x7C
    UnityEngine::Quaternion stepToRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion footRelativeToRoot
    // Size: 0x10
    // Offset: 0x8C
    UnityEngine::Quaternion footRelativeToRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single supportLegW
    // Size: 0x4
    // Offset: 0x9C
    float supportLegW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single supportLegWV
    // Size: 0x4
    // Offset: 0xA0
    float supportLegWV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single stepSpeed
    float& dyn_stepSpeed();
    // Get instance field reference: public UnityEngine.Vector3 characterSpaceOffset
    UnityEngine::Vector3& dyn_characterSpaceOffset();
    // Get instance field reference: public UnityEngine.Vector3 position
    UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    UnityEngine::Quaternion& dyn_rotation();
    // Get instance field reference: public UnityEngine.Quaternion stepToRootRot
    UnityEngine::Quaternion& dyn_stepToRootRot();
    // Get instance field reference: public System.Boolean isSupportLeg
    bool& dyn_isSupportLeg();
    // Get instance field reference: private System.Single <stepProgress>k__BackingField
    float& dyn_$stepProgress$k__BackingField();
    // Get instance field reference: public UnityEngine.Vector3 stepFrom
    UnityEngine::Vector3& dyn_stepFrom();
    // Get instance field reference: public UnityEngine.Vector3 stepTo
    UnityEngine::Vector3& dyn_stepTo();
    // Get instance field reference: public UnityEngine.Quaternion stepFromRot
    UnityEngine::Quaternion& dyn_stepFromRot();
    // Get instance field reference: public UnityEngine.Quaternion stepToRot
    UnityEngine::Quaternion& dyn_stepToRot();
    // Get instance field reference: private UnityEngine.Quaternion footRelativeToRoot
    UnityEngine::Quaternion& dyn_footRelativeToRoot();
    // Get instance field reference: private System.Single supportLegW
    float& dyn_supportLegW();
    // Get instance field reference: private System.Single supportLegWV
    float& dyn_supportLegWV();
    // public System.Boolean get_isStepping()
    // Offset: 0x1FDCB80
    bool get_isStepping();
    // public System.Single get_stepProgress()
    // Offset: 0x1FDCB94
    float get_stepProgress();
    // private System.Void set_stepProgress(System.Single value)
    // Offset: 0x1FDCB9C
    void set_stepProgress(float value);
    // public System.Void .ctor(UnityEngine.Quaternion rootRotation, UnityEngine.Vector3 footPosition, UnityEngine.Quaternion footRotation, UnityEngine.Vector3 characterSpaceOffset)
    // Offset: 0x1FDCBA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Footstep* New_ctor(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation, UnityEngine::Vector3 characterSpaceOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::Footstep::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Footstep*, creationType>(rootRotation, footPosition, footRotation, characterSpaceOffset)));
    }
    // public System.Void Reset(UnityEngine.Quaternion rootRotation, UnityEngine.Vector3 footPosition, UnityEngine.Quaternion footRotation)
    // Offset: 0x1FDCD34
    void Reset(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation);
    // public System.Void StepTo(UnityEngine.Vector3 p, UnityEngine.Quaternion rootRotation, System.Single stepThreshold)
    // Offset: 0x1FDCD7C
    void StepTo(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float stepThreshold);
    // public System.Void UpdateStepping(UnityEngine.Vector3 p, UnityEngine.Quaternion rootRotation, System.Single speed)
    // Offset: 0x1FDCF3C
    void UpdateStepping(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float speed);
    // public System.Void UpdateStanding(UnityEngine.Quaternion rootRotation, System.Single minAngle, System.Single speed)
    // Offset: 0x1FDD114
    void UpdateStanding(UnityEngine::Quaternion rootRotation, float minAngle, float speed);
    // public System.Void Update(RootMotion.InterpolationMode interpolation, UnityEngine.Events.UnityEvent onStep)
    // Offset: 0x1FDD300
    void Update(RootMotion::InterpolationMode interpolation, UnityEngine::Events::UnityEvent* onStep);
  }; // RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Footstep
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::Footstep), 160 + sizeof(float)> __RootMotion_FinalIK_IKSolverVR_FootstepSizeCheck;
  static_assert(sizeof(IKSolverVR::Footstep) == 0xA4);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Footstep*, "RootMotion.FinalIK", "IKSolverVR/Footstep");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::get_isStepping
// Il2CppName: get_isStepping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::Footstep::*)()>(&RootMotion::FinalIK::IKSolverVR::Footstep::get_isStepping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "get_isStepping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::get_stepProgress
// Il2CppName: get_stepProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (RootMotion::FinalIK::IKSolverVR::Footstep::*)()>(&RootMotion::FinalIK::IKSolverVR::Footstep::get_stepProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "get_stepProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::set_stepProgress
// Il2CppName: set_stepProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Footstep::*)(float)>(&RootMotion::FinalIK::IKSolverVR::Footstep::set_stepProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "set_stepProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Footstep::*)(UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::Footstep::Reset)> {
  static const MethodInfo* get() {
    static auto* rootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* footPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* footRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootRotation, footPosition, footRotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::StepTo
// Il2CppName: StepTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Footstep::*)(UnityEngine::Vector3, UnityEngine::Quaternion, float)>(&RootMotion::FinalIK::IKSolverVR::Footstep::StepTo)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* stepThreshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "StepTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, rootRotation, stepThreshold});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::UpdateStepping
// Il2CppName: UpdateStepping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Footstep::*)(UnityEngine::Vector3, UnityEngine::Quaternion, float)>(&RootMotion::FinalIK::IKSolverVR::Footstep::UpdateStepping)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "UpdateStepping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, rootRotation, speed});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::UpdateStanding
// Il2CppName: UpdateStanding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Footstep::*)(UnityEngine::Quaternion, float, float)>(&RootMotion::FinalIK::IKSolverVR::Footstep::UpdateStanding)> {
  static const MethodInfo* get() {
    static auto* rootRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* minAngle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* speed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "UpdateStanding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootRotation, minAngle, speed});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Footstep::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::Footstep::*)(RootMotion::InterpolationMode, UnityEngine::Events::UnityEvent*)>(&RootMotion::FinalIK::IKSolverVR::Footstep::Update)> {
  static const MethodInfo* get() {
    static auto* interpolation = &::il2cpp_utils::GetClassFromName("RootMotion", "InterpolationMode")->byval_arg;
    static auto* onStep = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR::Footstep*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interpolation, onStep});
  }
};
