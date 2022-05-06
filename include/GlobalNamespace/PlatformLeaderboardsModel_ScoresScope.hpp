// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope, "", "PlatformLeaderboardsModel/ScoresScope");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlatformLeaderboardsModel/ScoresScope
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlatformLeaderboardsModel::ScoresScope/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ScoresScope
    constexpr ScoresScope(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlatformLeaderboardsModel/ScoresScope Global
    static constexpr const int Global = 0;
    // Get static field: static public PlatformLeaderboardsModel/ScoresScope Global
    static ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get_Global();
    // Set static field: static public PlatformLeaderboardsModel/ScoresScope Global
    static void _set_Global(::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // static field const value: static public PlatformLeaderboardsModel/ScoresScope AroundPlayer
    static constexpr const int AroundPlayer = 1;
    // Get static field: static public PlatformLeaderboardsModel/ScoresScope AroundPlayer
    static ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get_AroundPlayer();
    // Set static field: static public PlatformLeaderboardsModel/ScoresScope AroundPlayer
    static void _set_AroundPlayer(::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // static field const value: static public PlatformLeaderboardsModel/ScoresScope Friends
    static constexpr const int Friends = 2;
    // Get static field: static public PlatformLeaderboardsModel/ScoresScope Friends
    static ::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope _get_Friends();
    // Set static field: static public PlatformLeaderboardsModel/ScoresScope Friends
    static void _set_Friends(::GlobalNamespace::PlatformLeaderboardsModel::ScoresScope value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlatformLeaderboardsModel/ScoresScope
  #pragma pack(pop)
  static check_size<sizeof(PlatformLeaderboardsModel::ScoresScope), 0 + sizeof(int)> __GlobalNamespace_PlatformLeaderboardsModel_ScoresScopeSizeCheck;
  static_assert(sizeof(PlatformLeaderboardsModel::ScoresScope) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
