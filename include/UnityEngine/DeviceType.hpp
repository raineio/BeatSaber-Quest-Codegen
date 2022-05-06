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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DeviceType
  struct DeviceType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DeviceType, "UnityEngine", "DeviceType");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.DeviceType
  // [TokenAttribute] Offset: FFFFFFFF
  struct DeviceType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DeviceType
    constexpr DeviceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.DeviceType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public UnityEngine.DeviceType Unknown
    static ::UnityEngine::DeviceType _get_Unknown();
    // Set static field: static public UnityEngine.DeviceType Unknown
    static void _set_Unknown(::UnityEngine::DeviceType value);
    // static field const value: static public UnityEngine.DeviceType Handheld
    static constexpr const int Handheld = 1;
    // Get static field: static public UnityEngine.DeviceType Handheld
    static ::UnityEngine::DeviceType _get_Handheld();
    // Set static field: static public UnityEngine.DeviceType Handheld
    static void _set_Handheld(::UnityEngine::DeviceType value);
    // static field const value: static public UnityEngine.DeviceType Console
    static constexpr const int Console = 2;
    // Get static field: static public UnityEngine.DeviceType Console
    static ::UnityEngine::DeviceType _get_Console();
    // Set static field: static public UnityEngine.DeviceType Console
    static void _set_Console(::UnityEngine::DeviceType value);
    // static field const value: static public UnityEngine.DeviceType Desktop
    static constexpr const int Desktop = 3;
    // Get static field: static public UnityEngine.DeviceType Desktop
    static ::UnityEngine::DeviceType _get_Desktop();
    // Set static field: static public UnityEngine.DeviceType Desktop
    static void _set_Desktop(::UnityEngine::DeviceType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.DeviceType
  #pragma pack(pop)
  static check_size<sizeof(DeviceType), 0 + sizeof(int)> __UnityEngine_DeviceTypeSizeCheck;
  static_assert(sizeof(DeviceType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
