// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TaskExtensions
#include "GlobalNamespace/TaskExtensions.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1, "", "TaskExtensions/<>c__DisplayClass0_0`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TaskExtensions/<>c__DisplayClass0_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class TaskExtensions::$$c__DisplayClass0_0_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<T> tcs
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::Tasks::TaskCompletionSource_1<T>* tcs;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<T>*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Threading.Tasks.TaskCompletionSource`1<T> tcs
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<T>*& dyn_tcs() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1::dyn_tcs");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "tcs"))->offset;
      return *reinterpret_cast<::System::Threading::Tasks::TaskCompletionSource_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1::dyn_cancellationToken");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cancellationToken"))->offset;
      return *reinterpret_cast<::System::Threading::CancellationToken*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskExtensions::$$c__DisplayClass0_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskExtensions::$$c__DisplayClass0_0_1<T>*, creationType>()));
    }
    // System.Void <WithCancellation>b__0()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $WithCancellation$b__0() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1::<WithCancellation>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<WithCancellation>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // TaskExtensions/<>c__DisplayClass0_0`1
  // Could not write size check! Type: TaskExtensions/<>c__DisplayClass0_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
