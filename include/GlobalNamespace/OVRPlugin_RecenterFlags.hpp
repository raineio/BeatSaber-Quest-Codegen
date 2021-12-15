// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::RecenterFlags, "", "OVRPlugin/RecenterFlags");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/RecenterFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::RecenterFlags/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RecenterFlags
    constexpr RecenterFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/RecenterFlags Default
    static constexpr const int Default = 0;
    // Get static field: static public OVRPlugin/RecenterFlags Default
    static GlobalNamespace::OVRPlugin::RecenterFlags _get_Default();
    // Set static field: static public OVRPlugin/RecenterFlags Default
    static void _set_Default(GlobalNamespace::OVRPlugin::RecenterFlags value);
    // static field const value: static public OVRPlugin/RecenterFlags IgnoreAll
    static constexpr const int IgnoreAll = -2147483648;
    // Get static field: static public OVRPlugin/RecenterFlags IgnoreAll
    static GlobalNamespace::OVRPlugin::RecenterFlags _get_IgnoreAll();
    // Set static field: static public OVRPlugin/RecenterFlags IgnoreAll
    static void _set_IgnoreAll(GlobalNamespace::OVRPlugin::RecenterFlags value);
    // static field const value: static public OVRPlugin/RecenterFlags Count
    static constexpr const int Count = -2147483647;
    // Get static field: static public OVRPlugin/RecenterFlags Count
    static GlobalNamespace::OVRPlugin::RecenterFlags _get_Count();
    // Set static field: static public OVRPlugin/RecenterFlags Count
    static void _set_Count(GlobalNamespace::OVRPlugin::RecenterFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRPlugin/RecenterFlags
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::RecenterFlags), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_RecenterFlagsSizeCheck;
  static_assert(sizeof(OVRPlugin::RecenterFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
