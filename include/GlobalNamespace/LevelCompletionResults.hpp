// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: RankModel/Rank
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults*, "", "LevelCompletionResults");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: LevelCompletionResults
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelCompletionResults : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>, public ::System::IComparable*/ {
    public:
    // Nested type: ::GlobalNamespace::LevelCompletionResults::LevelEndStateType
    struct LevelEndStateType;
    // Nested type: ::GlobalNamespace::LevelCompletionResults::LevelEndAction
    struct LevelEndAction;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LevelCompletionResults/LevelEndStateType
    // [TokenAttribute] Offset: FFFFFFFF
    struct LevelEndStateType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LevelEndStateType
      constexpr LevelEndStateType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LevelCompletionResults/LevelEndStateType Incomplete
      static constexpr const int Incomplete = 0;
      // Get static field: static public LevelCompletionResults/LevelEndStateType Incomplete
      static ::GlobalNamespace::LevelCompletionResults::LevelEndStateType _get_Incomplete();
      // Set static field: static public LevelCompletionResults/LevelEndStateType Incomplete
      static void _set_Incomplete(::GlobalNamespace::LevelCompletionResults::LevelEndStateType value);
      // static field const value: static public LevelCompletionResults/LevelEndStateType Cleared
      static constexpr const int Cleared = 1;
      // Get static field: static public LevelCompletionResults/LevelEndStateType Cleared
      static ::GlobalNamespace::LevelCompletionResults::LevelEndStateType _get_Cleared();
      // Set static field: static public LevelCompletionResults/LevelEndStateType Cleared
      static void _set_Cleared(::GlobalNamespace::LevelCompletionResults::LevelEndStateType value);
      // static field const value: static public LevelCompletionResults/LevelEndStateType Failed
      static constexpr const int Failed = 2;
      // Get static field: static public LevelCompletionResults/LevelEndStateType Failed
      static ::GlobalNamespace::LevelCompletionResults::LevelEndStateType _get_Failed();
      // Set static field: static public LevelCompletionResults/LevelEndStateType Failed
      static void _set_Failed(::GlobalNamespace::LevelCompletionResults::LevelEndStateType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // LevelCompletionResults/LevelEndStateType
    #pragma pack(pop)
    static check_size<sizeof(LevelCompletionResults::LevelEndStateType), 0 + sizeof(int)> __GlobalNamespace_LevelCompletionResults_LevelEndStateTypeSizeCheck;
    static_assert(sizeof(LevelCompletionResults::LevelEndStateType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LevelCompletionResults/LevelEndAction
    // [TokenAttribute] Offset: FFFFFFFF
    struct LevelEndAction/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LevelEndAction
      constexpr LevelEndAction(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LevelCompletionResults/LevelEndAction None
      static constexpr const int None = 0;
      // Get static field: static public LevelCompletionResults/LevelEndAction None
      static ::GlobalNamespace::LevelCompletionResults::LevelEndAction _get_None();
      // Set static field: static public LevelCompletionResults/LevelEndAction None
      static void _set_None(::GlobalNamespace::LevelCompletionResults::LevelEndAction value);
      // static field const value: static public LevelCompletionResults/LevelEndAction Quit
      static constexpr const int Quit = 1;
      // Get static field: static public LevelCompletionResults/LevelEndAction Quit
      static ::GlobalNamespace::LevelCompletionResults::LevelEndAction _get_Quit();
      // Set static field: static public LevelCompletionResults/LevelEndAction Quit
      static void _set_Quit(::GlobalNamespace::LevelCompletionResults::LevelEndAction value);
      // static field const value: static public LevelCompletionResults/LevelEndAction Restart
      static constexpr const int Restart = 2;
      // Get static field: static public LevelCompletionResults/LevelEndAction Restart
      static ::GlobalNamespace::LevelCompletionResults::LevelEndAction _get_Restart();
      // Set static field: static public LevelCompletionResults/LevelEndAction Restart
      static void _set_Restart(::GlobalNamespace::LevelCompletionResults::LevelEndAction value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // LevelCompletionResults/LevelEndAction
    #pragma pack(pop)
    static check_size<sizeof(LevelCompletionResults::LevelEndAction), 0 + sizeof(int)> __GlobalNamespace_LevelCompletionResults_LevelEndActionSizeCheck;
    static_assert(sizeof(LevelCompletionResults::LevelEndAction) == 0x4);
    public:
    // public readonly GameplayModifiers gameplayModifiers
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    // public readonly System.Int32 modifiedScore
    // Size: 0x4
    // Offset: 0x18
    int modifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 multipliedScore
    // Size: 0x4
    // Offset: 0x1C
    int multipliedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly RankModel/Rank rank
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::RankModel::Rank rank;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RankModel::Rank) == 0x4);
    // public readonly System.Boolean fullCombo
    // Size: 0x1
    // Offset: 0x24
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullCombo and: leftSaberMovementDistance
    char __padding4[0x3] = {};
    // public readonly System.Single leftSaberMovementDistance
    // Size: 0x4
    // Offset: 0x28
    float leftSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rightSaberMovementDistance
    // Size: 0x4
    // Offset: 0x2C
    float rightSaberMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single leftHandMovementDistance
    // Size: 0x4
    // Offset: 0x30
    float leftHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single rightHandMovementDistance
    // Size: 0x4
    // Offset: 0x34
    float rightHandMovementDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly LevelCompletionResults/LevelEndStateType levelEndStateType
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelCompletionResults::LevelEndStateType) == 0x4);
    // public readonly LevelCompletionResults/LevelEndAction levelEndAction
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelCompletionResults::LevelEndAction) == 0x4);
    // public readonly System.Single energy
    // Size: 0x4
    // Offset: 0x40
    float energy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 goodCutsCount
    // Size: 0x4
    // Offset: 0x44
    int goodCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 badCutsCount
    // Size: 0x4
    // Offset: 0x48
    int badCutsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 missedCount
    // Size: 0x4
    // Offset: 0x4C
    int missedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 notGoodCount
    // Size: 0x4
    // Offset: 0x50
    int notGoodCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 okCount
    // Size: 0x4
    // Offset: 0x54
    int okCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 maxCutScore
    // Size: 0x4
    // Offset: 0x58
    int maxCutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 totalCutScore
    // Size: 0x4
    // Offset: 0x5C
    int totalCutScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 goodCutsCountForNotesWithFullScoreScoringType
    // Size: 0x4
    // Offset: 0x60
    int goodCutsCountForNotesWithFullScoreScoringType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Single averageCenterDistanceCutScoreForNotesWithFullScoreScoringType
    // Size: 0x4
    // Offset: 0x64
    float averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single averageCutScoreForNotesWithFullScoreScoringType
    // Size: 0x4
    // Offset: 0x68
    float averageCutScoreForNotesWithFullScoreScoringType;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 maxCombo
    // Size: 0x4
    // Offset: 0x6C
    int maxCombo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Single endSongTime
    // Size: 0x4
    // Offset: 0x70
    float endSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>
    operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Get instance field reference: public readonly GameplayModifiers gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers*& dyn_gameplayModifiers();
    // Get instance field reference: public readonly System.Int32 modifiedScore
    [[deprecated("Use field access instead!")]] int& dyn_modifiedScore();
    // Get instance field reference: public readonly System.Int32 multipliedScore
    [[deprecated("Use field access instead!")]] int& dyn_multipliedScore();
    // Get instance field reference: public readonly RankModel/Rank rank
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RankModel::Rank& dyn_rank();
    // Get instance field reference: public readonly System.Boolean fullCombo
    [[deprecated("Use field access instead!")]] bool& dyn_fullCombo();
    // Get instance field reference: public readonly System.Single leftSaberMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn_leftSaberMovementDistance();
    // Get instance field reference: public readonly System.Single rightSaberMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn_rightSaberMovementDistance();
    // Get instance field reference: public readonly System.Single leftHandMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn_leftHandMovementDistance();
    // Get instance field reference: public readonly System.Single rightHandMovementDistance
    [[deprecated("Use field access instead!")]] float& dyn_rightHandMovementDistance();
    // Get instance field reference: public readonly LevelCompletionResults/LevelEndStateType levelEndStateType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelCompletionResults::LevelEndStateType& dyn_levelEndStateType();
    // Get instance field reference: public readonly LevelCompletionResults/LevelEndAction levelEndAction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelCompletionResults::LevelEndAction& dyn_levelEndAction();
    // Get instance field reference: public readonly System.Single energy
    [[deprecated("Use field access instead!")]] float& dyn_energy();
    // Get instance field reference: public readonly System.Int32 goodCutsCount
    [[deprecated("Use field access instead!")]] int& dyn_goodCutsCount();
    // Get instance field reference: public readonly System.Int32 badCutsCount
    [[deprecated("Use field access instead!")]] int& dyn_badCutsCount();
    // Get instance field reference: public readonly System.Int32 missedCount
    [[deprecated("Use field access instead!")]] int& dyn_missedCount();
    // Get instance field reference: public readonly System.Int32 notGoodCount
    [[deprecated("Use field access instead!")]] int& dyn_notGoodCount();
    // Get instance field reference: public readonly System.Int32 okCount
    [[deprecated("Use field access instead!")]] int& dyn_okCount();
    // Get instance field reference: public readonly System.Int32 maxCutScore
    [[deprecated("Use field access instead!")]] int& dyn_maxCutScore();
    // Get instance field reference: public readonly System.Int32 totalCutScore
    [[deprecated("Use field access instead!")]] int& dyn_totalCutScore();
    // Get instance field reference: public readonly System.Int32 goodCutsCountForNotesWithFullScoreScoringType
    [[deprecated("Use field access instead!")]] int& dyn_goodCutsCountForNotesWithFullScoreScoringType();
    // Get instance field reference: public readonly System.Single averageCenterDistanceCutScoreForNotesWithFullScoreScoringType
    [[deprecated("Use field access instead!")]] float& dyn_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType();
    // Get instance field reference: public readonly System.Single averageCutScoreForNotesWithFullScoreScoringType
    [[deprecated("Use field access instead!")]] float& dyn_averageCutScoreForNotesWithFullScoreScoringType();
    // Get instance field reference: public readonly System.Int32 maxCombo
    [[deprecated("Use field access instead!")]] int& dyn_maxCombo();
    // Get instance field reference: public readonly System.Single endSongTime
    [[deprecated("Use field access instead!")]] float& dyn_endSongTime();
    // public System.Void .ctor()
    // Offset: 0x2A01320
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCompletionResults* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCompletionResults*, creationType>()));
    }
    // public System.Void .ctor(GameplayModifiers gameplayModifiers, System.Int32 modifiedScore, System.Int32 multipliedScore, RankModel/Rank rank, System.Boolean fullCombo, System.Single leftSaberMovementDistance, System.Single rightSaberMovementDistance, System.Single leftHandMovementDistance, System.Single rightHandMovementDistance, LevelCompletionResults/LevelEndStateType levelEndStateType, LevelCompletionResults/LevelEndAction levelEndAction, System.Single energy, System.Int32 goodCutsCount, System.Int32 badCutsCount, System.Int32 missedCount, System.Int32 notGoodCount, System.Int32 okCount, System.Int32 maxCutScore, System.Int32 totalCutScore, System.Int32 goodCutsCountForNotesWithFullScoreScoringType, System.Single averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, System.Single averageCutScoreForNotesWithFullScoreScoringType, System.Int32 maxCombo, System.Single endSongTime)
    // Offset: 0x2A01328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCompletionResults* New_ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, int modifiedScore, int multipliedScore, ::GlobalNamespace::RankModel::Rank rank, bool fullCombo, float leftSaberMovementDistance, float rightSaberMovementDistance, float leftHandMovementDistance, float rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType, ::GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction, float energy, int goodCutsCount, int badCutsCount, int missedCount, int notGoodCount, int okCount, int maxCutScore, int totalCutScore, int goodCutsCountForNotesWithFullScoreScoringType, float averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float averageCutScoreForNotesWithFullScoreScoringType, int maxCombo, float endSongTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCompletionResults*, creationType>(gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType, averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime)));
    }
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x2A01470
    int CompareTo(::Il2CppObject* obj);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2A0158C
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // private LevelCompletionResults LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2A01834
    ::GlobalNamespace::LevelCompletionResults* LiteNetLib_Utils_INetImmutableSerializable$LevelCompletionResults$_CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);
    // static public LevelCompletionResults CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2A0183C
    static ::GlobalNamespace::LevelCompletionResults* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);
  }; // LevelCompletionResults
  #pragma pack(pop)
  static check_size<sizeof(LevelCompletionResults), 112 + sizeof(float)> __GlobalNamespace_LevelCompletionResultsSizeCheck;
  static_assert(sizeof(LevelCompletionResults) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults::LevelEndAction, "", "LevelCompletionResults/LevelEndAction");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults::LevelEndStateType, "", "LevelCompletionResults/LevelEndStateType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LevelCompletionResults::*)(::Il2CppObject*)>(&GlobalNamespace::LevelCompletionResults::CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::LevelCompletionResults::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable$LevelCompletionResults$_CreateFromSerializedData
// Il2CppName: LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable$LevelCompletionResults$_CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResults::CreateFromSerializedData
// Il2CppName: CreateFromSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::LevelCompletionResults::CreateFromSerializedData)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResults*), "CreateFromSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
