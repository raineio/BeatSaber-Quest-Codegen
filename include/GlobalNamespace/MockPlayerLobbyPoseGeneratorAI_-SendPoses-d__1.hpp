// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MockPlayerLobbyPoseGeneratorAI
#include "GlobalNamespace/MockPlayerLobbyPoseGeneratorAI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1, "", "MockPlayerLobbyPoseGeneratorAI/<SendPoses>d__1");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x150
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerLobbyPoseGeneratorAI/<SendPoses>d__1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public MockPlayerLobbyPoseGeneratorAI <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x30
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private UnityEngine.Pose <headPose>5__2
    // Size: 0x1C
    // Offset: 0x38
    ::UnityEngine::Pose $headPose$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <leftHandPose>5__3
    // Size: 0x1C
    // Offset: 0x54
    ::UnityEngine::Pose $leftHandPose$5__3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <rightHandPose>5__4
    // Size: 0x1C
    // Offset: 0x70
    ::UnityEngine::Pose $rightHandPose$5__4;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // Padding between fields: $rightHandPose$5__4 and: $random$5__5
    char __padding6[0x4] = {};
    // private System.Random <random>5__5
    // Size: 0x8
    // Offset: 0x90
    ::System::Random* $random$5__5;
    // Field size check
    static_assert(sizeof(::System::Random*) == 0x8);
    // private UnityEngine.Pose <lastHeadPoseTarget>5__6
    // Size: 0x1C
    // Offset: 0x98
    ::UnityEngine::Pose $lastHeadPoseTarget$5__6;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <lastLeftHandPoseTarget>5__7
    // Size: 0x1C
    // Offset: 0xB4
    ::UnityEngine::Pose $lastLeftHandPoseTarget$5__7;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <lastRightHandPoseTarget>5__8
    // Size: 0x1C
    // Offset: 0xD0
    ::UnityEngine::Pose $lastRightHandPoseTarget$5__8;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private System.Single <lastTargetTime>5__9
    // Size: 0x4
    // Offset: 0xEC
    float $lastTargetTime$5__9;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Pose <headPoseTarget>5__10
    // Size: 0x1C
    // Offset: 0xF0
    ::UnityEngine::Pose $headPoseTarget$5__10;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <leftHandPoseTarget>5__11
    // Size: 0x1C
    // Offset: 0x10C
    ::UnityEngine::Pose $leftHandPoseTarget$5__11;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose <rightHandPoseTarget>5__12
    // Size: 0x1C
    // Offset: 0x128
    ::UnityEngine::Pose $rightHandPoseTarget$5__12;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private System.Single <nextTargetTime>5__13
    // Size: 0x4
    // Offset: 0x144
    float $nextTargetTime$5__13;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x148
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $SendPoses$d__1
    constexpr $SendPoses$d__1(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::UnityEngine::Pose $headPose$5__2_ = {}, ::UnityEngine::Pose $leftHandPose$5__3_ = {}, ::UnityEngine::Pose $rightHandPose$5__4_ = {}, ::System::Random* $random$5__5_ = {}, ::UnityEngine::Pose $lastHeadPoseTarget$5__6_ = {}, ::UnityEngine::Pose $lastLeftHandPoseTarget$5__7_ = {}, ::UnityEngine::Pose $lastRightHandPoseTarget$5__8_ = {}, float $lastTargetTime$5__9_ = {}, ::UnityEngine::Pose $headPoseTarget$5__10_ = {}, ::UnityEngine::Pose $leftHandPoseTarget$5__11_ = {}, ::UnityEngine::Pose $rightHandPoseTarget$5__12_ = {}, float $nextTargetTime$5__13_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $headPose$5__2{$headPose$5__2_}, $leftHandPose$5__3{$leftHandPose$5__3_}, $rightHandPose$5__4{$rightHandPose$5__4_}, $random$5__5{$random$5__5_}, $lastHeadPoseTarget$5__6{$lastHeadPoseTarget$5__6_}, $lastLeftHandPoseTarget$5__7{$lastLeftHandPoseTarget$5__7_}, $lastRightHandPoseTarget$5__8{$lastRightHandPoseTarget$5__8_}, $lastTargetTime$5__9{$lastTargetTime$5__9_}, $headPoseTarget$5__10{$headPoseTarget$5__10_}, $leftHandPoseTarget$5__11{$leftHandPoseTarget$5__11_}, $rightHandPoseTarget$5__12{$rightHandPoseTarget$5__12_}, $nextTargetTime$5__13{$nextTargetTime$5__13_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public MockPlayerLobbyPoseGeneratorAI <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockPlayerLobbyPoseGeneratorAI*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private UnityEngine.Pose <headPose>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$headPose$5__2();
    // Get instance field reference: private UnityEngine.Pose <leftHandPose>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$leftHandPose$5__3();
    // Get instance field reference: private UnityEngine.Pose <rightHandPose>5__4
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$rightHandPose$5__4();
    // Get instance field reference: private System.Random <random>5__5
    [[deprecated("Use field access instead!")]] ::System::Random*& dyn_$random$5__5();
    // Get instance field reference: private UnityEngine.Pose <lastHeadPoseTarget>5__6
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$lastHeadPoseTarget$5__6();
    // Get instance field reference: private UnityEngine.Pose <lastLeftHandPoseTarget>5__7
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$lastLeftHandPoseTarget$5__7();
    // Get instance field reference: private UnityEngine.Pose <lastRightHandPoseTarget>5__8
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$lastRightHandPoseTarget$5__8();
    // Get instance field reference: private System.Single <lastTargetTime>5__9
    [[deprecated("Use field access instead!")]] float& dyn_$lastTargetTime$5__9();
    // Get instance field reference: private UnityEngine.Pose <headPoseTarget>5__10
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$headPoseTarget$5__10();
    // Get instance field reference: private UnityEngine.Pose <leftHandPoseTarget>5__11
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$leftHandPoseTarget$5__11();
    // Get instance field reference: private UnityEngine.Pose <rightHandPoseTarget>5__12
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$rightHandPoseTarget$5__12();
    // Get instance field reference: private System.Single <nextTargetTime>5__13
    [[deprecated("Use field access instead!")]] float& dyn_$nextTargetTime$5__13();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2AA3180
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2AA420C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MockPlayerLobbyPoseGeneratorAI/<SendPoses>d__1
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1), 328 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __GlobalNamespace_MockPlayerLobbyPoseGeneratorAI_$SendPoses$d__1SizeCheck;
  static_assert(sizeof(MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1) == 0x150);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1::*)()>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI::$SendPoses$d__1), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
