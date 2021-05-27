// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager;
  // Forward declaring type: NodePoseSyncStateManager
  class NodePoseSyncStateManager;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: NetworkPacketSerializer`2<TType, TData>
  template<typename TType, typename TData>
  class NetworkPacketSerializer_2;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MockedPlayerMultiplayerSessionManager
  class MockedPlayerMultiplayerSessionManager : public ::Il2CppObject/*, public GlobalNamespace::IMultiplayerSessionManager*/ {
    public:
    // private readonly System.Collections.Generic.List`1<MockPlayer> _connectedPlayers
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* connectedPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>*) == 0x8);
    // private MockPlayer _dedicatedServer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockPlayer* dedicatedServer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // private readonly MockMultiplayerSessionManager _mockMultiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // private readonly NodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NodePoseSyncStateManager*) == 0x8);
    // private readonly MockPlayer _player
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MockPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockPlayer*) == 0x8);
    // private readonly AvatarPartsModel _avatarPartsModel
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AvatarPartsModel* avatarPartsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartsModel*) == 0x8);
    // private readonly BeatmapLevelsModel _beatmapLevelsModel
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelsModel*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _writer
    // Size: 0x8
    // Offset: 0x48
    LiteNetLib::Utils::NetDataWriter* writer;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataReader _reader
    // Size: 0x8
    // Offset: 0x50
    LiteNetLib::Utils::NetDataReader* reader;
    // Field size check
    static_assert(sizeof(LiteNetLib::Utils::NetDataReader*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DAE8
    // private System.Action connectedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* connectedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DAF8
    // private System.Action`1<ConnectionFailedReason> connectionFailedEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DB08
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DB18
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DB28
    // private System.Action`1<IConnectedPlayer> playerAvatarChangedEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerAvatarChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DB38
    // private System.Action`1<IConnectedPlayer> playerStateChangedEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1DB48
    // private System.Action`1<DisconnectedReason> disconnectedEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::DisconnectedReason>*) == 0x8);
    // private NetworkPacketSerializer`2<MultiplayerSessionManager/MessageType,IConnectedPlayer> _serializer
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>* serializer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>*) == 0x8);
    // Creating value type constructor for type: MockedPlayerMultiplayerSessionManager
    MockedPlayerMultiplayerSessionManager(System::Collections::Generic::List_1<GlobalNamespace::MockPlayer*>* connectedPlayers_ = {}, GlobalNamespace::MockPlayer* dedicatedServer_ = {}, GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager_ = {}, GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager_ = {}, GlobalNamespace::MockPlayer* player_ = {}, GlobalNamespace::AvatarPartsModel* avatarPartsModel_ = {}, GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel_ = {}, LiteNetLib::Utils::NetDataWriter* writer_ = {}, LiteNetLib::Utils::NetDataReader* reader_ = {}, System::Action* connectedEvent_ = {}, System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerAvatarChangedEvent_ = {}, System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent_ = {}, System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent_ = {}, GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>* serializer_ = {}) noexcept : connectedPlayers{connectedPlayers_}, dedicatedServer{dedicatedServer_}, mockMultiplayerSessionManager{mockMultiplayerSessionManager_}, nodePoseSyncStateManager{nodePoseSyncStateManager_}, player{player_}, avatarPartsModel{avatarPartsModel_}, beatmapLevelsModel{beatmapLevelsModel_}, writer{writer_}, reader{reader_}, connectedEvent{connectedEvent_}, connectionFailedEvent{connectionFailedEvent_}, playerConnectedEvent{playerConnectedEvent_}, playerDisconnectedEvent{playerDisconnectedEvent_}, playerAvatarChangedEvent{playerAvatarChangedEvent_}, playerStateChangedEvent{playerStateChangedEvent_}, disconnectedEvent{disconnectedEvent_}, serializer{serializer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSessionManager
    operator GlobalNamespace::IMultiplayerSessionManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSessionManager*>(this);
    }
    // public System.Void .ctor(MockMultiplayerSessionManager mockMultiplayerSessionManager, NodePoseSyncStateManager nodePoseSyncStateManager, MockPlayer player, AvatarPartsModel avatarPartsModel, BeatmapLevelsModel beatmapLevelsModel)
    // Offset: 0x113D0F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockedPlayerMultiplayerSessionManager* New_ctor(GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager, GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager, GlobalNamespace::MockPlayer* player, GlobalNamespace::AvatarPartsModel* avatarPartsModel, GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockedPlayerMultiplayerSessionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockedPlayerMultiplayerSessionManager*, creationType>(mockMultiplayerSessionManager, nodePoseSyncStateManager, player, avatarPartsModel, beatmapLevelsModel)));
    }
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x113D204
    GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public IConnectedPlayer get_connectionOwner()
    // Offset: 0x113D20C
    GlobalNamespace::IConnectedPlayer* get_connectionOwner();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x113D228
    bool get_isConnectionOwner();
    // public System.Single get_syncTime()
    // Offset: 0x113D244
    float get_syncTime();
    // public System.Boolean get_isSyncTimeInitialized()
    // Offset: 0x113D260
    bool get_isSyncTimeInitialized();
    // public System.Single get_syncTimeDelay()
    // Offset: 0x113D27C
    float get_syncTimeDelay();
    // public System.Int32 get_maxPlayerCount()
    // Offset: 0x113D284
    int get_maxPlayerCount();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x113D2A0
    int get_connectedPlayerCount();
    // public System.Boolean get_isConnectingOrConnected()
    // Offset: 0x113D2F0
    bool get_isConnectingOrConnected();
    // public System.Boolean get_isConnecting()
    // Offset: 0x113D30C
    bool get_isConnecting();
    // public System.Boolean get_isConnected()
    // Offset: 0x113D314
    bool get_isConnected();
    // public System.Boolean get_isDisconnecting()
    // Offset: 0x113D330
    bool get_isDisconnecting();
    // public System.Boolean get_isSpectating()
    // Offset: 0x113D338
    bool get_isSpectating();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x113D340
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Void add_connectedEvent(System.Action value)
    // Offset: 0x113D348
    void add_connectedEvent(System::Action* value);
    // public System.Void remove_connectedEvent(System.Action value)
    // Offset: 0x113D3EC
    void remove_connectedEvent(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x113D490
    void add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x113D534
    void remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113D5D8
    void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113D67C
    void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113D720
    void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113D7C4
    void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerAvatarChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113D868
    void add_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerAvatarChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113D90C
    void remove_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113D9B0
    void add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x113DA54
    void remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x113DAF8
    void add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x113DB9C
    void remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void SetMaxPlayerCount(System.Int32 maxPlayerCount)
    // Offset: 0x113DC40
    void SetMaxPlayerCount(int maxPlayerCount);
    // public System.Void StartSession(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x113DC44
    void StartSession(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);
    // public System.Void EndSession()
    // Offset: 0x113DC48
    void EndSession();
    // public IConnectedPlayer GetPlayerByUserId(System.String userId)
    // Offset: 0x113DC4C
    GlobalNamespace::IConnectedPlayer* GetPlayerByUserId(::Il2CppString* userId);
    // public IConnectedPlayer GetConnectedPlayer(System.Int32 index)
    // Offset: 0x113DC68
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int index);
    // public IConnectedPlayer GetConnectedPlayerByUserId(System.String userId)
    // Offset: 0x113DCE0
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayerByUserId(::Il2CppString* userId);
    // public System.Void HandlePlayerStateChanged(MockPlayer player)
    // Offset: 0x113DCFC
    void HandlePlayerStateChanged(GlobalNamespace::MockPlayer* player);
    // public System.Void HandlePlayerConnected(MockPlayer connectedPlayer)
    // Offset: 0x113DDDC
    void HandlePlayerConnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void HandlePlayerDisconnected(MockPlayer connectedPlayer)
    // Offset: 0x113DEC0
    void HandlePlayerDisconnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // public System.Void Connect()
    // Offset: 0x113DF80
    void Connect();
    // public System.Void Disconnect()
    // Offset: 0x113E14C
    void Disconnect();
    // public System.Void Send(T message)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Send(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockedPlayerMultiplayerSessionManager::Send");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Send", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void SendUnreliable(T message)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SendUnreliable(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockedPlayerMultiplayerSessionManager::SendUnreliable");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SendUnreliable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, message);
    }
    // public System.Void RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    template<class T>
    void RegisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, System::Action_2<T, GlobalNamespace::IConnectedPlayer*>* callback, System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockedPlayerMultiplayerSessionManager::RegisterCallback");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RegisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(serializerType), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(constructor)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType, callback, constructor);
    }
    // public System.Void UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    // Offset: 0xFFFFFFFF
    template<class T>
    void UnregisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockedPlayerMultiplayerSessionManager::UnregisterCallback");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UnregisterCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(serializerType)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, serializerType);
    }
    // public System.Void ReceiveMessage(MockPlayer player, System.Byte[] data, System.Int32 length)
    // Offset: 0x113E248
    void ReceiveMessage(GlobalNamespace::MockPlayer* player, ::Array<uint8_t>* data, int length);
    // public System.Void SetLocalPlayerState(System.String state, System.Boolean hasState)
    // Offset: 0x113E0B0
    void SetLocalPlayerState(::Il2CppString* state, bool hasState);
    // public System.Void SetLocalPlayerAvatar(MultiplayerAvatarData multiplayerAvatarData)
    // Offset: 0x113E304
    void SetLocalPlayerAvatar(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData);
    // public System.Boolean LocalPlayerHasState(System.String state)
    // Offset: 0x113E368
    bool LocalPlayerHasState(::Il2CppString* state);
    // public System.Void RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x113E380
    void RegisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x113E3F0
    void UnregisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void PerformAtSyncTime(System.Single syncTime, System.Action action)
    // Offset: 0x113E460
    void PerformAtSyncTime(float syncTime, System::Action* action);
  }; // MockedPlayerMultiplayerSessionManager
  #pragma pack(pop)
  static check_size<sizeof(MockedPlayerMultiplayerSessionManager), 144 + sizeof(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::MultiplayerSessionManager_MessageType, GlobalNamespace::IConnectedPlayer*>*)> __GlobalNamespace_MockedPlayerMultiplayerSessionManagerSizeCheck;
  static_assert(sizeof(MockedPlayerMultiplayerSessionManager) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockedPlayerMultiplayerSessionManager*, "", "MockedPlayerMultiplayerSessionManager");