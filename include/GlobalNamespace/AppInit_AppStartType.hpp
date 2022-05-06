// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AppInit
#include "GlobalNamespace/AppInit.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit::AppStartType, "", "AppInit/AppStartType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AppInit/AppStartType
  // [TokenAttribute] Offset: FFFFFFFF
  struct AppInit::AppStartType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AppStartType
    constexpr AppStartType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AppInit/AppStartType AppStart
    static constexpr const int AppStart = 0;
    // Get static field: static public AppInit/AppStartType AppStart
    static ::GlobalNamespace::AppInit::AppStartType _get_AppStart();
    // Set static field: static public AppInit/AppStartType AppStart
    static void _set_AppStart(::GlobalNamespace::AppInit::AppStartType value);
    // static field const value: static public AppInit/AppStartType AppRestart
    static constexpr const int AppRestart = 1;
    // Get static field: static public AppInit/AppStartType AppRestart
    static ::GlobalNamespace::AppInit::AppStartType _get_AppRestart();
    // Set static field: static public AppInit/AppStartType AppRestart
    static void _set_AppRestart(::GlobalNamespace::AppInit::AppStartType value);
    // static field const value: static public AppInit/AppStartType MultiSceneEditor
    static constexpr const int MultiSceneEditor = 2;
    // Get static field: static public AppInit/AppStartType MultiSceneEditor
    static ::GlobalNamespace::AppInit::AppStartType _get_MultiSceneEditor();
    // Set static field: static public AppInit/AppStartType MultiSceneEditor
    static void _set_MultiSceneEditor(::GlobalNamespace::AppInit::AppStartType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // AppInit/AppStartType
  #pragma pack(pop)
  static check_size<sizeof(AppInit::AppStartType), 0 + sizeof(int)> __GlobalNamespace_AppInit_AppStartTypeSizeCheck;
  static_assert(sizeof(AppInit::AppStartType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
