// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadHelper
  class ThreadHelper : public ::Il2CppObject {
    public:
    // private System.Delegate _start
    // Offset: 0x10
    System::Delegate* start;
    // private System.Object _startArg
    // Offset: 0x18
    ::Il2CppObject* startArg;
    // private System.Threading.ExecutionContext _executionContext
    // Offset: 0x20
    System::Threading::ExecutionContext* executionContext;
    // Get static field: static System.Threading.ContextCallback _ccb
    static System::Threading::ContextCallback* _get__ccb();
    // Set static field: static System.Threading.ContextCallback _ccb
    static void _set__ccb(System::Threading::ContextCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x14A2910
    static void _cctor();
    // System.Void .ctor(System.Delegate start)
    // Offset: 0x14A1F88
    static ThreadHelper* New_ctor(System::Delegate* start);
    // System.Void SetExecutionContextHelper(System.Threading.ExecutionContext ec)
    // Offset: 0x14A2990
    void SetExecutionContextHelper(System::Threading::ExecutionContext* ec);
    // static private System.Void ThreadStart_Context(System.Object state)
    // Offset: 0x14A2998
    static void ThreadStart_Context(::Il2CppObject* state);
    // System.Void ThreadStart(System.Object obj)
    // Offset: 0x14A2C84
    void ThreadStart(::Il2CppObject* obj);
    // System.Void ThreadStart()
    // Offset: 0x14A2D88
    void ThreadStart();
  }; // System.Threading.ThreadHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadHelper*, "System.Threading", "ThreadHelper");
#pragma pack(pop)
