// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerAllOverallStatsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerAllOverallStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    public:
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData campaignOverallStatsData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* campaignOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData soloFreePlayOverallStatsData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*) == 0x8);
    // public PlayerSaveDataV1_0_1/PlayerOverallStatsData partyFreePlayOverallStatsData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*) == 0x8);
    public:
    // Get instance field reference: public PlayerSaveDataV1_0_1/PlayerOverallStatsData campaignOverallStatsData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*& dyn_campaignOverallStatsData();
    // Get instance field reference: public PlayerSaveDataV1_0_1/PlayerOverallStatsData soloFreePlayOverallStatsData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*& dyn_soloFreePlayOverallStatsData();
    // Get instance field reference: public PlayerSaveDataV1_0_1/PlayerOverallStatsData partyFreePlayOverallStatsData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*& dyn_partyFreePlayOverallStatsData();
    // public System.Void .ctor()
    // Offset: 0x158A29C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*, creationType>()));
    }
    // public System.Void .ctor(PlayerSaveDataV1_0_1/PlayerOverallStatsData campaignOverallStatsData, PlayerSaveDataV1_0_1/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerSaveDataV1_0_1/PlayerOverallStatsData partyFreePlayOverallStatsData)
    // Offset: 0x158A348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* campaignOverallStatsData, ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* soloFreePlayOverallStatsData, ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData* partyFreePlayOverallStatsData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*, creationType>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData)));
    }
  }; // PlayerSaveDataV1_0_1/PlayerAllOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerAllOverallStatsData), 32 + sizeof(::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData*)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerAllOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerAllOverallStatsData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
