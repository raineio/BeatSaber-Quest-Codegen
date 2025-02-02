// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapDataBasicInfo
  class IBeatmapDataBasicInfo;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomDifficultyBeatmap
  class CustomDifficultyBeatmap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomDifficultyBeatmap*, "", "CustomDifficultyBeatmap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CustomDifficultyBeatmap
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomDifficultyBeatmap : public ::Il2CppObject/*, public ::GlobalNamespace::IDifficultyBeatmap*/ {
    public:
    // Nested type: ::GlobalNamespace::CustomDifficultyBeatmap::$GetBeatmapDataBasicInfoAsync$d__27
    struct $GetBeatmapDataBasicInfoAsync$d__27;
    // Nested type: ::GlobalNamespace::CustomDifficultyBeatmap::$$c__DisplayClass28_0
    class $$c__DisplayClass28_0;
    // Nested type: ::GlobalNamespace::CustomDifficultyBeatmap::$GetBeatmapDataAsync$d__28
    struct $GetBeatmapDataAsync$d__28;
    public:
    // private readonly IBeatmapLevel <level>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private readonly IDifficultyBeatmapSet <parentDifficultyBeatmapSet>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDifficultyBeatmapSet*) == 0x8);
    // private readonly BeatmapDifficulty <difficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // private readonly System.Int32 <difficultyRank>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Single <noteJumpMovementSpeed>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <noteJumpStartBeatOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly IBeatmapDataBasicInfo <beatmapDataBasicInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapDataBasicInfo*) == 0x8);
    // private readonly System.Single <beatsPerMinute>k__BackingField
    // Size: 0x4
    // Offset: 0x38
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: beatsPerMinute and: beatmapSaveData
    char __padding7[0x4] = {};
    // private readonly BeatmapSaveDataVersion3.BeatmapSaveData <beatmapSaveData>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IDifficultyBeatmap
    operator ::GlobalNamespace::IDifficultyBeatmap() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // Creating interface conversion operator: i_IDifficultyBeatmap
    inline ::GlobalNamespace::IDifficultyBeatmap* i_IDifficultyBeatmap() noexcept {
      return reinterpret_cast<::GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // Get instance field reference: private readonly IBeatmapLevel <level>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapLevel*& dyn_$level$k__BackingField();
    // Get instance field reference: private readonly IDifficultyBeatmapSet <parentDifficultyBeatmapSet>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDifficultyBeatmapSet*& dyn_$parentDifficultyBeatmapSet$k__BackingField();
    // Get instance field reference: private readonly BeatmapDifficulty <difficulty>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn_$difficulty$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <difficultyRank>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$difficultyRank$k__BackingField();
    // Get instance field reference: private readonly System.Single <noteJumpMovementSpeed>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$noteJumpMovementSpeed$k__BackingField();
    // Get instance field reference: private readonly System.Single <noteJumpStartBeatOffset>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$noteJumpStartBeatOffset$k__BackingField();
    // Get instance field reference: private readonly IBeatmapDataBasicInfo <beatmapDataBasicInfo>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapDataBasicInfo*& dyn_$beatmapDataBasicInfo$k__BackingField();
    // Get instance field reference: private readonly System.Single <beatsPerMinute>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$beatsPerMinute$k__BackingField();
    // Get instance field reference: private readonly BeatmapSaveDataVersion3.BeatmapSaveData <beatmapSaveData>k__BackingField
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData*& dyn_$beatmapSaveData$k__BackingField();
    // public IBeatmapLevel get_level()
    // Offset: 0x1441D0C
    ::GlobalNamespace::IBeatmapLevel* get_level();
    // public IDifficultyBeatmapSet get_parentDifficultyBeatmapSet()
    // Offset: 0x1441D14
    ::GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x1441D1C
    ::GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x1441D24
    int get_difficultyRank();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x1441D2C
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x1441D34
    float get_noteJumpStartBeatOffset();
    // public IBeatmapDataBasicInfo get_beatmapDataBasicInfo()
    // Offset: 0x1441D3C
    ::GlobalNamespace::IBeatmapDataBasicInfo* get_beatmapDataBasicInfo();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x1441D44
    float get_beatsPerMinute();
    // public BeatmapSaveDataVersion3.BeatmapSaveData get_beatmapSaveData()
    // Offset: 0x1441D4C
    ::BeatmapSaveDataVersion3::BeatmapSaveData* get_beatmapSaveData();
    // public System.Void .ctor(IBeatmapLevel level, IDifficultyBeatmapSet parentDifficultyBeatmapSet, BeatmapDifficulty difficulty, System.Int32 difficultyRank, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset, System.Single beatsPerMinute, BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData, IBeatmapDataBasicInfo beatmapDataBasicInfo)
    // Offset: 0x1441F6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomDifficultyBeatmap* New_ctor(::GlobalNamespace::IBeatmapLevel* level, ::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet, ::GlobalNamespace::BeatmapDifficulty difficulty, int difficultyRank, float noteJumpMovementSpeed, float noteJumpStartBeatOffset, float beatsPerMinute, ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData, ::GlobalNamespace::IBeatmapDataBasicInfo* beatmapDataBasicInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomDifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomDifficultyBeatmap*, creationType>(level, parentDifficultyBeatmapSet, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, beatsPerMinute, beatmapSaveData, beatmapDataBasicInfo)));
    }
    // public System.Threading.Tasks.Task`1<IBeatmapDataBasicInfo> GetBeatmapDataBasicInfoAsync()
    // Offset: 0x1441D54
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync();
    // public System.Threading.Tasks.Task`1<IReadonlyBeatmapData> GetBeatmapDataAsync(EnvironmentInfoSO environmentInfo, PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x1441E54
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
  }; // CustomDifficultyBeatmap
  #pragma pack(pop)
  static check_size<sizeof(CustomDifficultyBeatmap), 64 + sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData*)> __GlobalNamespace_CustomDifficultyBeatmapSizeCheck;
  static_assert(sizeof(CustomDifficultyBeatmap) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_level
// Il2CppName: get_level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevel* (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_parentDifficultyBeatmapSet
// Il2CppName: get_parentDifficultyBeatmapSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_parentDifficultyBeatmapSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_difficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_difficultyRank
// Il2CppName: get_difficultyRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_difficultyRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_difficultyRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpMovementSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpStartBeatOffset
// Il2CppName: get_noteJumpStartBeatOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_beatmapDataBasicInfo
// Il2CppName: get_beatmapDataBasicInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapDataBasicInfo* (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_beatmapDataBasicInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_beatmapDataBasicInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::get_beatmapSaveData
// Il2CppName: get_beatmapSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::get_beatmapSaveData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "get_beatmapSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataBasicInfoAsync
// Il2CppName: GetBeatmapDataBasicInfoAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* (GlobalNamespace::CustomDifficultyBeatmap::*)()>(&GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataBasicInfoAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "GetBeatmapDataBasicInfoAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataAsync
// Il2CppName: GetBeatmapDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* (GlobalNamespace::CustomDifficultyBeatmap::*)(::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::PlayerSpecificSettings*)>(&GlobalNamespace::CustomDifficultyBeatmap::GetBeatmapDataAsync)> {
  static const MethodInfo* get() {
    static auto* environmentInfo = &::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDifficultyBeatmap*), "GetBeatmapDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentInfo, playerSpecificSettings});
  }
};
