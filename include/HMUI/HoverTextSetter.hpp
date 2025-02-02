// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverTextController
  class HoverTextController;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverTextSetter
  class HoverTextSetter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::HoverTextSetter);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverTextSetter*, "HMUI", "HoverTextSetter");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverTextSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class HoverTextSetter : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    public:
    // private HMUI.HoverTextController _hoverTextController
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::HoverTextController* hoverTextController;
    // Field size check
    static_assert(sizeof(::HMUI::HoverTextController*) == 0x8);
    // private System.String _text
    // Size: 0x8
    // Offset: 0x20
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerEnterHandler
    inline ::UnityEngine::EventSystems::IPointerEnterHandler* i_IPointerEnterHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerExitHandler
    inline ::UnityEngine::EventSystems::IPointerExitHandler* i_IPointerExitHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.HoverTextController _hoverTextController
    [[deprecated("Use field access instead!")]] ::HMUI::HoverTextController*& dyn__hoverTextController();
    // Get instance field reference: private System.String _text
    [[deprecated("Use field access instead!")]] ::StringW& dyn__text();
    // public System.String get_text()
    // Offset: 0x176CFD8
    ::StringW get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x176CFE0
    void set_text(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x176D038
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverTextSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::HoverTextSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverTextSetter*, creationType>()));
    }
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x176CFE8
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x176D008
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.Void OnDisable()
    // Offset: 0x176D020
    void OnDisable();
  }; // HMUI.HoverTextSetter
  #pragma pack(pop)
  static check_size<sizeof(HoverTextSetter), 32 + sizeof(::StringW)> __HMUI_HoverTextSetterSizeCheck;
  static_assert(sizeof(HoverTextSetter) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::HoverTextSetter::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::HoverTextSetter::*)()>(&HMUI::HoverTextSetter::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextSetter*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextSetter::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextSetter::*)(::StringW)>(&HMUI::HoverTextSetter::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextSetter*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::HoverTextSetter::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextSetter::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::HoverTextSetter::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextSetter*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextSetter::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextSetter::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::HoverTextSetter::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextSetter*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::HoverTextSetter::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HoverTextSetter::*)()>(&HMUI::HoverTextSetter::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::HoverTextSetter*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
