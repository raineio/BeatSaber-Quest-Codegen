// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IRsa
  class IRsa;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: RsaDigestSigner
  class RsaDigestSigner;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "RsaDigestSigner");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
  // [TokenAttribute] Offset: FFFFFFFF
  class RsaDigestSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher rsaEngine
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x28
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get static field: static private readonly System.Collections.IDictionary oidMap
    static System::Collections::IDictionary* _get_oidMap();
    // Set static field: static private readonly System.Collections.IDictionary oidMap
    static void _set_oidMap(System::Collections::IDictionary* value);
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher rsaEngine
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& dyn_rsaEngine();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_algId();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest digest
    Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // Get instance field reference: private System.Boolean forSigning
    bool& dyn_forSigning();
    // static private System.Void .cctor()
    // Offset: 0x13C5578
    static void _cctor();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x13C5CE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaDigestSigner*, creationType>(digest)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.DerObjectIdentifier digestOid)
    // Offset: 0x13C5E8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaDigestSigner*, creationType>(digest, digestOid)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId)
    // Offset: 0x13C5F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaDigestSigner*, creationType>(digest, algId)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IRsa rsa, Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId)
    // Offset: 0x13C5FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IRsa* rsa, Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaDigestSigner*, creationType>(rsa, digest, algId)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher rsaEngine, Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algId)
    // Offset: 0x13C6048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* rsaEngine, Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaDigestSigner*, creationType>(rsaEngine, digest, algId)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x13C60D8
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x13C62E0
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int length);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x13C63BC
    ::ArrayW<uint8_t> GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x13C6680
    void Reset();
    // private System.Byte[] DerEncode(System.Byte[] hash)
    // Offset: 0x13C65E4
    ::ArrayW<uint8_t> DerEncode(::ArrayW<uint8_t> hash);
  }; // Org.BouncyCastle.Crypto.Signers.RsaDigestSigner
  #pragma pack(pop)
  static check_size<sizeof(RsaDigestSigner), 40 + sizeof(bool)> __Org_BouncyCastle_Crypto_Signers_RsaDigestSignerSizeCheck;
  static_assert(sizeof(RsaDigestSigner) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::DerEncode
// Il2CppName: DerEncode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::RsaDigestSigner::DerEncode)> {
  static const MethodInfo* get() {
    static auto* hash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RsaDigestSigner*), "DerEncode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash});
  }
};
