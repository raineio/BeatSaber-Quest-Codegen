// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.IntersectionMaskRectangle_t
#include "OVR/OpenVR/IntersectionMaskRectangle_t.hpp"
// Including type: OVR.OpenVR.IntersectionMaskCircle_t
#include "OVR/OpenVR/IntersectionMaskCircle_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VROverlayIntersectionMaskPrimitive_Data_t
  struct VROverlayIntersectionMaskPrimitive_Data_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_Data_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VROverlayIntersectionMaskPrimitive_Data_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VROverlayIntersectionMaskPrimitive_Data_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVR.OpenVR.IntersectionMaskRectangle_t m_Rectangle
    // Size: 0x10
    // Offset: 0x0
    ::OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IntersectionMaskRectangle_t) == 0x10);
    // public OVR.OpenVR.IntersectionMaskCircle_t m_Circle
    // Size: 0xC
    // Offset: 0x0
    ::OVR::OpenVR::IntersectionMaskCircle_t m_Circle;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IntersectionMaskCircle_t) == 0xC);
    public:
    // Creating value type constructor for type: VROverlayIntersectionMaskPrimitive_Data_t
    constexpr VROverlayIntersectionMaskPrimitive_Data_t(::OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle_ = {}, ::OVR::OpenVR::IntersectionMaskCircle_t m_Circle_ = {}) noexcept : m_Rectangle{m_Rectangle_}, m_Circle{m_Circle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.IntersectionMaskRectangle_t m_Rectangle
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IntersectionMaskRectangle_t& dyn_m_Rectangle();
    // Get instance field reference: public OVR.OpenVR.IntersectionMaskCircle_t m_Circle
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IntersectionMaskCircle_t& dyn_m_Circle();
  }; // OVR.OpenVR.VROverlayIntersectionMaskPrimitive_Data_t
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
