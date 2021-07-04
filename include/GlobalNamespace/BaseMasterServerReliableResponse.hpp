// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerReliableResponse
#include "MasterServer/IMasterServerReliableResponse.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: IMasterServerReliableRequest because it is already included!
  // Skipping declaration: IMasterServerResponse because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BaseMasterServerReliableResponse
  class BaseMasterServerReliableResponse : public ::Il2CppObject/*, public MasterServer::IMasterServerReliableResponse*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDF0C30
    // private System.UInt32 <requestId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint requestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDF0C40
    // private System.UInt32 <responseId>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    uint responseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: BaseMasterServerReliableResponse
    BaseMasterServerReliableResponse(uint requestId_ = {}, uint responseId_ = {}) noexcept : requestId{requestId_}, responseId{responseId_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerReliableResponse
    operator MasterServer::IMasterServerReliableResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerReliableResponse*>(this);
    }
    // public System.UInt32 get_requestId()
    // Offset: 0x13215EC
    uint get_requestId();
    // private System.Void set_requestId(System.UInt32 value)
    // Offset: 0x13215F4
    void set_requestId(uint value);
    // public System.UInt32 get_responseId()
    // Offset: 0x13215FC
    uint get_responseId();
    // private System.Void set_responseId(System.UInt32 value)
    // Offset: 0x1321604
    void set_responseId(uint value);
    // public System.Byte get_resultCode()
    // Offset: 0x132160C
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0x1321614
    ::Il2CppString* get_resultCodeString();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x132165C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x13216A0
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFF
    void Release();
    // private MasterServer.IMasterServerReliableRequest MasterServer.IMasterServerReliableRequest.WithRequestId(System.UInt32 requestId)
    // Offset: 0x13216E8
    MasterServer::IMasterServerReliableRequest* MasterServer_IMasterServerReliableRequest_WithRequestId(uint requestId);
    // private MasterServer.IMasterServerResponse MasterServer.IMasterServerResponse.WithResponseId(System.UInt32 responseId)
    // Offset: 0x13216F0
    MasterServer::IMasterServerResponse* MasterServer_IMasterServerResponse_WithResponseId(uint responseId);
    // private MasterServer.IMasterServerReliableResponse MasterServer.IMasterServerReliableResponse.WithRequestAndResponseId(System.UInt32 requestId, System.UInt32 responseId)
    // Offset: 0x13216F8
    MasterServer::IMasterServerReliableResponse* MasterServer_IMasterServerReliableResponse_WithRequestAndResponseId(uint requestId, uint responseId);
    // protected System.Void .ctor()
    // Offset: 0x1321700
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerReliableResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseMasterServerReliableResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerReliableResponse*, creationType>()));
    }
  }; // BaseMasterServerReliableResponse
  #pragma pack(pop)
  static check_size<sizeof(BaseMasterServerReliableResponse), 20 + sizeof(uint)> __GlobalNamespace_BaseMasterServerReliableResponseSizeCheck;
  static_assert(sizeof(BaseMasterServerReliableResponse) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerReliableResponse*, "", "BaseMasterServerReliableResponse");
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::get_requestId
// Il2CppName: get_requestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::BaseMasterServerReliableResponse::*)()>(&GlobalNamespace::BaseMasterServerReliableResponse::get_requestId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "get_requestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::set_requestId
// Il2CppName: set_requestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerReliableResponse::*)(uint)>(&GlobalNamespace::BaseMasterServerReliableResponse::set_requestId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "set_requestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::get_responseId
// Il2CppName: get_responseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::BaseMasterServerReliableResponse::*)()>(&GlobalNamespace::BaseMasterServerReliableResponse::get_responseId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "get_responseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::set_responseId
// Il2CppName: set_responseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerReliableResponse::*)(uint)>(&GlobalNamespace::BaseMasterServerReliableResponse::set_responseId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "set_responseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::BaseMasterServerReliableResponse::*)()>(&GlobalNamespace::BaseMasterServerReliableResponse::get_resultCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BaseMasterServerReliableResponse::*)()>(&GlobalNamespace::BaseMasterServerReliableResponse::get_resultCodeString)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerReliableResponse::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::BaseMasterServerReliableResponse::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerReliableResponse::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::BaseMasterServerReliableResponse::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMasterServerReliableResponse::*)()>(&GlobalNamespace::BaseMasterServerReliableResponse::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerReliableRequest_WithRequestId
// Il2CppName: MasterServer.IMasterServerReliableRequest.WithRequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::IMasterServerReliableRequest* (GlobalNamespace::BaseMasterServerReliableResponse::*)(uint)>(&GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerReliableRequest_WithRequestId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "MasterServer.IMasterServerReliableRequest.WithRequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerResponse_WithResponseId
// Il2CppName: MasterServer.IMasterServerResponse.WithResponseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::IMasterServerResponse* (GlobalNamespace::BaseMasterServerReliableResponse::*)(uint)>(&GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerResponse_WithResponseId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "MasterServer.IMasterServerResponse.WithResponseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerReliableResponse_WithRequestAndResponseId
// Il2CppName: MasterServer.IMasterServerReliableResponse.WithRequestAndResponseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::IMasterServerReliableResponse* (GlobalNamespace::BaseMasterServerReliableResponse::*)(uint, uint)>(&GlobalNamespace::BaseMasterServerReliableResponse::MasterServer_IMasterServerReliableResponse_WithRequestAndResponseId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMasterServerReliableResponse*), "MasterServer.IMasterServerReliableResponse.WithRequestAndResponseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMasterServerReliableResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
