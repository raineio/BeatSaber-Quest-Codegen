// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.NavigationController
#include "HMUI/NavigationController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: FinishAction because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SettingsNavigationController
  class SettingsNavigationController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SettingsNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsNavigationController*, "", "SettingsNavigationController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: SettingsNavigationController
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsNavigationController : public ::HMUI::NavigationController {
    public:
    // Writing base type padding for base size: 0x94 to desired offset: 0x98
    char ___base_padding[0x4] = {};
    // Nested type: ::GlobalNamespace::SettingsNavigationController::FinishAction
    struct FinishAction;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SettingsNavigationController/FinishAction
    // [TokenAttribute] Offset: FFFFFFFF
    struct FinishAction/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FinishAction
      constexpr FinishAction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SettingsNavigationController/FinishAction Ok
      static constexpr const int Ok = 0;
      // Get static field: static public SettingsNavigationController/FinishAction Ok
      static ::GlobalNamespace::SettingsNavigationController::FinishAction _get_Ok();
      // Set static field: static public SettingsNavigationController/FinishAction Ok
      static void _set_Ok(::GlobalNamespace::SettingsNavigationController::FinishAction value);
      // static field const value: static public SettingsNavigationController/FinishAction Cancel
      static constexpr const int Cancel = 1;
      // Get static field: static public SettingsNavigationController/FinishAction Cancel
      static ::GlobalNamespace::SettingsNavigationController::FinishAction _get_Cancel();
      // Set static field: static public SettingsNavigationController/FinishAction Cancel
      static void _set_Cancel(::GlobalNamespace::SettingsNavigationController::FinishAction value);
      // static field const value: static public SettingsNavigationController/FinishAction Apply
      static constexpr const int Apply = 2;
      // Get static field: static public SettingsNavigationController/FinishAction Apply
      static ::GlobalNamespace::SettingsNavigationController::FinishAction _get_Apply();
      // Set static field: static public SettingsNavigationController/FinishAction Apply
      static void _set_Apply(::GlobalNamespace::SettingsNavigationController::FinishAction value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // SettingsNavigationController/FinishAction
    #pragma pack(pop)
    static check_size<sizeof(SettingsNavigationController::FinishAction), 0 + sizeof(int)> __GlobalNamespace_SettingsNavigationController_FinishActionSizeCheck;
    static_assert(sizeof(SettingsNavigationController::FinishAction) == 0x4);
    public:
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _applyButton
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UI::Button* applyButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<SettingsNavigationController/FinishAction> didFinishEvent
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private UnityEngine.UI.Button _applyButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__applyButton();
    // Get instance field reference: private UnityEngine.UI.Button _cancelButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__cancelButton();
    // Get instance field reference: private System.Action`1<SettingsNavigationController/FinishAction> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<SettingsNavigationController/FinishAction> value)
    // Offset: 0x137FBF8
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<SettingsNavigationController/FinishAction> value)
    // Offset: 0x137FD90
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>* value);
    // public System.Void .ctor()
    // Offset: 0x1380264
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsNavigationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SettingsNavigationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsNavigationController*, creationType>()));
    }
    // private System.Void HandleFinishButton(SettingsNavigationController/FinishAction finishAction)
    // Offset: 0x13801F0
    void HandleFinishButton(::GlobalNamespace::SettingsNavigationController::FinishAction finishAction);
    // private System.Void <DidActivate>b__7_0()
    // Offset: 0x138026C
    void $DidActivate$b__7_0();
    // private System.Void <DidActivate>b__7_1()
    // Offset: 0x1380274
    void $DidActivate$b__7_1();
    // private System.Void <DidActivate>b__7_2()
    // Offset: 0x138027C
    void $DidActivate$b__7_2();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13800B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // SettingsNavigationController
  #pragma pack(pop)
  static check_size<sizeof(SettingsNavigationController), 176 + sizeof(::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>*)> __GlobalNamespace_SettingsNavigationControllerSizeCheck;
  static_assert(sizeof(SettingsNavigationController) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsNavigationController::FinishAction, "", "SettingsNavigationController/FinishAction");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsNavigationController::*)(::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>*)>(&GlobalNamespace::SettingsNavigationController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SettingsNavigationController/FinishAction")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsNavigationController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsNavigationController::*)(::System::Action_1<::GlobalNamespace::SettingsNavigationController::FinishAction>*)>(&GlobalNamespace::SettingsNavigationController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "SettingsNavigationController/FinishAction")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsNavigationController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::HandleFinishButton
// Il2CppName: HandleFinishButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsNavigationController::*)(::GlobalNamespace::SettingsNavigationController::FinishAction)>(&GlobalNamespace::SettingsNavigationController::HandleFinishButton)> {
  static const MethodInfo* get() {
    static auto* finishAction = &::il2cpp_utils::GetClassFromName("", "SettingsNavigationController/FinishAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsNavigationController*), "HandleFinishButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finishAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::$DidActivate$b__7_0
// Il2CppName: <DidActivate>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsNavigationController::*)()>(&GlobalNamespace::SettingsNavigationController::$DidActivate$b__7_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsNavigationController*), "<DidActivate>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::$DidActivate$b__7_1
// Il2CppName: <DidActivate>b__7_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsNavigationController::*)()>(&GlobalNamespace::SettingsNavigationController::$DidActivate$b__7_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsNavigationController*), "<DidActivate>b__7_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::$DidActivate$b__7_2
// Il2CppName: <DidActivate>b__7_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsNavigationController::*)()>(&GlobalNamespace::SettingsNavigationController::$DidActivate$b__7_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsNavigationController*), "<DidActivate>b__7_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SettingsNavigationController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SettingsNavigationController::*)(bool, bool, bool)>(&GlobalNamespace::SettingsNavigationController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SettingsNavigationController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
