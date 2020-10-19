// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskContinuation
#include "System/Threading/Tasks/TaskContinuation.hpp"
// Including type: System.Threading.Tasks.TaskContinuationOptions
#include "System/Threading/Tasks/TaskContinuationOptions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.StandardTaskContinuation
  class StandardTaskContinuation : public System::Threading::Tasks::TaskContinuation {
    public:
    // readonly System.Threading.Tasks.Task m_task
    // Offset: 0x10
    System::Threading::Tasks::Task* m_task;
    // readonly System.Threading.Tasks.TaskContinuationOptions m_options
    // Offset: 0x18
    System::Threading::Tasks::TaskContinuationOptions m_options;
    // private readonly System.Threading.Tasks.TaskScheduler m_taskScheduler
    // Offset: 0x20
    System::Threading::Tasks::TaskScheduler* m_taskScheduler;
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Threading.Tasks.TaskContinuationOptions options, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x14963C8
    static StandardTaskContinuation* New_ctor(System::Threading::Tasks::Task* task, System::Threading::Tasks::TaskContinuationOptions options, System::Threading::Tasks::TaskScheduler* scheduler);
    // override System.Void Run(System.Threading.Tasks.Task completedTask, System.Boolean bCanInlineContinuationTask)
    // Offset: 0x1496698
    // Implemented from: System.Threading.Tasks.TaskContinuation
    // Base method: System.Void TaskContinuation::Run(System.Threading.Tasks.Task completedTask, System.Boolean bCanInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask);
  }; // System.Threading.Tasks.StandardTaskContinuation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::StandardTaskContinuation*, "System.Threading.Tasks", "StandardTaskContinuation");
#pragma pack(pop)
