// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: TextOnlyTableCell
  class TextOnlyTableCell : public HMUI::TableCell {
    public:
    // private UnityEngine.Color _selectedHighlightColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color selectedHighlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x60
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private HMUI.ImageView _bgImage
    // Size: 0x8
    // Offset: 0x68
    HMUI::ImageView* bgImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private HMUI.ImageView _highlightImage
    // Size: 0x8
    // Offset: 0x70
    HMUI::ImageView* highlightImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // Creating value type constructor for type: TextOnlyTableCell
    TextOnlyTableCell(UnityEngine::Color selectedHighlightColor_ = {}, TMPro::TextMeshProUGUI* text_ = {}, HMUI::ImageView* bgImage_ = {}, HMUI::ImageView* highlightImage_ = {}) noexcept : selectedHighlightColor{selectedHighlightColor_}, text{text_}, bgImage{bgImage_}, highlightImage{highlightImage_} {}
    // public System.String get_text()
    // Offset: 0x11189AC
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x11189C8
    void set_text(::Il2CppString* value);
    // private System.Void RefreshVisuals()
    // Offset: 0x11189E8
    void RefreshVisuals();
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x11189E4
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0x1118AB0
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0x1118AB4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextOnlyTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TextOnlyTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextOnlyTableCell*, creationType>()));
    }
  }; // TextOnlyTableCell
  #pragma pack(pop)
  static check_size<sizeof(TextOnlyTableCell), 112 + sizeof(HMUI::ImageView*)> __GlobalNamespace_TextOnlyTableCellSizeCheck;
  static_assert(sizeof(TextOnlyTableCell) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TextOnlyTableCell*, "", "TextOnlyTableCell");
// Writing MetadataGetter for method: GlobalNamespace::TextOnlyTableCell::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::TextOnlyTableCell::*)()>(&GlobalNamespace::TextOnlyTableCell::get_text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextOnlyTableCell*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextOnlyTableCell::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextOnlyTableCell::*)(::Il2CppString*)>(&GlobalNamespace::TextOnlyTableCell::set_text)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextOnlyTableCell*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextOnlyTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextOnlyTableCell::*)()>(&GlobalNamespace::TextOnlyTableCell::RefreshVisuals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextOnlyTableCell*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextOnlyTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextOnlyTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::TextOnlyTableCell::SelectionDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextOnlyTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::SelectableCell::TransitionType>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextOnlyTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextOnlyTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::TextOnlyTableCell::HighlightDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextOnlyTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<HMUI::SelectableCell::TransitionType>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextOnlyTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
