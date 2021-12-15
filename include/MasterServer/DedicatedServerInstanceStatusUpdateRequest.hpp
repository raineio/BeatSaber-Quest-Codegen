// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerClientToServerMessage
#include "MasterServer/IDedicatedServerClientToServerMessage.hpp"
// Including type: GameStateType
#include "GlobalNamespace/GameStateType.hpp"
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
  // Forward declaring type: DedicatedServerInstanceStatusUpdateRequest
  class DedicatedServerInstanceStatusUpdateRequest;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::DedicatedServerInstanceStatusUpdateRequest);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerInstanceStatusUpdateRequest*, "MasterServer", "DedicatedServerInstanceStatusUpdateRequest");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerInstanceStatusUpdateRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerInstanceStatusUpdateRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerClientToServerMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* dedicatedServerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
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
    // public System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x30
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public GameStateType gameState
    // Size: 0x4
    // Offset: 0x34
    GlobalNamespace::GameStateType gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameStateType) == 0x4);
    public:
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerClientToServerMessage
    operator MasterServer::IDedicatedServerClientToServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: private System.String <dedicatedServerId>k__BackingField
    ::Il2CppString*& dyn_$dedicatedServerId$k__BackingField();
    // Get instance field reference: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    int64_t& dyn_$dedicatedServerCreationTime$k__BackingField();
    // Get instance field reference: public System.String id
    ::Il2CppString*& dyn_id();
    // Get instance field reference: public System.Int32 currentPlayerCount
    int& dyn_currentPlayerCount();
    // Get instance field reference: public GameStateType gameState
    GlobalNamespace::GameStateType& dyn_gameState();
    // static public PacketPool`1<MasterServer.DedicatedServerInstanceStatusUpdateRequest> get_pool()
    // Offset: 0x14B33FC
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerInstanceStatusUpdateRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x14B3444
    ::Il2CppString* get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x14B344C
    void set_dedicatedServerId(::Il2CppString* value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x14B3454
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x14B345C
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.DedicatedServerInstanceStatusUpdateRequest Init(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, GameStateType gameState, System.Int32 currentPlayerCount)
    // Offset: 0x14B35BC
    MasterServer::DedicatedServerInstanceStatusUpdateRequest* Init(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, GlobalNamespace::GameStateType gameState, int currentPlayerCount);
    // public System.Void .ctor()
    // Offset: 0x14B35CC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerInstanceStatusUpdateRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::DedicatedServerInstanceStatusUpdateRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerInstanceStatusUpdateRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x14B3464
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x14B34E0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x14B3560
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
  }; // MasterServer.DedicatedServerInstanceStatusUpdateRequest
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerInstanceStatusUpdateRequest), 52 + sizeof(GlobalNamespace::GameStateType)> __MasterServer_DedicatedServerInstanceStatusUpdateRequestSizeCheck;
  static_assert(sizeof(DedicatedServerInstanceStatusUpdateRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerInstanceStatusUpdateRequest*>* (*)()>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)()>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)(::Il2CppString*)>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)()>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)(int64_t)>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::DedicatedServerInstanceStatusUpdateRequest* (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)(::Il2CppString*, int64_t, ::Il2CppString*, GlobalNamespace::GameStateType, int)>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::Init)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* gameState = &::il2cpp_utils::GetClassFromName("", "GameStateType")->byval_arg;
    static auto* currentPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, id, gameState, currentPlayerCount});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerInstanceStatusUpdateRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerInstanceStatusUpdateRequest::*)()>(&MasterServer::DedicatedServerInstanceStatusUpdateRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerInstanceStatusUpdateRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
