// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableRequest
#include "BGNet/Core/Messages/BaseReliableRequest.hpp"
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
  // Forward declaring type: ClientHelloRequest
  class ClientHelloRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::ClientHelloRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientHelloRequest*, "BGNet.Core.Messages", "ClientHelloRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.ClientHelloRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientHelloRequest : public ::BGNet::Core::Messages::BaseReliableRequest/*, public ::BGNet::Core::Messages::IHandshakeClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // public readonly System.Byte[] random
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> random;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage
    operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IHandshakeClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: public readonly System.Byte[] random
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_random();
    // static public PacketPool`1<BGNet.Core.Messages.ClientHelloRequest> get_pool()
    // Offset: 0x152D938
    static ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloRequest*>* get_pool();
    // public BGNet.Core.Messages.ClientHelloRequest Init(System.Byte[] random)
    // Offset: 0x153010C
    ::BGNet::Core::Messages::ClientHelloRequest* Init(::ArrayW<uint8_t> random);
    // public System.Void .ctor()
    // Offset: 0x153561C
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientHelloRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::ClientHelloRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientHelloRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1535530
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1535574
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x15355C0
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Release()
    void Release();
  }; // BGNet.Core.Messages.ClientHelloRequest
  #pragma pack(pop)
  static check_size<sizeof(ClientHelloRequest), 24 + sizeof(::ArrayW<uint8_t>)> __BGNet_Core_Messages_ClientHelloRequestSizeCheck;
  static_assert(sizeof(ClientHelloRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloRequest*>* (*)()>(&BGNet::Core::Messages::ClientHelloRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ClientHelloRequest* (BGNet::Core::Messages::ClientHelloRequest::*)(::ArrayW<uint8_t>)>(&BGNet::Core::Messages::ClientHelloRequest::Init)> {
  static const MethodInfo* get() {
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::ClientHelloRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::ClientHelloRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloRequest::*)()>(&BGNet::Core::Messages::ClientHelloRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
