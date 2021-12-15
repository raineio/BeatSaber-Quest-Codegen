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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalizedTextAsset
  class LocalizedTextAsset;
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
  // Forward declaring type: PrivacyPolicyViewController
  class PrivacyPolicyViewController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PrivacyPolicyViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrivacyPolicyViewController*, "", "PrivacyPolicyViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: PrivacyPolicyViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class PrivacyPolicyViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::PrivacyPolicyViewController::ButtonType
    struct ButtonType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: PrivacyPolicyViewController/ButtonType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonType/*, public System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ButtonType
      constexpr ButtonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PrivacyPolicyViewController/ButtonType Ok
      static constexpr const int Ok = 0;
      // Get static field: static public PrivacyPolicyViewController/ButtonType Ok
      static GlobalNamespace::PrivacyPolicyViewController::ButtonType _get_Ok();
      // Set static field: static public PrivacyPolicyViewController/ButtonType Ok
      static void _set_Ok(GlobalNamespace::PrivacyPolicyViewController::ButtonType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // PrivacyPolicyViewController/ButtonType
    #pragma pack(pop)
    static check_size<sizeof(PrivacyPolicyViewController::ButtonType), 0 + sizeof(int)> __GlobalNamespace_PrivacyPolicyViewController_ButtonTypeSizeCheck;
    static_assert(sizeof(PrivacyPolicyViewController::ButtonType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0xF472C8
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [HeaderAttribute] Offset: 0xF47314
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x78
    HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(HMUI::TextPageScrollView*) == 0x8);
    // private LocalizedTextAsset _privacyPolicyLocalizedTextAsset
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::LocalizedTextAsset* privacyPolicyLocalizedTextAsset;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalizedTextAsset*) == 0x8);
    // private System.Action`1<PrivacyPolicyViewController/ButtonType> didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private HMUI.TextPageScrollView _textPageScrollView
    HMUI::TextPageScrollView*& dyn__textPageScrollView();
    // Get instance field reference: private LocalizedTextAsset _privacyPolicyLocalizedTextAsset
    GlobalNamespace::LocalizedTextAsset*& dyn__privacyPolicyLocalizedTextAsset();
    // Get instance field reference: private System.Action`1<PrivacyPolicyViewController/ButtonType> didFinishEvent
    System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<PrivacyPolicyViewController/ButtonType> value)
    // Offset: 0x11B16F4
    void add_didFinishEvent(System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<PrivacyPolicyViewController/ButtonType> value)
    // Offset: 0x11B1798
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>* value);
    // private System.Void <DidActivate>b__7_0()
    // Offset: 0x11B1918
    void $DidActivate$b__7_0();
    // public System.Void .ctor()
    // Offset: 0x11B1910
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrivacyPolicyViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PrivacyPolicyViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrivacyPolicyViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11B183C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // PrivacyPolicyViewController
  #pragma pack(pop)
  static check_size<sizeof(PrivacyPolicyViewController), 136 + sizeof(System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>*)> __GlobalNamespace_PrivacyPolicyViewControllerSizeCheck;
  static_assert(sizeof(PrivacyPolicyViewController) == 0x90);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrivacyPolicyViewController::ButtonType, "", "PrivacyPolicyViewController/ButtonType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PrivacyPolicyViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrivacyPolicyViewController::*)(System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>*)>(&GlobalNamespace::PrivacyPolicyViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PrivacyPolicyViewController/ButtonType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrivacyPolicyViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrivacyPolicyViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrivacyPolicyViewController::*)(System::Action_1<GlobalNamespace::PrivacyPolicyViewController::ButtonType>*)>(&GlobalNamespace::PrivacyPolicyViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "PrivacyPolicyViewController/ButtonType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrivacyPolicyViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrivacyPolicyViewController::$DidActivate$b__7_0
// Il2CppName: <DidActivate>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrivacyPolicyViewController::*)()>(&GlobalNamespace::PrivacyPolicyViewController::$DidActivate$b__7_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrivacyPolicyViewController*), "<DidActivate>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrivacyPolicyViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PrivacyPolicyViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrivacyPolicyViewController::*)(bool, bool, bool)>(&GlobalNamespace::PrivacyPolicyViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrivacyPolicyViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
