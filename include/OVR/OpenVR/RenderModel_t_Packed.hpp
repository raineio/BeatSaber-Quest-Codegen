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
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: RenderModel_t
  struct RenderModel_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: RenderModel_t_Packed
  struct RenderModel_t_Packed;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_t_Packed, "OVR.OpenVR", "RenderModel_t_Packed");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.RenderModel_t_Packed
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderModel_t_Packed/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr rVertexData
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr rVertexData;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.UInt32 unVertexCount
    // Size: 0x4
    // Offset: 0x8
    uint unVertexCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.IntPtr rIndexData
    // Size: 0x8
    // Offset: 0xC
    ::System::IntPtr rIndexData;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.UInt32 unTriangleCount
    // Size: 0x4
    // Offset: 0x14
    uint unTriangleCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Int32 diffuseTextureId
    // Size: 0x4
    // Offset: 0x18
    int diffuseTextureId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderModel_t_Packed
    constexpr RenderModel_t_Packed(::System::IntPtr rVertexData_ = {}, uint unVertexCount_ = {}, ::System::IntPtr rIndexData_ = {}, uint unTriangleCount_ = {}, int diffuseTextureId_ = {}) noexcept : rVertexData{rVertexData_}, unVertexCount{unVertexCount_}, rIndexData{rIndexData_}, unTriangleCount{unTriangleCount_}, diffuseTextureId{diffuseTextureId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr rVertexData
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_rVertexData();
    // Get instance field reference: public System.UInt32 unVertexCount
    [[deprecated("Use field access instead!")]] uint& dyn_unVertexCount();
    // Get instance field reference: public System.IntPtr rIndexData
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_rIndexData();
    // Get instance field reference: public System.UInt32 unTriangleCount
    [[deprecated("Use field access instead!")]] uint& dyn_unTriangleCount();
    // Get instance field reference: public System.Int32 diffuseTextureId
    [[deprecated("Use field access instead!")]] int& dyn_diffuseTextureId();
    // public System.Void .ctor(OVR.OpenVR.RenderModel_t unpacked)
    // Offset: 0x164F5FC
    RenderModel_t_Packed(::OVR::OpenVR::RenderModel_t unpacked);
    // public System.Void Unpack(ref OVR.OpenVR.RenderModel_t unpacked)
    // Offset: 0x164F628
    void Unpack(ByRef<::OVR::OpenVR::RenderModel_t> unpacked);
  }; // OVR.OpenVR.RenderModel_t_Packed
  #pragma pack(pop)
  static check_size<sizeof(RenderModel_t_Packed), 24 + sizeof(int)> __OVR_OpenVR_RenderModel_t_PackedSizeCheck;
  static_assert(sizeof(RenderModel_t_Packed) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::RenderModel_t_Packed::RenderModel_t_Packed
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::RenderModel_t_Packed::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::RenderModel_t_Packed::*)(ByRef<::OVR::OpenVR::RenderModel_t>)>(&OVR::OpenVR::RenderModel_t_Packed::Unpack)> {
  static const MethodInfo* get() {
    static auto* unpacked = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "RenderModel_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::RenderModel_t_Packed), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unpacked});
  }
};
