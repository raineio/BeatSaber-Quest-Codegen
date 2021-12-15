// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardEntryDTO
  class LeaderboardEntryDTO;
}
// Completed forward declares
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardEntriesDTO
  struct LeaderboardEntriesDTO;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::LeaderboardEntriesDTO, "LeaderboardsDTO", "LeaderboardEntriesDTO");
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LeaderboardsDTO.LeaderboardEntriesDTO
  // [TokenAttribute] Offset: FFFFFFFF
  struct LeaderboardEntriesDTO/*, public System::ValueType*/ {
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
    // public LeaderboardsDTO.LeaderboardEntryDTO[] entries
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*> entries;
    // Field size check
    static_assert(sizeof(::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*>) == 0x8);
    public:
    // Creating value type constructor for type: LeaderboardEntriesDTO
    constexpr LeaderboardEntriesDTO(::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*> entries_ = ::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*>(nullptr)) noexcept : entries{entries_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*>
    constexpr operator ::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*>() const noexcept {
      return entries;
    }
    // Get instance field reference: public LeaderboardsDTO.LeaderboardEntryDTO[] entries
    ::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*>& dyn_entries();
  }; // LeaderboardsDTO.LeaderboardEntriesDTO
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntriesDTO), 0 + sizeof(::ArrayW<LeaderboardsDTO::LeaderboardEntryDTO*>)> __LeaderboardsDTO_LeaderboardEntriesDTOSizeCheck;
  static_assert(sizeof(LeaderboardEntriesDTO) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
