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
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: Iso9796d2Signer
  class Iso9796d2Signer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*, "Org.BouncyCastle.Crypto.Signers", "Iso9796d2Signer");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
  // [TokenAttribute] Offset: FFFFFFFF
  class Iso9796d2Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
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
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private System.Int32 trailer
    // Size: 0x4
    // Offset: 0x20
    int trailer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyBits
    // Size: 0x4
    // Offset: 0x24
    int keyBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] block
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> block;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] mBuf
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> mBuf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 messageLength
    // Size: 0x4
    // Offset: 0x38
    int messageLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean fullMessage
    // Size: 0x1
    // Offset: 0x3C
    bool fullMessage;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullMessage and: recoveredMessage
    char __padding7[0x3] = {};
    // private System.Byte[] recoveredMessage
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> recoveredMessage;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] preSig
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> preSig;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] preBlock
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> preBlock;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Crypto.IDigest digest
    Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& dyn_cipher();
    // Get instance field reference: private System.Int32 trailer
    int& dyn_trailer();
    // Get instance field reference: private System.Int32 keyBits
    int& dyn_keyBits();
    // Get instance field reference: private System.Byte[] block
    ::ArrayW<uint8_t>& dyn_block();
    // Get instance field reference: private System.Byte[] mBuf
    ::ArrayW<uint8_t>& dyn_mBuf();
    // Get instance field reference: private System.Int32 messageLength
    int& dyn_messageLength();
    // Get instance field reference: private System.Boolean fullMessage
    bool& dyn_fullMessage();
    // Get instance field reference: private System.Byte[] recoveredMessage
    ::ArrayW<uint8_t>& dyn_recoveredMessage();
    // Get instance field reference: private System.Byte[] preSig
    ::ArrayW<uint8_t>& dyn_preSig();
    // Get instance field reference: private System.Byte[] preBlock
    ::ArrayW<uint8_t>& dyn_preBlock();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest, System.Boolean isImplicit)
    // Offset: 0x13C2B38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Iso9796d2Signer* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Iso9796d2Signer*, creationType>(cipher, digest, isImplicit)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x13C2F24
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Void ClearBlock(System.Byte[] block)
    // Offset: 0x13C312C
    void ClearBlock(::ArrayW<uint8_t> block);
    // public System.Void Update(System.Byte input)
    // Offset: 0x13C3150
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x13C3258
    void BlockUpdate(::ArrayW<uint8_t> input, int inOff, int length);
    // public System.Void Reset()
    // Offset: 0x13C33B4
    void Reset();
    // public System.Byte[] GenerateSignature()
    // Offset: 0x13C34A4
    ::ArrayW<uint8_t> GenerateSignature();
  }; // Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
  #pragma pack(pop)
  static check_size<sizeof(Iso9796d2Signer), 80 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Signers_Iso9796d2SignerSizeCheck;
  static_assert(sizeof(Iso9796d2Signer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::ClearBlock
// Il2CppName: ClearBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::ClearBlock)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*), "ClearBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
