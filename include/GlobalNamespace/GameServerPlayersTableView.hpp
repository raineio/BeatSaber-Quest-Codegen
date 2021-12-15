// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/HMUI.IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameServerPlayerTableCell
  class GameServerPlayerTableCell;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: ILobbyPlayerData
  class ILobbyPlayerData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameServerPlayersTableView
  class GameServerPlayersTableView;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::GameServerPlayersTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayersTableView*, "", "GameServerPlayersTableView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: GameServerPlayersTableView
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerPlayersTableView : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
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
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x18
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // private GameServerPlayerTableCell _gameServerPlayerCellPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameServerPlayerTableCell* gameServerPlayerCellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerPlayerTableCell*) == 0x8);
    // private GameServerPlayerTableCell _gameServerPlayerCellWithoutSongsPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameServerPlayerTableCell* gameServerPlayerCellWithoutSongsPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerPlayerTableCell*) == 0x8);
    // private GameServerPlayerTableCell _gameServerPlayerCellWithoutModifiersPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::GameServerPlayerTableCell* gameServerPlayerCellWithoutModifiersPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameServerPlayerTableCell*) == 0x8);
    // private UnityEngine.GameObject _tableHeaderSongGo
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* tableHeaderSongGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _tableHeaderModifiersGo
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::GameObject* tableHeaderModifiersGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xF47CD0
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x48
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [InjectAttribute] Offset: 0xF47CE0
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> selectSuggestedLevelEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* selectSuggestedLevelEvent;
    // Field size check
    static_assert(sizeof(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>*) == 0x8);
    // private System.Action`1<GameplayModifiers> selectSuggestedGameplayModifiersEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::GameplayModifiers*>* selectSuggestedGameplayModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::GameplayModifiers*>*) == 0x8);
    // private System.Action`1<System.String> kickPlayerEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<::Il2CppString*>* kickPlayerEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<::Il2CppString*>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x70
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasKickPermissions
    // Size: 0x1
    // Offset: 0x71
    bool hasKickPermissions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _allowSelection
    // Size: 0x1
    // Offset: 0x72
    bool allowSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _showSongSelection
    // Size: 0x1
    // Offset: 0x73
    bool showSongSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _showModifierSelection
    // Size: 0x1
    // Offset: 0x74
    bool showModifierSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showModifierSelection and: selectedPlayer
    char __padding15[0x3] = {};
    // private IConnectedPlayer _selectedPlayer
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::IConnectedPlayer* selectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private System.Collections.Generic.List`1<IConnectedPlayer> _sortedConnectedPlayers
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* sortedConnectedPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // private ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    public:
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellId
    static constexpr const char* kCellId = "Cell";
    // Get static field: static private System.String kCellId
    static ::Il2CppString* _get_kCellId();
    // Set static field: static private System.String kCellId
    static void _set_kCellId(::Il2CppString* value);
    // static field const value: static private System.String kNoSongsCellId
    static constexpr const char* kNoSongsCellId = "NoSongCell";
    // Get static field: static private System.String kNoSongsCellId
    static ::Il2CppString* _get_kNoSongsCellId();
    // Set static field: static private System.String kNoSongsCellId
    static void _set_kNoSongsCellId(::Il2CppString* value);
    // static field const value: static private System.String kNoModifiersCellId
    static constexpr const char* kNoModifiersCellId = "NoModifierCell";
    // Get static field: static private System.String kNoModifiersCellId
    static ::Il2CppString* _get_kNoModifiersCellId();
    // Set static field: static private System.String kNoModifiersCellId
    static void _set_kNoModifiersCellId(::Il2CppString* value);
    // Get instance field reference: private HMUI.TableView _tableView
    HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private GameServerPlayerTableCell _gameServerPlayerCellPrefab
    GlobalNamespace::GameServerPlayerTableCell*& dyn__gameServerPlayerCellPrefab();
    // Get instance field reference: private GameServerPlayerTableCell _gameServerPlayerCellWithoutSongsPrefab
    GlobalNamespace::GameServerPlayerTableCell*& dyn__gameServerPlayerCellWithoutSongsPrefab();
    // Get instance field reference: private GameServerPlayerTableCell _gameServerPlayerCellWithoutModifiersPrefab
    GlobalNamespace::GameServerPlayerTableCell*& dyn__gameServerPlayerCellWithoutModifiersPrefab();
    // Get instance field reference: private UnityEngine.GameObject _tableHeaderSongGo
    UnityEngine::GameObject*& dyn__tableHeaderSongGo();
    // Get instance field reference: private UnityEngine.GameObject _tableHeaderModifiersGo
    UnityEngine::GameObject*& dyn__tableHeaderModifiersGo();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly AdditionalContentModel _additionalContentModel
    GlobalNamespace::AdditionalContentModel*& dyn__additionalContentModel();
    // Get instance field reference: private System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> selectSuggestedLevelEvent
    System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>*& dyn_selectSuggestedLevelEvent();
    // Get instance field reference: private System.Action`1<GameplayModifiers> selectSuggestedGameplayModifiersEvent
    System::Action_1<GlobalNamespace::GameplayModifiers*>*& dyn_selectSuggestedGameplayModifiersEvent();
    // Get instance field reference: private System.Action`1<System.String> kickPlayerEvent
    System::Action_1<::Il2CppString*>*& dyn_kickPlayerEvent();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // Get instance field reference: private System.Boolean _hasKickPermissions
    bool& dyn__hasKickPermissions();
    // Get instance field reference: private System.Boolean _allowSelection
    bool& dyn__allowSelection();
    // Get instance field reference: private System.Boolean _showSongSelection
    bool& dyn__showSongSelection();
    // Get instance field reference: private System.Boolean _showModifierSelection
    bool& dyn__showModifierSelection();
    // Get instance field reference: private IConnectedPlayer _selectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__selectedPlayer();
    // Get instance field reference: private System.Collections.Generic.List`1<IConnectedPlayer> _sortedConnectedPlayers
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*& dyn__sortedConnectedPlayers();
    // Get instance field reference: private ILobbyPlayersDataModel _lobbyPlayersDataModel
    GlobalNamespace::ILobbyPlayersDataModel*& dyn__lobbyPlayersDataModel();
    // private System.String get_currentCellId()
    // Offset: 0x11F721C
    ::Il2CppString* get_currentCellId();
    // public System.Void add_selectSuggestedLevelEvent(System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> value)
    // Offset: 0x11F6DE8
    void add_selectSuggestedLevelEvent(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void remove_selectSuggestedLevelEvent(System.Action`3<System.String,BeatmapCharacteristicSO,BeatmapDifficulty> value)
    // Offset: 0x11F6E8C
    void remove_selectSuggestedLevelEvent(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>* value);
    // public System.Void add_selectSuggestedGameplayModifiersEvent(System.Action`1<GameplayModifiers> value)
    // Offset: 0x11F6F30
    void add_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void remove_selectSuggestedGameplayModifiersEvent(System.Action`1<GameplayModifiers> value)
    // Offset: 0x11F6FD4
    void remove_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void add_kickPlayerEvent(System.Action`1<System.String> value)
    // Offset: 0x11F7078
    void add_kickPlayerEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_kickPlayerEvent(System.Action`1<System.String> value)
    // Offset: 0x11F711C
    void remove_kickPlayerEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Single CellSize()
    // Offset: 0x11F71C0
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x11F71CC
    int NumberOfCells();
    // private GameServerPlayerTableCell GetCurrentPrefab()
    // Offset: 0x11F7290
    GlobalNamespace::GameServerPlayerTableCell* GetCurrentPrefab();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x11F7328
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // private System.Boolean TryGetLobbyPlayerData(System.Int32 idx, out IConnectedPlayer player, out ILobbyPlayerData playerData)
    // Offset: 0x11F779C
    bool TryGetLobbyPlayerData(int idx, ByRef<GlobalNamespace::IConnectedPlayer*> player, ByRef<GlobalNamespace::ILobbyPlayerData*> playerData);
    // private System.Void HandleCellUseBeatmap(System.Int32 idx)
    // Offset: 0x11F7924
    void HandleCellUseBeatmap(int idx);
    // private System.Void HandleCellUseModifiers(System.Int32 idx)
    // Offset: 0x11F7CD0
    void HandleCellUseModifiers(int idx);
    // private System.Void HandleCellKickPlayer(System.Int32 idx)
    // Offset: 0x11F7E60
    void HandleCellKickPlayer(int idx);
    // public System.Void SetData(System.Collections.Generic.List`1<IConnectedPlayer> sortedPlayers, ILobbyPlayersDataModel lobbyPlayersDataModel, System.Boolean hasKickPermissions, System.Boolean allowSelection, System.Boolean showSongSelection, System.Boolean showModifierSelection, System.Boolean clearSelection)
    // Offset: 0x11F7F74
    void SetData(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* sortedPlayers, GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel, bool hasKickPermissions, bool allowSelection, bool showSongSelection, bool showModifierSelection, bool clearSelection);
    // private System.Void Init()
    // Offset: 0x11F8038
    void Init();
    // public System.Void .ctor()
    // Offset: 0x11F8070
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerPlayersTableView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerPlayersTableView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerPlayersTableView*, creationType>()));
    }
  }; // GameServerPlayersTableView
  #pragma pack(pop)
  static check_size<sizeof(GameServerPlayersTableView), 136 + sizeof(GlobalNamespace::ILobbyPlayersDataModel*)> __GlobalNamespace_GameServerPlayersTableViewSizeCheck;
  static_assert(sizeof(GameServerPlayersTableView) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::get_currentCellId
// Il2CppName: get_currentCellId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::GameServerPlayersTableView::*)()>(&GlobalNamespace::GameServerPlayersTableView::get_currentCellId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "get_currentCellId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedLevelEvent
// Il2CppName: add_selectSuggestedLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>*)>(&GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "add_selectSuggestedLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedLevelEvent
// Il2CppName: remove_selectSuggestedLevelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(System::Action_3<::Il2CppString*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty>*)>(&GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedLevelEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO"), ::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "remove_selectSuggestedLevelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedGameplayModifiersEvent
// Il2CppName: add_selectSuggestedGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(System::Action_1<GlobalNamespace::GameplayModifiers*>*)>(&GlobalNamespace::GameServerPlayersTableView::add_selectSuggestedGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifiers")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "add_selectSuggestedGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedGameplayModifiersEvent
// Il2CppName: remove_selectSuggestedGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(System::Action_1<GlobalNamespace::GameplayModifiers*>*)>(&GlobalNamespace::GameServerPlayersTableView::remove_selectSuggestedGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "GameplayModifiers")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "remove_selectSuggestedGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::add_kickPlayerEvent
// Il2CppName: add_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::GameServerPlayersTableView::add_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "add_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::remove_kickPlayerEvent
// Il2CppName: remove_kickPlayerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(System::Action_1<::Il2CppString*>*)>(&GlobalNamespace::GameServerPlayersTableView::remove_kickPlayerEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "remove_kickPlayerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::CellSize
// Il2CppName: CellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameServerPlayersTableView::*)()>(&GlobalNamespace::GameServerPlayersTableView::CellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "CellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameServerPlayersTableView::*)()>(&GlobalNamespace::GameServerPlayersTableView::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::GetCurrentPrefab
// Il2CppName: GetCurrentPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameServerPlayerTableCell* (GlobalNamespace::GameServerPlayersTableView::*)()>(&GlobalNamespace::GameServerPlayersTableView::GetCurrentPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "GetCurrentPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::CellForIdx
// Il2CppName: CellForIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableCell* (GlobalNamespace::GameServerPlayersTableView::*)(HMUI::TableView*, int)>(&GlobalNamespace::GameServerPlayersTableView::CellForIdx)> {
  static const MethodInfo* get() {
    static auto* tableView = &::il2cpp_utils::GetClassFromName("HMUI", "TableView")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "CellForIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tableView, idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::TryGetLobbyPlayerData
// Il2CppName: TryGetLobbyPlayerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameServerPlayersTableView::*)(int, ByRef<GlobalNamespace::IConnectedPlayer*>, ByRef<GlobalNamespace::ILobbyPlayerData*>)>(&GlobalNamespace::GameServerPlayersTableView::TryGetLobbyPlayerData)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* player = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->this_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "TryGetLobbyPlayerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, player, playerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::HandleCellUseBeatmap
// Il2CppName: HandleCellUseBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(int)>(&GlobalNamespace::GameServerPlayersTableView::HandleCellUseBeatmap)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "HandleCellUseBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::HandleCellUseModifiers
// Il2CppName: HandleCellUseModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(int)>(&GlobalNamespace::GameServerPlayersTableView::HandleCellUseModifiers)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "HandleCellUseModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::HandleCellKickPlayer
// Il2CppName: HandleCellKickPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(int)>(&GlobalNamespace::GameServerPlayersTableView::HandleCellKickPlayer)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "HandleCellKickPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*, GlobalNamespace::ILobbyPlayersDataModel*, bool, bool, bool, bool, bool)>(&GlobalNamespace::GameServerPlayersTableView::SetData)> {
  static const MethodInfo* get() {
    static auto* sortedPlayers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    static auto* lobbyPlayersDataModel = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayersDataModel")->byval_arg;
    static auto* hasKickPermissions = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* allowSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* showSongSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* showModifierSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* clearSelection = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sortedPlayers, lobbyPlayersDataModel, hasKickPermissions, allowSelection, showSongSelection, showModifierSelection, clearSelection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerPlayersTableView::*)()>(&GlobalNamespace::GameServerPlayersTableView::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerPlayersTableView*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerPlayersTableView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
