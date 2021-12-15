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
  // Forward declaring type: EVRApplicationType
  struct EVRApplicationType;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRApplicationType, "Valve.VR", "EVRApplicationType");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRApplicationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRApplicationType/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRApplicationType
    constexpr EVRApplicationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_Other
    static constexpr const int VRApplication_Other = 0;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_Other
    static Valve::VR::EVRApplicationType _get_VRApplication_Other();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_Other
    static void _set_VRApplication_Other(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_Scene
    static constexpr const int VRApplication_Scene = 1;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_Scene
    static Valve::VR::EVRApplicationType _get_VRApplication_Scene();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_Scene
    static void _set_VRApplication_Scene(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_Overlay
    static constexpr const int VRApplication_Overlay = 2;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_Overlay
    static Valve::VR::EVRApplicationType _get_VRApplication_Overlay();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_Overlay
    static void _set_VRApplication_Overlay(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_Background
    static constexpr const int VRApplication_Background = 3;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_Background
    static Valve::VR::EVRApplicationType _get_VRApplication_Background();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_Background
    static void _set_VRApplication_Background(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_Utility
    static constexpr const int VRApplication_Utility = 4;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_Utility
    static Valve::VR::EVRApplicationType _get_VRApplication_Utility();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_Utility
    static void _set_VRApplication_Utility(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_VRMonitor
    static constexpr const int VRApplication_VRMonitor = 5;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_VRMonitor
    static Valve::VR::EVRApplicationType _get_VRApplication_VRMonitor();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_VRMonitor
    static void _set_VRApplication_VRMonitor(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_SteamWatchdog
    static constexpr const int VRApplication_SteamWatchdog = 6;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_SteamWatchdog
    static Valve::VR::EVRApplicationType _get_VRApplication_SteamWatchdog();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_SteamWatchdog
    static void _set_VRApplication_SteamWatchdog(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_Bootstrapper
    static constexpr const int VRApplication_Bootstrapper = 7;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_Bootstrapper
    static Valve::VR::EVRApplicationType _get_VRApplication_Bootstrapper();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_Bootstrapper
    static void _set_VRApplication_Bootstrapper(Valve::VR::EVRApplicationType value);
    // static field const value: static public Valve.VR.EVRApplicationType VRApplication_Max
    static constexpr const int VRApplication_Max = 8;
    // Get static field: static public Valve.VR.EVRApplicationType VRApplication_Max
    static Valve::VR::EVRApplicationType _get_VRApplication_Max();
    // Set static field: static public Valve.VR.EVRApplicationType VRApplication_Max
    static void _set_VRApplication_Max(Valve::VR::EVRApplicationType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.EVRApplicationType
  #pragma pack(pop)
  static check_size<sizeof(EVRApplicationType), 0 + sizeof(int)> __Valve_VR_EVRApplicationTypeSizeCheck;
  static_assert(sizeof(EVRApplicationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
