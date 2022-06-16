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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayIntersectionMaskPrimitiveType
  struct EVROverlayIntersectionMaskPrimitiveType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::EVROverlayIntersectionMaskPrimitiveType, "Valve.VR", "EVROverlayIntersectionMaskPrimitiveType");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVROverlayIntersectionMaskPrimitiveType
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVROverlayIntersectionMaskPrimitiveType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVROverlayIntersectionMaskPrimitiveType
    constexpr EVROverlayIntersectionMaskPrimitiveType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static constexpr const int OverlayIntersectionPrimitiveType_Rectangle = 0;
    // Get static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static ::Valve::VR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Rectangle();
    // Set static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Rectangle
    static void _set_OverlayIntersectionPrimitiveType_Rectangle(::Valve::VR::EVROverlayIntersectionMaskPrimitiveType value);
    // static field const value: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static constexpr const int OverlayIntersectionPrimitiveType_Circle = 1;
    // Get static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static ::Valve::VR::EVROverlayIntersectionMaskPrimitiveType _get_OverlayIntersectionPrimitiveType_Circle();
    // Set static field: static public Valve.VR.EVROverlayIntersectionMaskPrimitiveType OverlayIntersectionPrimitiveType_Circle
    static void _set_OverlayIntersectionPrimitiveType_Circle(::Valve::VR::EVROverlayIntersectionMaskPrimitiveType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.EVROverlayIntersectionMaskPrimitiveType
  #pragma pack(pop)
  static check_size<sizeof(EVROverlayIntersectionMaskPrimitiveType), 0 + sizeof(int)> __Valve_VR_EVROverlayIntersectionMaskPrimitiveTypeSizeCheck;
  static_assert(sizeof(EVROverlayIntersectionMaskPrimitiveType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
