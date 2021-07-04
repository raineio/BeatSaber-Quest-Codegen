// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
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
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerNoLongerOccupiedRequest
  class DedicatedServerNoLongerOccupiedRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDF1110
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDF1120
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* id;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DedicatedServerNoLongerOccupiedRequest
    DedicatedServerNoLongerOccupiedRequest(::Il2CppString* dedicatedServerId_ = {}, int64_t dedicatedServerCreationTime_ = {}, ::Il2CppString* id_ = {}) noexcept : dedicatedServerId{dedicatedServerId_}, dedicatedServerCreationTime{dedicatedServerCreationTime_}, id{id_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.DedicatedServerNoLongerOccupiedRequest> get_pool()
    // Offset: 0x12DAEF4
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerNoLongerOccupiedRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x12DAF3C
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x12DAF44
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x12DAF4C
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x12DAF54
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.DedicatedServerNoLongerOccupiedRequest Init(System.String dedicatedServerId, System.String id)
    // Offset: 0x12DB054
    MasterServer::DedicatedServerNoLongerOccupiedRequest* Init(::Il2CppString* dedicatedServerId, ::Il2CppString* id);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12DAF5C
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12DAFA8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12DAFF8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x12DB060
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerNoLongerOccupiedRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerNoLongerOccupiedRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerNoLongerOccupiedRequest*, creationType>()));
    }
  }; // MasterServer.DedicatedServerNoLongerOccupiedRequest
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerNoLongerOccupiedRequest), 40 + sizeof(::Il2CppString*)> __MasterServer_DedicatedServerNoLongerOccupiedRequestSizeCheck;
  static_assert(sizeof(DedicatedServerNoLongerOccupiedRequest) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerNoLongerOccupiedRequest*, "MasterServer", "DedicatedServerNoLongerOccupiedRequest");
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerNoLongerOccupiedRequest*>* (*)()>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::get_pool)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)()>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::get_dedicatedServerId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)(::Il2CppString*)>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::set_dedicatedServerId)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)()>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::get_dedicatedServerCreationTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)(int64_t)>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::set_dedicatedServerCreationTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int64_t>()});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::DedicatedServerNoLongerOccupiedRequest* (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)(::Il2CppString*, ::Il2CppString*)>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerNoLongerOccupiedRequest::*)()>(&MasterServer::DedicatedServerNoLongerOccupiedRequest::Release)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerNoLongerOccupiedRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerNoLongerOccupiedRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
