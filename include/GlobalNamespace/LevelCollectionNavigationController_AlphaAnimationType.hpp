// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelCollectionNavigationController
#include "GlobalNamespace/LevelCollectionNavigationController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionNavigationController::AlphaAnimationType, "", "LevelCollectionNavigationController/AlphaAnimationType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionNavigationController/AlphaAnimationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct LevelCollectionNavigationController::AlphaAnimationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AlphaAnimationType
    constexpr AlphaAnimationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LevelCollectionNavigationController/AlphaAnimationType In
    static constexpr const int In = 0;
    // Get static field: static public LevelCollectionNavigationController/AlphaAnimationType In
    static ::GlobalNamespace::LevelCollectionNavigationController::AlphaAnimationType _get_In();
    // Set static field: static public LevelCollectionNavigationController/AlphaAnimationType In
    static void _set_In(::GlobalNamespace::LevelCollectionNavigationController::AlphaAnimationType value);
    // static field const value: static public LevelCollectionNavigationController/AlphaAnimationType Out
    static constexpr const int Out = 1;
    // Get static field: static public LevelCollectionNavigationController/AlphaAnimationType Out
    static ::GlobalNamespace::LevelCollectionNavigationController::AlphaAnimationType _get_Out();
    // Set static field: static public LevelCollectionNavigationController/AlphaAnimationType Out
    static void _set_Out(::GlobalNamespace::LevelCollectionNavigationController::AlphaAnimationType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // LevelCollectionNavigationController/AlphaAnimationType
  #pragma pack(pop)
  static check_size<sizeof(LevelCollectionNavigationController::AlphaAnimationType), 0 + sizeof(int)> __GlobalNamespace_LevelCollectionNavigationController_AlphaAnimationTypeSizeCheck;
  static_assert(sizeof(LevelCollectionNavigationController::AlphaAnimationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
