// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Security.Cryptography.CryptoStream
#include "System/Security/Cryptography/CryptoStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable
#include "System/Security/Cryptography/CryptoStream_HopToThreadPoolAwaitable.hpp"
// Including type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
#include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37
  struct CryptoStream::$WriteAsyncInternal$d__37 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Security.Cryptography.CryptoStream <>4__this
    // Offset: 0x20
    System::Security::Cryptography::CryptoStream* $$4__this;
    // public System.Int32 count
    // Offset: 0x28
    int count;
    // public System.Int32 offset
    // Offset: 0x2C
    int offset;
    // public System.Byte[] buffer
    // Offset: 0x30
    ::Array<uint8_t>* buffer;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x38
    System::Threading::CancellationToken cancellationToken;
    // private System.Int32 <bytesToWrite>5__1
    // Offset: 0x40
    int $bytesToWrite$5__1;
    // private System.Int32 <currentInputIndex>5__2
    // Offset: 0x44
    int $currentInputIndex$5__2;
    // private System.Int32 <numWholeBlocksInBytes>5__3
    // Offset: 0x48
    int $numWholeBlocksInBytes$5__3;
    // private System.Threading.SemaphoreSlim <sem>5__4
    // Offset: 0x50
    System::Threading::SemaphoreSlim* $sem$5__4;
    // private System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable <>u__1
    // Offset: 0x58
    System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable $$u__1;
    // private System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter <>u__2
    // Offset: 0x60
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2;
    // Creating value type constructor for type: $WriteAsyncInternal$d__37
    constexpr $WriteAsyncInternal$d__37(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, System::Security::Cryptography::CryptoStream* $$4__this_ = {}, int count_ = {}, int offset_ = {}, ::Array<uint8_t>* buffer_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, int $bytesToWrite$5__1_ = {}, int $currentInputIndex$5__2_ = {}, int $numWholeBlocksInBytes$5__3_ = {}, System::Threading::SemaphoreSlim* $sem$5__4_ = {}, System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable $$u__1_ = {}, System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, count{count_}, offset{offset_}, buffer{buffer_}, cancellationToken{cancellationToken_}, $bytesToWrite$5__1{$bytesToWrite$5__1_}, $currentInputIndex$5__2{$currentInputIndex$5__2_}, $numWholeBlocksInBytes$5__3{$numWholeBlocksInBytes$5__3_}, $sem$5__4{$sem$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xC77398
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC773A0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37, "System.Security.Cryptography", "CryptoStream/<WriteAsyncInternal>d__37");
#pragma pack(pop)
