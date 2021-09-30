// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.ETrackingUniverseOrigin
  // [TokenAttribute] Offset: FFFFFFFF
  struct ETrackingUniverseOrigin/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ETrackingUniverseOrigin
    constexpr ETrackingUniverseOrigin(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseSeated
    static constexpr const int TrackingUniverseSeated = 0;
    // Get static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseSeated
    static Valve::VR::ETrackingUniverseOrigin _get_TrackingUniverseSeated();
    // Set static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseSeated
    static void _set_TrackingUniverseSeated(Valve::VR::ETrackingUniverseOrigin value);
    // static field const value: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseStanding
    static constexpr const int TrackingUniverseStanding = 1;
    // Get static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseStanding
    static Valve::VR::ETrackingUniverseOrigin _get_TrackingUniverseStanding();
    // Set static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseStanding
    static void _set_TrackingUniverseStanding(Valve::VR::ETrackingUniverseOrigin value);
    // static field const value: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static constexpr const int TrackingUniverseRawAndUncalibrated = 2;
    // Get static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static Valve::VR::ETrackingUniverseOrigin _get_TrackingUniverseRawAndUncalibrated();
    // Set static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static void _set_TrackingUniverseRawAndUncalibrated(Valve::VR::ETrackingUniverseOrigin value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Valve.VR.ETrackingUniverseOrigin
  #pragma pack(pop)
  static check_size<sizeof(ETrackingUniverseOrigin), 0 + sizeof(int)> __Valve_VR_ETrackingUniverseOriginSizeCheck;
  static_assert(sizeof(ETrackingUniverseOrigin) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::ETrackingUniverseOrigin, "Valve.VR", "ETrackingUniverseOrigin");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
