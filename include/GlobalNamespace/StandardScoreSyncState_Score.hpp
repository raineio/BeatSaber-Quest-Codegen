// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Score
  struct StandardScoreSyncState_Score;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncState_Score, "", "StandardScoreSyncState/Score");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: StandardScoreSyncState/Score
  // [TokenAttribute] Offset: FFFFFFFF
  struct StandardScoreSyncState_Score/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StandardScoreSyncState_Score
    constexpr StandardScoreSyncState_Score(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public StandardScoreSyncState/Score ModifiedScore
    static constexpr const int ModifiedScore = 0;
    // Get static field: static public StandardScoreSyncState/Score ModifiedScore
    static ::GlobalNamespace::StandardScoreSyncState_Score _get_ModifiedScore();
    // Set static field: static public StandardScoreSyncState/Score ModifiedScore
    static void _set_ModifiedScore(::GlobalNamespace::StandardScoreSyncState_Score value);
    // static field const value: static public StandardScoreSyncState/Score MultipliedScore
    static constexpr const int MultipliedScore = 1;
    // Get static field: static public StandardScoreSyncState/Score MultipliedScore
    static ::GlobalNamespace::StandardScoreSyncState_Score _get_MultipliedScore();
    // Set static field: static public StandardScoreSyncState/Score MultipliedScore
    static void _set_MultipliedScore(::GlobalNamespace::StandardScoreSyncState_Score value);
    // static field const value: static public StandardScoreSyncState/Score ImmediateMaxPossibleMultipliedScore
    static constexpr const int ImmediateMaxPossibleMultipliedScore = 2;
    // Get static field: static public StandardScoreSyncState/Score ImmediateMaxPossibleMultipliedScore
    static ::GlobalNamespace::StandardScoreSyncState_Score _get_ImmediateMaxPossibleMultipliedScore();
    // Set static field: static public StandardScoreSyncState/Score ImmediateMaxPossibleMultipliedScore
    static void _set_ImmediateMaxPossibleMultipliedScore(::GlobalNamespace::StandardScoreSyncState_Score value);
    // static field const value: static public StandardScoreSyncState/Score Combo
    static constexpr const int Combo = 3;
    // Get static field: static public StandardScoreSyncState/Score Combo
    static ::GlobalNamespace::StandardScoreSyncState_Score _get_Combo();
    // Set static field: static public StandardScoreSyncState/Score Combo
    static void _set_Combo(::GlobalNamespace::StandardScoreSyncState_Score value);
    // static field const value: static public StandardScoreSyncState/Score Multiplier
    static constexpr const int Multiplier = 4;
    // Get static field: static public StandardScoreSyncState/Score Multiplier
    static ::GlobalNamespace::StandardScoreSyncState_Score _get_Multiplier();
    // Set static field: static public StandardScoreSyncState/Score Multiplier
    static void _set_Multiplier(::GlobalNamespace::StandardScoreSyncState_Score value);
    // static field const value: static public StandardScoreSyncState/Score Count
    static constexpr const int Count = 5;
    // Get static field: static public StandardScoreSyncState/Score Count
    static ::GlobalNamespace::StandardScoreSyncState_Score _get_Count();
    // Set static field: static public StandardScoreSyncState/Score Count
    static void _set_Count(::GlobalNamespace::StandardScoreSyncState_Score value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // StandardScoreSyncState/Score
  #pragma pack(pop)
  static check_size<sizeof(StandardScoreSyncState_Score), 0 + sizeof(int)> __GlobalNamespace_StandardScoreSyncState_ScoreSizeCheck;
  static_assert(sizeof(StandardScoreSyncState_Score) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
