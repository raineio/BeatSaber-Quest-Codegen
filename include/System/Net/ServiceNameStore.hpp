// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ServiceNameCollection
  class ServiceNameCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.ServiceNameStore
  class ServiceNameStore : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.String> serviceNames
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* serviceNames;
    // private System.Security.Authentication.ExtendedProtection.ServiceNameCollection serviceNameCollection
    // Offset: 0x18
    System::Security::Authentication::ExtendedProtection::ServiceNameCollection* serviceNameCollection;
    // public System.Void .ctor()
    // Offset: 0x10CD49C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ServiceNameStore* New_ctor();
  }; // System.Net.ServiceNameStore
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServiceNameStore*, "System.Net", "ServiceNameStore");
#pragma pack(pop)
