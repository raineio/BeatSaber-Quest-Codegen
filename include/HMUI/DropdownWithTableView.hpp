// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ModalView
  class ModalView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(HMUI::DropdownWithTableView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::DropdownWithTableView*, "HMUI", "DropdownWithTableView");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.DropdownWithTableView
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: F242BC
  class DropdownWithTableView : public UnityEngine::MonoBehaviour {
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
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x20
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private HMUI.ModalView _modalView
    // Size: 0x8
    // Offset: 0x28
    HMUI::ModalView* modalView;
    // Field size check
    static_assert(sizeof(HMUI::ModalView*) == 0x8);
    // private System.Int32 _numberOfVisibleCells
    // Size: 0x4
    // Offset: 0x30
    int numberOfVisibleCells;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfVisibleCells and: didSelectCellWithIdxEvent
    char __padding3[0x4] = {};
    // private System.Action`2<HMUI.DropdownWithTableView,System.Int32> didSelectCellWithIdxEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<HMUI::DropdownWithTableView*, int>* didSelectCellWithIdxEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::DropdownWithTableView*, int>*) == 0x8);
    // private System.Int32 <selectedIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int selectedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Button _button
    UnityEngine::UI::Button*& dyn__button();
    // Get instance field reference: private HMUI.TableView _tableView
    HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private HMUI.ModalView _modalView
    HMUI::ModalView*& dyn__modalView();
    // Get instance field reference: private System.Int32 _numberOfVisibleCells
    int& dyn__numberOfVisibleCells();
    // Get instance field reference: private System.Action`2<HMUI.DropdownWithTableView,System.Int32> didSelectCellWithIdxEvent
    System::Action_2<HMUI::DropdownWithTableView*, int>*& dyn_didSelectCellWithIdxEvent();
    // Get instance field reference: private System.Int32 <selectedIndex>k__BackingField
    int& dyn_$selectedIndex$k__BackingField();
    // public HMUI.TableView/HMUI.IDataSource get_tableViewDataSource()
    // Offset: 0x149C068
    HMUI::TableView::IDataSource* get_tableViewDataSource();
    // public System.Int32 get_selectedIndex()
    // Offset: 0x149C084
    int get_selectedIndex();
    // private System.Void set_selectedIndex(System.Int32 value)
    // Offset: 0x149C08C
    void set_selectedIndex(int value);
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`2<HMUI.DropdownWithTableView,System.Int32> value)
    // Offset: 0x149BF20
    void add_didSelectCellWithIdxEvent(System::Action_2<HMUI::DropdownWithTableView*, int>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`2<HMUI.DropdownWithTableView,System.Int32> value)
    // Offset: 0x149BFC4
    void remove_didSelectCellWithIdxEvent(System::Action_2<HMUI::DropdownWithTableView*, int>* value);
    // public System.Void Init(HMUI.TableView/HMUI.IDataSource tableViewDataSource)
    // Offset: 0x149C094
    void Init(HMUI::TableView::IDataSource* tableViewDataSource);
    // public System.Void ReloadData()
    // Offset: 0x149C0B4
    void ReloadData();
    // public System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x149C2B0
    void SelectCellWithIdx(int idx);
    // protected System.Void Awake()
    // Offset: 0x149C2D8
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0x149C41C
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0x149C46C
    void OnDestroy();
    // private System.Void RefreshSize(HMUI.TableView/HMUI.IDataSource dataSource)
    // Offset: 0x149C0F8
    void RefreshSize(HMUI::TableView::IDataSource* dataSource);
    // private System.Void OnButtonClick()
    // Offset: 0x149C638
    void OnButtonClick();
    // private System.Void HandleTableViewDidSelectCellWithIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x149C6C4
    void HandleTableViewDidSelectCellWithIdx(HMUI::TableView* tableView, int idx);
    // private System.Void Hide(System.Boolean animated)
    // Offset: 0x149C424
    void Hide(bool animated);
    // private System.Void Show(System.Boolean animated)
    // Offset: 0x149C640
    void Show(bool animated);
    // private System.Void HandleModalViewBlockerClicked()
    // Offset: 0x149C73C
    void HandleModalViewBlockerClicked();
    // public System.Void .ctor()
    // Offset: 0x149C744
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DropdownWithTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::DropdownWithTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DropdownWithTableView*, creationType>()));
    }
  }; // HMUI.DropdownWithTableView
  #pragma pack(pop)
  static check_size<sizeof(DropdownWithTableView), 64 + sizeof(int)> __HMUI_DropdownWithTableViewSizeCheck;
  static_assert(sizeof(DropdownWithTableView) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::get_tableViewDataSource
// Il2CppName: get_tableViewDataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableView::IDataSource* (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::get_tableViewDataSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "get_tableViewDataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::get_selectedIndex
// Il2CppName: get_selectedIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::get_selectedIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "get_selectedIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::set_selectedIndex
// Il2CppName: set_selectedIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(int)>(&HMUI::DropdownWithTableView::set_selectedIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "set_selectedIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::add_didSelectCellWithIdxEvent
// Il2CppName: add_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(System::Action_2<HMUI::DropdownWithTableView*, int>*)>(&HMUI::DropdownWithTableView::add_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "add_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::remove_didSelectCellWithIdxEvent
// Il2CppName: remove_didSelectCellWithIdxEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(System::Action_2<HMUI::DropdownWithTableView*, int>*)>(&HMUI::DropdownWithTableView::remove_didSelectCellWithIdxEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "DropdownWithTableView"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "remove_didSelectCellWithIdxEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(HMUI::TableView::IDataSource*)>(&HMUI::DropdownWithTableView::Init)> {
  static const MethodInfo* get() {
    static auto* tableViewDataSource = &::il2cpp_utils::GetClassFromName("HMUI", "TableView/IDataSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableViewDataSource});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::ReloadData
// Il2CppName: ReloadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::ReloadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "ReloadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::SelectCellWithIdx
// Il2CppName: SelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(int)>(&HMUI::DropdownWithTableView::SelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "SelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::RefreshSize
// Il2CppName: RefreshSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(HMUI::TableView::IDataSource*)>(&HMUI::DropdownWithTableView::RefreshSize)> {
  static const MethodInfo* get() {
    static auto* dataSource = &::il2cpp_utils::GetClassFromName("HMUI", "TableView/IDataSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "RefreshSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dataSource});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::OnButtonClick
// Il2CppName: OnButtonClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::OnButtonClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "OnButtonClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::HandleTableViewDidSelectCellWithIdx
// Il2CppName: HandleTableViewDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(HMUI::TableView*, int)>(&HMUI::DropdownWithTableView::HandleTableViewDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "HandleTableViewDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(bool)>(&HMUI::DropdownWithTableView::Hide)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)(bool)>(&HMUI::DropdownWithTableView::Show)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::HandleModalViewBlockerClicked
// Il2CppName: HandleModalViewBlockerClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::DropdownWithTableView::*)()>(&HMUI::DropdownWithTableView::HandleModalViewBlockerClicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::DropdownWithTableView*), "HandleModalViewBlockerClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::DropdownWithTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
