// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ICertificateEncryptionProvider
  class ICertificateEncryptionProvider;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: X509CertificateUtility
  class X509CertificateUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility*, "", "X509CertificateUtility");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: X509CertificateUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class X509CertificateUtility : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::X509CertificateUtility::PasswordFinder
    class PasswordFinder;
    // Nested type: ::GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider
    class RSACertificateEncryptionProvider;
    // Nested type: ::GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8
    class $GetCertificateList$d__8;
    // Nested type: ::GlobalNamespace::X509CertificateUtility::$$c
    class $$c;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FFB74
    // Get static field: static private readonly System.String kBeatSaberDotComRootCertificate
    static ::StringW _get_kBeatSaberDotComRootCertificate();
    // Set static field: static private readonly System.String kBeatSaberDotComRootCertificate
    static void _set_kBeatSaberDotComRootCertificate(::StringW value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10FFB84
    // Get static field: static private readonly System.String kAwsRootCertificates
    static ::StringW _get_kAwsRootCertificates();
    // Set static field: static private readonly System.String kAwsRootCertificates
    static void _set_kAwsRootCertificates(::StringW value);
    // Get static field: static private System.Security.Cryptography.X509Certificates.X509Certificate2[] _rootCertificates
    static ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> _get__rootCertificates();
    // Set static field: static private System.Security.Cryptography.X509Certificates.X509Certificate2[] _rootCertificates
    static void _set__rootCertificates(::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> value);
    // static private System.Void .cctor()
    // Offset: 0x26A84F0
    static void _cctor();
    // static private System.Security.Cryptography.X509Certificates.X509Certificate2[] GetRootCertificates()
    // Offset: 0x26A720C
    static ::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> GetRootCertificates();
    // static public ICertificateEncryptionProvider GetCertificateEncryptionProvider(System.String privateKeyPem, System.String password)
    // Offset: 0x26A7374
    static ::GlobalNamespace::ICertificateEncryptionProvider* GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password);
    // static private X509CertificateUtility/RSACertificateEncryptionProvider GetRSACertificateEncryptionProvider(System.String privateKeyPem, X509CertificateUtility/PasswordFinder passwordFinder)
    // Offset: 0x26A7458
    static ::GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider* GetRSACertificateEncryptionProvider(::StringW privateKeyPem, ::GlobalNamespace::X509CertificateUtility::PasswordFinder* passwordFinder);
    // static public System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate2> GetCertificateList(System.String certificatePem, System.String certificateChainPem)
    // Offset: 0x26A72E4
    static ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetCertificateList(::StringW certificatePem, ::StringW certificateChainPem);
    // static public System.Void ValidateCertificateChain(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x26A7750
    static void ValidateCertificateChain(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain);
    // static private System.Void ValidateCertificateChainUnity(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x26A77C4
    static void ValidateCertificateChainUnity(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain);
    // static private System.Void ValidateCertificateChainDotNet(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x26A8084
    static void ValidateCertificateChainDotNet(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain);
  }; // X509CertificateUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::X509CertificateUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::GetRootCertificates
// Il2CppName: GetRootCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Security::Cryptography::X509Certificates::X509Certificate2*> (*)()>(&GlobalNamespace::X509CertificateUtility::GetRootCertificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "GetRootCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider
// Il2CppName: GetCertificateEncryptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ICertificateEncryptionProvider* (*)(::StringW, ::StringW)>(&GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider)> {
  static const MethodInfo* get() {
    static auto* privateKeyPem = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "GetCertificateEncryptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{privateKeyPem, password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider
// Il2CppName: GetRSACertificateEncryptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider* (*)(::StringW, ::GlobalNamespace::X509CertificateUtility::PasswordFinder*)>(&GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider)> {
  static const MethodInfo* get() {
    static auto* privateKeyPem = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* passwordFinder = &::il2cpp_utils::GetClassFromName("", "X509CertificateUtility/PasswordFinder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "GetRSACertificateEncryptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{privateKeyPem, passwordFinder});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::GetCertificateList
// Il2CppName: GetCertificateList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* (*)(::StringW, ::StringW)>(&GlobalNamespace::X509CertificateUtility::GetCertificateList)> {
  static const MethodInfo* get() {
    static auto* certificatePem = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* certificateChainPem = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "GetCertificateList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificatePem, certificateChainPem});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::ValidateCertificateChain
// Il2CppName: ValidateCertificateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChain)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    static auto* certificateChain = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "ValidateCertificateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate, certificateChain});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity
// Il2CppName: ValidateCertificateChainUnity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    static auto* certificateChain = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "ValidateCertificateChainUnity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate, certificateChain});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet
// Il2CppName: ValidateCertificateChainDotNet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    static auto* certificateChain = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "ValidateCertificateChainDotNet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate, certificateChain});
  }
};
