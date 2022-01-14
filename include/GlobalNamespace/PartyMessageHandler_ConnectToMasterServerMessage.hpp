// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PartyMessageHandler
#include "GlobalNamespace/PartyMessageHandler.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*, "", "PartyMessageHandler/ConnectToMasterServerMessage");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler/ConnectToMasterServerMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class PartyMessageHandler::ConnectToMasterServerMessage : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IPoolablePacket*/ {
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
    // public System.String secret
    // Size: 0x8
    // Offset: 0x10
    ::StringW secret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IPoolablePacket
    operator GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return secret;
    }
    // Get instance field reference: public System.String secret
    ::StringW& dyn_secret();
    // static public PacketPool`1<PartyMessageHandler/ConnectToMasterServerMessage> get_pool()
    // Offset: 0x180D024
    static GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*>* get_pool();
    // public PartyMessageHandler/ConnectToMasterServerMessage Init(System.String secret)
    // Offset: 0x180D268
    GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* Init(::StringW secret);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x180D6E0
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x180D704
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x180D644
    void Release();
    // public System.Void .ctor()
    // Offset: 0x180D738
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler::ConnectToMasterServerMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler::ConnectToMasterServerMessage*, creationType>()));
    }
  }; // PartyMessageHandler/ConnectToMasterServerMessage
  #pragma pack(pop)
  static check_size<sizeof(PartyMessageHandler::ConnectToMasterServerMessage), 16 + sizeof(::StringW)> __GlobalNamespace_PartyMessageHandler_ConnectToMasterServerMessageSizeCheck;
  static_assert(sizeof(PartyMessageHandler::ConnectToMasterServerMessage) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*>* (*)()>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::*)(::StringW)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Init)> {
  static const MethodInfo* get() {
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secret});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::*)()>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
