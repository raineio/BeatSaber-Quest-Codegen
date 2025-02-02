// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: TableViewWithDetailCell/IDataSource
#include "GlobalNamespace/TableViewWithDetailCell_IDataSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: TableViewWithDetailCell because it is already included!
  // Forward declaring type: GameServerListTableCell
  class GameServerListTableCell;
  // Forward declaring type: GameServerListDetailTableCell
  class GameServerListDetailTableCell;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
  // Forward declaring type: TableView
  class TableView;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameServersListTableView
  class GameServersListTableView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameServersListTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersListTableView*, "", "GameServersListTableView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GameServersListTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServersListTableView : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::TableViewWithDetailCell::IDataSource*/ {
    public:
    public:
    // private TableViewWithDetailCell _tableView
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TableViewWithDetailCell* tableView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TableViewWithDetailCell*) == 0x8);
    // private GameServerListTableCell _gameServerListCellPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameServerListTableCell* gameServerListCellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameServerListTableCell*) == 0x8);
    // private GameServerListDetailTableCell _gameServerDetailCellPrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GameServerListDetailTableCell* gameServerDetailCellPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameServerListDetailTableCell*) == 0x8);
    // [InjectAttribute] Offset: 0x112CD70
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x30
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private System.Action`1<INetworkPlayer> joinButtonPressedEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* joinButtonPressedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x40
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: gamesList
    char __padding5[0x7] = {};
    // private INetworkPlayer[] _gamesList
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::GlobalNamespace::INetworkPlayer*> gamesList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::INetworkPlayer*>) == 0x8);
    // private INetworkPlayer _selectedServer
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::INetworkPlayer* selectedServer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkPlayer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::TableViewWithDetailCell::IDataSource
    operator ::GlobalNamespace::TableViewWithDetailCell::IDataSource() noexcept {
      return *reinterpret_cast<::GlobalNamespace::TableViewWithDetailCell::IDataSource*>(this);
    }
    // Creating interface conversion operator: i_IDataSource
    inline ::GlobalNamespace::TableViewWithDetailCell::IDataSource* i_IDataSource() noexcept {
      return reinterpret_cast<::GlobalNamespace::TableViewWithDetailCell::IDataSource*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellReuseIdentifier
    static constexpr const char* kCellReuseIdentifier = "Cell";
    // Get static field: static private System.String kCellReuseIdentifier
    static ::StringW _get_kCellReuseIdentifier();
    // Set static field: static private System.String kCellReuseIdentifier
    static void _set_kCellReuseIdentifier(::StringW value);
    // static field const value: static private System.String kDetailCellReuseIdentifier
    static constexpr const char* kDetailCellReuseIdentifier = "DetailCell";
    // Get static field: static private System.String kDetailCellReuseIdentifier
    static ::StringW _get_kDetailCellReuseIdentifier();
    // Set static field: static private System.String kDetailCellReuseIdentifier
    static void _set_kDetailCellReuseIdentifier(::StringW value);
    // Get instance field reference: private TableViewWithDetailCell _tableView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TableViewWithDetailCell*& dyn__tableView();
    // Get instance field reference: private GameServerListTableCell _gameServerListCellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameServerListTableCell*& dyn__gameServerListCellPrefab();
    // Get instance field reference: private GameServerListDetailTableCell _gameServerDetailCellPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameServerListDetailTableCell*& dyn__gameServerDetailCellPrefab();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private System.Action`1<INetworkPlayer> joinButtonPressedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& dyn_joinButtonPressedEvent();
    // Get instance field reference: private System.Boolean _isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__isInitialized();
    // Get instance field reference: private INetworkPlayer[] _gamesList
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::INetworkPlayer*>& dyn__gamesList();
    // Get instance field reference: private INetworkPlayer _selectedServer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INetworkPlayer*& dyn__selectedServer();
    // public System.Void add_joinButtonPressedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x145C878
    void add_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinButtonPressedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x145C91C
    void remove_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void .ctor()
    // Offset: 0x145D07C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServersListTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameServersListTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServersListTableView*, creationType>()));
    }
    // public System.Single CellSize()
    // Offset: 0x145C9C0
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x145C9CC
    int NumberOfCells();
    // private System.Void Init()
    // Offset: 0x145C9E4
    void Init();
    // public HMUI.TableCell CellForContent(TableViewWithDetailCell tableView, System.Int32 idx, System.Boolean detailOpened)
    // Offset: 0x145CAF4
    ::HMUI::TableCell* CellForContent(::GlobalNamespace::TableViewWithDetailCell* tableView, int idx, bool detailOpened);
    // public HMUI.TableCell CellForDetail(TableViewWithDetailCell tableView, System.Int32 contentIdx)
    // Offset: 0x145CC48
    ::HMUI::TableCell* CellForDetail(::GlobalNamespace::TableViewWithDetailCell* tableView, int contentIdx);
    // public System.Void SetData(System.Collections.Generic.IEnumerable`1<INetworkPlayer> servers, System.Boolean clearSelection)
    // Offset: 0x145CDD8
    void SetData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* servers, bool clearSelection);
    // private System.Void HandleGameServerListDetailTableCellJoinServerButtonWasPressed()
    // Offset: 0x145CEEC
    void HandleGameServerListDetailTableCellJoinServerButtonWasPressed();
    // private System.Void HandleTableViewDidSelectCellWithIdx(HMUI.TableView tableView, System.Int32 id)
    // Offset: 0x145CF54
    void HandleTableViewDidSelectCellWithIdx(::HMUI::TableView* tableView, int id);
    // private System.Void HandleTableViewDidDeselectCellWithIdx(TableViewWithDetailCell arg1, System.Int32 arg2)
    // Offset: 0x145CF94
    void HandleTableViewDidDeselectCellWithIdx(::GlobalNamespace::TableViewWithDetailCell* arg1, int arg2);
    // protected System.Void OnDestroy()
    // Offset: 0x145CF9C
    void OnDestroy();
  }; // GameServersListTableView
  #pragma pack(pop)
  static check_size<sizeof(GameServersListTableView), 80 + sizeof(::GlobalNamespace::INetworkPlayer*)> __GlobalNamespace_GameServersListTableViewSizeCheck;
  static_assert(sizeof(GameServersListTableView) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::add_joinButtonPressedEvent
// Il2CppName: add_joinButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::GameServersListTableView::add_joinButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "add_joinButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::remove_joinButtonPressedEvent
// Il2CppName: remove_joinButtonPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(&GlobalNamespace::GameServersListTableView::remove_joinButtonPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "remove_joinButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::CellForContent
// Il2CppName: CellForContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (GlobalNamespace::GameServersListTableView::*)(::GlobalNamespace::TableViewWithDetailCell*, int, bool)>(&GlobalNamespace::GameServersListTableView::CellForContent)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* detailOpened = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "CellForContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx, detailOpened});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::CellForDetail
// Il2CppName: CellForDetail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (GlobalNamespace::GameServersListTableView::*)(::GlobalNamespace::TableViewWithDetailCell*, int)>(&GlobalNamespace::GameServersListTableView::CellForDetail)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell")->byval_arg;
    static auto* contentIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "CellForDetail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, contentIdx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, bool)>(&GlobalNamespace::GameServersListTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* servers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "INetworkPlayer")})->byval_arg;
    static auto* clearSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{servers, clearSelection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::HandleGameServerListDetailTableCellJoinServerButtonWasPressed
// Il2CppName: HandleGameServerListDetailTableCellJoinServerButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::HandleGameServerListDetailTableCellJoinServerButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "HandleGameServerListDetailTableCellJoinServerButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::HandleTableViewDidSelectCellWithIdx
// Il2CppName: HandleTableViewDidSelectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(::HMUI::TableView*, int)>(&GlobalNamespace::GameServersListTableView::HandleTableViewDidSelectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "HandleTableViewDidSelectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, id});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::HandleTableViewDidDeselectCellWithIdx
// Il2CppName: HandleTableViewDidDeselectCellWithIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)(::GlobalNamespace::TableViewWithDetailCell*, int)>(&GlobalNamespace::GameServersListTableView::HandleTableViewDidDeselectCellWithIdx)> {
  static const MethodInfo* get() {
    static auto* arg1 = &::il2cpp_utils::GetClassFromName("", "TableViewWithDetailCell")->byval_arg;
    static auto* arg2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "HandleTableViewDidDeselectCellWithIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg1, arg2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServersListTableView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersListTableView::*)()>(&GlobalNamespace::GameServersListTableView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServersListTableView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
