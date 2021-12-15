// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Axis1D
  struct Axis1D;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::Axis1D, "", "OVRInput/Axis1D");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/Axis1D
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::Axis1D/*, public System::Enum*/ {
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
    // Creating value type constructor for type: Axis1D
    constexpr Axis1D(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/Axis1D None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/Axis1D None
    static GlobalNamespace::OVRInput::Axis1D _get_None();
    // Set static field: static public OVRInput/Axis1D None
    static void _set_None(GlobalNamespace::OVRInput::Axis1D value);
    // static field const value: static public OVRInput/Axis1D PrimaryIndexTrigger
    static constexpr const int PrimaryIndexTrigger = 1;
    // Get static field: static public OVRInput/Axis1D PrimaryIndexTrigger
    static GlobalNamespace::OVRInput::Axis1D _get_PrimaryIndexTrigger();
    // Set static field: static public OVRInput/Axis1D PrimaryIndexTrigger
    static void _set_PrimaryIndexTrigger(GlobalNamespace::OVRInput::Axis1D value);
    // static field const value: static public OVRInput/Axis1D PrimaryHandTrigger
    static constexpr const int PrimaryHandTrigger = 4;
    // Get static field: static public OVRInput/Axis1D PrimaryHandTrigger
    static GlobalNamespace::OVRInput::Axis1D _get_PrimaryHandTrigger();
    // Set static field: static public OVRInput/Axis1D PrimaryHandTrigger
    static void _set_PrimaryHandTrigger(GlobalNamespace::OVRInput::Axis1D value);
    // static field const value: static public OVRInput/Axis1D SecondaryIndexTrigger
    static constexpr const int SecondaryIndexTrigger = 2;
    // Get static field: static public OVRInput/Axis1D SecondaryIndexTrigger
    static GlobalNamespace::OVRInput::Axis1D _get_SecondaryIndexTrigger();
    // Set static field: static public OVRInput/Axis1D SecondaryIndexTrigger
    static void _set_SecondaryIndexTrigger(GlobalNamespace::OVRInput::Axis1D value);
    // static field const value: static public OVRInput/Axis1D SecondaryHandTrigger
    static constexpr const int SecondaryHandTrigger = 8;
    // Get static field: static public OVRInput/Axis1D SecondaryHandTrigger
    static GlobalNamespace::OVRInput::Axis1D _get_SecondaryHandTrigger();
    // Set static field: static public OVRInput/Axis1D SecondaryHandTrigger
    static void _set_SecondaryHandTrigger(GlobalNamespace::OVRInput::Axis1D value);
    // static field const value: static public OVRInput/Axis1D Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/Axis1D Any
    static GlobalNamespace::OVRInput::Axis1D _get_Any();
    // Set static field: static public OVRInput/Axis1D Any
    static void _set_Any(GlobalNamespace::OVRInput::Axis1D value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRInput/Axis1D
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::Axis1D), 0 + sizeof(int)> __GlobalNamespace_OVRInput_Axis1DSizeCheck;
  static_assert(sizeof(OVRInput::Axis1D) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
