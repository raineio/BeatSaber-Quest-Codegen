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
  // Forward declaring type: StereoTargetEyeMask
  struct StereoTargetEyeMask;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StereoTargetEyeMask, "UnityEngine", "StereoTargetEyeMask");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.StereoTargetEyeMask
  // [TokenAttribute] Offset: FFFFFFFF
  struct StereoTargetEyeMask/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StereoTargetEyeMask
    constexpr StereoTargetEyeMask(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.StereoTargetEyeMask None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.StereoTargetEyeMask None
    static UnityEngine::StereoTargetEyeMask _get_None();
    // Set static field: static public UnityEngine.StereoTargetEyeMask None
    static void _set_None(UnityEngine::StereoTargetEyeMask value);
    // static field const value: static public UnityEngine.StereoTargetEyeMask Left
    static constexpr const int Left = 1;
    // Get static field: static public UnityEngine.StereoTargetEyeMask Left
    static UnityEngine::StereoTargetEyeMask _get_Left();
    // Set static field: static public UnityEngine.StereoTargetEyeMask Left
    static void _set_Left(UnityEngine::StereoTargetEyeMask value);
    // static field const value: static public UnityEngine.StereoTargetEyeMask Right
    static constexpr const int Right = 2;
    // Get static field: static public UnityEngine.StereoTargetEyeMask Right
    static UnityEngine::StereoTargetEyeMask _get_Right();
    // Set static field: static public UnityEngine.StereoTargetEyeMask Right
    static void _set_Right(UnityEngine::StereoTargetEyeMask value);
    // static field const value: static public UnityEngine.StereoTargetEyeMask Both
    static constexpr const int Both = 3;
    // Get static field: static public UnityEngine.StereoTargetEyeMask Both
    static UnityEngine::StereoTargetEyeMask _get_Both();
    // Set static field: static public UnityEngine.StereoTargetEyeMask Both
    static void _set_Both(UnityEngine::StereoTargetEyeMask value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.StereoTargetEyeMask
  #pragma pack(pop)
  static check_size<sizeof(StereoTargetEyeMask), 0 + sizeof(int)> __UnityEngine_StereoTargetEyeMaskSizeCheck;
  static_assert(sizeof(StereoTargetEyeMask) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
