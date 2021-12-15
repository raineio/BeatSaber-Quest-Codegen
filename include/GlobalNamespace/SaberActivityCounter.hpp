// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::SaberActivityCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberActivityCounter*, "", "SaberActivityCounter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: SaberActivityCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberActivityCounter : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Single _averageWindowDuration
    // Size: 0x4
    // Offset: 0x18
    float averageWindowDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _valuesPerSecond
    // Size: 0x4
    // Offset: 0x1C
    float valuesPerSecond;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _increaseSpeed
    // Size: 0x4
    // Offset: 0x20
    float increaseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _deceraseSpeed
    // Size: 0x4
    // Offset: 0x24
    float deceraseSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _movementSensitivityThreshold
    // Size: 0x4
    // Offset: 0x28
    float movementSensitivityThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: movementSensitivityThreshold and: saberManager
    char __padding4[0x4] = {};
    // [InjectAttribute] Offset: 0xF3FBB4
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // private System.Action`1<System.Single> totalDistanceDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<float>* totalDistanceDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // private Saber _leftSaber
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::Saber* leftSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private Saber _rightSaber
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::Saber* rightSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private UnityEngine.Vector3 _prevLeftSaberTipPos
    // Size: 0xC
    // Offset: 0x50
    UnityEngine::Vector3 prevLeftSaberTipPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevRightSaberTipPos
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 prevRightSaberTipPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevLeftHandPos
    // Size: 0xC
    // Offset: 0x68
    UnityEngine::Vector3 prevLeftHandPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevRightHandPos
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 prevRightHandPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean _hasPrevPos
    // Size: 0x1
    // Offset: 0x80
    bool hasPrevPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPrevPos and: leftSaberMovementDistance
    char __padding13[0x3] = {};
    // private System.Single _leftSaberMovementDistance
    // Size: 0x4
    // Offset: 0x84
    float leftSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightSaberMovementDistance
    // Size: 0x4
    // Offset: 0x88
    float rightSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _leftHandMovementDistance
    // Size: 0x4
    // Offset: 0x8C
    float leftHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rightHandMovementDistance
    // Size: 0x4
    // Offset: 0x90
    float rightHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: rightHandMovementDistance and: saberMovementHistoryRecorder
    char __padding17[0x4] = {};
    // private MovementHistoryRecorder _saberMovementHistoryRecorder
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::MovementHistoryRecorder* saberMovementHistoryRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MovementHistoryRecorder*) == 0x8);
    // private MovementHistoryRecorder _handMovementHistoryRecorder
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::MovementHistoryRecorder* handMovementHistoryRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MovementHistoryRecorder*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _averageWindowDuration
    float& dyn__averageWindowDuration();
    // Get instance field reference: private System.Single _valuesPerSecond
    float& dyn__valuesPerSecond();
    // Get instance field reference: private System.Single _increaseSpeed
    float& dyn__increaseSpeed();
    // Get instance field reference: private System.Single _deceraseSpeed
    float& dyn__deceraseSpeed();
    // Get instance field reference: private System.Single _movementSensitivityThreshold
    float& dyn__movementSensitivityThreshold();
    // Get instance field reference: private readonly SaberManager _saberManager
    GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private System.Action`1<System.Single> totalDistanceDidChangeEvent
    System::Action_1<float>*& dyn_totalDistanceDidChangeEvent();
    // Get instance field reference: private Saber _leftSaber
    GlobalNamespace::Saber*& dyn__leftSaber();
    // Get instance field reference: private Saber _rightSaber
    GlobalNamespace::Saber*& dyn__rightSaber();
    // Get instance field reference: private UnityEngine.Vector3 _prevLeftSaberTipPos
    UnityEngine::Vector3& dyn__prevLeftSaberTipPos();
    // Get instance field reference: private UnityEngine.Vector3 _prevRightSaberTipPos
    UnityEngine::Vector3& dyn__prevRightSaberTipPos();
    // Get instance field reference: private UnityEngine.Vector3 _prevLeftHandPos
    UnityEngine::Vector3& dyn__prevLeftHandPos();
    // Get instance field reference: private UnityEngine.Vector3 _prevRightHandPos
    UnityEngine::Vector3& dyn__prevRightHandPos();
    // Get instance field reference: private System.Boolean _hasPrevPos
    bool& dyn__hasPrevPos();
    // Get instance field reference: private System.Single _leftSaberMovementDistance
    float& dyn__leftSaberMovementDistance();
    // Get instance field reference: private System.Single _rightSaberMovementDistance
    float& dyn__rightSaberMovementDistance();
    // Get instance field reference: private System.Single _leftHandMovementDistance
    float& dyn__leftHandMovementDistance();
    // Get instance field reference: private System.Single _rightHandMovementDistance
    float& dyn__rightHandMovementDistance();
    // Get instance field reference: private MovementHistoryRecorder _saberMovementHistoryRecorder
    GlobalNamespace::MovementHistoryRecorder*& dyn__saberMovementHistoryRecorder();
    // Get instance field reference: private MovementHistoryRecorder _handMovementHistoryRecorder
    GlobalNamespace::MovementHistoryRecorder*& dyn__handMovementHistoryRecorder();
    // public System.Single get_leftSaberMovementDistance()
    // Offset: 0x11B9808
    float get_leftSaberMovementDistance();
    // public System.Single get_rightSaberMovementDistance()
    // Offset: 0x11B9810
    float get_rightSaberMovementDistance();
    // public System.Single get_leftHandMovementDistance()
    // Offset: 0x11B9818
    float get_leftHandMovementDistance();
    // public System.Single get_rightHandMovementDistance()
    // Offset: 0x11B9820
    float get_rightHandMovementDistance();
    // public AveragingValueRecorder get_saberMovementAveragingValueRecorder()
    // Offset: 0x11B049C
    GlobalNamespace::AveragingValueRecorder* get_saberMovementAveragingValueRecorder();
    // public AveragingValueRecorder get_handMovementAveragingValueRecorder()
    // Offset: 0x11B04B8
    GlobalNamespace::AveragingValueRecorder* get_handMovementAveragingValueRecorder();
    // public System.Void add_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x11B96C0
    void add_totalDistanceDidChangeEvent(System::Action_1<float>* value);
    // public System.Void remove_totalDistanceDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x11B9764
    void remove_totalDistanceDidChangeEvent(System::Action_1<float>* value);
    // protected System.Void Awake()
    // Offset: 0x11B9828
    void Awake();
    // protected System.Void Start()
    // Offset: 0x11B98E8
    void Start();
    // protected System.Void Update()
    // Offset: 0x11B9910
    void Update();
    // public System.Void .ctor()
    // Offset: 0x11B9CC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberActivityCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberActivityCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberActivityCounter*, creationType>()));
    }
  }; // SaberActivityCounter
  #pragma pack(pop)
  static check_size<sizeof(SaberActivityCounter), 160 + sizeof(GlobalNamespace::MovementHistoryRecorder*)> __GlobalNamespace_SaberActivityCounterSizeCheck;
  static_assert(sizeof(SaberActivityCounter) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_leftSaberMovementDistance
// Il2CppName: get_leftSaberMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_leftSaberMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_leftSaberMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_rightSaberMovementDistance
// Il2CppName: get_rightSaberMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_rightSaberMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_rightSaberMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_leftHandMovementDistance
// Il2CppName: get_leftHandMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_leftHandMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_leftHandMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_rightHandMovementDistance
// Il2CppName: get_rightHandMovementDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_rightHandMovementDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_rightHandMovementDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_saberMovementAveragingValueRecorder
// Il2CppName: get_saberMovementAveragingValueRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AveragingValueRecorder* (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_saberMovementAveragingValueRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_saberMovementAveragingValueRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::get_handMovementAveragingValueRecorder
// Il2CppName: get_handMovementAveragingValueRecorder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AveragingValueRecorder* (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::get_handMovementAveragingValueRecorder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "get_handMovementAveragingValueRecorder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::add_totalDistanceDidChangeEvent
// Il2CppName: add_totalDistanceDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)(System::Action_1<float>*)>(&GlobalNamespace::SaberActivityCounter::add_totalDistanceDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "add_totalDistanceDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::remove_totalDistanceDidChangeEvent
// Il2CppName: remove_totalDistanceDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)(System::Action_1<float>*)>(&GlobalNamespace::SaberActivityCounter::remove_totalDistanceDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "remove_totalDistanceDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberActivityCounter::*)()>(&GlobalNamespace::SaberActivityCounter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberActivityCounter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberActivityCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
