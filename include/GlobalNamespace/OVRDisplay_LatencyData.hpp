// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRDisplay
#include "GlobalNamespace/OVRDisplay.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDisplay::LatencyData, "", "OVRDisplay/LatencyData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRDisplay/LatencyData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRDisplay::LatencyData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single render
    // Size: 0x4
    // Offset: 0x0
    float render;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single timeWarp
    // Size: 0x4
    // Offset: 0x4
    float timeWarp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single postPresent
    // Size: 0x4
    // Offset: 0x8
    float postPresent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single renderError
    // Size: 0x4
    // Offset: 0xC
    float renderError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single timeWarpError
    // Size: 0x4
    // Offset: 0x10
    float timeWarpError;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: LatencyData
    constexpr LatencyData(float render_ = {}, float timeWarp_ = {}, float postPresent_ = {}, float renderError_ = {}, float timeWarpError_ = {}) noexcept : render{render_}, timeWarp{timeWarp_}, postPresent{postPresent_}, renderError{renderError_}, timeWarpError{timeWarpError_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single render
    [[deprecated("Use field access instead!")]] float& dyn_render();
    // Get instance field reference: public System.Single timeWarp
    [[deprecated("Use field access instead!")]] float& dyn_timeWarp();
    // Get instance field reference: public System.Single postPresent
    [[deprecated("Use field access instead!")]] float& dyn_postPresent();
    // Get instance field reference: public System.Single renderError
    [[deprecated("Use field access instead!")]] float& dyn_renderError();
    // Get instance field reference: public System.Single timeWarpError
    [[deprecated("Use field access instead!")]] float& dyn_timeWarpError();
  }; // OVRDisplay/LatencyData
  #pragma pack(pop)
  static check_size<sizeof(OVRDisplay::LatencyData), 16 + sizeof(float)> __GlobalNamespace_OVRDisplay_LatencyDataSizeCheck;
  static_assert(sizeof(OVRDisplay::LatencyData) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
