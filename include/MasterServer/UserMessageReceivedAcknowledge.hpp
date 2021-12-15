// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseMasterServerAcknowledgeMessage
#include "GlobalNamespace/BaseMasterServerAcknowledgeMessage.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
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
  // Forward declaring type: UserMessageReceivedAcknowledge
  class UserMessageReceivedAcknowledge;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::UserMessageReceivedAcknowledge);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageReceivedAcknowledge*, "MasterServer", "UserMessageReceivedAcknowledge");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageReceivedAcknowledge
  // [TokenAttribute] Offset: FFFFFFFF
  class UserMessageReceivedAcknowledge : public GlobalNamespace::BaseMasterServerAcknowledgeMessage/*, public MasterServer::IUserMessage*/ {
    public:
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.UserMessageReceivedAcknowledge> get_pool()
    // Offset: 0x14B5B68
    static GlobalNamespace::PacketPool_1<MasterServer::UserMessageReceivedAcknowledge*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x14BE53C
    // Implemented from: BaseMasterServerAcknowledgeMessage
    // Base method: System.Void BaseMasterServerAcknowledgeMessage::.ctor()
    // Base method: System.Void BaseMasterServerResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageReceivedAcknowledge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageReceivedAcknowledge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageReceivedAcknowledge*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x14BE4E0
    // Implemented from: BaseMasterServerResponse
    // Base method: System.Void BaseMasterServerResponse::Release()
    void Release();
  }; // MasterServer.UserMessageReceivedAcknowledge
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageReceivedAcknowledge::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<MasterServer::UserMessageReceivedAcknowledge*>* (*)()>(&MasterServer::UserMessageReceivedAcknowledge::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageReceivedAcknowledge*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageReceivedAcknowledge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::UserMessageReceivedAcknowledge::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageReceivedAcknowledge::*)()>(&MasterServer::UserMessageReceivedAcknowledge::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageReceivedAcknowledge*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
