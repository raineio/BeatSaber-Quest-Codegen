// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Autogenerated type: LiteNetLib.Utils.NtpLeapIndicator
  struct NtpLeapIndicator : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NtpLeapIndicator
    constexpr NtpLeapIndicator(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator NoWarning
    static constexpr const int NoWarning = 0;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator NoWarning
    static LiteNetLib::Utils::NtpLeapIndicator _get_NoWarning();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator NoWarning
    static void _set_NoWarning(LiteNetLib::Utils::NtpLeapIndicator value);
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas61Seconds
    static constexpr const int LastMinuteHas61Seconds = 1;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas61Seconds
    static LiteNetLib::Utils::NtpLeapIndicator _get_LastMinuteHas61Seconds();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas61Seconds
    static void _set_LastMinuteHas61Seconds(LiteNetLib::Utils::NtpLeapIndicator value);
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas59Seconds
    static constexpr const int LastMinuteHas59Seconds = 2;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas59Seconds
    static LiteNetLib::Utils::NtpLeapIndicator _get_LastMinuteHas59Seconds();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator LastMinuteHas59Seconds
    static void _set_LastMinuteHas59Seconds(LiteNetLib::Utils::NtpLeapIndicator value);
    // static field const value: static public LiteNetLib.Utils.NtpLeapIndicator AlarmCondition
    static constexpr const int AlarmCondition = 3;
    // Get static field: static public LiteNetLib.Utils.NtpLeapIndicator AlarmCondition
    static LiteNetLib::Utils::NtpLeapIndicator _get_AlarmCondition();
    // Set static field: static public LiteNetLib.Utils.NtpLeapIndicator AlarmCondition
    static void _set_AlarmCondition(LiteNetLib::Utils::NtpLeapIndicator value);
  }; // LiteNetLib.Utils.NtpLeapIndicator
  check_size<sizeof(NtpLeapIndicator), 0 + sizeof(int) + 8 - (0 + sizeof(int)) % 8> __LiteNetLib_Utils_NtpLeapIndicatorSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpLeapIndicator, "LiteNetLib.Utils", "NtpLeapIndicator");
#pragma pack(pop)