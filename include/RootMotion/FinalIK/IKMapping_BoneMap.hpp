// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKMapping
#include "RootMotion/FinalIK/IKMapping.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKMapping/BoneMap
  class IKMapping::BoneMap : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform transform
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // public System.Int32 chainIndex
    // Offset: 0x18
    int chainIndex;
    // public System.Int32 nodeIndex
    // Offset: 0x1C
    int nodeIndex;
    // public UnityEngine.Vector3 defaultLocalPosition
    // Offset: 0x20
    UnityEngine::Vector3 defaultLocalPosition;
    // public UnityEngine.Quaternion defaultLocalRotation
    // Offset: 0x2C
    UnityEngine::Quaternion defaultLocalRotation;
    // public UnityEngine.Vector3 localSwingAxis
    // Offset: 0x3C
    UnityEngine::Vector3 localSwingAxis;
    // public UnityEngine.Vector3 localTwistAxis
    // Offset: 0x48
    UnityEngine::Vector3 localTwistAxis;
    // public UnityEngine.Vector3 planePosition
    // Offset: 0x54
    UnityEngine::Vector3 planePosition;
    // public UnityEngine.Vector3 ikPosition
    // Offset: 0x60
    UnityEngine::Vector3 ikPosition;
    // public UnityEngine.Quaternion defaultLocalTargetRotation
    // Offset: 0x6C
    UnityEngine::Quaternion defaultLocalTargetRotation;
    // private UnityEngine.Quaternion maintainRotation
    // Offset: 0x7C
    UnityEngine::Quaternion maintainRotation;
    // public System.Single length
    // Offset: 0x8C
    float length;
    // public UnityEngine.Quaternion animatedRotation
    // Offset: 0x90
    UnityEngine::Quaternion animatedRotation;
    // private UnityEngine.Transform planeBone1
    // Offset: 0xA0
    UnityEngine::Transform* planeBone1;
    // private UnityEngine.Transform planeBone2
    // Offset: 0xA8
    UnityEngine::Transform* planeBone2;
    // private UnityEngine.Transform planeBone3
    // Offset: 0xB0
    UnityEngine::Transform* planeBone3;
    // private System.Int32 plane1ChainIndex
    // Offset: 0xB8
    int plane1ChainIndex;
    // private System.Int32 plane1NodeIndex
    // Offset: 0xBC
    int plane1NodeIndex;
    // private System.Int32 plane2ChainIndex
    // Offset: 0xC0
    int plane2ChainIndex;
    // private System.Int32 plane2NodeIndex
    // Offset: 0xC4
    int plane2NodeIndex;
    // private System.Int32 plane3ChainIndex
    // Offset: 0xC8
    int plane3ChainIndex;
    // private System.Int32 plane3NodeIndex
    // Offset: 0xCC
    int plane3NodeIndex;
    // public System.Void Initiate(UnityEngine.Transform transform, RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1843AD4
    void Initiate(UnityEngine::Transform* transform, RootMotion::FinalIK::IKSolverFullBody* solver);
    // public UnityEngine.Vector3 get_swingDirection()
    // Offset: 0x1843B24
    UnityEngine::Vector3 get_swingDirection();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x1843BF0
    void StoreDefaultLocalState();
    // public System.Void FixTransform(System.Boolean position)
    // Offset: 0x1843C40
    void FixTransform(bool position);
    // public System.Boolean get_isNodeBone()
    // Offset: 0x1843C90
    bool get_isNodeBone();
    // public System.Void SetLength(RootMotion.FinalIK.IKMapping/BoneMap nextBone)
    // Offset: 0x1843CA0
    void SetLength(RootMotion::FinalIK::IKMapping::BoneMap* nextBone);
    // public System.Void SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap swingTarget)
    // Offset: 0x1843D88
    void SetLocalSwingAxis(RootMotion::FinalIK::IKMapping::BoneMap* swingTarget);
    // public System.Void SetLocalSwingAxis(RootMotion.FinalIK.IKMapping/BoneMap bone1, RootMotion.FinalIK.IKMapping/BoneMap bone2)
    // Offset: 0x1843D90
    void SetLocalSwingAxis(RootMotion::FinalIK::IKMapping::BoneMap* bone1, RootMotion::FinalIK::IKMapping::BoneMap* bone2);
    // public System.Void SetLocalTwistAxis(UnityEngine.Vector3 twistDirection, UnityEngine.Vector3 normalDirection)
    // Offset: 0x1843F20
    void SetLocalTwistAxis(UnityEngine::Vector3 twistDirection, UnityEngine::Vector3 normalDirection);
    // public System.Void SetPlane(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Transform planeBone1, UnityEngine.Transform planeBone2, UnityEngine.Transform planeBone3)
    // Offset: 0x184402C
    void SetPlane(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Transform* planeBone1, UnityEngine::Transform* planeBone2, UnityEngine::Transform* planeBone3);
    // public System.Void UpdatePlane(System.Boolean rotation, System.Boolean position)
    // Offset: 0x18440F0
    void UpdatePlane(bool rotation, bool position);
    // public System.Void SetIKPosition()
    // Offset: 0x18444C4
    void SetIKPosition();
    // public System.Void MaintainRotation()
    // Offset: 0x18444FC
    void MaintainRotation();
    // public System.Void SetToIKPosition()
    // Offset: 0x1844534
    void SetToIKPosition();
    // public System.Void FixToNode(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight, RootMotion.FinalIK.IKSolver/Node fixNode)
    // Offset: 0x184455C
    void FixToNode(RootMotion::FinalIK::IKSolverFullBody* solver, float weight, RootMotion::FinalIK::IKSolver::Node* fixNode);
    // public UnityEngine.Vector3 GetPlanePosition(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1844688
    UnityEngine::Vector3 GetPlanePosition(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void PositionToPlane(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x18449D0
    void PositionToPlane(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void RotateToPlane(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight)
    // Offset: 0x1844A00
    void RotateToPlane(RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
    // public System.Void Swing(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1844B98
    void Swing(UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void Swing(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single weight)
    // Offset: 0x1844C08
    void Swing(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float weight);
    // public System.Void Twist(UnityEngine.Vector3 twistDirection, UnityEngine.Vector3 normalDirection, System.Single weight)
    // Offset: 0x1844E4C
    void Twist(UnityEngine::Vector3 twistDirection, UnityEngine::Vector3 normalDirection, float weight);
    // public System.Void RotateToMaintain(System.Single weight)
    // Offset: 0x1845074
    void RotateToMaintain(float weight);
    // public System.Void RotateToEffector(RootMotion.FinalIK.IKSolverFullBody solver, System.Single weight)
    // Offset: 0x184518C
    void RotateToEffector(RootMotion::FinalIK::IKSolverFullBody* solver, float weight);
    // private UnityEngine.Quaternion GetTargetRotation(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x18447CC
    UnityEngine::Quaternion GetTargetRotation(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Quaternion get_lastAnimatedTargetRotation()
    // Offset: 0x18442A0
    UnityEngine::Quaternion get_lastAnimatedTargetRotation();
    // public System.Void .ctor()
    // Offset: 0x1845328
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IKMapping::BoneMap* New_ctor();
  }; // RootMotion.FinalIK.IKMapping/BoneMap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKMapping::BoneMap*, "RootMotion.FinalIK", "IKMapping/BoneMap");
#pragma pack(pop)
