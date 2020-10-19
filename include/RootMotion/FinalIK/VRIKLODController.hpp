// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIK
  class VRIK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.VRIKLODController
  class VRIKLODController : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Renderer LODRenderer
    // Offset: 0x18
    UnityEngine::Renderer* LODRenderer;
    // public System.Single LODDistance
    // Offset: 0x20
    float LODDistance;
    // public System.Boolean allowCulled
    // Offset: 0x24
    bool allowCulled;
    // private RootMotion.FinalIK.VRIK ik
    // Offset: 0x28
    RootMotion::FinalIK::VRIK* ik;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x169B648
    void Start();
    // private System.Void Update()
    // Offset: 0x169B6A8
    void Update();
    // private System.Int32 GetLODLevel()
    // Offset: 0x169B6DC
    int GetLODLevel();
    // public System.Void .ctor()
    // Offset: 0x169B864
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRIKLODController* New_ctor();
  }; // RootMotion.FinalIK.VRIKLODController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKLODController*, "RootMotion.FinalIK", "VRIKLODController");
#pragma pack(pop)
