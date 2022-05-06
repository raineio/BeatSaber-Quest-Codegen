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
// Type namespace: System
namespace System {
  // Forward declaring type: UriFormat
  struct UriFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UriFormat, "System", "UriFormat");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.UriFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct UriFormat/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UriFormat
    constexpr UriFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.UriFormat UriEscaped
    static constexpr const int UriEscaped = 1;
    // Get static field: static public System.UriFormat UriEscaped
    static ::System::UriFormat _get_UriEscaped();
    // Set static field: static public System.UriFormat UriEscaped
    static void _set_UriEscaped(::System::UriFormat value);
    // static field const value: static public System.UriFormat Unescaped
    static constexpr const int Unescaped = 2;
    // Get static field: static public System.UriFormat Unescaped
    static ::System::UriFormat _get_Unescaped();
    // Set static field: static public System.UriFormat Unescaped
    static void _set_Unescaped(::System::UriFormat value);
    // static field const value: static public System.UriFormat SafeUnescaped
    static constexpr const int SafeUnescaped = 3;
    // Get static field: static public System.UriFormat SafeUnescaped
    static ::System::UriFormat _get_SafeUnescaped();
    // Set static field: static public System.UriFormat SafeUnescaped
    static void _set_SafeUnescaped(::System::UriFormat value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.UriFormat
  #pragma pack(pop)
  static check_size<sizeof(UriFormat), 0 + sizeof(int)> __System_UriFormatSizeCheck;
  static_assert(sizeof(UriFormat) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
