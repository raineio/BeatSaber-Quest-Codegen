// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.TimeSpanFormat
#include "System/Globalization/TimeSpanFormat.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Forward declaring type: Pattern
  struct Pattern;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat::Pattern, "System.Globalization", "TimeSpanFormat/Pattern");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.TimeSpanFormat/System.Globalization.Pattern
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeSpanFormat::Pattern/*, public System::Enum*/ {
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
    // Creating value type constructor for type: Pattern
    constexpr Pattern(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern None
    static constexpr const int None = 0;
    // Get static field: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern None
    static System::Globalization::TimeSpanFormat::Pattern _get_None();
    // Set static field: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern None
    static void _set_None(System::Globalization::TimeSpanFormat::Pattern value);
    // static field const value: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern Minimum
    static constexpr const int Minimum = 1;
    // Get static field: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern Minimum
    static System::Globalization::TimeSpanFormat::Pattern _get_Minimum();
    // Set static field: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern Minimum
    static void _set_Minimum(System::Globalization::TimeSpanFormat::Pattern value);
    // static field const value: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern Full
    static constexpr const int Full = 2;
    // Get static field: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern Full
    static System::Globalization::TimeSpanFormat::Pattern _get_Full();
    // Set static field: static public System.Globalization.TimeSpanFormat/System.Globalization.Pattern Full
    static void _set_Full(System::Globalization::TimeSpanFormat::Pattern value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Globalization.TimeSpanFormat/System.Globalization.Pattern
  #pragma pack(pop)
  static check_size<sizeof(TimeSpanFormat::Pattern), 0 + sizeof(int)> __System_Globalization_TimeSpanFormat_PatternSizeCheck;
  static_assert(sizeof(TimeSpanFormat::Pattern) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
