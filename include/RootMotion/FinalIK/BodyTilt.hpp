// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: OffsetPose
  class OffsetPose;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.BodyTilt
  // [TokenAttribute] Offset: FFFFFFFF
  class BodyTilt : public RootMotion::FinalIK::OffsetModifier {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // [TooltipAttribute] Offset: 0xEF44D0
    // public System.Single tiltSpeed
    // Size: 0x4
    // Offset: 0x2C
    float tiltSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xEF4508
    // public System.Single tiltSensitivity
    // Size: 0x4
    // Offset: 0x30
    float tiltSensitivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: tiltSensitivity and: poseLeft
    char __padding1[0x4] = {};
    // [TooltipAttribute] Offset: 0xEF4540
    // public RootMotion.FinalIK.OffsetPose poseLeft
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::OffsetPose* poseLeft;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::OffsetPose*) == 0x8);
    // [TooltipAttribute] Offset: 0xEF4578
    // public RootMotion.FinalIK.OffsetPose poseRight
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::OffsetPose* poseRight;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::OffsetPose*) == 0x8);
    // private System.Single tiltAngle
    // Size: 0x4
    // Offset: 0x48
    float tiltAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastForward
    // Size: 0xC
    // Offset: 0x4C
    UnityEngine::Vector3 lastForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public System.Single tiltSpeed
    float& dyn_tiltSpeed();
    // Get instance field reference: public System.Single tiltSensitivity
    float& dyn_tiltSensitivity();
    // Get instance field reference: public RootMotion.FinalIK.OffsetPose poseLeft
    RootMotion::FinalIK::OffsetPose*& dyn_poseLeft();
    // Get instance field reference: public RootMotion.FinalIK.OffsetPose poseRight
    RootMotion::FinalIK::OffsetPose*& dyn_poseRight();
    // Get instance field reference: private System.Single tiltAngle
    float& dyn_tiltAngle();
    // Get instance field reference: private UnityEngine.Vector3 lastForward
    UnityEngine::Vector3& dyn_lastForward();
    // public System.Void .ctor()
    // Offset: 0x1EC1040
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BodyTilt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::BodyTilt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BodyTilt*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x1EC0DC8
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::Start()
    void Start();
    // protected override System.Void OnModifyOffset()
    // Offset: 0x1EC0E10
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
  }; // RootMotion.FinalIK.BodyTilt
  #pragma pack(pop)
  static check_size<sizeof(BodyTilt), 76 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_BodyTiltSizeCheck;
  static_assert(sizeof(BodyTilt) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BodyTilt*, "RootMotion.FinalIK", "BodyTilt");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::BodyTilt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::BodyTilt::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BodyTilt::*)()>(&RootMotion::FinalIK::BodyTilt::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BodyTilt*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::BodyTilt::OnModifyOffset
// Il2CppName: OnModifyOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::BodyTilt::*)()>(&RootMotion::FinalIK::BodyTilt::OnModifyOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::BodyTilt*), "OnModifyOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
