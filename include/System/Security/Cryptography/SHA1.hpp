// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.SHA1
  class SHA1 : public System::Security::Cryptography::HashAlgorithm {
    public:
    // static public System.Security.Cryptography.SHA1 Create()
    // Offset: 0x1202174
    static System::Security::Cryptography::SHA1* Create();
    // protected System.Void .ctor()
    // Offset: 0x1202148
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static SHA1* New_ctor();
  }; // System.Security.Cryptography.SHA1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1*, "System.Security.Cryptography", "SHA1");
#pragma pack(pop)
