// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5EB14
  struct ThreadState/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ThreadState
    constexpr ThreadState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.ThreadState Running
    static constexpr const int Running = 0;
    // Get static field: static public System.Threading.ThreadState Running
    static System::Threading::ThreadState _get_Running();
    // Set static field: static public System.Threading.ThreadState Running
    static void _set_Running(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState StopRequested
    static constexpr const int StopRequested = 1;
    // Get static field: static public System.Threading.ThreadState StopRequested
    static System::Threading::ThreadState _get_StopRequested();
    // Set static field: static public System.Threading.ThreadState StopRequested
    static void _set_StopRequested(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState SuspendRequested
    static constexpr const int SuspendRequested = 2;
    // Get static field: static public System.Threading.ThreadState SuspendRequested
    static System::Threading::ThreadState _get_SuspendRequested();
    // Set static field: static public System.Threading.ThreadState SuspendRequested
    static void _set_SuspendRequested(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState Background
    static constexpr const int Background = 4;
    // Get static field: static public System.Threading.ThreadState Background
    static System::Threading::ThreadState _get_Background();
    // Set static field: static public System.Threading.ThreadState Background
    static void _set_Background(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState Unstarted
    static constexpr const int Unstarted = 8;
    // Get static field: static public System.Threading.ThreadState Unstarted
    static System::Threading::ThreadState _get_Unstarted();
    // Set static field: static public System.Threading.ThreadState Unstarted
    static void _set_Unstarted(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState Stopped
    static constexpr const int Stopped = 16;
    // Get static field: static public System.Threading.ThreadState Stopped
    static System::Threading::ThreadState _get_Stopped();
    // Set static field: static public System.Threading.ThreadState Stopped
    static void _set_Stopped(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState WaitSleepJoin
    static constexpr const int WaitSleepJoin = 32;
    // Get static field: static public System.Threading.ThreadState WaitSleepJoin
    static System::Threading::ThreadState _get_WaitSleepJoin();
    // Set static field: static public System.Threading.ThreadState WaitSleepJoin
    static void _set_WaitSleepJoin(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState Suspended
    static constexpr const int Suspended = 64;
    // Get static field: static public System.Threading.ThreadState Suspended
    static System::Threading::ThreadState _get_Suspended();
    // Set static field: static public System.Threading.ThreadState Suspended
    static void _set_Suspended(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState AbortRequested
    static constexpr const int AbortRequested = 128;
    // Get static field: static public System.Threading.ThreadState AbortRequested
    static System::Threading::ThreadState _get_AbortRequested();
    // Set static field: static public System.Threading.ThreadState AbortRequested
    static void _set_AbortRequested(System::Threading::ThreadState value);
    // static field const value: static public System.Threading.ThreadState Aborted
    static constexpr const int Aborted = 256;
    // Get static field: static public System.Threading.ThreadState Aborted
    static System::Threading::ThreadState _get_Aborted();
    // Set static field: static public System.Threading.ThreadState Aborted
    static void _set_Aborted(System::Threading::ThreadState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Threading.ThreadState
  #pragma pack(pop)
  static check_size<sizeof(ThreadState), 0 + sizeof(int)> __System_Threading_ThreadStateSizeCheck;
  static_assert(sizeof(ThreadState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadState, "System.Threading", "ThreadState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
