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
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: LightMode
  struct LightMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightMode, "UnityEngine.Experimental.GlobalIllumination", "LightMode");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LightMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: LightMode
    constexpr LightMode(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightMode Realtime
    static constexpr const uint8_t Realtime = 0u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Realtime
    static ::UnityEngine::Experimental::GlobalIllumination::LightMode _get_Realtime();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Realtime
    static void _set_Realtime(::UnityEngine::Experimental::GlobalIllumination::LightMode value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightMode Mixed
    static constexpr const uint8_t Mixed = 1u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Mixed
    static ::UnityEngine::Experimental::GlobalIllumination::LightMode _get_Mixed();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Mixed
    static void _set_Mixed(::UnityEngine::Experimental::GlobalIllumination::LightMode value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightMode Baked
    static constexpr const uint8_t Baked = 2u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Baked
    static ::UnityEngine::Experimental::GlobalIllumination::LightMode _get_Baked();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Baked
    static void _set_Baked(::UnityEngine::Experimental::GlobalIllumination::LightMode value);
    // static field const value: static public UnityEngine.Experimental.GlobalIllumination.LightMode Unknown
    static constexpr const uint8_t Unknown = 3u;
    // Get static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Unknown
    static ::UnityEngine::Experimental::GlobalIllumination::LightMode _get_Unknown();
    // Set static field: static public UnityEngine.Experimental.GlobalIllumination.LightMode Unknown
    static void _set_Unknown(::UnityEngine::Experimental::GlobalIllumination::LightMode value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // UnityEngine.Experimental.GlobalIllumination.LightMode
  #pragma pack(pop)
  static check_size<sizeof(LightMode), 0 + sizeof(uint8_t)> __UnityEngine_Experimental_GlobalIllumination_LightModeSizeCheck;
  static_assert(sizeof(LightMode) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
