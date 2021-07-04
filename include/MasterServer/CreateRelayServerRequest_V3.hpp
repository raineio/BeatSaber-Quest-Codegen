// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.CreateRelayServerRequest
#include "MasterServer/CreateRelayServerRequest.hpp"
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
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.CreateRelayServerRequest/V3
  class CreateRelayServerRequest::V3 : public MasterServer::CreateRelayServerRequest {
    public:
    // Creating value type constructor for type: V3
    V3() noexcept {}
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x12DA4F4
    // Implemented from: MasterServer.CreateRelayServerRequest
    // Base method: System.Void CreateRelayServerRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x12DA5F8
    // Implemented from: MasterServer.CreateRelayServerRequest
    // Base method: System.Void CreateRelayServerRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x12DA6D8
    // Implemented from: MasterServer.CreateRelayServerRequest
    // Base method: System.Void CreateRelayServerRequest::.ctor()
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateRelayServerRequest::V3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::CreateRelayServerRequest::V3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateRelayServerRequest::V3*, creationType>()));
    }
  }; // MasterServer.CreateRelayServerRequest/V3
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::CreateRelayServerRequest::V3*, "MasterServer", "CreateRelayServerRequest/V3");
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::V3::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateRelayServerRequest::V3::*)(LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::CreateRelayServerRequest::V3::Serialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateRelayServerRequest::V3*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataWriter*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::V3::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateRelayServerRequest::V3::*)(LiteNetLib::Utils::NetDataReader*)>(&MasterServer::CreateRelayServerRequest::V3::Deserialize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateRelayServerRequest::V3*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<LiteNetLib::Utils::NetDataReader*>()});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateRelayServerRequest::V3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
