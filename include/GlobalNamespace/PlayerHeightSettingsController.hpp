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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeightSettingsController
  class PlayerHeightSettingsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerHeightSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeightSettingsController*, "", "PlayerHeightSettingsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeightSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerHeightSettingsController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _setButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* setButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private Vector3SO _roomCenter
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::Vector3SO* roomCenter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3SO*) == 0x8);
    // [InjectAttribute] Offset: 0x112980C
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private System.Action`1<System.Single> valueDidChangeEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<float>* valueDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x40
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    // private System.Single _value
    // Size: 0x4
    // Offset: 0x48
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private UnityEngine.UI.Button _setButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__setButton();
    // Get instance field reference: private Vector3SO _roomCenter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3SO*& dyn__roomCenter();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private System.Action`1<System.Single> valueDidChangeEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<float>*& dyn_valueDidChangeEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private System.Single _value
    [[deprecated("Use field access instead!")]] float& dyn__value();
    // public System.Single get_value()
    // Offset: 0x1589344
    float get_value();
    // public System.Void add_valueDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x15891FC
    void add_valueDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void remove_valueDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x15892A0
    void remove_valueDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void .ctor()
    // Offset: 0x15895C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeightSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerHeightSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeightSettingsController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x158934C
    void Awake();
    // public System.Void Init(System.Single playerHeight)
    // Offset: 0x15893FC
    void Init(float playerHeight);
    // private System.Void AutoSetHeight()
    // Offset: 0x15894A0
    void AutoSetHeight();
    // private System.Void RefreshUI()
    // Offset: 0x1589404
    void RefreshUI();
  }; // PlayerHeightSettingsController
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeightSettingsController), 72 + sizeof(float)> __GlobalNamespace_PlayerHeightSettingsControllerSizeCheck;
  static_assert(sizeof(PlayerHeightSettingsController) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::add_valueDidChangeEvent
// Il2CppName: add_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)(::System::Action_1<float>*)>(&GlobalNamespace::PlayerHeightSettingsController::add_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "add_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::remove_valueDidChangeEvent
// Il2CppName: remove_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)(::System::Action_1<float>*)>(&GlobalNamespace::PlayerHeightSettingsController::remove_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "remove_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)(float)>(&GlobalNamespace::PlayerHeightSettingsController::Init)> {
  static const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::AutoSetHeight
// Il2CppName: AutoSetHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::AutoSetHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "AutoSetHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeightSettingsController::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightSettingsController::*)()>(&GlobalNamespace::PlayerHeightSettingsController::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeightSettingsController*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
