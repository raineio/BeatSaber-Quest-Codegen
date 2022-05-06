// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: HmdVector4_t
  struct HmdVector4_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::HmdVector4_t, "Valve.VR", "HmdVector4_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.HmdVector4_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdVector4_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single v0
    // Size: 0x4
    // Offset: 0x0
    float v0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v1
    // Size: 0x4
    // Offset: 0x4
    float v1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v2
    // Size: 0x4
    // Offset: 0x8
    float v2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single v3
    // Size: 0x4
    // Offset: 0xC
    float v3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HmdVector4_t
    constexpr HmdVector4_t(float v0_ = {}, float v1_ = {}, float v2_ = {}, float v3_ = {}) noexcept : v0{v0_}, v1{v1_}, v2{v2_}, v3{v3_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single v0
    [[deprecated("Use field access instead!")]] float& dyn_v0();
    // Get instance field reference: public System.Single v1
    [[deprecated("Use field access instead!")]] float& dyn_v1();
    // Get instance field reference: public System.Single v2
    [[deprecated("Use field access instead!")]] float& dyn_v2();
    // Get instance field reference: public System.Single v3
    [[deprecated("Use field access instead!")]] float& dyn_v3();
  }; // Valve.VR.HmdVector4_t
  #pragma pack(pop)
  static check_size<sizeof(HmdVector4_t), 12 + sizeof(float)> __Valve_VR_HmdVector4_tSizeCheck;
  static_assert(sizeof(HmdVector4_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
