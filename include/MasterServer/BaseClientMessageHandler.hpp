// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
  // Forward declaring type: IAnalyticsManager
  class IAnalyticsManager;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
  // Forward declaring type: IMasterServerReliableResponse
  class IMasterServerReliableResponse;
  // Forward declaring type: IMasterServerAuthenticateRequest
  class IMasterServerAuthenticateRequest;
  // Forward declaring type: IHandshakeMessage
  class IHandshakeMessage;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
  // Forward declaring type: ICertificateValidator
  class ICertificateValidator;
  // Forward declaring type: IUnconnectedSenderReceiver
  class IUnconnectedSenderReceiver;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: AuthenticationException
  class AuthenticationException;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseClientMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseClientMessageHandler : public MasterServer::MessageHandler {
    public:
    // Nested type: MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequest$d__18
    struct $SendOrderedAuthenticatedRequest$d__18;
    // Nested type: MasterServer::BaseClientMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__19
    struct $SendOrderedAuthenticatedRequestAsync$d__19;
    // Nested type: MasterServer::BaseClientMessageHandler::$SendAuthenticatedRequestAsync$d__20_1<T>
    template<typename T>
    struct $SendAuthenticatedRequestAsync$d__20_1;
    // Nested type: MasterServer::BaseClientMessageHandler::$SendAuthenticatedRequestAsync$d__21
    struct $SendAuthenticatedRequestAsync$d__21;
    // Nested type: MasterServer::BaseClientMessageHandler::$OnSendFailed$d__22
    struct $OnSendFailed$d__22;
    // Nested type: MasterServer::BaseClientMessageHandler::$OnSendFailedAwaitResponse$d__23_1<T>
    template<typename T>
    struct $OnSendFailedAwaitResponse$d__23_1;
    // Nested type: MasterServer::BaseClientMessageHandler::$ReauthenticateWithMasterServer$d__24
    struct $ReauthenticateWithMasterServer$d__24;
    // Nested type: MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServer$d__27
    struct $AuthenticateWithMasterServer$d__27;
    // Nested type: MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternalVerbose$d__28
    struct $AuthenticateWithMasterServerAsyncInternalVerbose$d__28;
    // Nested type: MasterServer::BaseClientMessageHandler::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // Nested type: MasterServer::BaseClientMessageHandler::$AuthenticateWithMasterServerAsyncInternal$d__29
    struct $AuthenticateWithMasterServerAsyncInternal$d__29;
    // Nested type: MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private readonly MasterServerEndPoint _endPoint
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MasterServerEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerEndPoint*) == 0x8);
    // private readonly ICertificateValidator _certificateValidator
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::ICertificateValidator* certificateValidator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ICertificateValidator*) == 0x8);
    // private System.Threading.Tasks.Task _authenticationTask
    // Size: 0x8
    // Offset: 0x90
    System::Threading::Tasks::Task* authenticationTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // private System.Security.Authentication.AuthenticationException _authenticationException
    // Size: 0x8
    // Offset: 0x98
    System::Security::Authentication::AuthenticationException* authenticationException;
    // Field size check
    static_assert(sizeof(System::Security::Authentication::AuthenticationException*) == 0x8);
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0xA0
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: orderedRequests
    char __padding4[0x7] = {};
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task> _orderedRequests
    // Size: 0x8
    // Offset: 0xA8
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Threading::Tasks::Task*>* orderedRequests;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Threading::Tasks::Task*>*) == 0x8);
    public:
    // Get static field: static private LiteNetLib.Utils.NetDataWriter _authenticationDataWriter
    static LiteNetLib::Utils::NetDataWriter* _get__authenticationDataWriter();
    // Set static field: static private LiteNetLib.Utils.NetDataWriter _authenticationDataWriter
    static void _set__authenticationDataWriter(LiteNetLib::Utils::NetDataWriter* value);
    // Get instance field reference: private readonly MasterServerEndPoint _endPoint
    GlobalNamespace::MasterServerEndPoint*& dyn__endPoint();
    // Get instance field reference: private readonly ICertificateValidator _certificateValidator
    GlobalNamespace::ICertificateValidator*& dyn__certificateValidator();
    // Get instance field reference: private System.Threading.Tasks.Task _authenticationTask
    System::Threading::Tasks::Task*& dyn__authenticationTask();
    // Get instance field reference: private System.Security.Authentication.AuthenticationException _authenticationException
    System::Security::Authentication::AuthenticationException*& dyn__authenticationException();
    // Get instance field reference: private System.Boolean _disposed
    bool& dyn__disposed();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task> _orderedRequests
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Threading::Tasks::Task*>*& dyn__orderedRequests();
    // public MasterServerEndPoint get_endPoint()
    // Offset: 0x145EF20
    GlobalNamespace::MasterServerEndPoint* get_endPoint();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x145EF28
    bool get_isAuthenticated();
    // public System.Boolean get_isAuthenticating()
    // Offset: 0x145EFB0
    bool get_isAuthenticating();
    // public System.Boolean get_hasAuthenticationFailed()
    // Offset: 0x145F018
    bool get_hasAuthenticationFailed();
    // protected System.Void .ctor(IUnconnectedSenderReceiver sender, MasterServerEndPoint endPoint, MasterServer.ITimeProvider timeProvider, ICertificateValidator certificateValidator, MasterServer.IAnalyticsManager analytics)
    // Offset: 0x145F028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseClientMessageHandler* New_ctor(GlobalNamespace::IUnconnectedSenderReceiver* sender, GlobalNamespace::MasterServerEndPoint* endPoint, MasterServer::ITimeProvider* timeProvider, GlobalNamespace::ICertificateValidator* certificateValidator, MasterServer::IAnalyticsManager* analytics) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseClientMessageHandler*, creationType>(sender, endPoint, timeProvider, certificateValidator, analytics)));
    }
    // protected System.Void SendOrderedAuthenticatedRequest(System.String queue, MasterServer.IMasterServerReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145F144
    void SendOrderedAuthenticatedRequest(::Il2CppString* queue, MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task SendOrderedAuthenticatedRequestAsync(System.Threading.Tasks.Task previousTask, MasterServer.IMasterServerReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145F21C
    System::Threading::Tasks::Task* SendOrderedAuthenticatedRequestAsync(System::Threading::Tasks::Task* previousTask, MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken);
    // protected System.Threading.Tasks.Task`1<T> SendAuthenticatedRequestAsync(MasterServer.IMasterServerReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Threading::Tasks::Task_1<T>* SendAuthenticatedRequestAsync(MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken) {
      static_assert(std::is_base_of_v<MasterServer::IMasterServerReliableResponse, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::SendAuthenticatedRequestAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SendAuthenticatedRequestAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(cancellationToken)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<T>*, false>(___instance_arg, ___generic__method, message, cancellationToken);
    }
    // protected System.Threading.Tasks.Task SendAuthenticatedRequestAsync(MasterServer.IMasterServerReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145F334
    System::Threading::Tasks::Task* SendAuthenticatedRequestAsync(MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task OnSendFailed(System.UInt32 protocolVersion, System.Net.IPEndPoint remoteEndPoint, MasterServer.IMasterServerReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145F438
    System::Threading::Tasks::Task* OnSendFailed(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<T> OnSendFailedAwaitResponse(System.UInt32 protocolVersion, System.Net.IPEndPoint remoteEndPoint, MasterServer.IMasterServerReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Threading::Tasks::Task_1<T>* OnSendFailedAwaitResponse(uint protocolVersion, System::Net::IPEndPoint* remoteEndPoint, MasterServer::IMasterServerReliableRequest* message, System::Threading::CancellationToken cancellationToken) {
      static_assert(std::is_base_of_v<MasterServer::IMasterServerReliableResponse, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::OnSendFailedAwaitResponse");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnSendFailedAwaitResponse", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(protocolVersion), ::il2cpp_utils::ExtractType(remoteEndPoint), ::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(cancellationToken)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<T>*, false>(___instance_arg, ___generic__method, protocolVersion, remoteEndPoint, message, cancellationToken);
    }
    // private System.Threading.Tasks.Task ReauthenticateWithMasterServer()
    // Offset: 0x145F560
    System::Threading::Tasks::Task* ReauthenticateWithMasterServer();
    // protected System.Void UnauthenticateWithMasterServer()
    // Offset: 0x145F650
    void UnauthenticateWithMasterServer();
    // private System.Threading.Tasks.Task AuthenticateWithMasterServerAsync()
    // Offset: 0x145F6CC
    System::Threading::Tasks::Task* AuthenticateWithMasterServerAsync();
    // protected System.Void AuthenticateWithMasterServer()
    // Offset: 0x145F888
    void AuthenticateWithMasterServer();
    // private System.Threading.Tasks.Task AuthenticateWithMasterServerAsyncInternalVerbose()
    // Offset: 0x145F948
    System::Threading::Tasks::Task* AuthenticateWithMasterServerAsyncInternalVerbose();
    // private System.Threading.Tasks.Task AuthenticateWithMasterServerAsyncInternal()
    // Offset: 0x145F788
    System::Threading::Tasks::Task* AuthenticateWithMasterServerAsyncInternal();
    // protected System.Threading.Tasks.Task`1<MasterServer.IMasterServerAuthenticateRequest> GetAuthenticationRequest()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<MasterServer::IMasterServerAuthenticateRequest*>* GetAuthenticationRequest();
    // private System.Threading.Tasks.Task`1<System.Boolean> VerifySignature(System.Byte[] clientRandom, System.Byte[] serverRandom, System.Byte[] serverKey, System.Byte[] signature, System.Byte[][] certData)
    // Offset: 0x145FA7C
    System::Threading::Tasks::Task_1<bool>* VerifySignature(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, ::ArrayW<uint8_t> signature, ::ArrayW<::ArrayW<uint8_t>> certData);
    // private System.Void HandshakeLog(System.String message)
    // Offset: 0x145FB7C
    void HandshakeLog(::Il2CppString* message);
    // public override System.Void Dispose()
    // Offset: 0x145F0D8
    // Implemented from: MasterServer.MessageHandler
    // Base method: System.Void MessageHandler::Dispose()
    void Dispose();
    // protected override System.Boolean ShouldHandleHandshakeMessage(MasterServer.IHandshakeMessage packet, MasterServer.MessageHandler/MasterServer.MessageOrigin origin)
    // Offset: 0x145F0E8
    // Implemented from: MasterServer.MessageHandler
    // Base method: System.Boolean MessageHandler::ShouldHandleHandshakeMessage(MasterServer.IHandshakeMessage packet, MasterServer.MessageHandler/MasterServer.MessageOrigin origin)
    bool ShouldHandleHandshakeMessage(MasterServer::IHandshakeMessage* packet, MasterServer::MessageHandler::MessageOrigin origin);
    // protected override System.Boolean ShouldHandleMessageFromEndPoint(System.Net.IPEndPoint endPoint)
    // Offset: 0x145FA38
    // Implemented from: MasterServer.MessageHandler
    // Base method: System.Boolean MessageHandler::ShouldHandleMessageFromEndPoint(System.Net.IPEndPoint endPoint)
    bool ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint* endPoint);
  }; // MasterServer.BaseClientMessageHandler
  #pragma pack(pop)
  static check_size<sizeof(BaseClientMessageHandler), 168 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Threading::Tasks::Task*>*)> __MasterServer_BaseClientMessageHandlerSizeCheck;
  static_assert(sizeof(BaseClientMessageHandler) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler*, "MasterServer", "BaseClientMessageHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::get_endPoint
// Il2CppName: get_endPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MasterServerEndPoint* (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::get_endPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "get_endPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::get_isAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::get_isAuthenticating
// Il2CppName: get_isAuthenticating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::get_isAuthenticating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "get_isAuthenticating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::get_hasAuthenticationFailed
// Il2CppName: get_hasAuthenticationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::get_hasAuthenticationFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "get_hasAuthenticationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::SendOrderedAuthenticatedRequest
// Il2CppName: SendOrderedAuthenticatedRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::*)(::Il2CppString*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken)>(&MasterServer::BaseClientMessageHandler::SendOrderedAuthenticatedRequest)> {
  static const MethodInfo* get() {
    static auto* queue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "SendOrderedAuthenticatedRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{queue, message, cancellationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::SendOrderedAuthenticatedRequestAsync
// Il2CppName: SendOrderedAuthenticatedRequestAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::BaseClientMessageHandler::*)(System::Threading::Tasks::Task*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken)>(&MasterServer::BaseClientMessageHandler::SendOrderedAuthenticatedRequestAsync)> {
  static const MethodInfo* get() {
    static auto* previousTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "SendOrderedAuthenticatedRequestAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previousTask, message, cancellationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::SendAuthenticatedRequestAsync
// Il2CppName: SendAuthenticatedRequestAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::SendAuthenticatedRequestAsync
// Il2CppName: SendAuthenticatedRequestAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::BaseClientMessageHandler::*)(MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken)>(&MasterServer::BaseClientMessageHandler::SendAuthenticatedRequestAsync)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "SendAuthenticatedRequestAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, cancellationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::OnSendFailed
// Il2CppName: OnSendFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::BaseClientMessageHandler::*)(uint, System::Net::IPEndPoint*, MasterServer::IMasterServerReliableRequest*, System::Threading::CancellationToken)>(&MasterServer::BaseClientMessageHandler::OnSendFailed)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("MasterServer", "IMasterServerReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "OnSendFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, remoteEndPoint, message, cancellationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::OnSendFailedAwaitResponse
// Il2CppName: OnSendFailedAwaitResponse
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::ReauthenticateWithMasterServer
// Il2CppName: ReauthenticateWithMasterServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::ReauthenticateWithMasterServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "ReauthenticateWithMasterServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::UnauthenticateWithMasterServer
// Il2CppName: UnauthenticateWithMasterServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::UnauthenticateWithMasterServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "UnauthenticateWithMasterServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServerAsync
// Il2CppName: AuthenticateWithMasterServerAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServerAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "AuthenticateWithMasterServerAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServer
// Il2CppName: AuthenticateWithMasterServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "AuthenticateWithMasterServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServerAsyncInternalVerbose
// Il2CppName: AuthenticateWithMasterServerAsyncInternalVerbose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServerAsyncInternalVerbose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "AuthenticateWithMasterServerAsyncInternalVerbose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServerAsyncInternal
// Il2CppName: AuthenticateWithMasterServerAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::AuthenticateWithMasterServerAsyncInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "AuthenticateWithMasterServerAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::GetAuthenticationRequest
// Il2CppName: GetAuthenticationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<MasterServer::IMasterServerAuthenticateRequest*>* (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::GetAuthenticationRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "GetAuthenticationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool>* (MasterServer::BaseClientMessageHandler::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<::ArrayW<uint8_t>>)>(&MasterServer::BaseClientMessageHandler::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* certData = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientRandom, serverRandom, serverKey, signature, certData});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::HandshakeLog
// Il2CppName: HandshakeLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::*)(::Il2CppString*)>(&MasterServer::BaseClientMessageHandler::HandshakeLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "HandshakeLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::BaseClientMessageHandler::*)()>(&MasterServer::BaseClientMessageHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::ShouldHandleHandshakeMessage
// Il2CppName: ShouldHandleHandshakeMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::BaseClientMessageHandler::*)(MasterServer::IHandshakeMessage*, MasterServer::MessageHandler::MessageOrigin)>(&MasterServer::BaseClientMessageHandler::ShouldHandleHandshakeMessage)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("MasterServer", "IHandshakeMessage")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("MasterServer", "MessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "ShouldHandleHandshakeMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::ShouldHandleMessageFromEndPoint
// Il2CppName: ShouldHandleMessageFromEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::BaseClientMessageHandler::*)(System::Net::IPEndPoint*)>(&MasterServer::BaseClientMessageHandler::ShouldHandleMessageFromEndPoint)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler*), "ShouldHandleMessageFromEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint});
  }
};
