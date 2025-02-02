// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Certificate*, "Mono.Security.X509", "X509Certificate");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Certificate
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Certificate : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private Mono.Security.ASN1 decoder
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Security::ASN1* decoder;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1*) == 0x8);
    // private System.Byte[] m_encodedcert
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> m_encodedcert;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.DateTime m_from
    // Size: 0x8
    // Offset: 0x20
    ::System::DateTime m_from;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.DateTime m_until
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime m_until;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private Mono.Security.ASN1 issuer
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Security::ASN1* issuer;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1*) == 0x8);
    // private System.String m_issuername
    // Size: 0x8
    // Offset: 0x38
    ::StringW m_issuername;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_keyalgo
    // Size: 0x8
    // Offset: 0x40
    ::StringW m_keyalgo;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] m_keyalgoparams
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> m_keyalgoparams;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Mono.Security.ASN1 subject
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Security::ASN1* subject;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1*) == 0x8);
    // private System.String m_subject
    // Size: 0x8
    // Offset: 0x58
    ::StringW m_subject;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] m_publickey
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> m_publickey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] signature
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<uint8_t> signature;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String m_signaturealgo
    // Size: 0x8
    // Offset: 0x70
    ::StringW m_signaturealgo;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] m_signaturealgoparams
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<uint8_t> m_signaturealgoparams;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] certhash
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<uint8_t> certhash;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Security.Cryptography.RSA _rsa
    // Size: 0x8
    // Offset: 0x88
    ::System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RSA*) == 0x8);
    // private System.Security.Cryptography.DSA _dsa
    // Size: 0x8
    // Offset: 0x90
    ::System::Security::Cryptography::DSA* dsa;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DSA*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x98
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: serialnumber
    char __padding17[0x4] = {};
    // private System.Byte[] serialnumber
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<uint8_t> serialnumber;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] issuerUniqueID
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<uint8_t> issuerUniqueID;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] subjectUniqueID
    // Size: 0x8
    // Offset: 0xB0
    ::ArrayW<uint8_t> subjectUniqueID;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Mono.Security.X509.X509ExtensionCollection extensions
    // Size: 0x8
    // Offset: 0xB8
    ::Mono::Security::X509::X509ExtensionCollection* extensions;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509ExtensionCollection*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private System.String encoding_error
    static ::StringW _get_encoding_error();
    // Set static field: static private System.String encoding_error
    static void _set_encoding_error(::StringW value);
    // Get instance field reference: private Mono.Security.ASN1 decoder
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1*& dyn_decoder();
    // Get instance field reference: private System.Byte[] m_encodedcert
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_encodedcert();
    // Get instance field reference: private System.DateTime m_from
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_m_from();
    // Get instance field reference: private System.DateTime m_until
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_m_until();
    // Get instance field reference: private Mono.Security.ASN1 issuer
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1*& dyn_issuer();
    // Get instance field reference: private System.String m_issuername
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_issuername();
    // Get instance field reference: private System.String m_keyalgo
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_keyalgo();
    // Get instance field reference: private System.Byte[] m_keyalgoparams
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_keyalgoparams();
    // Get instance field reference: private Mono.Security.ASN1 subject
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1*& dyn_subject();
    // Get instance field reference: private System.String m_subject
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_subject();
    // Get instance field reference: private System.Byte[] m_publickey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_publickey();
    // Get instance field reference: private System.Byte[] signature
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_signature();
    // Get instance field reference: private System.String m_signaturealgo
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_signaturealgo();
    // Get instance field reference: private System.Byte[] m_signaturealgoparams
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_signaturealgoparams();
    // Get instance field reference: private System.Byte[] certhash
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_certhash();
    // Get instance field reference: private System.Security.Cryptography.RSA _rsa
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RSA*& dyn__rsa();
    // Get instance field reference: private System.Security.Cryptography.DSA _dsa
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DSA*& dyn__dsa();
    // Get instance field reference: private System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
    // Get instance field reference: private System.Byte[] serialnumber
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_serialnumber();
    // Get instance field reference: private System.Byte[] issuerUniqueID
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_issuerUniqueID();
    // Get instance field reference: private System.Byte[] subjectUniqueID
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_subjectUniqueID();
    // Get instance field reference: private Mono.Security.X509.X509ExtensionCollection extensions
    [[deprecated("Use field access instead!")]] ::Mono::Security::X509::X509ExtensionCollection*& dyn_extensions();
    // public System.Security.Cryptography.DSA get_DSA()
    // Offset: 0x2B4D8C0
    ::System::Security::Cryptography::DSA* get_DSA();
    // public System.Void set_DSA(System.Security.Cryptography.DSA value)
    // Offset: 0x2B4DB6C
    void set_DSA(::System::Security::Cryptography::DSA* value);
    // public Mono.Security.X509.X509ExtensionCollection get_Extensions()
    // Offset: 0x2B4DB7C
    ::Mono::Security::X509::X509ExtensionCollection* get_Extensions();
    // public System.Byte[] get_Hash()
    // Offset: 0x2B4DB84
    ::ArrayW<uint8_t> get_Hash();
    // public System.String get_IssuerName()
    // Offset: 0x2B4DD8C
    ::StringW get_IssuerName();
    // public System.String get_KeyAlgorithm()
    // Offset: 0x2B4DD94
    ::StringW get_KeyAlgorithm();
    // public System.Byte[] get_KeyAlgorithmParameters()
    // Offset: 0x2B4DD9C
    ::ArrayW<uint8_t> get_KeyAlgorithmParameters();
    // public System.Void set_KeyAlgorithmParameters(System.Byte[] value)
    // Offset: 0x2B4DE18
    void set_KeyAlgorithmParameters(::ArrayW<uint8_t> value);
    // public System.Byte[] get_PublicKey()
    // Offset: 0x2B4DE20
    ::ArrayW<uint8_t> get_PublicKey();
    // public System.Security.Cryptography.RSA get_RSA()
    // Offset: 0x2B4DE9C
    ::System::Security::Cryptography::RSA* get_RSA();
    // public System.Void set_RSA(System.Security.Cryptography.RSA value)
    // Offset: 0x2B4E048
    void set_RSA(::System::Security::Cryptography::RSA* value);
    // public System.Byte[] get_RawData()
    // Offset: 0x2B4E058
    ::ArrayW<uint8_t> get_RawData();
    // public System.Byte[] get_SerialNumber()
    // Offset: 0x2B4E0D4
    ::ArrayW<uint8_t> get_SerialNumber();
    // public System.Byte[] get_Signature()
    // Offset: 0x2B4E150
    ::ArrayW<uint8_t> get_Signature();
    // public System.String get_SignatureAlgorithm()
    // Offset: 0x2B4E514
    ::StringW get_SignatureAlgorithm();
    // public System.String get_SubjectName()
    // Offset: 0x2B4E51C
    ::StringW get_SubjectName();
    // public System.DateTime get_ValidFrom()
    // Offset: 0x2B4E524
    ::System::DateTime get_ValidFrom();
    // public System.DateTime get_ValidUntil()
    // Offset: 0x2B4E52C
    ::System::DateTime get_ValidUntil();
    // public System.Int32 get_Version()
    // Offset: 0x2B4E534
    int get_Version();
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x2B4D54C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(data)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2B4E918
    static void _cctor();
    // private System.Void Parse(System.Byte[] data)
    // Offset: 0x2B4CB14
    void Parse(::ArrayW<uint8_t> data);
    // private System.Byte[] GetUnsignedBigInteger(System.Byte[] integer)
    // Offset: 0x2B4D814
    ::ArrayW<uint8_t> GetUnsignedBigInteger(::ArrayW<uint8_t> integer);
    // System.Boolean VerifySignature(System.Security.Cryptography.DSA dsa)
    // Offset: 0x2B4E53C
    bool VerifySignature(::System::Security::Cryptography::DSA* dsa);
    // System.Boolean VerifySignature(System.Security.Cryptography.RSA rsa)
    // Offset: 0x2B4E600
    bool VerifySignature(::System::Security::Cryptography::RSA* rsa);
    // public System.Boolean VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm aa)
    // Offset: 0x2B4E720
    bool VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa);
    // public Mono.Security.ASN1 GetIssuerName()
    // Offset: 0x2B4E89C
    ::Mono::Security::ASN1* GetIssuerName();
    // public Mono.Security.ASN1 GetSubjectName()
    // Offset: 0x2B4E8A4
    ::Mono::Security::ASN1* GetSubjectName();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2B4E8AC
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static private System.Byte[] PEM(System.String type, System.Byte[] data)
    // Offset: 0x2B4D6E8
    static ::ArrayW<uint8_t> PEM(::StringW type, ::ArrayW<uint8_t> data);
  }; // Mono.Security.X509.X509Certificate
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate), 184 + sizeof(::Mono::Security::X509::X509ExtensionCollection*)> __Mono_Security_X509_X509CertificateSizeCheck;
  static_assert(sizeof(X509Certificate) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_DSA
// Il2CppName: get_DSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSA* (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_DSA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_DSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::set_DSA
// Il2CppName: set_DSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::DSA*)>(&Mono::Security::X509::X509Certificate::set_DSA)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "set_DSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_Hash
// Il2CppName: get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_Hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_IssuerName
// Il2CppName: get_IssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_IssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_IssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_KeyAlgorithm
// Il2CppName: get_KeyAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_KeyAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_KeyAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_KeyAlgorithmParameters
// Il2CppName: get_KeyAlgorithmParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_KeyAlgorithmParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_KeyAlgorithmParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::set_KeyAlgorithmParameters
// Il2CppName: set_KeyAlgorithmParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Certificate::set_KeyAlgorithmParameters)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "set_KeyAlgorithmParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_PublicKey
// Il2CppName: get_PublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_PublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_PublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_RSA
// Il2CppName: get_RSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_RSA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_RSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::set_RSA
// Il2CppName: set_RSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::RSA*)>(&Mono::Security::X509::X509Certificate::set_RSA)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "set_RSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_RawData
// Il2CppName: get_RawData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_RawData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_RawData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_Signature
// Il2CppName: get_Signature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_Signature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_Signature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_SubjectName
// Il2CppName: get_SubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_SubjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_SubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_ValidFrom
// Il2CppName: get_ValidFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_ValidFrom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_ValidFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_ValidUntil
// Il2CppName: get_ValidUntil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_ValidUntil)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_ValidUntil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::X509::X509Certificate::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Certificate::Parse)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::GetUnsignedBigInteger
// Il2CppName: GetUnsignedBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Certificate::GetUnsignedBigInteger)> {
  static const MethodInfo* get() {
    static auto* integer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "GetUnsignedBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{integer});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::DSA*)>(&Mono::Security::X509::X509Certificate::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* dsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dsa});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::RSA*)>(&Mono::Security::X509::X509Certificate::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Certificate::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&Mono::Security::X509::X509Certificate::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::GetIssuerName
// Il2CppName: GetIssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::GetIssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "GetIssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::GetSubjectName
// Il2CppName: GetSubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::X509Certificate::*)()>(&Mono::Security::X509::X509Certificate::GetSubjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "GetSubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Certificate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&Mono::Security::X509::X509Certificate::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate::PEM
// Il2CppName: PEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Certificate::PEM)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate*), "PEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, data});
  }
};
