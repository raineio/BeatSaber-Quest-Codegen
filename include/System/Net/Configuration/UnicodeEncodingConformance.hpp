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
  // Forward declaring type: UnicodeEncodingConformance
  struct UnicodeEncodingConformance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::UnicodeEncodingConformance, "System.Net.Configuration", "UnicodeEncodingConformance");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.UnicodeEncodingConformance
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnicodeEncodingConformance/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnicodeEncodingConformance
    constexpr UnicodeEncodingConformance(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Configuration.UnicodeEncodingConformance Auto
    static constexpr const int Auto = 0;
    // Get static field: static public System.Net.Configuration.UnicodeEncodingConformance Auto
    static ::System::Net::Configuration::UnicodeEncodingConformance _get_Auto();
    // Set static field: static public System.Net.Configuration.UnicodeEncodingConformance Auto
    static void _set_Auto(::System::Net::Configuration::UnicodeEncodingConformance value);
    // static field const value: static public System.Net.Configuration.UnicodeEncodingConformance Strict
    static constexpr const int Strict = 1;
    // Get static field: static public System.Net.Configuration.UnicodeEncodingConformance Strict
    static ::System::Net::Configuration::UnicodeEncodingConformance _get_Strict();
    // Set static field: static public System.Net.Configuration.UnicodeEncodingConformance Strict
    static void _set_Strict(::System::Net::Configuration::UnicodeEncodingConformance value);
    // static field const value: static public System.Net.Configuration.UnicodeEncodingConformance Compat
    static constexpr const int Compat = 2;
    // Get static field: static public System.Net.Configuration.UnicodeEncodingConformance Compat
    static ::System::Net::Configuration::UnicodeEncodingConformance _get_Compat();
    // Set static field: static public System.Net.Configuration.UnicodeEncodingConformance Compat
    static void _set_Compat(::System::Net::Configuration::UnicodeEncodingConformance value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.Configuration.UnicodeEncodingConformance
  #pragma pack(pop)
  static check_size<sizeof(UnicodeEncodingConformance), 0 + sizeof(int)> __System_Net_Configuration_UnicodeEncodingConformanceSizeCheck;
  static_assert(sizeof(UnicodeEncodingConformance) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
