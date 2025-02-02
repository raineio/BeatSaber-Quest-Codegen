// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PartyFreePlayFlowCoordinator
#include "GlobalNamespace/PartyFreePlayFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass17_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: PartyFreePlayFlowCoordinator/<>c__DisplayClass17_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0 : public ::Il2CppObject {
    public:
    public:
    // public PartyFreePlayFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PartyFreePlayFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PartyFreePlayFlowCoordinator*) == 0x8);
    // public LevelCompletionResults levelCompletionResults
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelCompletionResults*) == 0x8);
    // public System.String leaderboardId
    // Size: 0x8
    // Offset: 0x20
    ::StringW leaderboardId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public IReadonlyBeatmapData transformedBeatmapData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // public IDifficultyBeatmap difficultyBeatmap
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // public System.Boolean practice
    // Size: 0x1
    // Offset: 0x38
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public PartyFreePlayFlowCoordinator <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PartyFreePlayFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public LevelCompletionResults levelCompletionResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelCompletionResults*& dyn_levelCompletionResults();
    // Get instance field reference: public System.String leaderboardId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_leaderboardId();
    // Get instance field reference: public IReadonlyBeatmapData transformedBeatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReadonlyBeatmapData*& dyn_transformedBeatmapData();
    // Get instance field reference: public IDifficultyBeatmap difficultyBeatmap
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmap*& dyn_difficultyBeatmap();
    // Get instance field reference: public System.Boolean practice
    [[deprecated("Use field access instead!")]] bool& dyn_practice();
    // public System.Void .ctor()
    // Offset: 0x138C194
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0*, creationType>()));
    }
    // System.Void <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0(EnterPlayerGuestNameViewController viewController, System.String playerName)
    // Offset: 0x138C3E4
    void $ProcessLevelCompletionResultsAfterLevelDidFinish$b__0(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName);
  }; // PartyFreePlayFlowCoordinator/<>c__DisplayClass17_0
  #pragma pack(pop)
  static check_size<sizeof(PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0), 56 + sizeof(bool)> __GlobalNamespace_PartyFreePlayFlowCoordinator_$$c__DisplayClass17_0SizeCheck;
  static_assert(sizeof(PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0::$ProcessLevelCompletionResultsAfterLevelDidFinish$b__0
// Il2CppName: <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0::*)(::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW)>(&GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0::$ProcessLevelCompletionResultsAfterLevelDidFinish$b__0)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("", "EnterPlayerGuestNameViewController")->byval_arg;
    static auto* playerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0*), "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController, playerName});
  }
};
