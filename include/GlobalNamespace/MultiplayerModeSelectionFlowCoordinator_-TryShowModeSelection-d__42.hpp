// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: MultiplayerModeSelectionFlowCoordinator
#include "GlobalNamespace/MultiplayerModeSelectionFlowCoordinator.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__42
  struct MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__42 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public MultiplayerModeSelectionFlowCoordinator <>4__this
    // Offset: 0x28
    GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* $$4__this;
    // private MasterServerAvailabilityData <masterServerAvailabilityData>5__2
    // Offset: 0x30
    GlobalNamespace::MasterServerAvailabilityData* $masterServerAvailabilityData$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServerAvailabilityData> <>u__2
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerAvailabilityData*> $$u__2;
    // Creating value type constructor for type: $TryShowModeSelection$d__42
    constexpr $TryShowModeSelection$d__42(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* $$4__this_ = {}, GlobalNamespace::MasterServerAvailabilityData* $masterServerAvailabilityData$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::MasterServerAvailabilityData*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $masterServerAvailabilityData$5__2{$masterServerAvailabilityData$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xE4E05C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE4E064
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__42
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::$TryShowModeSelection$d__42, "", "MultiplayerModeSelectionFlowCoordinator/<TryShowModeSelection>d__42");
#pragma pack(pop)
