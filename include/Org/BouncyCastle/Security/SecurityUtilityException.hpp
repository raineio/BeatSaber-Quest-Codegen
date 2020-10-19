// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.SecurityUtilityException
  class SecurityUtilityException : public System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0xFD85AC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static SecurityUtilityException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0xFC4FE4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    static SecurityUtilityException* New_ctor(::Il2CppString* message);
  }; // Org.BouncyCastle.Security.SecurityUtilityException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SecurityUtilityException*, "Org.BouncyCastle.Security", "SecurityUtilityException");
#pragma pack(pop)
