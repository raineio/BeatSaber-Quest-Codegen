// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`3
#include "GlobalNamespace/RemoteProcedureCall_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerSpecificSettingsAtStartNetSerializable
  class PlayerSpecificSettingsAtStartNetSerializable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc*, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GameplayRpcManager/SetPlayerDidConnectLateRpc
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayRpcManager::SetPlayerDidConnectLateRpc : public ::GlobalNamespace::RemoteProcedureCall_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x16C65BC
    // Implemented from: RemoteProcedureCall`3
    // Base method: System.Void RemoteProcedureCall_3::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayRpcManager::SetPlayerDidConnectLateRpc* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayRpcManager::SetPlayerDidConnectLateRpc*, creationType>()));
    }
  }; // GameplayRpcManager/SetPlayerDidConnectLateRpc
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLateRpc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
