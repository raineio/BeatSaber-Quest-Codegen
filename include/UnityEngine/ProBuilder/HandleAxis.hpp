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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.HandleAxis
  // [TokenAttribute] Offset: FFFFFFFF
  struct HandleAxis/*, public System::Enum*/ {
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
    // Creating value type constructor for type: HandleAxis
    constexpr HandleAxis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis X
    static constexpr const int X = 1;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis X
    static UnityEngine::ProBuilder::HandleAxis _get_X();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis X
    static void _set_X(UnityEngine::ProBuilder::HandleAxis value);
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis Y
    static constexpr const int Y = 2;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis Y
    static UnityEngine::ProBuilder::HandleAxis _get_Y();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis Y
    static void _set_Y(UnityEngine::ProBuilder::HandleAxis value);
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis Z
    static constexpr const int Z = 4;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis Z
    static UnityEngine::ProBuilder::HandleAxis _get_Z();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis Z
    static void _set_Z(UnityEngine::ProBuilder::HandleAxis value);
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis Free
    static constexpr const int Free = 8;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis Free
    static UnityEngine::ProBuilder::HandleAxis _get_Free();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis Free
    static void _set_Free(UnityEngine::ProBuilder::HandleAxis value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.HandleAxis
  #pragma pack(pop)
  static check_size<sizeof(HandleAxis), 0 + sizeof(int)> __UnityEngine_ProBuilder_HandleAxisSizeCheck;
  static_assert(sizeof(HandleAxis) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleAxis, "UnityEngine.ProBuilder", "HandleAxis");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
