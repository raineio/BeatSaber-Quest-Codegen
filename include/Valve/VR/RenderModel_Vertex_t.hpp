// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdVector3_t
#include "Valve/VR/HmdVector3_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: RenderModel_Vertex_t
  struct RenderModel_Vertex_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::RenderModel_Vertex_t, "Valve.VR", "RenderModel_Vertex_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.RenderModel_Vertex_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_Vertex_t/*, public System::ValueType*/ {
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
    // public Valve.VR.HmdVector3_t vPosition
    // Size: 0xC
    // Offset: 0x0
    Valve::VR::HmdVector3_t vPosition;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdVector3_t) == 0xC);
    // public Valve.VR.HmdVector3_t vNormal
    // Size: 0xC
    // Offset: 0xC
    Valve::VR::HmdVector3_t vNormal;
    // Field size check
    static_assert(sizeof(Valve::VR::HmdVector3_t) == 0xC);
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
    constexpr RenderModel_Vertex_t(Valve::VR::HmdVector3_t vPosition_ = {}, Valve::VR::HmdVector3_t vNormal_ = {}, float rfTextureCoord0_ = {}, float rfTextureCoord1_ = {}) noexcept : vPosition{vPosition_}, vNormal{vNormal_}, rfTextureCoord0{rfTextureCoord0_}, rfTextureCoord1{rfTextureCoord1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public Valve.VR.HmdVector3_t vPosition
    Valve::VR::HmdVector3_t& dyn_vPosition();
    // Get instance field reference: public Valve.VR.HmdVector3_t vNormal
    Valve::VR::HmdVector3_t& dyn_vNormal();
    // Get instance field reference: public System.Single rfTextureCoord0
    float& dyn_rfTextureCoord0();
    // Get instance field reference: public System.Single rfTextureCoord1
    float& dyn_rfTextureCoord1();
  }; // Valve.VR.RenderModel_Vertex_t
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_Vertex_t), 28 + sizeof(float)> __Valve_VR_RenderModel_Vertex_tSizeCheck;
  static_assert(sizeof(RenderModel_Vertex_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
