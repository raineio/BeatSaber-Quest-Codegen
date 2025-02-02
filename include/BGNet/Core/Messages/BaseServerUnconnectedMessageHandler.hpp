// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: ClientHelloRequest
  class ClientHelloRequest;
  // Forward declaring type: ClientHelloWithCookieRequest
  class ClientHelloWithCookieRequest;
  // Forward declaring type: IUnconnectedAuthenticateRequest
  class IUnconnectedAuthenticateRequest;
  // Forward declaring type: IUnconnectedMessage
  class IUnconnectedMessage;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ICertificateEncryptionProvider
  class ICertificateEncryptionProvider;
  // Forward declaring type: IAsyncComputeManager
  class IAsyncComputeManager;
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
  // Forward declaring type: IUnconnectedMessageSender
  class IUnconnectedMessageSender;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BGNet::Core
namespace BGNet::Core {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
  // Forward declaring type: IAnalyticsManager
  class IAnalyticsManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: BaseServerUnconnectedMessageHandler
  class BaseServerUnconnectedMessageHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseServerUnconnectedMessageHandler : public ::BGNet::Core::Messages::UnconnectedMessageHandler {
    public:
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::SigningComputeOperation
    class SigningComputeOperation;
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation
    class GetPreMasterSecretComputeOperation;
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$$c
    class $$c;
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlow$d__19
    struct $StartServerAuthenticationFlow$d__19;
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21
    struct $StartServerAuthenticationFlowAsync$d__21;
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetSignatureAsync$d__23
    struct $GetSignatureAsync$d__23;
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$GetPreMasterSecretAsync$d__24
    struct $GetPreMasterSecretAsync$d__24;
    // Nested type: ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$RotateServerKeysAsync$d__26
    struct $RotateServerKeysAsync$d__26;
    public:
    // private readonly ICertificateEncryptionProvider _certificateEncryptionProvider
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ICertificateEncryptionProvider*) == 0x8);
    // private readonly System.Byte[][] _certificateChain
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::ArrayW<uint8_t>> certificateChain;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<uint8_t>>) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _cookieWriter
    // Size: 0x8
    // Offset: 0x90
    ::LiteNetLib::Utils::NetDataWriter* cookieWriter;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly LiteNetLib.Utils.NetDataWriter _signatureWriter
    // Size: 0x8
    // Offset: 0x98
    ::LiteNetLib::Utils::NetDataWriter* signatureWriter;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataWriter*) == 0x8);
    // private readonly IAsyncComputeManager _asyncCompute
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::IAsyncComputeManager* asyncCompute;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAsyncComputeManager*) == 0x8);
    // private System.Int64 _lastServerKeyPairRequestTime
    // Size: 0x8
    // Offset: 0xA8
    int64_t lastServerKeyPairRequestTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private IDiffieHellmanKeyPair _serverKeys
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // private System.Threading.Tasks.Task _serverKeyRotationTask
    // Size: 0x8
    // Offset: 0xB8
    ::System::Threading::Tasks::Task* serverKeyRotationTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private readonly System.Byte[] _hmacKey
    // Size: 0x8
    // Offset: 0xC0
    ::ArrayW<uint8_t> hmacKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // static field const value: static private System.Int64 kServerKeyExpirationLength
    static constexpr const int64_t kServerKeyExpirationLength = 3000000000;
    // Get static field: static private System.Int64 kServerKeyExpirationLength
    static int64_t _get_kServerKeyExpirationLength();
    // Set static field: static private System.Int64 kServerKeyExpirationLength
    static void _set_kServerKeyExpirationLength(int64_t value);
    // Get instance field reference: private readonly ICertificateEncryptionProvider _certificateEncryptionProvider
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ICertificateEncryptionProvider*& dyn__certificateEncryptionProvider();
    // Get instance field reference: private readonly System.Byte[][] _certificateChain
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<uint8_t>>& dyn__certificateChain();
    // Get instance field reference: private readonly LiteNetLib.Utils.NetDataWriter _cookieWriter
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetDataWriter*& dyn__cookieWriter();
    // Get instance field reference: private readonly LiteNetLib.Utils.NetDataWriter _signatureWriter
    [[deprecated("Use field access instead!")]] ::LiteNetLib::Utils::NetDataWriter*& dyn__signatureWriter();
    // Get instance field reference: private readonly IAsyncComputeManager _asyncCompute
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAsyncComputeManager*& dyn__asyncCompute();
    // Get instance field reference: private System.Int64 _lastServerKeyPairRequestTime
    [[deprecated("Use field access instead!")]] int64_t& dyn__lastServerKeyPairRequestTime();
    // Get instance field reference: private IDiffieHellmanKeyPair _serverKeys
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDiffieHellmanKeyPair*& dyn__serverKeys();
    // Get instance field reference: private System.Threading.Tasks.Task _serverKeyRotationTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn__serverKeyRotationTask();
    // Get instance field reference: private readonly System.Byte[] _hmacKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__hmacKey();
    // public System.Void .ctor(IUnconnectedMessageSender sender, BGNet.Core.ITimeProvider timeProvider, IAsyncComputeManager asyncCompute, BGNet.Core.IAnalyticsManager analytics, ICertificateEncryptionProvider certificateEncryptionProvider, System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate2> certificateList)
    // Offset: 0x15EC1B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseServerUnconnectedMessageHandler* New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::BGNet::Core::ITimeProvider* timeProvider, ::GlobalNamespace::IAsyncComputeManager* asyncCompute, ::BGNet::Core::IAnalyticsManager* analytics, ::GlobalNamespace::ICertificateEncryptionProvider* certificateEncryptionProvider, ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* certificateList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseServerUnconnectedMessageHandler*, creationType>(sender, timeProvider, asyncCompute, analytics, certificateEncryptionProvider, certificateList)));
    }
    // private System.Void RegisterHandshakeMessageHandlers()
    // Offset: 0x15EC468
    void RegisterHandshakeMessageHandlers();
    // protected System.Void HandleClientHelloRequest(BGNet.Core.Messages.ClientHelloRequest packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0x15ED108
    void HandleClientHelloRequest(::BGNet::Core::Messages::ClientHelloRequest* packet, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin);
    // protected System.Void HandleClientHelloWithCookieRequest(BGNet.Core.Messages.ClientHelloWithCookieRequest packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0x15ED43C
    void HandleClientHelloWithCookieRequest(::BGNet::Core::Messages::ClientHelloWithCookieRequest* packet, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin);
    // private System.Void StartServerAuthenticationFlow(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.UInt32 requestId, System.UInt32 certificateResponseId, System.Byte[] clientRandom)
    // Offset: 0x15ED488
    void StartServerAuthenticationFlow(uint protocolVersion, ::System::Net::IPEndPoint* endPoint, uint requestId, uint certificateResponseId, ::ArrayW<uint8_t> clientRandom);
    // protected System.Threading.Tasks.Task VerifyAuthenticationRequest(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, BGNet.Core.Messages.IUnconnectedAuthenticateRequest authenticateRequest)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task* VerifyAuthenticationRequest(uint protocolVersion, ::System::Net::IPEndPoint* endPoint, ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest* authenticateRequest);
    // private System.Threading.Tasks.Task StartServerAuthenticationFlowAsync(System.UInt32 protocolVersion, System.Net.IPEndPoint endPoint, System.UInt32 requestId, System.UInt32 certificateResponseId, System.Byte[] clientRandom)
    // Offset: 0x15ED57C
    ::System::Threading::Tasks::Task* StartServerAuthenticationFlowAsync(uint protocolVersion, ::System::Net::IPEndPoint* endPoint, uint requestId, uint certificateResponseId, ::ArrayW<uint8_t> clientRandom);
    // private System.Byte[] GetCookie(System.Net.IPEndPoint endPoint, System.Byte[] random)
    // Offset: 0x15ECF04
    ::ArrayW<uint8_t> GetCookie(::System::Net::IPEndPoint* endPoint, ::ArrayW<uint8_t> random);
    // private System.Threading.Tasks.Task`1<System.Byte[]> GetSignatureAsync(System.Byte[] clientRandom, System.Byte[] serverRandom, System.Byte[] serverKey)
    // Offset: 0x15ED6BC
    ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* GetSignatureAsync(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey);
    // private System.Threading.Tasks.Task`1<System.Byte[]> GetPreMasterSecretAsync(IDiffieHellmanKeyPair serverKeys, System.Byte[] clientKey)
    // Offset: 0x15ED7E4
    ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* GetPreMasterSecretAsync(::GlobalNamespace::IDiffieHellmanKeyPair* serverKeys, ::ArrayW<uint8_t> clientKey);
    // private System.Void RotateServerKeys()
    // Offset: 0x15ECC60
    void RotateServerKeys();
    // private System.Threading.Tasks.Task RotateServerKeysAsync()
    // Offset: 0x15ED8FC
    ::System::Threading::Tasks::Task* RotateServerKeysAsync();
    // private System.Void HandshakeLog(System.String message)
    // Offset: 0x15ED9EC
    void HandshakeLog(::StringW message);
    // public override System.Void PollUpdate()
    // Offset: 0x15ECBA0
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler
    // Base method: System.Void UnconnectedMessageHandler::PollUpdate()
    void PollUpdate();
    // protected override System.UInt32 GetMessageType(BGNet.Core.Messages.IUnconnectedMessage message)
    // Offset: 0x15ECD8C
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler
    // Base method: System.UInt32 UnconnectedMessageHandler::GetMessageType(BGNet.Core.Messages.IUnconnectedMessage message)
    uint GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message);
    // protected override System.Boolean ShouldHandleMessage(BGNet.Core.Messages.IUnconnectedMessage packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0x15ECDF4
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler
    // Base method: System.Boolean UnconnectedMessageHandler::ShouldHandleMessage(BGNet.Core.Messages.IUnconnectedMessage packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    bool ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin);
  }; // BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
  #pragma pack(pop)
  static check_size<sizeof(BaseServerUnconnectedMessageHandler), 192 + sizeof(::ArrayW<uint8_t>)> __BGNet_Core_Messages_BaseServerUnconnectedMessageHandlerSizeCheck;
  static_assert(sizeof(BaseServerUnconnectedMessageHandler) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RegisterHandshakeMessageHandlers
// Il2CppName: RegisterHandshakeMessageHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RegisterHandshakeMessageHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "RegisterHandshakeMessageHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloRequest
// Il2CppName: HandleClientHelloRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::BGNet::Core::Messages::ClientHelloRequest*, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloRequest)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "ClientHelloRequest")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "HandleClientHelloRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloWithCookieRequest
// Il2CppName: HandleClientHelloWithCookieRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::BGNet::Core::Messages::ClientHelloWithCookieRequest*, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloWithCookieRequest)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "ClientHelloWithCookieRequest")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "HandleClientHelloWithCookieRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlow
// Il2CppName: StartServerAuthenticationFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint, ::System::Net::IPEndPoint*, uint, uint, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlow)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* certificateResponseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "StartServerAuthenticationFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, endPoint, requestId, certificateResponseId, clientRandom});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::VerifyAuthenticationRequest
// Il2CppName: VerifyAuthenticationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::VerifyAuthenticationRequest)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* authenticateRequest = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedAuthenticateRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "VerifyAuthenticationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, endPoint, authenticateRequest});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlowAsync
// Il2CppName: StartServerAuthenticationFlowAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint, ::System::Net::IPEndPoint*, uint, uint, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlowAsync)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* certificateResponseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "StartServerAuthenticationFlowAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, endPoint, requestId, certificateResponseId, clientRandom});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetCookie
// Il2CppName: GetCookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::System::Net::IPEndPoint*, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetCookie)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "GetCookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint, random});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetSignatureAsync
// Il2CppName: GetSignatureAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetSignatureAsync)> {
  static const MethodInfo* get() {
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "GetSignatureAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientRandom, serverRandom, serverKey});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretAsync
// Il2CppName: GetPreMasterSecretAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::GlobalNamespace::IDiffieHellmanKeyPair*, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretAsync)> {
  static const MethodInfo* get() {
    static auto* serverKeys = &::il2cpp_utils::GetClassFromName("", "IDiffieHellmanKeyPair")->byval_arg;
    static auto* clientKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "GetPreMasterSecretAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverKeys, clientKey});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeys
// Il2CppName: RotateServerKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "RotateServerKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeysAsync
// Il2CppName: RotateServerKeysAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeysAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "RotateServerKeysAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandshakeLog
// Il2CppName: HandshakeLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::StringW)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandshakeLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "HandshakeLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetMessageType
// Il2CppName: GetMessageType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetMessageType)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "GetMessageType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::ShouldHandleMessage
// Il2CppName: ShouldHandleMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::ShouldHandleMessage)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*), "ShouldHandleMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
