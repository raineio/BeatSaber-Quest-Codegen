// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StaticBatchedMeshContainer
  class StaticBatchedMeshContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StaticMeshBatchingUtility
  class StaticMeshBatchingUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticMeshBatchingUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticMeshBatchingUtility*, "", "StaticMeshBatchingUtility");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StaticMeshBatchingUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticMeshBatchingUtility : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.SceneManagement.Scene <selectedScene>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::SceneManagement::Scene selectedScene;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4);
    // Padding between fields: selectedScene and: componentContainer
    char __padding0[0x4] = {};
    // private StaticBatchedMeshContainer <componentContainer>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StaticBatchedMeshContainer* componentContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StaticBatchedMeshContainer*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Collections.Generic.List`1<UnityEngine.GameObject>> <batchMap>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* batchMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*) == 0x8);
    // private System.String kMeshSubDirectory
    // Size: 0x8
    // Offset: 0x28
    ::StringW kMeshSubDirectory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.SceneManagement.Scene <selectedScene>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::Scene& dyn_$selectedScene$k__BackingField();
    // Get instance field reference: private StaticBatchedMeshContainer <componentContainer>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StaticBatchedMeshContainer*& dyn_$componentContainer$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Collections.Generic.List`1<UnityEngine.GameObject>> <batchMap>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*& dyn_$batchMap$k__BackingField();
    // Get instance field reference: private System.String kMeshSubDirectory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_kMeshSubDirectory();
    // public UnityEngine.SceneManagement.Scene get_selectedScene()
    // Offset: 0x2B93830
    ::UnityEngine::SceneManagement::Scene get_selectedScene();
    // private System.Void set_selectedScene(UnityEngine.SceneManagement.Scene value)
    // Offset: 0x2B93838
    void set_selectedScene(::UnityEngine::SceneManagement::Scene value);
    // public StaticBatchedMeshContainer get_componentContainer()
    // Offset: 0x2B93840
    ::GlobalNamespace::StaticBatchedMeshContainer* get_componentContainer();
    // private System.Void set_componentContainer(StaticBatchedMeshContainer value)
    // Offset: 0x2B93848
    void set_componentContainer(::GlobalNamespace::StaticBatchedMeshContainer* value);
    // public System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Collections.Generic.List`1<UnityEngine.GameObject>> get_batchMap()
    // Offset: 0x2B93850
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* get_batchMap();
    // private System.Void set_batchMap(System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Collections.Generic.List`1<UnityEngine.GameObject>> value)
    // Offset: 0x2B93858
    void set_batchMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* value);
    // public System.Void .ctor(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x2B93860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticMeshBatchingUtility* New_ctor(::UnityEngine::SceneManagement::Scene scene) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StaticMeshBatchingUtility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticMeshBatchingUtility*, creationType>(scene)));
    }
    // public System.Void Batch()
    // Offset: 0x2B93D9C
    void Batch();
    // public System.Void Unbatch()
    // Offset: 0x2B94224
    void Unbatch();
    // public System.Void Reload()
    // Offset: 0x2B94538
    void Reload();
    // public System.Void SetScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x2B9453C
    void SetScene(::UnityEngine::SceneManagement::Scene scene);
    // private System.Void Initialize()
    // Offset: 0x2B938D0
    void Initialize();
    // private System.Void SaveMeshToDisk(UnityEngine.Mesh meshToSave, System.String fileName)
    // Offset: 0x2B94530
    void SaveMeshToDisk(::UnityEngine::Mesh* meshToSave, ::StringW fileName);
    // private System.Void DestroyMeshesOnDisk()
    // Offset: 0x2B94534
    void DestroyMeshesOnDisk();
    // private System.String GetMeshDirectory()
    // Offset: 0x2B94544
    ::StringW GetMeshDirectory();
  }; // StaticMeshBatchingUtility
  #pragma pack(pop)
  static check_size<sizeof(StaticMeshBatchingUtility), 40 + sizeof(::StringW)> __GlobalNamespace_StaticMeshBatchingUtilitySizeCheck;
  static_assert(sizeof(StaticMeshBatchingUtility) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::get_selectedScene
// Il2CppName: get_selectedScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::get_selectedScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "get_selectedScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::set_selectedScene
// Il2CppName: set_selectedScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)(::UnityEngine::SceneManagement::Scene)>(&GlobalNamespace::StaticMeshBatchingUtility::set_selectedScene)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "set_selectedScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::get_componentContainer
// Il2CppName: get_componentContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StaticBatchedMeshContainer* (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::get_componentContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "get_componentContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::set_componentContainer
// Il2CppName: set_componentContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)(::GlobalNamespace::StaticBatchedMeshContainer*)>(&GlobalNamespace::StaticMeshBatchingUtility::set_componentContainer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "StaticBatchedMeshContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "set_componentContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::get_batchMap
// Il2CppName: get_batchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::get_batchMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "get_batchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::set_batchMap
// Il2CppName: set_batchMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>*)>(&GlobalNamespace::StaticMeshBatchingUtility::set_batchMap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "set_batchMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::Batch
// Il2CppName: Batch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::Batch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "Batch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::Unbatch
// Il2CppName: Unbatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::Unbatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "Unbatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::Reload
// Il2CppName: Reload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::Reload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "Reload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::SetScene
// Il2CppName: SetScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)(::UnityEngine::SceneManagement::Scene)>(&GlobalNamespace::StaticMeshBatchingUtility::SetScene)> {
  static const MethodInfo* get() {
    static auto* scene = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "SetScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scene});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::SaveMeshToDisk
// Il2CppName: SaveMeshToDisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)(::UnityEngine::Mesh*, ::StringW)>(&GlobalNamespace::StaticMeshBatchingUtility::SaveMeshToDisk)> {
  static const MethodInfo* get() {
    static auto* meshToSave = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "SaveMeshToDisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshToSave, fileName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::DestroyMeshesOnDisk
// Il2CppName: DestroyMeshesOnDisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::DestroyMeshesOnDisk)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "DestroyMeshesOnDisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticMeshBatchingUtility::GetMeshDirectory
// Il2CppName: GetMeshDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StaticMeshBatchingUtility::*)()>(&GlobalNamespace::StaticMeshBatchingUtility::GetMeshDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticMeshBatchingUtility*), "GetMeshDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
