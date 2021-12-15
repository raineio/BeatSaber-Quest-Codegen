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
  // Forward declaring type: SortMethod
  struct SortMethod;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SortMethod, "UnityEngine.ProBuilder", "SortMethod");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SortMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct SortMethod/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SortMethod
    constexpr SortMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.SortMethod Clockwise
    static constexpr const int Clockwise = 0;
    // Get static field: static public UnityEngine.ProBuilder.SortMethod Clockwise
    static UnityEngine::ProBuilder::SortMethod _get_Clockwise();
    // Set static field: static public UnityEngine.ProBuilder.SortMethod Clockwise
    static void _set_Clockwise(UnityEngine::ProBuilder::SortMethod value);
    // static field const value: static public UnityEngine.ProBuilder.SortMethod CounterClockwise
    static constexpr const int CounterClockwise = 1;
    // Get static field: static public UnityEngine.ProBuilder.SortMethod CounterClockwise
    static UnityEngine::ProBuilder::SortMethod _get_CounterClockwise();
    // Set static field: static public UnityEngine.ProBuilder.SortMethod CounterClockwise
    static void _set_CounterClockwise(UnityEngine::ProBuilder::SortMethod value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.SortMethod
  #pragma pack(pop)
  static check_size<sizeof(SortMethod), 0 + sizeof(int)> __UnityEngine_ProBuilder_SortMethodSizeCheck;
  static_assert(sizeof(SortMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
