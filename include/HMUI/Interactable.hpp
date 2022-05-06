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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: Interactable
  class Interactable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Interactable*, "HMUI", "Interactable");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Interactable
  // [TokenAttribute] Offset: FFFFFFFF
  class Interactable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x18
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: interactable and: interactableChangeEvent
    char __padding0[0x7] = {};
    // private System.Action`2<HMUI.Interactable,System.Boolean> interactableChangeEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_2<::HMUI::Interactable*, bool>* interactableChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::HMUI::Interactable*, bool>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _interactable
    [[deprecated("Use field access instead!")]] bool& dyn__interactable();
    // Get instance field reference: private System.Action`2<HMUI.Interactable,System.Boolean> interactableChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::HMUI::Interactable*, bool>*& dyn_interactableChangeEvent();
    // public System.Boolean get_interactable()
    // Offset: 0x16B9824
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x16B982C
    void set_interactable(bool value);
    // public System.Void add_interactableChangeEvent(System.Action`2<HMUI.Interactable,System.Boolean> value)
    // Offset: 0x16B96DC
    void add_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*, bool>* value);
    // public System.Void remove_interactableChangeEvent(System.Action`2<HMUI.Interactable,System.Boolean> value)
    // Offset: 0x16B9780
    void remove_interactableChangeEvent(::System::Action_2<::HMUI::Interactable*, bool>* value);
    // public System.Void .ctor()
    // Offset: 0x16B98BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interactable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::Interactable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interactable*, creationType>()));
    }
  }; // HMUI.Interactable
  #pragma pack(pop)
  static check_size<sizeof(Interactable), 32 + sizeof(::System::Action_2<::HMUI::Interactable*, bool>*)> __HMUI_InteractableSizeCheck;
  static_assert(sizeof(Interactable) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::Interactable::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::Interactable::*)()>(&HMUI::Interactable::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::Interactable*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::Interactable::set_interactable
// Il2CppName: set_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Interactable::*)(bool)>(&HMUI::Interactable::set_interactable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Interactable*), "set_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Interactable::add_interactableChangeEvent
// Il2CppName: add_interactableChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Interactable::*)(::System::Action_2<::HMUI::Interactable*, bool>*)>(&HMUI::Interactable::add_interactableChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "Interactable"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Interactable*), "add_interactableChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Interactable::remove_interactableChangeEvent
// Il2CppName: remove_interactableChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::Interactable::*)(::System::Action_2<::HMUI::Interactable*, bool>*)>(&HMUI::Interactable::remove_interactableChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "Interactable"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::Interactable*), "remove_interactableChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::Interactable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
