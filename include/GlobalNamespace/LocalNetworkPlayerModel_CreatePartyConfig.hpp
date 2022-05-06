// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LocalNetworkPlayerModel
#include "GlobalNamespace/LocalNetworkPlayerModel.hpp"
// Including type: BaseNetworkPlayerModel/PartyConfig
#include "GlobalNamespace/BaseNetworkPlayerModel_PartyConfig.hpp"
// Including type: INetworkPlayerModelPartyConfig`1
#include "GlobalNamespace/INetworkPlayerModelPartyConfig_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig*, "", "LocalNetworkPlayerModel/CreatePartyConfig");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkPlayerModel/CreatePartyConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalNetworkPlayerModel::CreatePartyConfig : public ::GlobalNamespace::BaseNetworkPlayerModel::PartyConfig/*, public ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::LocalNetworkPlayerModel*>*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::LocalNetworkPlayerModel*>
    operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::LocalNetworkPlayerModel*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::LocalNetworkPlayerModel*>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1566430
    // Implemented from: BaseNetworkPlayerModel/PartyConfig
    // Base method: System.Void PartyConfig::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkPlayerModel::CreatePartyConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkPlayerModel::CreatePartyConfig*, creationType>()));
    }
  }; // LocalNetworkPlayerModel/CreatePartyConfig
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
