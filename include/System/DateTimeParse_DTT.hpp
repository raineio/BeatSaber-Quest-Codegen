// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.DateTimeParse/System.DTT
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateTimeParse::DTT/*, public System::Enum*/ {
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
    // Creating value type constructor for type: DTT
    constexpr DTT(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.DateTimeParse/System.DTT End
    static constexpr const int End = 0;
    // Get static field: static public System.DateTimeParse/System.DTT End
    static System::DateTimeParse::DTT _get_End();
    // Set static field: static public System.DateTimeParse/System.DTT End
    static void _set_End(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumEnd
    static constexpr const int NumEnd = 1;
    // Get static field: static public System.DateTimeParse/System.DTT NumEnd
    static System::DateTimeParse::DTT _get_NumEnd();
    // Set static field: static public System.DateTimeParse/System.DTT NumEnd
    static void _set_NumEnd(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumAmpm
    static constexpr const int NumAmpm = 2;
    // Get static field: static public System.DateTimeParse/System.DTT NumAmpm
    static System::DateTimeParse::DTT _get_NumAmpm();
    // Set static field: static public System.DateTimeParse/System.DTT NumAmpm
    static void _set_NumAmpm(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumSpace
    static constexpr const int NumSpace = 3;
    // Get static field: static public System.DateTimeParse/System.DTT NumSpace
    static System::DateTimeParse::DTT _get_NumSpace();
    // Set static field: static public System.DateTimeParse/System.DTT NumSpace
    static void _set_NumSpace(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumDatesep
    static constexpr const int NumDatesep = 4;
    // Get static field: static public System.DateTimeParse/System.DTT NumDatesep
    static System::DateTimeParse::DTT _get_NumDatesep();
    // Set static field: static public System.DateTimeParse/System.DTT NumDatesep
    static void _set_NumDatesep(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumTimesep
    static constexpr const int NumTimesep = 5;
    // Get static field: static public System.DateTimeParse/System.DTT NumTimesep
    static System::DateTimeParse::DTT _get_NumTimesep();
    // Set static field: static public System.DateTimeParse/System.DTT NumTimesep
    static void _set_NumTimesep(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT MonthEnd
    static constexpr const int MonthEnd = 6;
    // Get static field: static public System.DateTimeParse/System.DTT MonthEnd
    static System::DateTimeParse::DTT _get_MonthEnd();
    // Set static field: static public System.DateTimeParse/System.DTT MonthEnd
    static void _set_MonthEnd(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT MonthSpace
    static constexpr const int MonthSpace = 7;
    // Get static field: static public System.DateTimeParse/System.DTT MonthSpace
    static System::DateTimeParse::DTT _get_MonthSpace();
    // Set static field: static public System.DateTimeParse/System.DTT MonthSpace
    static void _set_MonthSpace(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT MonthDatesep
    static constexpr const int MonthDatesep = 8;
    // Get static field: static public System.DateTimeParse/System.DTT MonthDatesep
    static System::DateTimeParse::DTT _get_MonthDatesep();
    // Set static field: static public System.DateTimeParse/System.DTT MonthDatesep
    static void _set_MonthDatesep(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumDatesuff
    static constexpr const int NumDatesuff = 9;
    // Get static field: static public System.DateTimeParse/System.DTT NumDatesuff
    static System::DateTimeParse::DTT _get_NumDatesuff();
    // Set static field: static public System.DateTimeParse/System.DTT NumDatesuff
    static void _set_NumDatesuff(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumTimesuff
    static constexpr const int NumTimesuff = 10;
    // Get static field: static public System.DateTimeParse/System.DTT NumTimesuff
    static System::DateTimeParse::DTT _get_NumTimesuff();
    // Set static field: static public System.DateTimeParse/System.DTT NumTimesuff
    static void _set_NumTimesuff(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT DayOfWeek
    static constexpr const int DayOfWeek = 11;
    // Get static field: static public System.DateTimeParse/System.DTT DayOfWeek
    static System::DateTimeParse::DTT _get_DayOfWeek();
    // Set static field: static public System.DateTimeParse/System.DTT DayOfWeek
    static void _set_DayOfWeek(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT YearSpace
    static constexpr const int YearSpace = 12;
    // Get static field: static public System.DateTimeParse/System.DTT YearSpace
    static System::DateTimeParse::DTT _get_YearSpace();
    // Set static field: static public System.DateTimeParse/System.DTT YearSpace
    static void _set_YearSpace(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT YearDateSep
    static constexpr const int YearDateSep = 13;
    // Get static field: static public System.DateTimeParse/System.DTT YearDateSep
    static System::DateTimeParse::DTT _get_YearDateSep();
    // Set static field: static public System.DateTimeParse/System.DTT YearDateSep
    static void _set_YearDateSep(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT YearEnd
    static constexpr const int YearEnd = 14;
    // Get static field: static public System.DateTimeParse/System.DTT YearEnd
    static System::DateTimeParse::DTT _get_YearEnd();
    // Set static field: static public System.DateTimeParse/System.DTT YearEnd
    static void _set_YearEnd(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT TimeZone
    static constexpr const int TimeZone = 15;
    // Get static field: static public System.DateTimeParse/System.DTT TimeZone
    static System::DateTimeParse::DTT _get_TimeZone();
    // Set static field: static public System.DateTimeParse/System.DTT TimeZone
    static void _set_TimeZone(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT Era
    static constexpr const int Era = 16;
    // Get static field: static public System.DateTimeParse/System.DTT Era
    static System::DateTimeParse::DTT _get_Era();
    // Set static field: static public System.DateTimeParse/System.DTT Era
    static void _set_Era(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumUTCTimeMark
    static constexpr const int NumUTCTimeMark = 17;
    // Get static field: static public System.DateTimeParse/System.DTT NumUTCTimeMark
    static System::DateTimeParse::DTT _get_NumUTCTimeMark();
    // Set static field: static public System.DateTimeParse/System.DTT NumUTCTimeMark
    static void _set_NumUTCTimeMark(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT Unk
    static constexpr const int Unk = 18;
    // Get static field: static public System.DateTimeParse/System.DTT Unk
    static System::DateTimeParse::DTT _get_Unk();
    // Set static field: static public System.DateTimeParse/System.DTT Unk
    static void _set_Unk(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT NumLocalTimeMark
    static constexpr const int NumLocalTimeMark = 19;
    // Get static field: static public System.DateTimeParse/System.DTT NumLocalTimeMark
    static System::DateTimeParse::DTT _get_NumLocalTimeMark();
    // Set static field: static public System.DateTimeParse/System.DTT NumLocalTimeMark
    static void _set_NumLocalTimeMark(System::DateTimeParse::DTT value);
    // static field const value: static public System.DateTimeParse/System.DTT Max
    static constexpr const int Max = 20;
    // Get static field: static public System.DateTimeParse/System.DTT Max
    static System::DateTimeParse::DTT _get_Max();
    // Set static field: static public System.DateTimeParse/System.DTT Max
    static void _set_Max(System::DateTimeParse::DTT value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.DateTimeParse/System.DTT
  #pragma pack(pop)
  static check_size<sizeof(DateTimeParse::DTT), 0 + sizeof(int)> __System_DateTimeParse_DTTSizeCheck;
  static_assert(sizeof(DateTimeParse::DTT) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse::DTT, "System", "DateTimeParse/DTT");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
