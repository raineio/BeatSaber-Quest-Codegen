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
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FloorAdjustViewController
  class FloorAdjustViewController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FloorAdjustViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloorAdjustViewController*, "", "FloorAdjustViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: FloorAdjustViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class FloorAdjustViewController : public HMUI::ViewController {
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
    // private Vector3SO _roomCenter
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::Vector3SO* roomCenter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3SO*) == 0x8);
    // [SpaceAttribute] Offset: 0xF45164
    // private UnityEngine.UI.Button _yIncButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* yIncButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _yDecButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* yDecButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _playerHeightText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* playerHeightText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [InjectAttribute] Offset: 0xF451BC
    // private IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Single _playerHeight
    // Size: 0x4
    // Offset: 0x98
    float playerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single kMoveStep
    static constexpr const float kMoveStep = 0.05;
    // Get static field: static private System.Single kMoveStep
    static float _get_kMoveStep();
    // Set static field: static private System.Single kMoveStep
    static void _set_kMoveStep(float value);
    // static field const value: static private System.Single kMinPlayerHeight
    static constexpr const float kMinPlayerHeight = 0.5;
    // Get static field: static private System.Single kMinPlayerHeight
    static float _get_kMinPlayerHeight();
    // Set static field: static private System.Single kMinPlayerHeight
    static void _set_kMinPlayerHeight(float value);
    // static field const value: static private System.Single kMaxPlayerHeight
    static constexpr const float kMaxPlayerHeight = 3;
    // Get static field: static private System.Single kMaxPlayerHeight
    static float _get_kMaxPlayerHeight();
    // Set static field: static private System.Single kMaxPlayerHeight
    static void _set_kMaxPlayerHeight(float value);
    // Get instance field reference: private Vector3SO _roomCenter
    GlobalNamespace::Vector3SO*& dyn__roomCenter();
    // Get instance field reference: private UnityEngine.UI.Button _yIncButton
    UnityEngine::UI::Button*& dyn__yIncButton();
    // Get instance field reference: private UnityEngine.UI.Button _yDecButton
    UnityEngine::UI::Button*& dyn__yDecButton();
    // Get instance field reference: private TMPro.TextMeshProUGUI _playerHeightText
    TMPro::TextMeshProUGUI*& dyn__playerHeightText();
    // Get instance field reference: private IVRPlatformHelper _vrPlatformHelper
    GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private System.Single _playerHeight
    float& dyn__playerHeight();
    // protected System.Void Update()
    // Offset: 0x11E6814
    void Update();
    // private System.Void <DidActivate>b__9_0()
    // Offset: 0x11E6A34
    void $DidActivate$b__9_0();
    // private System.Void <DidActivate>b__9_1()
    // Offset: 0x11E6AAC
    void $DidActivate$b__9_1();
    // public System.Void .ctor()
    // Offset: 0x11E6A2C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorAdjustViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FloorAdjustViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorAdjustViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x11E6718
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // FloorAdjustViewController
  #pragma pack(pop)
  static check_size<sizeof(FloorAdjustViewController), 152 + sizeof(float)> __GlobalNamespace_FloorAdjustViewControllerSizeCheck;
  static_assert(sizeof(FloorAdjustViewController) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FloorAdjustViewController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloorAdjustViewController::*)()>(&GlobalNamespace::FloorAdjustViewController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloorAdjustViewController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloorAdjustViewController::$DidActivate$b__9_0
// Il2CppName: <DidActivate>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloorAdjustViewController::*)()>(&GlobalNamespace::FloorAdjustViewController::$DidActivate$b__9_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloorAdjustViewController*), "<DidActivate>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloorAdjustViewController::$DidActivate$b__9_1
// Il2CppName: <DidActivate>b__9_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloorAdjustViewController::*)()>(&GlobalNamespace::FloorAdjustViewController::$DidActivate$b__9_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloorAdjustViewController*), "<DidActivate>b__9_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FloorAdjustViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FloorAdjustViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloorAdjustViewController::*)(bool, bool, bool)>(&GlobalNamespace::FloorAdjustViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FloorAdjustViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
