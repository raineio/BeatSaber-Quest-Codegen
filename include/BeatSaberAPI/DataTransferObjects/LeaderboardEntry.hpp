// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(BeatSaberAPI::DataTransferObjects::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntry");
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.LeaderboardEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardEntry : public ::Il2CppObject {
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
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 score
    // Size: 0x4
    // Offset: 0x14
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 unmodifiedScore
    // Size: 0x4
    // Offset: 0x18
    int unmodifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 rank
    // Size: 0x4
    // Offset: 0x1C
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.DateTime updated
    // Size: 0x8
    // Offset: 0x20
    System::DateTime updated;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public System.String userDisplayName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String platformUserId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers[] gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers> gameplayModifiers;
    // Field size check
    static_assert(sizeof(::ArrayW<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 id
    int& dyn_id();
    // Get instance field reference: public System.Int32 score
    int& dyn_score();
    // Get instance field reference: public System.Int32 unmodifiedScore
    int& dyn_unmodifiedScore();
    // Get instance field reference: public System.Int32 rank
    int& dyn_rank();
    // Get instance field reference: public System.DateTime updated
    System::DateTime& dyn_updated();
    // Get instance field reference: public System.String userDisplayName
    ::Il2CppString*& dyn_userDisplayName();
    // Get instance field reference: public System.String platformUserId
    ::Il2CppString*& dyn_platformUserId();
    // Get instance field reference: public BeatSaberAPI.DataTransferObjects.LevelScoreResult/BeatSaberAPI.DataTransferObjects.GameplayModifiers[] gameplayModifiers
    ::ArrayW<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>& dyn_gameplayModifiers();
    // public System.Void .ctor()
    // Offset: 0x12C7998
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::LeaderboardEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntry*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.LeaderboardEntry
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntry), 56 + sizeof(::ArrayW<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>)> __BeatSaberAPI_DataTransferObjects_LeaderboardEntrySizeCheck;
  static_assert(sizeof(LeaderboardEntry) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::LeaderboardEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
