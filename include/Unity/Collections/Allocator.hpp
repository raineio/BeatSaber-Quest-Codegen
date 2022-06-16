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
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: Allocator
  struct Allocator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Allocator, "Unity.Collections", "Allocator");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.Allocator
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 1044030
  struct Allocator/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Allocator
    constexpr Allocator(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Unity.Collections.Allocator Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public Unity.Collections.Allocator Invalid
    static ::Unity::Collections::Allocator _get_Invalid();
    // Set static field: static public Unity.Collections.Allocator Invalid
    static void _set_Invalid(::Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator None
    static constexpr const int None = 1;
    // Get static field: static public Unity.Collections.Allocator None
    static ::Unity::Collections::Allocator _get_None();
    // Set static field: static public Unity.Collections.Allocator None
    static void _set_None(::Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator Temp
    static constexpr const int Temp = 2;
    // Get static field: static public Unity.Collections.Allocator Temp
    static ::Unity::Collections::Allocator _get_Temp();
    // Set static field: static public Unity.Collections.Allocator Temp
    static void _set_Temp(::Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator TempJob
    static constexpr const int TempJob = 3;
    // Get static field: static public Unity.Collections.Allocator TempJob
    static ::Unity::Collections::Allocator _get_TempJob();
    // Set static field: static public Unity.Collections.Allocator TempJob
    static void _set_TempJob(::Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator Persistent
    static constexpr const int Persistent = 4;
    // Get static field: static public Unity.Collections.Allocator Persistent
    static ::Unity::Collections::Allocator _get_Persistent();
    // Set static field: static public Unity.Collections.Allocator Persistent
    static void _set_Persistent(::Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator AudioKernel
    static constexpr const int AudioKernel = 5;
    // Get static field: static public Unity.Collections.Allocator AudioKernel
    static ::Unity::Collections::Allocator _get_AudioKernel();
    // Set static field: static public Unity.Collections.Allocator AudioKernel
    static void _set_AudioKernel(::Unity::Collections::Allocator value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.Collections.Allocator
  #pragma pack(pop)
  static check_size<sizeof(Allocator), 0 + sizeof(int)> __Unity_Collections_AllocatorSizeCheck;
  static_assert(sizeof(Allocator) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
