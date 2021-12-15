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
  // Forward declaring type: ConsoleColor
  struct ConsoleColor;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleColor, "System", "ConsoleColor");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ConsoleColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConsoleColor/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ConsoleColor
    constexpr ConsoleColor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ConsoleColor Black
    static constexpr const int Black = 0;
    // Get static field: static public System.ConsoleColor Black
    static System::ConsoleColor _get_Black();
    // Set static field: static public System.ConsoleColor Black
    static void _set_Black(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor DarkBlue
    static constexpr const int DarkBlue = 1;
    // Get static field: static public System.ConsoleColor DarkBlue
    static System::ConsoleColor _get_DarkBlue();
    // Set static field: static public System.ConsoleColor DarkBlue
    static void _set_DarkBlue(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor DarkGreen
    static constexpr const int DarkGreen = 2;
    // Get static field: static public System.ConsoleColor DarkGreen
    static System::ConsoleColor _get_DarkGreen();
    // Set static field: static public System.ConsoleColor DarkGreen
    static void _set_DarkGreen(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor DarkCyan
    static constexpr const int DarkCyan = 3;
    // Get static field: static public System.ConsoleColor DarkCyan
    static System::ConsoleColor _get_DarkCyan();
    // Set static field: static public System.ConsoleColor DarkCyan
    static void _set_DarkCyan(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor DarkRed
    static constexpr const int DarkRed = 4;
    // Get static field: static public System.ConsoleColor DarkRed
    static System::ConsoleColor _get_DarkRed();
    // Set static field: static public System.ConsoleColor DarkRed
    static void _set_DarkRed(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor DarkMagenta
    static constexpr const int DarkMagenta = 5;
    // Get static field: static public System.ConsoleColor DarkMagenta
    static System::ConsoleColor _get_DarkMagenta();
    // Set static field: static public System.ConsoleColor DarkMagenta
    static void _set_DarkMagenta(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor DarkYellow
    static constexpr const int DarkYellow = 6;
    // Get static field: static public System.ConsoleColor DarkYellow
    static System::ConsoleColor _get_DarkYellow();
    // Set static field: static public System.ConsoleColor DarkYellow
    static void _set_DarkYellow(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor Gray
    static constexpr const int Gray = 7;
    // Get static field: static public System.ConsoleColor Gray
    static System::ConsoleColor _get_Gray();
    // Set static field: static public System.ConsoleColor Gray
    static void _set_Gray(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor DarkGray
    static constexpr const int DarkGray = 8;
    // Get static field: static public System.ConsoleColor DarkGray
    static System::ConsoleColor _get_DarkGray();
    // Set static field: static public System.ConsoleColor DarkGray
    static void _set_DarkGray(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor Blue
    static constexpr const int Blue = 9;
    // Get static field: static public System.ConsoleColor Blue
    static System::ConsoleColor _get_Blue();
    // Set static field: static public System.ConsoleColor Blue
    static void _set_Blue(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor Green
    static constexpr const int Green = 10;
    // Get static field: static public System.ConsoleColor Green
    static System::ConsoleColor _get_Green();
    // Set static field: static public System.ConsoleColor Green
    static void _set_Green(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor Cyan
    static constexpr const int Cyan = 11;
    // Get static field: static public System.ConsoleColor Cyan
    static System::ConsoleColor _get_Cyan();
    // Set static field: static public System.ConsoleColor Cyan
    static void _set_Cyan(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor Red
    static constexpr const int Red = 12;
    // Get static field: static public System.ConsoleColor Red
    static System::ConsoleColor _get_Red();
    // Set static field: static public System.ConsoleColor Red
    static void _set_Red(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor Magenta
    static constexpr const int Magenta = 13;
    // Get static field: static public System.ConsoleColor Magenta
    static System::ConsoleColor _get_Magenta();
    // Set static field: static public System.ConsoleColor Magenta
    static void _set_Magenta(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor Yellow
    static constexpr const int Yellow = 14;
    // Get static field: static public System.ConsoleColor Yellow
    static System::ConsoleColor _get_Yellow();
    // Set static field: static public System.ConsoleColor Yellow
    static void _set_Yellow(System::ConsoleColor value);
    // static field const value: static public System.ConsoleColor White
    static constexpr const int White = 15;
    // Get static field: static public System.ConsoleColor White
    static System::ConsoleColor _get_White();
    // Set static field: static public System.ConsoleColor White
    static void _set_White(System::ConsoleColor value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.ConsoleColor
  #pragma pack(pop)
  static check_size<sizeof(ConsoleColor), 0 + sizeof(int)> __System_ConsoleColorSizeCheck;
  static_assert(sizeof(ConsoleColor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
