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
  // Forward declaring type: FontFeatureLookupFlags
  struct FontFeatureLookupFlags;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::FontFeatureLookupFlags, "TMPro", "FontFeatureLookupFlags");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.FontFeatureLookupFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct FontFeatureLookupFlags/*, public System::Enum*/ {
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
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FontFeatureLookupFlags
    constexpr FontFeatureLookupFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static constexpr const int IgnoreLigatures = 4;
    // Get static field: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static TMPro::FontFeatureLookupFlags _get_IgnoreLigatures();
    // Set static field: static public TMPro.FontFeatureLookupFlags IgnoreLigatures
    static void _set_IgnoreLigatures(TMPro::FontFeatureLookupFlags value);
    // static field const value: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static constexpr const int IgnoreSpacingAdjustments = 256;
    // Get static field: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static TMPro::FontFeatureLookupFlags _get_IgnoreSpacingAdjustments();
    // Set static field: static public TMPro.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static void _set_IgnoreSpacingAdjustments(TMPro::FontFeatureLookupFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // TMPro.FontFeatureLookupFlags
  #pragma pack(pop)
  static check_size<sizeof(FontFeatureLookupFlags), 0 + sizeof(int)> __TMPro_FontFeatureLookupFlagsSizeCheck;
  static_assert(sizeof(FontFeatureLookupFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
