// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: PackLevelListHeaderTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class PackLevelListHeaderTableCell : public HMUI::TableCell {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private UnityEngine.Color _selectedHighlightElementsColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color selectedHighlightElementsColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x60
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _highlightImage
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Image* highlightImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _arrowImage
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Image* arrowImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x80
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Color _selectedHighlightElementsColor
    UnityEngine::Color& dyn__selectedHighlightElementsColor();
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private UnityEngine.UI.Image _bgImage
    UnityEngine::UI::Image*& dyn__bgImage();
    // Get instance field reference: private UnityEngine.UI.Image _highlightImage
    UnityEngine::UI::Image*& dyn__highlightImage();
    // Get instance field reference: private UnityEngine.UI.Image _arrowImage
    UnityEngine::UI::Image*& dyn__arrowImage();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // public System.String get_text()
    // Offset: 0x11256C8
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x11256AC
    void set_text(::Il2CppString* value);
    // private System.Void RefreshVisuals()
    // Offset: 0x11256E8
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x112577C
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
    static PackLevelListHeaderTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PackLevelListHeaderTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PackLevelListHeaderTableCell*, creationType>()));
    }
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x11256E4
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x1125778
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
  }; // PackLevelListHeaderTableCell
  #pragma pack(pop)
  static check_size<sizeof(PackLevelListHeaderTableCell), 128 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_PackLevelListHeaderTableCellSizeCheck;
  static_assert(sizeof(PackLevelListHeaderTableCell) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PackLevelListHeaderTableCell*, "", "PackLevelListHeaderTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PackLevelListHeaderTableCell::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&GlobalNamespace::PackLevelListHeaderTableCell::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PackLevelListHeaderTableCell*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PackLevelListHeaderTableCell::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PackLevelListHeaderTableCell::*)(::Il2CppString*)>(&GlobalNamespace::PackLevelListHeaderTableCell::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PackLevelListHeaderTableCell*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PackLevelListHeaderTableCell::*)()>(&GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PackLevelListHeaderTableCell*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PackLevelListHeaderTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PackLevelListHeaderTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PackLevelListHeaderTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PackLevelListHeaderTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PackLevelListHeaderTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
