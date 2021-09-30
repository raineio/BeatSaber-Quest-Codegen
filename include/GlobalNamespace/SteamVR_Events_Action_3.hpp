// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: SteamVR_Events/Action
#include "GlobalNamespace/SteamVR_Events_Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`3<T0, T1, T2>
  template<typename T0, typename T1, typename T2>
  class UnityAction_3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SteamVR_Events/Action`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1, typename T2>
  class SteamVR_Events::Action_3 : public GlobalNamespace::SteamVR_Events::Action {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private SteamVR_Events/Event`3<T0,T1,T2> _event
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>* event;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>*) == 0x8);
    // private UnityEngine.Events.UnityAction`3<T0,T1,T2> action
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Events::UnityAction_3<T0, T1, T2>* action;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityAction_3<T0, T1, T2>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private SteamVR_Events/Event`3<T0,T1,T2> _event
    GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>*& dyn__event() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Action_3::dyn__event");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_event"))->offset;
      return *reinterpret_cast<GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Events.UnityAction`3<T0,T1,T2> action
    UnityEngine::Events::UnityAction_3<T0, T1, T2>*& dyn_action() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Action_3::dyn_action");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "action"))->offset;
      return *reinterpret_cast<UnityEngine::Events::UnityAction_3<T0, T1, T2>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(SteamVR_Events/Event`3<T0,T1,T2> _event, UnityEngine.Events.UnityAction`3<T0,T1,T2> action)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::Action_3<T0, T1, T2>* New_ctor(GlobalNamespace::SteamVR_Events::Event_3<T0, T1, T2>* _event, UnityEngine::Events::UnityAction_3<T0, T1, T2>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Action_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::Action_3<T0, T1, T2>*, creationType>(_event, action)));
    }
    // public override System.Void Enable(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    // Implemented from: SteamVR_Events/Action
    // Base method: System.Void Action::Enable(System.Boolean enabled)
    void Enable(bool enabled) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Events::Action_3::Enable");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enable", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(enabled)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, enabled);
    }
  }; // SteamVR_Events/Action`3
  // Could not write size check! Type: SteamVR_Events/Action`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SteamVR_Events::Action_3, "", "SteamVR_Events/Action`3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
