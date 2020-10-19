// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.Task/WhenAllPromise
  class Task::WhenAllPromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, public System::Threading::Tasks::ITaskCompletionAction {
    public:
    // private readonly System.Threading.Tasks.Task[] m_tasks
    // Offset: 0x58
    ::Array<System::Threading::Tasks::Task*>* m_tasks;
    // private System.Int32 m_count
    // Offset: 0x60
    int m_count;
    // System.Void .ctor(System.Threading.Tasks.Task[] tasks)
    // Offset: 0x149DEE0
    static Task::WhenAllPromise* New_ctor(::Array<System::Threading::Tasks::Task*>* tasks);
    // public System.Void Invoke(System.Threading.Tasks.Task completedTask)
    // Offset: 0x149EC64
    // Implemented from: System.Threading.Tasks.ITaskCompletionAction
    // Base method: System.Void ITaskCompletionAction::Invoke(System.Threading.Tasks.Task completedTask)
    void Invoke(System::Threading::Tasks::Task* completedTask);
    // Creating proxy method: System_Threading_Tasks_ITaskCompletionAction_Invoke
    // Maps to method: Invoke
    void System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task* completedTask);
    // override System.Boolean get_ShouldNotifyDebuggerOfWaitCompletion()
    // Offset: 0x149EEFC
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Boolean Task::get_ShouldNotifyDebuggerOfWaitCompletion()
    bool get_ShouldNotifyDebuggerOfWaitCompletion();
  }; // System.Threading.Tasks.Task/WhenAllPromise
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::WhenAllPromise*, "System.Threading.Tasks", "Task/WhenAllPromise");
#pragma pack(pop)
