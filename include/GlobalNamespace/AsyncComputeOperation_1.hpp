// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AsyncComputeOperation
#include "GlobalNamespace/AsyncComputeOperation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: AsyncComputeOperation`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AsyncComputeOperation_1 : public GlobalNamespace::AsyncComputeOperation {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly System.Threading.Tasks.TaskCompletionSource`1<T> _tcs
    // Size: 0x8
    // Offset: 0x0
    System::Threading::Tasks::TaskCompletionSource_1<T>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<T>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Threading::Tasks::TaskCompletionSource_1<T>*
    constexpr operator System::Threading::Tasks::TaskCompletionSource_1<T>*() const noexcept {
      return tcs;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Threading.Tasks.TaskCompletionSource`1<T> _tcs
    System::Threading::Tasks::TaskCompletionSource_1<T>*& dyn__tcs() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::dyn__tcs");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_tcs"))->offset;
      return *reinterpret_cast<System::Threading::Tasks::TaskCompletionSource_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Threading.Tasks.Task`1<T> get_task()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<T>* get_task() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::get_task");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_task", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<T>*, false>(___instance_arg, ___internal__method);
    }
    // private System.Boolean IsValidRequest()
    // Offset: 0xFFFFFFFF
    bool IsValidRequest() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::IsValidRequest");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsValidRequest", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
    }
    // private System.Void Complete(T computeResult)
    // Offset: 0xFFFFFFFF
    void Complete(T computeResult) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::Complete");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Complete", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(computeResult)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, computeResult);
    }
    // private System.Void Cancel()
    // Offset: 0xFFFFFFFF
    void Cancel() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::Cancel");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Cancel", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Void Fail(System.Exception ex)
    // Offset: 0xFFFFFFFF
    void Fail(System::Exception* ex) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::Fail");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Fail", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ex)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, ex);
    }
    // protected T Compute()
    // Offset: 0xFFFFFFFF
    T Compute() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::Compute");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Compute", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // protected System.Void Finally()
    // Offset: 0xFFFFFFFF
    void Finally() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::Finally");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Finally", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // protected System.Void .ctor(System.Int32 timeoutMs)
    // Offset: 0xFFFFFFFF
    // Implemented from: AsyncComputeOperation
    // Base method: System.Void AsyncComputeOperation::.ctor(System.Int32 timeoutMs)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncComputeOperation_1<T>* New_ctor(int timeoutMs) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncComputeOperation_1<T>*, creationType>(timeoutMs)));
    }
    // public override System.Void Execute(System.Boolean disposed)
    // Offset: 0xFFFFFFFF
    // Implemented from: AsyncComputeOperation
    // Base method: System.Void AsyncComputeOperation::Execute(System.Boolean disposed)
    void Execute(bool disposed) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AsyncComputeOperation_1::Execute");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Execute", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(disposed)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, disposed);
    }
  }; // AsyncComputeOperation`1
  // Could not write size check! Type: AsyncComputeOperation`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AsyncComputeOperation_1, "", "AsyncComputeOperation`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
