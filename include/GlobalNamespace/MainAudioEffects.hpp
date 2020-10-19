// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioLowPassFilter
  class AudioLowPassFilter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainAudioEffects
  class MainAudioEffects : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioLowPassFilter _audioLowPassFilter
    // Offset: 0x18
    UnityEngine::AudioLowPassFilter* audioLowPassFilter;
    // private System.Single _smooth
    // Offset: 0x20
    float smooth;
    // private System.Single _targetFrequency
    // Offset: 0x24
    float targetFrequency;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kDefaultCutoffFrequency
    static constexpr const int kDefaultCutoffFrequency = 22000;
    // Get static field: static private System.Int32 kDefaultCutoffFrequency
    static int _get_kDefaultCutoffFrequency();
    // Set static field: static private System.Int32 kDefaultCutoffFrequency
    static void _set_kDefaultCutoffFrequency(int value);
    // static field const value: static private System.Int32 kLowPassCutoffFrequency
    static constexpr const int kLowPassCutoffFrequency = 150;
    // Get static field: static private System.Int32 kLowPassCutoffFrequency
    static int _get_kLowPassCutoffFrequency();
    // Set static field: static private System.Int32 kLowPassCutoffFrequency
    static void _set_kLowPassCutoffFrequency(int value);
    // protected System.Void Start()
    // Offset: 0x20AA410
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x20AA450
    void LateUpdate();
    // public System.Void ResumeNormalSound()
    // Offset: 0x20AA55C
    void ResumeNormalSound();
    // public System.Void TriggerLowPass()
    // Offset: 0x20AA590
    void TriggerLowPass();
    // public System.Void .ctor()
    // Offset: 0x20AA5D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainAudioEffects* New_ctor();
  }; // MainAudioEffects
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainAudioEffects*, "", "MainAudioEffects");
#pragma pack(pop)
