// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedMessage
#include "BGNet/Core/Messages/IUnconnectedMessage.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IDedicatedServerMasterServerMessage
  class IDedicatedServerMasterServerMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::IDedicatedServerMasterServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::IDedicatedServerMasterServerMessage*, "MasterServer", "IDedicatedServerMasterServerMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IDedicatedServerMasterServerMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IDedicatedServerMasterServerMessage/*, public ::BGNet::Core::Messages::IUnconnectedMessage*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedMessage
    operator ::BGNet::Core::Messages::IUnconnectedMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedMessage
    inline ::BGNet::Core::Messages::IUnconnectedMessage* i_IUnconnectedMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(this);
    }
  }; // MasterServer.IDedicatedServerMasterServerMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
