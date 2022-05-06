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
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: MaskingOffsetMode
  struct MaskingOffsetMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MaskingOffsetMode, "TMPro", "MaskingOffsetMode");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.MaskingOffsetMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct MaskingOffsetMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MaskingOffsetMode
    constexpr MaskingOffsetMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.MaskingOffsetMode Percentage
    static constexpr const int Percentage = 0;
    // Get static field: static public TMPro.MaskingOffsetMode Percentage
    static ::TMPro::MaskingOffsetMode _get_Percentage();
    // Set static field: static public TMPro.MaskingOffsetMode Percentage
    static void _set_Percentage(::TMPro::MaskingOffsetMode value);
    // static field const value: static public TMPro.MaskingOffsetMode Pixel
    static constexpr const int Pixel = 1;
    // Get static field: static public TMPro.MaskingOffsetMode Pixel
    static ::TMPro::MaskingOffsetMode _get_Pixel();
    // Set static field: static public TMPro.MaskingOffsetMode Pixel
    static void _set_Pixel(::TMPro::MaskingOffsetMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // TMPro.MaskingOffsetMode
  #pragma pack(pop)
  static check_size<sizeof(MaskingOffsetMode), 0 + sizeof(int)> __TMPro_MaskingOffsetModeSizeCheck;
  static_assert(sizeof(MaskingOffsetMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
