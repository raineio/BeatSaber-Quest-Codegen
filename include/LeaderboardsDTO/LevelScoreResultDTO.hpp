// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardsDTO.GameplayModifiersDto
#include "LeaderboardsDTO/GameplayModifiersDto.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.LevelScoreResultDTO
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelScoreResultDTO : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.String guid
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* guid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String guids
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* guids;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String guidInstance
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* guidInstance;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 rawScore
    // Size: 0x4
    // Offset: 0x28
    int rawScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 modifiedScore
    // Size: 0x4
    // Offset: 0x2C
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean fullCombo
    // Size: 0x1
    // Offset: 0x30
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: goodCutsCount
    char __padding5[0x3] = {};
    // public System.Int32 goodCutsCount
    // Size: 0x4
    // Offset: 0x34
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 badCutsCount
    // Size: 0x4
    // Offset: 0x38
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 missedCount
    // Size: 0x4
    // Offset: 0x3C
    int missedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxCombo
    // Size: 0x4
    // Offset: 0x40
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxCombo and: gameplayModifiers
    char __padding9[0x4] = {};
    // public LeaderboardsDTO.GameplayModifiersDto[] gameplayModifiers
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<LeaderboardsDTO::GameplayModifiersDto> gameplayModifiers;
    // Field size check
    static_assert(sizeof(::ArrayW<LeaderboardsDTO::GameplayModifiersDto>) == 0x8);
    // public System.String leaderboardId
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* leaderboardId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String deviceModel
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* deviceModel;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String extraDataBase64
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* extraDataBase64;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: public System.String guid
    ::Il2CppString*& dyn_guid();
    // Get instance field reference: public System.String guids
    ::Il2CppString*& dyn_guids();
    // Get instance field reference: public System.String guidInstance
    ::Il2CppString*& dyn_guidInstance();
    // Get instance field reference: public System.Int32 rawScore
    int& dyn_rawScore();
    // Get instance field reference: public System.Int32 modifiedScore
    int& dyn_modifiedScore();
    // Get instance field reference: public System.Boolean fullCombo
    bool& dyn_fullCombo();
    // Get instance field reference: public System.Int32 goodCutsCount
    int& dyn_goodCutsCount();
    // Get instance field reference: public System.Int32 badCutsCount
    int& dyn_badCutsCount();
    // Get instance field reference: public System.Int32 missedCount
    int& dyn_missedCount();
    // Get instance field reference: public System.Int32 maxCombo
    int& dyn_maxCombo();
    // Get instance field reference: public LeaderboardsDTO.GameplayModifiersDto[] gameplayModifiers
    ::ArrayW<LeaderboardsDTO::GameplayModifiersDto>& dyn_gameplayModifiers();
    // Get instance field reference: public System.String leaderboardId
    ::Il2CppString*& dyn_leaderboardId();
    // Get instance field reference: public System.String deviceModel
    ::Il2CppString*& dyn_deviceModel();
    // Get instance field reference: public System.String extraDataBase64
    ::Il2CppString*& dyn_extraDataBase64();
    // public System.Void .ctor()
    // Offset: 0x114AD7C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelScoreResultDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::LevelScoreResultDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelScoreResultDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LevelScoreResultDTO
  #pragma pack(pop)
  static check_size<sizeof(LevelScoreResultDTO), 96 + sizeof(::Il2CppString*)> __LeaderboardsDTO_LevelScoreResultDTOSizeCheck;
  static_assert(sizeof(LevelScoreResultDTO) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LevelScoreResultDTO*, "LeaderboardsDTO", "LevelScoreResultDTO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LeaderboardsDTO::LevelScoreResultDTO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
