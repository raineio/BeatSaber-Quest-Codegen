// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRProfile
#include "GlobalNamespace/OVRProfile.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProfile::State, "", "OVRProfile/State");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRProfile/State
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: 1087B68
  struct OVRProfile::State/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: State
    constexpr State(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRProfile/State NOT_TRIGGERED
    static constexpr const int NOT_TRIGGERED = 0;
    // Get static field: static public OVRProfile/State NOT_TRIGGERED
    static ::GlobalNamespace::OVRProfile::State _get_NOT_TRIGGERED();
    // Set static field: static public OVRProfile/State NOT_TRIGGERED
    static void _set_NOT_TRIGGERED(::GlobalNamespace::OVRProfile::State value);
    // static field const value: static public OVRProfile/State LOADING
    static constexpr const int LOADING = 1;
    // Get static field: static public OVRProfile/State LOADING
    static ::GlobalNamespace::OVRProfile::State _get_LOADING();
    // Set static field: static public OVRProfile/State LOADING
    static void _set_LOADING(::GlobalNamespace::OVRProfile::State value);
    // static field const value: static public OVRProfile/State READY
    static constexpr const int READY = 2;
    // Get static field: static public OVRProfile/State READY
    static ::GlobalNamespace::OVRProfile::State _get_READY();
    // Set static field: static public OVRProfile/State READY
    static void _set_READY(::GlobalNamespace::OVRProfile::State value);
    // static field const value: static public OVRProfile/State ERROR
    static constexpr const int ERROR = 3;
    // Get static field: static public OVRProfile/State ERROR
    static ::GlobalNamespace::OVRProfile::State _get_ERROR();
    // Set static field: static public OVRProfile/State ERROR
    static void _set_ERROR(::GlobalNamespace::OVRProfile::State value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRProfile/State
  #pragma pack(pop)
  static check_size<sizeof(OVRProfile::State), 0 + sizeof(int)> __GlobalNamespace_OVRProfile_StateSizeCheck;
  static_assert(sizeof(OVRProfile::State) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
