// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::Axis, "BeatmapSaveDataVersion3", "BeatmapSaveData/Axis");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapSaveData::Axis/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Axis
    constexpr Axis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis X
    static constexpr const int X = 0;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis X
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis _get_X();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis X
    static void _set_X(::BeatmapSaveDataVersion3::BeatmapSaveData::Axis value);
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis Y
    static constexpr const int Y = 1;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis Y
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis _get_Y();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis Y
    static void _set_Y(::BeatmapSaveDataVersion3::BeatmapSaveData::Axis value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::Axis), 0 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_AxisSizeCheck;
  static_assert(sizeof(BeatmapSaveData::Axis) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
