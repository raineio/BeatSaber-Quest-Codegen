// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Forward declaring type: CertHelper
  class CertHelper;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Mono::Unity::CertHelper);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::CertHelper*, "Mono.Unity", "CertHelper");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.CertHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class CertHelper : public ::Il2CppObject {
    public:
    // static public System.Void AddCertificatesToNativeChain(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list* nativeCertificateChain, System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1835420
    static void AddCertificatesToNativeChain(Mono::Unity::UnityTls::unitytls_x509list* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // static public System.Void AddCertificateToNativeChain(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list* nativeCertificateChain, System.Security.Cryptography.X509Certificates.X509Certificate certificate, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1835578
    static void AddCertificateToNativeChain(Mono::Unity::UnityTls::unitytls_x509list* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateCollection NativeChainToManagedCollection(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509list_ref nativeCertificateChain, Mono.Unity.UnityTls/Mono.Unity.unitytls_errorstate* errorState)
    // Offset: 0x1835A9C
    static System::Security::Cryptography::X509Certificates::X509CertificateCollection* NativeChainToManagedCollection(Mono::Unity::UnityTls::unitytls_x509list_ref nativeCertificateChain, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
  }; // Mono.Unity.CertHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::CertHelper::AddCertificatesToNativeChain
// Il2CppName: AddCertificatesToNativeChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Mono::Unity::UnityTls::unitytls_x509list*, System::Security::Cryptography::X509Certificates::X509CertificateCollection*, Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::CertHelper::AddCertificatesToNativeChain)> {
  static const MethodInfo* get() {
    static auto* nativeCertificateChain = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list"))->byval_arg;
    static auto* certificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::CertHelper*), "AddCertificatesToNativeChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeCertificateChain, certificates, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::CertHelper::AddCertificateToNativeChain
// Il2CppName: AddCertificateToNativeChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Mono::Unity::UnityTls::unitytls_x509list*, System::Security::Cryptography::X509Certificates::X509Certificate*, Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::CertHelper::AddCertificateToNativeChain)> {
  static const MethodInfo* get() {
    static auto* nativeCertificateChain = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list"))->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::CertHelper*), "AddCertificateToNativeChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeCertificateChain, certificate, errorState});
  }
};
// Writing MetadataGetter for method: Mono::Unity::CertHelper::NativeChainToManagedCollection
// Il2CppName: NativeChainToManagedCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection* (*)(Mono::Unity::UnityTls::unitytls_x509list_ref, Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::CertHelper::NativeChainToManagedCollection)> {
  static const MethodInfo* get() {
    static auto* nativeCertificateChain = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509list_ref")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::CertHelper*), "NativeChainToManagedCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeCertificateChain, errorState});
  }
};
