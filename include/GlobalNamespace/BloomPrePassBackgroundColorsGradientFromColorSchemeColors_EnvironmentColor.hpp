// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors
#include "GlobalNamespace/BloomPrePassBackgroundColorsGradientFromColorSchemeColors.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor, "", "BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EnvironmentColor
    constexpr EnvironmentColor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color0
    static constexpr const int Color0 = 0;
    // Get static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color0
    static GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor _get_Color0();
    // Set static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color0
    static void _set_Color0(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor value);
    // static field const value: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color1
    static constexpr const int Color1 = 1;
    // Get static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color1
    static GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor _get_Color1();
    // Set static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color1
    static void _set_Color1(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor value);
    // static field const value: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color0Boost
    static constexpr const int Color0Boost = 2;
    // Get static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color0Boost
    static GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor _get_Color0Boost();
    // Set static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color0Boost
    static void _set_Color0Boost(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor value);
    // static field const value: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color1Boost
    static constexpr const int Color1Boost = 3;
    // Get static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color1Boost
    static GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor _get_Color1Boost();
    // Set static field: static public BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor Color1Boost
    static void _set_Color1Boost(GlobalNamespace::BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BloomPrePassBackgroundColorsGradientFromColorSchemeColors/EnvironmentColor
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor), 0 + sizeof(int)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientFromColorSchemeColors_EnvironmentColorSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientFromColorSchemeColors::EnvironmentColor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
