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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MovementBeatmapEventEffect
  class MovementBeatmapEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MovementBeatmapEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MovementBeatmapEventEffect*, "", "MovementBeatmapEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: MovementBeatmapEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class MovementBeatmapEventEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MovementBeatmapEventEffect::MovementData
    class MovementData;
    public:
    // private BasicBeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::BasicBeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0x10D68D4
    // private System.Single _transitionSpeed
    // Size: 0x4
    // Offset: 0x1C
    float transitionSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private MovementBeatmapEventEffect/MovementData[] _movementData
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::MovementBeatmapEventEffect::MovementData*> movementData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MovementBeatmapEventEffect::MovementData*>) == 0x8);
    // [SpaceAttribute] Offset: 0x10D691C
    // private UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Transform*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // [InjectAttribute] Offset: 0x10D6954
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private System.Int32 _currentMovementDataIdx
    // Size: 0x4
    // Offset: 0x38
    int currentMovementDataIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 _currentPositionOffset
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 currentPositionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevPositionOffset
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 prevPositionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: prevPositionOffset and: startLocalPositions
    char __padding7[0x4] = {};
    // private UnityEngine.Vector3[] _startLocalPositions
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Vector3> startLocalPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BasicBeatmapEventType _beatmapEventType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__beatmapEventType();
    // Get instance field reference: private System.Single _transitionSpeed
    [[deprecated("Use field access instead!")]] float& dyn__transitionSpeed();
    // Get instance field reference: private MovementBeatmapEventEffect/MovementData[] _movementData
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MovementBeatmapEventEffect::MovementData*>& dyn__movementData();
    // Get instance field reference: private UnityEngine.Transform[] _transforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn__transforms();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private System.Int32 _currentMovementDataIdx
    [[deprecated("Use field access instead!")]] int& dyn__currentMovementDataIdx();
    // Get instance field reference: private UnityEngine.Vector3 _currentPositionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__currentPositionOffset();
    // Get instance field reference: private UnityEngine.Vector3 _prevPositionOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__prevPositionOffset();
    // Get instance field reference: private UnityEngine.Vector3[] _startLocalPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn__startLocalPositions();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // public System.Void .ctor()
    // Offset: 0x13C70D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovementBeatmapEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MovementBeatmapEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovementBeatmapEventEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13C6B00
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13C6E14
    void OnDestroy();
    // protected System.Void FixedUpdate()
    // Offset: 0x13C6E30
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x13C6FB0
    void LateUpdate();
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x13C709C
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // private System.Void SetLocalPositionOffsetsForAllObjects(UnityEngine.Vector3 localPositionOffset)
    // Offset: 0x13C6CDC
    void SetLocalPositionOffsetsForAllObjects(::UnityEngine::Vector3 localPositionOffset);
  }; // MovementBeatmapEventEffect
  #pragma pack(pop)
  static check_size<sizeof(MovementBeatmapEventEffect), 96 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_MovementBeatmapEventEffectSizeCheck;
  static_assert(sizeof(MovementBeatmapEventEffect) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)()>(&GlobalNamespace::MovementBeatmapEventEffect::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::MovementBeatmapEventEffect::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovementBeatmapEventEffect::SetLocalPositionOffsetsForAllObjects
// Il2CppName: SetLocalPositionOffsetsForAllObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovementBeatmapEventEffect::*)(::UnityEngine::Vector3)>(&GlobalNamespace::MovementBeatmapEventEffect::SetLocalPositionOffsetsForAllObjects)> {
  static const MethodInfo* get() {
    static auto* localPositionOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovementBeatmapEventEffect*), "SetLocalPositionOffsetsForAllObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localPositionOffset});
  }
};
