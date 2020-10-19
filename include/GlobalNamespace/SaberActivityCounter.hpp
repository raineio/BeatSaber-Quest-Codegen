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
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: MovementHistoryRecorder
  class MovementHistoryRecorder;
  // Forward declaring type: AveragingValueRecorder
  class AveragingValueRecorder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberActivityCounter
  class SaberActivityCounter : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _averageWindowDuration
    // Offset: 0x18
    float averageWindowDuration;
    // private System.Single _valuesPerSecond
    // Offset: 0x1C
    float valuesPerSecond;
    // private System.Single _increaseSpeed
    // Offset: 0x20
    float increaseSpeed;
    // private System.Single _deceraseSpeed
    // Offset: 0x24
    float deceraseSpeed;
    // private System.Single _movementSensitivityThreshold
    // Offset: 0x28
    float movementSensitivityThreshold;
    // private readonly SaberManager _saberManager
    // Offset: 0x30
    GlobalNamespace::SaberManager* saberManager;
    // private System.Action`1<System.Single> totalDistanceDidChangeEvent
    // Offset: 0x38
    System::Action_1<float>* totalDistanceDidChangeEvent;
    // private Saber _leftSaber
    // Offset: 0x40
    GlobalNamespace::Saber* leftSaber;
    // private Saber _rightSaber
    // Offset: 0x48
    GlobalNamespace::Saber* rightSaber;
    // private UnityEngine.Vector3 _prevLeftSaberTipPos
    // Offset: 0x50
    UnityEngine::Vector3 prevLeftSaberTipPos;
    // private UnityEngine.Vector3 _prevRightSaberTipPos
    // Offset: 0x5C
    UnityEngine::Vector3 prevRightSaberTipPos;
    // private UnityEngine.Vector3 _prevLeftHandPos
    // Offset: 0x68
    UnityEngine::Vector3 prevLeftHandPos;
    // private UnityEngine.Vector3 _prevRightHandPos
    // Offset: 0x74
    UnityEngine::Vector3 prevRightHandPos;
    // private System.Boolean _hasPrevPos
    // Offset: 0x80
    bool hasPrevPos;
    // private System.Single _leftSaberMovementDistance
    // Offset: 0x84
    float leftSaberMovementDistance;
    // private System.Single _rightSaberMovementDistance
    // Offset: 0x88
    float rightSaberMovementDistance;
    // private System.Single _leftHandMovementDistance
    // Offset: 0x8C
    float leftHandMovementDistance;
    // private System.Single _rightHandMovementDistance
    // Offset: 0x90
    float rightHandMovementDistance;
    // private MovementHistoryRecorder _saberMovementHistoryRecorder
    // Offset: 0x98
    GlobalNamespace::MovementHistoryRecorder* saberMovementHistoryRecorder;
    // private MovementHistoryRecorder _handMovementHistoryRecorder
    // Offset: 0xA0
    GlobalNamespace::MovementHistoryRecorder* handMovementHistoryRecorder;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x2073460
    void add_totalDistanceDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x2073504
    void remove_totalDistanceDidChangeEvent(System::Action_1<float>* value);
    // public System.Single get_leftSaberMovementDistance()
    // Offset: 0x20735A8
    float get_leftSaberMovementDistance();
    // public System.Single get_rightSaberMovementDistance()
    // Offset: 0x20735B0
    float get_rightSaberMovementDistance();
    // public System.Single get_leftHandMovementDistance()
    // Offset: 0x20735B8
    float get_leftHandMovementDistance();
    // public System.Single get_rightHandMovementDistance()
    // Offset: 0x20735C0
    float get_rightHandMovementDistance();
    // public AveragingValueRecorder get_saberMovementAveragingValueRecorder()
    // Offset: 0x20735C8
    GlobalNamespace::AveragingValueRecorder* get_saberMovementAveragingValueRecorder();
    // public AveragingValueRecorder get_handMovementAveragingValueRecorder()
    // Offset: 0x20735E4
    GlobalNamespace::AveragingValueRecorder* get_handMovementAveragingValueRecorder();
    // protected System.Void Awake()
    // Offset: 0x2073600
    void Awake();
    // protected System.Void Start()
    // Offset: 0x20736D4
    void Start();
    // protected System.Void Update()
    // Offset: 0x2073724
    void Update();
    // public System.Void .ctor()
    // Offset: 0x2073AE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberActivityCounter* New_ctor();
  }; // SaberActivityCounter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberActivityCounter*, "", "SaberActivityCounter");
#pragma pack(pop)
