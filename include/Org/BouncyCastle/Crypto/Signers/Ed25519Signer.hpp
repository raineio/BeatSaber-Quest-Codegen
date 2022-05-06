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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed25519PrivateKeyParameters
  class Ed25519PrivateKeyParameters;
  // Forward declaring type: Ed25519PublicKeyParameters
  class Ed25519PublicKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: Ed25519Signer
  class Ed25519Signer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed25519Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed25519Signer*, "Org.BouncyCastle.Crypto.Signers", "Ed25519Signer");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed25519Signer
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed25519Signer : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // Nested type: ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer
    class Buffer;
    public:
    // private readonly Org.BouncyCastle.Crypto.Signers.Ed25519Signer/Org.BouncyCastle.Crypto.Signers.Buffer buffer
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer* buffer;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x18
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forSigning and: privateKey
    char __padding1[0x7] = {};
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters privateKey
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters publicKey
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ISigner
    operator ::Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Signers.Ed25519Signer/Org.BouncyCastle.Crypto.Signers.Buffer buffer
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer*& dyn_buffer();
    // Get instance field reference: private System.Boolean forSigning
    [[deprecated("Use field access instead!")]] bool& dyn_forSigning();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters privateKey
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*& dyn_privateKey();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters publicKey
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& dyn_publicKey();
    // public System.Void .ctor()
    // Offset: 0x15FDFA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519Signer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::Ed25519Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519Signer*, creationType>()));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x15FE014
    void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x15FE0CC
    void BlockUpdate(::ArrayW<uint8_t> buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x15FE0F0
    ::ArrayW<uint8_t> GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x15FE2E4
    void Reset();
  }; // Org.BouncyCastle.Crypto.Signers.Ed25519Signer
  #pragma pack(pop)
  static check_size<sizeof(Ed25519Signer), 40 + sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Signers_Ed25519SignerSizeCheck;
  static_assert(sizeof(Ed25519Signer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519Signer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Signers::Ed25519Signer::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519Signer*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed25519Signer::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519Signer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed25519Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed25519Signer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
