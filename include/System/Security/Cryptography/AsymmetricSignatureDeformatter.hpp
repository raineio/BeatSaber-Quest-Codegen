// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.AsymmetricSignatureDeformatter
  class AsymmetricSignatureDeformatter : public ::Il2CppObject {
    public:
    // public System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0xFFFFFFFF
    void SetKey(System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0xFFFFFFFF
    void SetHashAlgorithm(::Il2CppString* strName);
    // public System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0xFFFFFFFF
    bool VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature);
    // protected System.Void .ctor()
    // Offset: 0x146CB58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AsymmetricSignatureDeformatter* New_ctor();
  }; // System.Security.Cryptography.AsymmetricSignatureDeformatter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsymmetricSignatureDeformatter*, "System.Security.Cryptography", "AsymmetricSignatureDeformatter");
#pragma pack(pop)
