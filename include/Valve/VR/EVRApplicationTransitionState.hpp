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
  // Forward declaring type: EVRApplicationTransitionState
  struct EVRApplicationTransitionState;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRApplicationTransitionState, "Valve.VR", "EVRApplicationTransitionState");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRApplicationTransitionState
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRApplicationTransitionState/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EVRApplicationTransitionState
    constexpr EVRApplicationTransitionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_None
    static constexpr const int VRApplicationTransition_None = 0;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_None
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_None();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_None
    static void _set_VRApplicationTransition_None(Valve::VR::EVRApplicationTransitionState value);
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static constexpr const int VRApplicationTransition_OldAppQuitSent = 10;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_OldAppQuitSent();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_OldAppQuitSent
    static void _set_VRApplicationTransition_OldAppQuitSent(Valve::VR::EVRApplicationTransitionState value);
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static constexpr const int VRApplicationTransition_WaitingForExternalLaunch = 11;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_WaitingForExternalLaunch();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_WaitingForExternalLaunch
    static void _set_VRApplicationTransition_WaitingForExternalLaunch(Valve::VR::EVRApplicationTransitionState value);
    // static field const value: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static constexpr const int VRApplicationTransition_NewAppLaunched = 20;
    // Get static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static Valve::VR::EVRApplicationTransitionState _get_VRApplicationTransition_NewAppLaunched();
    // Set static field: static public Valve.VR.EVRApplicationTransitionState VRApplicationTransition_NewAppLaunched
    static void _set_VRApplicationTransition_NewAppLaunched(Valve::VR::EVRApplicationTransitionState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRApplicationTransitionState
  #pragma pack(pop)
  static check_size<sizeof(EVRApplicationTransitionState), 0 + sizeof(int)> __Valve_VR_EVRApplicationTransitionStateSizeCheck;
  static_assert(sizeof(EVRApplicationTransitionState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
