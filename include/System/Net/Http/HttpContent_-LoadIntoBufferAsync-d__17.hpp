// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Autogenerated type: System.Net.Http.HttpContent/<LoadIntoBufferAsync>d__17
  struct HttpContent::$LoadIntoBufferAsync$d__17 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Net.Http.HttpContent <>4__this
    // Offset: 0x20
    System::Net::Http::HttpContent* $$4__this;
    // public System.Int64 maxBufferSize
    // Offset: 0x28
    int64_t maxBufferSize;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1;
    // Creating value type constructor for type: $LoadIntoBufferAsync$d__17
    constexpr $LoadIntoBufferAsync$d__17(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, System::Net::Http::HttpContent* $$4__this_ = {}, int64_t maxBufferSize_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, maxBufferSize{maxBufferSize_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xC673C0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC673C8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.Http.HttpContent/<LoadIntoBufferAsync>d__17
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpContent::$LoadIntoBufferAsync$d__17, "System.Net.Http", "HttpContent/<LoadIntoBufferAsync>d__17");
#pragma pack(pop)
