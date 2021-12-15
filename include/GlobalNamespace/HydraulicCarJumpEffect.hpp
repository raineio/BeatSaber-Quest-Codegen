// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HydraulicCarJumpEffect
  class HydraulicCarJumpEffect;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::HydraulicCarJumpEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HydraulicCarJumpEffect*, "", "HydraulicCarJumpEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: HydraulicCarJumpEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class HydraulicCarJumpEffect : public UnityEngine::MonoBehaviour {
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
    // private BeatmapEventType _event
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType event;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // Padding between fields: event and: eventValues
    char __padding0[0x4] = {};
    // private System.Int32[] _eventValues
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> eventValues;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // [SpaceAttribute] Offset: 0xF34104
    // private UnityEngine.Vector3 _impulse
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 impulse;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _randomness
    // Size: 0x4
    // Offset: 0x34
    float randomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _minDelayBetweenEvents
    // Size: 0x4
    // Offset: 0x44
    float minDelayBetweenEvents;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xF3416C
    // private UnityEngine.Rigidbody _rigidbody
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // [InjectAttribute] Offset: 0xF341A4
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Single _lastEventTime
    // Size: 0x4
    // Offset: 0x58
    float lastEventTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastEventTime and: eventValuesHashSet
    char __padding8[0x4] = {};
    // private System.Collections.Generic.HashSet`1<System.Int32> _eventValuesHashSet
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::HashSet_1<int>* eventValuesHashSet;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<int>*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapEventType _event
    GlobalNamespace::BeatmapEventType& dyn__event();
    // Get instance field reference: private System.Int32[] _eventValues
    ::ArrayW<int>& dyn__eventValues();
    // Get instance field reference: private UnityEngine.Vector3 _impulse
    UnityEngine::Vector3& dyn__impulse();
    // Get instance field reference: private System.Single _randomness
    float& dyn__randomness();
    // Get instance field reference: private UnityEngine.Vector3 _position
    UnityEngine::Vector3& dyn__position();
    // Get instance field reference: private System.Single _minDelayBetweenEvents
    float& dyn__minDelayBetweenEvents();
    // Get instance field reference: private UnityEngine.Rigidbody _rigidbody
    UnityEngine::Rigidbody*& dyn__rigidbody();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private System.Single _lastEventTime
    float& dyn__lastEventTime();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> _eventValuesHashSet
    System::Collections::Generic::HashSet_1<int>*& dyn__eventValuesHashSet();
    // protected System.Void Start()
    // Offset: 0x119F11C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x119F23C
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x119F33C
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x119F4BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HydraulicCarJumpEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HydraulicCarJumpEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HydraulicCarJumpEffect*, creationType>()));
    }
  }; // HydraulicCarJumpEffect
  #pragma pack(pop)
  static check_size<sizeof(HydraulicCarJumpEffect), 96 + sizeof(System::Collections::Generic::HashSet_1<int>*)> __GlobalNamespace_HydraulicCarJumpEffectSizeCheck;
  static_assert(sizeof(HydraulicCarJumpEffect) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HydraulicCarJumpEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HydraulicCarJumpEffect::*)()>(&GlobalNamespace::HydraulicCarJumpEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HydraulicCarJumpEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HydraulicCarJumpEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HydraulicCarJumpEffect::*)()>(&GlobalNamespace::HydraulicCarJumpEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HydraulicCarJumpEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HydraulicCarJumpEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HydraulicCarJumpEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HydraulicCarJumpEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
