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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplierValuesRecorder
  class MultiplierValuesRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplierValuesRecorder::MultiplierValue
    struct MultiplierValue;
    // Autogenerated type: MultiplierValuesRecorder/MultiplierValue
    struct MultiplierValue : public System::ValueType {
      public:
      // public readonly System.Int32 multiplier
      // Offset: 0x0
      int multiplier;
      // public readonly System.Single time
      // Offset: 0x4
      float time;
      // Creating value type constructor for type: MultiplierValue
      constexpr MultiplierValue(int multiplier_ = {}, float time_ = {}) noexcept : multiplier{multiplier_}, time{time_} {}
      // public System.Void .ctor(System.Int32 multiplier, System.Single time)
      // Offset: 0xE4DC58
      // ABORTED: conflicts with another method.  MultiplierValue(int multiplier, float time);
    }; // MultiplierValuesRecorder/MultiplierValue
    // private ScoreController _scoreController
    // Offset: 0x18
    GlobalNamespace::ScoreController* scoreController;
    // private AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private System.Collections.Generic.List`1<MultiplierValuesRecorder/MultiplierValue> _multiplierValues
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>* multiplierValues;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Collections.Generic.List`1<MultiplierValuesRecorder/MultiplierValue> get_multiplierValues()
    // Offset: 0x1FDCE6C
    System::Collections::Generic::List_1<GlobalNamespace::MultiplierValuesRecorder::MultiplierValue>* get_multiplierValues();
    // protected System.Void Start()
    // Offset: 0x1FDCE74
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1FDCF08
    void OnDestroy();
    // private System.Void HandleScoreControllerMultiplierDidChange(System.Int32 multiplier, System.Single multiplierProgress)
    // Offset: 0x1FDCFE4
    void HandleScoreControllerMultiplierDidChange(int multiplier, float multiplierProgress);
    // public System.Void .ctor()
    // Offset: 0x1FDD098
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplierValuesRecorder* New_ctor();
  }; // MultiplierValuesRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplierValuesRecorder*, "", "MultiplierValuesRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplierValuesRecorder::MultiplierValue, "", "MultiplierValuesRecorder/MultiplierValue");
#pragma pack(pop)
