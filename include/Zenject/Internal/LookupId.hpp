// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.LookupId
  class LookupId : public ::Il2CppObject {
    public:
    // public Zenject.IProvider Provider
    // Offset: 0x10
    Zenject::IProvider* Provider;
    // public Zenject.BindingId BindingId
    // Offset: 0x18
    Zenject::BindingId BindingId;
    // public System.Void .ctor(Zenject.IProvider provider, Zenject.BindingId bindingId)
    // Offset: 0x122D538
    static LookupId* New_ctor(Zenject::IProvider* provider, Zenject::BindingId bindingId);
    // public System.Void .ctor()
    // Offset: 0x122D530
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LookupId* New_ctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x122D5F8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Zenject.Internal.LookupId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::LookupId*, "Zenject.Internal", "LookupId");
#pragma pack(pop)
