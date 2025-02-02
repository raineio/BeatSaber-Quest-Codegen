// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseAcknowledgeMessage
#include "BGNet/Core/Messages/BaseAcknowledgeMessage.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerMessage
#include "MasterServer/IDedicatedServerMasterServerMessage.hpp"
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
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: DedicatedServerMasterServerMessageReceivedAcknowledge
  class DedicatedServerMasterServerMessageReceivedAcknowledge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge*, "MasterServer", "DedicatedServerMasterServerMessageReceivedAcknowledge");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerMasterServerMessageReceivedAcknowledge
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerMasterServerMessageReceivedAcknowledge : public ::BGNet::Core::Messages::BaseAcknowledgeMessage/*, public ::MasterServer::IDedicatedServerMasterServerMessage*/ {
    public:
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerMessage
    operator ::MasterServer::IDedicatedServerMasterServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IDedicatedServerMasterServerMessage
    inline ::MasterServer::IDedicatedServerMasterServerMessage* i_IDedicatedServerMasterServerMessage() noexcept {
      return reinterpret_cast<::MasterServer::IDedicatedServerMasterServerMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.DedicatedServerMasterServerMessageReceivedAcknowledge> get_pool()
    // Offset: 0x16CC408
    static ::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x16CC4AC
    // Implemented from: BGNet.Core.Messages.BaseAcknowledgeMessage
    // Base method: System.Void BaseAcknowledgeMessage::.ctor()
    // Base method: System.Void BaseResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerMasterServerMessageReceivedAcknowledge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerMasterServerMessageReceivedAcknowledge*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x16CC450
    // Implemented from: BGNet.Core.Messages.BaseResponse
    // Base method: System.Void BaseResponse::Release()
    void Release();
  }; // MasterServer.DedicatedServerMasterServerMessageReceivedAcknowledge
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge*>* (*)()>(&MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge::*)()>(&MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerMasterServerMessageReceivedAcknowledge*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
