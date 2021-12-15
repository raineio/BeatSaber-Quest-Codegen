// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: LeaderboardsDTO.GameplayModifiersDto
#include "LeaderboardsDTO/GameplayModifiersDto.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardEntryDTO
  class LeaderboardEntryDTO;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(LeaderboardsDTO::LeaderboardEntryDTO);
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardEntryDTO*, "LeaderboardsDTO", "LeaderboardEntryDTO");
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.LeaderboardEntryDTO
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardEntryDTO : public ::Il2CppObject {
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
    // public System.Int32 score
    // Size: 0x4
    // Offset: 0x10
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 unmodifiedScore
    // Size: 0x4
    // Offset: 0x14
    int unmodifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 rank
    // Size: 0x4
    // Offset: 0x18
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: rank and: updated
    char __padding2[0x4] = {};
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
    // public LeaderboardsDTO.GameplayModifiersDto[] gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<LeaderboardsDTO::GameplayModifiersDto> gameplayModifiers;
    // Field size check
    static_assert(sizeof(::ArrayW<LeaderboardsDTO::GameplayModifiersDto>) == 0x8);
    public:
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
    // Get instance field reference: public LeaderboardsDTO.GameplayModifiersDto[] gameplayModifiers
    ::ArrayW<LeaderboardsDTO::GameplayModifiersDto>& dyn_gameplayModifiers();
    // public System.Void .ctor()
    // Offset: 0x11A3AA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntryDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LeaderboardsDTO::LeaderboardEntryDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntryDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LeaderboardEntryDTO
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntryDTO), 56 + sizeof(::ArrayW<LeaderboardsDTO::GameplayModifiersDto>)> __LeaderboardsDTO_LeaderboardEntryDTOSizeCheck;
  static_assert(sizeof(LeaderboardEntryDTO) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LeaderboardsDTO::LeaderboardEntryDTO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
