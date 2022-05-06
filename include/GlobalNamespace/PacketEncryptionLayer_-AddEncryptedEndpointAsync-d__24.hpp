// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24, "", "PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__24");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__24
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<EncryptionUtility/IEncryptionState> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$t__builder;
    // public System.Byte[] preMasterSecret
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> preMasterSecret;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] serverRandom
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> serverRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> clientRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Boolean isClient
    // Size: 0x1
    // Offset: 0x38
    bool isClient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public PacketEncryptionLayer <>4__this
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::PacketEncryptionLayer* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PacketEncryptionLayer*) == 0x8);
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1;
    public:
    // Creating value type constructor for type: $AddEncryptedEndpointAsync$d__24
    constexpr $AddEncryptedEndpointAsync$d__24(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$t__builder_ = {}, ::ArrayW<uint8_t> preMasterSecret_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> serverRandom_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> clientRandom_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), bool isClient_ = {}, ::GlobalNamespace::PacketEncryptionLayer* $$4__this_ = {}, ::System::Net::IPEndPoint* endPoint_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, preMasterSecret{preMasterSecret_}, serverRandom{serverRandom_}, clientRandom{clientRandom_}, isClient{isClient_}, $$4__this{$$4__this_}, endPoint{endPoint_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<EncryptionUtility/IEncryptionState> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*>& dyn_$$t__builder();
    // Get instance field reference: public System.Byte[] preMasterSecret
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_preMasterSecret();
    // Get instance field reference: public System.Byte[] serverRandom
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_serverRandom();
    // Get instance field reference: public System.Byte[] clientRandom
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_clientRandom();
    // Get instance field reference: public System.Boolean isClient
    [[deprecated("Use field access instead!")]] bool& dyn_isClient();
    // Get instance field reference: public PacketEncryptionLayer <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PacketEncryptionLayer*& dyn_$$4__this();
    // Get instance field reference: public System.Net.IPEndPoint endPoint
    [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_endPoint();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2632D54
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2633010
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__24
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24::*)()>(&GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::$AddEncryptedEndpointAsync$d__24), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
