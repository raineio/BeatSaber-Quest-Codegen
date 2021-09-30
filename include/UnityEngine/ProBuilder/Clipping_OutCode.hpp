// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Clipping
#include "UnityEngine/ProBuilder/Clipping.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct Clipping::OutCode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: OutCode
    constexpr OutCode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Inside
    static constexpr const int Inside = 0;
    // Get static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Inside
    static UnityEngine::ProBuilder::Clipping::OutCode _get_Inside();
    // Set static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Inside
    static void _set_Inside(UnityEngine::ProBuilder::Clipping::OutCode value);
    // static field const value: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Left
    static constexpr const int Left = 1;
    // Get static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Left
    static UnityEngine::ProBuilder::Clipping::OutCode _get_Left();
    // Set static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Left
    static void _set_Left(UnityEngine::ProBuilder::Clipping::OutCode value);
    // static field const value: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Right
    static constexpr const int Right = 2;
    // Get static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Right
    static UnityEngine::ProBuilder::Clipping::OutCode _get_Right();
    // Set static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Right
    static void _set_Right(UnityEngine::ProBuilder::Clipping::OutCode value);
    // static field const value: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Bottom
    static constexpr const int Bottom = 4;
    // Get static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Bottom
    static UnityEngine::ProBuilder::Clipping::OutCode _get_Bottom();
    // Set static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Bottom
    static void _set_Bottom(UnityEngine::ProBuilder::Clipping::OutCode value);
    // static field const value: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Top
    static constexpr const int Top = 8;
    // Get static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Top
    static UnityEngine::ProBuilder::Clipping::OutCode _get_Top();
    // Set static field: static public UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode Top
    static void _set_Top(UnityEngine::ProBuilder::Clipping::OutCode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.Clipping/UnityEngine.ProBuilder.OutCode
  #pragma pack(pop)
  static check_size<sizeof(Clipping::OutCode), 0 + sizeof(int)> __UnityEngine_ProBuilder_Clipping_OutCodeSizeCheck;
  static_assert(sizeof(Clipping::OutCode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Clipping::OutCode, "UnityEngine.ProBuilder", "Clipping/OutCode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
