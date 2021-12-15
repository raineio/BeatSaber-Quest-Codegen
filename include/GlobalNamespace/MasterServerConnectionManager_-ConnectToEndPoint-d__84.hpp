// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerConnectionManager
#include "GlobalNamespace/MasterServerConnectionManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84, "", "MasterServerConnectionManager/<ConnectToEndPoint>d__84");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServerConnectionManager/<ConnectToEndPoint>d__84
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MasterServerConnectionManager::$ConnectToEndPoint$d__84/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public System.Boolean isDedicatedServer
    // Size: 0x1
    // Offset: 0x28
    bool isDedicatedServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public MasterServerConnectionManager <>4__this
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MasterServerConnectionManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerConnectionManager*) == 0x8);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x38
    System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public System.Byte[] preMasterSecret
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> preMasterSecret;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] myRandom
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> myRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] remoteRandom
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> remoteRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean remoteUserIsConnectionOwner
    // Size: 0x1
    // Offset: 0x68
    bool remoteUserIsConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x70
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__2;
    public:
    // Creating value type constructor for type: $ConnectToEndPoint$d__84
    constexpr $ConnectToEndPoint$d__84(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, bool isDedicatedServer_ = {}, GlobalNamespace::MasterServerConnectionManager* $$4__this_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, ::ArrayW<uint8_t> preMasterSecret_ = ::ArrayW<uint8_t>(nullptr), ::ArrayW<uint8_t> myRandom_ = ::ArrayW<uint8_t>(nullptr), ::ArrayW<uint8_t> remoteRandom_ = ::ArrayW<uint8_t>(nullptr), ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool remoteUserIsConnectionOwner_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, isDedicatedServer{isDedicatedServer_}, $$4__this{$$4__this_}, remoteEndPoint{remoteEndPoint_}, preMasterSecret{preMasterSecret_}, myRandom{myRandom_}, remoteRandom{remoteRandom_}, userId{userId_}, userName{userName_}, remoteUserIsConnectionOwner{remoteUserIsConnectionOwner_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.Boolean isDedicatedServer
    bool& dyn_isDedicatedServer();
    // Get instance field reference: public MasterServerConnectionManager <>4__this
    GlobalNamespace::MasterServerConnectionManager*& dyn_$$4__this();
    // Get instance field reference: public System.Net.IPEndPoint remoteEndPoint
    System::Net::IPEndPoint*& dyn_remoteEndPoint();
    // Get instance field reference: public System.Byte[] preMasterSecret
    ::ArrayW<uint8_t>& dyn_preMasterSecret();
    // Get instance field reference: public System.Byte[] myRandom
    ::ArrayW<uint8_t>& dyn_myRandom();
    // Get instance field reference: public System.Byte[] remoteRandom
    ::ArrayW<uint8_t>& dyn_remoteRandom();
    // Get instance field reference: public System.String userId
    ::Il2CppString*& dyn_userId();
    // Get instance field reference: public System.String userName
    ::Il2CppString*& dyn_userName();
    // Get instance field reference: public System.Boolean remoteUserIsConnectionOwner
    bool& dyn_remoteUserIsConnectionOwner();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EncryptionUtility::IEncryptionState*>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x14C02C4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x14C06BC
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServerConnectionManager/<ConnectToEndPoint>d__84
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84::*)()>(&GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerConnectionManager::$ConnectToEndPoint$d__84), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
