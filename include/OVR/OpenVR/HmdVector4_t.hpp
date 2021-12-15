// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdVector4_t
  struct HmdVector4_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdVector4_t, "OVR.OpenVR", "HmdVector4_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdVector4_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdVector4_t/*, public System::ValueType*/ {
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
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single v0
    float& dyn_v0();
    // Get instance field reference: public System.Single v1
    float& dyn_v1();
    // Get instance field reference: public System.Single v2
    float& dyn_v2();
    // Get instance field reference: public System.Single v3
    float& dyn_v3();
  }; // OVR.OpenVR.HmdVector4_t
  #pragma pack(pop)
  static check_size<sizeof(HmdVector4_t), 12 + sizeof(float)> __OVR_OpenVR_HmdVector4_tSizeCheck;
  static_assert(sizeof(HmdVector4_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
