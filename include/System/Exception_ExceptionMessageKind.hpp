// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Exception/System.ExceptionMessageKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct Exception::ExceptionMessageKind/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ExceptionMessageKind
    constexpr ExceptionMessageKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Exception/System.ExceptionMessageKind ThreadAbort
    static constexpr const int ThreadAbort = 1;
    // Get static field: static public System.Exception/System.ExceptionMessageKind ThreadAbort
    static System::Exception::ExceptionMessageKind _get_ThreadAbort();
    // Set static field: static public System.Exception/System.ExceptionMessageKind ThreadAbort
    static void _set_ThreadAbort(System::Exception::ExceptionMessageKind value);
    // static field const value: static public System.Exception/System.ExceptionMessageKind ThreadInterrupted
    static constexpr const int ThreadInterrupted = 2;
    // Get static field: static public System.Exception/System.ExceptionMessageKind ThreadInterrupted
    static System::Exception::ExceptionMessageKind _get_ThreadInterrupted();
    // Set static field: static public System.Exception/System.ExceptionMessageKind ThreadInterrupted
    static void _set_ThreadInterrupted(System::Exception::ExceptionMessageKind value);
    // static field const value: static public System.Exception/System.ExceptionMessageKind OutOfMemory
    static constexpr const int OutOfMemory = 3;
    // Get static field: static public System.Exception/System.ExceptionMessageKind OutOfMemory
    static System::Exception::ExceptionMessageKind _get_OutOfMemory();
    // Set static field: static public System.Exception/System.ExceptionMessageKind OutOfMemory
    static void _set_OutOfMemory(System::Exception::ExceptionMessageKind value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Exception/System.ExceptionMessageKind
  #pragma pack(pop)
  static check_size<sizeof(Exception::ExceptionMessageKind), 0 + sizeof(int)> __System_Exception_ExceptionMessageKindSizeCheck;
  static_assert(sizeof(Exception::ExceptionMessageKind) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Exception::ExceptionMessageKind, "System", "Exception/ExceptionMessageKind");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
