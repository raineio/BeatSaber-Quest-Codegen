// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/RsaKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaPrivateCrtKeyParameters
  class RsaPrivateCrtKeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaPrivateCrtKeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class RsaPrivateCrtKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger e
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Math::BigInteger* e;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger p
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Math::BigInteger* p;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x38
    ::Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger dP
    // Size: 0x8
    // Offset: 0x40
    ::Org::BouncyCastle::Math::BigInteger* dP;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger dQ
    // Size: 0x8
    // Offset: 0x48
    ::Org::BouncyCastle::Math::BigInteger* dQ;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger qInv
    // Size: 0x8
    // Offset: 0x50
    ::Org::BouncyCastle::Math::BigInteger* qInv;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger e
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_e();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger p
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_p();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger q
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_q();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger dP
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_dP();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger dQ
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_dQ();
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger qInv
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_qInv();
    // public Org.BouncyCastle.Math.BigInteger get_PublicExponent()
    // Offset: 0x15FA1FC
    ::Org::BouncyCastle::Math::BigInteger* get_PublicExponent();
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x15FA204
    ::Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x15FA20C
    ::Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_DP()
    // Offset: 0x15FA214
    ::Org::BouncyCastle::Math::BigInteger* get_DP();
    // public Org.BouncyCastle.Math.BigInteger get_DQ()
    // Offset: 0x15FA21C
    ::Org::BouncyCastle::Math::BigInteger* get_DQ();
    // public Org.BouncyCastle.Math.BigInteger get_QInv()
    // Offset: 0x15FA224
    ::Org::BouncyCastle::Math::BigInteger* get_QInv();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger modulus, Org.BouncyCastle.Math.BigInteger publicExponent, Org.BouncyCastle.Math.BigInteger privateExponent, Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger dP, Org.BouncyCastle.Math.BigInteger dQ, Org.BouncyCastle.Math.BigInteger qInv)
    // Offset: 0x15F9F90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaPrivateCrtKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* modulus, ::Org::BouncyCastle::Math::BigInteger* publicExponent, ::Org::BouncyCastle::Math::BigInteger* privateExponent, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* dP, ::Org::BouncyCastle::Math::BigInteger* dQ, ::Org::BouncyCastle::Math::BigInteger* qInv) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaPrivateCrtKeyParameters*, creationType>(modulus, publicExponent, privateExponent, p, q, dP, dQ, qInv)));
    }
    // static private System.Void ValidateValue(Org.BouncyCastle.Math.BigInteger x, System.String name, System.String desc)
    // Offset: 0x15FA110
    static void ValidateValue(::Org::BouncyCastle::Math::BigInteger* x, ::StringW name, ::StringW desc);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15FA22C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
    // Base method: System.Boolean RsaKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15FA3B8
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
    // Base method: System.Int32 RsaKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(RsaPrivateCrtKeyParameters), 80 + sizeof(::Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_RsaPrivateCrtKeyParametersSizeCheck;
  static_assert(sizeof(RsaPrivateCrtKeyParameters) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_PublicExponent
// Il2CppName: get_PublicExponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_PublicExponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "get_PublicExponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DP
// Il2CppName: get_DP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "get_DP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DQ
// Il2CppName: get_DQ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_DQ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "get_DQ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_QInv
// Il2CppName: get_QInv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::get_QInv)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "get_QInv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::ValidateValue
// Il2CppName: ValidateValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::BigInteger*, ::StringW, ::StringW)>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::ValidateValue)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* desc = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "ValidateValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, name, desc});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
