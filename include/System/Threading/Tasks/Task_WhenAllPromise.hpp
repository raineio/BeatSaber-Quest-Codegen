// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Threading::Tasks::Task::WhenAllPromise);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::WhenAllPromise*, "System.Threading.Tasks", "Task/WhenAllPromise");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Task/System.Threading.Tasks.WhenAllPromise
  // [TokenAttribute] Offset: FFFFFFFF
  class Task::WhenAllPromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>/*, public System::Threading::Tasks::ITaskCompletionAction*/ {
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
    // private readonly System.Threading.Tasks.Task[] m_tasks
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<System::Threading::Tasks::Task*> m_tasks;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Threading::Tasks::Task*>) == 0x8);
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x60
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator System::Threading::Tasks::ITaskCompletionAction
    operator System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // Get instance field reference: private readonly System.Threading.Tasks.Task[] m_tasks
    ::ArrayW<System::Threading::Tasks::Task*>& dyn_m_tasks();
    // Get instance field reference: private System.Int32 m_count
    int& dyn_m_count();
    // System.Void .ctor(System.Threading.Tasks.Task[] tasks)
    // Offset: 0x19BC330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::WhenAllPromise* New_ctor(::ArrayW<System::Threading::Tasks::Task*> tasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Task::WhenAllPromise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::WhenAllPromise*, creationType>(tasks)));
    }
    // public System.Void Invoke(System.Threading.Tasks.Task completedTask)
    // Offset: 0x19BC4C0
    void Invoke(System::Threading::Tasks::Task* completedTask);
    // override System.Boolean get_ShouldNotifyDebuggerOfWaitCompletion()
    // Offset: 0x19BC7C4
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Boolean Task::get_ShouldNotifyDebuggerOfWaitCompletion()
    bool get_ShouldNotifyDebuggerOfWaitCompletion();
  }; // System.Threading.Tasks.Task/System.Threading.Tasks.WhenAllPromise
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::Task::WhenAllPromise::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::Task::WhenAllPromise::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::WhenAllPromise::*)(System::Threading::Tasks::Task*)>(&System::Threading::Tasks::Task::WhenAllPromise::Invoke)> {
  static const MethodInfo* get() {
    static auto* completedTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::WhenAllPromise*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{completedTask});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::Task::WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion
// Il2CppName: get_ShouldNotifyDebuggerOfWaitCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Tasks::Task::WhenAllPromise::*)()>(&System::Threading::Tasks::Task::WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::WhenAllPromise*), "get_ShouldNotifyDebuggerOfWaitCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
