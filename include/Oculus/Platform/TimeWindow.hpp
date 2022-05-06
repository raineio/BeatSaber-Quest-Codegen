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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: TimeWindow
  struct TimeWindow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::TimeWindow, "Oculus.Platform", "TimeWindow");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.TimeWindow
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeWindow/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TimeWindow
    constexpr TimeWindow(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x10C5C48
    // static field const value: static public Oculus.Platform.TimeWindow Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.TimeWindow Unknown
    static ::Oculus::Platform::TimeWindow _get_Unknown();
    // Set static field: static public Oculus.Platform.TimeWindow Unknown
    static void _set_Unknown(::Oculus::Platform::TimeWindow value);
    // [DescriptionAttribute] Offset: 0x10C5C80
    // static field const value: static public Oculus.Platform.TimeWindow OneHour
    static constexpr const int OneHour = 1;
    // Get static field: static public Oculus.Platform.TimeWindow OneHour
    static ::Oculus::Platform::TimeWindow _get_OneHour();
    // Set static field: static public Oculus.Platform.TimeWindow OneHour
    static void _set_OneHour(::Oculus::Platform::TimeWindow value);
    // [DescriptionAttribute] Offset: 0x10C5CB8
    // static field const value: static public Oculus.Platform.TimeWindow OneDay
    static constexpr const int OneDay = 2;
    // Get static field: static public Oculus.Platform.TimeWindow OneDay
    static ::Oculus::Platform::TimeWindow _get_OneDay();
    // Set static field: static public Oculus.Platform.TimeWindow OneDay
    static void _set_OneDay(::Oculus::Platform::TimeWindow value);
    // [DescriptionAttribute] Offset: 0x10C5CF0
    // static field const value: static public Oculus.Platform.TimeWindow OneWeek
    static constexpr const int OneWeek = 3;
    // Get static field: static public Oculus.Platform.TimeWindow OneWeek
    static ::Oculus::Platform::TimeWindow _get_OneWeek();
    // Set static field: static public Oculus.Platform.TimeWindow OneWeek
    static void _set_OneWeek(::Oculus::Platform::TimeWindow value);
    // [DescriptionAttribute] Offset: 0x10C5D28
    // static field const value: static public Oculus.Platform.TimeWindow ThirtyDays
    static constexpr const int ThirtyDays = 4;
    // Get static field: static public Oculus.Platform.TimeWindow ThirtyDays
    static ::Oculus::Platform::TimeWindow _get_ThirtyDays();
    // Set static field: static public Oculus.Platform.TimeWindow ThirtyDays
    static void _set_ThirtyDays(::Oculus::Platform::TimeWindow value);
    // [DescriptionAttribute] Offset: 0x10C5D60
    // static field const value: static public Oculus.Platform.TimeWindow NinetyDays
    static constexpr const int NinetyDays = 5;
    // Get static field: static public Oculus.Platform.TimeWindow NinetyDays
    static ::Oculus::Platform::TimeWindow _get_NinetyDays();
    // Set static field: static public Oculus.Platform.TimeWindow NinetyDays
    static void _set_NinetyDays(::Oculus::Platform::TimeWindow value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.TimeWindow
  #pragma pack(pop)
  static check_size<sizeof(TimeWindow), 0 + sizeof(int)> __Oculus_Platform_TimeWindowSizeCheck;
  static_assert(sizeof(TimeWindow) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
