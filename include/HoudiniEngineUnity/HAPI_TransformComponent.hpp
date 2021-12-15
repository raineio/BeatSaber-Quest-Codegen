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
  // Forward declaring type: HAPI_TransformComponent
  struct HAPI_TransformComponent;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_TransformComponent, "HoudiniEngineUnity", "HAPI_TransformComponent");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_TransformComponent
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_TransformComponent/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_TransformComponent
    constexpr HAPI_TransformComponent(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TX
    static constexpr const int HAPI_TRANSFORM_TX = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TX
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_TX();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TX
    static void _set_HAPI_TRANSFORM_TX(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TY
    static constexpr const int HAPI_TRANSFORM_TY = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TY
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_TY();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TY
    static void _set_HAPI_TRANSFORM_TY(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TZ
    static constexpr const int HAPI_TRANSFORM_TZ = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TZ
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_TZ();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_TZ
    static void _set_HAPI_TRANSFORM_TZ(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RX
    static constexpr const int HAPI_TRANSFORM_RX = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RX
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_RX();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RX
    static void _set_HAPI_TRANSFORM_RX(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RY
    static constexpr const int HAPI_TRANSFORM_RY = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RY
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_RY();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RY
    static void _set_HAPI_TRANSFORM_RY(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RZ
    static constexpr const int HAPI_TRANSFORM_RZ = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RZ
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_RZ();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_RZ
    static void _set_HAPI_TRANSFORM_RZ(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QX
    static constexpr const int HAPI_TRANSFORM_QX = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QX
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_QX();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QX
    static void _set_HAPI_TRANSFORM_QX(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QY
    static constexpr const int HAPI_TRANSFORM_QY = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QY
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_QY();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QY
    static void _set_HAPI_TRANSFORM_QY(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QZ
    static constexpr const int HAPI_TRANSFORM_QZ = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QZ
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_QZ();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QZ
    static void _set_HAPI_TRANSFORM_QZ(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QW
    static constexpr const int HAPI_TRANSFORM_QW = 9;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QW
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_QW();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_QW
    static void _set_HAPI_TRANSFORM_QW(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SX
    static constexpr const int HAPI_TRANSFORM_SX = 10;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SX
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_SX();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SX
    static void _set_HAPI_TRANSFORM_SX(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SY
    static constexpr const int HAPI_TRANSFORM_SY = 11;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SY
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_SY();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SY
    static void _set_HAPI_TRANSFORM_SY(HoudiniEngineUnity::HAPI_TransformComponent value);
    // static field const value: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SZ
    static constexpr const int HAPI_TRANSFORM_SZ = 12;
    // Get static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SZ
    static HoudiniEngineUnity::HAPI_TransformComponent _get_HAPI_TRANSFORM_SZ();
    // Set static field: static public HoudiniEngineUnity.HAPI_TransformComponent HAPI_TRANSFORM_SZ
    static void _set_HAPI_TRANSFORM_SZ(HoudiniEngineUnity::HAPI_TransformComponent value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_TransformComponent
  #pragma pack(pop)
  static check_size<sizeof(HAPI_TransformComponent), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_TransformComponentSizeCheck;
  static_assert(sizeof(HAPI_TransformComponent) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
