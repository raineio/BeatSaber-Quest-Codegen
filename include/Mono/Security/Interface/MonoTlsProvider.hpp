// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: IMonoSslStream
  class IMonoSslStream;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: ICertificateValidator2
  class ICertificateValidator2;
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Security::Interface::MonoTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoTlsProvider*, "Mono.Security.Interface", "MonoTlsProvider");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoTlsProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsProvider : public ::Il2CppObject {
    public:
    // public System.Guid get_ID()
    // Offset: 0xFFFFFFFF
    System::Guid get_ID();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.Boolean get_SupportsSslStream()
    // Offset: 0xFFFFFFFF
    bool get_SupportsSslStream();
    // public System.Boolean get_SupportsConnectionInfo()
    // Offset: 0xFFFFFFFF
    bool get_SupportsConnectionInfo();
    // public System.Boolean get_SupportsMonoExtensions()
    // Offset: 0xFFFFFFFF
    bool get_SupportsMonoExtensions();
    // public System.Security.Authentication.SslProtocols get_SupportedProtocols()
    // Offset: 0xFFFFFFFF
    System::Security::Authentication::SslProtocols get_SupportedProtocols();
    // System.Boolean get_SupportsCleanShutdown()
    // Offset: 0xFFFFFFFF
    bool get_SupportsCleanShutdown();
    // public Mono.Security.Interface.IMonoSslStream CreateSslStream(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0xFFFFFFFF
    Mono::Security::Interface::IMonoSslStream* CreateSslStream(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings* settings);
    // Mono.Security.Interface.IMonoSslStream CreateSslStreamInternal(System.Net.Security.SslStream sslStream, System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0xFFFFFFFF
    Mono::Security::Interface::IMonoSslStream* CreateSslStreamInternal(System::Net::Security::SslStream* sslStream, System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings* settings);
    // System.Boolean ValidateCertificate(Mono.Security.Interface.ICertificateValidator2 validator, System.String targetHost, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates, System.Boolean wantsChain, ref System.Security.Cryptography.X509Certificates.X509Chain chain, ref Mono.Security.Interface.MonoSslPolicyErrors errors, ref System.Int32 status11)
    // Offset: 0xFFFFFFFF
    bool ValidateCertificate(Mono::Security::Interface::ICertificateValidator2* validator, ::Il2CppString* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain, ByRef<System::Security::Cryptography::X509Certificates::X509Chain*> chain, ByRef<Mono::Security::Interface::MonoSslPolicyErrors> errors, ByRef<int> status11);
    // System.Void .ctor()
    // Offset: 0x1F9502C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::MonoTlsProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsProvider*, creationType>()));
    }
  }; // Mono.Security.Interface.MonoTlsProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsSslStream
// Il2CppName: get_SupportsSslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsSslStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsSslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsConnectionInfo
// Il2CppName: get_SupportsConnectionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsConnectionInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsConnectionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsMonoExtensions
// Il2CppName: get_SupportsMonoExtensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsMonoExtensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsMonoExtensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportedProtocols
// Il2CppName: get_SupportedProtocols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Authentication::SslProtocols (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportedProtocols)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportedProtocols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsCleanShutdown
// Il2CppName: get_SupportsCleanShutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsCleanShutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsCleanShutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::CreateSslStream
// Il2CppName: CreateSslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::IMonoSslStream* (Mono::Security::Interface::MonoTlsProvider::*)(System::IO::Stream*, bool, Mono::Security::Interface::MonoTlsSettings*)>(&Mono::Security::Interface::MonoTlsProvider::CreateSslStream)> {
  static const MethodInfo* get() {
    static auto* innerStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* leaveInnerStreamOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "CreateSslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{innerStream, leaveInnerStreamOpen, settings});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::CreateSslStreamInternal
// Il2CppName: CreateSslStreamInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::IMonoSslStream* (Mono::Security::Interface::MonoTlsProvider::*)(System::Net::Security::SslStream*, System::IO::Stream*, bool, Mono::Security::Interface::MonoTlsSettings*)>(&Mono::Security::Interface::MonoTlsProvider::CreateSslStreamInternal)> {
  static const MethodInfo* get() {
    static auto* sslStream = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslStream")->byval_arg;
    static auto* innerStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* leaveInnerStreamOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "CreateSslStreamInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sslStream, innerStream, leaveInnerStreamOpen, settings});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)(Mono::Security::Interface::ICertificateValidator2*, ::Il2CppString*, bool, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool, ByRef<System::Security::Cryptography::X509Certificates::X509Chain*>, ByRef<Mono::Security::Interface::MonoSslPolicyErrors>, ByRef<int>)>(&Mono::Security::Interface::MonoTlsProvider::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* validator = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "ICertificateValidator2")->byval_arg;
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* serverMode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* certificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* wantsChain = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->this_arg;
    static auto* errors = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoSslPolicyErrors")->this_arg;
    static auto* status11 = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
