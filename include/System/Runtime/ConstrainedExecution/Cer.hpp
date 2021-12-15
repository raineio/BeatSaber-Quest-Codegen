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
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Forward declaring type: Cer
  struct Cer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::Cer, "System.Runtime.ConstrainedExecution", "Cer");
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.ConstrainedExecution.Cer
  // [TokenAttribute] Offset: FFFFFFFF
  struct Cer/*, public System::Enum*/ {
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
    // Creating value type constructor for type: Cer
    constexpr Cer(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.ConstrainedExecution.Cer None
    static constexpr const int None = 0;
    // Get static field: static public System.Runtime.ConstrainedExecution.Cer None
    static System::Runtime::ConstrainedExecution::Cer _get_None();
    // Set static field: static public System.Runtime.ConstrainedExecution.Cer None
    static void _set_None(System::Runtime::ConstrainedExecution::Cer value);
    // static field const value: static public System.Runtime.ConstrainedExecution.Cer MayFail
    static constexpr const int MayFail = 1;
    // Get static field: static public System.Runtime.ConstrainedExecution.Cer MayFail
    static System::Runtime::ConstrainedExecution::Cer _get_MayFail();
    // Set static field: static public System.Runtime.ConstrainedExecution.Cer MayFail
    static void _set_MayFail(System::Runtime::ConstrainedExecution::Cer value);
    // static field const value: static public System.Runtime.ConstrainedExecution.Cer Success
    static constexpr const int Success = 2;
    // Get static field: static public System.Runtime.ConstrainedExecution.Cer Success
    static System::Runtime::ConstrainedExecution::Cer _get_Success();
    // Set static field: static public System.Runtime.ConstrainedExecution.Cer Success
    static void _set_Success(System::Runtime::ConstrainedExecution::Cer value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.ConstrainedExecution.Cer
  #pragma pack(pop)
  static check_size<sizeof(Cer), 0 + sizeof(int)> __System_Runtime_ConstrainedExecution_CerSizeCheck;
  static_assert(sizeof(Cer) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
