// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: BlurredCoverImageView
#include "GlobalNamespace/BlurredCoverImageView.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BlurredCoverImageView/<SetTextureAsync>d__6
  struct BlurredCoverImageView::$SetTextureAsync$d__6 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public BlurredCoverImageView <>4__this
    // Offset: 0x28
    GlobalNamespace::BlurredCoverImageView* $$4__this;
    // public IPreviewBeatmapLevel level
    // Offset: 0x30
    GlobalNamespace::IPreviewBeatmapLevel* level;
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Offset: 0x38
    System::Threading::CancellationToken $cancellationToken$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Sprite> <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1;
    // Creating value type constructor for type: $SetTextureAsync$d__6
    constexpr $SetTextureAsync$d__6(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::BlurredCoverImageView* $$4__this_ = {}, GlobalNamespace::IPreviewBeatmapLevel* level_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, level{level_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4DAE8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4DAF0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BlurredCoverImageView/<SetTextureAsync>d__6
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlurredCoverImageView::$SetTextureAsync$d__6, "", "BlurredCoverImageView/<SetTextureAsync>d__6");
#pragma pack(pop)
