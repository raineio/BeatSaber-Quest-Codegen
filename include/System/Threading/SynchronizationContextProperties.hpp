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
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContextProperties
  struct SynchronizationContextProperties;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SynchronizationContextProperties, "System.Threading", "SynchronizationContextProperties");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.SynchronizationContextProperties
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct SynchronizationContextProperties/*, public System::Enum*/ {
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
    // Creating value type constructor for type: SynchronizationContextProperties
    constexpr SynchronizationContextProperties(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.SynchronizationContextProperties None
    static constexpr const int None = 0;
    // Get static field: static public System.Threading.SynchronizationContextProperties None
    static System::Threading::SynchronizationContextProperties _get_None();
    // Set static field: static public System.Threading.SynchronizationContextProperties None
    static void _set_None(System::Threading::SynchronizationContextProperties value);
    // static field const value: static public System.Threading.SynchronizationContextProperties RequireWaitNotification
    static constexpr const int RequireWaitNotification = 1;
    // Get static field: static public System.Threading.SynchronizationContextProperties RequireWaitNotification
    static System::Threading::SynchronizationContextProperties _get_RequireWaitNotification();
    // Set static field: static public System.Threading.SynchronizationContextProperties RequireWaitNotification
    static void _set_RequireWaitNotification(System::Threading::SynchronizationContextProperties value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Threading.SynchronizationContextProperties
  #pragma pack(pop)
  static check_size<sizeof(SynchronizationContextProperties), 0 + sizeof(int)> __System_Threading_SynchronizationContextPropertiesSizeCheck;
  static_assert(sizeof(SynchronizationContextProperties) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
