// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
  // Forward declaring type: INotifyCompletion
  class INotifyCompletion;
  // Forward declaring type: ICriticalNotifyCompletion
  class ICriticalNotifyCompletion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
  struct AsyncTaskMethodBuilder/*, public System::ValueType*/ {
    public:
    // private System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> m_builder
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> m_builder;
    // Creating value type constructor for type: AsyncTaskMethodBuilder
    constexpr AsyncTaskMethodBuilder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult> m_builder_ = {}) noexcept : m_builder{m_builder_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult>
    constexpr operator System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Threading::Tasks::VoidTaskResult>() const noexcept {
      return m_builder;
    }
    // Get static field: static private readonly System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted
    static System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>* _get_s_cachedCompleted();
    // Set static field: static private readonly System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted
    static void _set_s_cachedCompleted(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>* value);
    // static public System.Runtime.CompilerServices.AsyncTaskMethodBuilder Create()
    // Offset: 0x141C100
    static System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create();
    // public System.Void Start(ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TStateMachine>
    void Start(TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Start");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Start", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___generic__method, stateMachine);
    }
    // public System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEECD24
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
    // public System.Void AwaitOnCompleted(ref TAwaiter awaiter, ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TAwaiter, class TStateMachine>
    void AwaitOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::INotifyCompletion, std::remove_pointer_t<TAwaiter>>);
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AwaitOnCompleted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AwaitOnCompleted", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(awaiter), ::il2cpp_utils::ExtractType(stateMachine)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___generic__method, awaiter, stateMachine);
    }
    // public System.Void AwaitUnsafeOnCompleted(ref TAwaiter awaiter, ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TAwaiter, class TStateMachine>
    void AwaitUnsafeOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::ICriticalNotifyCompletion, std::remove_pointer_t<TAwaiter>>);
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AwaitUnsafeOnCompleted", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(awaiter), ::il2cpp_utils::ExtractType(stateMachine)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___generic__method, awaiter, stateMachine);
    }
    // public System.Threading.Tasks.Task get_Task()
    // Offset: 0xEECD2C
    System::Threading::Tasks::Task* get_Task();
    // public System.Void SetResult()
    // Offset: 0xEECD34
    void SetResult();
    // public System.Void SetException(System.Exception exception)
    // Offset: 0xEECD3C
    void SetException(System::Exception* exception);
    // static private System.Void .cctor()
    // Offset: 0x141C298
    static void _cctor();
  }; // System.Runtime.CompilerServices.AsyncTaskMethodBuilder
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder");
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::CompilerServices::AsyncTaskMethodBuilder (*)()>(&System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskMethodBuilder), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Start
// Il2CppName: Start
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetStateMachine)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskMethodBuilder), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AwaitOnCompleted
// Il2CppName: AwaitOnCompleted
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted
// Il2CppName: AwaitUnsafeOnCompleted
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::get_Task
// Il2CppName: get_Task
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)()>(&System::Runtime::CompilerServices::AsyncTaskMethodBuilder::get_Task)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskMethodBuilder), "get_Task", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetResult
// Il2CppName: SetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)()>(&System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetResult)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskMethodBuilder), "SetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetException
// Il2CppName: SetException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncTaskMethodBuilder::*)(System::Exception*)>(&System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetException)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskMethodBuilder), "SetException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Exception*>()});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskMethodBuilder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::CompilerServices::AsyncTaskMethodBuilder::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskMethodBuilder), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
