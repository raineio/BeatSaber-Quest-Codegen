// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabResourceBindingFinalizer
#include "Zenject/PrefabResourceBindingFinalizer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass5_0
  class PrefabResourceBindingFinalizer::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabResourceBindingFinalizer <>4__this
    // Offset: 0x10
    Zenject::PrefabResourceBindingFinalizer* $$4__this;
    // public Zenject.DiContainer container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // public System.Collections.Generic.List`1<System.Type> concreteTypes
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Type*>* concreteTypes;
    // Zenject.IProvider <FinalizeBindingConcrete>b__0(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0x12ECADC
    Zenject::IProvider* $FinalizeBindingConcrete$b__0(Zenject::DiContainer* _, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x12ECABC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabResourceBindingFinalizer::$$c__DisplayClass5_0* New_ctor();
  }; // Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass5_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_0");
#pragma pack(pop)
