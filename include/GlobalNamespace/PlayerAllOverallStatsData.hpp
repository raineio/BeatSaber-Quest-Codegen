// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerAllOverallStatsData
  class PlayerAllOverallStatsData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAllOverallStatsData*, "", "PlayerAllOverallStatsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlayerAllOverallStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerAllOverallStatsData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData
    class PlayerOverallStatsData;
    public:
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <campaignOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <soloFreePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <partyFreePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // private PlayerAllOverallStatsData/PlayerOverallStatsData <onlinePlayOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*) == 0x8);
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdateSoloFreePlayOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* didUpdateSoloFreePlayOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdatePartyFreePlayOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* didUpdatePartyFreePlayOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*) == 0x8);
    // private System.Action`2<MissionCompletionResults,MissionNode> didUpdateCampaignOverallStatsDataEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* didUpdateCampaignOverallStatsDataEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>*) == 0x8);
    public:
    // Get instance field reference: private PlayerAllOverallStatsData/PlayerOverallStatsData <campaignOverallStatsData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*& dyn_$campaignOverallStatsData$k__BackingField();
    // Get instance field reference: private PlayerAllOverallStatsData/PlayerOverallStatsData <soloFreePlayOverallStatsData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*& dyn_$soloFreePlayOverallStatsData$k__BackingField();
    // Get instance field reference: private PlayerAllOverallStatsData/PlayerOverallStatsData <partyFreePlayOverallStatsData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*& dyn_$partyFreePlayOverallStatsData$k__BackingField();
    // Get instance field reference: private PlayerAllOverallStatsData/PlayerOverallStatsData <onlinePlayOverallStatsData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*& dyn_$onlinePlayOverallStatsData$k__BackingField();
    // Get instance field reference: private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdateSoloFreePlayOverallStatsDataEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*& dyn_didUpdateSoloFreePlayOverallStatsDataEvent();
    // Get instance field reference: private System.Action`2<LevelCompletionResults,IDifficultyBeatmap> didUpdatePartyFreePlayOverallStatsDataEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*& dyn_didUpdatePartyFreePlayOverallStatsDataEvent();
    // Get instance field reference: private System.Action`2<MissionCompletionResults,MissionNode> didUpdateCampaignOverallStatsDataEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>*& dyn_didUpdateCampaignOverallStatsDataEvent();
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_allOverallStatsData()
    // Offset: 0x13671E0
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_allOverallStatsData();
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_campaignOverallStatsData()
    // Offset: 0x1367340
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_campaignOverallStatsData();
    // private System.Void set_campaignOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x1367348
    void set_campaignOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_soloFreePlayOverallStatsData()
    // Offset: 0x1367350
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_soloFreePlayOverallStatsData();
    // private System.Void set_soloFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x1367358
    void set_soloFreePlayOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_partyFreePlayOverallStatsData()
    // Offset: 0x1367360
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_partyFreePlayOverallStatsData();
    // private System.Void set_partyFreePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x1367368
    void set_partyFreePlayOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public PlayerAllOverallStatsData/PlayerOverallStatsData get_onlinePlayOverallStatsData()
    // Offset: 0x1367370
    ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* get_onlinePlayOverallStatsData();
    // private System.Void set_onlinePlayOverallStatsData(PlayerAllOverallStatsData/PlayerOverallStatsData value)
    // Offset: 0x1367378
    void set_onlinePlayOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* value);
    // public System.Void add_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x1367380
    void add_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdateSoloFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x1367424
    void remove_didUpdateSoloFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x13674C8
    void add_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didUpdatePartyFreePlayOverallStatsDataEvent(System.Action`2<LevelCompletionResults,IDifficultyBeatmap> value)
    // Offset: 0x136756C
    void remove_didUpdatePartyFreePlayOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0x1367610
    void add_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* value);
    // public System.Void remove_didUpdateCampaignOverallStatsDataEvent(System.Action`2<MissionCompletionResults,MissionNode> value)
    // Offset: 0x13676B4
    void remove_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>* value);
    // public System.Void .ctor()
    // Offset: 0x1367758
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData*, creationType>()));
    }
    // public System.Void .ctor(PlayerAllOverallStatsData/PlayerOverallStatsData campaignOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData soloFreePlayOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData partyFreePlayOverallStatsData, PlayerAllOverallStatsData/PlayerOverallStatsData onlinePlayOverallStatsData)
    // Offset: 0x136781C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* campaignOverallStatsData, ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* soloFreePlayOverallStatsData, ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* partyFreePlayOverallStatsData, ::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* onlinePlayOverallStatsData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerAllOverallStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAllOverallStatsData*, creationType>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData)));
    }
    // public System.Void UpdateSoloFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1367868
    void UpdateSoloFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdatePartyFreePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x135DA8C
    void UpdatePartyFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void UpdateCampaignOverallStatsData(MissionCompletionResults missionCompletionResults, MissionNode missionNode)
    // Offset: 0x1367A18
    void UpdateCampaignOverallStatsData(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::MissionNode* missionNode);
    // public System.Void UpdateOnlinePlayOverallStatsData(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1367AAC
    void UpdateOnlinePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
  }; // PlayerAllOverallStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerAllOverallStatsData), 64 + sizeof(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>*)> __GlobalNamespace_PlayerAllOverallStatsDataSizeCheck;
  static_assert(sizeof(PlayerAllOverallStatsData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_allOverallStatsData
// Il2CppName: get_allOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_allOverallStatsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_allOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_campaignOverallStatsData
// Il2CppName: get_campaignOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_campaignOverallStatsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_campaignOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_campaignOverallStatsData
// Il2CppName: set_campaignOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_campaignOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PlayerAllOverallStatsData/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_campaignOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_soloFreePlayOverallStatsData
// Il2CppName: get_soloFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_soloFreePlayOverallStatsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_soloFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_soloFreePlayOverallStatsData
// Il2CppName: set_soloFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_soloFreePlayOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PlayerAllOverallStatsData/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_soloFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_partyFreePlayOverallStatsData
// Il2CppName: get_partyFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_partyFreePlayOverallStatsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_partyFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_partyFreePlayOverallStatsData
// Il2CppName: set_partyFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_partyFreePlayOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PlayerAllOverallStatsData/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_partyFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::get_onlinePlayOverallStatsData
// Il2CppName: get_onlinePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData* (GlobalNamespace::PlayerAllOverallStatsData::*)()>(&GlobalNamespace::PlayerAllOverallStatsData::get_onlinePlayOverallStatsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "get_onlinePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::set_onlinePlayOverallStatsData
// Il2CppName: set_onlinePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*)>(&GlobalNamespace::PlayerAllOverallStatsData::set_onlinePlayOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "PlayerAllOverallStatsData/PlayerOverallStatsData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "set_onlinePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateSoloFreePlayOverallStatsDataEvent
// Il2CppName: add_didUpdateSoloFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateSoloFreePlayOverallStatsDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCompletionResults"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "add_didUpdateSoloFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateSoloFreePlayOverallStatsDataEvent
// Il2CppName: remove_didUpdateSoloFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateSoloFreePlayOverallStatsDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCompletionResults"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "remove_didUpdateSoloFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::add_didUpdatePartyFreePlayOverallStatsDataEvent
// Il2CppName: add_didUpdatePartyFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::add_didUpdatePartyFreePlayOverallStatsDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCompletionResults"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "add_didUpdatePartyFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdatePartyFreePlayOverallStatsDataEvent
// Il2CppName: remove_didUpdatePartyFreePlayOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdatePartyFreePlayOverallStatsDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "LevelCompletionResults"), ::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "remove_didUpdatePartyFreePlayOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateCampaignOverallStatsDataEvent
// Il2CppName: add_didUpdateCampaignOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateCampaignOverallStatsDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionCompletionResults"), ::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "add_didUpdateCampaignOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateCampaignOverallStatsDataEvent
// Il2CppName: remove_didUpdateCampaignOverallStatsDataEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*>*)>(&GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateCampaignOverallStatsDataEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionCompletionResults"), ::il2cpp_utils::GetClassFromName("", "MissionNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "remove_didUpdateCampaignOverallStatsDataEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdateSoloFreePlayOverallStatsData
// Il2CppName: UpdateSoloFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdateSoloFreePlayOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdateSoloFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdatePartyFreePlayOverallStatsData
// Il2CppName: UpdatePartyFreePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdatePartyFreePlayOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdatePartyFreePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdateCampaignOverallStatsData
// Il2CppName: UpdateCampaignOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::MissionNode*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdateCampaignOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* missionCompletionResults = &::il2cpp_utils::GetClassFromName("", "MissionCompletionResults")->byval_arg;
    static auto* missionNode = &::il2cpp_utils::GetClassFromName("", "MissionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdateCampaignOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionCompletionResults, missionNode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAllOverallStatsData::UpdateOnlinePlayOverallStatsData
// Il2CppName: UpdateOnlinePlayOverallStatsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::PlayerAllOverallStatsData::UpdateOnlinePlayOverallStatsData)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAllOverallStatsData*), "UpdateOnlinePlayOverallStatsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults, difficultyBeatmap});
  }
};
