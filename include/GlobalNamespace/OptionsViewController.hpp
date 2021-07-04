// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: OptionsViewController
  class OptionsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::OptionsViewController::OptionsButton
    struct OptionsButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OptionsViewController/OptionsButton
    struct OptionsButton/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
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
    }; // OptionsViewController/OptionsButton
    #pragma pack(pop)
    static check_size<sizeof(OptionsViewController::OptionsButton), 0 + sizeof(int)> __GlobalNamespace_OptionsViewController_OptionsButtonSizeCheck;
    static_assert(sizeof(OptionsViewController::OptionsButton) == 0x4);
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
    // [InjectAttribute] Offset: 0xE264E0
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE264F0
    // private System.Action`1<OptionsViewController/OptionsButton> didFinishEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*) == 0x8);
    // Creating value type constructor for type: OptionsViewController
    OptionsViewController(UnityEngine::UI::Button* editAvatarButton_ = {}, UnityEngine::UI::Button* playerOptionsButton_ = {}, UnityEngine::UI::Button* settingsButton_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* didFinishEvent_ = {}) noexcept : editAvatarButton{editAvatarButton_}, playerOptionsButton{playerOptionsButton_}, settingsButton{settingsButton_}, appStaticSettings{appStaticSettings_}, didFinishEvent{didFinishEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`1<OptionsViewController/OptionsButton> value)
    // Offset: 0x11F7108
    void add_didFinishEvent(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<OptionsViewController/OptionsButton> value)
    // Offset: 0x11F71AC
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>* value);
    // private System.Void <DidActivate>b__8_0()
    // Offset: 0x11F73D4
    void $DidActivate$b__8_0();
    // private System.Void <DidActivate>b__8_1()
    // Offset: 0x11F7438
    void $DidActivate$b__8_1();
    // private System.Void <DidActivate>b__8_2()
    // Offset: 0x11F749C
    void $DidActivate$b__8_2();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11F7250
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x11F73CC
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
  }; // OptionsViewController
  #pragma pack(pop)
  static check_size<sizeof(OptionsViewController), 144 + sizeof(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*)> __GlobalNamespace_OptionsViewControllerSizeCheck;
  static_assert(sizeof(OptionsViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OptionsViewController*, "", "OptionsViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OptionsViewController::OptionsButton, "", "OptionsViewController/OptionsButton");
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*)>(&GlobalNamespace::OptionsViewController::add_didFinishEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)(System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*)>(&GlobalNamespace::OptionsViewController::remove_didFinishEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::OptionsViewController::OptionsButton>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::$DidActivate$b__8_0
// Il2CppName: <DidActivate>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)()>(&GlobalNamespace::OptionsViewController::$DidActivate$b__8_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "<DidActivate>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::$DidActivate$b__8_1
// Il2CppName: <DidActivate>b__8_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)()>(&GlobalNamespace::OptionsViewController::$DidActivate$b__8_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "<DidActivate>b__8_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::$DidActivate$b__8_2
// Il2CppName: <DidActivate>b__8_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)()>(&GlobalNamespace::OptionsViewController::$DidActivate$b__8_2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "<DidActivate>b__8_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OptionsViewController::*)(bool, bool, bool)>(&GlobalNamespace::OptionsViewController::DidActivate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OptionsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OptionsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
