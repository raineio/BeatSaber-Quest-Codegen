// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SimpleTextWithIconTableCell
  class SimpleTextWithIconTableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SimpleTextWithIconTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextWithIconTableCell*, "", "SimpleTextWithIconTableCell");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: SimpleTextWithIconTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleTextWithIconTableCell : public ::HMUI::TableCell {
    public:
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x58
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _icon
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::UI::Image* icon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private UnityEngine.UI.Image _icon
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__icon();
    // public UnityEngine.UI.Image get_icon()
    // Offset: 0x2A32C8C
    ::UnityEngine::UI::Image* get_icon();
    // public System.Void set_icon(UnityEngine.UI.Image value)
    // Offset: 0x2A32C84
    void set_icon(::UnityEngine::UI::Image* value);
    // public System.String get_text()
    // Offset: 0x2A32CB0
    ::StringW get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x2A32C94
    void set_text(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x2A32CCC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleTextWithIconTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SimpleTextWithIconTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleTextWithIconTableCell*, creationType>()));
    }
  }; // SimpleTextWithIconTableCell
  #pragma pack(pop)
  static check_size<sizeof(SimpleTextWithIconTableCell), 96 + sizeof(::UnityEngine::UI::Image*)> __GlobalNamespace_SimpleTextWithIconTableCellSizeCheck;
  static_assert(sizeof(SimpleTextWithIconTableCell) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextWithIconTableCell::get_icon
// Il2CppName: get_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Image* (GlobalNamespace::SimpleTextWithIconTableCell::*)()>(&GlobalNamespace::SimpleTextWithIconTableCell::get_icon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTextWithIconTableCell*), "get_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextWithIconTableCell::set_icon
// Il2CppName: set_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleTextWithIconTableCell::*)(::UnityEngine::UI::Image*)>(&GlobalNamespace::SimpleTextWithIconTableCell::set_icon)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Image")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTextWithIconTableCell*), "set_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextWithIconTableCell::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SimpleTextWithIconTableCell::*)()>(&GlobalNamespace::SimpleTextWithIconTableCell::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTextWithIconTableCell*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextWithIconTableCell::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleTextWithIconTableCell::*)(::StringW)>(&GlobalNamespace::SimpleTextWithIconTableCell::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleTextWithIconTableCell*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleTextWithIconTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
