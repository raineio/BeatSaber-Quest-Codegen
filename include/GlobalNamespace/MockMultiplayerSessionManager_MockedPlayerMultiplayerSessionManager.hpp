// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: NetworkPacketSerializer`2<TType, TData>
  template<typename TType, typename TData>
  class NetworkPacketSerializer_2;
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: INetworkPacketSubSerializer`1<TData>
  template<typename TData>
  class INetworkPacketSubSerializer_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager
  class MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager : public ::Il2CppObject, public GlobalNamespace::IMultiplayerSessionManager {
    public:
    // private MockMultiplayerSessionManager _mockMultiplayerSessionManager
    // Offset: 0x10
    GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager;
    // private MockPlayer _player
    // Offset: 0x18
    GlobalNamespace::MockPlayer* player;
    // private readonly LiteNetLib.Utils.NetDataWriter _writer
    // Offset: 0x20
    LiteNetLib::Utils::NetDataWriter* writer;
    // private readonly LiteNetLib.Utils.NetDataReader _reader
    // Offset: 0x28
    LiteNetLib::Utils::NetDataReader* reader;
    // private System.Action connectedEvent
    // Offset: 0x30
    System::Action* connectedEvent;
    // private System.Action`1<ConnectionFailedReason> connectionFailedEvent
    // Offset: 0x38
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Offset: 0x48
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // private System.Action`1<IConnectedPlayer> playerStateChangedEvent
    // Offset: 0x50
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;
    // private System.Action`1<DisconnectedReason> disconnectedEvent
    // Offset: 0x58
    System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent;
    // private NetworkPacketSerializer`2<MultiplayerSessionManager/MessageType,IConnectedPlayer> _serializer
    // Offset: 0x60
    GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>* serializer;
    // public System.Void .ctor(MockMultiplayerSessionManager mockMultiplayerSessionManager, MockPlayer player)
    // Offset: 0x2056E70
    static MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager* New_ctor(GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager, GlobalNamespace::MockPlayer* player);
    // public System.Void HandlePlayerStateChanged(MockPlayer player)
    // Offset: 0x20565DC
    void HandlePlayerStateChanged(GlobalNamespace::MockPlayer* player);
    // public System.Void HandlePlayerConnected(MockPlayer connectedPlayer)
    // Offset: 0x20566C0
    void HandlePlayerConnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void HandlePlayerDisconnected(MockPlayer connectedPlayer)
    // Offset: 0x2056760
    void HandlePlayerDisconnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void ReceiveMessage(MockPlayer player, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2057094
    void ReceiveMessage(GlobalNamespace::MockPlayer* player, LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void SetLocalPlayerAvatar(MultiplayerAvatarData multiplayerAvatarData)
    // Offset: 0x2057DD0
    void SetLocalPlayerAvatar(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData);
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x2057450
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::get_localPlayer()
    GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public IConnectedPlayer get_connectionOwner()
    // Offset: 0x2057458
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::get_connectionOwner()
    GlobalNamespace::IConnectedPlayer* get_connectionOwner();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x2057470
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Single get_syncTime()
    // Offset: 0x205748C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Single IMultiplayerSessionManager::get_syncTime()
    float get_syncTime();
    // public System.Boolean get_isSyncTimeInitialized()
    // Offset: 0x20574C0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isSyncTimeInitialized()
    bool get_isSyncTimeInitialized();
    // public System.Single get_syncTimeDelay()
    // Offset: 0x20574DC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Single IMultiplayerSessionManager::get_syncTimeDelay()
    float get_syncTimeDelay();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x20574E4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Int32 IMultiplayerSessionManager::get_connectedPlayerCount()
    int get_connectedPlayerCount();
    // public System.Boolean get_isConnectingOrConnected()
    // Offset: 0x20574FC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnectingOrConnected()
    bool get_isConnectingOrConnected();
    // public System.Boolean get_isConnecting()
    // Offset: 0x2057504
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnecting()
    bool get_isConnecting();
    // public System.Boolean get_isConnected()
    // Offset: 0x205750C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isSpectating()
    // Offset: 0x2057514
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isSpectating()
    bool get_isSpectating();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x205751C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> IMultiplayerSessionManager::get_connectedPlayers()
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Void add_connectedEvent(System.Action value)
    // Offset: 0x2057538
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_connectedEvent(System.Action value)
    void add_connectedEvent(System::Action* value);
    // public System.Void remove_connectedEvent(System.Action value)
    // Offset: 0x20575DC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_connectedEvent(System.Action value)
    void remove_connectedEvent(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x2057680
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x2057724
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x20577C8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x205786C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x2057910
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x20579B4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x2057A58
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x2057AFC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x2057BA0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    void add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x2057C44
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    void remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void SetMaxPlayerCount(System.Int32 maxPlayerCount)
    // Offset: 0x2057CE8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SetMaxPlayerCount(System.Int32 maxPlayerCount)
    void SetMaxPlayerCount(int maxPlayerCount);
    // public System.Void StartSession(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x2057CEC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::StartSession(ConnectedPlayerManager connectedPlayerManager)
    void StartSession(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);
    // public System.Void EndSession()
    // Offset: 0x2057CF0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::EndSession()
    void EndSession();
    // public IConnectedPlayer GetPlayerByUserId(System.String userId)
    // Offset: 0x2057CF4
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetPlayerByUserId(System.String userId)
    GlobalNamespace::IConnectedPlayer* GetPlayerByUserId(::Il2CppString* userId);
    // public IConnectedPlayer GetConnectedPlayer(System.Int32 index)
    // Offset: 0x2057D0C
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetConnectedPlayer(System.Int32 index)
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int index);
    // public IConnectedPlayer GetConnectedPlayerByUserId(System.String userId)
    // Offset: 0x2057D24
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetConnectedPlayerByUserId(System.String userId)
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayerByUserId(::Il2CppString* userId);
    // public System.Void Disconnect()
    // Offset: 0x2057D3C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::Disconnect()
    void Disconnect();
    // public System.Void Send(T message)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::Send(T message)
    template<class T>
    void Send(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Send", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, message));
    }
    // public System.Void SendUnreliable(T message)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SendUnreliable(T message)
    template<class T>
    void SendUnreliable(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SendUnreliable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, message));
    }
    // public System.Void RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    template<class T>
    void RegisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, System::Action_2<T, GlobalNamespace::IConnectedPlayer*>* callback, System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "RegisterCallback", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, serializerType, callback, constructor));
    }
    // public System.Void UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    template<class T>
    void UnregisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "UnregisterCallback", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, serializerType));
    }
    // public System.Void SetLocalPlayerState(System.String state, System.Boolean hasState)
    // Offset: 0x2056CE4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SetLocalPlayerState(System.String state, System.Boolean hasState)
    void SetLocalPlayerState(::Il2CppString* state, bool hasState);
    // public System.Boolean LocalPlayerHasState(System.String state)
    // Offset: 0x2056D98
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::LocalPlayerHasState(System.String state)
    bool LocalPlayerHasState(::Il2CppString* state);
    // public System.Void RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x20563B0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    void RegisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x2056438
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    void UnregisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void PerformAtSyncTime(System.Single syncTime, System.Action action)
    // Offset: 0x2057E3C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::PerformAtSyncTime(System.Single syncTime, System.Action action)
    void PerformAtSyncTime(float syncTime, System::Action* action);
  }; // MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager*, "", "MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager");
#pragma pack(pop)
