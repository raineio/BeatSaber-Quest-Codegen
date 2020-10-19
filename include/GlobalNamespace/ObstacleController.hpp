// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StretchableObstacle
  class StretchableObstacle;
  // Forward declaring type: SimpleColorSO
  class SimpleColorSO;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleController
  class ObstacleController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ObstacleController::Pool
    class Pool;
    // Nested type: GlobalNamespace::ObstacleController::$DissolveCoroutine$d__60
    class $DissolveCoroutine$d__60;
    // private StretchableObstacle _stretchableObstacle
    // Offset: 0x18
    GlobalNamespace::StretchableObstacle* stretchableObstacle;
    // private SimpleColorSO _color
    // Offset: 0x20
    GlobalNamespace::SimpleColorSO* color;
    // private System.Single _endDistanceOffset
    // Offset: 0x28
    float endDistanceOffset;
    // private UnityEngine.GameObject[] _visualWrappers
    // Offset: 0x30
    ::Array<UnityEngine::GameObject*>* visualWrappers;
    // private readonly PlayerTransforms _playerTransforms
    // Offset: 0x38
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private System.Action`1<ObstacleController> didInitEvent
    // Offset: 0x48
    System::Action_1<GlobalNamespace::ObstacleController*>* didInitEvent;
    // private System.Action`1<ObstacleController> finishedMovementEvent
    // Offset: 0x50
    System::Action_1<GlobalNamespace::ObstacleController*>* finishedMovementEvent;
    // private System.Action`1<ObstacleController> passedThreeQuartersOfMove2Event
    // Offset: 0x58
    System::Action_1<GlobalNamespace::ObstacleController*>* passedThreeQuartersOfMove2Event;
    // private System.Action`1<ObstacleController> passedAvoidedMarkEvent
    // Offset: 0x60
    System::Action_1<GlobalNamespace::ObstacleController*>* passedAvoidedMarkEvent;
    // private System.Action`2<ObstacleController,System.Single> didStartDissolvingEvent
    // Offset: 0x68
    System::Action_2<GlobalNamespace::ObstacleController*, float>* didStartDissolvingEvent;
    // private System.Action`1<ObstacleController> didDissolveEvent
    // Offset: 0x70
    System::Action_1<GlobalNamespace::ObstacleController*>* didDissolveEvent;
    // private UnityEngine.Vector3 _startPos
    // Offset: 0x78
    UnityEngine::Vector3 startPos;
    // private UnityEngine.Vector3 _midPos
    // Offset: 0x84
    UnityEngine::Vector3 midPos;
    // private UnityEngine.Vector3 _endPos
    // Offset: 0x90
    UnityEngine::Vector3 endPos;
    // private System.Single _move1Duration
    // Offset: 0x9C
    float move1Duration;
    // private System.Single _move2Duration
    // Offset: 0xA0
    float move2Duration;
    // private System.Single _startTimeOffset
    // Offset: 0xA4
    float startTimeOffset;
    // private System.Single _obstacleDuration
    // Offset: 0xA8
    float obstacleDuration;
    // private System.Boolean _passedThreeQuartersOfMove2Reported
    // Offset: 0xAC
    bool passedThreeQuartersOfMove2Reported;
    // private System.Boolean _passedAvoidedMarkReported
    // Offset: 0xAD
    bool passedAvoidedMarkReported;
    // private System.Single _passedAvoidedMarkTime
    // Offset: 0xB0
    float passedAvoidedMarkTime;
    // private System.Single _finishMovementTime
    // Offset: 0xB4
    float finishMovementTime;
    // private UnityEngine.Bounds _bounds
    // Offset: 0xB8
    UnityEngine::Bounds bounds;
    // private System.Boolean _dissolving
    // Offset: 0xD0
    bool dissolving;
    // private ObstacleData _obstacleData
    // Offset: 0xD8
    GlobalNamespace::ObstacleData* obstacleData;
    // private UnityEngine.Quaternion _worldRotation
    // Offset: 0xE0
    UnityEngine::Quaternion worldRotation;
    // private UnityEngine.Quaternion _inverseWorldRotation
    // Offset: 0xF0
    UnityEngine::Quaternion inverseWorldRotation;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kAvoidMarkTimeOffset
    static constexpr const float kAvoidMarkTimeOffset = 0.15;
    // Get static field: static public System.Single kAvoidMarkTimeOffset
    static float _get_kAvoidMarkTimeOffset();
    // Set static field: static public System.Single kAvoidMarkTimeOffset
    static void _set_kAvoidMarkTimeOffset(float value);
    // public System.Void add_didInitEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FBD44
    void add_didInitEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_didInitEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FBDE8
    void remove_didInitEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_finishedMovementEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FBE8C
    void add_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_finishedMovementEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FBF30
    void remove_finishedMovementEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_passedThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x20FBFD4
    void add_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_passedThreeQuartersOfMove2Event(System.Action`1<ObstacleController> value)
    // Offset: 0x20FC078
    void remove_passedThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_passedAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FC11C
    void add_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_passedAvoidedMarkEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FC1C0
    void remove_passedAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void add_didStartDissolvingEvent(System.Action`2<ObstacleController,System.Single> value)
    // Offset: 0x20FC264
    void add_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleController*, float>* value);
    // public System.Void remove_didStartDissolvingEvent(System.Action`2<ObstacleController,System.Single> value)
    // Offset: 0x20FC308
    void remove_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleController*, float>* value);
    // public System.Void add_didDissolveEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FC3AC
    void add_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_didDissolveEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x20FC450
    void remove_didDissolveEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value);
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0x20FC4F4
    void set_hide(bool value);
    // public System.Void set_pause(System.Boolean value)
    // Offset: 0x20FC574
    void set_pause(bool value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x20FC584
    UnityEngine::Bounds get_bounds();
    // public ObstacleData get_obstacleData()
    // Offset: 0x20FC598
    GlobalNamespace::ObstacleData* get_obstacleData();
    // public System.Boolean get_hasPassedAvoidedMark()
    // Offset: 0x20FC5A0
    bool get_hasPassedAvoidedMark();
    // public System.Single get_move1Duration()
    // Offset: 0x20FC5A8
    float get_move1Duration();
    // public System.Single get_move2Duration()
    // Offset: 0x20FC5B0
    float get_move2Duration();
    // public System.Void Init(ObstacleData obstacleData, System.Single worldRotation, UnityEngine.Vector3 startPos, UnityEngine.Vector3 midPos, UnityEngine.Vector3 endPos, System.Single move1Duration, System.Single move2Duration, System.Single singleLineWidth, System.Single height)
    // Offset: 0x20FC5B8
    void Init(GlobalNamespace::ObstacleData* obstacleData, float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 midPos, UnityEngine::Vector3 endPos, float move1Duration, float move2Duration, float singleLineWidth, float height);
    // protected System.Void Update()
    // Offset: 0x20FC914
    void Update();
    // public System.Void ManualUpdate()
    // Offset: 0x20FC918
    void ManualUpdate();
    // private UnityEngine.Vector3 GetPosForTime(System.Single time)
    // Offset: 0x20FCAD4
    UnityEngine::Vector3 GetPosForTime(float time);
    // private System.Collections.IEnumerator DissolveCoroutine(System.Single duration)
    // Offset: 0x20FCC44
    System::Collections::IEnumerator* DissolveCoroutine(float duration);
    // public System.Void Dissolve(System.Single duration)
    // Offset: 0x20FCCFC
    void Dissolve(float duration);
    // public System.Void .ctor()
    // Offset: 0x20FCD3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObstacleController* New_ctor();
  }; // ObstacleController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleController*, "", "ObstacleController");
#pragma pack(pop)
