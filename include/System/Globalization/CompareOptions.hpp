// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CompareOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5E508
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CompareOptions/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CompareOptions
    constexpr CompareOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.CompareOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Globalization.CompareOptions None
    static System::Globalization::CompareOptions _get_None();
    // Set static field: static public System.Globalization.CompareOptions None
    static void _set_None(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions IgnoreCase
    static constexpr const int IgnoreCase = 1;
    // Get static field: static public System.Globalization.CompareOptions IgnoreCase
    static System::Globalization::CompareOptions _get_IgnoreCase();
    // Set static field: static public System.Globalization.CompareOptions IgnoreCase
    static void _set_IgnoreCase(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions IgnoreNonSpace
    static constexpr const int IgnoreNonSpace = 2;
    // Get static field: static public System.Globalization.CompareOptions IgnoreNonSpace
    static System::Globalization::CompareOptions _get_IgnoreNonSpace();
    // Set static field: static public System.Globalization.CompareOptions IgnoreNonSpace
    static void _set_IgnoreNonSpace(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions IgnoreSymbols
    static constexpr const int IgnoreSymbols = 4;
    // Get static field: static public System.Globalization.CompareOptions IgnoreSymbols
    static System::Globalization::CompareOptions _get_IgnoreSymbols();
    // Set static field: static public System.Globalization.CompareOptions IgnoreSymbols
    static void _set_IgnoreSymbols(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions IgnoreKanaType
    static constexpr const int IgnoreKanaType = 8;
    // Get static field: static public System.Globalization.CompareOptions IgnoreKanaType
    static System::Globalization::CompareOptions _get_IgnoreKanaType();
    // Set static field: static public System.Globalization.CompareOptions IgnoreKanaType
    static void _set_IgnoreKanaType(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions IgnoreWidth
    static constexpr const int IgnoreWidth = 16;
    // Get static field: static public System.Globalization.CompareOptions IgnoreWidth
    static System::Globalization::CompareOptions _get_IgnoreWidth();
    // Set static field: static public System.Globalization.CompareOptions IgnoreWidth
    static void _set_IgnoreWidth(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions OrdinalIgnoreCase
    static constexpr const int OrdinalIgnoreCase = 268435456;
    // Get static field: static public System.Globalization.CompareOptions OrdinalIgnoreCase
    static System::Globalization::CompareOptions _get_OrdinalIgnoreCase();
    // Set static field: static public System.Globalization.CompareOptions OrdinalIgnoreCase
    static void _set_OrdinalIgnoreCase(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions StringSort
    static constexpr const int StringSort = 536870912;
    // Get static field: static public System.Globalization.CompareOptions StringSort
    static System::Globalization::CompareOptions _get_StringSort();
    // Set static field: static public System.Globalization.CompareOptions StringSort
    static void _set_StringSort(System::Globalization::CompareOptions value);
    // static field const value: static public System.Globalization.CompareOptions Ordinal
    static constexpr const int Ordinal = 1073741824;
    // Get static field: static public System.Globalization.CompareOptions Ordinal
    static System::Globalization::CompareOptions _get_Ordinal();
    // Set static field: static public System.Globalization.CompareOptions Ordinal
    static void _set_Ordinal(System::Globalization::CompareOptions value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Globalization.CompareOptions
  #pragma pack(pop)
  static check_size<sizeof(CompareOptions), 0 + sizeof(int)> __System_Globalization_CompareOptionsSizeCheck;
  static_assert(sizeof(CompareOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CompareOptions, "System.Globalization", "CompareOptions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
