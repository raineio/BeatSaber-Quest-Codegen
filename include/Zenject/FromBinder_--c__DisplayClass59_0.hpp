// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass59_0
  class FromBinder::$$c__DisplayClass59_0 : public ::Il2CppObject {
    public:
    // public System.Boolean includeInactive
    // Offset: 0x10
    bool includeInactive;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return includeInactive;
    }
    // Zenject.IProvider <FromComponentInChildren>b__0(Zenject.DiContainer container, System.Type concreteType)
    // Offset: 0x12263C4
    Zenject::IProvider* $FromComponentInChildren$b__0(Zenject::DiContainer* container, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x1224A78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass59_0* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass59_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass59_0*, "Zenject", "FromBinder/<>c__DisplayClass59_0");
#pragma pack(pop)
