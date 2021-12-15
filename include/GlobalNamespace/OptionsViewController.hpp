// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
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
  // Forward declaring type: OptionsViewController
  class OptionsViewController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OptionsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OptionsViewController*, "", "OptionsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: OptionsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class OptionsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::OptionsViewController::OptionsButton
    struct OptionsButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OptionsViewController/OptionsButton
    // [TokenAttribute] Offset: FFFFFFFF
    struct OptionsButton/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      #ifdef CODEGEN_FIELD_ACCESSIBILITY
      CODEGEN_FIELD_ACCESSIBILITY:
      #else
      protected:
      #endif
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: OptionsButton
      constexpr OptionsButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OptionsViewController/OptionsButton EditAvatar
      static constexpr const int EditAvatar = 0;
      // Get static field: static public OptionsViewController/OptionsButton EditAvatar
      static GlobalNamespace::OptionsViewController::OptionsButton _get_EditAvatar();
      // Set static field: static public OptionsViewController/OptionsButton EditAvatar
      static void _set_EditAvatar(GlobalNamespace::OptionsViewController::OptionsButton value);
      // static field const value: static public OptionsViewController/OptionsButton PlayerOptions
      static constexpr const int PlayerOptions = 1;
      // Get static field: static public OptionsViewController/OptionsButton PlayerOptions
      static GlobalNamespace::OptionsViewController::OptionsButton _get_PlayerOptions();
      // Set static field: static public OptionsViewController/OptionsButton PlayerOptions
      static void _set_PlayerOptions(GlobalNamespace::OptionsViewController::OptionsButton value);
      // static field const value: static public OptionsViewController/OptionsButton Settings
      static constexpr const int Settings = 2;
      // Get static field: static public OptionsViewController/OptionsButton Settings
      static GlobalNamespace::OptionsViewController::OptionsButton _get_Settings();
      // Set static field: static public OptionsViewController/OptionsButton Settings
      static void _set_Settings(GlobalNamespace::OptionsViewController::OptionsButton value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OptionsViewController/OptionsButton
    #pragma pack(pop)
    static check_size<sizeof(OptionsViewController::OptionsButton), 0 + sizeof(int)> __GlobalNamespace_OptionsViewController_OptionsButtonSizeCheck;
    static_assert(sizeof(OptionsViewController::OptionsButton) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _editAvatarButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* editAvatarButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _playerOptionsButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* playerOptionsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _settingsButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* settingsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0xF46FD4
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // private System.Action`1<OptionsViewController/OptionsButton> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _editAvatarButton
    UnityEngine::UI::Button*& dyn__editAvatarButton();
    // Get instance field reference: private UnityEngine.UI.Button _playerOptionsButton
    UnityEngine::UI::Button*& dyn__playerOptionsButton();
    // Get instance field reference: private UnityEngine.UI.Button _settingsButton
    UnityEngine::UI::Button*& dyn__settingsButton();
    // Get instance field reference: private readonly AppStaticSettingsSO _appStaticSettings
    GlobalNamespace::AppStaticSettingsSO*& dyn__appStaticSettings();
    // Get instance field reference: private System.Action`1<OptionsViewController/OptionsButton> didFinishEvent
    System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<OptionsViewController/OptionsButton> value)
    // Offset: 0x1145AB4
    void add_didFinishEvent(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<OptionsViewController/OptionsButton> value)
    // Offset: 0x1145B58
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* value);
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0x1145D80
    void $DidActivate$b__8_0();
    // private System.Void <DidActivate>b__8_1()
    // Offset: 0x1145DE4
    void $DidActivate$b__8_1();
    // private System.Void <DidActivate>b__8_2()
    // Offset: 0x1145E48
    void $DidActivate$b__8_2();
    // public System.Void .ctor()
    // Offset: 0x1145D78
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OptionsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OptionsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OptionsViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1145BFC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // OptionsViewController
  #pragma pack(pop)
  static check_size<sizeof(OptionsViewController), 144 + sizeof(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*)> __GlobalNamespace_OptionsViewControllerSizeCheck;
  static_assert(sizeof(OptionsViewController) == 0x98);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OptionsViewController::OptionsButton, "", "OptionsViewController/OptionsButton");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*)>(&GlobalNamespace::OptionsViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OptionsViewController/OptionsButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*)>(&GlobalNamespace::OptionsViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OptionsViewController/OptionsButton")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::$DidActivate$b__8_0
// Il2CppName: <DidActivate>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)()>(&GlobalNamespace::OptionsViewController::$DidActivate$b__8_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "<DidActivate>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::$DidActivate$b__8_1
// Il2CppName: <DidActivate>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)()>(&GlobalNamespace::OptionsViewController::$DidActivate$b__8_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "<DidActivate>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::$DidActivate$b__8_2
// Il2CppName: <DidActivate>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)()>(&GlobalNamespace::OptionsViewController::$DidActivate$b__8_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "<DidActivate>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)(bool, bool, bool)>(&GlobalNamespace::OptionsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
