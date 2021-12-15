// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteControllerDidInitEvent
#include "GlobalNamespace/INoteControllerDidInitEvent.hpp"
// Including type: INoteControllerNoteDidStartDissolvingEvent
#include "GlobalNamespace/INoteControllerNoteDidStartDissolvingEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BaseNoteVisuals
  class BaseNoteVisuals;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::BaseNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNoteVisuals*, "", "BaseNoteVisuals");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BaseNoteVisuals
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseNoteVisuals : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::INoteControllerDidInitEvent, public GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*/ {
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
    // private NoteControllerBase _noteController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteControllerBase* noteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteControllerBase*) == 0x8);
    // private CutoutAnimateEffect _cutoutAnimateEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerDidInitEvent
    operator GlobalNamespace::INoteControllerDidInitEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
    operator GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private NoteControllerBase _noteController
    GlobalNamespace::NoteControllerBase*& dyn__noteController();
    // Get instance field reference: private CutoutAnimateEffect _cutoutAnimateEffect
    GlobalNamespace::CutoutAnimateEffect*& dyn__cutoutAnimateEffect();
    // protected System.Void Awake()
    // Offset: 0x12C431C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x12C446C
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0x12C4604
    void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase* noteController);
    // public System.Void HandleNoteControllerNoteDidStartDissolving(NoteControllerBase noteController, System.Single duration)
    // Offset: 0x12C4620
    void HandleNoteControllerNoteDidStartDissolving(GlobalNamespace::NoteControllerBase* noteController, float duration);
    // private System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x12C4630
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
    // public System.Void .ctor()
    // Offset: 0x12C4658
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNoteVisuals* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseNoteVisuals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNoteVisuals*, creationType>()));
    }
  }; // BaseNoteVisuals
  #pragma pack(pop)
  static check_size<sizeof(BaseNoteVisuals), 32 + sizeof(GlobalNamespace::CutoutAnimateEffect*)> __GlobalNamespace_BaseNoteVisualsSizeCheck;
  static_assert(sizeof(BaseNoteVisuals) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseNoteVisuals::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNoteVisuals::*)()>(&GlobalNamespace::BaseNoteVisuals::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNoteVisuals*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNoteVisuals::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNoteVisuals::*)()>(&GlobalNamespace::BaseNoteVisuals::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNoteVisuals*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNoteVisuals::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNoteVisuals::*)(GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::BaseNoteVisuals::HandleNoteControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNoteVisuals*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNoteVisuals::HandleNoteControllerNoteDidStartDissolving
// Il2CppName: HandleNoteControllerNoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNoteVisuals::*)(GlobalNamespace::NoteControllerBase*, float)>(&GlobalNamespace::BaseNoteVisuals::HandleNoteControllerNoteDidStartDissolving)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNoteVisuals*), "HandleNoteControllerNoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNoteVisuals::AnimateCutout
// Il2CppName: AnimateCutout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNoteVisuals::*)(float, float, float)>(&GlobalNamespace::BaseNoteVisuals::AnimateCutout)> {
  static const MethodInfo* get() {
    static auto* cutoutStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutoutEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNoteVisuals*), "AnimateCutout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutoutStart, cutoutEnd, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNoteVisuals::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
