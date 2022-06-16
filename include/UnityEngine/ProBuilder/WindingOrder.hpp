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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WindingOrder
  struct WindingOrder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WindingOrder, "UnityEngine.ProBuilder", "WindingOrder");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.WindingOrder
  // [TokenAttribute] Offset: FFFFFFFF
  struct WindingOrder/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WindingOrder
    constexpr WindingOrder(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public UnityEngine.ProBuilder.WindingOrder Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public UnityEngine.ProBuilder.WindingOrder Unknown
    static ::UnityEngine::ProBuilder::WindingOrder _get_Unknown();
    // Set static field: static public UnityEngine.ProBuilder.WindingOrder Unknown
    static void _set_Unknown(::UnityEngine::ProBuilder::WindingOrder value);
    // static field const value: static public UnityEngine.ProBuilder.WindingOrder Clockwise
    static constexpr const int Clockwise = 1;
    // Get static field: static public UnityEngine.ProBuilder.WindingOrder Clockwise
    static ::UnityEngine::ProBuilder::WindingOrder _get_Clockwise();
    // Set static field: static public UnityEngine.ProBuilder.WindingOrder Clockwise
    static void _set_Clockwise(::UnityEngine::ProBuilder::WindingOrder value);
    // static field const value: static public UnityEngine.ProBuilder.WindingOrder CounterClockwise
    static constexpr const int CounterClockwise = 2;
    // Get static field: static public UnityEngine.ProBuilder.WindingOrder CounterClockwise
    static ::UnityEngine::ProBuilder::WindingOrder _get_CounterClockwise();
    // Set static field: static public UnityEngine.ProBuilder.WindingOrder CounterClockwise
    static void _set_CounterClockwise(::UnityEngine::ProBuilder::WindingOrder value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ProBuilder.WindingOrder
  #pragma pack(pop)
  static check_size<sizeof(WindingOrder), 0 + sizeof(int)> __UnityEngine_ProBuilder_WindingOrderSizeCheck;
  static_assert(sizeof(WindingOrder) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
