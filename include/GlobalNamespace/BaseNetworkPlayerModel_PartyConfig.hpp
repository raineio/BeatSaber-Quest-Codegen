// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayerModel
  class INetworkPlayerModel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BaseNetworkPlayerModel::PartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNetworkPlayerModel::PartyConfig*, "", "BaseNetworkPlayerModel/PartyConfig");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BaseNetworkPlayerModel/PartyConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseNetworkPlayerModel::PartyConfig : public ::Il2CppObject {
    public:
    public:
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x10
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x28
    ::GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public INetworkPlayerModel partyManager
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::INetworkPlayerModel* partyManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkPlayerModel*) == 0x8);
    public:
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public GameplayServerConfiguration configuration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // Get instance field reference: public INetworkPlayerModel partyManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INetworkPlayerModel*& dyn_partyManager();
    // public System.Void .ctor()
    // Offset: 0x1348774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNetworkPlayerModel::PartyConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BaseNetworkPlayerModel::PartyConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNetworkPlayerModel::PartyConfig*, creationType>()));
    }
  }; // BaseNetworkPlayerModel/PartyConfig
  #pragma pack(pop)
  static check_size<sizeof(BaseNetworkPlayerModel::PartyConfig), 64 + sizeof(::GlobalNamespace::INetworkPlayerModel*)> __GlobalNamespace_BaseNetworkPlayerModel_PartyConfigSizeCheck;
  static_assert(sizeof(BaseNetworkPlayerModel::PartyConfig) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::PartyConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
