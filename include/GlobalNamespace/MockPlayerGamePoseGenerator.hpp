// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: MockNodePoseSyncStateSender
  class MockNodePoseSyncStateSender;
  // Forward declaring type: MockScoreSyncStateSender
  class MockScoreSyncStateSender;
  // Forward declaring type: MockBeatmapData
  class MockBeatmapData;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockPlayerGamePoseGenerator
  class MockPlayerGamePoseGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockPlayerGamePoseGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerGamePoseGenerator*, "", "MockPlayerGamePoseGenerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MockPlayerGamePoseGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class MockPlayerGamePoseGenerator : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected readonly IMultiplayerSessionManager multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // protected readonly IGameplayRpcManager gameplayRpcManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // protected readonly System.Boolean leftHanded
    // Size: 0x1
    // Offset: 0x20
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHanded and: mockNodePoseSyncStateSender
    char __padding2[0x7] = {};
    // protected readonly MockNodePoseSyncStateSender mockNodePoseSyncStateSender
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MockNodePoseSyncStateSender* mockNodePoseSyncStateSender;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockNodePoseSyncStateSender*) == 0x8);
    // protected readonly MockScoreSyncStateSender mockScoreSyncStateSender
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MockScoreSyncStateSender* mockScoreSyncStateSender;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockScoreSyncStateSender*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: protected readonly IMultiplayerSessionManager multiplayerSessionManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMultiplayerSessionManager*& dyn_multiplayerSessionManager();
    // Get instance field reference: protected readonly IGameplayRpcManager gameplayRpcManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IGameplayRpcManager*& dyn_gameplayRpcManager();
    // Get instance field reference: protected readonly System.Boolean leftHanded
    [[deprecated("Use field access instead!")]] bool& dyn_leftHanded();
    // Get instance field reference: protected readonly MockNodePoseSyncStateSender mockNodePoseSyncStateSender
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockNodePoseSyncStateSender*& dyn_mockNodePoseSyncStateSender();
    // Get instance field reference: protected readonly MockScoreSyncStateSender mockScoreSyncStateSender
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockScoreSyncStateSender*& dyn_mockScoreSyncStateSender();
    // protected System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, System.Boolean leftHanded)
    // Offset: 0x2B459EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPlayerGamePoseGenerator* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockPlayerGamePoseGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPlayerGamePoseGenerator*, creationType>(multiplayerSessionManager, gameplayRpcManager, leftHanded)));
    }
    // public System.Void Dispose()
    // Offset: 0x2B45C04
    void Dispose();
    // public System.Void SendPoses(System.Single introStartTime, MockBeatmapData beatmapData, GameplayModifiers gameplayModifiers, System.Threading.CancellationToken cancellationToken, System.Action onSongFinished)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SendPoses(float introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::Threading::CancellationToken cancellationToken, ::System::Action* onSongFinished);
    // public System.Void SimulateFail()
    // Offset: 0x2B45D0C
    void SimulateFail();
    // public System.Void SimulateGiveUp()
    // Offset: 0x2B45F10
    void SimulateGiveUp();
    // static private LevelCompletionResults CreateEmptyLevelCompletionResults(LevelCompletionResults/LevelEndStateType levelEndStateType)
    // Offset: 0x2B45E04
    static ::GlobalNamespace::LevelCompletionResults* CreateEmptyLevelCompletionResults(::GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType);
  }; // MockPlayerGamePoseGenerator
  #pragma pack(pop)
  static check_size<sizeof(MockPlayerGamePoseGenerator), 48 + sizeof(::GlobalNamespace::MockScoreSyncStateSender*)> __GlobalNamespace_MockPlayerGamePoseGeneratorSizeCheck;
  static_assert(sizeof(MockPlayerGamePoseGenerator) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGenerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&GlobalNamespace::MockPlayerGamePoseGenerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGenerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGenerator::SendPoses
// Il2CppName: SendPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)(float, ::GlobalNamespace::MockBeatmapData*, ::GlobalNamespace::GameplayModifiers*, ::System::Threading::CancellationToken, ::System::Action*)>(&GlobalNamespace::MockPlayerGamePoseGenerator::SendPoses)> {
  static const MethodInfo* get() {
    static auto* introStartTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "MockBeatmapData")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    static auto* onSongFinished = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGenerator*), "SendPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{introStartTime, beatmapData, gameplayModifiers, cancellationToken, onSongFinished});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail
// Il2CppName: SimulateFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGenerator*), "SimulateFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp
// Il2CppName: SimulateGiveUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGenerator*), "SimulateGiveUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults
// Il2CppName: CreateEmptyLevelCompletionResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::GlobalNamespace::LevelCompletionResults::LevelEndStateType)>(&GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults)> {
  static const MethodInfo* get() {
    static auto* levelEndStateType = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndStateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPlayerGamePoseGenerator*), "CreateEmptyLevelCompletionResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelEndStateType});
  }
};
