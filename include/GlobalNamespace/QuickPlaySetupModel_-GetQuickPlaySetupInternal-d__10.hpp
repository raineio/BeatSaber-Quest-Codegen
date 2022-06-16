// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySetupModel
#include "GlobalNamespace/QuickPlaySetupModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: QuickPlaySetupData
  class QuickPlaySetupData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriBuilder
  class UriBuilder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10, "", "QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<QuickPlaySetupData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> $$t__builder;
    // public QuickPlaySetupModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::QuickPlaySetupModel* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuickPlaySetupModel*) == 0x8);
    // private System.UriBuilder <uriBuilder>5__2
    // Size: 0x8
    // Offset: 0x28
    ::System::UriBuilder* $uriBuilder$5__2;
    // Field size check
    static_assert(sizeof(::System::UriBuilder*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__1;
    public:
    // Creating value type constructor for type: $GetQuickPlaySetupInternal$d__10
    constexpr $GetQuickPlaySetupInternal$d__10(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> $$t__builder_ = {}, ::GlobalNamespace::QuickPlaySetupModel* $$4__this_ = {}, ::System::UriBuilder* $uriBuilder$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $uriBuilder$5__2{$uriBuilder$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<QuickPlaySetupData> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>& dyn_$$t__builder();
    // Get instance field reference: public QuickPlaySetupModel <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuickPlaySetupModel*& dyn_$$4__this();
    // Get instance field reference: private System.UriBuilder <uriBuilder>5__2
    [[deprecated("Use field access instead!")]] ::System::UriBuilder*& dyn_$uriBuilder$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x13E6038
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x13E67A0
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10::*)()>(&GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupModel::$GetQuickPlaySetupInternal$d__10), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
