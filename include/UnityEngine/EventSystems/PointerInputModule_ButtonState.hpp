// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/ButtonState
  class PointerInputModule::ButtonState : public ::Il2CppObject {
    public:
    // private UnityEngine.EventSystems.PointerEventData/InputButton m_Button
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::EventSystems::PointerEventData::InputButton m_Button;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerEventData::InputButton) == 0x4);
    // Padding between fields: m_Button and: m_EventData
    char __padding0[0x4] = {};
    // private UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData m_EventData
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* m_EventData;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*) == 0x8);
    // Creating value type constructor for type: ButtonState
    ButtonState(UnityEngine::EventSystems::PointerEventData::InputButton m_Button_ = {}, UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* m_EventData_ = {}) noexcept : m_Button{m_Button_}, m_EventData{m_EventData_} {}
    // public UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData get_eventData()
    // Offset: 0x14349E8
    UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* get_eventData();
    // public System.Void set_eventData(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData value)
    // Offset: 0x14349F0
    void set_eventData(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* value);
    // public UnityEngine.EventSystems.PointerEventData/InputButton get_button()
    // Offset: 0x14349F8
    UnityEngine::EventSystems::PointerEventData::InputButton get_button();
    // public System.Void set_button(UnityEngine.EventSystems.PointerEventData/InputButton value)
    // Offset: 0x1434A00
    void set_button(UnityEngine::EventSystems::PointerEventData::InputButton value);
    // public System.Void .ctor()
    // Offset: 0x1434A08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerInputModule::ButtonState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::PointerInputModule::ButtonState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerInputModule::ButtonState*, creationType>()));
    }
  }; // UnityEngine.EventSystems.PointerInputModule/ButtonState
  #pragma pack(pop)
  static check_size<sizeof(PointerInputModule::ButtonState), 24 + sizeof(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*)> __UnityEngine_EventSystems_PointerInputModule_ButtonStateSizeCheck;
  static_assert(sizeof(PointerInputModule::ButtonState) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule::ButtonState*, "UnityEngine.EventSystems", "PointerInputModule/ButtonState");
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::get_eventData
// Il2CppName: get_eventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)()>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::get_eventData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "get_eventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::set_eventData
// Il2CppName: set_eventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)(UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*)>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::set_eventData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "set_eventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerEventData::InputButton (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)()>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::get_button)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::set_button
// Il2CppName: set_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)(UnityEngine::EventSystems::PointerEventData::InputButton)>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::set_button)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "set_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::EventSystems::PointerEventData::InputButton>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
