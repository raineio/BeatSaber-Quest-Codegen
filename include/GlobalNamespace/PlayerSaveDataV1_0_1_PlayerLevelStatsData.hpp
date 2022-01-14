// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*, "", "PlayerSaveDataV1_0_1/PlayerLevelStatsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerLevelStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerLevelStatsData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x10
    ::StringW levelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public BeatmapDifficulty difficulty
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // public System.Int32 highScore
    // Size: 0x4
    // Offset: 0x1C
    int highScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxCombo
    // Size: 0x4
    // Offset: 0x20
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean fullCombo
    // Size: 0x1
    // Offset: 0x24
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: maxRank
    char __padding4[0x3] = {};
    // public RankModel/Rank maxRank
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::RankModel::Rank maxRank;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RankModel::Rank) == 0x4);
    // public System.Boolean validScore
    // Size: 0x1
    // Offset: 0x2C
    bool validScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: validScore and: playCount
    char __padding6[0x3] = {};
    // public System.Int32 playCount
    // Size: 0x4
    // Offset: 0x30
    int playCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String levelId
    ::StringW& dyn_levelId();
    // Get instance field reference: public BeatmapDifficulty difficulty
    GlobalNamespace::BeatmapDifficulty& dyn_difficulty();
    // Get instance field reference: public System.Int32 highScore
    int& dyn_highScore();
    // Get instance field reference: public System.Int32 maxCombo
    int& dyn_maxCombo();
    // Get instance field reference: public System.Boolean fullCombo
    bool& dyn_fullCombo();
    // Get instance field reference: public RankModel/Rank maxRank
    GlobalNamespace::RankModel::Rank& dyn_maxRank();
    // Get instance field reference: public System.Boolean validScore
    bool& dyn_validScore();
    // Get instance field reference: public System.Int32 playCount
    int& dyn_playCount();
    // public System.Void .ctor()
    // Offset: 0x11AABD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerLevelStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerLevelStatsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerLevelStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerLevelStatsData), 48 + sizeof(int)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerLevelStatsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerLevelStatsData) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
