// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Behaviour
  class Behaviour;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FindUnityObjectsHelper
  class FindUnityObjectsHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FindUnityObjectsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FindUnityObjectsHelper*, "", "FindUnityObjectsHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FindUnityObjectsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class FindUnityObjectsHelper : public ::Il2CppObject {
    public:
    // static public System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> GetMonoBehavioursInLoadedScenes()
    // Offset: 0x15A37EC
    static ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* GetMonoBehavioursInLoadedScenes();
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllRootGameObjectsInLoadedScenes()
    // Offset: 0x15A3A10
    static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllRootGameObjectsInLoadedScenes();
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllGameObjectsInGameObject(UnityEngine.GameObject go)
    // Offset: 0x15A3B18
    static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetAllGameObjectsInGameObject(::UnityEngine::GameObject* go);
    // static public UnityEngine.GameObject[] GetAllGameObjectsInLoadedScenes()
    // Offset: 0x15A3848
    static ::ArrayW<::UnityEngine::GameObject*> GetAllGameObjectsInLoadedScenes();
    // static public System.Collections.Generic.List`1<T> GetComponentsInGameObjects(System.Collections.Generic.IReadOnlyList`1<UnityEngine.GameObject> gameObjects)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::List_1<T>* GetComponentsInGameObjects(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* gameObjects) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Behaviour*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FindUnityObjectsHelper::GetComponentsInGameObjects");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "FindUnityObjectsHelper", "GetComponentsInGameObjects", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameObjects)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, gameObjects);
    }
  }; // FindUnityObjectsHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FindUnityObjectsHelper::GetMonoBehavioursInLoadedScenes
// Il2CppName: GetMonoBehavioursInLoadedScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* (*)()>(&GlobalNamespace::FindUnityObjectsHelper::GetMonoBehavioursInLoadedScenes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FindUnityObjectsHelper*), "GetMonoBehavioursInLoadedScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FindUnityObjectsHelper::GetAllRootGameObjectsInLoadedScenes
// Il2CppName: GetAllRootGameObjectsInLoadedScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (*)()>(&GlobalNamespace::FindUnityObjectsHelper::GetAllRootGameObjectsInLoadedScenes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FindUnityObjectsHelper*), "GetAllRootGameObjectsInLoadedScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInGameObject
// Il2CppName: GetAllGameObjectsInGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (*)(::UnityEngine::GameObject*)>(&GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInGameObject)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FindUnityObjectsHelper*), "GetAllGameObjectsInGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInLoadedScenes
// Il2CppName: GetAllGameObjectsInLoadedScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*> (*)()>(&GlobalNamespace::FindUnityObjectsHelper::GetAllGameObjectsInLoadedScenes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FindUnityObjectsHelper*), "GetAllGameObjectsInLoadedScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FindUnityObjectsHelper::GetComponentsInGameObjects
// Il2CppName: GetComponentsInGameObjects
// Cannot write MetadataGetter for generic methods!
