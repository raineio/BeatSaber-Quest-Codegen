// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.GeneralSecurityException
#include "Org/BouncyCastle/Security/GeneralSecurityException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.SignatureException
  class SignatureException : public Org::BouncyCastle::Security::GeneralSecurityException {
    public:
    // public System.Void .ctor()
    // Offset: 0xFD8614
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static SignatureException* New_ctor();
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0xFD8618
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception exception)
    static SignatureException* New_ctor(::Il2CppString* message, System::Exception* exception);
  }; // Org.BouncyCastle.Security.SignatureException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SignatureException*, "Org.BouncyCastle.Security", "SignatureException");
#pragma pack(pop)
