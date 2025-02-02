// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ISpriteAsyncLoader
#include "GlobalNamespace/ISpriteAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AsyncCachedLoader`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class AsyncCachedLoader_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CachedMediaAsyncLoader
  class CachedMediaAsyncLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CachedMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CachedMediaAsyncLoader*, "", "CachedMediaAsyncLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CachedMediaAsyncLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class CachedMediaAsyncLoader : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::ISpriteAsyncLoader*/ {
    public:
    // Nested type: ::GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3
    struct $LoadSpriteAsync$d__3;
    public:
    // private System.Int32 _maxNumberOfSpriteCachedElements
    // Size: 0x4
    // Offset: 0x18
    int maxNumberOfSpriteCachedElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxNumberOfSpriteCachedElements and: spriteAsyncCachedLoader
    char __padding0[0x4] = {};
    // private AsyncCachedLoader`2<System.String,UnityEngine.Sprite> _spriteAsyncCachedLoader
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>* spriteAsyncCachedLoader;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ISpriteAsyncLoader
    operator ::GlobalNamespace::ISpriteAsyncLoader() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISpriteAsyncLoader*>(this);
    }
    // Creating interface conversion operator: i_ISpriteAsyncLoader
    inline ::GlobalNamespace::ISpriteAsyncLoader* i_ISpriteAsyncLoader() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISpriteAsyncLoader*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _maxNumberOfSpriteCachedElements
    [[deprecated("Use field access instead!")]] int& dyn__maxNumberOfSpriteCachedElements();
    // Get instance field reference: private AsyncCachedLoader`2<System.String,UnityEngine.Sprite> _spriteAsyncCachedLoader
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>*& dyn__spriteAsyncCachedLoader();
    // public System.Void .ctor()
    // Offset: 0x14058A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedMediaAsyncLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CachedMediaAsyncLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedMediaAsyncLoader*, creationType>()));
    }
    // public System.Void ClearCache()
    // Offset: 0x1405734
    void ClearCache();
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> LoadSpriteAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1405794
    ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);
  }; // CachedMediaAsyncLoader
  #pragma pack(pop)
  static check_size<sizeof(CachedMediaAsyncLoader), 32 + sizeof(::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>*)> __GlobalNamespace_CachedMediaAsyncLoaderSizeCheck;
  static_assert(sizeof(CachedMediaAsyncLoader) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CachedMediaAsyncLoader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CachedMediaAsyncLoader::ClearCache
// Il2CppName: ClearCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CachedMediaAsyncLoader::*)()>(&GlobalNamespace::CachedMediaAsyncLoader::ClearCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CachedMediaAsyncLoader*), "ClearCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CachedMediaAsyncLoader::LoadSpriteAsync
// Il2CppName: LoadSpriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (GlobalNamespace::CachedMediaAsyncLoader::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::CachedMediaAsyncLoader::LoadSpriteAsync)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CachedMediaAsyncLoader*), "LoadSpriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, cancellationToken});
  }
};
