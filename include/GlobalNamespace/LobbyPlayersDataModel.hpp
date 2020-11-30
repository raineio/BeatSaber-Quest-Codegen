// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyPlayersDataModel
#include "GlobalNamespace/ILobbyPlayersDataModel.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LobbyPlayersDataModel
  class LobbyPlayersDataModel : public ::Il2CppObject/*, public GlobalNamespace::ILobbyPlayersDataModel, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::LobbyPlayersDataModel::$$c
    class $$c;
    // Nested type: GlobalNamespace::LobbyPlayersDataModel::$SetOwnedSongPacks$d__42
    struct $SetOwnedSongPacks$d__42;
    // private readonly IMenuRpcManager _menuRpcManager
    // Offset: 0x10
    GlobalNamespace::IMenuRpcManager* menuRpcManager;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // private readonly BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // private readonly AdditionalContentModel _additionalContentModel
    // Offset: 0x30
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // private readonly System.Collections.Generic.Dictionary`2<System.String,ILobbyPlayerDataModel> _playersData
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>* playersData;
    // private readonly System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0x40
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private System.Action`1<System.String> didChangeEvent
    // Offset: 0x48
    System::Action_1<::Il2CppString*>* didChangeEvent;
    // Creating interface conversion operator: operator GlobalNamespace::ILobbyPlayersDataModel
    operator GlobalNamespace::ILobbyPlayersDataModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILobbyPlayersDataModel*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // private ILobbyPlayerDataModel GetOrCreateLobbyPlayerDataModel(System.String userId, out System.Boolean alreadyExists)
    // Offset: 0x1ACE0D0
    GlobalNamespace::ILobbyPlayerDataModel* GetOrCreateLobbyPlayerDataModel(::Il2CppString* userId, bool& alreadyExists);
    // private System.Void SetPlayerBeatmapLevel(System.String userId, IPreviewBeatmapLevel beatmapLevel, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO characteristic)
    // Offset: 0x1ACE1A4
    void SetPlayerBeatmapLevel(::Il2CppString* userId, GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* characteristic);
    // private System.Void SetPlayerGameplayModifiers(System.String userId, GameplayModifiers modifiers)
    // Offset: 0x1ACE574
    void SetPlayerGameplayModifiers(::Il2CppString* userId, GlobalNamespace::GameplayModifiers* modifiers);
    // private System.Void SetPlayerIsActive(System.String userId, System.Boolean isActive)
    // Offset: 0x1ACE6E8
    void SetPlayerIsActive(::Il2CppString* userId, bool isActive);
    // private System.Void SetPlayerIsReady(System.String userId, System.Boolean isReady)
    // Offset: 0x1ACE858
    void SetPlayerIsReady(::Il2CppString* userId, bool isReady);
    // private System.Void SetPlayerIsInLobby(System.String userId, System.Boolean isInLobby)
    // Offset: 0x1ACE9CC
    void SetPlayerIsInLobby(::Il2CppString* userId, bool isInLobby);
    // private System.Void SetOwnedSongPacks()
    // Offset: 0x1AD036C
    void SetOwnedSongPacks();
    // private System.Void HandleMenuRpcManagerGetSelectedBeatmap(System.String userId)
    // Offset: 0x1AD0D2C
    void HandleMenuRpcManagerGetSelectedBeatmap(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerGetSelectedGameplayModifiers(System.String userId)
    // Offset: 0x1AD1064
    void HandleMenuRpcManagerGetSelectedGameplayModifiers(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerGetIsInLobby(System.String userId)
    // Offset: 0x1AD1228
    void HandleMenuRpcManagerGetIsInLobby(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerGetIsReady(System.String userId)
    // Offset: 0x1AD12F8
    void HandleMenuRpcManagerGetIsReady(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSelectedBeatmap(System.String userId, BeatmapIdentifierNetSerializable beatmapId)
    // Offset: 0x1AD13C8
    void HandleMenuRpcManagerSelectedBeatmap(::Il2CppString* userId, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId);
    // private System.Void HandleMenuRpcManagerSelectedGameplayModifiers(System.String userId, GameplayModifiers gameplayModifiers)
    // Offset: 0x1AD149C
    void HandleMenuRpcManagerSelectedGameplayModifiers(::Il2CppString* userId, GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // private System.Void HandleMenuRpcManagerClearSelectedGameplayModifiers(System.String userId)
    // Offset: 0x1AD14A0
    void HandleMenuRpcManagerClearSelectedGameplayModifiers(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerClearBeatmap(System.String userId)
    // Offset: 0x1AD1514
    void HandleMenuRpcManagerClearBeatmap(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerSetIsReady(System.String userId, System.Boolean isReady)
    // Offset: 0x1AD1524
    void HandleMenuRpcManagerSetIsReady(::Il2CppString* userId, bool isReady);
    // private System.Void HandleMenuRpcManagerSetIsInLobby(System.String userId, System.Boolean isInLobby)
    // Offset: 0x1AD152C
    void HandleMenuRpcManagerSetIsInLobby(::Il2CppString* userId, bool isInLobby);
    // private System.Void HandleMultiplayerSessionManagerPlayerStateChanged(IConnectedPlayer connectedPlayer)
    // Offset: 0x1AD1534
    void HandleMultiplayerSessionManagerPlayerStateChanged(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandleMultiplayerSessionManagerPlayerConnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x1AD1610
    void HandleMultiplayerSessionManagerPlayerConnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void HandleMultiplayerSessionManagerPlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x1AD17F4
    void HandleMultiplayerSessionManagerPlayerDisconnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // private System.Void NotifyModelChange(System.String userId)
    // Offset: 0x1ACE500
    void NotifyModelChange(::Il2CppString* userId);
    // private System.Void HandleMenuRpcManagerGetOwnedSongPacks(System.String userId)
    // Offset: 0x1AD18D0
    void HandleMenuRpcManagerGetOwnedSongPacks(::Il2CppString* userId);
    // public System.String get_localUserId()
    // Offset: 0x1ACD5B4
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.String ILobbyPlayersDataModel::get_localUserId()
    ::Il2CppString* get_localUserId();
    // public System.String get_hostUserId()
    // Offset: 0x1ACD6F0
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.String ILobbyPlayersDataModel::get_hostUserId()
    ::Il2CppString* get_hostUserId();
    // public System.Void add_didChangeEvent(System.Action`1<System.String> value)
    // Offset: 0x1ACD830
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::add_didChangeEvent(System.Action`1<System.String> value)
    void add_didChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_didChangeEvent(System.Action`1<System.String> value)
    // Offset: 0x1ACD8D4
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::remove_didChangeEvent(System.Action`1<System.String> value)
    void remove_didChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Collections.Generic.IReadOnlyDictionary`2<System.String,ILobbyPlayerDataModel> get_playersData()
    // Offset: 0x1ACD978
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Collections.Generic.IReadOnlyDictionary`2<System.String,ILobbyPlayerDataModel> ILobbyPlayersDataModel::get_playersData()
    System::Collections::Generic::IReadOnlyDictionary_2<::Il2CppString*, GlobalNamespace::ILobbyPlayerDataModel*>* get_playersData();
    // public ILobbyPlayerDataModel GetLobbyPlayerDataModel(System.String userId)
    // Offset: 0x1ACD980
    // Implemented from: ILobbyPlayersDataModel
    // Base method: ILobbyPlayerDataModel ILobbyPlayersDataModel::GetLobbyPlayerDataModel(System.String userId)
    GlobalNamespace::ILobbyPlayerDataModel* GetLobbyPlayerDataModel(::Il2CppString* userId);
    // public IPreviewBeatmapLevel GetPlayerBeatmapLevel(System.String userId)
    // Offset: 0x1ACDA00
    // Implemented from: ILobbyPlayersDataModel
    // Base method: IPreviewBeatmapLevel ILobbyPlayersDataModel::GetPlayerBeatmapLevel(System.String userId)
    GlobalNamespace::IPreviewBeatmapLevel* GetPlayerBeatmapLevel(::Il2CppString* userId);
    // public GameplayModifiers GetPlayerGameplayModifiers(System.String userId)
    // Offset: 0x1ACDAF0
    // Implemented from: ILobbyPlayersDataModel
    // Base method: GameplayModifiers ILobbyPlayersDataModel::GetPlayerGameplayModifiers(System.String userId)
    GlobalNamespace::GameplayModifiers* GetPlayerGameplayModifiers(::Il2CppString* userId);
    // public BeatmapDifficulty GetPlayerBeatmapDifficulty(System.String userId)
    // Offset: 0x1ACDC04
    // Implemented from: ILobbyPlayersDataModel
    // Base method: BeatmapDifficulty ILobbyPlayersDataModel::GetPlayerBeatmapDifficulty(System.String userId)
    GlobalNamespace::BeatmapDifficulty GetPlayerBeatmapDifficulty(::Il2CppString* userId);
    // public BeatmapCharacteristicSO GetPlayerBeatmapCharacteristic(System.String userId)
    // Offset: 0x1ACDCF8
    // Implemented from: ILobbyPlayersDataModel
    // Base method: BeatmapCharacteristicSO ILobbyPlayersDataModel::GetPlayerBeatmapCharacteristic(System.String userId)
    GlobalNamespace::BeatmapCharacteristicSO* GetPlayerBeatmapCharacteristic(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsActive(System.String userId)
    // Offset: 0x1ACDDEC
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Boolean ILobbyPlayersDataModel::GetPlayerIsActive(System.String userId)
    bool GetPlayerIsActive(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsReady(System.String userId)
    // Offset: 0x1ACDEE0
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Boolean ILobbyPlayersDataModel::GetPlayerIsReady(System.String userId)
    bool GetPlayerIsReady(::Il2CppString* userId);
    // public System.Boolean GetPlayerIsInLobby(System.String userId)
    // Offset: 0x1ACDFD8
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Boolean ILobbyPlayersDataModel::GetPlayerIsInLobby(System.String userId)
    bool GetPlayerIsInLobby(::Il2CppString* userId);
    // public System.Void SetLocalPlayerBeatmapLevel(System.String levelId, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO characteristic)
    // Offset: 0x1ACEB40
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::SetLocalPlayerBeatmapLevel(System.String levelId, BeatmapDifficulty beatmapDifficulty, BeatmapCharacteristicSO characteristic)
    void SetLocalPlayerBeatmapLevel(::Il2CppString* levelId, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* characteristic);
    // public System.Void ClearLocalPlayerBeatmapLevel()
    // Offset: 0x1ACEC84
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::ClearLocalPlayerBeatmapLevel()
    void ClearLocalPlayerBeatmapLevel();
    // public System.Void SetLocalPlayerGameplayModifiers(GameplayModifiers modifiers)
    // Offset: 0x1ACED58
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::SetLocalPlayerGameplayModifiers(GameplayModifiers modifiers)
    void SetLocalPlayerGameplayModifiers(GlobalNamespace::GameplayModifiers* modifiers);
    // public System.Void ClearLocalPlayerGameplayModifiers()
    // Offset: 0x1ACEE34
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::ClearLocalPlayerGameplayModifiers()
    void ClearLocalPlayerGameplayModifiers();
    // public System.Void SetLocalPlayerIsActive(System.Boolean isActive)
    // Offset: 0x1ACEF1C
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::SetLocalPlayerIsActive(System.Boolean isActive)
    void SetLocalPlayerIsActive(bool isActive);
    // public System.Void SetLocalPlayerIsReady(System.Boolean isReady)
    // Offset: 0x1ACF00C
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::SetLocalPlayerIsReady(System.Boolean isReady)
    void SetLocalPlayerIsReady(bool isReady);
    // public System.Void SetLocalPlayerIsInLobby(System.Boolean isInLobby)
    // Offset: 0x1ACF0EC
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::SetLocalPlayerIsInLobby(System.Boolean isInLobby)
    void SetLocalPlayerIsInLobby(bool isInLobby);
    // public System.Void ClearData()
    // Offset: 0x1ACF1CC
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::ClearData()
    void ClearData();
    // public System.Void ClearRecommendations()
    // Offset: 0x1ACF248
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::ClearRecommendations()
    void ClearRecommendations();
    // public System.Void Activate()
    // Offset: 0x1ACF530
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::Activate()
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x1AD0440
    // Implemented from: ILobbyPlayersDataModel
    // Base method: System.Void ILobbyPlayersDataModel::Deactivate()
    void Deactivate();
    // public System.Void Dispose()
    // Offset: 0x1AD0D28
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x1AD18D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LobbyPlayersDataModel* New_ctor();
  }; // LobbyPlayersDataModel
  check_size<sizeof(LobbyPlayersDataModel), 72 + sizeof(void*) + 8 - (72 + sizeof(void*)) % 8> __GlobalNamespace_LobbyPlayersDataModelSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyPlayersDataModel*, "", "LobbyPlayersDataModel");
#pragma pack(pop)