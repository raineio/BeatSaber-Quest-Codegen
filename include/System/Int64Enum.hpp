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
// Type namespace: System
namespace System {
  // Forward declaring type: Int64Enum
  struct Int64Enum;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Int64Enum, "System", "Int64Enum");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // Autogenerated type: System.Int64Enum
  // [TokenAttribute] Offset: FFFFFFFF
  struct Int64Enum/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int64 value__
    // Size: 0x8
    // Offset: 0x0
    int64_t value;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: Int64Enum
    constexpr Int64Enum(int64_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Int64 value__
    [[deprecated("Use field access instead!")]] int64_t& dyn_value__();
  }; // System.Int64Enum
  #pragma pack(pop)
  static check_size<sizeof(Int64Enum), 0 + sizeof(int64_t)> __System_Int64EnumSizeCheck;
  static_assert(sizeof(Int64Enum) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
