// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ToggleBinder
#include "HMUI/ToggleBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ToggleBinder::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleBinder::$$c__DisplayClass7_0*, "HMUI", "ToggleBinder/<>c__DisplayClass7_0");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ToggleBinder/HMUI.<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ToggleBinder::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean enabled
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: action
    char __padding0[0x7] = {};
    // public System.Action action
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* action;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean enabled
    [[deprecated("Use field access instead!")]] bool& dyn_enabled();
    // Get instance field reference: public System.Action action
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_action();
    // public System.Void .ctor()
    // Offset: 0x2AE2870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleBinder::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ToggleBinder::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleBinder::$$c__DisplayClass7_0*, creationType>()));
    }
    // System.Void <AddBinding>b__0(System.Boolean b)
    // Offset: 0x2AE2878
    void $AddBinding$b__0(bool b);
  }; // HMUI.ToggleBinder/HMUI.<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(ToggleBinder::$$c__DisplayClass7_0), 24 + sizeof(::System::Action*)> __HMUI_ToggleBinder_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(ToggleBinder::$$c__DisplayClass7_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ToggleBinder::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ToggleBinder::$$c__DisplayClass7_0::$AddBinding$b__0
// Il2CppName: <AddBinding>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleBinder::$$c__DisplayClass7_0::*)(bool)>(&HMUI::ToggleBinder::$$c__DisplayClass7_0::$AddBinding$b__0)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ToggleBinder::$$c__DisplayClass7_0*), "<AddBinding>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
