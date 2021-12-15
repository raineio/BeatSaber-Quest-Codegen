// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: RenderModel_Vertex_t
  struct RenderModel_Vertex_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_Vertex_t, "OVR.OpenVR", "RenderModel_Vertex_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.RenderModel_Vertex_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_Vertex_t/*, public System::ValueType*/ {
    public:
    public:
    // public OVR.OpenVR.HmdVector3_t vPosition
    // Size: 0xC
    // Offset: 0x0
    OVR::OpenVR::HmdVector3_t vPosition;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // public OVR.OpenVR.HmdVector3_t vNormal
    // Size: 0xC
    // Offset: 0xC
    OVR::OpenVR::HmdVector3_t vNormal;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::HmdVector3_t) == 0xC);
    // public System.Single rfTextureCoord0
    // Size: 0x4
    // Offset: 0x18
    float rfTextureCoord0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rfTextureCoord1
    // Size: 0x4
    // Offset: 0x1C
    float rfTextureCoord1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: RenderModel_Vertex_t
    constexpr RenderModel_Vertex_t(OVR::OpenVR::HmdVector3_t vPosition_ = {}, OVR::OpenVR::HmdVector3_t vNormal_ = {}, float rfTextureCoord0_ = {}, float rfTextureCoord1_ = {}) noexcept : vPosition{vPosition_}, vNormal{vNormal_}, rfTextureCoord0{rfTextureCoord0_}, rfTextureCoord1{rfTextureCoord1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVR.OpenVR.HmdVector3_t vPosition
    OVR::OpenVR::HmdVector3_t& dyn_vPosition();
    // Get instance field reference: public OVR.OpenVR.HmdVector3_t vNormal
    OVR::OpenVR::HmdVector3_t& dyn_vNormal();
    // Get instance field reference: public System.Single rfTextureCoord0
    float& dyn_rfTextureCoord0();
    // Get instance field reference: public System.Single rfTextureCoord1
    float& dyn_rfTextureCoord1();
  }; // OVR.OpenVR.RenderModel_Vertex_t
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_Vertex_t), 28 + sizeof(float)> __OVR_OpenVR_RenderModel_Vertex_tSizeCheck;
  static_assert(sizeof(RenderModel_Vertex_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
