// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HydraulicCarJumpEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HydraulicCarJumpEffect*, "", "HydraulicCarJumpEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HydraulicCarJumpEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class HydraulicCarJumpEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BasicBeatmapEventType _event
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::BasicBeatmapEventType event;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // Padding between fields: event and: eventValues
    char __padding0[0x4] = {};
    // private System.Int32[] _eventValues
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> eventValues;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // [SpaceAttribute] Offset: 0x10CDF84
    // private UnityEngine.Vector3 _impulse
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 impulse;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _randomness
    // Size: 0x4
    // Offset: 0x34
    float randomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _minDelayBetweenEvents
    // Size: 0x4
    // Offset: 0x44
    float minDelayBetweenEvents;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10CDFEC
    // private UnityEngine.Rigidbody _rigidbody
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // [InjectAttribute] Offset: 0x10CE024
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
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
    ::System::Collections::Generic::HashSet_1<int>* eventValuesHashSet;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BasicBeatmapEventType _event
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__event();
    // Get instance field reference: private System.Int32[] _eventValues
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__eventValues();
    // Get instance field reference: private UnityEngine.Vector3 _impulse
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__impulse();
    // Get instance field reference: private System.Single _randomness
    [[deprecated("Use field access instead!")]] float& dyn__randomness();
    // Get instance field reference: private UnityEngine.Vector3 _position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__position();
    // Get instance field reference: private System.Single _minDelayBetweenEvents
    [[deprecated("Use field access instead!")]] float& dyn__minDelayBetweenEvents();
    // Get instance field reference: private UnityEngine.Rigidbody _rigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn__rigidbody();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private System.Single _lastEventTime
    [[deprecated("Use field access instead!")]] float& dyn__lastEventTime();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.Int32> _eventValuesHashSet
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<int>*& dyn__eventValuesHashSet();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // public System.Void .ctor()
    // Offset: 0x13AECD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HydraulicCarJumpEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HydraulicCarJumpEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HydraulicCarJumpEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13AE9FC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13AEB44
    void OnDestroy();
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x13AEB60
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
  }; // HydraulicCarJumpEffect
  #pragma pack(pop)
  static check_size<sizeof(HydraulicCarJumpEffect), 104 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_HydraulicCarJumpEffectSizeCheck;
  static_assert(sizeof(HydraulicCarJumpEffect) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HydraulicCarJumpEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
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
// Writing MetadataGetter for method: GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HydraulicCarJumpEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::HydraulicCarJumpEffect::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HydraulicCarJumpEffect*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
