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
  // Forward declaring type: EVRFirmwareError
  struct EVRFirmwareError;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRFirmwareError, "Valve.VR", "EVRFirmwareError");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRFirmwareError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRFirmwareError/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EVRFirmwareError
    constexpr EVRFirmwareError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRFirmwareError None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRFirmwareError None
    static Valve::VR::EVRFirmwareError _get_None();
    // Set static field: static public Valve.VR.EVRFirmwareError None
    static void _set_None(Valve::VR::EVRFirmwareError value);
    // static field const value: static public Valve.VR.EVRFirmwareError Success
    static constexpr const int Success = 1;
    // Get static field: static public Valve.VR.EVRFirmwareError Success
    static Valve::VR::EVRFirmwareError _get_Success();
    // Set static field: static public Valve.VR.EVRFirmwareError Success
    static void _set_Success(Valve::VR::EVRFirmwareError value);
    // static field const value: static public Valve.VR.EVRFirmwareError Fail
    static constexpr const int Fail = 2;
    // Get static field: static public Valve.VR.EVRFirmwareError Fail
    static Valve::VR::EVRFirmwareError _get_Fail();
    // Set static field: static public Valve.VR.EVRFirmwareError Fail
    static void _set_Fail(Valve::VR::EVRFirmwareError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRFirmwareError
  #pragma pack(pop)
  static check_size<sizeof(EVRFirmwareError), 0 + sizeof(int)> __Valve_VR_EVRFirmwareErrorSizeCheck;
  static_assert(sizeof(EVRFirmwareError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
