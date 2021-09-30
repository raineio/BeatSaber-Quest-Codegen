// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FillIndicator
  class FillIndicator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: DifficultyTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class DifficultyTableCell : public HMUI::TableCell {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private TMPro.TextMeshProUGUI _difficultyText
    // Size: 0x8
    // Offset: 0x50
    TMPro::TextMeshProUGUI* difficultyText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _highlightImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* highlightImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private FillIndicator _fillIndicator
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::FillIndicator* fillIndicator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FillIndicator*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _difficultyText
    TMPro::TextMeshProUGUI*& dyn__difficultyText();
    // Get instance field reference: private UnityEngine.UI.Image _bgImage
    UnityEngine::UI::Image*& dyn__bgImage();
    // Get instance field reference: private UnityEngine.UI.Image _highlightImage
    UnityEngine::UI::Image*& dyn__highlightImage();
    // Get instance field reference: private FillIndicator _fillIndicator
    GlobalNamespace::FillIndicator*& dyn__fillIndicator();
    // public System.String get_difficultyText()
    // Offset: 0x11A77C4
    ::Il2CppString* get_difficultyText();
    // public System.Void set_difficultyText(System.String value)
    // Offset: 0x11A77A8
    void set_difficultyText(::Il2CppString* value);
    // public System.Void set_difficultyValue(System.Int32 value)
    // Offset: 0x11A77E0
    void set_difficultyValue(int value);
    // public System.Void .ctor()
    // Offset: 0x11A799C
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
    static DifficultyTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DifficultyTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DifficultyTableCell*, creationType>()));
    }
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x11A78C8
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x11A7960
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
  }; // DifficultyTableCell
  #pragma pack(pop)
  static check_size<sizeof(DifficultyTableCell), 104 + sizeof(GlobalNamespace::FillIndicator*)> __GlobalNamespace_DifficultyTableCellSizeCheck;
  static_assert(sizeof(DifficultyTableCell) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyTableCell*, "", "DifficultyTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableCell::get_difficultyText
// Il2CppName: get_difficultyText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::DifficultyTableCell::*)()>(&GlobalNamespace::DifficultyTableCell::get_difficultyText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableCell*), "get_difficultyText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableCell::set_difficultyText
// Il2CppName: set_difficultyText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableCell::*)(::Il2CppString*)>(&GlobalNamespace::DifficultyTableCell::set_difficultyText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableCell*), "set_difficultyText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableCell::set_difficultyValue
// Il2CppName: set_difficultyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableCell::*)(int)>(&GlobalNamespace::DifficultyTableCell::set_difficultyValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableCell*), "set_difficultyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::DifficultyTableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DifficultyTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DifficultyTableCell::*)(HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::DifficultyTableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DifficultyTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
