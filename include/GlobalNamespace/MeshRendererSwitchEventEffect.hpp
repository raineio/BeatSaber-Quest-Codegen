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
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MeshRendererSwitchEventEffect
  class MeshRendererSwitchEventEffect;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MeshRendererSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MeshRendererSwitchEventEffect*, "", "MeshRendererSwitchEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MeshRendererSwitchEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshRendererSwitchEventEffect : public UnityEngine::MonoBehaviour {
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
    // private BeatmapEventType _beatmapEvent
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapEventType beatmapEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // Padding between fields: beatmapEvent and: deactivateOnBoostRenderers
    char __padding0[0x4] = {};
    // [NullAllowed] Offset: 0xF3B5F0
    // private UnityEngine.MeshRenderer[] _deactivateOnBoostRenderers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<UnityEngine::MeshRenderer*> deactivateOnBoostRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::MeshRenderer*>) == 0x8);
    // [NullAllowed] Offset: 0xF3B628
    // private UnityEngine.MeshRenderer[] _activateOnBoostRenderers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<UnityEngine::MeshRenderer*> activateOnBoostRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::MeshRenderer*>) == 0x8);
    // [InjectAttribute] Offset: 0xF3B660
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapEventType _beatmapEvent
    GlobalNamespace::BeatmapEventType& dyn__beatmapEvent();
    // Get instance field reference: private UnityEngine.MeshRenderer[] _deactivateOnBoostRenderers
    ::ArrayW<UnityEngine::MeshRenderer*>& dyn__deactivateOnBoostRenderers();
    // Get instance field reference: private UnityEngine.MeshRenderer[] _activateOnBoostRenderers
    ::ArrayW<UnityEngine::MeshRenderer*>& dyn__activateOnBoostRenderers();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // protected System.Void Start()
    // Offset: 0x115D404
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x115D4F4
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x115D5F4
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void ToggleObjects(System.Boolean isBoostOn)
    // Offset: 0x115D628
    void ToggleObjects(bool isBoostOn);
    // public System.Void .ctor()
    // Offset: 0x115D700
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshRendererSwitchEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MeshRendererSwitchEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshRendererSwitchEventEffect*, creationType>()));
    }
  }; // MeshRendererSwitchEventEffect
  #pragma pack(pop)
  static check_size<sizeof(MeshRendererSwitchEventEffect), 48 + sizeof(GlobalNamespace::IBeatmapObjectCallbackController*)> __GlobalNamespace_MeshRendererSwitchEventEffectSizeCheck;
  static_assert(sizeof(MeshRendererSwitchEventEffect) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MeshRendererSwitchEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&GlobalNamespace::MeshRendererSwitchEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MeshRendererSwitchEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)()>(&GlobalNamespace::MeshRendererSwitchEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MeshRendererSwitchEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)(GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::MeshRendererSwitchEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MeshRendererSwitchEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects
// Il2CppName: ToggleObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MeshRendererSwitchEventEffect::*)(bool)>(&GlobalNamespace::MeshRendererSwitchEventEffect::ToggleObjects)> {
  static const MethodInfo* get() {
    static auto* isBoostOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MeshRendererSwitchEventEffect*), "ToggleObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isBoostOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MeshRendererSwitchEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
