// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IHandshakeClientToServerMessage
#include "BGNet/Core/Messages/IHandshakeClientToServerMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: ClientKeyExchangeRequest
  class ClientKeyExchangeRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::ClientKeyExchangeRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientKeyExchangeRequest*, "BGNet.Core.Messages", "ClientKeyExchangeRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.ClientKeyExchangeRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientKeyExchangeRequest : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::BGNet::Core::Messages::IHandshakeClientToServerMessage*/ {
    public:
    public:
    // public readonly ByteArrayNetSerializable clientPublicKey
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ByteArrayNetSerializable* clientPublicKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage
    operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IHandshakeClientToServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IHandshakeClientToServerMessage
    inline ::BGNet::Core::Messages::IHandshakeClientToServerMessage* i_IHandshakeClientToServerMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IHandshakeClientToServerMessage*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::ByteArrayNetSerializable*
    constexpr operator ::GlobalNamespace::ByteArrayNetSerializable*() const noexcept {
      return clientPublicKey;
    }
    // Get instance field reference: public readonly ByteArrayNetSerializable clientPublicKey
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_clientPublicKey();
    // static public PacketPool`1<BGNet.Core.Messages.ClientKeyExchangeRequest> get_pool()
    // Offset: 0x15E80E8
    static ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>* get_pool();
    // public BGNet.Core.Messages.ClientKeyExchangeRequest Init(System.Byte[] clientPublicKey)
    // Offset: 0x15EA8B0
    ::BGNet::Core::Messages::ClientKeyExchangeRequest* Init(::ArrayW<uint8_t> clientPublicKey);
    // public System.Void .ctor()
    // Offset: 0x15F0510
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientKeyExchangeRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::ClientKeyExchangeRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientKeyExchangeRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x15F0440
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x15F0474
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x15F04A8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // BGNet.Core.Messages.ClientKeyExchangeRequest
  #pragma pack(pop)
  static check_size<sizeof(ClientKeyExchangeRequest), 24 + sizeof(::GlobalNamespace::ByteArrayNetSerializable*)> __BGNet_Core_Messages_ClientKeyExchangeRequestSizeCheck;
  static_assert(sizeof(ClientKeyExchangeRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientKeyExchangeRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>* (*)()>(&BGNet::Core::Messages::ClientKeyExchangeRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientKeyExchangeRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientKeyExchangeRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ClientKeyExchangeRequest* (BGNet::Core::Messages::ClientKeyExchangeRequest::*)(::ArrayW<uint8_t>)>(&BGNet::Core::Messages::ClientKeyExchangeRequest::Init)> {
  static const MethodInfo* get() {
    static auto* clientPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientKeyExchangeRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientPublicKey});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientKeyExchangeRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientKeyExchangeRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientKeyExchangeRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::ClientKeyExchangeRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientKeyExchangeRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientKeyExchangeRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientKeyExchangeRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::ClientKeyExchangeRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientKeyExchangeRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientKeyExchangeRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientKeyExchangeRequest::*)()>(&BGNet::Core::Messages::ClientKeyExchangeRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientKeyExchangeRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
