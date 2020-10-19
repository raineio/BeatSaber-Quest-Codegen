// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Recoil
#include "RootMotion/FinalIK/Recoil.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Recoil/RecoilOffset
  class Recoil::RecoilOffset : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink
    class EffectorLink;
    // public UnityEngine.Vector3 offset
    // Offset: 0x10
    UnityEngine::Vector3 offset;
    // public System.Single additivity
    // Offset: 0x1C
    float additivity;
    // public System.Single maxAdditiveOffsetMag
    // Offset: 0x20
    float maxAdditiveOffsetMag;
    // public RootMotion.FinalIK.Recoil/RecoilOffset/EffectorLink[] effectorLinks
    // Offset: 0x28
    ::Array<RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink*>* effectorLinks;
    // private UnityEngine.Vector3 additiveOffset
    // Offset: 0x30
    UnityEngine::Vector3 additiveOffset;
    // private UnityEngine.Vector3 lastOffset
    // Offset: 0x3C
    UnityEngine::Vector3 lastOffset;
    // public System.Void Start()
    // Offset: 0x1690DE8
    void Start();
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, UnityEngine.Quaternion rotation, System.Single masterWeight, System.Single length, System.Single timeLeft)
    // Offset: 0x169199C
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, UnityEngine::Quaternion rotation, float masterWeight, float length, float timeLeft);
    // public System.Void .ctor()
    // Offset: 0x16920E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Recoil::RecoilOffset* New_ctor();
  }; // RootMotion.FinalIK.Recoil/RecoilOffset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil::RecoilOffset*, "RootMotion.FinalIK", "Recoil/RecoilOffset");
#pragma pack(pop)
