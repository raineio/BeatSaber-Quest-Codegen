// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ITableCellOwner
  class ITableCellOwner;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::TableCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableCell*, "HMUI", "TableCell");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TableCell
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 11082F8
  class TableCell : public ::HMUI::SelectableCell {
    public:
    // Writing base type padding for base size: 0x42 to desired offset: 0x44
    char ___base_padding[0x2] = {};
    public:
    // private System.Int32 <idx>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String _reuseIdentifier
    // Size: 0x8
    // Offset: 0x48
    ::StringW reuseIdentifier;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private HMUI.ITableCellOwner _tableCellOwner
    // Size: 0x8
    // Offset: 0x50
    ::HMUI::ITableCellOwner* tableCellOwner;
    // Field size check
    static_assert(sizeof(::HMUI::ITableCellOwner*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <idx>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$idx$k__BackingField();
    // Get instance field reference: private System.String _reuseIdentifier
    [[deprecated("Use field access instead!")]] ::StringW& dyn__reuseIdentifier();
    // Get instance field reference: private HMUI.ITableCellOwner _tableCellOwner
    [[deprecated("Use field access instead!")]] ::HMUI::ITableCellOwner*& dyn__tableCellOwner();
    // public System.String get_reuseIdentifier()
    // Offset: 0x17003FC
    ::StringW get_reuseIdentifier();
    // public System.Void set_reuseIdentifier(System.String value)
    // Offset: 0x1700404
    void set_reuseIdentifier(::StringW value);
    // public System.Int32 get_idx()
    // Offset: 0x170040C
    int get_idx();
    // private System.Void set_idx(System.Int32 value)
    // Offset: 0x1700414
    void set_idx(int value);
    // protected HMUI.ITableCellOwner get_tableCellOwner()
    // Offset: 0x170041C
    ::HMUI::ITableCellOwner* get_tableCellOwner();
    // public System.Void TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    // Offset: 0x1700424
    void TableViewSetup(::HMUI::ITableCellOwner* tableCellOwner, int idx);
    // public System.Void MoveIdx(System.Int32 offset)
    // Offset: 0x1700430
    void MoveIdx(int offset);
    // public System.Void __WasPreparedForReuse()
    // Offset: 0x1700630
    void __WasPreparedForReuse();
    // protected System.Void WasPreparedForReuse()
    // Offset: 0x1700640
    void WasPreparedForReuse();
    // public System.Void .ctor()
    // Offset: 0x1700644
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::TableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableCell*, creationType>()));
    }
    // protected override System.Void InternalToggle()
    // Offset: 0x1700440
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::InternalToggle()
    void InternalToggle();
  }; // HMUI.TableCell
  #pragma pack(pop)
  static check_size<sizeof(TableCell), 80 + sizeof(::HMUI::ITableCellOwner*)> __HMUI_TableCellSizeCheck;
  static_assert(sizeof(TableCell) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TableCell::get_reuseIdentifier
// Il2CppName: get_reuseIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::TableCell::*)()>(&HMUI::TableCell::get_reuseIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "get_reuseIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::set_reuseIdentifier
// Il2CppName: set_reuseIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TableCell::*)(::StringW)>(&HMUI::TableCell::set_reuseIdentifier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "set_reuseIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::get_idx
// Il2CppName: get_idx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::TableCell::*)()>(&HMUI::TableCell::get_idx)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "get_idx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::set_idx
// Il2CppName: set_idx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TableCell::*)(int)>(&HMUI::TableCell::set_idx)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "set_idx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::get_tableCellOwner
// Il2CppName: get_tableCellOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::ITableCellOwner* (HMUI::TableCell::*)()>(&HMUI::TableCell::get_tableCellOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "get_tableCellOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::TableViewSetup
// Il2CppName: TableViewSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TableCell::*)(::HMUI::ITableCellOwner*, int)>(&HMUI::TableCell::TableViewSetup)> {
  static const MethodInfo* get() {
    static auto* tableCellOwner = &::il2cpp_utils::GetClassFromName("HMUI", "ITableCellOwner")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "TableViewSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableCellOwner, idx});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::MoveIdx
// Il2CppName: MoveIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TableCell::*)(int)>(&HMUI::TableCell::MoveIdx)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "MoveIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::__WasPreparedForReuse
// Il2CppName: __WasPreparedForReuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TableCell::*)()>(&HMUI::TableCell::__WasPreparedForReuse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "__WasPreparedForReuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::WasPreparedForReuse
// Il2CppName: WasPreparedForReuse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TableCell::*)()>(&HMUI::TableCell::WasPreparedForReuse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "WasPreparedForReuse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::TableCell::InternalToggle
// Il2CppName: InternalToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TableCell::*)()>(&HMUI::TableCell::InternalToggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TableCell*), "InternalToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
