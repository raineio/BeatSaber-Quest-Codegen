// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SingleProviderBindingFinalizer
  class SingleProviderBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // private readonly System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> _providerFactory
    // Offset: 0x18
    System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory;
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFactory)
    // Offset: 0x12F37CC
    static SingleProviderBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x12F381C
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.SingleProviderBindingFinalizer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SingleProviderBindingFinalizer*, "Zenject", "SingleProviderBindingFinalizer");
#pragma pack(pop)
