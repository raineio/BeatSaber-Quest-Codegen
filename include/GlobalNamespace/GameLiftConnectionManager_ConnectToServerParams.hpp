// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameLiftConnectionManager
#include "GlobalNamespace/GameLiftConnectionManager.hpp"
// Including type: GameLiftConnectionManager/GameLiftConnectionManagerParamsBase
#include "GlobalNamespace/GameLiftConnectionManager_GameLiftConnectionManagerParamsBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameLiftConnectionManager::ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftConnectionManager::ConnectToServerParams*, "", "GameLiftConnectionManager/ConnectToServerParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: GameLiftConnectionManager/ConnectToServerParams
  // [TokenAttribute] Offset: FFFFFFFF
  class GameLiftConnectionManager::ConnectToServerParams : public ::GlobalNamespace::GameLiftConnectionManager::GameLiftConnectionManagerParamsBase {
    public:
    public:
    // public System.String secret
    // Size: 0x8
    // Offset: 0x50
    ::StringW secret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x58
    ::StringW code;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String secret
    [[deprecated("Use field access instead!")]] ::StringW& dyn_secret();
    // Get instance field reference: public System.String code
    [[deprecated("Use field access instead!")]] ::StringW& dyn_code();
    // public System.Void .ctor()
    // Offset: 0x167BFD0
    // Implemented from: GameLiftConnectionManager/GameLiftConnectionManagerParamsBase
    // Base method: System.Void GameLiftConnectionManagerParamsBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftConnectionManager::ConnectToServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameLiftConnectionManager::ConnectToServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftConnectionManager::ConnectToServerParams*, creationType>()));
    }
  }; // GameLiftConnectionManager/ConnectToServerParams
  #pragma pack(pop)
  static check_size<sizeof(GameLiftConnectionManager::ConnectToServerParams), 88 + sizeof(::StringW)> __GlobalNamespace_GameLiftConnectionManager_ConnectToServerParamsSizeCheck;
  static_assert(sizeof(GameLiftConnectionManager::ConnectToServerParams) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameLiftConnectionManager::ConnectToServerParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
