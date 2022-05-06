// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ElGamalKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ElGamalParameters
  class ElGamalParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ElGamalPrivateKeyParameters
  class ElGamalPrivateKeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPrivateKeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class ElGamalPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger x
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Math::BigInteger* x;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger x
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_x();
    // public Org.BouncyCastle.Math.BigInteger get_X()
    // Offset: 0x15F8834
    ::Org::BouncyCastle::Math::BigInteger* get_X();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Crypto.Parameters.ElGamalParameters parameters)
    // Offset: 0x15F878C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElGamalPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* x, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElGamalPrivateKeyParameters*, creationType>(x, parameters)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters other)
    // Offset: 0x15F88EC
    bool Equals(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15F883C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
    // Base method: System.Boolean ElGamalKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15F8948
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
    // Base method: System.Int32 ElGamalKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ElGamalPrivateKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(ElGamalPrivateKeyParameters), 32 + sizeof(::Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_ElGamalPrivateKeyParametersSizeCheck;
  static_assert(sizeof(ElGamalPrivateKeyParameters) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::get_X
// Il2CppName: get_X
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::get_X)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*), "get_X", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)(::Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ElGamalPrivateKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ElGamalPrivateKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
