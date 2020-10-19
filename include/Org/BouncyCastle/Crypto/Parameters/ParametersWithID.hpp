// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithID
  class ParametersWithID : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Offset: 0x10
    Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // private readonly System.Byte[] id
    // Offset: 0x18
    ::Array<uint8_t>* id;
    // public System.Byte[] GetID()
    // Offset: 0xF4D3F4
    ::Array<uint8_t>* GetID();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0xF4D3FC
    Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithID
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithID*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithID");
#pragma pack(pop)
