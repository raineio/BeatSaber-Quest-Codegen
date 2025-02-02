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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: TrackLaneRingsRotationEffect
  class TrackLaneRingsRotationEffect;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRingsRotationEffectSpawner
  class TrackLaneRingsRotationEffectSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner*, "", "TrackLaneRingsRotationEffectSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsRotationEffectSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackLaneRingsRotationEffectSpawner : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType
    struct RotationStepType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: TrackLaneRingsRotationEffectSpawner/RotationStepType
    // [TokenAttribute] Offset: FFFFFFFF
    struct RotationStepType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RotationStepType
      constexpr RotationStepType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static constexpr const int Range0ToMax = 0;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_Range0ToMax();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range0ToMax
      static void _set_Range0ToMax(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static constexpr const int Range = 1;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_Range();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType Range
      static void _set_Range(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // static field const value: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static constexpr const int MaxOr0 = 2;
      // Get static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType _get_MaxOr0();
      // Set static field: static public TrackLaneRingsRotationEffectSpawner/RotationStepType MaxOr0
      static void _set_MaxOr0(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // TrackLaneRingsRotationEffectSpawner/RotationStepType
    #pragma pack(pop)
    static check_size<sizeof(TrackLaneRingsRotationEffectSpawner::RotationStepType), 0 + sizeof(int)> __GlobalNamespace_TrackLaneRingsRotationEffectSpawner_RotationStepTypeSizeCheck;
    static_assert(sizeof(TrackLaneRingsRotationEffectSpawner::RotationStepType) == 0x4);
    public:
    // private TrackLaneRingsRotationEffect _trackLaneRingsRotationEffect
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TrackLaneRingsRotationEffect* trackLaneRingsRotationEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TrackLaneRingsRotationEffect*) == 0x8);
    // [SpaceAttribute] Offset: 0x11210E0
    // private BasicBeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BasicBeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0x1121118
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x24
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationStep
    // Size: 0x4
    // Offset: 0x28
    float rotationStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private TrackLaneRingsRotationEffectSpawner/RotationStepType _rotationStepType
    // Size: 0x4
    // Offset: 0x2C
    ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType rotationStepType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType) == 0x4);
    // private System.Int32 _rotationPropagationSpeed
    // Size: 0x4
    // Offset: 0x30
    int rotationPropagationSpeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _rotationFlexySpeed
    // Size: 0x4
    // Offset: 0x34
    float rotationFlexySpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x1121190
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TrackLaneRingsRotationEffect _trackLaneRingsRotationEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TrackLaneRingsRotationEffect*& dyn__trackLaneRingsRotationEffect();
    // Get instance field reference: private BasicBeatmapEventType _beatmapEventType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__beatmapEventType();
    // Get instance field reference: private System.Single _rotation
    [[deprecated("Use field access instead!")]] float& dyn__rotation();
    // Get instance field reference: private System.Single _rotationStep
    [[deprecated("Use field access instead!")]] float& dyn__rotationStep();
    // Get instance field reference: private TrackLaneRingsRotationEffectSpawner/RotationStepType _rotationStepType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType& dyn__rotationStepType();
    // Get instance field reference: private System.Int32 _rotationPropagationSpeed
    [[deprecated("Use field access instead!")]] int& dyn__rotationPropagationSpeed();
    // Get instance field reference: private System.Single _rotationFlexySpeed
    [[deprecated("Use field access instead!")]] float& dyn__rotationFlexySpeed();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // public System.Void .ctor()
    // Offset: 0x13C4CC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsRotationEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsRotationEffectSpawner*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13C4AB8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13C4BD0
    void OnDestroy();
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x13C4BEC
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
  }; // TrackLaneRingsRotationEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsRotationEffectSpawner), 64 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_TrackLaneRingsRotationEffectSpawnerSizeCheck;
  static_assert(sizeof(TrackLaneRingsRotationEffectSpawner) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsRotationEffectSpawner::RotationStepType, "", "TrackLaneRingsRotationEffectSpawner/RotationStepType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffectSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)()>(&GlobalNamespace::TrackLaneRingsRotationEffectSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsRotationEffectSpawner::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::TrackLaneRingsRotationEffectSpawner::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsRotationEffectSpawner*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
