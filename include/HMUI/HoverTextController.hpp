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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverTextController
  class HoverTextController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::HoverTextController);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverTextController*, "HMUI", "HoverTextController");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x2E
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverTextController
  // [TokenAttribute] Offset: FFFFFFFF
  class HoverTextController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::HoverTextController::$ShowTextCoroutine$d__10
    class $ShowTextCoroutine$d__10;
    // Nested type: HMUI::HoverTextController::$HideTextCoroutine$d__12
    class $HideTextCoroutine$d__12;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private TMPro.TextMeshProUGUI _textMesh
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* textMesh;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private System.Single _fadeInDelay
    // Size: 0x4
    // Offset: 0x20
    float fadeInDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeInSpeed
    // Size: 0x4
    // Offset: 0x24
    float fadeInSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutSpeed
    // Size: 0x4
    // Offset: 0x28
    float fadeOutSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isFadingOut
    // Size: 0x1
    // Offset: 0x2C
    bool isFadingOut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isFadingIn
    // Size: 0x1
    // Offset: 0x2D
    bool isFadingIn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _textMesh
    TMPro::TextMeshProUGUI*& dyn__textMesh();
    // Get instance field reference: private System.Single _fadeInDelay
    float& dyn__fadeInDelay();
    // Get instance field reference: private System.Single _fadeInSpeed
    float& dyn__fadeInSpeed();
    // Get instance field reference: private System.Single _fadeOutSpeed
    float& dyn__fadeOutSpeed();
    // Get instance field reference: private System.Boolean _isFadingOut
    bool& dyn__isFadingOut();
    // Get instance field reference: private System.Boolean _isFadingIn
    bool& dyn__isFadingIn();
    // protected System.Void Awake()
    // Offset: 0x14A56D0
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x14A56F0
    void OnDisable();
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x14A5718
    void OnApplicationFocus(bool hasFocus);
    // public System.Void ShowText(System.String text)
    // Offset: 0x14A5740
    void ShowText(::StringW text);
    // private System.Collections.IEnumerator ShowTextCoroutine()
    // Offset: 0x14A57A8
    System::Collections::IEnumerator* ShowTextCoroutine();
    // public System.Void HideText()
    // Offset: 0x14A5844
    void HideText();
    // private System.Collections.IEnumerator HideTextCoroutine()
    // Offset: 0x14A58C4
    System::Collections::IEnumerator* HideTextCoroutine();
    // public System.Void .ctor()
    // Offset: 0x14A5960
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverTextController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverTextController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverTextController*, creationType>()));
    }
  }; // HMUI.HoverTextController
  #pragma pack(pop)
  static check_size<sizeof(HoverTextController), 45 + sizeof(bool)> __HMUI_HoverTextControllerSizeCheck;
  static_assert(sizeof(HoverTextController) == 0x2E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HoverTextController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)(bool)>(&HMUI::HoverTextController::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* hasFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hasFocus});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::ShowText
// Il2CppName: ShowText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)(::StringW)>(&HMUI::HoverTextController::ShowText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "ShowText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::ShowTextCoroutine
// Il2CppName: ShowTextCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::ShowTextCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "ShowTextCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::HideText
// Il2CppName: HideText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::HideText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "HideText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::HideTextCoroutine
// Il2CppName: HideTextCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::HoverTextController::*)()>(&HMUI::HoverTextController::HideTextCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextController*), "HideTextCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
