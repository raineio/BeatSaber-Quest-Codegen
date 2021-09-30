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
  // Autogenerated type: OVRPlugin/Handedness
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Handedness/*, public System::Enum*/ {
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
    // Creating value type constructor for type: Handedness
    constexpr Handedness(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Handedness Unsupported
    static constexpr const int Unsupported = 0;
    // Get static field: static public OVRPlugin/Handedness Unsupported
    static GlobalNamespace::OVRPlugin::Handedness _get_Unsupported();
    // Set static field: static public OVRPlugin/Handedness Unsupported
    static void _set_Unsupported(GlobalNamespace::OVRPlugin::Handedness value);
    // static field const value: static public OVRPlugin/Handedness LeftHanded
    static constexpr const int LeftHanded = 1;
    // Get static field: static public OVRPlugin/Handedness LeftHanded
    static GlobalNamespace::OVRPlugin::Handedness _get_LeftHanded();
    // Set static field: static public OVRPlugin/Handedness LeftHanded
    static void _set_LeftHanded(GlobalNamespace::OVRPlugin::Handedness value);
    // static field const value: static public OVRPlugin/Handedness RightHanded
    static constexpr const int RightHanded = 2;
    // Get static field: static public OVRPlugin/Handedness RightHanded
    static GlobalNamespace::OVRPlugin::Handedness _get_RightHanded();
    // Set static field: static public OVRPlugin/Handedness RightHanded
    static void _set_RightHanded(GlobalNamespace::OVRPlugin::Handedness value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/Handedness
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Handedness), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_HandednessSizeCheck;
  static_assert(sizeof(OVRPlugin::Handedness) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Handedness, "", "OVRPlugin/Handedness");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
