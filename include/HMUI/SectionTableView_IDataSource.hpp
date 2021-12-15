// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.SectionTableView
#include "HMUI/SectionTableView.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: IDataSource
  class IDataSource;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::SectionTableView::IDataSource);
DEFINE_IL2CPP_ARG_TYPE(HMUI::SectionTableView::IDataSource*, "HMUI", "SectionTableView/IDataSource");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SectionTableView/HMUI.IDataSource
  // [TokenAttribute] Offset: FFFFFFFF
  class SectionTableView::IDataSource {
    public:
    // public System.Single RowHeight()
    // Offset: 0xFFFFFFFF
    float RowHeight();
    // public System.Int32 NumberOfSections()
    // Offset: 0xFFFFFFFF
    int NumberOfSections();
    // public System.Int32 NumberOfRowsInSection(System.Int32 section)
    // Offset: 0xFFFFFFFF
    int NumberOfRowsInSection(int section);
    // public HMUI.TableCell CellForSectionHeader(System.Int32 section, System.Boolean unfolded)
    // Offset: 0xFFFFFFFF
    HMUI::TableCell* CellForSectionHeader(int section, bool unfolded);
    // public HMUI.TableCell CellForRowInSection(System.Int32 section, System.Int32 row)
    // Offset: 0xFFFFFFFF
    HMUI::TableCell* CellForRowInSection(int section, int row);
  }; // HMUI.SectionTableView/HMUI.IDataSource
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SectionTableView::IDataSource::RowHeight
// Il2CppName: RowHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::SectionTableView::IDataSource::*)()>(&HMUI::SectionTableView::IDataSource::RowHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView::IDataSource*), "RowHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::IDataSource::NumberOfSections
// Il2CppName: NumberOfSections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SectionTableView::IDataSource::*)()>(&HMUI::SectionTableView::IDataSource::NumberOfSections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView::IDataSource*), "NumberOfSections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::IDataSource::NumberOfRowsInSection
// Il2CppName: NumberOfRowsInSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SectionTableView::IDataSource::*)(int)>(&HMUI::SectionTableView::IDataSource::NumberOfRowsInSection)> {
  static const MethodInfo* get() {
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView::IDataSource*), "NumberOfRowsInSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{section});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::IDataSource::CellForSectionHeader
// Il2CppName: CellForSectionHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (HMUI::SectionTableView::IDataSource::*)(int, bool)>(&HMUI::SectionTableView::IDataSource::CellForSectionHeader)> {
  static const MethodInfo* get() {
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* unfolded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView::IDataSource*), "CellForSectionHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{section, unfolded});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::IDataSource::CellForRowInSection
// Il2CppName: CellForRowInSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (HMUI::SectionTableView::IDataSource::*)(int, int)>(&HMUI::SectionTableView::IDataSource::CellForRowInSection)> {
  static const MethodInfo* get() {
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView::IDataSource*), "CellForRowInSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{section, row});
  }
};
