// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BombExplosionEffect
  class BombExplosionEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _debrisPS
    // Offset: 0x18
    UnityEngine::ParticleSystem* debrisPS;
    // private UnityEngine.ParticleSystem _explosionPS
    // Offset: 0x20
    UnityEngine::ParticleSystem* explosionPS;
    // private System.Int32 _debrisCount
    // Offset: 0x28
    int debrisCount;
    // private System.Int32 _explosionParticlesCount
    // Offset: 0x2C
    int explosionParticlesCount;
    // private UnityEngine.ParticleSystem/EmitParams _emitParams
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmitParams emitParams;
    // private UnityEngine.ParticleSystem/EmitParams _explosionPSEmitParams
    // Offset: 0xC0
    UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1FAE180
    void Awake();
    // public System.Void SpawnExplosion(UnityEngine.Vector3 pos)
    // Offset: 0x1FAE1B8
    void SpawnExplosion(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x1FAE280
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BombExplosionEffect* New_ctor();
  }; // BombExplosionEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombExplosionEffect*, "", "BombExplosionEffect");
#pragma pack(pop)
