// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseServerUnconnectedMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<GetPreMasterSecretAsync>d__24");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<GetPreMasterSecretAsync>d__24
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> $$t__builder;
    // public IDiffieHellmanKeyPair serverKeys
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // public System.Byte[] clientKey
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> clientKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public BGNet.Core.Messages.BaseServerUnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*) == 0x8);
    // private BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.GetPreMasterSecretComputeOperation <preMasterSecretRequest>5__2
    // Size: 0x8
    // Offset: 0x38
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation* $preMasterSecretRequest$5__2;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__1;
    public:
    // Creating value type constructor for type: $GetPreMasterSecretAsync$d__24
    constexpr $GetPreMasterSecretAsync$d__24(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> $$t__builder_ = {}, ::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys_ = {}, ::ArrayW<uint8_t> clientKey_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* $$4__this_ = {}, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation* $preMasterSecretRequest$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, serverKeys{serverKeys_}, clientKey{clientKey_}, $$4__this{$$4__this_}, $preMasterSecretRequest$5__2{$preMasterSecretRequest$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Byte[]> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>& dyn_$$t__builder();
    // Get instance field reference: public IDiffieHellmanKeyPair serverKeys
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDiffieHellmanKeyPair*& dyn_serverKeys();
    // Get instance field reference: public System.Byte[] clientKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_clientKey();
    // Get instance field reference: public BGNet.Core.Messages.BaseServerUnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: private BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.GetPreMasterSecretComputeOperation <preMasterSecretRequest>5__2
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation*& dyn_$preMasterSecretRequest$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x15EDB08
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x15EDFA4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<GetPreMasterSecretAsync>d__24
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
