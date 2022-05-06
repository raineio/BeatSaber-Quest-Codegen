// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VREvent_HapticVibration_t
  struct VREvent_HapticVibration_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::VREvent_HapticVibration_t, "Valve.VR", "VREvent_HapticVibration_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VREvent_HapticVibration_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_HapticVibration_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 containerHandle
    // Size: 0x8
    // Offset: 0x0
    uint64_t containerHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 componentHandle
    // Size: 0x8
    // Offset: 0x8
    uint64_t componentHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Single fDurationSeconds
    // Size: 0x4
    // Offset: 0x10
    float fDurationSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fFrequency
    // Size: 0x4
    // Offset: 0x14
    float fFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fAmplitude
    // Size: 0x4
    // Offset: 0x18
    float fAmplitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_HapticVibration_t
    constexpr VREvent_HapticVibration_t(uint64_t containerHandle_ = {}, uint64_t componentHandle_ = {}, float fDurationSeconds_ = {}, float fFrequency_ = {}, float fAmplitude_ = {}) noexcept : containerHandle{containerHandle_}, componentHandle{componentHandle_}, fDurationSeconds{fDurationSeconds_}, fFrequency{fFrequency_}, fAmplitude{fAmplitude_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt64 containerHandle
    [[deprecated("Use field access instead!")]] uint64_t& dyn_containerHandle();
    // Get instance field reference: public System.UInt64 componentHandle
    [[deprecated("Use field access instead!")]] uint64_t& dyn_componentHandle();
    // Get instance field reference: public System.Single fDurationSeconds
    [[deprecated("Use field access instead!")]] float& dyn_fDurationSeconds();
    // Get instance field reference: public System.Single fFrequency
    [[deprecated("Use field access instead!")]] float& dyn_fFrequency();
    // Get instance field reference: public System.Single fAmplitude
    [[deprecated("Use field access instead!")]] float& dyn_fAmplitude();
  }; // Valve.VR.VREvent_HapticVibration_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_HapticVibration_t), 24 + sizeof(float)> __Valve_VR_VREvent_HapticVibration_tSizeCheck;
  static_assert(sizeof(VREvent_HapticVibration_t) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
