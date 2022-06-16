// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_SphereInfo
  struct HAPI_SphereInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SphereInfo, "HoudiniEngineUnity", "HAPI_SphereInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_SphereInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_SphereInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single[] center
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> center;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x8
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_SphereInfo
    constexpr HAPI_SphereInfo(::ArrayW<float> center_ = ::ArrayW<float>(static_cast<void*>(nullptr)), float radius_ = {}) noexcept : center{center_}, radius{radius_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single[] center
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_center();
    // Get instance field reference: public System.Single radius
    [[deprecated("Use field access instead!")]] float& dyn_radius();
    // public System.Void .ctor(System.Boolean initialize_fields)
    // Offset: 0x16DF914
    HAPI_SphereInfo(bool initialize_fields);
  }; // HoudiniEngineUnity.HAPI_SphereInfo
  #pragma pack(pop)
  static check_size<sizeof(HAPI_SphereInfo), 8 + sizeof(float)> __HoudiniEngineUnity_HAPI_SphereInfoSizeCheck;
  static_assert(sizeof(HAPI_SphereInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_SphereInfo::HAPI_SphereInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
