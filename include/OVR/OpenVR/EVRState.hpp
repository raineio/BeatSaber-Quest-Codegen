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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRState
  struct EVRState;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRState, "OVR.OpenVR", "EVRState");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRState
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRState/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EVRState
    constexpr EVRState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRState Undefined
    static constexpr const int Undefined = -1;
    // Get static field: static public OVR.OpenVR.EVRState Undefined
    static OVR::OpenVR::EVRState _get_Undefined();
    // Set static field: static public OVR.OpenVR.EVRState Undefined
    static void _set_Undefined(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState Off
    static constexpr const int Off = 0;
    // Get static field: static public OVR.OpenVR.EVRState Off
    static OVR::OpenVR::EVRState _get_Off();
    // Set static field: static public OVR.OpenVR.EVRState Off
    static void _set_Off(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState Searching
    static constexpr const int Searching = 1;
    // Get static field: static public OVR.OpenVR.EVRState Searching
    static OVR::OpenVR::EVRState _get_Searching();
    // Set static field: static public OVR.OpenVR.EVRState Searching
    static void _set_Searching(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState Searching_Alert
    static constexpr const int Searching_Alert = 2;
    // Get static field: static public OVR.OpenVR.EVRState Searching_Alert
    static OVR::OpenVR::EVRState _get_Searching_Alert();
    // Set static field: static public OVR.OpenVR.EVRState Searching_Alert
    static void _set_Searching_Alert(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState Ready
    static constexpr const int Ready = 3;
    // Get static field: static public OVR.OpenVR.EVRState Ready
    static OVR::OpenVR::EVRState _get_Ready();
    // Set static field: static public OVR.OpenVR.EVRState Ready
    static void _set_Ready(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState Ready_Alert
    static constexpr const int Ready_Alert = 4;
    // Get static field: static public OVR.OpenVR.EVRState Ready_Alert
    static OVR::OpenVR::EVRState _get_Ready_Alert();
    // Set static field: static public OVR.OpenVR.EVRState Ready_Alert
    static void _set_Ready_Alert(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState NotReady
    static constexpr const int NotReady = 5;
    // Get static field: static public OVR.OpenVR.EVRState NotReady
    static OVR::OpenVR::EVRState _get_NotReady();
    // Set static field: static public OVR.OpenVR.EVRState NotReady
    static void _set_NotReady(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState Standby
    static constexpr const int Standby = 6;
    // Get static field: static public OVR.OpenVR.EVRState Standby
    static OVR::OpenVR::EVRState _get_Standby();
    // Set static field: static public OVR.OpenVR.EVRState Standby
    static void _set_Standby(OVR::OpenVR::EVRState value);
    // static field const value: static public OVR.OpenVR.EVRState Ready_Alert_Low
    static constexpr const int Ready_Alert_Low = 7;
    // Get static field: static public OVR.OpenVR.EVRState Ready_Alert_Low
    static OVR::OpenVR::EVRState _get_Ready_Alert_Low();
    // Set static field: static public OVR.OpenVR.EVRState Ready_Alert_Low
    static void _set_Ready_Alert_Low(OVR::OpenVR::EVRState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRState
  #pragma pack(pop)
  static check_size<sizeof(EVRState), 0 + sizeof(int)> __OVR_OpenVR_EVRStateSizeCheck;
  static_assert(sizeof(EVRState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
