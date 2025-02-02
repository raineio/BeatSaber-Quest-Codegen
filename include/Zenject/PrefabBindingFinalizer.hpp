// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IPrefabInstantiator
  class IPrefabInstantiator;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Type
  class Type;
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
  // Forward declaring type: PrefabBindingFinalizer
  class PrefabBindingFinalizer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PrefabBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabBindingFinalizer*, "Zenject", "PrefabBindingFinalizer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabBindingFinalizer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class PrefabBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: ::Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: ::Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: ::Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    public:
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
    // private readonly UnityEngine.Object _prefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* prefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private readonly System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> _providerFactory
    // Size: 0x8
    // Offset: 0x28
    ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory;
    // Field size check
    static_assert(sizeof(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Zenject::BindInfo*
    constexpr operator ::Zenject::BindInfo*() const noexcept = delete;
    // Get instance field reference: private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    [[deprecated("Use field access instead!")]] ::Zenject::GameObjectCreationParameters*& dyn__gameObjectBindInfo();
    // Get instance field reference: private readonly UnityEngine.Object _prefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__prefab();
    // Get instance field reference: private readonly System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> _providerFactory
    [[deprecated("Use field access instead!")]] ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*& dyn__providerFactory();
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectBindInfo, UnityEngine.Object prefab, System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> providerFactory)
    // Offset: 0x1CC27CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::UnityEngine::Object* prefab, ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* providerFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabBindingFinalizer*, creationType>(bindInfo, gameObjectBindInfo, prefab, providerFactory)));
    }
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0x1CC2B90
    void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0x1CC28DC
    void FinalizeBindingSelf(::Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x1CC2844
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(::Zenject::DiContainer* container);
  }; // Zenject.PrefabBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(PrefabBindingFinalizer), 40 + sizeof(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>*)> __Zenject_PrefabBindingFinalizerSizeCheck;
  static_assert(sizeof(PrefabBindingFinalizer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabBindingFinalizer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete
// Il2CppName: FinalizeBindingConcrete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteTypes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabBindingFinalizer*), "FinalizeBindingConcrete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, concreteTypes});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabBindingFinalizer::FinalizeBindingSelf
// Il2CppName: FinalizeBindingSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(&Zenject::PrefabBindingFinalizer::FinalizeBindingSelf)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabBindingFinalizer*), "FinalizeBindingSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabBindingFinalizer::OnFinalizeBinding
// Il2CppName: OnFinalizeBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabBindingFinalizer::*)(::Zenject::DiContainer*)>(&Zenject::PrefabBindingFinalizer::OnFinalizeBinding)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabBindingFinalizer*), "OnFinalizeBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
