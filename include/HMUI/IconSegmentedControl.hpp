// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
// Including type: HMUI.SegmentedControl/HMUI.IDataSource
#include "HMUI/SegmentedControl_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControlCell
  class IconSegmentedControlCell;
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: IconSegmentedControl
  class IconSegmentedControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::IconSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControl*, "HMUI", "IconSegmentedControl");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x99
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.IconSegmentedControl
  // [TokenAttribute] Offset: FFFFFFFF
  class IconSegmentedControl : public ::HMUI::SegmentedControl/*, public ::HMUI::SegmentedControl::IDataSource*/ {
    public:
    // Nested type: ::HMUI::IconSegmentedControl::DataItem
    class DataItem;
    public:
    // private System.Single _iconSize
    // Size: 0x4
    // Offset: 0x58
    float iconSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _overrideCellSize
    // Size: 0x1
    // Offset: 0x5C
    bool overrideCellSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideCellSize and: padding
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0x1108BE0
    // private System.Single _padding
    // Size: 0x4
    // Offset: 0x60
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hideCellBackground
    // Size: 0x1
    // Offset: 0x64
    bool hideCellBackground;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideCellBackground and: firstCellPrefab
    char __padding3[0x3] = {};
    // [SpaceAttribute] Offset: 0x1108C98
    // private HMUI.IconSegmentedControlCell _firstCellPrefab
    // Size: 0x8
    // Offset: 0x68
    ::HMUI::IconSegmentedControlCell* firstCellPrefab;
    // Field size check
    static_assert(sizeof(::HMUI::IconSegmentedControlCell*) == 0x8);
    // private HMUI.IconSegmentedControlCell _lastCellPrefab
    // Size: 0x8
    // Offset: 0x70
    ::HMUI::IconSegmentedControlCell* lastCellPrefab;
    // Field size check
    static_assert(sizeof(::HMUI::IconSegmentedControlCell*) == 0x8);
    // private HMUI.IconSegmentedControlCell _middleCellPrefab
    // Size: 0x8
    // Offset: 0x78
    ::HMUI::IconSegmentedControlCell* middleCellPrefab;
    // Field size check
    static_assert(sizeof(::HMUI::IconSegmentedControlCell*) == 0x8);
    // private HMUI.IconSegmentedControlCell _singleCellPrefab
    // Size: 0x8
    // Offset: 0x80
    ::HMUI::IconSegmentedControlCell* singleCellPrefab;
    // Field size check
    static_assert(sizeof(::HMUI::IconSegmentedControlCell*) == 0x8);
    // [InjectAttribute] Offset: 0x1108D00
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x88
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private HMUI.IconSegmentedControl/HMUI.DataItem[] _dataItems
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::HMUI::IconSegmentedControl::DataItem*> dataItems;
    // Field size check
    static_assert(sizeof(::ArrayW<::HMUI::IconSegmentedControl::DataItem*>) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x98
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::HMUI::SegmentedControl::IDataSource
    operator ::HMUI::SegmentedControl::IDataSource() noexcept {
      return *reinterpret_cast<::HMUI::SegmentedControl::IDataSource*>(this);
    }
    // Creating interface conversion operator: i_IDataSource
    inline ::HMUI::SegmentedControl::IDataSource* i_IDataSource() noexcept {
      return reinterpret_cast<::HMUI::SegmentedControl::IDataSource*>(this);
    }
    // Get instance field reference: private System.Single _iconSize
    [[deprecated("Use field access instead!")]] float& dyn__iconSize();
    // Get instance field reference: private System.Boolean _overrideCellSize
    [[deprecated("Use field access instead!")]] bool& dyn__overrideCellSize();
    // Get instance field reference: private System.Single _padding
    [[deprecated("Use field access instead!")]] float& dyn__padding();
    // Get instance field reference: private System.Boolean _hideCellBackground
    [[deprecated("Use field access instead!")]] bool& dyn__hideCellBackground();
    // Get instance field reference: private HMUI.IconSegmentedControlCell _firstCellPrefab
    [[deprecated("Use field access instead!")]] ::HMUI::IconSegmentedControlCell*& dyn__firstCellPrefab();
    // Get instance field reference: private HMUI.IconSegmentedControlCell _lastCellPrefab
    [[deprecated("Use field access instead!")]] ::HMUI::IconSegmentedControlCell*& dyn__lastCellPrefab();
    // Get instance field reference: private HMUI.IconSegmentedControlCell _middleCellPrefab
    [[deprecated("Use field access instead!")]] ::HMUI::IconSegmentedControlCell*& dyn__middleCellPrefab();
    // Get instance field reference: private HMUI.IconSegmentedControlCell _singleCellPrefab
    [[deprecated("Use field access instead!")]] ::HMUI::IconSegmentedControlCell*& dyn__singleCellPrefab();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private HMUI.IconSegmentedControl/HMUI.DataItem[] _dataItems
    [[deprecated("Use field access instead!")]] ::ArrayW<::HMUI::IconSegmentedControl::DataItem*>& dyn__dataItems();
    // Get instance field reference: private System.Boolean _isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__isInitialized();
    // protected System.Void Init()
    // Offset: 0x176D040
    void Init();
    // public System.Void SetData(HMUI.IconSegmentedControl/HMUI.DataItem[] dataItems)
    // Offset: 0x176D060
    void SetData(::ArrayW<::HMUI::IconSegmentedControl::DataItem*> dataItems);
    // public System.Int32 NumberOfCells()
    // Offset: 0x176D0AC
    int NumberOfCells();
    // public HMUI.SegmentedControlCell CellForCellNumber(System.Int32 cellNumber)
    // Offset: 0x176D0C4
    ::HMUI::SegmentedControlCell* CellForCellNumber(int cellNumber);
    // private HMUI.IconSegmentedControlCell InstantiateCell(UnityEngine.Object prefab)
    // Offset: 0x176D270
    ::HMUI::IconSegmentedControlCell* InstantiateCell(::UnityEngine::Object* prefab);
    // public System.Void .ctor()
    // Offset: 0x176D520
    // Implemented from: HMUI.SegmentedControl
    // Base method: System.Void SegmentedControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IconSegmentedControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::IconSegmentedControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IconSegmentedControl*, creationType>()));
    }
  }; // HMUI.IconSegmentedControl
  #pragma pack(pop)
  static check_size<sizeof(IconSegmentedControl), 152 + sizeof(bool)> __HMUI_IconSegmentedControlSizeCheck;
  static_assert(sizeof(IconSegmentedControl) == 0x99);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControl::*)()>(&HMUI::IconSegmentedControl::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::IconSegmentedControl::*)(::ArrayW<::HMUI::IconSegmentedControl::DataItem*>)>(&HMUI::IconSegmentedControl::SetData)> {
  static const MethodInfo* get() {
    static auto* dataItems = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "IconSegmentedControl/DataItem"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataItems});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::IconSegmentedControl::*)()>(&HMUI::IconSegmentedControl::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::CellForCellNumber
// Il2CppName: CellForCellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::SegmentedControlCell* (HMUI::IconSegmentedControl::*)(int)>(&HMUI::IconSegmentedControl::CellForCellNumber)> {
  static const MethodInfo* get() {
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "CellForCellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cellNumber});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::InstantiateCell
// Il2CppName: InstantiateCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::IconSegmentedControlCell* (HMUI::IconSegmentedControl::*)(::UnityEngine::Object*)>(&HMUI::IconSegmentedControl::InstantiateCell)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::IconSegmentedControl*), "InstantiateCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: HMUI::IconSegmentedControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
