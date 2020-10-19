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
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: SaberMovementData
  class SaberMovementData;
  // Forward declaring type: SaberSwingRatingCounter
  class SaberSwingRatingCounter;
  // Forward declaring type: SaberType
  struct SaberType;
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
  // Autogenerated type: Saber
  class Saber : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _saberBladeTopTransform
    // Offset: 0x18
    UnityEngine::Transform* saberBladeTopTransform;
    // private UnityEngine.Transform _saberBladeBottomTransform
    // Offset: 0x20
    UnityEngine::Transform* saberBladeBottomTransform;
    // private UnityEngine.Transform _handleTransform
    // Offset: 0x28
    UnityEngine::Transform* handleTransform;
    // private SaberTypeObject _saberType
    // Offset: 0x30
    GlobalNamespace::SaberTypeObject* saberType;
    // private System.Boolean <disableCutting>k__BackingField
    // Offset: 0x38
    bool disableCutting;
    // private readonly SaberMovementData _movementData
    // Offset: 0x40
    GlobalNamespace::SaberMovementData* movementData;
    // private readonly System.Collections.Generic.List`1<SaberSwingRatingCounter> _swingRatingCounters
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* swingRatingCounters;
    // private readonly System.Collections.Generic.List`1<SaberSwingRatingCounter> _unusedSwingRatingCounters
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::SaberSwingRatingCounter*>* unusedSwingRatingCounters;
    // private UnityEngine.Vector3 _saberBladeTopPos
    // Offset: 0x58
    UnityEngine::Vector3 saberBladeTopPos;
    // private UnityEngine.Vector3 _saberBladeBottomPos
    // Offset: 0x64
    UnityEngine::Vector3 saberBladeBottomPos;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kNumberOfPreallocatedSwingRatingCounters
    static constexpr const int kNumberOfPreallocatedSwingRatingCounters = 20;
    // Get static field: static private System.Int32 kNumberOfPreallocatedSwingRatingCounters
    static int _get_kNumberOfPreallocatedSwingRatingCounters();
    // Set static field: static private System.Int32 kNumberOfPreallocatedSwingRatingCounters
    static void _set_kNumberOfPreallocatedSwingRatingCounters(int value);
    // public SaberType get_saberType()
    // Offset: 0x2072358
    GlobalNamespace::SaberType get_saberType();
    // public UnityEngine.Vector3 get_saberBladeTopPos()
    // Offset: 0x2072374
    UnityEngine::Vector3 get_saberBladeTopPos();
    // public UnityEngine.Vector3 get_saberBladeBottomPos()
    // Offset: 0x2072380
    UnityEngine::Vector3 get_saberBladeBottomPos();
    // public UnityEngine.Vector3 get_handlePos()
    // Offset: 0x207238C
    UnityEngine::Vector3 get_handlePos();
    // public UnityEngine.Quaternion get_handleRot()
    // Offset: 0x20723A8
    UnityEngine::Quaternion get_handleRot();
    // public System.Single get_bladeSpeed()
    // Offset: 0x20723C4
    float get_bladeSpeed();
    // public SaberMovementData get_movementData()
    // Offset: 0x20723E0
    GlobalNamespace::SaberMovementData* get_movementData();
    // public System.Boolean get_disableCutting()
    // Offset: 0x20723E8
    bool get_disableCutting();
    // public System.Void set_disableCutting(System.Boolean value)
    // Offset: 0x20723F0
    void set_disableCutting(bool value);
    // protected System.Void Start()
    // Offset: 0x20723FC
    void Start();
    // public System.Void ManualUpdate()
    // Offset: 0x2072500
    void ManualUpdate();
    // public SaberSwingRatingCounter CreateSwingRatingCounter(UnityEngine.Transform noteTransform)
    // Offset: 0x2072CB0
    GlobalNamespace::SaberSwingRatingCounter* CreateSwingRatingCounter(UnityEngine::Transform* noteTransform);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x2072E90
    void OnDrawGizmos();
    // public System.Void OverridePositionAndRotation(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x2073268
    void OverridePositionAndRotation(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // public System.Void .ctor()
    // Offset: 0x20732E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Saber* New_ctor();
  }; // Saber
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Saber*, "", "Saber");
#pragma pack(pop)
