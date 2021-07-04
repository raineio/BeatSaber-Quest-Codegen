// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
// Completed includes
// Begin forward declares
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IPrefabInstantiator
  class IPrefabInstantiator {
    public:
    // Creating value type constructor for type: IPrefabInstantiator
    IPrefabInstantiator() noexcept {}
    // public System.Type get_ArgumentTarget()
    // Offset: 0xFFFFFFFF
    System::Type* get_ArgumentTarget();
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_ExtraArguments();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0xFFFFFFFF
    Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction);
    // public UnityEngine.Object GetPrefab()
    // Offset: 0xFFFFFFFF
    UnityEngine::Object* GetPrefab();
  }; // Zenject.IPrefabInstantiator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IPrefabInstantiator*, "Zenject", "IPrefabInstantiator");
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::get_ArgumentTarget
// Il2CppName: get_ArgumentTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::get_ArgumentTarget)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "get_ArgumentTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::get_ExtraArguments
// Il2CppName: get_ExtraArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::TypeValuePair>* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::get_ExtraArguments)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "get_ExtraArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::get_GameObjectCreationParameters
// Il2CppName: get_GameObjectCreationParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::GameObjectCreationParameters* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::get_GameObjectCreationParameters)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "get_GameObjectCreationParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::IPrefabInstantiator::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, System::Action*&)>(&Zenject::IPrefabInstantiator::Instantiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::InjectContext*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<Zenject::TypeValuePair>*>(), ::il2cpp_utils::ExtractIndependentType<System::Action*&>()});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::GetPrefab
// Il2CppName: GetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::GetPrefab)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "GetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
