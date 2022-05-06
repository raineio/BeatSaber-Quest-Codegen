// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementsModelSO
  class AchievementsModelSO;
  // Forward declaring type: AchievementSO
  class AchievementSO;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AchievementsEvaluationHandler
  class AchievementsEvaluationHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AchievementsEvaluationHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementsEvaluationHandler*, "", "AchievementsEvaluationHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xF8
  #pragma pack(push, 1)
  // Autogenerated type: AchievementsEvaluationHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementsEvaluationHandler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private AchievementsModelSO _achievementsModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AchievementsModelSO* achievementsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementsModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D0130
    // private AchievementSO _clearedLevel100Achievement
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AchievementSO* clearedLevel100Achievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _totalScore100MillionAchievement
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AchievementSO* totalScore100MillionAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _24HoursPlayedAchievement
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::AchievementSO* _24HoursPlayedAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _kilometersTravelled100Achievement
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::AchievementSO* kilometersTravelled100Achievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D0198
    // private AchievementSO _15ExpertLevelsRankSAchievement
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::AchievementSO* _15ExpertLevelsRankSAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _15ExpertLevelsFullComboAchievement
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::AchievementSO* _15ExpertLevelsFullComboAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _15HardLevelsRankSAchievement
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::AchievementSO* _15HardLevelsRankSAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _15HardLevelsFullComboAchievement
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::AchievementSO* _15HardLevelsFullComboAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D0200
    // private AchievementSO _expertLevelClearedWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::AchievementSO* expertLevelClearedWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _fullComboExpertWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::AchievementSO* fullComboExpertWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _goodCuts10000Achievement
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::AchievementSO* goodCuts10000Achievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D0258
    // private AchievementSO _resultMinRankANormalWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::AchievementSO* resultMinRankANormalWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _resultMinRankSHardWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::AchievementSO* resultMinRankSHardWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _resultMinRankSSExpertWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::AchievementSO* resultMinRankSSExpertWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D02B0
    // private AchievementSO _combo50NormalWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::AchievementSO* combo50NormalWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _combo100HardWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::AchievementSO* combo100HardWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _combo500ExpertWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::AchievementSO* combo500ExpertWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D0308
    // private AchievementSO _clearedLevelWithoutModifiersAchievement
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::AchievementSO* clearedLevelWithoutModifiersAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithSongSpeedFasterModifierAchievement
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::AchievementSO* clearedLevelWithSongSpeedFasterModifierAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithInstaFailModifierAchievement
    // Size: 0x8
    // Offset: 0xB8
    ::GlobalNamespace::AchievementSO* clearedLevelWithInstaFailModifierAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithDisappearingArrowsModifierAchievement
    // Size: 0x8
    // Offset: 0xC0
    ::GlobalNamespace::AchievementSO* clearedLevelWithDisappearingArrowsModifierAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _clearedLevelWithBatteryEnergyModifierAchievement
    // Size: 0x8
    // Offset: 0xC8
    ::GlobalNamespace::AchievementSO* clearedLevelWithBatteryEnergyModifierAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x10D0380
    // private AchievementSO _cleared30MissionsAchievement
    // Size: 0x8
    // Offset: 0xD0
    ::GlobalNamespace::AchievementSO* cleared30MissionsAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _finalMissionClearedAchievement
    // Size: 0x8
    // Offset: 0xD8
    ::GlobalNamespace::AchievementSO* finalMissionClearedAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // private AchievementSO _allMissionClearedAchievement
    // Size: 0x8
    // Offset: 0xE0
    ::GlobalNamespace::AchievementSO* allMissionClearedAchievement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AchievementSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10D03D8
    // private PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0xE8
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0x10D03E8
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0xF0
    ::GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodesManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AchievementsModelSO _achievementsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementsModelSO*& dyn__achievementsModel();
    // Get instance field reference: private AchievementSO _clearedLevel100Achievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__clearedLevel100Achievement();
    // Get instance field reference: private AchievementSO _totalScore100MillionAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__totalScore100MillionAchievement();
    // Get instance field reference: private AchievementSO _24HoursPlayedAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__24HoursPlayedAchievement();
    // Get instance field reference: private AchievementSO _kilometersTravelled100Achievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__kilometersTravelled100Achievement();
    // Get instance field reference: private AchievementSO _15ExpertLevelsRankSAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__15ExpertLevelsRankSAchievement();
    // Get instance field reference: private AchievementSO _15ExpertLevelsFullComboAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__15ExpertLevelsFullComboAchievement();
    // Get instance field reference: private AchievementSO _15HardLevelsRankSAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__15HardLevelsRankSAchievement();
    // Get instance field reference: private AchievementSO _15HardLevelsFullComboAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__15HardLevelsFullComboAchievement();
    // Get instance field reference: private AchievementSO _expertLevelClearedWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__expertLevelClearedWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _fullComboExpertWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__fullComboExpertWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _goodCuts10000Achievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__goodCuts10000Achievement();
    // Get instance field reference: private AchievementSO _resultMinRankANormalWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__resultMinRankANormalWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _resultMinRankSHardWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__resultMinRankSHardWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _resultMinRankSSExpertWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__resultMinRankSSExpertWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _combo50NormalWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__combo50NormalWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _combo100HardWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__combo100HardWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _combo500ExpertWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__combo500ExpertWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _clearedLevelWithoutModifiersAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__clearedLevelWithoutModifiersAchievement();
    // Get instance field reference: private AchievementSO _clearedLevelWithSongSpeedFasterModifierAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__clearedLevelWithSongSpeedFasterModifierAchievement();
    // Get instance field reference: private AchievementSO _clearedLevelWithInstaFailModifierAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__clearedLevelWithInstaFailModifierAchievement();
    // Get instance field reference: private AchievementSO _clearedLevelWithDisappearingArrowsModifierAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__clearedLevelWithDisappearingArrowsModifierAchievement();
    // Get instance field reference: private AchievementSO _clearedLevelWithBatteryEnergyModifierAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__clearedLevelWithBatteryEnergyModifierAchievement();
    // Get instance field reference: private AchievementSO _cleared30MissionsAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__cleared30MissionsAchievement();
    // Get instance field reference: private AchievementSO _finalMissionClearedAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__finalMissionClearedAchievement();
    // Get instance field reference: private AchievementSO _allMissionClearedAchievement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AchievementSO*& dyn__allMissionClearedAchievement();
    // Get instance field reference: private PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private MissionNodesManager _missionNodesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNodesManager*& dyn__missionNodesManager();
    // public System.Void .ctor()
    // Offset: 0x14E7B3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementsEvaluationHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AchievementsEvaluationHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementsEvaluationHandler*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14E6960
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x14E6B7C
    void OnDestroy();
    // private System.Void HandleSoloFreePlayOverallStatsDataDidUpdate(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x14E6D1C
    void HandleSoloFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // private System.Void HandlePartyFreePlayOverallStatsDataDidUpdate(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x14E77EC
    void HandlePartyFreePlayOverallStatsDataDidUpdate(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void HandleCampaignOverallStatsDataDidUpdate(MissionCompletionResults missionCompletionResults, MissionNode missionNode)
    // Offset: 0x14E77FC
    void HandleCampaignOverallStatsDataDidUpdate(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::MissionNode* missionNode);
    // private System.Void ProcessMissionFinishData(MissionNode missionNode, MissionCompletionResults missionCompletionResults)
    // Offset: 0x14E787C
    void ProcessMissionFinishData(::GlobalNamespace::MissionNode* missionNode, ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void ProcessSoloFreePlayLevelFinishData(IDifficultyBeatmap difficultyBeatmap, LevelCompletionResults levelCompletionResults)
    // Offset: 0x14E7408
    void ProcessSoloFreePlayLevelFinishData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void ProcessLevelFinishData(IDifficultyBeatmap difficultyBeatmap, LevelCompletionResults levelCompletionResults)
    // Offset: 0x14E6D60
    void ProcessLevelFinishData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);
  }; // AchievementsEvaluationHandler
  #pragma pack(pop)
  static check_size<sizeof(AchievementsEvaluationHandler), 240 + sizeof(::GlobalNamespace::MissionNodesManager*)> __GlobalNamespace_AchievementsEvaluationHandlerSizeCheck;
  static_assert(sizeof(AchievementsEvaluationHandler) == 0xF8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)()>(&GlobalNamespace::AchievementsEvaluationHandler::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)()>(&GlobalNamespace::AchievementsEvaluationHandler::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate
// Il2CppName: HandleSoloFreePlayOverallStatsDataDidUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::AchievementsEvaluationHandler::HandleSoloFreePlayOverallStatsDataDidUpdate)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "HandleSoloFreePlayOverallStatsDataDidUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate
// Il2CppName: HandlePartyFreePlayOverallStatsDataDidUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::AchievementsEvaluationHandler::HandlePartyFreePlayOverallStatsDataDidUpdate)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "HandlePartyFreePlayOverallStatsDataDidUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate
// Il2CppName: HandleCampaignOverallStatsDataDidUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*)>(&GlobalNamespace::AchievementsEvaluationHandler::HandleCampaignOverallStatsDataDidUpdate)> {
  static const MethodInfo* get() {
    static auto* missionCompletionResults = &::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")->byval_arg;
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "HandleCampaignOverallStatsDataDidUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionCompletionResults, missionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData
// Il2CppName: ProcessMissionFinishData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionCompletionResults*)>(&GlobalNamespace::AchievementsEvaluationHandler::ProcessMissionFinishData)> {
  static const MethodInfo* get() {
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    static auto* missionCompletionResults = &::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "ProcessMissionFinishData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionNode, missionCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData
// Il2CppName: ProcessSoloFreePlayLevelFinishData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::AchievementsEvaluationHandler::ProcessSoloFreePlayLevelFinishData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "ProcessSoloFreePlayLevelFinishData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap, levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData
// Il2CppName: ProcessLevelFinishData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AchievementsEvaluationHandler::*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::AchievementsEvaluationHandler::ProcessLevelFinishData)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AchievementsEvaluationHandler*), "ProcessLevelFinishData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap, levelCompletionResults});
  }
};
