// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MovementPhase because it is already included!
  // Forward declaring type: NoteFloorMovement
  class NoteFloorMovement;
  // Forward declaring type: NoteJump
  class NoteJump;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: NoteMovement
  class NoteMovement : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteMovement::MovementPhase
    struct MovementPhase;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: NoteMovement/MovementPhase
    struct MovementPhase/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MovementPhase
      constexpr MovementPhase(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NoteMovement/MovementPhase None
      static constexpr const int None = 0;
      // Get static field: static public NoteMovement/MovementPhase None
      static GlobalNamespace::NoteMovement::MovementPhase _get_None();
      // Set static field: static public NoteMovement/MovementPhase None
      static void _set_None(GlobalNamespace::NoteMovement::MovementPhase value);
      // static field const value: static public NoteMovement/MovementPhase MovingOnTheFloor
      static constexpr const int MovingOnTheFloor = 1;
      // Get static field: static public NoteMovement/MovementPhase MovingOnTheFloor
      static GlobalNamespace::NoteMovement::MovementPhase _get_MovingOnTheFloor();
      // Set static field: static public NoteMovement/MovementPhase MovingOnTheFloor
      static void _set_MovingOnTheFloor(GlobalNamespace::NoteMovement::MovementPhase value);
      // static field const value: static public NoteMovement/MovementPhase Jumping
      static constexpr const int Jumping = 2;
      // Get static field: static public NoteMovement/MovementPhase Jumping
      static GlobalNamespace::NoteMovement::MovementPhase _get_Jumping();
      // Set static field: static public NoteMovement/MovementPhase Jumping
      static void _set_Jumping(GlobalNamespace::NoteMovement::MovementPhase value);
    }; // NoteMovement/MovementPhase
    #pragma pack(pop)
    static check_size<sizeof(NoteMovement::MovementPhase), 0 + sizeof(int)> __GlobalNamespace_NoteMovement_MovementPhaseSizeCheck;
    static_assert(sizeof(NoteMovement::MovementPhase) == 0x4);
    // private NoteFloorMovement _floorMovement
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteFloorMovement* floorMovement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteFloorMovement*) == 0x8);
    // private NoteJump _jump
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteJump* jump;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteJump*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1975C
    // private System.Single _zOffset
    // Size: 0x4
    // Offset: 0x28
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: zOffset and: didInitEvent
    char __padding2[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE19794
    // private System.Action didInitEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* didInitEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE197A4
    // private System.Action noteDidStartJumpEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* noteDidStartJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE197B4
    // private System.Action noteDidFinishJumpEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* noteDidFinishJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE197C4
    // private System.Action noteDidPassMissedMarkerEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* noteDidPassMissedMarkerEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE197D4
    // private System.Action noteDidPassHalfJumpEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* noteDidPassHalfJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE197E4
    // private System.Action`1<NoteMovement> noteDidPassJumpThreeQuartersEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::NoteMovement*>* noteDidPassJumpThreeQuartersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteMovement*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE197F4
    // private System.Action noteDidMoveInJumpPhaseEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action* noteDidMoveInJumpPhaseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE19804
    // private NoteMovement/MovementPhase <movementPhase>k__BackingField
    // Size: 0x4
    // Offset: 0x68
    GlobalNamespace::NoteMovement::MovementPhase movementPhase;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteMovement::MovementPhase) == 0x4);
    // private UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevPosition
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 prevPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _localPosition
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 localPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevLocalPosition
    // Size: 0xC
    // Offset: 0x90
    UnityEngine::Vector3 prevLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: NoteMovement
    NoteMovement(GlobalNamespace::NoteFloorMovement* floorMovement_ = {}, GlobalNamespace::NoteJump* jump_ = {}, float zOffset_ = {}, System::Action* didInitEvent_ = {}, System::Action* noteDidStartJumpEvent_ = {}, System::Action* noteDidFinishJumpEvent_ = {}, System::Action* noteDidPassMissedMarkerEvent_ = {}, System::Action* noteDidPassHalfJumpEvent_ = {}, System::Action_1<GlobalNamespace::NoteMovement*>* noteDidPassJumpThreeQuartersEvent_ = {}, System::Action* noteDidMoveInJumpPhaseEvent_ = {}, GlobalNamespace::NoteMovement::MovementPhase movementPhase_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Vector3 prevPosition_ = {}, UnityEngine::Vector3 localPosition_ = {}, UnityEngine::Vector3 prevLocalPosition_ = {}) noexcept : floorMovement{floorMovement_}, jump{jump_}, zOffset{zOffset_}, didInitEvent{didInitEvent_}, noteDidStartJumpEvent{noteDidStartJumpEvent_}, noteDidFinishJumpEvent{noteDidFinishJumpEvent_}, noteDidPassMissedMarkerEvent{noteDidPassMissedMarkerEvent_}, noteDidPassHalfJumpEvent{noteDidPassHalfJumpEvent_}, noteDidPassJumpThreeQuartersEvent{noteDidPassJumpThreeQuartersEvent_}, noteDidMoveInJumpPhaseEvent{noteDidMoveInJumpPhaseEvent_}, movementPhase{movementPhase_}, position{position_}, prevPosition{prevPosition_}, localPosition{localPosition_}, prevLocalPosition{prevLocalPosition_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didInitEvent(System.Action value)
    // Offset: 0x11DB114
    void add_didInitEvent(System::Action* value);
    // public System.Void remove_didInitEvent(System.Action value)
    // Offset: 0x11DB1B8
    void remove_didInitEvent(System::Action* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action value)
    // Offset: 0x11D195C
    void add_noteDidStartJumpEvent(System::Action* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action value)
    // Offset: 0x11D1D74
    void remove_noteDidStartJumpEvent(System::Action* value);
    // public System.Void add_noteDidFinishJumpEvent(System.Action value)
    // Offset: 0x11D18B8
    void add_noteDidFinishJumpEvent(System::Action* value);
    // public System.Void remove_noteDidFinishJumpEvent(System.Action value)
    // Offset: 0x11D1CD0
    void remove_noteDidFinishJumpEvent(System::Action* value);
    // public System.Void add_noteDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0x11D1AA4
    void add_noteDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void remove_noteDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0x11D1EBC
    void remove_noteDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void add_noteDidPassHalfJumpEvent(System.Action value)
    // Offset: 0x11DB25C
    void add_noteDidPassHalfJumpEvent(System::Action* value);
    // public System.Void remove_noteDidPassHalfJumpEvent(System.Action value)
    // Offset: 0x11DB300
    void remove_noteDidPassHalfJumpEvent(System::Action* value);
    // public System.Void add_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteMovement> value)
    // Offset: 0x11D1A00
    void add_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement*>* value);
    // public System.Void remove_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteMovement> value)
    // Offset: 0x11D1E18
    void remove_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement*>* value);
    // public System.Void add_noteDidMoveInJumpPhaseEvent(System.Action value)
    // Offset: 0x11DB3A4
    void add_noteDidMoveInJumpPhaseEvent(System::Action* value);
    // public System.Void remove_noteDidMoveInJumpPhaseEvent(System.Action value)
    // Offset: 0x11DB448
    void remove_noteDidMoveInJumpPhaseEvent(System::Action* value);
    // public NoteMovement/MovementPhase get_movementPhase()
    // Offset: 0x11DB4EC
    GlobalNamespace::NoteMovement::MovementPhase get_movementPhase();
    // private System.Void set_movementPhase(NoteMovement/MovementPhase value)
    // Offset: 0x11DB4F4
    void set_movementPhase(GlobalNamespace::NoteMovement::MovementPhase value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x11DB4FC
    UnityEngine::Vector3 get_position();
    // public UnityEngine.Vector3 get_prevPosition()
    // Offset: 0x11DB508
    UnityEngine::Vector3 get_prevPosition();
    // public UnityEngine.Vector3 get_localPosition()
    // Offset: 0x11DB514
    UnityEngine::Vector3 get_localPosition();
    // public UnityEngine.Vector3 get_prevLocalPosition()
    // Offset: 0x11DB520
    UnityEngine::Vector3 get_prevLocalPosition();
    // public UnityEngine.Quaternion get_worldRotation()
    // Offset: 0x11D1490
    UnityEngine::Quaternion get_worldRotation();
    // public UnityEngine.Quaternion get_inverseWorldRotation()
    // Offset: 0x11D14DC
    UnityEngine::Quaternion get_inverseWorldRotation();
    // public UnityEngine.Vector3 get_moveEndPos()
    // Offset: 0x11D167C
    UnityEngine::Vector3 get_moveEndPos();
    // public System.Single get_moveStartTime()
    // Offset: 0x11D1524
    float get_moveStartTime();
    // public System.Single get_moveDuration()
    // Offset: 0x11D1568
    float get_moveDuration();
    // public UnityEngine.Vector3 get_beatPos()
    // Offset: 0x11D1638
    UnityEngine::Vector3 get_beatPos();
    // public System.Single get_jumpDuration()
    // Offset: 0x11D15AC
    float get_jumpDuration();
    // public UnityEngine.Vector3 get_jumpMoveVec()
    // Offset: 0x11D15F4
    UnityEngine::Vector3 get_jumpMoveVec();
    // public System.Single get_distanceToPlayer()
    // Offset: 0x11DB52C
    float get_distanceToPlayer();
    // public System.Void Init(System.Single beatTime, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single flipYSide, System.Single endRotation)
    // Offset: 0x11D2B20
    void Init(float beatTime, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float flipYSide, float endRotation);
    // protected System.Void Awake()
    // Offset: 0x11DB564
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11DB6E0
    void OnDestroy();
    // private System.Void HandleFloorMovementDidFinish()
    // Offset: 0x11DB8D0
    void HandleFloorMovementDidFinish();
    // private System.Void HandleNoteJumpDidFinish()
    // Offset: 0x11DB93C
    void HandleNoteJumpDidFinish();
    // private System.Void HandleNoteJumpDidPassMissedMark()
    // Offset: 0x11DB958
    void HandleNoteJumpDidPassMissedMark();
    // private System.Void HandleNoteJumpDidPassThreeQuarters(NoteJump noteJump)
    // Offset: 0x11DB96C
    void HandleNoteJumpDidPassThreeQuarters(GlobalNamespace::NoteJump* noteJump);
    // private System.Void HandleNoteJumpNoteJumpDidPassHalf()
    // Offset: 0x11DB9D0
    void HandleNoteJumpNoteJumpDidPassHalf();
    // public System.Void ManualUpdate()
    // Offset: 0x11D1F88
    void ManualUpdate();
    // public System.Void .ctor()
    // Offset: 0x11DB9E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteMovement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteMovement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteMovement*, creationType>()));
    }
  }; // NoteMovement
  #pragma pack(pop)
  static check_size<sizeof(NoteMovement), 144 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_NoteMovementSizeCheck;
  static_assert(sizeof(NoteMovement) == 0x9C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMovement*, "", "NoteMovement");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMovement::MovementPhase, "", "NoteMovement/MovementPhase");
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::add_didInitEvent
// Il2CppName: add_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::add_didInitEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "add_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::remove_didInitEvent
// Il2CppName: remove_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::remove_didInitEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "remove_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::add_noteDidStartJumpEvent
// Il2CppName: add_noteDidStartJumpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::add_noteDidStartJumpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "add_noteDidStartJumpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::remove_noteDidStartJumpEvent
// Il2CppName: remove_noteDidStartJumpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::remove_noteDidStartJumpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "remove_noteDidStartJumpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::add_noteDidFinishJumpEvent
// Il2CppName: add_noteDidFinishJumpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::add_noteDidFinishJumpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "add_noteDidFinishJumpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::remove_noteDidFinishJumpEvent
// Il2CppName: remove_noteDidFinishJumpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::remove_noteDidFinishJumpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "remove_noteDidFinishJumpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::add_noteDidPassMissedMarkerEvent
// Il2CppName: add_noteDidPassMissedMarkerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::add_noteDidPassMissedMarkerEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "add_noteDidPassMissedMarkerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::remove_noteDidPassMissedMarkerEvent
// Il2CppName: remove_noteDidPassMissedMarkerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::remove_noteDidPassMissedMarkerEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "remove_noteDidPassMissedMarkerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::add_noteDidPassHalfJumpEvent
// Il2CppName: add_noteDidPassHalfJumpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::add_noteDidPassHalfJumpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "add_noteDidPassHalfJumpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::remove_noteDidPassHalfJumpEvent
// Il2CppName: remove_noteDidPassHalfJumpEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::remove_noteDidPassHalfJumpEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "remove_noteDidPassHalfJumpEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::add_noteDidPassJumpThreeQuartersEvent
// Il2CppName: add_noteDidPassJumpThreeQuartersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action_1<GlobalNamespace::NoteMovement*>*)>(&GlobalNamespace::NoteMovement::add_noteDidPassJumpThreeQuartersEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "add_noteDidPassJumpThreeQuartersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::NoteMovement*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::remove_noteDidPassJumpThreeQuartersEvent
// Il2CppName: remove_noteDidPassJumpThreeQuartersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action_1<GlobalNamespace::NoteMovement*>*)>(&GlobalNamespace::NoteMovement::remove_noteDidPassJumpThreeQuartersEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "remove_noteDidPassJumpThreeQuartersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::NoteMovement*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::add_noteDidMoveInJumpPhaseEvent
// Il2CppName: add_noteDidMoveInJumpPhaseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::add_noteDidMoveInJumpPhaseEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "add_noteDidMoveInJumpPhaseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::remove_noteDidMoveInJumpPhaseEvent
// Il2CppName: remove_noteDidMoveInJumpPhaseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(System::Action*)>(&GlobalNamespace::NoteMovement::remove_noteDidMoveInJumpPhaseEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "remove_noteDidMoveInJumpPhaseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_movementPhase
// Il2CppName: get_movementPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteMovement::MovementPhase (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_movementPhase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_movementPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::set_movementPhase
// Il2CppName: set_movementPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(GlobalNamespace::NoteMovement::MovementPhase)>(&GlobalNamespace::NoteMovement::set_movementPhase)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "set_movementPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteMovement::MovementPhase>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_prevPosition
// Il2CppName: get_prevPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_prevPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_prevPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_localPosition
// Il2CppName: get_localPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_localPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_localPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_prevLocalPosition
// Il2CppName: get_prevLocalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_prevLocalPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_prevLocalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_worldRotation
// Il2CppName: get_worldRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_worldRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_worldRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_inverseWorldRotation
// Il2CppName: get_inverseWorldRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_inverseWorldRotation)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_inverseWorldRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_moveEndPos
// Il2CppName: get_moveEndPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_moveEndPos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_moveEndPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_moveStartTime
// Il2CppName: get_moveStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_moveStartTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_moveStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_moveDuration
// Il2CppName: get_moveDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_moveDuration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_moveDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_beatPos
// Il2CppName: get_beatPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_beatPos)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_beatPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_jumpDuration
// Il2CppName: get_jumpDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_jumpDuration)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_jumpDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_jumpMoveVec
// Il2CppName: get_jumpMoveVec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_jumpMoveVec)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_jumpMoveVec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::get_distanceToPlayer
// Il2CppName: get_distanceToPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::get_distanceToPlayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "get_distanceToPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(float, float, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, float, float, float)>(&GlobalNamespace::NoteMovement::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::Awake)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::HandleFloorMovementDidFinish
// Il2CppName: HandleFloorMovementDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::HandleFloorMovementDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "HandleFloorMovementDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::HandleNoteJumpDidFinish
// Il2CppName: HandleNoteJumpDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::HandleNoteJumpDidFinish)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "HandleNoteJumpDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::HandleNoteJumpDidPassMissedMark
// Il2CppName: HandleNoteJumpDidPassMissedMark
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::HandleNoteJumpDidPassMissedMark)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "HandleNoteJumpDidPassMissedMark", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::HandleNoteJumpDidPassThreeQuarters
// Il2CppName: HandleNoteJumpDidPassThreeQuarters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)(GlobalNamespace::NoteJump*)>(&GlobalNamespace::NoteMovement::HandleNoteJumpDidPassThreeQuarters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "HandleNoteJumpDidPassThreeQuarters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::NoteJump*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::HandleNoteJumpNoteJumpDidPassHalf
// Il2CppName: HandleNoteJumpNoteJumpDidPassHalf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::HandleNoteJumpNoteJumpDidPassHalf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "HandleNoteJumpNoteJumpDidPassHalf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteMovement::*)()>(&GlobalNamespace::NoteMovement::ManualUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteMovement*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteMovement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
