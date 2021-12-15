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
  // Forward declaring type: UnescapeMode
  struct UnescapeMode;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UnescapeMode, "System", "UnescapeMode");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.UnescapeMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct UnescapeMode/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UnescapeMode
    constexpr UnescapeMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.UnescapeMode CopyOnly
    static constexpr const int CopyOnly = 0;
    // Get static field: static public System.UnescapeMode CopyOnly
    static System::UnescapeMode _get_CopyOnly();
    // Set static field: static public System.UnescapeMode CopyOnly
    static void _set_CopyOnly(System::UnescapeMode value);
    // static field const value: static public System.UnescapeMode Escape
    static constexpr const int Escape = 1;
    // Get static field: static public System.UnescapeMode Escape
    static System::UnescapeMode _get_Escape();
    // Set static field: static public System.UnescapeMode Escape
    static void _set_Escape(System::UnescapeMode value);
    // static field const value: static public System.UnescapeMode Unescape
    static constexpr const int Unescape = 2;
    // Get static field: static public System.UnescapeMode Unescape
    static System::UnescapeMode _get_Unescape();
    // Set static field: static public System.UnescapeMode Unescape
    static void _set_Unescape(System::UnescapeMode value);
    // static field const value: static public System.UnescapeMode EscapeUnescape
    static constexpr const int EscapeUnescape = 3;
    // Get static field: static public System.UnescapeMode EscapeUnescape
    static System::UnescapeMode _get_EscapeUnescape();
    // Set static field: static public System.UnescapeMode EscapeUnescape
    static void _set_EscapeUnescape(System::UnescapeMode value);
    // static field const value: static public System.UnescapeMode V1ToStringFlag
    static constexpr const int V1ToStringFlag = 4;
    // Get static field: static public System.UnescapeMode V1ToStringFlag
    static System::UnescapeMode _get_V1ToStringFlag();
    // Set static field: static public System.UnescapeMode V1ToStringFlag
    static void _set_V1ToStringFlag(System::UnescapeMode value);
    // static field const value: static public System.UnescapeMode UnescapeAll
    static constexpr const int UnescapeAll = 8;
    // Get static field: static public System.UnescapeMode UnescapeAll
    static System::UnescapeMode _get_UnescapeAll();
    // Set static field: static public System.UnescapeMode UnescapeAll
    static void _set_UnescapeAll(System::UnescapeMode value);
    // static field const value: static public System.UnescapeMode UnescapeAllOrThrow
    static constexpr const int UnescapeAllOrThrow = 24;
    // Get static field: static public System.UnescapeMode UnescapeAllOrThrow
    static System::UnescapeMode _get_UnescapeAllOrThrow();
    // Set static field: static public System.UnescapeMode UnescapeAllOrThrow
    static void _set_UnescapeAllOrThrow(System::UnescapeMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.UnescapeMode
  #pragma pack(pop)
  static check_size<sizeof(UnescapeMode), 0 + sizeof(int)> __System_UnescapeModeSizeCheck;
  static_assert(sizeof(UnescapeMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
