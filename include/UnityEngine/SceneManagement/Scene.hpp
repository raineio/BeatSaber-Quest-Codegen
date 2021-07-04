// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SceneManagement.Scene
  // [NativeHeaderAttribute] Offset: D910D4
  struct Scene/*, public System::ValueType*/ {
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Scene
    constexpr Scene(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // static private System.Boolean IsValidInternal(System.Int32 sceneHandle)
    // Offset: 0x1B32020
    static bool IsValidInternal(int sceneHandle);
    // static private System.String GetNameInternal(System.Int32 sceneHandle)
    // Offset: 0x1B32060
    static ::Il2CppString* GetNameInternal(int sceneHandle);
    // static private System.Boolean GetIsLoadedInternal(System.Int32 sceneHandle)
    // Offset: 0x1B320A0
    static bool GetIsLoadedInternal(int sceneHandle);
    // static private System.Int32 GetRootCountInternal(System.Int32 sceneHandle)
    // Offset: 0x1B320E0
    static int GetRootCountInternal(int sceneHandle);
    // static private System.Void GetRootGameObjectsInternal(System.Int32 sceneHandle, System.Object resultRootList)
    // Offset: 0x1B32120
    static void GetRootGameObjectsInternal(int sceneHandle, ::Il2CppObject* resultRootList);
    // public System.Int32 get_handle()
    // Offset: 0xF06B6C
    int get_handle();
    // public System.Boolean IsValid()
    // Offset: 0xF06B74
    bool IsValid();
    // public System.String get_name()
    // Offset: 0xF06BB4
    ::Il2CppString* get_name();
    // public System.Boolean get_isLoaded()
    // Offset: 0xF06BF4
    bool get_isLoaded();
    // public System.Int32 get_rootCount()
    // Offset: 0xF06C34
    int get_rootCount();
    // public UnityEngine.GameObject[] GetRootGameObjects()
    // Offset: 0xF06C74
    ::Array<UnityEngine::GameObject*>* GetRootGameObjects();
    // public System.Void GetRootGameObjects(System.Collections.Generic.List`1<UnityEngine.GameObject> rootGameObjects)
    // Offset: 0xF06C7C
    void GetRootGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject*>* rootGameObjects);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF06C84
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF06C8C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.SceneManagement.Scene
  #pragma pack(pop)
  static check_size<sizeof(Scene), 0 + sizeof(int)> __UnityEngine_SceneManagement_SceneSizeCheck;
  static_assert(sizeof(Scene) == 0x4);
  // static public System.Boolean op_Equality(UnityEngine.SceneManagement.Scene lhs, UnityEngine.SceneManagement.Scene rhs)
  // Offset: 0x1B3256C
  bool operator ==(const UnityEngine::SceneManagement::Scene& lhs, const UnityEngine::SceneManagement::Scene& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::Scene, "UnityEngine.SceneManagement", "Scene");
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::IsValidInternal
// Il2CppName: IsValidInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::SceneManagement::Scene::IsValidInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "IsValidInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetNameInternal
// Il2CppName: GetNameInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int)>(&UnityEngine::SceneManagement::Scene::GetNameInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetNameInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetIsLoadedInternal
// Il2CppName: GetIsLoadedInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::SceneManagement::Scene::GetIsLoadedInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetIsLoadedInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootCountInternal
// Il2CppName: GetRootCountInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::SceneManagement::Scene::GetRootCountInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootCountInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal
// Il2CppName: GetRootGameObjectsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Il2CppObject*)>(&UnityEngine::SceneManagement::Scene::GetRootGameObjectsInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootGameObjectsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_handle
// Il2CppName: get_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_handle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::IsValid)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_name)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_isLoaded
// Il2CppName: get_isLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_isLoaded)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_isLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::get_rootCount
// Il2CppName: get_rootCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::get_rootCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "get_rootCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::GameObject*>* (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::GetRootGameObjects)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetRootGameObjects
// Il2CppName: GetRootGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SceneManagement::Scene::*)(System::Collections::Generic::List_1<UnityEngine::GameObject*>*)>(&UnityEngine::SceneManagement::Scene::GetRootGameObjects)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetRootGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<UnityEngine::GameObject*>*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::SceneManagement::Scene::*)()>(&UnityEngine::SceneManagement::Scene::GetHashCode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SceneManagement::Scene::*)(::Il2CppObject*)>(&UnityEngine::SceneManagement::Scene::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::Scene), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::Scene::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
