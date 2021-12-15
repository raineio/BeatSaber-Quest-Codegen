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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EDeviceActivityLevel, "Valve.VR", "EDeviceActivityLevel");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EDeviceActivityLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct EDeviceActivityLevel/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EDeviceActivityLevel
    constexpr EDeviceActivityLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Unknown
    static constexpr const int k_EDeviceActivityLevel_Unknown = -1;
    // Get static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Unknown
    static Valve::VR::EDeviceActivityLevel _get_k_EDeviceActivityLevel_Unknown();
    // Set static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Unknown
    static void _set_k_EDeviceActivityLevel_Unknown(Valve::VR::EDeviceActivityLevel value);
    // static field const value: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Idle
    static constexpr const int k_EDeviceActivityLevel_Idle = 0;
    // Get static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Idle
    static Valve::VR::EDeviceActivityLevel _get_k_EDeviceActivityLevel_Idle();
    // Set static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Idle
    static void _set_k_EDeviceActivityLevel_Idle(Valve::VR::EDeviceActivityLevel value);
    // static field const value: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_UserInteraction
    static constexpr const int k_EDeviceActivityLevel_UserInteraction = 1;
    // Get static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_UserInteraction
    static Valve::VR::EDeviceActivityLevel _get_k_EDeviceActivityLevel_UserInteraction();
    // Set static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_UserInteraction
    static void _set_k_EDeviceActivityLevel_UserInteraction(Valve::VR::EDeviceActivityLevel value);
    // static field const value: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_UserInteraction_Timeout
    static constexpr const int k_EDeviceActivityLevel_UserInteraction_Timeout = 2;
    // Get static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_UserInteraction_Timeout
    static Valve::VR::EDeviceActivityLevel _get_k_EDeviceActivityLevel_UserInteraction_Timeout();
    // Set static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_UserInteraction_Timeout
    static void _set_k_EDeviceActivityLevel_UserInteraction_Timeout(Valve::VR::EDeviceActivityLevel value);
    // static field const value: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Standby
    static constexpr const int k_EDeviceActivityLevel_Standby = 3;
    // Get static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Standby
    static Valve::VR::EDeviceActivityLevel _get_k_EDeviceActivityLevel_Standby();
    // Set static field: static public Valve.VR.EDeviceActivityLevel k_EDeviceActivityLevel_Standby
    static void _set_k_EDeviceActivityLevel_Standby(Valve::VR::EDeviceActivityLevel value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EDeviceActivityLevel
  #pragma pack(pop)
  static check_size<sizeof(EDeviceActivityLevel), 0 + sizeof(int)> __Valve_VR_EDeviceActivityLevelSizeCheck;
  static_assert(sizeof(EDeviceActivityLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
