// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpClient
#include "System/Net/Http/HttpClient.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Net.Http.HttpCompletionOption
#include "System/Net/Http/HttpCompletionOption.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpResponseMessage
  class HttpResponseMessage;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Autogenerated type: System.Net.Http.HttpClient/<SendAsyncWorker>d__47
  struct HttpClient::$SendAsyncWorker$d__47 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Net.Http.HttpResponseMessage> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage*> $$t__builder;
    // public System.Net.Http.HttpClient <>4__this
    // Offset: 0x20
    System::Net::Http::HttpClient* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // public System.Net.Http.HttpRequestMessage request
    // Offset: 0x30
    System::Net::Http::HttpRequestMessage* request;
    // public System.Net.Http.HttpCompletionOption completionOption
    // Offset: 0x38
    System::Net::Http::HttpCompletionOption completionOption;
    // private System.Net.Http.HttpResponseMessage <response>5__1
    // Offset: 0x40
    System::Net::Http::HttpResponseMessage* $response$5__1;
    // private System.Threading.CancellationTokenSource <lcts>5__2
    // Offset: 0x48
    System::Threading::CancellationTokenSource* $lcts$5__2;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Net.Http.HttpResponseMessage> <>u__1
    // Offset: 0x50
    typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Net::Http::HttpResponseMessage*>::ConfiguredTaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__2
    // Offset: 0x60
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2;
    // Creating value type constructor for type: $SendAsyncWorker$d__47
    constexpr $SendAsyncWorker$d__47(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage*> $$t__builder_ = {}, System::Net::Http::HttpClient* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Net::Http::HttpRequestMessage* request_ = {}, System::Net::Http::HttpCompletionOption completionOption_ = {}, System::Net::Http::HttpResponseMessage* $response$5__1_ = {}, System::Threading::CancellationTokenSource* $lcts$5__2_ = {}, typename System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1<System::Net::Http::HttpResponseMessage*>::ConfiguredTaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, request{request_}, completionOption{completionOption_}, $response$5__1{$response$5__1_}, $lcts$5__2{$lcts$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xC673A0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC673A8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Net.Http.HttpClient/<SendAsyncWorker>d__47
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpClient::$SendAsyncWorker$d__47, "System.Net.Http", "HttpClient/<SendAsyncWorker>d__47");
#pragma pack(pop)
