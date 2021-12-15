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
  // Forward declaring type: SelectionModifierBehavior
  struct SelectionModifierBehavior;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionModifierBehavior, "UnityEngine.ProBuilder", "SelectionModifierBehavior");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectionModifierBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  struct SelectionModifierBehavior/*, public System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SelectionModifierBehavior
    constexpr SelectionModifierBehavior(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.SelectionModifierBehavior Add
    static constexpr const int Add = 0;
    // Get static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Add
    static UnityEngine::ProBuilder::SelectionModifierBehavior _get_Add();
    // Set static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Add
    static void _set_Add(UnityEngine::ProBuilder::SelectionModifierBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.SelectionModifierBehavior Subtract
    static constexpr const int Subtract = 1;
    // Get static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Subtract
    static UnityEngine::ProBuilder::SelectionModifierBehavior _get_Subtract();
    // Set static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Subtract
    static void _set_Subtract(UnityEngine::ProBuilder::SelectionModifierBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.SelectionModifierBehavior Difference
    static constexpr const int Difference = 2;
    // Get static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Difference
    static UnityEngine::ProBuilder::SelectionModifierBehavior _get_Difference();
    // Set static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Difference
    static void _set_Difference(UnityEngine::ProBuilder::SelectionModifierBehavior value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.SelectionModifierBehavior
  #pragma pack(pop)
  static check_size<sizeof(SelectionModifierBehavior), 0 + sizeof(int)> __UnityEngine_ProBuilder_SelectionModifierBehaviorSizeCheck;
  static_assert(sizeof(SelectionModifierBehavior) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
