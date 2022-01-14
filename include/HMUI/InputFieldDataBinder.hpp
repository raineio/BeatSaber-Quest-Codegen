// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Tuple_4;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: InputField
  class InputField;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IObservableChange
  class IObservableChange;
  // Forward declaring type: IValue`1<T>
  template<typename T>
  class IValue_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldDataBinder
  class InputFieldDataBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::InputFieldDataBinder);
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldDataBinder*, "HMUI", "InputFieldDataBinder");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.InputFieldDataBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class InputFieldDataBinder : public ::Il2CppObject {
    public:
    // Nested type: HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2<T0, T1>
    template<typename T0, typename T1>
    class $$c__DisplayClass2_0_2;
    // Nested type: HMUI::InputFieldDataBinder::$$c__3_1<T>
    template<typename T>
    class $$c__3_1;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.List`1<System.Tuple`4<UnityEngine.UI.InputField,IObservableChange,UnityEngine.Events.UnityAction`1<System.String>,System.Action>> _bindings
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField*, GlobalNamespace::IObservableChange*, UnityEngine::Events::UnityAction_1<::StringW>*, System::Action*>*>* bindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField*, GlobalNamespace::IObservableChange*, UnityEngine::Events::UnityAction_1<::StringW>*, System::Action*>*>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField*, GlobalNamespace::IObservableChange*, UnityEngine::Events::UnityAction_1<::StringW>*, System::Action*>*>*
    constexpr operator System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField*, GlobalNamespace::IObservableChange*, UnityEngine::Events::UnityAction_1<::StringW>*, System::Action*>*>*() const noexcept {
      return bindings;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.Tuple`4<UnityEngine.UI.InputField,IObservableChange,UnityEngine.Events.UnityAction`1<System.String>,System.Action>> _bindings
    System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField*, GlobalNamespace::IObservableChange*, UnityEngine::Events::UnityAction_1<::StringW>*, System::Action*>*>*& dyn__bindings();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`4<UnityEngine.UI.InputField,T0,System.Func`2<System.String,T1>,System.Func`2<T1,System.String>>> bindingData)
    // Offset: 0xFFFFFFFF
    template<class T0, class T1>
    void AddBindings(System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField*, T0, System::Func_2<::StringW, T1>*, System::Func_2<T1, ::StringW>*>*>* bindingData) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T0>, GlobalNamespace::IObservableChange> && std::is_convertible_v<std::remove_pointer_t<T0>, GlobalNamespace::IValue_1<T1>>);
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::AddBindings");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddBindings", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bindingData)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, bindingData);
    }
    // public System.Void AddStringBindings(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.InputField,T>> bindingData)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AddStringBindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::InputField*, T>*>* bindingData) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, GlobalNamespace::IObservableChange> && std::is_convertible_v<std::remove_pointer_t<T>, GlobalNamespace::IValue_1<::StringW>>);
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::AddStringBindings");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddStringBindings", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bindingData)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, bindingData);
    }
    // public System.Void ClearBindings()
    // Offset: 0x14C1BC8
    void ClearBindings();
    // public System.Void .ctor()
    // Offset: 0x14C1B54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldDataBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldDataBinder*, creationType>()));
    }
  }; // HMUI.InputFieldDataBinder
  #pragma pack(pop)
  static check_size<sizeof(InputFieldDataBinder), 16 + sizeof(System::Collections::Generic::List_1<System::Tuple_4<UnityEngine::UI::InputField*, GlobalNamespace::IObservableChange*, UnityEngine::Events::UnityAction_1<::StringW>*, System::Action*>*>*)> __HMUI_InputFieldDataBinderSizeCheck;
  static_assert(sizeof(InputFieldDataBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::InputFieldDataBinder::AddBindings
// Il2CppName: AddBindings
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HMUI::InputFieldDataBinder::AddStringBindings
// Il2CppName: AddStringBindings
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: HMUI::InputFieldDataBinder::ClearBindings
// Il2CppName: ClearBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldDataBinder::*)()>(&HMUI::InputFieldDataBinder::ClearBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::InputFieldDataBinder*), "ClearBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::InputFieldDataBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
