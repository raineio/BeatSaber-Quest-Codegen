// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SafeAreaRectChecker
  class SafeAreaRectChecker;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningViewController
  class HealthWarningViewController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::HealthWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningViewController*, "", "HealthWarningViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::HealthWarningViewController::$DismissHealthAndSafety$d__14
    class $DismissHealthAndSafety$d__14;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [HeaderAttribute] Offset: 0xF455A0
    // private SafeAreaRectChecker _safeAreaRectChecker
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::SafeAreaRectChecker* safeAreaRectChecker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SafeAreaRectChecker*) == 0x8);
    // [HeaderAttribute] Offset: 0xF455EC
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x80
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: healthAndSafetyTextMesh
    char __padding2[0x4] = {};
    // [HeaderAttribute] Offset: 0xF45638
    // private TMPro.TextMeshProUGUI _healthAndSafetyTextMesh
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* healthAndSafetyTextMesh;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0xF45684
    // private System.String _healthAndSafetyFullLocalizationKey
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* healthAndSafetyFullLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0xF456BC
    // private System.String _healthAndSafetyShortLocalizationKey
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* healthAndSafetyShortLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _showShortHealthAndSafety
    // Size: 0x1
    // Offset: 0xA8
    bool showShortHealthAndSafety;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showShortHealthAndSafety and: dismissCoroutine
    char __padding7[0x7] = {};
    // private UnityEngine.Coroutine _dismissCoroutine
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Coroutine* dismissCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private SafeAreaRectChecker _safeAreaRectChecker
    GlobalNamespace::SafeAreaRectChecker*& dyn__safeAreaRectChecker();
    // Get instance field reference: private System.Single _duration
    float& dyn__duration();
    // Get instance field reference: private TMPro.TextMeshProUGUI _healthAndSafetyTextMesh
    TMPro::TextMeshProUGUI*& dyn__healthAndSafetyTextMesh();
    // Get instance field reference: private System.String _healthAndSafetyFullLocalizationKey
    ::Il2CppString*& dyn__healthAndSafetyFullLocalizationKey();
    // Get instance field reference: private System.String _healthAndSafetyShortLocalizationKey
    ::Il2CppString*& dyn__healthAndSafetyShortLocalizationKey();
    // Get instance field reference: private System.Action didFinishEvent
    System::Action*& dyn_didFinishEvent();
    // Get instance field reference: private System.Boolean _showShortHealthAndSafety
    bool& dyn__showShortHealthAndSafety();
    // Get instance field reference: private UnityEngine.Coroutine _dismissCoroutine
    UnityEngine::Coroutine*& dyn__dismissCoroutine();
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0x119C7FC
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0x119CAD4
    void remove_didFinishEvent(System::Action* value);
    // public System.Void Init(System.Boolean showShortHealthAndSafety)
    // Offset: 0x119D5D0
    void Init(bool showShortHealthAndSafety);
    // private System.Collections.IEnumerator DismissHealthAndSafety()
    // Offset: 0x119D48C
    System::Collections::IEnumerator* DismissHealthAndSafety();
    // private System.Void <DidActivate>b__11_0()
    // Offset: 0x119D610
    void $DidActivate$b__11_0();
    // public System.Void .ctor()
    // Offset: 0x119D608
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HealthWarningViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x119D2F8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x119D4FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
  }; // HealthWarningViewController
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningViewController), 176 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_HealthWarningViewControllerSizeCheck;
  static_assert(sizeof(HealthWarningViewController) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(System::Action*)>(&GlobalNamespace::HealthWarningViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(bool)>(&GlobalNamespace::HealthWarningViewController::Init)> {
  static const MethodInfo* get() {
    static auto* showShortHealthAndSafety = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showShortHealthAndSafety});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::DismissHealthAndSafety
// Il2CppName: DismissHealthAndSafety
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (GlobalNamespace::HealthWarningViewController::*)()>(&GlobalNamespace::HealthWarningViewController::DismissHealthAndSafety)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "DismissHealthAndSafety", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::$DidActivate$b__11_0
// Il2CppName: <DidActivate>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)()>(&GlobalNamespace::HealthWarningViewController::$DidActivate$b__11_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "<DidActivate>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(bool, bool, bool)>(&GlobalNamespace::HealthWarningViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningViewController::*)(bool, bool)>(&GlobalNamespace::HealthWarningViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
