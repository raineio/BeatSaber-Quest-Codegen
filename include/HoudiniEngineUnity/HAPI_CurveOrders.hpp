// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_CurveOrders
  struct HAPI_CurveOrders;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CurveOrders, "HoudiniEngineUnity", "HAPI_CurveOrders");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_CurveOrders
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_CurveOrders/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_CurveOrders
    constexpr HAPI_CurveOrders(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_VARYING
    static constexpr const int HAPI_CURVE_ORDER_VARYING = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_VARYING
    static ::HoudiniEngineUnity::HAPI_CurveOrders _get_HAPI_CURVE_ORDER_VARYING();
    // Set static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_VARYING
    static void _set_HAPI_CURVE_ORDER_VARYING(::HoudiniEngineUnity::HAPI_CurveOrders value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_INVALID
    static constexpr const int HAPI_CURVE_ORDER_INVALID = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_INVALID
    static ::HoudiniEngineUnity::HAPI_CurveOrders _get_HAPI_CURVE_ORDER_INVALID();
    // Set static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_INVALID
    static void _set_HAPI_CURVE_ORDER_INVALID(::HoudiniEngineUnity::HAPI_CurveOrders value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_LINEAR
    static constexpr const int HAPI_CURVE_ORDER_LINEAR = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_LINEAR
    static ::HoudiniEngineUnity::HAPI_CurveOrders _get_HAPI_CURVE_ORDER_LINEAR();
    // Set static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_LINEAR
    static void _set_HAPI_CURVE_ORDER_LINEAR(::HoudiniEngineUnity::HAPI_CurveOrders value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_QUADRATIC
    static constexpr const int HAPI_CURVE_ORDER_QUADRATIC = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_QUADRATIC
    static ::HoudiniEngineUnity::HAPI_CurveOrders _get_HAPI_CURVE_ORDER_QUADRATIC();
    // Set static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_QUADRATIC
    static void _set_HAPI_CURVE_ORDER_QUADRATIC(::HoudiniEngineUnity::HAPI_CurveOrders value);
    // static field const value: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_CUBIC
    static constexpr const int HAPI_CURVE_ORDER_CUBIC = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_CUBIC
    static ::HoudiniEngineUnity::HAPI_CurveOrders _get_HAPI_CURVE_ORDER_CUBIC();
    // Set static field: static public HoudiniEngineUnity.HAPI_CurveOrders HAPI_CURVE_ORDER_CUBIC
    static void _set_HAPI_CURVE_ORDER_CUBIC(::HoudiniEngineUnity::HAPI_CurveOrders value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_CurveOrders
  #pragma pack(pop)
  static check_size<sizeof(HAPI_CurveOrders), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_CurveOrdersSizeCheck;
  static_assert(sizeof(HAPI_CurveOrders) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
