// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
  class X9ECParametersHolder : public ::Il2CppObject {
    public:
    // private Org.BouncyCastle.Asn1.X9.X9ECParameters parameters
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X9::X9ECParameters* parameters;
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::X9::X9ECParameters*
    constexpr operator Org::BouncyCastle::Asn1::X9::X9ECParameters*() const noexcept {
      return parameters;
    }
    // public Org.BouncyCastle.Asn1.X9.X9ECParameters get_Parameters()
    // Offset: 0x1586744
    Org::BouncyCastle::Asn1::X9::X9ECParameters* get_Parameters();
    // protected Org.BouncyCastle.Asn1.X9.X9ECParameters CreateParameters()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();
    // protected System.Void .ctor()
    // Offset: 0x15867F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static X9ECParametersHolder* New_ctor();
  }; // Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
  check_size<sizeof(X9ECParametersHolder), 16 + sizeof(void*) + 8 - (16 + sizeof(void*)) % 8> __Org_BouncyCastle_Asn1_X9_X9ECParametersHolderSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder*, "Org.BouncyCastle.Asn1.X9", "X9ECParametersHolder");
#pragma pack(pop)