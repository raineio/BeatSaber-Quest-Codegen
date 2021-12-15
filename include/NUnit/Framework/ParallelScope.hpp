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
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: ParallelScope
  struct ParallelScope;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::ParallelScope, "NUnit.Framework", "ParallelScope");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.ParallelScope
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ParallelScope/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ParallelScope
    constexpr ParallelScope(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.ParallelScope None
    static constexpr const int None = 0;
    // Get static field: static public NUnit.Framework.ParallelScope None
    static NUnit::Framework::ParallelScope _get_None();
    // Set static field: static public NUnit.Framework.ParallelScope None
    static void _set_None(NUnit::Framework::ParallelScope value);
    // static field const value: static public NUnit.Framework.ParallelScope Self
    static constexpr const int Self = 1;
    // Get static field: static public NUnit.Framework.ParallelScope Self
    static NUnit::Framework::ParallelScope _get_Self();
    // Set static field: static public NUnit.Framework.ParallelScope Self
    static void _set_Self(NUnit::Framework::ParallelScope value);
    // static field const value: static public NUnit.Framework.ParallelScope Children
    static constexpr const int Children = 2;
    // Get static field: static public NUnit.Framework.ParallelScope Children
    static NUnit::Framework::ParallelScope _get_Children();
    // Set static field: static public NUnit.Framework.ParallelScope Children
    static void _set_Children(NUnit::Framework::ParallelScope value);
    // static field const value: static public NUnit.Framework.ParallelScope Fixtures
    static constexpr const int Fixtures = 4;
    // Get static field: static public NUnit.Framework.ParallelScope Fixtures
    static NUnit::Framework::ParallelScope _get_Fixtures();
    // Set static field: static public NUnit.Framework.ParallelScope Fixtures
    static void _set_Fixtures(NUnit::Framework::ParallelScope value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.ParallelScope
  #pragma pack(pop)
  static check_size<sizeof(ParallelScope), 0 + sizeof(int)> __NUnit_Framework_ParallelScopeSizeCheck;
  static_assert(sizeof(ParallelScope) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
