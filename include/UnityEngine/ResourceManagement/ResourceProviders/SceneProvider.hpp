// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/ISceneProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: SceneProvider
  class SceneProvider;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProvider");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.SceneProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneProvider : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*/ {
    public:
    // Nested type: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneOp
    class SceneOp;
    // Nested type: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnloadSceneOp
    class UnloadSceneOp;
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider
    operator UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider*>(this);
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> ProvideScene(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Boolean activateOnLoad, System.Int32 priority)
    // Offset: 0x1BEF07C
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ProvideScene(UnityEngine::ResourceManagement::ResourceManager* resourceManager, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int priority);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> ReleaseScene(UnityEngine.ResourceManagement.ResourceManager resourceManager, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> sceneLoadHandle)
    // Offset: 0x1BEF504
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(UnityEngine::ResourceManagement::ResourceManager* resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle);
    // public System.Void .ctor()
    // Offset: 0x1BEF6F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneProvider*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.SceneProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene
// Il2CppName: ProvideScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(UnityEngine::ResourceManagement::ResourceManager*, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, UnityEngine::SceneManagement::LoadSceneMode, bool, int)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* loadMode = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneMode")->byval_arg;
    static auto* activateOnLoad = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* priority = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*), "ProvideScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, location, loadMode, activateOnLoad, priority});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene
// Il2CppName: ReleaseScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(UnityEngine::ResourceManagement::ResourceManager*, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene)> {
  static const MethodInfo* get() {
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    static auto* sceneLoadHandle = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneProvider*), "ReleaseScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resourceManager, sceneLoadHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
