// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LanguageSettingsController
  class LanguageSettingsController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: SelectLanguageViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectLanguageViewController : public HMUI::ViewController {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private LanguageSettingsController _languageSettingsController
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::LanguageSettingsController* languageSettingsController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LanguageSettingsController*) == 0x8);
    // private System.Action didChangeLanguageEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action* didChangeLanguageEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action didPressContinueButtonEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action* didPressContinueButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private LanguageSettingsController _languageSettingsController
    GlobalNamespace::LanguageSettingsController*& dyn__languageSettingsController();
    // Get instance field reference: private System.Action didChangeLanguageEvent
    System::Action*& dyn_didChangeLanguageEvent();
    // Get instance field reference: private System.Action didPressContinueButtonEvent
    System::Action*& dyn_didPressContinueButtonEvent();
    // public System.Void add_didChangeLanguageEvent(System.Action value)
    // Offset: 0x10FFE5C
    void add_didChangeLanguageEvent(System::Action* value);
    // public System.Void remove_didChangeLanguageEvent(System.Action value)
    // Offset: 0x10FFF00
    void remove_didChangeLanguageEvent(System::Action* value);
    // public System.Void add_didPressContinueButtonEvent(System.Action value)
    // Offset: 0x10FFFA4
    void add_didPressContinueButtonEvent(System::Action* value);
    // public System.Void remove_didPressContinueButtonEvent(System.Action value)
    // Offset: 0x1100048
    void remove_didPressContinueButtonEvent(System::Action* value);
    // private System.Void HandleLanguageSettingsControllerOndropDownValueDidChange()
    // Offset: 0x11002B4
    void HandleLanguageSettingsControllerOndropDownValueDidChange();
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0x11002D0
    void $DidActivate$b__8_0();
    // public System.Void .ctor()
    // Offset: 0x11002C8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLanguageViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectLanguageViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLanguageViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11000EC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x11001D4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // SelectLanguageViewController
  #pragma pack(pop)
  static check_size<sizeof(SelectLanguageViewController), 136 + sizeof(System::Action*)> __GlobalNamespace_SelectLanguageViewControllerSizeCheck;
  static_assert(sizeof(SelectLanguageViewController) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLanguageViewController*, "", "SelectLanguageViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::add_didChangeLanguageEvent
// Il2CppName: add_didChangeLanguageEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)(System::Action*)>(&GlobalNamespace::SelectLanguageViewController::add_didChangeLanguageEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "add_didChangeLanguageEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::remove_didChangeLanguageEvent
// Il2CppName: remove_didChangeLanguageEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)(System::Action*)>(&GlobalNamespace::SelectLanguageViewController::remove_didChangeLanguageEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "remove_didChangeLanguageEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::add_didPressContinueButtonEvent
// Il2CppName: add_didPressContinueButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)(System::Action*)>(&GlobalNamespace::SelectLanguageViewController::add_didPressContinueButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "add_didPressContinueButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::remove_didPressContinueButtonEvent
// Il2CppName: remove_didPressContinueButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)(System::Action*)>(&GlobalNamespace::SelectLanguageViewController::remove_didPressContinueButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "remove_didPressContinueButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::HandleLanguageSettingsControllerOndropDownValueDidChange
// Il2CppName: HandleLanguageSettingsControllerOndropDownValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)()>(&GlobalNamespace::SelectLanguageViewController::HandleLanguageSettingsControllerOndropDownValueDidChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "HandleLanguageSettingsControllerOndropDownValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::$DidActivate$b__8_0
// Il2CppName: <DidActivate>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)()>(&GlobalNamespace::SelectLanguageViewController::$DidActivate$b__8_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "<DidActivate>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)(bool, bool, bool)>(&GlobalNamespace::SelectLanguageViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectLanguageViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectLanguageViewController::*)()>(&GlobalNamespace::SelectLanguageViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectLanguageViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
