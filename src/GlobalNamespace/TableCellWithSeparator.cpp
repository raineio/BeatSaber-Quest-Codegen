// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: TableCellWithSeparator
#include "GlobalNamespace/TableCellWithSeparator.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: HMUI.ITableCellOwner
#include "HMUI/ITableCellOwner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TableCellWithSeparator.TableViewSetup
void GlobalNamespace::TableCellWithSeparator::TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("TableCellWithSeparator").WithContext("TableViewSetup");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "TableViewSetup", {}, ::il2cpp_utils::ExtractTypes(tableCellOwner, idx)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, tableCellOwner, idx);
}
// Autogenerated method: TableCellWithSeparator..ctor
GlobalNamespace::TableCellWithSeparator* GlobalNamespace::TableCellWithSeparator::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("TableCellWithSeparator").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<TableCellWithSeparator*>());
}