// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.ConnectToServerResponse
  class ConnectToServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse, public MasterServer::IUserServerToClientMessage {
    public:
    // Nested type: MasterServer::ConnectToServerResponse::Result
    struct Result;
    // Autogenerated type: MasterServer.ConnectToServerResponse/Result
    struct Result : public System::Enum {
      public:
      // public System.Byte value__
      // Offset: 0x0
      uint8_t value;
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.ConnectToServerResponse/Result Success
      static constexpr const uint8_t Success = 0u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result Success
      static MasterServer::ConnectToServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result Success
      static void _set_Success(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result InvalidSecret
      static constexpr const uint8_t InvalidSecret = 1u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result InvalidSecret
      static MasterServer::ConnectToServerResponse::Result _get_InvalidSecret();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result InvalidSecret
      static void _set_InvalidSecret(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result InvalidCode
      static constexpr const uint8_t InvalidCode = 2u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result InvalidCode
      static MasterServer::ConnectToServerResponse::Result _get_InvalidCode();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result InvalidCode
      static void _set_InvalidCode(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result InvalidPassword
      static constexpr const uint8_t InvalidPassword = 3u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result InvalidPassword
      static MasterServer::ConnectToServerResponse::Result _get_InvalidPassword();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result InvalidPassword
      static void _set_InvalidPassword(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result ServerAtCapacity
      static constexpr const uint8_t ServerAtCapacity = 4u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result ServerAtCapacity
      static MasterServer::ConnectToServerResponse::Result _get_ServerAtCapacity();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result ServerAtCapacity
      static void _set_ServerAtCapacity(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result NoAvailableDedicatedServers
      static constexpr const uint8_t NoAvailableDedicatedServers = 5u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result NoAvailableDedicatedServers
      static MasterServer::ConnectToServerResponse::Result _get_NoAvailableDedicatedServers();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result NoAvailableDedicatedServers
      static void _set_NoAvailableDedicatedServers(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result VersionMismatch
      static constexpr const uint8_t VersionMismatch = 6u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result VersionMismatch
      static MasterServer::ConnectToServerResponse::Result _get_VersionMismatch();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result VersionMismatch
      static void _set_VersionMismatch(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result ConfigMismatch
      static constexpr const uint8_t ConfigMismatch = 7u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result ConfigMismatch
      static MasterServer::ConnectToServerResponse::Result _get_ConfigMismatch();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result ConfigMismatch
      static void _set_ConfigMismatch(MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/Result UnknownError
      static constexpr const uint8_t UnknownError = 8u;
      // Get static field: static public MasterServer.ConnectToServerResponse/Result UnknownError
      static MasterServer::ConnectToServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.ConnectToServerResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::ConnectToServerResponse::Result value);
    }; // MasterServer.ConnectToServerResponse/Result
    // public MasterServer.ConnectToServerResponse/Result result
    // Offset: 0x18
    MasterServer::ConnectToServerResponse::Result result;
    // public System.String userId
    // Offset: 0x20
    ::Il2CppString* userId;
    // public System.String userName
    // Offset: 0x28
    ::Il2CppString* userName;
    // public System.String secret
    // Offset: 0x30
    ::Il2CppString* secret;
    // public DiscoveryPolicy discoveryPolicy
    // Offset: 0x38
    GlobalNamespace::DiscoveryPolicy discoveryPolicy;
    // public InvitePolicy invitePolicy
    // Offset: 0x3C
    GlobalNamespace::InvitePolicy invitePolicy;
    // public System.Int32 maxPlayerCount
    // Offset: 0x40
    int maxPlayerCount;
    // public GameplayServerConfiguration configuration
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // public System.Boolean isConnectionOwner
    // Offset: 0x60
    bool isConnectionOwner;
    // public System.Boolean isDedicatedServer
    // Offset: 0x61
    bool isDedicatedServer;
    // public System.Net.IPEndPoint remoteEndPoint
    // Offset: 0x68
    System::Net::IPEndPoint* remoteEndPoint;
    // public readonly ByteArrayNetSerializable random
    // Offset: 0x70
    GlobalNamespace::ByteArrayNetSerializable* random;
    // public readonly ByteArrayNetSerializable publicKey
    // Offset: 0x78
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // static public PacketPool`1<MasterServer.ConnectToServerResponse> get_pool()
    // Offset: 0x211E3A0
    static GlobalNamespace::PacketPool_1<MasterServer::ConnectToServerResponse*>* get_pool();
    // public MasterServer.ConnectToServerResponse InitForFailure(MasterServer.ConnectToServerResponse/Result result)
    // Offset: 0x211E480
    MasterServer::ConnectToServerResponse* InitForFailure(MasterServer::ConnectToServerResponse::Result result);
    // public MasterServer.ConnectToServerResponse InitForSuccess(System.String userId, System.String userName, System.String secret, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x211E518
    MasterServer::ConnectToServerResponse* InitForSuccess(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration, bool isConnectionOwner, bool isDedicatedServer, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // public override System.Byte get_resultCode()
    // Offset: 0x211E3E8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x211E3F0
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x211E610
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x211E72C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x211E890
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x211E90C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConnectToServerResponse* New_ctor();
  }; // MasterServer.ConnectToServerResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToServerResponse*, "MasterServer", "ConnectToServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToServerResponse::Result, "MasterServer", "ConnectToServerResponse/Result");
#pragma pack(pop)
