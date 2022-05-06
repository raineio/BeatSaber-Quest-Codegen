// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.X509.X509ExtensionBase
#include "Org/BouncyCastle/X509/X509ExtensionBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509CertificateStructure
  class X509CertificateStructure;
  // Forward declaring type: BasicConstraints
  class BasicConstraints;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509Certificate*, "Org.BouncyCastle.X509", "X509Certificate");
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509Certificate
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Certificate : public ::Org::BouncyCastle::X509::X509ExtensionBase {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.X509CertificateStructure c
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*) == 0x8);
    // private readonly System.String sigAlgName
    // Size: 0x8
    // Offset: 0x18
    ::StringW sigAlgName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Byte[] sigAlgParams
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> sigAlgParams;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.BasicConstraints basicConstraints
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Asn1::X509::BasicConstraints* basicConstraints;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::BasicConstraints*) == 0x8);
    // private readonly System.Boolean[] keyUsage
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<bool> keyUsage;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private readonly System.Object cacheLock
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* cacheLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private Org.BouncyCastle.Crypto.AsymmetricKeyParameter publicKeyValue
    // Size: 0x8
    // Offset: 0x40
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKeyValue;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*) == 0x8);
    // private System.Boolean hashValueSet
    // Size: 0x1
    // Offset: 0x48
    bool hashValueSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hashValueSet and: hashValue
    char __padding7[0x3] = {};
    // private System.Int32 hashValue
    // Size: 0x4
    // Offset: 0x4C
    int hashValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.X509CertificateStructure c
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure*& dyn_c();
    // Get instance field reference: private readonly System.String sigAlgName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_sigAlgName();
    // Get instance field reference: private readonly System.Byte[] sigAlgParams
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_sigAlgParams();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.BasicConstraints basicConstraints
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::BasicConstraints*& dyn_basicConstraints();
    // Get instance field reference: private readonly System.Boolean[] keyUsage
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_keyUsage();
    // Get instance field reference: private readonly System.Object cacheLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_cacheLock();
    // Get instance field reference: private Org.BouncyCastle.Crypto.AsymmetricKeyParameter publicKeyValue
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& dyn_publicKeyValue();
    // Get instance field reference: private System.Boolean hashValueSet
    [[deprecated("Use field access instead!")]] bool& dyn_hashValueSet();
    // Get instance field reference: private System.Int32 hashValue
    [[deprecated("Use field access instead!")]] int& dyn_hashValue();
    // public System.Int32 get_Version()
    // Offset: 0x25F258C
    int get_Version();
    // public Org.BouncyCastle.Math.BigInteger get_SerialNumber()
    // Offset: 0x25F25A8
    ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_IssuerDN()
    // Offset: 0x25F25D4
    ::Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_SubjectDN()
    // Offset: 0x25F25F0
    ::Org::BouncyCastle::Asn1::X509::X509Name* get_SubjectDN();
    // public System.DateTime get_NotBefore()
    // Offset: 0x25F260C
    ::System::DateTime get_NotBefore();
    // public System.DateTime get_NotAfter()
    // Offset: 0x25F2638
    ::System::DateTime get_NotAfter();
    // public System.String get_SigAlgName()
    // Offset: 0x25F2680
    ::StringW get_SigAlgName();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.X509CertificateStructure c)
    // Offset: 0x25F1DBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::X509::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(c)));
    }
    // public System.Byte[] GetSignature()
    // Offset: 0x25F2664
    ::ArrayW<uint8_t> GetSignature();
    // public Org.BouncyCastle.Crypto.AsymmetricKeyParameter GetPublicKey()
    // Offset: 0x25F26D8
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey();
    // public System.Byte[] GetEncoded()
    // Offset: 0x25F2770
    ::ArrayW<uint8_t> GetEncoded();
    // protected override Org.BouncyCastle.Asn1.X509.X509Extensions GetX509Extensions()
    // Offset: 0x25F2688
    // Implemented from: Org.BouncyCastle.X509.X509ExtensionBase
    // Base method: Org.BouncyCastle.Asn1.X509.X509Extensions X509ExtensionBase::GetX509Extensions()
    ::Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x25F278C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x25F28B4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x25F291C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Org.BouncyCastle.X509.X509Certificate
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate), 76 + sizeof(int)> __Org_BouncyCastle_X509_X509CertificateSizeCheck;
  static_assert(sizeof(X509Certificate) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::get_IssuerDN
// Il2CppName: get_IssuerDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::get_IssuerDN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "get_IssuerDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::get_SubjectDN
// Il2CppName: get_SubjectDN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::get_SubjectDN)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "get_SubjectDN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::get_NotBefore
// Il2CppName: get_NotBefore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::get_NotBefore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "get_NotBefore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::get_NotAfter
// Il2CppName: get_NotAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::get_NotAfter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "get_NotAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::get_SigAlgName
// Il2CppName: get_SigAlgName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::get_SigAlgName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "get_SigAlgName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::GetSignature
// Il2CppName: GetSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::GetSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "GetSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::GetPublicKey
// Il2CppName: GetPublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::GetPublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "GetPublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::GetEncoded
// Il2CppName: GetEncoded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::GetEncoded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "GetEncoded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::GetX509Extensions
// Il2CppName: GetX509Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::GetX509Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "GetX509Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509Certificate::*)(::Il2CppObject*)>(&Org::BouncyCastle::X509::X509Certificate::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::X509::X509Certificate::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::X509::X509Certificate::*)()>(&Org::BouncyCastle::X509::X509Certificate::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::X509::X509Certificate*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
