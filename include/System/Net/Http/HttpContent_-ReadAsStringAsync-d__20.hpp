// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpContent::$ReadAsStringAsync$d__20, "System.Net.Http", "HttpContent/<ReadAsStringAsync>d__20");
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.HttpContent/System.Net.Http.<ReadAsStringAsync>d__20
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HttpContent::$ReadAsStringAsync$d__20/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder;
    // public System.Net.Http.HttpContent <>4__this
    // Size: 0x8
    // Offset: 0x20
    System::Net::Http::HttpContent* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpContent*) == 0x8);
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    // Size: 0x9
    // Offset: 0x28
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    public:
    // Creating value type constructor for type: $ReadAsStringAsync$d__20
    constexpr $ReadAsStringAsync$d__20(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, System::Net::Http::HttpContent* $$4__this_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*>& dyn_$$t__builder();
    // Get instance field reference: public System.Net.Http.HttpContent <>4__this
    System::Net::Http::HttpContent*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/System.Runtime.CompilerServices.ConfiguredTaskAwaiter <>u__1
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x17CD260
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x17CD5B8
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.Http.HttpContent/System.Net.Http.<ReadAsStringAsync>d__20
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Http::HttpContent::$ReadAsStringAsync$d__20::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::$ReadAsStringAsync$d__20::*)()>(&System::Net::Http::HttpContent::$ReadAsStringAsync$d__20::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent::$ReadAsStringAsync$d__20), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Http::HttpContent::$ReadAsStringAsync$d__20::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpContent::$ReadAsStringAsync$d__20::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Net::Http::HttpContent::$ReadAsStringAsync$d__20::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Http::HttpContent::$ReadAsStringAsync$d__20), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
