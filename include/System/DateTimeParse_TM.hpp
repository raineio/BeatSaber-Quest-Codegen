// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse::TM, "System", "DateTimeParse/TM");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.DateTimeParse/System.TM
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateTimeParse::TM/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TM
    constexpr TM(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.DateTimeParse/System.TM NotSet
    static constexpr const int NotSet = -1;
    // Get static field: static public System.DateTimeParse/System.TM NotSet
    static System::DateTimeParse::TM _get_NotSet();
    // Set static field: static public System.DateTimeParse/System.TM NotSet
    static void _set_NotSet(System::DateTimeParse::TM value);
    // static field const value: static public System.DateTimeParse/System.TM AM
    static constexpr const int AM = 0;
    // Get static field: static public System.DateTimeParse/System.TM AM
    static System::DateTimeParse::TM _get_AM();
    // Set static field: static public System.DateTimeParse/System.TM AM
    static void _set_AM(System::DateTimeParse::TM value);
    // static field const value: static public System.DateTimeParse/System.TM PM
    static constexpr const int PM = 1;
    // Get static field: static public System.DateTimeParse/System.TM PM
    static System::DateTimeParse::TM _get_PM();
    // Set static field: static public System.DateTimeParse/System.TM PM
    static void _set_PM(System::DateTimeParse::TM value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.DateTimeParse/System.TM
  #pragma pack(pop)
  static check_size<sizeof(DateTimeParse::TM), 0 + sizeof(int)> __System_DateTimeParse_TMSizeCheck;
  static_assert(sizeof(DateTimeParse::TM) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
