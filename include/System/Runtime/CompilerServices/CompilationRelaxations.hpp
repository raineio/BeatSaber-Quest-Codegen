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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CompilationRelaxations
  struct CompilationRelaxations;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CompilationRelaxations, "System.Runtime.CompilerServices", "CompilationRelaxations");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.CompilationRelaxations
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: EA1A94
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CompilationRelaxations/*, public System::Enum*/ {
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
    // Creating value type constructor for type: CompilationRelaxations
    constexpr CompilationRelaxations(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.CompilerServices.CompilationRelaxations NoStringInterning
    static constexpr const int NoStringInterning = 8;
    // Get static field: static public System.Runtime.CompilerServices.CompilationRelaxations NoStringInterning
    static System::Runtime::CompilerServices::CompilationRelaxations _get_NoStringInterning();
    // Set static field: static public System.Runtime.CompilerServices.CompilationRelaxations NoStringInterning
    static void _set_NoStringInterning(System::Runtime::CompilerServices::CompilationRelaxations value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.CompilerServices.CompilationRelaxations
  #pragma pack(pop)
  static check_size<sizeof(CompilationRelaxations), 0 + sizeof(int)> __System_Runtime_CompilerServices_CompilationRelaxationsSizeCheck;
  static_assert(sizeof(CompilationRelaxations) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
