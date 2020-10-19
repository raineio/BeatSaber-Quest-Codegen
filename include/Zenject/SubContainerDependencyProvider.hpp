// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerDependencyProvider
  class SubContainerDependencyProvider : public ::Il2CppObject, public Zenject::IProvider {
    public:
    // private readonly Zenject.ISubContainerCreator _subContainerCreator
    // Offset: 0x10
    Zenject::ISubContainerCreator* subContainerCreator;
    // private readonly System.Type _dependencyType
    // Offset: 0x18
    System::Type* dependencyType;
    // private readonly System.Object _identifier
    // Offset: 0x20
    ::Il2CppObject* identifier;
    // private readonly System.Boolean _resolveAll
    // Offset: 0x28
    bool resolveAll;
    // public System.Void .ctor(System.Type dependencyType, System.Object identifier, Zenject.ISubContainerCreator subContainerCreator, System.Boolean resolveAll)
    // Offset: 0x12F5F64
    static SubContainerDependencyProvider* New_ctor(System::Type* dependencyType, ::Il2CppObject* identifier, Zenject::ISubContainerCreator* subContainerCreator, bool resolveAll);
    // private Zenject.InjectContext CreateSubContext(Zenject.InjectContext parent, Zenject.DiContainer subContainer)
    // Offset: 0x12F7DAC
    Zenject::InjectContext* CreateSubContext(Zenject::InjectContext* parent, Zenject::DiContainer* subContainer);
    // public System.Boolean get_IsCached()
    // Offset: 0x12F7D94
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x12F7D9C
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x12F7DA4
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x12F7E04
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.SubContainerDependencyProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerDependencyProvider*, "Zenject", "SubContainerDependencyProvider");
#pragma pack(pop)
