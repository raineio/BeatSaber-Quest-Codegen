// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.VRTextureDepthInfo_t
#include "OVR/OpenVR/VRTextureDepthInfo_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRTextureWithDepth_t
  struct VRTextureWithDepth_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRTextureWithDepth_t, "OVR.OpenVR", "VRTextureWithDepth_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VRTextureWithDepth_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VRTextureWithDepth_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVR.OpenVR.VRTextureDepthInfo_t depth
    // Size: 0x50
    // Offset: 0x0
    ::OVR::OpenVR::VRTextureDepthInfo_t depth;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::VRTextureDepthInfo_t) == 0x50);
    public:
    // Creating value type constructor for type: VRTextureWithDepth_t
    constexpr VRTextureWithDepth_t(::OVR::OpenVR::VRTextureDepthInfo_t depth_ = {}) noexcept : depth{depth_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::OVR::OpenVR::VRTextureDepthInfo_t
    constexpr operator ::OVR::OpenVR::VRTextureDepthInfo_t() const noexcept {
      return depth;
    }
    // Get instance field reference: public OVR.OpenVR.VRTextureDepthInfo_t depth
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::VRTextureDepthInfo_t& dyn_depth();
  }; // OVR.OpenVR.VRTextureWithDepth_t
  #pragma pack(pop)
  static check_size<sizeof(VRTextureWithDepth_t), 0 + sizeof(::OVR::OpenVR::VRTextureDepthInfo_t)> __OVR_OpenVR_VRTextureWithDepth_tSizeCheck;
  static_assert(sizeof(VRTextureWithDepth_t) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
