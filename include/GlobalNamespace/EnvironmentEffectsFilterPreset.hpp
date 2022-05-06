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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentEffectsFilterPreset
  struct EnvironmentEffectsFilterPreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentEffectsFilterPreset, "", "EnvironmentEffectsFilterPreset");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentEffectsFilterPreset
  // [TokenAttribute] Offset: FFFFFFFF
  struct EnvironmentEffectsFilterPreset/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EnvironmentEffectsFilterPreset
    constexpr EnvironmentEffectsFilterPreset(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public EnvironmentEffectsFilterPreset AllEffects
    static constexpr const int AllEffects = 0;
    // Get static field: static public EnvironmentEffectsFilterPreset AllEffects
    static ::GlobalNamespace::EnvironmentEffectsFilterPreset _get_AllEffects();
    // Set static field: static public EnvironmentEffectsFilterPreset AllEffects
    static void _set_AllEffects(::GlobalNamespace::EnvironmentEffectsFilterPreset value);
    // static field const value: static public EnvironmentEffectsFilterPreset StrobeFilter
    static constexpr const int StrobeFilter = 1;
    // Get static field: static public EnvironmentEffectsFilterPreset StrobeFilter
    static ::GlobalNamespace::EnvironmentEffectsFilterPreset _get_StrobeFilter();
    // Set static field: static public EnvironmentEffectsFilterPreset StrobeFilter
    static void _set_StrobeFilter(::GlobalNamespace::EnvironmentEffectsFilterPreset value);
    // static field const value: static public EnvironmentEffectsFilterPreset NoEffects
    static constexpr const int NoEffects = 10;
    // Get static field: static public EnvironmentEffectsFilterPreset NoEffects
    static ::GlobalNamespace::EnvironmentEffectsFilterPreset _get_NoEffects();
    // Set static field: static public EnvironmentEffectsFilterPreset NoEffects
    static void _set_NoEffects(::GlobalNamespace::EnvironmentEffectsFilterPreset value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // EnvironmentEffectsFilterPreset
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentEffectsFilterPreset), 0 + sizeof(int)> __GlobalNamespace_EnvironmentEffectsFilterPresetSizeCheck;
  static_assert(sizeof(EnvironmentEffectsFilterPreset) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
