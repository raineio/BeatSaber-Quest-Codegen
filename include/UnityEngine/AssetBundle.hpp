// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleCreateRequest
  class AssetBundleCreateRequest;
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AssetBundle
  class AssetBundle : public UnityEngine::Object {
    public:
    // static UnityEngine.AssetBundleCreateRequest LoadFromFileAsync_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x1F78DA4
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path)
    // Offset: 0x1F78DFC
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::Il2CppString* path);
    // static UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x1F78E44
    static UnityEngine::AssetBundle* LoadFromFile_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundle LoadFromFile(System.String path)
    // Offset: 0x1F78E9C
    static UnityEngine::AssetBundle* LoadFromFile(::Il2CppString* path);
    // public UnityEngine.Object LoadAsset(System.String name)
    // Offset: 0x1F78EE4
    UnityEngine::Object* LoadAsset(::Il2CppString* name);
    // public T LoadAsset(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    T LoadAsset(::Il2CppString* name) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "LoadAsset", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, name)));
    }
    // public UnityEngine.Object LoadAsset(System.String name, System.Type type)
    // Offset: 0x1F78F74
    UnityEngine::Object* LoadAsset(::Il2CppString* name, System::Type* type);
    // private UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
    // Offset: 0x1F79084
    UnityEngine::Object* LoadAsset_Internal(::Il2CppString* name, System::Type* type);
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<UnityEngine::AssetBundleRequest*>(this, "LoadAssetAsync", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, name)));
    }
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name, System.Type type)
    // Offset: 0x1F790DC
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name, System::Type* type);
    // private UnityEngine.AssetBundleRequest LoadAssetAsync_Internal(System.String name, System.Type type)
    // Offset: 0x1F791EC
    UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::Il2CppString* name, System::Type* type);
    // public System.Void Unload(System.Boolean unloadAllLoadedObjects)
    // Offset: 0x1F79244
    void Unload(bool unloadAllLoadedObjects);
    // public System.String[] GetAllAssetNames()
    // Offset: 0x1F79294
    ::Array<::Il2CppString*>* GetAllAssetNames();
    // public System.String[] GetAllScenePaths()
    // Offset: 0x1F792D4
    ::Array<::Il2CppString*>* GetAllScenePaths();
    // private System.Void .ctor()
    // Offset: 0x1F78D3C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AssetBundle* New_ctor();
  }; // UnityEngine.AssetBundle
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
#pragma pack(pop)
