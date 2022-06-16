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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: ColorBoostBeatmapEventData
  class ColorBoostBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameObjectSwitchEventEffect
  class GameObjectSwitchEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameObjectSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectSwitchEventEffect*, "", "GameObjectSwitchEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: GameObjectSwitchEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class GameObjectSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [NullAllowed] Offset: 0x10D875C
    // private UnityEngine.GameObject[] _deactivateOnBoostObjects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::GameObject*> deactivateOnBoostObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // [NullAllowed] Offset: 0x10D8794
    // private UnityEngine.GameObject[] _activateOnBoostObjects
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::GameObject*> activateOnBoostObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // [InjectAttribute] Offset: 0x10D87CC
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject[] _deactivateOnBoostObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__deactivateOnBoostObjects();
    // Get instance field reference: private UnityEngine.GameObject[] _activateOnBoostObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__activateOnBoostObjects();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // public System.Void .ctor()
    // Offset: 0x13A9240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObjectSwitchEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameObjectSwitchEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameObjectSwitchEventEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13A9090
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13A9134
    void OnDestroy();
    // private System.Void HandleBeatmapEvent(ColorBoostBeatmapEventData basicBeatmapEventData)
    // Offset: 0x13A9150
    void HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* basicBeatmapEventData);
    // private System.Void ToggleObjects(System.Boolean isBoostOn)
    // Offset: 0x13A9168
    void ToggleObjects(bool isBoostOn);
  }; // GameObjectSwitchEventEffect
  #pragma pack(pop)
  static check_size<sizeof(GameObjectSwitchEventEffect), 48 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_GameObjectSwitchEventEffectSizeCheck;
  static_assert(sizeof(GameObjectSwitchEventEffect) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameObjectSwitchEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameObjectSwitchEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameObjectSwitchEventEffect::*)()>(&GlobalNamespace::GameObjectSwitchEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameObjectSwitchEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameObjectSwitchEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameObjectSwitchEventEffect::*)()>(&GlobalNamespace::GameObjectSwitchEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameObjectSwitchEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameObjectSwitchEventEffect::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameObjectSwitchEventEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(&GlobalNamespace::GameObjectSwitchEventEffect::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "ColorBoostBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameObjectSwitchEventEffect*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameObjectSwitchEventEffect::ToggleObjects
// Il2CppName: ToggleObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameObjectSwitchEventEffect::*)(bool)>(&GlobalNamespace::GameObjectSwitchEventEffect::ToggleObjects)> {
  static const MethodInfo* get() {
    static auto* isBoostOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameObjectSwitchEventEffect*), "ToggleObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isBoostOn});
  }
};
