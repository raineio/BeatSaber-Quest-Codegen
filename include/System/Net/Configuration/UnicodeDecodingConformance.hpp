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
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: UnicodeDecodingConformance
  struct UnicodeDecodingConformance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::UnicodeDecodingConformance, "System.Net.Configuration", "UnicodeDecodingConformance");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.UnicodeDecodingConformance
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnicodeDecodingConformance/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnicodeDecodingConformance
    constexpr UnicodeDecodingConformance(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Configuration.UnicodeDecodingConformance Auto
    static constexpr const int Auto = 0;
    // Get static field: static public System.Net.Configuration.UnicodeDecodingConformance Auto
    static ::System::Net::Configuration::UnicodeDecodingConformance _get_Auto();
    // Set static field: static public System.Net.Configuration.UnicodeDecodingConformance Auto
    static void _set_Auto(::System::Net::Configuration::UnicodeDecodingConformance value);
    // static field const value: static public System.Net.Configuration.UnicodeDecodingConformance Strict
    static constexpr const int Strict = 1;
    // Get static field: static public System.Net.Configuration.UnicodeDecodingConformance Strict
    static ::System::Net::Configuration::UnicodeDecodingConformance _get_Strict();
    // Set static field: static public System.Net.Configuration.UnicodeDecodingConformance Strict
    static void _set_Strict(::System::Net::Configuration::UnicodeDecodingConformance value);
    // static field const value: static public System.Net.Configuration.UnicodeDecodingConformance Compat
    static constexpr const int Compat = 2;
    // Get static field: static public System.Net.Configuration.UnicodeDecodingConformance Compat
    static ::System::Net::Configuration::UnicodeDecodingConformance _get_Compat();
    // Set static field: static public System.Net.Configuration.UnicodeDecodingConformance Compat
    static void _set_Compat(::System::Net::Configuration::UnicodeDecodingConformance value);
    // static field const value: static public System.Net.Configuration.UnicodeDecodingConformance Loose
    static constexpr const int Loose = 3;
    // Get static field: static public System.Net.Configuration.UnicodeDecodingConformance Loose
    static ::System::Net::Configuration::UnicodeDecodingConformance _get_Loose();
    // Set static field: static public System.Net.Configuration.UnicodeDecodingConformance Loose
    static void _set_Loose(::System::Net::Configuration::UnicodeDecodingConformance value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.Configuration.UnicodeDecodingConformance
  #pragma pack(pop)
  static check_size<sizeof(UnicodeDecodingConformance), 0 + sizeof(int)> __System_Net_Configuration_UnicodeDecodingConformanceSizeCheck;
  static_assert(sizeof(UnicodeDecodingConformance) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
