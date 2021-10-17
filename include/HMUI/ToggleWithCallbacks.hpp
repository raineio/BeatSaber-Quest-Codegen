// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Toggle
#include "UnityEngine/UI/Toggle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: SelectionState because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleWithCallbacks
  class ToggleWithCallbacks;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::ToggleWithCallbacks);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ToggleWithCallbacks*, "HMUI", "ToggleWithCallbacks");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ToggleWithCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  class ToggleWithCallbacks : public UnityEngine::UI::Toggle {
    public:
    // Writing base type padding for base size: 0x119 to desired offset: 0x120
    char ___base_padding[0x7] = {};
    // Nested type: HMUI::ToggleWithCallbacks::SelectionState
    struct SelectionState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.ToggleWithCallbacks/HMUI.SelectionState
    // [TokenAttribute] Offset: FFFFFFFF
    struct SelectionState/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SelectionState
      constexpr SelectionState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Normal
      static constexpr const int Normal = 0;
      // Get static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Normal
      static HMUI::ToggleWithCallbacks::SelectionState _get_Normal();
      // Set static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Normal
      static void _set_Normal(HMUI::ToggleWithCallbacks::SelectionState value);
      // static field const value: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Highlighted
      static constexpr const int Highlighted = 1;
      // Get static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Highlighted
      static HMUI::ToggleWithCallbacks::SelectionState _get_Highlighted();
      // Set static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Highlighted
      static void _set_Highlighted(HMUI::ToggleWithCallbacks::SelectionState value);
      // static field const value: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Pressed
      static constexpr const int Pressed = 2;
      // Get static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Pressed
      static HMUI::ToggleWithCallbacks::SelectionState _get_Pressed();
      // Set static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Pressed
      static void _set_Pressed(HMUI::ToggleWithCallbacks::SelectionState value);
      // static field const value: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Selected
      static constexpr const int Selected = 3;
      // Get static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Selected
      static HMUI::ToggleWithCallbacks::SelectionState _get_Selected();
      // Set static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Selected
      static void _set_Selected(HMUI::ToggleWithCallbacks::SelectionState value);
      // static field const value: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Disabled
      static constexpr const int Disabled = 4;
      // Get static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Disabled
      static HMUI::ToggleWithCallbacks::SelectionState _get_Disabled();
      // Set static field: static public HMUI.ToggleWithCallbacks/HMUI.SelectionState Disabled
      static void _set_Disabled(HMUI::ToggleWithCallbacks::SelectionState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HMUI.ToggleWithCallbacks/HMUI.SelectionState
    #pragma pack(pop)
    static check_size<sizeof(ToggleWithCallbacks::SelectionState), 0 + sizeof(int)> __HMUI_ToggleWithCallbacks_SelectionStateSizeCheck;
    static_assert(sizeof(ToggleWithCallbacks::SelectionState) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Action`1<HMUI.ToggleWithCallbacks/HMUI.SelectionState> stateDidChangeEvent
    // Size: 0x8
    // Offset: 0x120
    System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>* stateDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>*) == 0x8);
    public:
    // Get instance field reference: private System.Action`1<HMUI.ToggleWithCallbacks/HMUI.SelectionState> stateDidChangeEvent
    System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>*& dyn_stateDidChangeEvent();
    // public HMUI.ToggleWithCallbacks/HMUI.SelectionState get_selectionState()
    // Offset: 0x1401888
    HMUI::ToggleWithCallbacks::SelectionState get_selectionState();
    // public System.Void add_stateDidChangeEvent(System.Action`1<HMUI.ToggleWithCallbacks/HMUI.SelectionState> value)
    // Offset: 0x1401520
    void add_stateDidChangeEvent(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>* value);
    // public System.Void remove_stateDidChangeEvent(System.Action`1<HMUI.ToggleWithCallbacks/HMUI.SelectionState> value)
    // Offset: 0x14017D8
    void remove_stateDidChangeEvent(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>* value);
    // public System.Void .ctor()
    // Offset: 0x1405BA0
    // Implemented from: UnityEngine.UI.Toggle
    // Base method: System.Void Toggle::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleWithCallbacks* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ToggleWithCallbacks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleWithCallbacks*, creationType>()));
    }
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    // Offset: 0x1405B14
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/UnityEngine.UI.SelectionState state, System.Boolean instant)
    void DoStateTransition(UnityEngine::UI::Selectable::SelectionState state, bool instant);
  }; // HMUI.ToggleWithCallbacks
  #pragma pack(pop)
  static check_size<sizeof(ToggleWithCallbacks), 288 + sizeof(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>*)> __HMUI_ToggleWithCallbacksSizeCheck;
  static_assert(sizeof(ToggleWithCallbacks) == 0x128);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ToggleWithCallbacks::SelectionState, "HMUI", "ToggleWithCallbacks/SelectionState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ToggleWithCallbacks::get_selectionState
// Il2CppName: get_selectionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::ToggleWithCallbacks::SelectionState (HMUI::ToggleWithCallbacks::*)()>(&HMUI::ToggleWithCallbacks::get_selectionState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleWithCallbacks*), "get_selectionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleWithCallbacks::add_stateDidChangeEvent
// Il2CppName: add_stateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleWithCallbacks::*)(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>*)>(&HMUI::ToggleWithCallbacks::add_stateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ToggleWithCallbacks/SelectionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleWithCallbacks*), "add_stateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent
// Il2CppName: remove_stateDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleWithCallbacks::*)(System::Action_1<HMUI::ToggleWithCallbacks::SelectionState>*)>(&HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ToggleWithCallbacks/SelectionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleWithCallbacks*), "remove_stateDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ToggleWithCallbacks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ToggleWithCallbacks::DoStateTransition
// Il2CppName: DoStateTransition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleWithCallbacks::*)(UnityEngine::UI::Selectable::SelectionState, bool)>(&HMUI::ToggleWithCallbacks::DoStateTransition)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable/SelectionState")->byval_arg;
    static auto* instant = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleWithCallbacks*), "DoStateTransition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, instant});
  }
};
