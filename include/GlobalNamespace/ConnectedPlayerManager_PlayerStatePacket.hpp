// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: PlayerStateHash
#include "GlobalNamespace/PlayerStateHash.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/PlayerStatePacket
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayerManager::PlayerStatePacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public PlayerStateHash playerState
    // Size: 0x10
    // Offset: 0x10
    GlobalNamespace::PlayerStateHash playerState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerStateHash) == 0x10);
    public:
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::PlayerStateHash
    constexpr operator GlobalNamespace::PlayerStateHash() const noexcept {
      return playerState;
    }
    // Get instance field reference: public PlayerStateHash playerState
    GlobalNamespace::PlayerStateHash& dyn_playerState();
    // static public PacketPool`1<ConnectedPlayerManager/PlayerStatePacket> get_pool()
    // Offset: 0x14510D8
    static GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x14543C4
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x14543D0
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x14543FC
    void Release();
    // public ConnectedPlayerManager/PlayerStatePacket Init(PlayerStateHash states)
    // Offset: 0x1453DD0
    GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket* Init(GlobalNamespace::PlayerStateHash states);
    // public System.Void .ctor()
    // Offset: 0x1454458
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::PlayerStatePacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::PlayerStatePacket*, creationType>()));
    }
  }; // ConnectedPlayerManager/PlayerStatePacket
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::PlayerStatePacket), 16 + sizeof(GlobalNamespace::PlayerStateHash)> __GlobalNamespace_ConnectedPlayerManager_PlayerStatePacketSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::PlayerStatePacket) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*, "", "ConnectedPlayerManager/PlayerStatePacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*>* (*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket* (GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::*)(GlobalNamespace::PlayerStateHash)>(&GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::Init)> {
  static const MethodInfo* get() {
    static auto* states = &::il2cpp_utils::GetClassFromName("", "PlayerStateHash")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{states});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerStatePacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
