// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CachedMediaAsyncLoader
#include "GlobalNamespace/CachedMediaAsyncLoader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3, "", "CachedMediaAsyncLoader/<LoadSpriteAsync>d__3");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CachedMediaAsyncLoader/<LoadSpriteAsync>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct CachedMediaAsyncLoader::$LoadSpriteAsync$d__3/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Sprite> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite*> $$t__builder;
    // public CachedMediaAsyncLoader <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CachedMediaAsyncLoader* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CachedMediaAsyncLoader*) == 0x8);
    // public System.String path
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Sprite> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1;
    public:
    // Creating value type constructor for type: $LoadSpriteAsync$d__3
    constexpr $LoadSpriteAsync$d__3(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite*> $$t__builder_ = {}, GlobalNamespace::CachedMediaAsyncLoader* $$4__this_ = {}, ::Il2CppString* path_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, path{path_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Sprite> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite*>& dyn_$$t__builder();
    // Get instance field reference: public CachedMediaAsyncLoader <>4__this
    GlobalNamespace::CachedMediaAsyncLoader*& dyn_$$4__this();
    // Get instance field reference: public System.String path
    ::Il2CppString*& dyn_path();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Sprite> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1183F90
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x11841E0
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // CachedMediaAsyncLoader/<LoadSpriteAsync>d__3
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3::*)()>(&GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CachedMediaAsyncLoader::$LoadSpriteAsync$d__3), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
