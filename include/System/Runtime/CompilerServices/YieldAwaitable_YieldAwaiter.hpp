// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable
#include "System/Runtime/CompilerServices/YieldAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter
  // [TokenAttribute] Offset: FFFFFFFF
  struct YieldAwaitable::YieldAwaiter/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*/ {
    public:
    // Creating value type constructor for type: YieldAwaiter
    constexpr YieldAwaiter() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
    operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(this);
    }
    // Get static field: static private readonly System.Threading.WaitCallback s_waitCallbackRunAction
    static ::System::Threading::WaitCallback* _get_s_waitCallbackRunAction();
    // Set static field: static private readonly System.Threading.WaitCallback s_waitCallbackRunAction
    static void _set_s_waitCallbackRunAction(::System::Threading::WaitCallback* value);
    // Get static field: static private readonly System.Threading.SendOrPostCallback s_sendOrPostCallbackRunAction
    static ::System::Threading::SendOrPostCallback* _get_s_sendOrPostCallbackRunAction();
    // Set static field: static private readonly System.Threading.SendOrPostCallback s_sendOrPostCallbackRunAction
    static void _set_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback* value);
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1D8514C
    bool get_IsCompleted();
    // static private System.Void .cctor()
    // Offset: 0x1D85568
    static void _cctor();
    // public System.Void OnCompleted(System.Action continuation)
    // Offset: 0x1D85154
    void OnCompleted(::System::Action* continuation);
    // public System.Void UnsafeOnCompleted(System.Action continuation)
    // Offset: 0x1D85490
    void UnsafeOnCompleted(::System::Action* continuation);
    // static private System.Void QueueContinuation(System.Action continuation, System.Boolean flowContext)
    // Offset: 0x1D851BC
    static void QueueContinuation(::System::Action* continuation, bool flowContext);
    // static private System.Void RunAction(System.Object state)
    // Offset: 0x1D854F8
    static void RunAction(::Il2CppObject* state);
    // public System.Void GetResult()
    // Offset: 0x1D85564
    void GetResult();
  }; // System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::*)()>(&System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::OnCompleted
// Il2CppName: OnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::*)(::System::Action*)>(&System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::OnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter), "OnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::UnsafeOnCompleted
// Il2CppName: UnsafeOnCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::*)(::System::Action*)>(&System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::UnsafeOnCompleted)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter), "UnsafeOnCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::QueueContinuation
// Il2CppName: QueueContinuation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*, bool)>(&System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::QueueContinuation)> {
  static const MethodInfo* get() {
    static auto* continuation = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* flowContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter), "QueueContinuation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{continuation, flowContext});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::RunAction
// Il2CppName: RunAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::RunAction)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter), "RunAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::*)()>(&System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter::GetResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
