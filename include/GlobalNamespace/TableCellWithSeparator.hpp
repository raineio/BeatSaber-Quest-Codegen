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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ITableCellOwner
  class ITableCellOwner;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TableCellWithSeparator
  class TableCellWithSeparator;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::TableCellWithSeparator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TableCellWithSeparator*, "", "TableCellWithSeparator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TableCellWithSeparator
  // [TokenAttribute] Offset: FFFFFFFF
  class TableCellWithSeparator : public HMUI::TableCell {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.GameObject _separator
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::GameObject* separator;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject _separator
    UnityEngine::GameObject*& dyn__separator();
    // public System.Void .ctor()
    // Offset: 0x264E674
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
    static TableCellWithSeparator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TableCellWithSeparator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableCellWithSeparator*, creationType>()));
    }
    // public override System.Void TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    // Offset: 0x264E580
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    void TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx);
  }; // TableCellWithSeparator
  #pragma pack(pop)
  static check_size<sizeof(TableCellWithSeparator), 80 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_TableCellWithSeparatorSizeCheck;
  static_assert(sizeof(TableCellWithSeparator) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TableCellWithSeparator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TableCellWithSeparator::TableViewSetup
// Il2CppName: TableViewSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableCellWithSeparator::*)(HMUI::ITableCellOwner*, int)>(&GlobalNamespace::TableCellWithSeparator::TableViewSetup)> {
  static const MethodInfo* get() {
    static auto* tableCellOwner = &::il2cpp_utils::GetClassFromName("HMUI", "ITableCellOwner")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TableCellWithSeparator*), "TableViewSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableCellOwner, idx});
  }
};
