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
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficulty, "", "BeatmapDifficulty");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDifficulty
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapDifficulty/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BeatmapDifficulty
    constexpr BeatmapDifficulty(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeatmapDifficulty Easy
    static constexpr const int Easy = 0;
    // Get static field: static public BeatmapDifficulty Easy
    static ::GlobalNamespace::BeatmapDifficulty _get_Easy();
    // Set static field: static public BeatmapDifficulty Easy
    static void _set_Easy(::GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty Normal
    static constexpr const int Normal = 1;
    // Get static field: static public BeatmapDifficulty Normal
    static ::GlobalNamespace::BeatmapDifficulty _get_Normal();
    // Set static field: static public BeatmapDifficulty Normal
    static void _set_Normal(::GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty Hard
    static constexpr const int Hard = 2;
    // Get static field: static public BeatmapDifficulty Hard
    static ::GlobalNamespace::BeatmapDifficulty _get_Hard();
    // Set static field: static public BeatmapDifficulty Hard
    static void _set_Hard(::GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty Expert
    static constexpr const int Expert = 3;
    // Get static field: static public BeatmapDifficulty Expert
    static ::GlobalNamespace::BeatmapDifficulty _get_Expert();
    // Set static field: static public BeatmapDifficulty Expert
    static void _set_Expert(::GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty ExpertPlus
    static constexpr const int ExpertPlus = 4;
    // Get static field: static public BeatmapDifficulty ExpertPlus
    static ::GlobalNamespace::BeatmapDifficulty _get_ExpertPlus();
    // Set static field: static public BeatmapDifficulty ExpertPlus
    static void _set_ExpertPlus(::GlobalNamespace::BeatmapDifficulty value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // BeatmapDifficulty
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDifficulty), 0 + sizeof(int)> __GlobalNamespace_BeatmapDifficultySizeCheck;
  static_assert(sizeof(BeatmapDifficulty) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
