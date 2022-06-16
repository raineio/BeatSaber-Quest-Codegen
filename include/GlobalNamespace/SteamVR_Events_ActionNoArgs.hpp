// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: SteamVR_Events/Action
#include "GlobalNamespace/SteamVR_Events_Action.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Events::ActionNoArgs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Events::ActionNoArgs*, "", "SteamVR_Events/ActionNoArgs");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Events/ActionNoArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Events::ActionNoArgs : public ::GlobalNamespace::SteamVR_Events::Action {
    public:
    public:
    // private SteamVR_Events/Event _event
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::SteamVR_Events::Event* event;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Events::Event*) == 0x8);
    // private UnityEngine.Events.UnityAction action
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Events::UnityAction* action;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction*) == 0x8);
    public:
    // Get instance field reference: private SteamVR_Events/Event _event
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_Events::Event*& dyn__event();
    // Get instance field reference: private UnityEngine.Events.UnityAction action
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction*& dyn_action();
    // public System.Void .ctor(SteamVR_Events/Event _event, UnityEngine.Events.UnityAction action)
    // Offset: 0x189F790
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::ActionNoArgs* New_ctor(::GlobalNamespace::SteamVR_Events::Event* _event, ::UnityEngine::Events::UnityAction* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Events::ActionNoArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::ActionNoArgs*, creationType>(_event, action)));
    }
    // public override System.Void Enable(System.Boolean enabled)
    // Offset: 0x18A014C
    // Implemented from: SteamVR_Events/Action
    // Base method: System.Void Action::Enable(System.Boolean enabled)
    void Enable(bool enabled);
  }; // SteamVR_Events/ActionNoArgs
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Events::ActionNoArgs), 24 + sizeof(::UnityEngine::Events::UnityAction*)> __GlobalNamespace_SteamVR_Events_ActionNoArgsSizeCheck;
  static_assert(sizeof(SteamVR_Events::ActionNoArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::ActionNoArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::ActionNoArgs::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Events::ActionNoArgs::*)(bool)>(&GlobalNamespace::SteamVR_Events::ActionNoArgs::Enable)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Events::ActionNoArgs*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
