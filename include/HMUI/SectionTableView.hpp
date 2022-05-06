// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: SectionTableView
  class SectionTableView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::SectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SectionTableView*, "HMUI", "SectionTableView");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.SectionTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class SectionTableView : public ::HMUI::TableView/*, public ::HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: ::HMUI::SectionTableView::IDataSource
    class IDataSource;
    // Nested type: ::HMUI::SectionTableView::Section
    struct Section;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: HMUI.SectionTableView/HMUI.Section
    // [TokenAttribute] Offset: FFFFFFFF
    struct Section/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Boolean unfolded
      // Size: 0x1
      // Offset: 0x0
      bool unfolded;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: unfolded and: startBaseRow
      char __padding0[0x3] = {};
      // public System.Int32 startBaseRow
      // Size: 0x4
      // Offset: 0x4
      int startBaseRow;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public System.Int32 numberOfBaseRows
      // Size: 0x4
      // Offset: 0x8
      int numberOfBaseRows;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Section
      constexpr Section(bool unfolded_ = {}, int startBaseRow_ = {}, int numberOfBaseRows_ = {}) noexcept : unfolded{unfolded_}, startBaseRow{startBaseRow_}, numberOfBaseRows{numberOfBaseRows_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Boolean unfolded
      [[deprecated("Use field access instead!")]] bool& dyn_unfolded();
      // Get instance field reference: public System.Int32 startBaseRow
      [[deprecated("Use field access instead!")]] int& dyn_startBaseRow();
      // Get instance field reference: public System.Int32 numberOfBaseRows
      [[deprecated("Use field access instead!")]] int& dyn_numberOfBaseRows();
    }; // HMUI.SectionTableView/HMUI.Section
    #pragma pack(pop)
    static check_size<sizeof(SectionTableView::Section), 8 + sizeof(int)> __HMUI_SectionTableView_SectionSizeCheck;
    static_assert(sizeof(SectionTableView::Section) == 0xC);
    public:
    // private System.Boolean _unfoldSectionsByDefault
    // Size: 0x1
    // Offset: 0xA2
    bool unfoldSectionsByDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: unfoldSectionsByDefault and: didSelectRowInSectionEvent
    char __padding0[0x5] = {};
    // private System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> didSelectRowInSectionEvent
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action_3<::HMUI::SectionTableView*, int, int>* didSelectRowInSectionEvent;
    // Field size check
    static_assert(sizeof(::System::Action_3<::HMUI::SectionTableView*, int, int>*) == 0x8);
    // private System.Action`2<HMUI.SectionTableView,System.Int32> didSelectHeaderEvent
    // Size: 0x8
    // Offset: 0xB0
    ::System::Action_2<::HMUI::SectionTableView*, int>* didSelectHeaderEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::HMUI::SectionTableView*, int>*) == 0x8);
    // private HMUI.SectionTableView/HMUI.IDataSource _dataSource
    // Size: 0x8
    // Offset: 0xB8
    ::HMUI::SectionTableView::IDataSource* dataSource;
    // Field size check
    static_assert(sizeof(::HMUI::SectionTableView::IDataSource*) == 0x8);
    // private HMUI.SectionTableView/HMUI.Section[] _sections
    // Size: 0x8
    // Offset: 0xC0
    ::ArrayW<::HMUI::SectionTableView::Section> sections;
    // Field size check
    static_assert(sizeof(::ArrayW<::HMUI::SectionTableView::Section>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HMUI::TableView::IDataSource
    operator ::HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::TableView::IDataSource*>(this);
    }
    // Get instance field reference: private System.Boolean _unfoldSectionsByDefault
    [[deprecated("Use field access instead!")]] bool& dyn__unfoldSectionsByDefault();
    // Get instance field reference: private System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> didSelectRowInSectionEvent
    [[deprecated("Use field access instead!")]] ::System::Action_3<::HMUI::SectionTableView*, int, int>*& dyn_didSelectRowInSectionEvent();
    // Get instance field reference: private System.Action`2<HMUI.SectionTableView,System.Int32> didSelectHeaderEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::HMUI::SectionTableView*, int>*& dyn_didSelectHeaderEvent();
    // Get instance field reference: private HMUI.SectionTableView/HMUI.IDataSource _dataSource
    [[deprecated("Use field access instead!")]] ::HMUI::SectionTableView::IDataSource*& dyn__dataSource();
    // Get instance field reference: private HMUI.SectionTableView/HMUI.Section[] _sections
    [[deprecated("Use field access instead!")]] ::ArrayW<::HMUI::SectionTableView::Section>& dyn__sections();
    // public HMUI.SectionTableView/HMUI.IDataSource get_dataSource()
    // Offset: 0x16C1D54
    ::HMUI::SectionTableView::IDataSource* get_dataSource();
    // public System.Void set_dataSource(HMUI.SectionTableView/HMUI.IDataSource value)
    // Offset: 0x16C1D5C
    void set_dataSource(::HMUI::SectionTableView::IDataSource* value);
    // public System.Void add_didSelectRowInSectionEvent(System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> value)
    // Offset: 0x16C1AC4
    void add_didSelectRowInSectionEvent(::System::Action_3<::HMUI::SectionTableView*, int, int>* value);
    // public System.Void remove_didSelectRowInSectionEvent(System.Action`3<HMUI.SectionTableView,System.Int32,System.Int32> value)
    // Offset: 0x16C1B68
    void remove_didSelectRowInSectionEvent(::System::Action_3<::HMUI::SectionTableView*, int, int>* value);
    // public System.Void add_didSelectHeaderEvent(System.Action`2<HMUI.SectionTableView,System.Int32> value)
    // Offset: 0x16C1C0C
    void add_didSelectHeaderEvent(::System::Action_2<::HMUI::SectionTableView*, int>* value);
    // public System.Void remove_didSelectHeaderEvent(System.Action`2<HMUI.SectionTableView,System.Int32> value)
    // Offset: 0x16C1CB0
    void remove_didSelectHeaderEvent(::System::Action_2<::HMUI::SectionTableView*, int>* value);
    // public System.Boolean IsSectionUnfolded(System.Int32 section)
    // Offset: 0x16C1D80
    bool IsSectionUnfolded(int section);
    // public System.Single CellSize()
    // Offset: 0x16C1DC0
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x16C1E70
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 baseRow)
    // Offset: 0x16C1EC0
    ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int baseRow);
    // public System.Void ReloadData(System.Boolean resetFoldState)
    // Offset: 0x16C2168
    void ReloadData(bool resetFoldState);
    // public System.Void UnfoldAllSections()
    // Offset: 0x16C2740
    void UnfoldAllSections();
    // public System.Void FoldAll()
    // Offset: 0x16C27A0
    void FoldAll();
    // public System.Void UnfoldSection(System.Int32 section)
    // Offset: 0x16C27FC
    void UnfoldSection(int section);
    // public System.Void FoldSection(System.Int32 section)
    // Offset: 0x16C2C84
    void FoldSection(int section);
    // public System.Void ScrollToRow(System.Int32 section, System.Int32 row, HMUI.TableView/HMUI.ScrollPositionType scrollPositionType, System.Boolean animated)
    // Offset: 0x16C306C
    void ScrollToRow(int section, int row, ::HMUI::TableView::ScrollPositionType scrollPositionType, bool animated);
    // public System.Void SectionAndRowForBaseRow(System.Int32 baseRow, out System.Int32 section, out System.Int32 row, out System.Boolean isSectionHeader)
    // Offset: 0x16C2070
    void SectionAndRowForBaseRow(int baseRow, ByRef<int> section, ByRef<int> row, ByRef<bool> isSectionHeader);
    // public System.Void .ctor()
    // Offset: 0x16C31A0
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SectionTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::SectionTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SectionTableView*, creationType>()));
    }
    // public override System.Void ReloadData()
    // Offset: 0x16C2160
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::ReloadData()
    void ReloadData();
    // protected override System.Void DidSelectCellWithIdx(System.Int32 baseRow)
    // Offset: 0x16C2678
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::DidSelectCellWithIdx(System.Int32 baseRow)
    void DidSelectCellWithIdx(int baseRow);
  }; // HMUI.SectionTableView
  #pragma pack(pop)
  static check_size<sizeof(SectionTableView), 192 + sizeof(::ArrayW<::HMUI::SectionTableView::Section>)> __HMUI_SectionTableViewSizeCheck;
  static_assert(sizeof(SectionTableView) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SectionTableView::Section, "HMUI", "SectionTableView/Section");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::SectionTableView::get_dataSource
// Il2CppName: get_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::SectionTableView::IDataSource* (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::get_dataSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "get_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::set_dataSource
// Il2CppName: set_dataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(::HMUI::SectionTableView::IDataSource*)>(&HMUI::SectionTableView::set_dataSource)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("HMUI", "SectionTableView/IDataSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "set_dataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::add_didSelectRowInSectionEvent
// Il2CppName: add_didSelectRowInSectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(::System::Action_3<::HMUI::SectionTableView*, int, int>*)>(&HMUI::SectionTableView::add_didSelectRowInSectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SectionTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "add_didSelectRowInSectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::remove_didSelectRowInSectionEvent
// Il2CppName: remove_didSelectRowInSectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(::System::Action_3<::HMUI::SectionTableView*, int, int>*)>(&HMUI::SectionTableView::remove_didSelectRowInSectionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SectionTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "remove_didSelectRowInSectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::add_didSelectHeaderEvent
// Il2CppName: add_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(::System::Action_2<::HMUI::SectionTableView*, int>*)>(&HMUI::SectionTableView::add_didSelectHeaderEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SectionTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::remove_didSelectHeaderEvent
// Il2CppName: remove_didSelectHeaderEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(::System::Action_2<::HMUI::SectionTableView*, int>*)>(&HMUI::SectionTableView::remove_didSelectHeaderEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "SectionTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::IsSectionUnfolded
// Il2CppName: IsSectionUnfolded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::IsSectionUnfolded)> {
  static const MethodInfo* get() {
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "IsSectionUnfolded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{section});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (HMUI::SectionTableView::*)(::HMUI::TableView*, int)>(&HMUI::SectionTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* baseRow = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, baseRow});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(bool)>(&HMUI::SectionTableView::ReloadData)> {
  static const MethodInfo* get() {
    static auto* resetFoldState = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resetFoldState});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::UnfoldAllSections
// Il2CppName: UnfoldAllSections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::UnfoldAllSections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "UnfoldAllSections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::FoldAll
// Il2CppName: FoldAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::FoldAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "FoldAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::UnfoldSection
// Il2CppName: UnfoldSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::UnfoldSection)> {
  static const MethodInfo* get() {
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "UnfoldSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{section});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::FoldSection
// Il2CppName: FoldSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::FoldSection)> {
  static const MethodInfo* get() {
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "FoldSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{section});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::ScrollToRow
// Il2CppName: ScrollToRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int, int, ::HMUI::TableView::ScrollPositionType, bool)>(&HMUI::SectionTableView::ScrollToRow)> {
  static const MethodInfo* get() {
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scrollPositionType = &::il2cpp_utils::GetClassFromName("HMUI", "TableView/ScrollPositionType")->byval_arg;
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "ScrollToRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{section, row, scrollPositionType, animated});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::SectionAndRowForBaseRow
// Il2CppName: SectionAndRowForBaseRow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int, ByRef<int>, ByRef<int>, ByRef<bool>)>(&HMUI::SectionTableView::SectionAndRowForBaseRow)> {
  static const MethodInfo* get() {
    static auto* baseRow = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* section = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* isSectionHeader = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "SectionAndRowForBaseRow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseRow, section, row, isSectionHeader});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::SectionTableView::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)()>(&HMUI::SectionTableView::ReloadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::SectionTableView::DidSelectCellWithIdx
// Il2CppName: DidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SectionTableView::*)(int)>(&HMUI::SectionTableView::DidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* baseRow = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::SectionTableView*), "DidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseRow});
  }
};
