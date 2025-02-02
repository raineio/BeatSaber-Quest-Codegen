// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableRequest
#include "BGNet/Core/Messages/BaseReliableRequest.hpp"
// Including type: MasterServer.IUserMasterServerClientToServerMessage
#include "MasterServer/IUserMasterServerClientToServerMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
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
  // Forward declaring type: BaseConnectToServerRequest
  class BaseConnectToServerRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::BaseConnectToServerRequest);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::BaseConnectToServerRequest*, "MasterServer", "BaseConnectToServerRequest");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseConnectToServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseConnectToServerRequest : public ::BGNet::Core::Messages::BaseReliableRequest/*, public ::MasterServer::IUserMasterServerClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private System.String <userId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <userName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::MasterServer::IUserMasterServerClientToServerMessage
    operator ::MasterServer::IUserMasterServerClientToServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IUserMasterServerClientToServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IUserMasterServerClientToServerMessage
    inline ::MasterServer::IUserMasterServerClientToServerMessage* i_IUserMasterServerClientToServerMessage() noexcept {
      return reinterpret_cast<::MasterServer::IUserMasterServerClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: private System.String <userId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$userId$k__BackingField();
    // Get instance field reference: private System.String <userName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$userName$k__BackingField();
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable publicKey
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_publicKey();
    // public System.String get_userId()
    // Offset: 0x16CAA9C
    ::StringW get_userId();
    // protected System.Void set_userId(System.String value)
    // Offset: 0x16CAAA4
    void set_userId(::StringW value);
    // public System.String get_userName()
    // Offset: 0x16CAAAC
    ::StringW get_userName();
    // protected System.Void set_userName(System.String value)
    // Offset: 0x16CAAB4
    void set_userName(::StringW value);
    // public MasterServer.BaseConnectToServerRequest WithUserIdAndName(System.ValueTuple`2<System.String,System.String> idPair)
    // Offset: 0x16CAABC
    ::MasterServer::BaseConnectToServerRequest* WithUserIdAndName(::System::ValueTuple_2<::StringW, ::StringW> idPair);
    // public MasterServer.BaseConnectToServerRequest WithEncryptionParams(System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x16CAAC4
    ::MasterServer::BaseConnectToServerRequest* WithEncryptionParams(::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicKey);
    // protected System.Void .ctor()
    // Offset: 0x16CAC38
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseConnectToServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::BaseConnectToServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseConnectToServerRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16CAB10
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16CAB84
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x16CABFC
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Release()
    void Release();
  }; // MasterServer.BaseConnectToServerRequest
  #pragma pack(pop)
  static check_size<sizeof(BaseConnectToServerRequest), 48 + sizeof(::GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_BaseConnectToServerRequestSizeCheck;
  static_assert(sizeof(BaseConnectToServerRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::BaseConnectToServerRequest::*)()>(&MasterServer::BaseConnectToServerRequest::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::set_userId
// Il2CppName: set_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(::StringW)>(&MasterServer::BaseConnectToServerRequest::set_userId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "set_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::BaseConnectToServerRequest::*)()>(&MasterServer::BaseConnectToServerRequest::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::set_userName
// Il2CppName: set_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(::StringW)>(&MasterServer::BaseConnectToServerRequest::set_userName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "set_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::WithUserIdAndName
// Il2CppName: WithUserIdAndName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::BaseConnectToServerRequest* (MasterServer::BaseConnectToServerRequest::*)(::System::ValueTuple_2<::StringW, ::StringW>)>(&MasterServer::BaseConnectToServerRequest::WithUserIdAndName)> {
  static const MethodInfo* get() {
    static auto* idPair = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ValueTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "WithUserIdAndName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idPair});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::WithEncryptionParams
// Il2CppName: WithEncryptionParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::BaseConnectToServerRequest* (MasterServer::BaseConnectToServerRequest::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&MasterServer::BaseConnectToServerRequest::WithEncryptionParams)> {
  static const MethodInfo* get() {
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "WithEncryptionParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random, publicKey});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::BaseConnectToServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::BaseConnectToServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseConnectToServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseConnectToServerRequest::*)()>(&MasterServer::BaseConnectToServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseConnectToServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
