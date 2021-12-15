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
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaKCalculator
  class IDsaKCalculator;
  // Forward declaring type: IDsaEncoding
  class IDsaEncoding;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
  // Forward declaring type: ECKeyParameters
  class ECKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: SM2Signer
  class SM2Signer;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::SM2Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::SM2Signer*, "Org.BouncyCastle.Crypto.Signers", "SM2Signer");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.SM2Signer
  // [TokenAttribute] Offset: FFFFFFFF
  class SM2Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
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
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaKCalculator kCalculator
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::IDsaEncoding*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*) == 0x8);
    // private Org.BouncyCastle.Math.EC.ECPoint pubPoint
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::EC::ECPoint* pubPoint;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.ECKeyParameters ecKey
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ecKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*) == 0x8);
    // private System.Byte[] z
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> z;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Signers.IDsaKCalculator kCalculator
    Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& dyn_kCalculator();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest digest
    Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding
    Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& dyn_encoding();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& dyn_ecParams();
    // Get instance field reference: private Org.BouncyCastle.Math.EC.ECPoint pubPoint
    Org::BouncyCastle::Math::EC::ECPoint*& dyn_pubPoint();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.ECKeyParameters ecKey
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& dyn_ecKey();
    // Get instance field reference: private System.Byte[] z
    ::ArrayW<uint8_t>& dyn_z();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x13C6734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SM2Signer* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::SM2Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SM2Signer*, creationType>(digest)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x13C67B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SM2Signer* New_ctor(Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::SM2Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SM2Signer*, creationType>(encoding, digest)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x13C6834
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x13C6F58
    void BlockUpdate(::ArrayW<uint8_t> buf, int off, int len);
    // public System.Void Reset()
    // Offset: 0x13C7034
    void Reset();
    // public System.Byte[] GenerateSignature()
    // Offset: 0x13C718C
    ::ArrayW<uint8_t> GenerateSignature();
    // private System.Byte[] GetZ(System.Byte[] userID)
    // Offset: 0x13C6DD0
    ::ArrayW<uint8_t> GetZ(::ArrayW<uint8_t> userID);
    // private System.Void AddUserID(Org.BouncyCastle.Crypto.IDigest digest, System.Byte[] userID)
    // Offset: 0x13C7670
    void AddUserID(Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> userID);
    // private System.Void AddFieldElement(Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Math.EC.ECFieldElement v)
    // Offset: 0x13C7818
    void AddFieldElement(Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Math::EC::ECFieldElement* v);
    // protected Org.BouncyCastle.Math.BigInteger CalculateE(Org.BouncyCastle.Math.BigInteger n, System.Byte[] message)
    // Offset: 0x13C7904
    Org::BouncyCastle::Math::BigInteger* CalculateE(Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> message);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateBasePointMultiplier()
    // Offset: 0x13C7968
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();
  }; // Org.BouncyCastle.Crypto.Signers.SM2Signer
  #pragma pack(pop)
  static check_size<sizeof(SM2Signer), 64 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Signers_SM2SignerSizeCheck;
  static_assert(sizeof(SM2Signer) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::GetZ
// Il2CppName: GetZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::GetZ)> {
  static const MethodInfo* get() {
    static auto* userID = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "GetZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::AddUserID
// Il2CppName: AddUserID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::AddUserID)> {
  static const MethodInfo* get() {
    static auto* digest = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "IDigest")->byval_arg;
    static auto* userID = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "AddUserID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digest, userID});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::AddFieldElement
// Il2CppName: AddFieldElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(Org::BouncyCastle::Crypto::IDigest*, Org::BouncyCastle::Math::EC::ECFieldElement*)>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::AddFieldElement)> {
  static const MethodInfo* get() {
    static auto* digest = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "IDigest")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECFieldElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "AddFieldElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digest, v});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::CalculateE
// Il2CppName: CalculateE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::CalculateE)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "CalculateE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, message});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::SM2Signer::CreateBasePointMultiplier
// Il2CppName: CreateBasePointMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::SM2Signer::CreateBasePointMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::SM2Signer*), "CreateBasePointMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
