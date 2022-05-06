// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_Curve
#include "HoudiniEngineUnity/HEU_Curve.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Curve::CurveDrawCollision, "HoudiniEngineUnity", "HEU_Curve/CurveDrawCollision");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_Curve::CurveDrawCollision/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CurveDrawCollision
    constexpr CurveDrawCollision(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision COLLIDERS
    static constexpr const int COLLIDERS = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision COLLIDERS
    static ::HoudiniEngineUnity::HEU_Curve::CurveDrawCollision _get_COLLIDERS();
    // Set static field: static public HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision COLLIDERS
    static void _set_COLLIDERS(::HoudiniEngineUnity::HEU_Curve::CurveDrawCollision value);
    // static field const value: static public HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision LAYERMASK
    static constexpr const int LAYERMASK = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision LAYERMASK
    static ::HoudiniEngineUnity::HEU_Curve::CurveDrawCollision _get_LAYERMASK();
    // Set static field: static public HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision LAYERMASK
    static void _set_LAYERMASK(::HoudiniEngineUnity::HEU_Curve::CurveDrawCollision value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_Curve/HoudiniEngineUnity.CurveDrawCollision
  #pragma pack(pop)
  static check_size<sizeof(HEU_Curve::CurveDrawCollision), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_Curve_CurveDrawCollisionSizeCheck;
  static_assert(sizeof(HEU_Curve::CurveDrawCollision) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
