// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.HmdMatrix44_t
#include "Valve/VR/HmdMatrix44_t.hpp"
// Including type: Valve.VR.HmdVector2_t
#include "Valve/VR/HmdVector2_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: VRTextureDepthInfo_t
  struct VRTextureDepthInfo_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRTextureDepthInfo_t, "Valve.VR", "VRTextureDepthInfo_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.VRTextureDepthInfo_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRTextureDepthInfo_t/*, public System::ValueType*/ {
    public:
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public Valve.VR.HmdMatrix44_t mProjection
    // Size: 0x40
    // Offset: 0x8
    Valve::VR::HmdMatrix44_t mProjection;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdMatrix44_t) == 0x40);
    // public Valve.VR.HmdVector2_t vRange
    // Size: 0x8
    // Offset: 0x48
    Valve::VR::HmdVector2_t vRange;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdVector2_t) == 0x8);
    public:
    // Creating value type constructor for type: VRTextureDepthInfo_t
    constexpr VRTextureDepthInfo_t(System::IntPtr handle_ = {}, Valve::VR::HmdMatrix44_t mProjection_ = {}, Valve::VR::HmdVector2_t vRange_ = {}) noexcept : handle{handle_}, mProjection{mProjection_}, vRange{vRange_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr handle
    System::IntPtr& dyn_handle();
    // Get instance field reference: public Valve.VR.HmdMatrix44_t mProjection
    Valve::VR::HmdMatrix44_t& dyn_mProjection();
    // Get instance field reference: public Valve.VR.HmdVector2_t vRange
    Valve::VR::HmdVector2_t& dyn_vRange();
  }; // Valve.VR.VRTextureDepthInfo_t
  #pragma pack(pop)
  static check_size<sizeof(VRTextureDepthInfo_t), 72 + sizeof(Valve::VR::HmdVector2_t)> __Valve_VR_VRTextureDepthInfo_tSizeCheck;
  static_assert(sizeof(VRTextureDepthInfo_t) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
