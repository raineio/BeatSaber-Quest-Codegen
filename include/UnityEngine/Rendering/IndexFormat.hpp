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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IndexFormat
  struct IndexFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndexFormat, "UnityEngine.Rendering", "IndexFormat");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.IndexFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct IndexFormat/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: IndexFormat
    constexpr IndexFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.IndexFormat UInt16
    static constexpr const int UInt16 = 0;
    // Get static field: static public UnityEngine.Rendering.IndexFormat UInt16
    static ::UnityEngine::Rendering::IndexFormat _get_UInt16();
    // Set static field: static public UnityEngine.Rendering.IndexFormat UInt16
    static void _set_UInt16(::UnityEngine::Rendering::IndexFormat value);
    // static field const value: static public UnityEngine.Rendering.IndexFormat UInt32
    static constexpr const int UInt32 = 1;
    // Get static field: static public UnityEngine.Rendering.IndexFormat UInt32
    static ::UnityEngine::Rendering::IndexFormat _get_UInt32();
    // Set static field: static public UnityEngine.Rendering.IndexFormat UInt32
    static void _set_UInt32(::UnityEngine::Rendering::IndexFormat value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Rendering.IndexFormat
  #pragma pack(pop)
  static check_size<sizeof(IndexFormat), 0 + sizeof(int)> __UnityEngine_Rendering_IndexFormatSizeCheck;
  static_assert(sizeof(IndexFormat) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
