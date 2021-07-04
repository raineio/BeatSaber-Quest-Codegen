// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: X509CertificateUtility
  class X509CertificateUtility : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::X509CertificateUtility::PasswordFinder
    class PasswordFinder;
    // Nested type: GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider
    class RSACertificateEncryptionProvider;
    // Nested type: GlobalNamespace::X509CertificateUtility::$$c
    class $$c;
    // Creating value type constructor for type: X509CertificateUtility
    X509CertificateUtility() noexcept {}
    // static public ICertificateEncryptionProvider GetCertificateEncryptionProvider(System.String privateKeyPem, System.String password)
    // Offset: 0x237DE08
    static GlobalNamespace::ICertificateEncryptionProvider* GetCertificateEncryptionProvider(::Il2CppString* privateKeyPem, ::Il2CppString* password);
    // static private X509CertificateUtility/RSACertificateEncryptionProvider GetRSACertificateEncryptionProvider(System.String privateKeyPem, X509CertificateUtility/PasswordFinder passwordFinder)
    // Offset: 0x237DECC
    static GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider* GetRSACertificateEncryptionProvider(::Il2CppString* privateKeyPem, GlobalNamespace::X509CertificateUtility::PasswordFinder* passwordFinder);
    // static public System.Security.Cryptography.X509Certificates.X509Certificate2[] GetCertificateList(System.String certificatePem, System.String certificateChainPem)
    // Offset: 0x237E18C
    static ::Array<System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetCertificateList(::Il2CppString* certificatePem, ::Il2CppString* certificateChainPem);
    // static public System.Void ValidateCertificateChain(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x237DC30
    static void ValidateCertificateChain(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
    // static private System.Void ValidateCertificateChainUnity(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x237E6D8
    static void ValidateCertificateChainUnity(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
    // static private System.Void ValidateCertificateChainDotNet(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x237ED90
    static void ValidateCertificateChainDotNet(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
  }; // X509CertificateUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::X509CertificateUtility*, "", "X509CertificateUtility");
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider
// Il2CppName: GetCertificateEncryptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ICertificateEncryptionProvider* (*)(::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "GetCertificateEncryptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider
// Il2CppName: GetRSACertificateEncryptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider* (*)(::Il2CppString*, GlobalNamespace::X509CertificateUtility::PasswordFinder*)>(&GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "GetRSACertificateEncryptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::X509CertificateUtility::PasswordFinder*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::GetCertificateList
// Il2CppName: GetCertificateList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Security::Cryptography::X509Certificates::X509Certificate2*>* (*)(::Il2CppString*, ::Il2CppString*)>(&GlobalNamespace::X509CertificateUtility::GetCertificateList)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "GetCertificateList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::ValidateCertificateChain
// Il2CppName: ValidateCertificateChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::Array<uint8_t>*>*)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChain)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "ValidateCertificateChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Array<uint8_t>*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity
// Il2CppName: ValidateCertificateChainUnity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::Array<uint8_t>*>*)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "ValidateCertificateChainUnity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Array<uint8_t>*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet
// Il2CppName: ValidateCertificateChainDotNet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509Certificate2*, ::Array<::Array<uint8_t>*>*)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility*), "ValidateCertificateChainDotNet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Security::Cryptography::X509Certificates::X509Certificate2*>(), ::il2cpp_utils::ExtractIndependentType<::Array<::Array<uint8_t>*>*>()});
  }
};
