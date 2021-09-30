// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.BaseConnectToServerRequest
#include "MasterServer/BaseConnectToServerRequest.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
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
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
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
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ConnectToServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectToServerRequest : public MasterServer::BaseConnectToServerRequest {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x38
    GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* secret;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x60
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    public:
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public System.String secret
    ::Il2CppString*& dyn_secret();
    // Get instance field reference: public System.String code
    ::Il2CppString*& dyn_code();
    // Get instance field reference: public GameplayServerConfiguration configuration
    GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // static public IPacketPool`1<MasterServer.ConnectToServerRequest> get_pool()
    // Offset: 0x12DA26C
    static GlobalNamespace::IPacketPool_1<MasterServer::ConnectToServerRequest*>* get_pool();
    // protected System.UInt32 get_version()
    // Offset: 0x12DA2B4
    uint get_version();
    // public MasterServer.ConnectToServerRequest Init(System.String userId, System.String userName, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.String secret, System.String code)
    // Offset: 0x12DA2BC
    MasterServer::ConnectToServerRequest* Init(::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret, ::Il2CppString* code);
    // public System.Void .ctor()
    // Offset: 0x12DA4E4
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectToServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::ConnectToServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectToServerRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12DA2E8
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12DA374
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x12DA420
    // Implemented from: MasterServer.BaseConnectToServerRequest
    // Base method: System.Void BaseConnectToServerRequest::Release()
    void Release();
  }; // MasterServer.ConnectToServerRequest
  #pragma pack(pop)
  static check_size<sizeof(ConnectToServerRequest), 96 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __MasterServer_ConnectToServerRequestSizeCheck;
  static_assert(sizeof(ConnectToServerRequest) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::ConnectToServerRequest*, "MasterServer", "ConnectToServerRequest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::ConnectToServerRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IPacketPool_1<MasterServer::ConnectToServerRequest*>* (*)()>(&MasterServer::ConnectToServerRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerRequest::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::ConnectToServerRequest::*)()>(&MasterServer::ConnectToServerRequest::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerRequest*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<MasterServer::ConnectToServerRequest* (MasterServer::ConnectToServerRequest::*)(::Il2CppString*, ::Il2CppString*, GlobalNamespace::BeatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration, ::Il2CppString*, ::Il2CppString*)>(&MasterServer::ConnectToServerRequest::Init)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, selectionMask, configuration, secret, code});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::ConnectToServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToServerRequest::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::ConnectToServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToServerRequest::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::ConnectToServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToServerRequest::*)()>(&MasterServer::ConnectToServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
