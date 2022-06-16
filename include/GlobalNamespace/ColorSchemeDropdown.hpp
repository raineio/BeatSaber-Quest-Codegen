// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.DropdownWithTableView
#include "HMUI/DropdownWithTableView.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeView
  class ColorSchemeView;
  // Forward declaring type: ColorSchemeTableCell
  class ColorSchemeTableCell;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
  // Skipping declaration: TableView because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeDropdown
  class ColorSchemeDropdown;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorSchemeDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeDropdown*, "", "ColorSchemeDropdown");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeDropdown
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSchemeDropdown : public ::HMUI::DropdownWithTableView/*, public ::HMUI::TableView::IDataSource*/ {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x48
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private ColorSchemeView _colorSchemeView
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ColorSchemeView* colorSchemeView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemeView*) == 0x8);
    // private ColorSchemeTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::ColorSchemeTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemeTableCell*) == 0x8);
    // private System.String _cellReuseIdentifier
    // Size: 0x8
    // Offset: 0x60
    ::StringW cellReuseIdentifier;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _cellSize
    // Size: 0x4
    // Offset: 0x68
    float cellSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellSize and: colorSchemes
    char __padding4[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<ColorScheme> _colorSchemes
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* colorSchemes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x78
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::HMUI::TableView::IDataSource
    operator ::HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Creating interface conversion operator: i_IDataSource
    inline ::HMUI::TableView::IDataSource* i_IDataSource() noexcept {
      return reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private ColorSchemeView _colorSchemeView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSchemeView*& dyn__colorSchemeView();
    // Get instance field reference: private ColorSchemeTableCell _cellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSchemeTableCell*& dyn__cellPrefab();
    // Get instance field reference: private System.String _cellReuseIdentifier
    [[deprecated("Use field access instead!")]] ::StringW& dyn__cellReuseIdentifier();
    // Get instance field reference: private System.Single _cellSize
    [[deprecated("Use field access instead!")]] float& dyn__cellSize();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<ColorScheme> _colorSchemes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*& dyn__colorSchemes();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // public System.Void .ctor()
    // Offset: 0x13433EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorSchemeDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeDropdown*, creationType>()));
    }
    // private System.Void LazyInit()
    // Offset: 0x134290C
    void LazyInit();
    // public System.Void Init(HMUI.TableView/HMUI.IDataSource initTableViewDataSource)
    // Offset: 0x1342A44
    void Init(::HMUI::TableView::IDataSource* initTableViewDataSource);
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<ColorScheme> colorSchemes)
    // Offset: 0x1342AA4
    void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* colorSchemes);
    // public System.Single CellSize()
    // Offset: 0x1342CDC
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x1342CE4
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x1342DA0
    ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int idx);
    // private System.Void HandleDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1343158
    void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Void RefreshUI(ColorScheme colorScheme)
    // Offset: 0x1342C10
    void RefreshUI(::GlobalNamespace::ColorScheme* colorScheme);
    // protected override System.Void OnDestroy()
    // Offset: 0x13429B8
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::OnDestroy()
    void OnDestroy();
    // public override System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x134307C
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::SelectCellWithIdx(System.Int32 idx)
    void SelectCellWithIdx(int idx);
  }; // ColorSchemeDropdown
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeDropdown), 120 + sizeof(bool)> __GlobalNamespace_ColorSchemeDropdownSizeCheck;
  static_assert(sizeof(ColorSchemeDropdown) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::LazyInit
// Il2CppName: LazyInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeDropdown::*)()>(&GlobalNamespace::ColorSchemeDropdown::LazyInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "LazyInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeDropdown::*)(::HMUI::TableView::IDataSource*)>(&GlobalNamespace::ColorSchemeDropdown::Init)> {
  static const MethodInfo* get() {
    static auto* initTableViewDataSource = &::il2cpp_utils::GetClassFromName("HMUI", "TableView/IDataSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initTableViewDataSource});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeDropdown::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*)>(&GlobalNamespace::ColorSchemeDropdown::SetData)> {
  static const MethodInfo* get() {
    static auto* colorSchemes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorScheme")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorSchemes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ColorSchemeDropdown::*)()>(&GlobalNamespace::ColorSchemeDropdown::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ColorSchemeDropdown::*)()>(&GlobalNamespace::ColorSchemeDropdown::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (GlobalNamespace::ColorSchemeDropdown::*)(::HMUI::TableView*, int)>(&GlobalNamespace::ColorSchemeDropdown::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::HandleDidSelectCellWithIdx
// Il2CppName: HandleDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeDropdown::*)(::HMUI::DropdownWithTableView*, int)>(&GlobalNamespace::ColorSchemeDropdown::HandleDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* dropdownWithTableView = &::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "HandleDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dropdownWithTableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeDropdown::*)(::GlobalNamespace::ColorScheme*)>(&GlobalNamespace::ColorSchemeDropdown::RefreshUI)> {
  static const MethodInfo* get() {
    static auto* colorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorScheme});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeDropdown::*)()>(&GlobalNamespace::ColorSchemeDropdown::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeDropdown::SelectCellWithIdx
// Il2CppName: SelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeDropdown::*)(int)>(&GlobalNamespace::ColorSchemeDropdown::SelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeDropdown*), "SelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
