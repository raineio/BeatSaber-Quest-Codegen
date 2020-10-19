// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
  class DHKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // private readonly Org.BouncyCastle.Crypto.Parameters.DHParameters parameters
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters;
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier algorithmOid
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid;
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // protected System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters)
    // Offset: 0xF46E68
    static DHKeyParameters* New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters);
    // protected System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters, Org.BouncyCastle.Asn1.DerObjectIdentifier algorithmOid)
    // Offset: 0xF46EF0
    static DHKeyParameters* New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid);
    // public Org.BouncyCastle.Crypto.Parameters.DHParameters get_Parameters()
    // Offset: 0xF46F44
    Org::BouncyCastle::Crypto::Parameters::DHParameters* get_Parameters();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DHKeyParameters other)
    // Offset: 0xF46FFC
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DHKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF46F4C
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Boolean AsymmetricKeyParameter::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF47054
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Int32 AsymmetricKeyParameter::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHKeyParameters");
#pragma pack(pop)
