// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.GrounderIK
  class GrounderIK : public RootMotion::FinalIK::Grounder {
    public:
    // public RootMotion.FinalIK.IK[] legs
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::IK*>* legs;
    // public UnityEngine.Transform pelvis
    // Offset: 0x48
    UnityEngine::Transform* pelvis;
    // public UnityEngine.Transform characterRoot
    // Offset: 0x50
    UnityEngine::Transform* characterRoot;
    // public System.Single rootRotationWeight
    // Offset: 0x58
    float rootRotationWeight;
    // public System.Single rootRotationSpeed
    // Offset: 0x5C
    float rootRotationSpeed;
    // public System.Single maxRootRotationAngle
    // Offset: 0x60
    float maxRootRotationAngle;
    // private UnityEngine.Transform[] feet
    // Offset: 0x68
    ::Array<UnityEngine::Transform*>* feet;
    // private UnityEngine.Quaternion[] footRotations
    // Offset: 0x70
    ::Array<UnityEngine::Quaternion>* footRotations;
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Offset: 0x78
    UnityEngine::Vector3 animatedPelvisLocalPosition;
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Offset: 0x84
    UnityEngine::Vector3 solvedPelvisLocalPosition;
    // private System.Int32 solvedFeet
    // Offset: 0x90
    int solvedFeet;
    // private System.Boolean solved
    // Offset: 0x94
    bool solved;
    // private System.Single lastWeight
    // Offset: 0x98
    float lastWeight;
    // private UnityEngine.Rigidbody characterRootRigidbody
    // Offset: 0xA0
    UnityEngine::Rigidbody* characterRootRigidbody;
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x1836144
    bool IsReadyToInitiate();
    // private System.Void OnDisable()
    // Offset: 0x1836334
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x1836434
    void Update();
    // private System.Void Initiate()
    // Offset: 0x1836B7C
    void Initiate();
    // private System.Void OnSolverUpdate()
    // Offset: 0x1836FBC
    void OnSolverUpdate();
    // private System.Void SetLegIK(System.Int32 index)
    // Offset: 0x183722C
    void SetLegIK(int index);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x183754C
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x18376E8
    void OnDestroy();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1836094
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x18360E0
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x183612C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x18378D4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GrounderIK* New_ctor();
  }; // RootMotion.FinalIK.GrounderIK
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderIK*, "RootMotion.FinalIK", "GrounderIK");
#pragma pack(pop)
