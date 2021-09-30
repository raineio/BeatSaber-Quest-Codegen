// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LightType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightType/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LightType
    constexpr LightType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.LightType Spot
    static constexpr const int Spot = 0;
    // Get static field: static public UnityEngine.LightType Spot
    static UnityEngine::LightType _get_Spot();
    // Set static field: static public UnityEngine.LightType Spot
    static void _set_Spot(UnityEngine::LightType value);
    // static field const value: static public UnityEngine.LightType Directional
    static constexpr const int Directional = 1;
    // Get static field: static public UnityEngine.LightType Directional
    static UnityEngine::LightType _get_Directional();
    // Set static field: static public UnityEngine.LightType Directional
    static void _set_Directional(UnityEngine::LightType value);
    // static field const value: static public UnityEngine.LightType Point
    static constexpr const int Point = 2;
    // Get static field: static public UnityEngine.LightType Point
    static UnityEngine::LightType _get_Point();
    // Set static field: static public UnityEngine.LightType Point
    static void _set_Point(UnityEngine::LightType value);
    // static field const value: static public UnityEngine.LightType Area
    static constexpr const int Area = 3;
    // Get static field: static public UnityEngine.LightType Area
    static UnityEngine::LightType _get_Area();
    // Set static field: static public UnityEngine.LightType Area
    static void _set_Area(UnityEngine::LightType value);
    // static field const value: static public UnityEngine.LightType Rectangle
    static constexpr const int Rectangle = 3;
    // Get static field: static public UnityEngine.LightType Rectangle
    static UnityEngine::LightType _get_Rectangle();
    // Set static field: static public UnityEngine.LightType Rectangle
    static void _set_Rectangle(UnityEngine::LightType value);
    // static field const value: static public UnityEngine.LightType Disc
    static constexpr const int Disc = 4;
    // Get static field: static public UnityEngine.LightType Disc
    static UnityEngine::LightType _get_Disc();
    // Set static field: static public UnityEngine.LightType Disc
    static void _set_Disc(UnityEngine::LightType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.LightType
  #pragma pack(pop)
  static check_size<sizeof(LightType), 0 + sizeof(int)> __UnityEngine_LightTypeSizeCheck;
  static_assert(sizeof(LightType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightType, "UnityEngine", "LightType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
