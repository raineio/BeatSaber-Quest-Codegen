// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
// Including type: BaseNetworkPlayerModel/PartyConfig
#include "GlobalNamespace/BaseNetworkPlayerModel_PartyConfig.hpp"
// Including type: INetworkPlayerModelPartyConfig`1
#include "GlobalNamespace/INetworkPlayerModelPartyConfig_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformNetworkPlayerModel/CreatePartyConfig
  class PlatformNetworkPlayerModel::CreatePartyConfig : public GlobalNamespace::BaseNetworkPlayerModel::PartyConfig/*, public GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>*/ {
    public:
    // public System.Boolean isPublic
    // Offset: 0x38
    bool isPublic;
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>
    operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::PlatformNetworkPlayerModel*>*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return isPublic;
    }
    // public System.Void .ctor()
    // Offset: 0xF0AF1C
    // Implemented from: BaseNetworkPlayerModel/PartyConfig
    // Base method: System.Void PartyConfig::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlatformNetworkPlayerModel::CreatePartyConfig* New_ctor();
  }; // PlatformNetworkPlayerModel/CreatePartyConfig
  check_size<sizeof(PlatformNetworkPlayerModel::CreatePartyConfig), 56 + sizeof(bool) + 8 - (56 + sizeof(bool)) % 8> __GlobalNamespace_PlatformNetworkPlayerModel_CreatePartyConfigSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformNetworkPlayerModel::CreatePartyConfig*, "", "PlatformNetworkPlayerModel/CreatePartyConfig");
#pragma pack(pop)