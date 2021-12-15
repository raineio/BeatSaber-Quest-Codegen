// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Forward declaring type: ZenUtilInternal
  class ZenUtilInternal;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(Zenject::Internal::ZenUtilInternal);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal*, "Zenject.Internal", "ZenUtilInternal");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenUtilInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenUtilInternal : public ::Il2CppObject {
    public:
    // Nested type: Zenject::Internal::ZenUtilInternal::$$c
    class $$c;
    // Nested type: Zenject::Internal::ZenUtilInternal::$GetAllSceneContexts$d__3
    class $GetAllSceneContexts$d__3;
    // Nested type: Zenject::Internal::ZenUtilInternal::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // static public System.Boolean IsNull(System.Object obj)
    // Offset: 0x18D7FD0
    static bool IsNull(::Il2CppObject* obj);
    // static public System.Boolean AreFunctionsEqual(System.Delegate left, System.Delegate right)
    // Offset: 0x18D7FEC
    static bool AreFunctionsEqual(System::Delegate* left, System::Delegate* right);
    // static public System.Int32 GetInheritanceDelta(System.Type derived, System.Type parent)
    // Offset: 0x18D80B0
    static int GetInheritanceDelta(System::Type* derived, System::Type* parent);
    // static public System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> GetAllSceneContexts()
    // Offset: 0x18D81F0
    static System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* GetAllSceneContexts();
    // static public System.Void AddStateMachineBehaviourAutoInjectersInScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x18D8298
    static void AddStateMachineBehaviourAutoInjectersInScene(UnityEngine::SceneManagement::Scene scene);
    // static public System.Void AddStateMachineBehaviourAutoInjectersUnderGameObject(UnityEngine.GameObject root)
    // Offset: 0x18D86DC
    static void AddStateMachineBehaviourAutoInjectersUnderGameObject(UnityEngine::GameObject* root);
    // static public System.Void GetInjectableMonoBehavioursInScene(UnityEngine.SceneManagement.Scene scene, System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0x18D8818
    static void GetInjectableMonoBehavioursInScene(UnityEngine::SceneManagement::Scene scene, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours);
    // static public System.Void GetInjectableMonoBehavioursUnderGameObject(UnityEngine.GameObject gameObject, System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableComponents)
    // Offset: 0x18D8DA8
    static void GetInjectableMonoBehavioursUnderGameObject(UnityEngine::GameObject* gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableComponents);
    // static private System.Void GetInjectableMonoBehavioursUnderGameObjectInternal(UnityEngine.GameObject gameObject, System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableComponents)
    // Offset: 0x18D8AC4
    static void GetInjectableMonoBehavioursUnderGameObjectInternal(UnityEngine::GameObject* gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableComponents);
    // static public System.Boolean IsInjectableMonoBehaviourType(System.Type type)
    // Offset: 0x18D8DAC
    static bool IsInjectableMonoBehaviourType(System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x18D853C
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetRootGameObjects(UnityEngine::SceneManagement::Scene scene);
  }; // Zenject.Internal.ZenUtilInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&Zenject::Internal::ZenUtilInternal::IsNull)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::AreFunctionsEqual
// Il2CppName: AreFunctionsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Delegate*, System::Delegate*)>(&Zenject::Internal::ZenUtilInternal::AreFunctionsEqual)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "AreFunctionsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInheritanceDelta
// Il2CppName: GetInheritanceDelta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(System::Type*, System::Type*)>(&Zenject::Internal::ZenUtilInternal::GetInheritanceDelta)> {
  static const MethodInfo* get() {
    static auto* derived = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "GetInheritanceDelta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derived, parent});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetAllSceneContexts
// Il2CppName: GetAllSceneContexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* (*)()>(&Zenject::Internal::ZenUtilInternal::GetAllSceneContexts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "GetAllSceneContexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersInScene
// Il2CppName: AddStateMachineBehaviourAutoInjectersInScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::SceneManagement::Scene)>(&Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersInScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "AddStateMachineBehaviourAutoInjectersInScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersUnderGameObject
// Il2CppName: AddStateMachineBehaviourAutoInjectersUnderGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject*)>(&Zenject::Internal::ZenUtilInternal::AddStateMachineBehaviourAutoInjectersUnderGameObject)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "AddStateMachineBehaviourAutoInjectersUnderGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursInScene
// Il2CppName: GetInjectableMonoBehavioursInScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::SceneManagement::Scene, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>*)>(&Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursInScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    static auto* monoBehaviours = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "GetInjectableMonoBehavioursInScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene, monoBehaviours});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObject
// Il2CppName: GetInjectableMonoBehavioursUnderGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject*, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>*)>(&Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObject)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* injectableComponents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "GetInjectableMonoBehavioursUnderGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject, injectableComponents});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObjectInternal
// Il2CppName: GetInjectableMonoBehavioursUnderGameObjectInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject*, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>*)>(&Zenject::Internal::ZenUtilInternal::GetInjectableMonoBehavioursUnderGameObjectInternal)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* injectableComponents = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "GetInjectableMonoBehavioursUnderGameObjectInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject, injectableComponents});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::IsInjectableMonoBehaviourType
// Il2CppName: IsInjectableMonoBehaviourType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&Zenject::Internal::ZenUtilInternal::IsInjectableMonoBehaviourType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "IsInjectableMonoBehaviourType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ZenUtilInternal::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* (*)(UnityEngine::SceneManagement::Scene)>(&Zenject::Internal::ZenUtilInternal::GetRootGameObjects)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ZenUtilInternal*), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
