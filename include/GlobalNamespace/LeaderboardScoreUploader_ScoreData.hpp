// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeaderboardScoreUploader::ScoreData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardScoreUploader::ScoreData*, "", "LeaderboardScoreUploader/ScoreData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/ScoreData
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardScoreUploader::ScoreData : public ::Il2CppObject {
    public:
    public:
    // private System.String <playerId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW playerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private IDifficultyBeatmap <beatmap>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IDifficultyBeatmap* beatmap;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private GameplayModifiers <gameplayModifiers>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    // private System.Int32 <multipliedScore>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int multipliedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <modifiedScore>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <fullCombo>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: goodCutsCount
    char __padding5[0x3] = {};
    // private System.Int32 <goodCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <badCutsCount>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <missedCount>k__BackingField
    // Size: 0x4
    // Offset: 0x3C
    int missedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <maxCombo>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 uploadAttemptCount
    // Size: 0x4
    // Offset: 0x44
    int uploadAttemptCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 currentUploadAttemptCount
    // Size: 0x4
    // Offset: 0x48
    int currentUploadAttemptCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String <playerId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$playerId$k__BackingField();
    // Get instance field reference: private IDifficultyBeatmap <beatmap>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmap*& dyn_$beatmap$k__BackingField();
    // Get instance field reference: private GameplayModifiers <gameplayModifiers>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers*& dyn_$gameplayModifiers$k__BackingField();
    // Get instance field reference: private System.Int32 <multipliedScore>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$multipliedScore$k__BackingField();
    // Get instance field reference: private System.Int32 <modifiedScore>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$modifiedScore$k__BackingField();
    // Get instance field reference: private System.Boolean <fullCombo>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$fullCombo$k__BackingField();
    // Get instance field reference: private System.Int32 <goodCutsCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$goodCutsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <badCutsCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$badCutsCount$k__BackingField();
    // Get instance field reference: private System.Int32 <missedCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$missedCount$k__BackingField();
    // Get instance field reference: private System.Int32 <maxCombo>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$maxCombo$k__BackingField();
    // Get instance field reference: public System.Int32 uploadAttemptCount
    [[deprecated("Use field access instead!")]] int& dyn_uploadAttemptCount();
    // Get instance field reference: public System.Int32 currentUploadAttemptCount
    [[deprecated("Use field access instead!")]] int& dyn_currentUploadAttemptCount();
    // public System.String get_playerId()
    // Offset: 0x13740FC
    ::StringW get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0x1374104
    void set_playerId(::StringW value);
    // public IDifficultyBeatmap get_beatmap()
    // Offset: 0x137410C
    ::GlobalNamespace::IDifficultyBeatmap* get_beatmap();
    // private System.Void set_beatmap(IDifficultyBeatmap value)
    // Offset: 0x1374114
    void set_beatmap(::GlobalNamespace::IDifficultyBeatmap* value);
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0x137411C
    ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(GameplayModifiers value)
    // Offset: 0x1374124
    void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);
    // public System.Int32 get_multipliedScore()
    // Offset: 0x137412C
    int get_multipliedScore();
    // private System.Void set_multipliedScore(System.Int32 value)
    // Offset: 0x1374134
    void set_multipliedScore(int value);
    // public System.Int32 get_modifiedScore()
    // Offset: 0x137413C
    int get_modifiedScore();
    // private System.Void set_modifiedScore(System.Int32 value)
    // Offset: 0x1374144
    void set_modifiedScore(int value);
    // public System.Boolean get_fullCombo()
    // Offset: 0x137414C
    bool get_fullCombo();
    // private System.Void set_fullCombo(System.Boolean value)
    // Offset: 0x1374154
    void set_fullCombo(bool value);
    // public System.Int32 get_goodCutsCount()
    // Offset: 0x1374160
    int get_goodCutsCount();
    // private System.Void set_goodCutsCount(System.Int32 value)
    // Offset: 0x1374168
    void set_goodCutsCount(int value);
    // public System.Int32 get_badCutsCount()
    // Offset: 0x1374170
    int get_badCutsCount();
    // private System.Void set_badCutsCount(System.Int32 value)
    // Offset: 0x1374178
    void set_badCutsCount(int value);
    // public System.Int32 get_missedCount()
    // Offset: 0x1374180
    int get_missedCount();
    // private System.Void set_missedCount(System.Int32 value)
    // Offset: 0x1374188
    void set_missedCount(int value);
    // public System.Int32 get_maxCombo()
    // Offset: 0x1374190
    int get_maxCombo();
    // private System.Void set_maxCombo(System.Int32 value)
    // Offset: 0x1374198
    void set_maxCombo(int value);
    // public System.Void .ctor(System.String playerId, IDifficultyBeatmap beatmap, System.Int32 multipliedScore, System.Int32 modifiedScore, System.Boolean fullCombo, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 maxCombo, GameplayModifiers gameplayModifiers)
    // Offset: 0x13741A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::ScoreData* New_ctor(::StringW playerId, ::GlobalNamespace::IDifficultyBeatmap* beatmap, int multipliedScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeaderboardScoreUploader::ScoreData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::ScoreData*, creationType>(playerId, beatmap, multipliedScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, gameplayModifiers)));
    }
  }; // LeaderboardScoreUploader/ScoreData
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardScoreUploader::ScoreData), 72 + sizeof(int)> __GlobalNamespace_LeaderboardScoreUploader_ScoreDataSizeCheck;
  static_assert(sizeof(LeaderboardScoreUploader::ScoreData) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_playerId
// Il2CppName: get_playerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_playerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_playerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_playerId
// Il2CppName: set_playerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(::StringW)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_playerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_playerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_beatmap
// Il2CppName: get_beatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_beatmap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_beatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_beatmap
// Il2CppName: set_beatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_beatmap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_beatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_gameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_gameplayModifiers
// Il2CppName: set_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(::GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_gameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_multipliedScore
// Il2CppName: get_multipliedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_multipliedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_multipliedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_multipliedScore
// Il2CppName: set_multipliedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_multipliedScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_multipliedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_modifiedScore
// Il2CppName: get_modifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_modifiedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_modifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_modifiedScore
// Il2CppName: set_modifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_modifiedScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_modifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_fullCombo
// Il2CppName: get_fullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_fullCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_fullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_fullCombo
// Il2CppName: set_fullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(bool)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_fullCombo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_fullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_goodCutsCount
// Il2CppName: get_goodCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_goodCutsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_goodCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_goodCutsCount
// Il2CppName: set_goodCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_goodCutsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_goodCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_badCutsCount
// Il2CppName: get_badCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_badCutsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_badCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_badCutsCount
// Il2CppName: set_badCutsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_badCutsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_badCutsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_missedCount
// Il2CppName: get_missedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_missedCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_missedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_missedCount
// Il2CppName: set_missedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_missedCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_missedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_maxCombo
// Il2CppName: get_maxCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)()>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_maxCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "get_maxCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_maxCombo
// Il2CppName: set_maxCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_maxCombo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardScoreUploader::ScoreData*), "set_maxCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardScoreUploader::ScoreData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
