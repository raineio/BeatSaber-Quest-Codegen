// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TaskExtensions
#include "GlobalNamespace/TaskExtensions.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TaskExtensions/<>c__DisplayClass0_0`1
  template<typename T>
  class TaskExtensions::$$c__DisplayClass0_0_1 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<T> tcs
    // Offset: 0x0
    System::Threading::Tasks::TaskCompletionSource_1<T>* tcs;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x0
    System::Threading::CancellationToken cancellationToken;
    // System.Void <WithCancellation>b__0()
    // Offset: 0xFFFFFFFF
    void $WithCancellation$b__0() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c__DisplayClass0_0_1").WithContext("<WithCancellation>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "<WithCancellation>b__0", {}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TaskExtensions::$$c__DisplayClass0_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$$c__DisplayClass0_0_1").WithContext(".ctor");
      return THROW_UNLESS(::il2cpp_utils::New<TaskExtensions::$$c__DisplayClass0_0_1<T>*>());
    }
  }; // TaskExtensions/<>c__DisplayClass0_0`1
  // Could not write size check! Type: TaskExtensions/<>c__DisplayClass0_0`1 is generic!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1, "", "TaskExtensions/<>c__DisplayClass0_0`1");
#pragma pack(pop)