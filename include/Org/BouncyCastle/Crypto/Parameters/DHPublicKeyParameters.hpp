// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHKeyParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHParameters
  class DHParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
  class DHPublicKeyParameters : public Org::BouncyCastle::Crypto::Parameters::DHKeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger y
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* y;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: DHPublicKeyParameters
    DHPublicKeyParameters(Org::BouncyCastle::Math::BigInteger* y_ = {}) noexcept : y{y_} {}
    // static private Org.BouncyCastle.Math.BigInteger Validate(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams)
    // Offset: 0x1257FD8
    static Org::BouncyCastle::Math::BigInteger* Validate(Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams);
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters)
    // Offset: 0x1258870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHPublicKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHPublicKeyParameters*, creationType>(y, parameters)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters, Org.BouncyCastle.Asn1.DerObjectIdentifier algorithmOid)
    // Offset: 0x12588B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHPublicKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHPublicKeyParameters*, creationType>(y, parameters, algorithmOid)));
    }
    // public Org.BouncyCastle.Math.BigInteger get_Y()
    // Offset: 0x1258904
    Org::BouncyCastle::Math::BigInteger* get_Y();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters other)
    // Offset: 0x12589BC
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* other);
    // static private System.Int32 Legendre(Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Math.BigInteger b)
    // Offset: 0x1258454
    static int Legendre(Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Math::BigInteger* b);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x125890C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
    // Base method: System.Boolean DHKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1258A18
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
    // Base method: System.Int32 DHKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(DHPublicKeyParameters), 40 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_DHPublicKeyParametersSizeCheck;
  static_assert(sizeof(DHPublicKeyParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHPublicKeyParameters");
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Crypto::Parameters::DHParameters*)>(&Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Validate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Parameters::DHParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::get_Y
// Il2CppName: get_Y
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::get_Y)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*), "get_Y", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::*)(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Legendre
// Il2CppName: Legendre
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(Org::BouncyCastle::Math::BigInteger*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Legendre)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*), "Legendre", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Math::BigInteger*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
