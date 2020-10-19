// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimit
  class RotationLimit;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolver/Bone
  class IKSolver::Bone : public RootMotion::FinalIK::IKSolver::Point {
    public:
    // public System.Single length
    // Offset: 0x54
    float length;
    // public System.Single sqrMag
    // Offset: 0x58
    float sqrMag;
    // public UnityEngine.Vector3 axis
    // Offset: 0x5C
    UnityEngine::Vector3 axis;
    // private RootMotion.FinalIK.RotationLimit _rotationLimit
    // Offset: 0x68
    RootMotion::FinalIK::RotationLimit* rotationLimit;
    // private System.Boolean isLimited
    // Offset: 0x70
    bool isLimited;
    // public RootMotion.FinalIK.RotationLimit get_rotationLimit()
    // Offset: 0x18484BC
    RootMotion::FinalIK::RotationLimit* get_rotationLimit();
    // public System.Void set_rotationLimit(RootMotion.FinalIK.RotationLimit value)
    // Offset: 0x18485B8
    void set_rotationLimit(RootMotion::FinalIK::RotationLimit* value);
    // public System.Void Swing(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x184864C
    void Swing(UnityEngine::Vector3 swingTarget, float weight);
    // static public System.Void SolverSwing(RootMotion.FinalIK.IKSolver/Bone[] bones, System.Int32 index, UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x184890C
    static void SolverSwing(::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones, int index, UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void Swing2D(UnityEngine.Vector3 swingTarget, System.Single weight)
    // Offset: 0x1848BEC
    void Swing2D(UnityEngine::Vector3 swingTarget, float weight);
    // public System.Void SetToSolverPosition()
    // Offset: 0x1848E54
    void SetToSolverPosition();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1848F80
    static IKSolver::Bone* New_ctor(UnityEngine::Transform* transform);
    // public System.Void .ctor(UnityEngine.Transform transform, System.Single weight)
    // Offset: 0x1849020
    static IKSolver::Bone* New_ctor(UnityEngine::Transform* transform, float weight);
    // public System.Void .ctor()
    // Offset: 0x1848E7C
    // Implemented from: RootMotion.FinalIK.IKSolver/Point
    // Base method: System.Void Point::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolver::Bone* New_ctor();
  }; // RootMotion.FinalIK.IKSolver/Bone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolver::Bone*, "RootMotion.FinalIK", "IKSolver/Bone");
#pragma pack(pop)
