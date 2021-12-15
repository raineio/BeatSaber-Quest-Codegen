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
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: RenderModel_t
  struct RenderModel_t;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::RenderModel_t, "Valve.VR", "RenderModel_t");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.RenderModel_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_t/*, public System::ValueType*/ {
    public:
    public:
    // public System.IntPtr rVertexData
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr rVertexData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 unVertexCount
    // Size: 0x4
    // Offset: 0x8
    uint unVertexCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: unVertexCount and: rIndexData
    char __padding1[0x4] = {};
    // public System.IntPtr rIndexData
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr rIndexData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 unTriangleCount
    // Size: 0x4
    // Offset: 0x18
    uint unTriangleCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 diffuseTextureId
    // Size: 0x4
    // Offset: 0x1C
    int diffuseTextureId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderModel_t
    constexpr RenderModel_t(System::IntPtr rVertexData_ = {}, uint unVertexCount_ = {}, System::IntPtr rIndexData_ = {}, uint unTriangleCount_ = {}, int diffuseTextureId_ = {}) noexcept : rVertexData{rVertexData_}, unVertexCount{unVertexCount_}, rIndexData{rIndexData_}, unTriangleCount{unTriangleCount_}, diffuseTextureId{diffuseTextureId_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr rVertexData
    System::IntPtr& dyn_rVertexData();
    // Get instance field reference: public System.UInt32 unVertexCount
    uint& dyn_unVertexCount();
    // Get instance field reference: public System.IntPtr rIndexData
    System::IntPtr& dyn_rIndexData();
    // Get instance field reference: public System.UInt32 unTriangleCount
    uint& dyn_unTriangleCount();
    // Get instance field reference: public System.Int32 diffuseTextureId
    int& dyn_diffuseTextureId();
  }; // Valve.VR.RenderModel_t
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_t), 28 + sizeof(int)> __Valve_VR_RenderModel_tSizeCheck;
  static_assert(sizeof(RenderModel_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
