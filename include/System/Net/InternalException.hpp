// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.InternalException
  class InternalException : public System::SystemException {
    public:
    // System.Void .ctor()
    // Offset: 0x12483E4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static InternalException* New_ctor();
  }; // System.Net.InternalException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::InternalException*, "System.Net", "InternalException");
#pragma pack(pop)
