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
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_IK
  class SteamVR_IK : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Transform target
    // Offset: 0x18
    UnityEngine::Transform* target;
    // public UnityEngine.Transform start
    // Offset: 0x20
    UnityEngine::Transform* start;
    // public UnityEngine.Transform joint
    // Offset: 0x28
    UnityEngine::Transform* joint;
    // public UnityEngine.Transform end
    // Offset: 0x30
    UnityEngine::Transform* end;
    // public UnityEngine.Transform poleVector
    // Offset: 0x38
    UnityEngine::Transform* poleVector;
    // public UnityEngine.Transform upVector
    // Offset: 0x40
    UnityEngine::Transform* upVector;
    // public System.Single blendPct
    // Offset: 0x48
    float blendPct;
    // public UnityEngine.Transform startXform
    // Offset: 0x50
    UnityEngine::Transform* startXform;
    // public UnityEngine.Transform jointXform
    // Offset: 0x58
    UnityEngine::Transform* jointXform;
    // public UnityEngine.Transform endXform
    // Offset: 0x60
    UnityEngine::Transform* endXform;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void LateUpdate()
    // Offset: 0x1032540
    void LateUpdate();
    // static public System.Boolean Solve(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Vector3 poleVector, System.Single jointDist, System.Single targetDist, ref UnityEngine.Vector3 result, out UnityEngine.Vector3 forward, out UnityEngine.Vector3 up)
    // Offset: 0x1032F28
    static bool Solve(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Vector3 poleVector, float jointDist, float targetDist, UnityEngine::Vector3& result, UnityEngine::Vector3& forward, UnityEngine::Vector3& up);
    // public System.Void .ctor()
    // Offset: 0x1033440
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_IK* New_ctor();
  }; // SteamVR_IK
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_IK*, "", "SteamVR_IK");
#pragma pack(pop)
