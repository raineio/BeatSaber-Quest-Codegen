// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.AwaitTaskContinuation
#include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
  class SynchronizationContextAwaitTaskContinuation : public System::Threading::Tasks::AwaitTaskContinuation {
    public:
    // Nested type: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c
    class $$c;
    // private readonly System.Threading.SynchronizationContext m_syncContext
    // Offset: 0x20
    System::Threading::SynchronizationContext* m_syncContext;
    // Creating conversion operator: operator System::Threading::SynchronizationContext*
    constexpr operator System::Threading::SynchronizationContext*() const noexcept {
      return m_syncContext;
    }
    // Get static field: static private readonly System.Threading.SendOrPostCallback s_postCallback
    static System::Threading::SendOrPostCallback* _get_s_postCallback();
    // Set static field: static private readonly System.Threading.SendOrPostCallback s_postCallback
    static void _set_s_postCallback(System::Threading::SendOrPostCallback* value);
    // Get static field: static private System.Threading.ContextCallback s_postActionCallback
    static System::Threading::ContextCallback* _get_s_postActionCallback();
    // Set static field: static private System.Threading.ContextCallback s_postActionCallback
    static void _set_s_postActionCallback(System::Threading::ContextCallback* value);
    // System.Void .ctor(System.Threading.SynchronizationContext context, System.Action action, System.Boolean flowExecutionContext, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1496E6C
    static SynchronizationContextAwaitTaskContinuation* New_ctor(System::Threading::SynchronizationContext* context, System::Action* action, bool flowExecutionContext, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void PostAction(System.Object state)
    // Offset: 0x1497034
    static void PostAction(::Il2CppObject* state);
    // static private System.Threading.ContextCallback GetPostActionCallback()
    // Offset: 0x14970E0
    static System::Threading::ContextCallback* GetPostActionCallback();
    // static private System.Void .cctor()
    // Offset: 0x14971A8
    static void _cctor();
    // override System.Void Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    // Offset: 0x1496EAC
    // Implemented from: System.Threading.Tasks.AwaitTaskContinuation
    // Base method: System.Void AwaitTaskContinuation::Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* task, bool canInlineContinuationTask);
  }; // System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
#pragma pack(pop)
