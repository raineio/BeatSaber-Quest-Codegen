// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
#include "System/Security/Cryptography/X509Certificates/X509CertificateImpl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X509CertificateImplCollection
  class X509CertificateImplCollection;
  // Forward declaring type: X509NameType
  struct X509NameType;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: Oid
  class Oid;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2Impl
  class X509Certificate2Impl;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Certificate2Impl);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Impl");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Certificate2Impl : public System::Security::Cryptography::X509Certificates::X509CertificateImpl {
    public:
    // public System.Security.Cryptography.X509Certificates.X509ExtensionCollection get_Extensions()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_IssuerName()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();
    // public System.Security.Cryptography.AsymmetricAlgorithm get_PrivateKey()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
    // public System.Void set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm value)
    // Offset: 0xFFFFFFFF
    void set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm* value);
    // public System.Security.Cryptography.X509Certificates.PublicKey get_PublicKey()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
    // public System.Security.Cryptography.Oid get_SignatureAlgorithm()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::Oid* get_SignatureAlgorithm();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_SubjectName()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();
    // public System.Int32 get_Version()
    // Offset: 0xFFFFFFFF
    int get_Version();
    // System.Security.Cryptography.X509Certificates.X509CertificateImplCollection get_IntermediateCertificates()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();
    // System.Security.Cryptography.X509Certificates.X509Certificate2Impl get_FallbackImpl()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_FallbackImpl();
    // public System.String GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);
    // public System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0xFFFFFFFF
    void Import(::ArrayW<uint8_t> rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public System.Boolean Verify(System.Security.Cryptography.X509Certificates.X509Certificate2 thisCertificate)
    // Offset: 0xFFFFFFFF
    bool Verify(System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void Reset();
    // protected System.Void .ctor()
    // Offset: 0x19D9370
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Void X509CertificateImpl::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate2Impl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509Certificate2Impl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate2Impl*, creationType>()));
    }
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2Impl
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ExtensionCollection* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_IssuerName
// Il2CppName: get_IssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X500DistinguishedName* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_IssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_IssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_PrivateKey
// Il2CppName: get_PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::AsymmetricAlgorithm* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_PrivateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::set_PrivateKey
// Il2CppName: set_PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)(System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::set_PrivateKey)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "set_PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_PublicKey
// Il2CppName: get_PublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::PublicKey* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_PublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_PublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::Oid* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_SubjectName
// Il2CppName: get_SubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X500DistinguishedName* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_SubjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_SubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_IntermediateCertificates
// Il2CppName: get_IntermediateCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_IntermediateCertificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_IntermediateCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_FallbackImpl
// Il2CppName: get_FallbackImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::get_FallbackImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "get_FallbackImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::GetNameInfo
// Il2CppName: GetNameInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)(System::Security::Cryptography::X509Certificates::X509NameType, bool)>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::GetNameInfo)> {
  static const MethodInfo* get() {
    static auto* nameType = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509NameType")->byval_arg;
    static auto* forIssuer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "GetNameInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nameType, forIssuer});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)(::ArrayW<uint8_t>, ::Il2CppString*, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::Import)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password, keyStorageFlags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::Verify
// Il2CppName: Verify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)(System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::Verify)> {
  static const MethodInfo* get() {
    static auto* thisCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "Verify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisCertificate});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2Impl::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2Impl::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Certificate2Impl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
