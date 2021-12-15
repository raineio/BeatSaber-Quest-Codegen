// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_Keyframe
  struct HAPI_Keyframe;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_Keyframe, "HoudiniEngineUnity", "HAPI_Keyframe");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_Keyframe
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_Keyframe/*, public System::ValueType*/ {
    public:
    public:
    // public System.Single time
    // Size: 0x4
    // Offset: 0x0
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single value
    // Size: 0x4
    // Offset: 0x4
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single inTangent
    // Size: 0x4
    // Offset: 0x8
    float inTangent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single outTangent
    // Size: 0x4
    // Offset: 0xC
    float outTangent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_Keyframe
    constexpr HAPI_Keyframe(float time_ = {}, float value_ = {}, float inTangent_ = {}, float outTangent_ = {}) noexcept : time{time_}, value{value_}, inTangent{inTangent_}, outTangent{outTangent_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single time
    float& dyn_time();
    // Get instance field reference: public System.Single value
    float& dyn_value();
    // Get instance field reference: public System.Single inTangent
    float& dyn_inTangent();
    // Get instance field reference: public System.Single outTangent
    float& dyn_outTangent();
    // public System.Void .ctor(System.Single t, System.Single v, System.Single in_tangent, System.Single out_tangent)
    // Offset: 0x1462D68
    // ABORTED: conflicts with another method.  HAPI_Keyframe(float t, float v, float in_tangent, float out_tangent);
  }; // HoudiniEngineUnity.HAPI_Keyframe
  #pragma pack(pop)
  static check_size<sizeof(HAPI_Keyframe), 12 + sizeof(float)> __HoudiniEngineUnity_HAPI_KeyframeSizeCheck;
  static_assert(sizeof(HAPI_Keyframe) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_Keyframe::HAPI_Keyframe
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
