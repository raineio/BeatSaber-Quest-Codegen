// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ISpriteAsyncLoader
  class ISpriteAsyncLoader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::ISpriteAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISpriteAsyncLoader*, "", "ISpriteAsyncLoader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ISpriteAsyncLoader
  // [TokenAttribute] Offset: FFFFFFFF
  class ISpriteAsyncLoader {
    public:
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> LoadSpriteAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* LoadSpriteAsync(::StringW path, System::Threading::CancellationToken cancellationToken);
  }; // ISpriteAsyncLoader
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ISpriteAsyncLoader::LoadSpriteAsync
// Il2CppName: LoadSpriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* (GlobalNamespace::ISpriteAsyncLoader::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::ISpriteAsyncLoader::LoadSpriteAsync)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ISpriteAsyncLoader*), "LoadSpriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, cancellationToken});
  }
};
