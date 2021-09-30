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
  // Autogenerated type: UnityEngine.ParticleSystemGradientMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystemGradientMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ParticleSystemGradientMode
    constexpr ParticleSystemGradientMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemGradientMode Color
    static constexpr const int Color = 0;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode Color
    static UnityEngine::ParticleSystemGradientMode _get_Color();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode Color
    static void _set_Color(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode Gradient
    static constexpr const int Gradient = 1;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode Gradient
    static UnityEngine::ParticleSystemGradientMode _get_Gradient();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode Gradient
    static void _set_Gradient(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode TwoColors
    static constexpr const int TwoColors = 2;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode TwoColors
    static UnityEngine::ParticleSystemGradientMode _get_TwoColors();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode TwoColors
    static void _set_TwoColors(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode TwoGradients
    static constexpr const int TwoGradients = 3;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode TwoGradients
    static UnityEngine::ParticleSystemGradientMode _get_TwoGradients();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode TwoGradients
    static void _set_TwoGradients(UnityEngine::ParticleSystemGradientMode value);
    // static field const value: static public UnityEngine.ParticleSystemGradientMode RandomColor
    static constexpr const int RandomColor = 4;
    // Get static field: static public UnityEngine.ParticleSystemGradientMode RandomColor
    static UnityEngine::ParticleSystemGradientMode _get_RandomColor();
    // Set static field: static public UnityEngine.ParticleSystemGradientMode RandomColor
    static void _set_RandomColor(UnityEngine::ParticleSystemGradientMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ParticleSystemGradientMode
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemGradientMode), 0 + sizeof(int)> __UnityEngine_ParticleSystemGradientModeSizeCheck;
  static_assert(sizeof(ParticleSystemGradientMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemGradientMode, "UnityEngine", "ParticleSystemGradientMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
