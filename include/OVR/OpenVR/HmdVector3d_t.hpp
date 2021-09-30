// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdVector3d_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdVector3d_t/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Double v0
    // Size: 0x8
    // Offset: 0x0
    double v0;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double v1
    // Size: 0x8
    // Offset: 0x8
    double v1;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double v2
    // Size: 0x8
    // Offset: 0x10
    double v2;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: HmdVector3d_t
    constexpr HmdVector3d_t(double v0_ = {}, double v1_ = {}, double v2_ = {}) noexcept : v0{v0_}, v1{v1_}, v2{v2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double v0
    double& dyn_v0();
    // Get instance field reference: public System.Double v1
    double& dyn_v1();
    // Get instance field reference: public System.Double v2
    double& dyn_v2();
  }; // OVR.OpenVR.HmdVector3d_t
  #pragma pack(pop)
  static check_size<sizeof(HmdVector3d_t), 16 + sizeof(double)> __OVR_OpenVR_HmdVector3d_tSizeCheck;
  static_assert(sizeof(HmdVector3d_t) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdVector3d_t, "OVR.OpenVR", "HmdVector3d_t");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
