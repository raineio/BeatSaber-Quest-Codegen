// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: SessionKeepaliveMessage
  class SessionKeepaliveMessage;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::SessionKeepaliveMessage);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::SessionKeepaliveMessage*, "MasterServer", "SessionKeepaliveMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.SessionKeepaliveMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionKeepaliveMessage : public ::Il2CppObject/*, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IUserMessage*/ {
    public:
    // Creating interface conversion operator: operator MasterServer::IMasterServerUnreliableMessage
    operator MasterServer::IMasterServerUnreliableMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.SessionKeepaliveMessage> get_pool()
    // Offset: 0x14B5BF8
    static GlobalNamespace::PacketPool_1<MasterServer::SessionKeepaliveMessage*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x14BBFB0
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x14BBFB4
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x14B5CA0
    void Release();
    // public System.Void .ctor()
    // Offset: 0x14BBFB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionKeepaliveMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::SessionKeepaliveMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionKeepaliveMessage*, creationType>()));
    }
  }; // MasterServer.SessionKeepaliveMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::SessionKeepaliveMessage*>* (*)()>(&MasterServer::SessionKeepaliveMessage::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::SessionKeepaliveMessage*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::SessionKeepaliveMessage::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::SessionKeepaliveMessage::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::SessionKeepaliveMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::SessionKeepaliveMessage::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::SessionKeepaliveMessage::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::SessionKeepaliveMessage*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::SessionKeepaliveMessage::*)()>(&MasterServer::SessionKeepaliveMessage::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::SessionKeepaliveMessage*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::SessionKeepaliveMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
