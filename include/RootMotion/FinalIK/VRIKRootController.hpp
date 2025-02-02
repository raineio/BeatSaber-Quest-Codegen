// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIKRootController
  class VRIKRootController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::VRIKRootController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKRootController*, "RootMotion.FinalIK", "VRIKRootController");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIKRootController
  // [TokenAttribute] Offset: FFFFFFFF
  class VRIKRootController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Vector3 <pelvisTargetRight>k__BackingField
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 pelvisTargetRight;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: pelvisTargetRight and: pelvisTarget
    char __padding0[0x4] = {};
    // private UnityEngine.Transform pelvisTarget
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* pelvisTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform leftFootTarget
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* leftFootTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform rightFootTarget
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* rightFootTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private RootMotion.FinalIK.VRIK ik
    // Size: 0x8
    // Offset: 0x40
    ::RootMotion::FinalIK::VRIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::VRIK*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 <pelvisTargetRight>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$pelvisTargetRight$k__BackingField();
    // Get instance field reference: private UnityEngine.Transform pelvisTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pelvisTarget();
    // Get instance field reference: private UnityEngine.Transform leftFootTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftFootTarget();
    // Get instance field reference: private UnityEngine.Transform rightFootTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightFootTarget();
    // Get instance field reference: private RootMotion.FinalIK.VRIK ik
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::VRIK*& dyn_ik();
    // public UnityEngine.Vector3 get_pelvisTargetRight()
    // Offset: 0x206B3F0
    ::UnityEngine::Vector3 get_pelvisTargetRight();
    // private System.Void set_pelvisTargetRight(UnityEngine.Vector3 value)
    // Offset: 0x206B3FC
    void set_pelvisTargetRight(::UnityEngine::Vector3 value);
    // public System.Void .ctor()
    // Offset: 0x206BA7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKRootController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::VRIKRootController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKRootController*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x206B408
    void Awake();
    // public System.Void Calibrate()
    // Offset: 0x2069F54
    void Calibrate();
    // public System.Void Calibrate(RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData data)
    // Offset: 0x206AF5C
    void Calibrate(::RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data);
    // private System.Void OnPreUpdate()
    // Offset: 0x206B4E0
    void OnPreUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x206B984
    void OnDestroy();
  }; // RootMotion.FinalIK.VRIKRootController
  #pragma pack(pop)
  static check_size<sizeof(VRIKRootController), 64 + sizeof(::RootMotion::FinalIK::VRIK*)> __RootMotion_FinalIK_VRIKRootControllerSizeCheck;
  static_assert(sizeof(VRIKRootController) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::get_pelvisTargetRight
// Il2CppName: get_pelvisTargetRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::get_pelvisTargetRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "get_pelvisTargetRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::set_pelvisTargetRight
// Il2CppName: set_pelvisTargetRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)(::UnityEngine::Vector3)>(&RootMotion::FinalIK::VRIKRootController::set_pelvisTargetRight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "set_pelvisTargetRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::Calibrate
// Il2CppName: Calibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::Calibrate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "Calibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::Calibrate
// Il2CppName: Calibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)(::RootMotion::FinalIK::VRIKCalibrator::CalibrationData*)>(&RootMotion::FinalIK::VRIKRootController::Calibrate)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIKCalibrator/CalibrationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "Calibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::OnPreUpdate
// Il2CppName: OnPreUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::OnPreUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "OnPreUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKRootController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKRootController::*)()>(&RootMotion::FinalIK::VRIKRootController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKRootController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
