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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceEventType
  struct TraceEventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceEventType, "System.Diagnostics", "TraceEventType");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct TraceEventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TraceEventType
    constexpr TraceEventType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Diagnostics.TraceEventType Critical
    static constexpr const int Critical = 1;
    // Get static field: static public System.Diagnostics.TraceEventType Critical
    static ::System::Diagnostics::TraceEventType _get_Critical();
    // Set static field: static public System.Diagnostics.TraceEventType Critical
    static void _set_Critical(::System::Diagnostics::TraceEventType value);
    // static field const value: static public System.Diagnostics.TraceEventType Error
    static constexpr const int Error = 2;
    // Get static field: static public System.Diagnostics.TraceEventType Error
    static ::System::Diagnostics::TraceEventType _get_Error();
    // Set static field: static public System.Diagnostics.TraceEventType Error
    static void _set_Error(::System::Diagnostics::TraceEventType value);
    // static field const value: static public System.Diagnostics.TraceEventType Warning
    static constexpr const int Warning = 4;
    // Get static field: static public System.Diagnostics.TraceEventType Warning
    static ::System::Diagnostics::TraceEventType _get_Warning();
    // Set static field: static public System.Diagnostics.TraceEventType Warning
    static void _set_Warning(::System::Diagnostics::TraceEventType value);
    // static field const value: static public System.Diagnostics.TraceEventType Information
    static constexpr const int Information = 8;
    // Get static field: static public System.Diagnostics.TraceEventType Information
    static ::System::Diagnostics::TraceEventType _get_Information();
    // Set static field: static public System.Diagnostics.TraceEventType Information
    static void _set_Information(::System::Diagnostics::TraceEventType value);
    // static field const value: static public System.Diagnostics.TraceEventType Verbose
    static constexpr const int Verbose = 16;
    // Get static field: static public System.Diagnostics.TraceEventType Verbose
    static ::System::Diagnostics::TraceEventType _get_Verbose();
    // Set static field: static public System.Diagnostics.TraceEventType Verbose
    static void _set_Verbose(::System::Diagnostics::TraceEventType value);
    // [EditorBrowsableAttribute] Offset: 0x1083818
    // static field const value: static public System.Diagnostics.TraceEventType Start
    static constexpr const int Start = 256;
    // Get static field: static public System.Diagnostics.TraceEventType Start
    static ::System::Diagnostics::TraceEventType _get_Start();
    // Set static field: static public System.Diagnostics.TraceEventType Start
    static void _set_Start(::System::Diagnostics::TraceEventType value);
    // [EditorBrowsableAttribute] Offset: 0x108382C
    // static field const value: static public System.Diagnostics.TraceEventType Stop
    static constexpr const int Stop = 512;
    // Get static field: static public System.Diagnostics.TraceEventType Stop
    static ::System::Diagnostics::TraceEventType _get_Stop();
    // Set static field: static public System.Diagnostics.TraceEventType Stop
    static void _set_Stop(::System::Diagnostics::TraceEventType value);
    // [EditorBrowsableAttribute] Offset: 0x1083840
    // static field const value: static public System.Diagnostics.TraceEventType Suspend
    static constexpr const int Suspend = 1024;
    // Get static field: static public System.Diagnostics.TraceEventType Suspend
    static ::System::Diagnostics::TraceEventType _get_Suspend();
    // Set static field: static public System.Diagnostics.TraceEventType Suspend
    static void _set_Suspend(::System::Diagnostics::TraceEventType value);
    // [EditorBrowsableAttribute] Offset: 0x1083854
    // static field const value: static public System.Diagnostics.TraceEventType Resume
    static constexpr const int Resume = 2048;
    // Get static field: static public System.Diagnostics.TraceEventType Resume
    static ::System::Diagnostics::TraceEventType _get_Resume();
    // Set static field: static public System.Diagnostics.TraceEventType Resume
    static void _set_Resume(::System::Diagnostics::TraceEventType value);
    // [EditorBrowsableAttribute] Offset: 0x1083868
    // static field const value: static public System.Diagnostics.TraceEventType Transfer
    static constexpr const int Transfer = 4096;
    // Get static field: static public System.Diagnostics.TraceEventType Transfer
    static ::System::Diagnostics::TraceEventType _get_Transfer();
    // Set static field: static public System.Diagnostics.TraceEventType Transfer
    static void _set_Transfer(::System::Diagnostics::TraceEventType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Diagnostics.TraceEventType
  #pragma pack(pop)
  static check_size<sizeof(TraceEventType), 0 + sizeof(int)> __System_Diagnostics_TraceEventTypeSizeCheck;
  static_assert(sizeof(TraceEventType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
