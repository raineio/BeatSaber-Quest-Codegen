// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IMasterServerMessage
#include "MasterServer/IMasterServerMessage.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IHandshakeMessage
  class IHandshakeMessage;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::IHandshakeMessage);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IHandshakeMessage*, "MasterServer", "IHandshakeMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IHandshakeMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IHandshakeMessage/*, public MasterServer::IMasterServerMessage*/ {
    public:
    // Creating interface conversion operator: operator MasterServer::IMasterServerMessage
    operator MasterServer::IMasterServerMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerMessage*>(this);
    }
  }; // MasterServer.IHandshakeMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
