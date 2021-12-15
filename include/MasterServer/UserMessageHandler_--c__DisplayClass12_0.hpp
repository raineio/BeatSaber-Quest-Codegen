// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: BaseConnectToServerRequest
  class BaseConnectToServerRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(MasterServer::UserMessageHandler::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass12_0*, "MasterServer", "UserMessageHandler/<>c__DisplayClass12_0");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UserMessageHandler::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    // Nested type: MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d
    struct $$SendConnectToServerRequest$b__0$d;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x10
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public MasterServer.UserMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x18
    MasterServer::UserMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler*) == 0x8);
    // public MasterServer.BaseConnectToServerRequest request
    // Size: 0x8
    // Offset: 0x20
    MasterServer::BaseConnectToServerRequest* request;
    // Field size check
    static_assert(sizeof(MasterServer::BaseConnectToServerRequest*) == 0x8);
    // public MasterServer.UserMessageHandler/MasterServer.ConnectToServerDelegate onSuccess
    // Size: 0x8
    // Offset: 0x28
    MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler::ConnectToServerDelegate*) == 0x8);
    // public System.Action`1<ConnectionFailedReason> onConnectionFailed
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*) == 0x8);
    public:
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public MasterServer.UserMessageHandler <>4__this
    MasterServer::UserMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public MasterServer.BaseConnectToServerRequest request
    MasterServer::BaseConnectToServerRequest*& dyn_request();
    // Get instance field reference: public MasterServer.UserMessageHandler/MasterServer.ConnectToServerDelegate onSuccess
    MasterServer::UserMessageHandler::ConnectToServerDelegate*& dyn_onSuccess();
    // Get instance field reference: public System.Action`1<ConnectionFailedReason> onConnectionFailed
    System::Action_1<GlobalNamespace::ConnectionFailedReason>*& dyn_onConnectionFailed();
    // System.Threading.Tasks.Task <SendConnectToServerRequest>b__0()
    // Offset: 0x14BC7A8
    System::Threading::Tasks::Task* $SendConnectToServerRequest$b__0();
    // public System.Void .ctor()
    // Offset: 0x14BC530
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserMessageHandler::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::UserMessageHandler::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserMessageHandler::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(UserMessageHandler::$$c__DisplayClass12_0), 48 + sizeof(System::Action_1<GlobalNamespace::ConnectionFailedReason>*)> __MasterServer_UserMessageHandler_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(UserMessageHandler::$$c__DisplayClass12_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$SendConnectToServerRequest$b__0
// Il2CppName: <SendConnectToServerRequest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::UserMessageHandler::$$c__DisplayClass12_0::*)()>(&MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$SendConnectToServerRequest$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass12_0*), "<SendConnectToServerRequest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
