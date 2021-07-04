// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyMessageHandler
#include "GlobalNamespace/PartyMessageHandler.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler/ServerStatusUpdateMessage
  class PartyMessageHandler::ServerStatusUpdateMessage : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
    public:
    // public System.String serverName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String password
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public DiscoveryPolicy discoveryPolicy
    // Size: 0x1
    // Offset: 0x20
    GlobalNamespace::DiscoveryPolicy discoveryPolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DiscoveryPolicy) == 0x1);
    // Padding between fields: discoveryPolicy and: invitePolicy
    char __padding2[0x3] = {};
    // public InvitePolicy invitePolicy
    // Size: 0x4
    // Offset: 0x24
    GlobalNamespace::InvitePolicy invitePolicy;
    // Field size check
    static_assert(sizeof(GlobalNamespace::InvitePolicy) == 0x4);
    // public System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x28
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxPlayerCount and: configuration
    char __padding4[0x4] = {};
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: ServerStatusUpdateMessage
    ServerStatusUpdateMessage(::Il2CppString* serverName_ = {}, ::Il2CppString* password_ = {}, GlobalNamespace::DiscoveryPolicy discoveryPolicy_ = {}, GlobalNamespace::InvitePolicy invitePolicy_ = {}, int maxPlayerCount_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : serverName{serverName_}, password{password_}, discoveryPolicy{discoveryPolicy_}, invitePolicy{invitePolicy_}, maxPlayerCount{maxPlayerCount_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // static public PacketPool`1<PartyMessageHandler/ServerStatusUpdateMessage> get_pool()
    // Offset: 0x150825C
    static GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*>* get_pool();
    // public PartyMessageHandler/ServerStatusUpdateMessage Init(System.String serverName, System.String password, DiscoveryPolicy discoveryPolicy, InvitePolicy invitePolicy, System.Int32 maxPlayerCount, GameplayServerConfiguration configuration)
    // Offset: 0x1508540
    GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* Init(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x150997C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1509A00
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x1508BF4
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1509AA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler::ServerStatusUpdateMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler::ServerStatusUpdateMessage*, creationType>()));
    }
  }; // PartyMessageHandler/ServerStatusUpdateMessage
  #pragma pack(pop)
  static check_size<sizeof(PartyMessageHandler::ServerStatusUpdateMessage), 48 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_PartyMessageHandler_ServerStatusUpdateMessageSizeCheck;
  static_assert(sizeof(PartyMessageHandler::ServerStatusUpdateMessage) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*, "", "PartyMessageHandler/ServerStatusUpdateMessage");
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*>* (*)()>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::get_pool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* (GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::*)(::Il2CppString*, ::Il2CppString*, GlobalNamespace::DiscoveryPolicy, GlobalNamespace::InvitePolicy, int, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::DiscoveryPolicy>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::InvitePolicy>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::GameplayServerConfiguration>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::*)()>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
