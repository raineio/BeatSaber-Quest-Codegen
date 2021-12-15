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
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphLoadFlags
  struct GlyphLoadFlags;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphLoadFlags, "UnityEngine.TextCore.LowLevel", "GlyphLoadFlags");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphLoadFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: EE7C94
  struct GlyphLoadFlags/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GlyphLoadFlags
    constexpr GlyphLoadFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_DEFAULT
    static constexpr const int LOAD_DEFAULT = 0;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_DEFAULT
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_DEFAULT();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_DEFAULT
    static void _set_LOAD_DEFAULT(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_SCALE
    static constexpr const int LOAD_NO_SCALE = 1;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_SCALE
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_SCALE();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_SCALE
    static void _set_LOAD_NO_SCALE(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_HINTING
    static constexpr const int LOAD_NO_HINTING = 2;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_HINTING
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_HINTING();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_HINTING
    static void _set_LOAD_NO_HINTING(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_RENDER
    static constexpr const int LOAD_RENDER = 4;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_RENDER
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_RENDER();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_RENDER
    static void _set_LOAD_RENDER(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_BITMAP
    static constexpr const int LOAD_NO_BITMAP = 8;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_BITMAP
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_BITMAP();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_BITMAP
    static void _set_LOAD_NO_BITMAP(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_FORCE_AUTOHINT
    static constexpr const int LOAD_FORCE_AUTOHINT = 32;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_FORCE_AUTOHINT
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_FORCE_AUTOHINT();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_FORCE_AUTOHINT
    static void _set_LOAD_FORCE_AUTOHINT(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_MONOCHROME
    static constexpr const int LOAD_MONOCHROME = 4096;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_MONOCHROME
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_MONOCHROME();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_MONOCHROME
    static void _set_LOAD_MONOCHROME(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_AUTOHINT
    static constexpr const int LOAD_NO_AUTOHINT = 32768;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_AUTOHINT
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_NO_AUTOHINT();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_NO_AUTOHINT
    static void _set_LOAD_NO_AUTOHINT(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_COMPUTE_METRICS
    static constexpr const int LOAD_COMPUTE_METRICS = 2097152;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_COMPUTE_METRICS
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_COMPUTE_METRICS();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_COMPUTE_METRICS
    static void _set_LOAD_COMPUTE_METRICS(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_BITMAP_METRICS_ONLY
    static constexpr const int LOAD_BITMAP_METRICS_ONLY = 4194304;
    // Get static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_BITMAP_METRICS_ONLY
    static UnityEngine::TextCore::LowLevel::GlyphLoadFlags _get_LOAD_BITMAP_METRICS_ONLY();
    // Set static field: static public UnityEngine.TextCore.LowLevel.GlyphLoadFlags LOAD_BITMAP_METRICS_ONLY
    static void _set_LOAD_BITMAP_METRICS_ONLY(UnityEngine::TextCore::LowLevel::GlyphLoadFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.TextCore.LowLevel.GlyphLoadFlags
  #pragma pack(pop)
  static check_size<sizeof(GlyphLoadFlags), 0 + sizeof(int)> __UnityEngine_TextCore_LowLevel_GlyphLoadFlagsSizeCheck;
  static_assert(sizeof(GlyphLoadFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
