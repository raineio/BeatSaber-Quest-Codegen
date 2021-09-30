// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/TrackingOrigin
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::TrackingOrigin/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TrackingOrigin
    constexpr TrackingOrigin(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/TrackingOrigin EyeLevel
    static constexpr const int EyeLevel = 0;
    // Get static field: static public OVRPlugin/TrackingOrigin EyeLevel
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_EyeLevel();
    // Set static field: static public OVRPlugin/TrackingOrigin EyeLevel
    static void _set_EyeLevel(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // static field const value: static public OVRPlugin/TrackingOrigin FloorLevel
    static constexpr const int FloorLevel = 1;
    // Get static field: static public OVRPlugin/TrackingOrigin FloorLevel
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_FloorLevel();
    // Set static field: static public OVRPlugin/TrackingOrigin FloorLevel
    static void _set_FloorLevel(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // static field const value: static public OVRPlugin/TrackingOrigin Stage
    static constexpr const int Stage = 2;
    // Get static field: static public OVRPlugin/TrackingOrigin Stage
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_Stage();
    // Set static field: static public OVRPlugin/TrackingOrigin Stage
    static void _set_Stage(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // static field const value: static public OVRPlugin/TrackingOrigin Count
    static constexpr const int Count = 3;
    // Get static field: static public OVRPlugin/TrackingOrigin Count
    static GlobalNamespace::OVRPlugin::TrackingOrigin _get_Count();
    // Set static field: static public OVRPlugin/TrackingOrigin Count
    static void _set_Count(GlobalNamespace::OVRPlugin::TrackingOrigin value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/TrackingOrigin
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::TrackingOrigin), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_TrackingOriginSizeCheck;
  static_assert(sizeof(OVRPlugin::TrackingOrigin) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::TrackingOrigin, "", "OVRPlugin/TrackingOrigin");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
