// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil
  class UnityUtil : public ::Il2CppObject {
    public:
    // Nested type: ModestTree::Util::UnityUtil::$get_AllScenes$d__1
    class $get_AllScenes$d__1;
    // Nested type: ModestTree::Util::UnityUtil::$$c
    class $$c;
    // Nested type: ModestTree::Util::UnityUtil::$GetParents$d__16
    class $GetParents$d__16;
    // Nested type: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17
    class $GetParentsAndSelf$d__17;
    // Nested type: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20
    class $GetDirectChildrenAndSelf$d__20;
    // Nested type: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21
    class $GetDirectChildren$d__21;
    // Creating value type constructor for type: UnityUtil
    UnityUtil() noexcept {}
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene> get_AllScenes()
    // Offset: 0x1384EE8
    static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>* get_AllScenes();
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene> get_AllLoadedScenes()
    // Offset: 0x1384F90
    static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>* get_AllLoadedScenes();
    // static public System.Boolean get_IsAltKeyDown()
    // Offset: 0x1385088
    static bool get_IsAltKeyDown();
    // static public System.Boolean get_IsControlKeyDown()
    // Offset: 0x13850BC
    static bool get_IsControlKeyDown();
    // static public System.Boolean get_IsShiftKeyDown()
    // Offset: 0x13850F0
    static bool get_IsShiftKeyDown();
    // static public System.Boolean get_WasShiftKeyJustPressed()
    // Offset: 0x1385124
    static bool get_WasShiftKeyJustPressed();
    // static public System.Boolean get_WasAltKeyJustPressed()
    // Offset: 0x1385158
    static bool get_WasAltKeyJustPressed();
    // static public System.Int32 GetDepthLevel(UnityEngine.Transform transform)
    // Offset: 0x138518C
    static int GetDepthLevel(UnityEngine::Transform* transform);
    // static public UnityEngine.GameObject GetRootParentOrSelf(UnityEngine.GameObject gameObject)
    // Offset: 0x138523C
    static UnityEngine::GameObject* GetRootParentOrSelf(UnityEngine::GameObject* gameObject);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> GetParents(UnityEngine.Transform transform)
    // Offset: 0x13853DC
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* GetParents(UnityEngine::Transform* transform);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> GetParentsAndSelf(UnityEngine.Transform transform)
    // Offset: 0x138535C
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* GetParentsAndSelf(UnityEngine::Transform* transform);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Component> GetComponentsInChildrenTopDown(UnityEngine.GameObject gameObject, System.Boolean includeInactive)
    // Offset: 0x13854CC
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>* GetComponentsInChildrenTopDown(UnityEngine::GameObject* gameObject, bool includeInactive);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Component> GetComponentsInChildrenBottomUp(UnityEngine.GameObject gameObject, System.Boolean includeInactive)
    // Offset: 0x13855E8
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>* GetComponentsInChildrenBottomUp(UnityEngine::GameObject* gameObject, bool includeInactive);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetDirectChildrenAndSelf(UnityEngine.GameObject obj)
    // Offset: 0x1385704
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetDirectChildrenAndSelf(UnityEngine::GameObject* obj);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetDirectChildren(UnityEngine.GameObject obj)
    // Offset: 0x13857BC
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetDirectChildren(UnityEngine::GameObject* obj);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetAllGameObjects()
    // Offset: 0x1385874
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetAllGameObjects();
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllRootGameObjects()
    // Offset: 0x1385998
    static System::Collections::Generic::List_1<UnityEngine::GameObject*>* GetAllRootGameObjects();
  }; // ModestTree.Util.UnityUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil*, "ModestTree.Util", "UnityUtil");
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::get_AllScenes
// Il2CppName: get_AllScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>* (*)()>(&ModestTree::Util::UnityUtil::get_AllScenes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "get_AllScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::get_AllLoadedScenes
// Il2CppName: get_AllLoadedScenes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>* (*)()>(&ModestTree::Util::UnityUtil::get_AllLoadedScenes)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "get_AllLoadedScenes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::get_IsAltKeyDown
// Il2CppName: get_IsAltKeyDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&ModestTree::Util::UnityUtil::get_IsAltKeyDown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "get_IsAltKeyDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::get_IsControlKeyDown
// Il2CppName: get_IsControlKeyDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&ModestTree::Util::UnityUtil::get_IsControlKeyDown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "get_IsControlKeyDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::get_IsShiftKeyDown
// Il2CppName: get_IsShiftKeyDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&ModestTree::Util::UnityUtil::get_IsShiftKeyDown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "get_IsShiftKeyDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::get_WasShiftKeyJustPressed
// Il2CppName: get_WasShiftKeyJustPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&ModestTree::Util::UnityUtil::get_WasShiftKeyJustPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "get_WasShiftKeyJustPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::get_WasAltKeyJustPressed
// Il2CppName: get_WasAltKeyJustPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&ModestTree::Util::UnityUtil::get_WasAltKeyJustPressed)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "get_WasAltKeyJustPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetDepthLevel
// Il2CppName: GetDepthLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(UnityEngine::Transform*)>(&ModestTree::Util::UnityUtil::GetDepthLevel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetDepthLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetRootParentOrSelf
// Il2CppName: GetRootParentOrSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::GameObject*)>(&ModestTree::Util::UnityUtil::GetRootParentOrSelf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetRootParentOrSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetParents
// Il2CppName: GetParents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* (*)(UnityEngine::Transform*)>(&ModestTree::Util::UnityUtil::GetParents)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetParents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetParentsAndSelf
// Il2CppName: GetParentsAndSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* (*)(UnityEngine::Transform*)>(&ModestTree::Util::UnityUtil::GetParentsAndSelf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetParentsAndSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetComponentsInChildrenTopDown
// Il2CppName: GetComponentsInChildrenTopDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>* (*)(UnityEngine::GameObject*, bool)>(&ModestTree::Util::UnityUtil::GetComponentsInChildrenTopDown)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetComponentsInChildrenTopDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetComponentsInChildrenBottomUp
// Il2CppName: GetComponentsInChildrenBottomUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>* (*)(UnityEngine::GameObject*, bool)>(&ModestTree::Util::UnityUtil::GetComponentsInChildrenBottomUp)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetComponentsInChildrenBottomUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetDirectChildrenAndSelf
// Il2CppName: GetDirectChildrenAndSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* (*)(UnityEngine::GameObject*)>(&ModestTree::Util::UnityUtil::GetDirectChildrenAndSelf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetDirectChildrenAndSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetDirectChildren
// Il2CppName: GetDirectChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* (*)(UnityEngine::GameObject*)>(&ModestTree::Util::UnityUtil::GetDirectChildren)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetDirectChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::GameObject*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetAllGameObjects
// Il2CppName: GetAllGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* (*)()>(&ModestTree::Util::UnityUtil::GetAllGameObjects)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetAllGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::Util::UnityUtil::GetAllRootGameObjects
// Il2CppName: GetAllRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::GameObject*>* (*)()>(&ModestTree::Util::UnityUtil::GetAllRootGameObjects)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::Util::UnityUtil*), "GetAllRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
