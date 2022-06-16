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
  // Forward declaring type: ECollisionBoundsStyle
  struct ECollisionBoundsStyle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::ECollisionBoundsStyle, "Valve.VR", "ECollisionBoundsStyle");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.ECollisionBoundsStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct ECollisionBoundsStyle/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ECollisionBoundsStyle
    constexpr ECollisionBoundsStyle(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static constexpr const int COLLISION_BOUNDS_STYLE_BEGINNER = 0;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static ::Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_BEGINNER();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_BEGINNER
    static void _set_COLLISION_BOUNDS_STYLE_BEGINNER(::Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static constexpr const int COLLISION_BOUNDS_STYLE_INTERMEDIATE = 1;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static ::Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_INTERMEDIATE();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_INTERMEDIATE
    static void _set_COLLISION_BOUNDS_STYLE_INTERMEDIATE(::Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static constexpr const int COLLISION_BOUNDS_STYLE_SQUARES = 2;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static ::Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_SQUARES();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_SQUARES
    static void _set_COLLISION_BOUNDS_STYLE_SQUARES(::Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static constexpr const int COLLISION_BOUNDS_STYLE_ADVANCED = 3;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static ::Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_ADVANCED();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_ADVANCED
    static void _set_COLLISION_BOUNDS_STYLE_ADVANCED(::Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static constexpr const int COLLISION_BOUNDS_STYLE_NONE = 4;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static ::Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_NONE();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_NONE
    static void _set_COLLISION_BOUNDS_STYLE_NONE(::Valve::VR::ECollisionBoundsStyle value);
    // static field const value: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static constexpr const int COLLISION_BOUNDS_STYLE_COUNT = 5;
    // Get static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static ::Valve::VR::ECollisionBoundsStyle _get_COLLISION_BOUNDS_STYLE_COUNT();
    // Set static field: static public Valve.VR.ECollisionBoundsStyle COLLISION_BOUNDS_STYLE_COUNT
    static void _set_COLLISION_BOUNDS_STYLE_COUNT(::Valve::VR::ECollisionBoundsStyle value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Valve.VR.ECollisionBoundsStyle
  #pragma pack(pop)
  static check_size<sizeof(ECollisionBoundsStyle), 0 + sizeof(int)> __Valve_VR_ECollisionBoundsStyleSizeCheck;
  static_assert(sizeof(ECollisionBoundsStyle) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
