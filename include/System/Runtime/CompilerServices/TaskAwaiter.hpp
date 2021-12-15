// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: TaskAwaiter
  struct TaskAwaiter;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TaskAwaiter, "System.Runtime.CompilerServices", "TaskAwaiter");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.TaskAwaiter
  // [TokenAttribute] Offset: FFFFFFFF
  struct TaskAwaiter/*, public System::ValueType, public System::Runtime::CompilerServices::ICriticalNotifyCompletion*/ {
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
    // private readonly System.Threading.Tasks.Task m_task
    // Size: 0x8
    // Offset: 0x0
    System::Threading::Tasks::Task* m_task;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    public:
    // Creating value type constructor for type: TaskAwaiter
    constexpr TaskAwaiter(System::Threading::Tasks::Task* m_task_ = {}) noexcept : m_task{m_task_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::ICriticalNotifyCompletion
    operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(this);
    }
    // Creating conversion operator: operator System::Threading::Tasks::Task*
    constexpr operator System::Threading::Tasks::Task*() const noexcept {
      return m_task;
    }
    // Get instance field reference: private readonly System.Threading.Tasks.Task m_task
    System::Threading::Tasks::Task*& dyn_m_task();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1621A14
    bool get_IsCompleted();
    // System.Void .ctor(System.Threading.Tasks.Task task)
    // Offset: 0x1621A0C
    // ABORTED: conflicts with another method.  TaskAwaiter(System::Threading::Tasks::Task* task);
    // public System.Void OnCompleted(System.Action continuation)
    // Offset: 0x1621A30
    void OnCompleted(System::Action* continuation);
    // public System.Void UnsafeOnCompleted(System.Action continuation)
    // Offset: 0x1621A40
    void UnsafeOnCompleted(System::Action* continuation);
    // public System.Void GetResult()
    // Offset: 0x1621A50
    void GetResult();
    // static System.Void ValidateEnd(System.Threading.Tasks.Task task)
    // Offset: 0x16213F4
    static void ValidateEnd(System::Threading::Tasks::Task* task);
    // static private System.Void HandleNonSuccessAndDebuggerNotification(System.Threading.Tasks.Task task)
    // Offset: 0x1621A58
    static void HandleNonSuccessAndDebuggerNotification(System::Threading::Tasks::Task* task);
    // static private System.Void ThrowForNonSuccess(System.Threading.Tasks.Task task)
    // Offset: 0x1621AC8
    static void ThrowForNonSuccess(System::Threading::Tasks::Task* task);
    // static System.Void OnCompletedInternal(System.Threading.Tasks.Task task, System.Action continuation, System.Boolean continueOnCapturedContext, System.Boolean flowExecutionContext)
    // Offset: 0x162130C
    static void OnCompletedInternal(System::Threading::Tasks::Task* task, System::Action* continuation, bool continueOnCapturedContext, bool flowExecutionContext);
  }; // System.Runtime.CompilerServices.TaskAwaiter
  #pragma pack(pop)
  static check_size<sizeof(TaskAwaiter), 0 + sizeof(System::Threading::Tasks::Task*)> __System_Runtime_CompilerServices_TaskAwaiterSizeCheck;
  static_assert(sizeof(TaskAwaiter) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter::*)()>(&System::Runtime::CompilerServices::TaskAwaiter::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::TaskAwaiter
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter::*)(System::Action*)>(&System::Runtime::CompilerServices::TaskAwaiter::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::UnsafeOnCompleted
// Il2CppName: UnsafeOnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter::*)(System::Action*)>(&System::Runtime::CompilerServices::TaskAwaiter::UnsafeOnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "UnsafeOnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter::*)()>(&System::Runtime::CompilerServices::TaskAwaiter::GetResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::ValidateEnd
// Il2CppName: ValidateEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task*)>(&System::Runtime::CompilerServices::TaskAwaiter::ValidateEnd)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "ValidateEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::HandleNonSuccessAndDebuggerNotification
// Il2CppName: HandleNonSuccessAndDebuggerNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task*)>(&System::Runtime::CompilerServices::TaskAwaiter::HandleNonSuccessAndDebuggerNotification)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "HandleNonSuccessAndDebuggerNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::ThrowForNonSuccess
// Il2CppName: ThrowForNonSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task*)>(&System::Runtime::CompilerServices::TaskAwaiter::ThrowForNonSuccess)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "ThrowForNonSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TaskAwaiter::OnCompletedInternal
// Il2CppName: OnCompletedInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Threading::Tasks::Task*, System::Action*, bool, bool)>(&System::Runtime::CompilerServices::TaskAwaiter::OnCompletedInternal)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* continueOnCapturedContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flowExecutionContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TaskAwaiter), "OnCompletedInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, continuation, continueOnCapturedContext, flowExecutionContext});
  }
};
