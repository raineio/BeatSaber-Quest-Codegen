// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ColorSchemeDropdown
#include "GlobalNamespace/ColorSchemeDropdown.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: ColorSchemeView
#include "GlobalNamespace/ColorSchemeView.hpp"
// Including type: ColorSchemeTableCell
#include "GlobalNamespace/ColorSchemeTableCell.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: ColorScheme
#include "GlobalNamespace/ColorScheme.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ColorSchemeDropdown.LazyInit
void GlobalNamespace::ColorSchemeDropdown::LazyInit() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("LazyInit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "LazyInit", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ColorSchemeDropdown.SetData
void GlobalNamespace::ColorSchemeDropdown::SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::ColorScheme*>* colorSchemes) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("SetData");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetData", {}, ::il2cpp_utils::ExtractTypes(colorSchemes)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, colorSchemes);
}
// Autogenerated method: ColorSchemeDropdown.HandleDidSelectCellWithIdx
void GlobalNamespace::ColorSchemeDropdown::HandleDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("HandleDidSelectCellWithIdx");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleDidSelectCellWithIdx", {}, ::il2cpp_utils::ExtractTypes(dropdownWithTableView, idx)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, dropdownWithTableView, idx);
}
// Autogenerated method: ColorSchemeDropdown.RefreshUI
void GlobalNamespace::ColorSchemeDropdown::RefreshUI(GlobalNamespace::ColorScheme* colorScheme) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("RefreshUI");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "RefreshUI", {}, ::il2cpp_utils::ExtractTypes(colorScheme)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, colorScheme);
}
// Autogenerated method: ColorSchemeDropdown.OnDestroy
void GlobalNamespace::ColorSchemeDropdown::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: ColorSchemeDropdown.Init
void GlobalNamespace::ColorSchemeDropdown::Init(HMUI::TableView::IDataSource* initTableViewDataSource) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("Init");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Init", {}, ::il2cpp_utils::ExtractTypes(initTableViewDataSource)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, initTableViewDataSource);
}
// Autogenerated method: ColorSchemeDropdown.CellSize
float GlobalNamespace::ColorSchemeDropdown::CellSize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("CellSize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "CellSize", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: ColorSchemeDropdown.NumberOfCells
int GlobalNamespace::ColorSchemeDropdown::NumberOfCells() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("NumberOfCells");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<int>(), "NumberOfCells", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: ColorSchemeDropdown.CellForIdx
HMUI::TableCell* GlobalNamespace::ColorSchemeDropdown::CellForIdx(HMUI::TableView* tableView, int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("CellForIdx");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<HMUI::TableCell*>(), "CellForIdx", {}, ::il2cpp_utils::ExtractTypes(tableView, idx)));
  return ::il2cpp_utils::RunMethodThrow<HMUI::TableCell*, false>(this, ___internal__method, tableView, idx);
}
// Autogenerated method: ColorSchemeDropdown.SelectCellWithIdx
void GlobalNamespace::ColorSchemeDropdown::SelectCellWithIdx(int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext("SelectCellWithIdx");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SelectCellWithIdx", {}, ::il2cpp_utils::ExtractTypes(idx)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, idx);
}
// Autogenerated method: ColorSchemeDropdown..ctor
GlobalNamespace::ColorSchemeDropdown* GlobalNamespace::ColorSchemeDropdown::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ColorSchemeDropdown").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<ColorSchemeDropdown*>());
}