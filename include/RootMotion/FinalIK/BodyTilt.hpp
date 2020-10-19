// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.BodyTilt
  class BodyTilt : public RootMotion::FinalIK::OffsetModifier {
    public:
    // public System.Single tiltSpeed
    // Offset: 0x2C
    float tiltSpeed;
    // public System.Single tiltSensitivity
    // Offset: 0x30
    float tiltSensitivity;
    // public RootMotion.FinalIK.OffsetPose poseLeft
    // Offset: 0x38
    RootMotion::FinalIK::OffsetPose* poseLeft;
    // public RootMotion.FinalIK.OffsetPose poseRight
    // Offset: 0x40
    RootMotion::FinalIK::OffsetPose* poseRight;
    // private System.Single tiltAngle
    // Offset: 0x48
    float tiltAngle;
    // private UnityEngine.Vector3 lastForward
    // Offset: 0x4C
    UnityEngine::Vector3 lastForward;
    // protected override System.Void Start()
    // Offset: 0x186ECE0
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::Start()
    void Start();
    // protected override System.Void OnModifyOffset()
    // Offset: 0x186ED28
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::OnModifyOffset()
    void OnModifyOffset();
    // public System.Void .ctor()
    // Offset: 0x186EF58
    // Implemented from: RootMotion.FinalIK.OffsetModifier
    // Base method: System.Void OffsetModifier::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BodyTilt* New_ctor();
  }; // RootMotion.FinalIK.BodyTilt
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BodyTilt*, "RootMotion.FinalIK", "BodyTilt");
#pragma pack(pop)
