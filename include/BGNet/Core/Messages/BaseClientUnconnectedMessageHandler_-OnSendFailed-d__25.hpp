// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseClientUnconnectedMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<OnSendFailed>d__25");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<OnSendFailed>d__25
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*) == 0x8);
    // public BGNet.Core.Messages.IUnconnectedReliableRequest message
    // Size: 0x8
    // Offset: 0x28
    ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::IUnconnectedReliableRequest*) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x30
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x48
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $OnSendFailed$d__25
    constexpr $OnSendFailed$d__25(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* $$4__this_ = {}, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message_ = {}, uint protocolVersion_ = {}, ::System::Net::IPEndPoint* remoteEndPoint_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, message{message_}, protocolVersion{protocolVersion_}, remoteEndPoint{remoteEndPoint_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public BGNet.Core.Messages.IUnconnectedReliableRequest message
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::IUnconnectedReliableRequest*& dyn_message();
    // Get instance field reference: public System.UInt32 protocolVersion
    [[deprecated("Use field access instead!")]] uint& dyn_protocolVersion();
    // Get instance field reference: public System.Net.IPEndPoint remoteEndPoint
    [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_remoteEndPoint();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x15EAD54
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x15EB1DC
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<OnSendFailed>d__25
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
