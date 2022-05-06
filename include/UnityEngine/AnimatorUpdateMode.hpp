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
  // Forward declaring type: AnimatorUpdateMode
  struct AnimatorUpdateMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorUpdateMode, "UnityEngine", "AnimatorUpdateMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimatorUpdateMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct AnimatorUpdateMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AnimatorUpdateMode
    constexpr AnimatorUpdateMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AnimatorUpdateMode Normal
    static constexpr const int Normal = 0;
    // Get static field: static public UnityEngine.AnimatorUpdateMode Normal
    static ::UnityEngine::AnimatorUpdateMode _get_Normal();
    // Set static field: static public UnityEngine.AnimatorUpdateMode Normal
    static void _set_Normal(::UnityEngine::AnimatorUpdateMode value);
    // static field const value: static public UnityEngine.AnimatorUpdateMode AnimatePhysics
    static constexpr const int AnimatePhysics = 1;
    // Get static field: static public UnityEngine.AnimatorUpdateMode AnimatePhysics
    static ::UnityEngine::AnimatorUpdateMode _get_AnimatePhysics();
    // Set static field: static public UnityEngine.AnimatorUpdateMode AnimatePhysics
    static void _set_AnimatePhysics(::UnityEngine::AnimatorUpdateMode value);
    // static field const value: static public UnityEngine.AnimatorUpdateMode UnscaledTime
    static constexpr const int UnscaledTime = 2;
    // Get static field: static public UnityEngine.AnimatorUpdateMode UnscaledTime
    static ::UnityEngine::AnimatorUpdateMode _get_UnscaledTime();
    // Set static field: static public UnityEngine.AnimatorUpdateMode UnscaledTime
    static void _set_UnscaledTime(::UnityEngine::AnimatorUpdateMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.AnimatorUpdateMode
  #pragma pack(pop)
  static check_size<sizeof(AnimatorUpdateMode), 0 + sizeof(int)> __UnityEngine_AnimatorUpdateModeSizeCheck;
  static_assert(sizeof(AnimatorUpdateMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
