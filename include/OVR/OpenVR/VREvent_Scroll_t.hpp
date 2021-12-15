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
  // Forward declaring type: VREvent_Scroll_t
  struct VREvent_Scroll_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Scroll_t, "OVR.OpenVR", "VREvent_Scroll_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Scroll_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Scroll_t/*, public System::ValueType*/ {
    public:
    public:
    // public System.Single xdelta
    // Size: 0x4
    // Offset: 0x0
    float xdelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ydelta
    // Size: 0x4
    // Offset: 0x4
    float ydelta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.UInt32 repeatCount
    // Size: 0x4
    // Offset: 0x8
    uint repeatCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_Scroll_t
    constexpr VREvent_Scroll_t(float xdelta_ = {}, float ydelta_ = {}, uint repeatCount_ = {}) noexcept : xdelta{xdelta_}, ydelta{ydelta_}, repeatCount{repeatCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single xdelta
    float& dyn_xdelta();
    // Get instance field reference: public System.Single ydelta
    float& dyn_ydelta();
    // Get instance field reference: public System.UInt32 repeatCount
    uint& dyn_repeatCount();
  }; // OVR.OpenVR.VREvent_Scroll_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Scroll_t), 8 + sizeof(uint)> __OVR_OpenVR_VREvent_Scroll_tSizeCheck;
  static_assert(sizeof(VREvent_Scroll_t) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
