// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.EventTrigger
#include "UnityEngine/EventSystems/EventTrigger.hpp"
// Including type: UnityEngine.EventSystems.EventTriggerType
#include "UnityEngine/EventSystems/EventTriggerType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::EventTrigger::Entry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventTrigger::Entry*, "UnityEngine.EventSystems", "EventTrigger/Entry");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry
  // [TokenAttribute] Offset: FFFFFFFF
  class EventTrigger::Entry : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.EventSystems.EventTriggerType eventID
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::EventSystems::EventTriggerType eventID;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::EventTriggerType) == 0x4);
    // Padding between fields: eventID and: callback
    char __padding0[0x4] = {};
    // public UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.TriggerEvent callback
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::EventSystems::EventTrigger::TriggerEvent* callback;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::EventTrigger::TriggerEvent*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.EventSystems.EventTriggerType eventID
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::EventTriggerType& dyn_eventID();
    // Get instance field reference: public UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.TriggerEvent callback
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::EventTrigger::TriggerEvent*& dyn_callback();
    // public System.Void .ctor()
    // Offset: 0x192E7C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventTrigger::Entry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::EventTrigger::Entry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventTrigger::Entry*, creationType>()));
    }
  }; // UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.Entry
  #pragma pack(pop)
  static check_size<sizeof(EventTrigger::Entry), 24 + sizeof(::UnityEngine::EventSystems::EventTrigger::TriggerEvent*)> __UnityEngine_EventSystems_EventTrigger_EntrySizeCheck;
  static_assert(sizeof(EventTrigger::Entry) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::Entry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
