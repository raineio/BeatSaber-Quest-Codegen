// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ButtonBinder
  class ButtonBinder : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,UnityEngine.Events.UnityAction>> _bindings
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, UnityEngine::Events::UnityAction*>*>* bindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, UnityEngine::Events::UnityAction*>*>*) == 0x8);
    // Creating value type constructor for type: ButtonBinder
    ButtonBinder(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, UnityEngine::Events::UnityAction*>*>* bindings_ = {}) noexcept : bindings{bindings_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, UnityEngine::Events::UnityAction*>*>*
    constexpr operator System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, UnityEngine::Events::UnityAction*>*>*() const noexcept {
      return bindings;
    }
    // public System.Void .ctor(UnityEngine.UI.Button button, System.Action action)
    // Offset: 0x130B7AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonBinder* New_ctor(UnityEngine::UI::Button* button, System::Action* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ButtonBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonBinder*, creationType>(button, action)));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,System.Action>> bindingData)
    // Offset: 0x130B8A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonBinder* New_ctor(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, System::Action*>*>* bindingData) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ButtonBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonBinder*, creationType>(bindingData)));
    }
    // private System.Void Init()
    // Offset: 0x130B744
    void Init();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,System.Action>> bindingData)
    // Offset: 0x130B8DC
    void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, System::Action*>*>* bindingData);
    // public System.Void AddBinding(UnityEngine.UI.Button button, System.Action action)
    // Offset: 0x130B7F4
    void AddBinding(UnityEngine::UI::Button* button, System::Action* action);
    // public System.Void ClearBindings()
    // Offset: 0x130B9E4
    void ClearBindings();
    // public System.Void .ctor()
    // Offset: 0x130B71C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ButtonBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonBinder*, creationType>()));
    }
  }; // HMUI.ButtonBinder
  #pragma pack(pop)
  static check_size<sizeof(ButtonBinder), 16 + sizeof(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, UnityEngine::Events::UnityAction*>*>*)> __HMUI_ButtonBinderSizeCheck;
  static_assert(sizeof(ButtonBinder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonBinder*, "HMUI", "ButtonBinder");
// Writing MetadataGetter for method: HMUI::ButtonBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ButtonBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ButtonBinder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)()>(&HMUI::ButtonBinder::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonBinder::AddBindings
// Il2CppName: AddBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, System::Action*>*>*)>(&HMUI::ButtonBinder::AddBindings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "AddBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Button*, System::Action*>*>*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonBinder::AddBinding
// Il2CppName: AddBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)(UnityEngine::UI::Button*, System::Action*)>(&HMUI::ButtonBinder::AddBinding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "AddBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::UI::Button*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*>()});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonBinder::ClearBindings
// Il2CppName: ClearBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)()>(&HMUI::ButtonBinder::ClearBindings)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "ClearBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
