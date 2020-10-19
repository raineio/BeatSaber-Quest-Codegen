// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: Color
  struct Color;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleSaberSparkleEffect
  class ObstacleSaberSparkleEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparkleParticleSystem
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparkleParticleSystem;
    // private UnityEngine.ParticleSystem _burnParticleSystem
    // Offset: 0x20
    UnityEngine::ParticleSystem* burnParticleSystem;
    // private UnityEngine.ParticleSystem/EmissionModule _sparkleParticleSystemEmissionModule
    // Offset: 0x28
    UnityEngine::ParticleSystem::EmissionModule sparkleParticleSystemEmissionModule;
    // private UnityEngine.ParticleSystem/EmissionModule _burnParticleSystemEmissionModule
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmissionModule burnParticleSystemEmissionModule;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x20FD968
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x20FDA74
    void Awake();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x20FDAF4
    void SetPositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void StartEmission()
    // Offset: 0x20FDB70
    void StartEmission();
    // public System.Void StopEmission()
    // Offset: 0x20FDBC8
    void StopEmission();
    // public System.Void .ctor()
    // Offset: 0x20FDC34
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObstacleSaberSparkleEffect* New_ctor();
  }; // ObstacleSaberSparkleEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSparkleEffect*, "", "ObstacleSaberSparkleEffect");
#pragma pack(pop)
