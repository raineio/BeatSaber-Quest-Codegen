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
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: InternalTaskOptions
  struct InternalTaskOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::InternalTaskOptions, "System.Threading.Tasks", "InternalTaskOptions");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.InternalTaskOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct InternalTaskOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InternalTaskOptions
    constexpr InternalTaskOptions(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions None
    static ::System::Threading::Tasks::InternalTaskOptions _get_None();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions None
    static void _set_None(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions InternalOptionsMask
    static constexpr const int InternalOptionsMask = 65280;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions InternalOptionsMask
    static ::System::Threading::Tasks::InternalTaskOptions _get_InternalOptionsMask();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions InternalOptionsMask
    static void _set_InternalOptionsMask(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions ChildReplica
    static constexpr const int ChildReplica = 256;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions ChildReplica
    static ::System::Threading::Tasks::InternalTaskOptions _get_ChildReplica();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions ChildReplica
    static void _set_ChildReplica(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions ContinuationTask
    static constexpr const int ContinuationTask = 512;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions ContinuationTask
    static ::System::Threading::Tasks::InternalTaskOptions _get_ContinuationTask();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions ContinuationTask
    static void _set_ContinuationTask(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions PromiseTask
    static constexpr const int PromiseTask = 1024;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions PromiseTask
    static ::System::Threading::Tasks::InternalTaskOptions _get_PromiseTask();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions PromiseTask
    static void _set_PromiseTask(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions SelfReplicating
    static constexpr const int SelfReplicating = 2048;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions SelfReplicating
    static ::System::Threading::Tasks::InternalTaskOptions _get_SelfReplicating();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions SelfReplicating
    static void _set_SelfReplicating(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions LazyCancellation
    static constexpr const int LazyCancellation = 4096;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions LazyCancellation
    static ::System::Threading::Tasks::InternalTaskOptions _get_LazyCancellation();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions LazyCancellation
    static void _set_LazyCancellation(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions QueuedByRuntime
    static constexpr const int QueuedByRuntime = 8192;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions QueuedByRuntime
    static ::System::Threading::Tasks::InternalTaskOptions _get_QueuedByRuntime();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions QueuedByRuntime
    static void _set_QueuedByRuntime(::System::Threading::Tasks::InternalTaskOptions value);
    // static field const value: static public System.Threading.Tasks.InternalTaskOptions DoNotDispose
    static constexpr const int DoNotDispose = 16384;
    // Get static field: static public System.Threading.Tasks.InternalTaskOptions DoNotDispose
    static ::System::Threading::Tasks::InternalTaskOptions _get_DoNotDispose();
    // Set static field: static public System.Threading.Tasks.InternalTaskOptions DoNotDispose
    static void _set_DoNotDispose(::System::Threading::Tasks::InternalTaskOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Threading.Tasks.InternalTaskOptions
  #pragma pack(pop)
  static check_size<sizeof(InternalTaskOptions), 0 + sizeof(int)> __System_Threading_Tasks_InternalTaskOptionsSizeCheck;
  static_assert(sizeof(InternalTaskOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
