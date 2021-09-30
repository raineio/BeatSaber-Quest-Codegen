// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelSO
#include "GlobalNamespace/BeatmapLevelSO.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataSO
  class BeatmapDataSO;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelSO/DifficultyBeatmap
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelSO::DifficultyBeatmap : public ::Il2CppObject/*, public GlobalNamespace::IDifficultyBeatmap*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private BeatmapDifficulty _difficulty
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::BeatmapDifficulty difficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // private System.Int32 _difficultyRank
    // Size: 0x4
    // Offset: 0x14
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x18
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x1C
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapDataSO _beatmapData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapDataSO* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDataSO*) == 0x8);
    // private IBeatmapLevel _parentLevel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IBeatmapLevel* parentLevel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevel*) == 0x8);
    // private IDifficultyBeatmapSet _parentDifficultyBeatmapSet
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmapSet*) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IDifficultyBeatmap
    operator GlobalNamespace::IDifficultyBeatmap() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDifficultyBeatmap*>(this);
    }
    // Get instance field reference: private BeatmapDifficulty _difficulty
    GlobalNamespace::BeatmapDifficulty& dyn__difficulty();
    // Get instance field reference: private System.Int32 _difficultyRank
    int& dyn__difficultyRank();
    // Get instance field reference: private System.Single _noteJumpMovementSpeed
    float& dyn__noteJumpMovementSpeed();
    // Get instance field reference: private System.Single _noteJumpStartBeatOffset
    float& dyn__noteJumpStartBeatOffset();
    // Get instance field reference: private BeatmapDataSO _beatmapData
    GlobalNamespace::BeatmapDataSO*& dyn__beatmapData();
    // Get instance field reference: private IBeatmapLevel _parentLevel
    GlobalNamespace::IBeatmapLevel*& dyn__parentLevel();
    // Get instance field reference: private IDifficultyBeatmapSet _parentDifficultyBeatmapSet
    GlobalNamespace::IDifficultyBeatmapSet*& dyn__parentDifficultyBeatmapSet();
    // public BeatmapDifficulty get_difficulty()
    // Offset: 0x129BE38
    GlobalNamespace::BeatmapDifficulty get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x129BE40
    int get_difficultyRank();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x129BE48
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x129BE50
    float get_noteJumpStartBeatOffset();
    // public BeatmapData get_beatmapData()
    // Offset: 0x129BE58
    GlobalNamespace::BeatmapData* get_beatmapData();
    // public IBeatmapLevel get_level()
    // Offset: 0x129BE74
    GlobalNamespace::IBeatmapLevel* get_level();
    // public IDifficultyBeatmapSet get_parentDifficultyBeatmapSet()
    // Offset: 0x129BE7C
    GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();
    // public System.Void .ctor(IBeatmapLevel parentLevel, BeatmapDifficulty difficulty, System.Int32 difficultyRank, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset, BeatmapDataSO beatmapData)
    // Offset: 0x129BE84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelSO::DifficultyBeatmap* New_ctor(GlobalNamespace::IBeatmapLevel* parentLevel, GlobalNamespace::BeatmapDifficulty difficulty, int difficultyRank, float noteJumpMovementSpeed, float noteJumpStartBeatOffset, GlobalNamespace::BeatmapDataSO* beatmapData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelSO::DifficultyBeatmap*, creationType>(parentLevel, difficulty, difficultyRank, noteJumpMovementSpeed, noteJumpStartBeatOffset, beatmapData)));
    }
    // public System.Void SetParents(IBeatmapLevel parentLevel, IDifficultyBeatmapSet parentDifficultyBeatmapSet)
    // Offset: 0x1298A60
    void SetParents(GlobalNamespace::IBeatmapLevel* parentLevel, GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet);
  }; // BeatmapLevelSO/DifficultyBeatmap
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelSO::DifficultyBeatmap), 48 + sizeof(GlobalNamespace::IDifficultyBeatmapSet*)> __GlobalNamespace_BeatmapLevelSO_DifficultyBeatmapSizeCheck;
  static_assert(sizeof(BeatmapLevelSO::DifficultyBeatmap) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*, "", "BeatmapLevelSO/DifficultyBeatmap");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDifficulty (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_difficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_difficultyRank
// Il2CppName: get_difficultyRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_difficultyRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "get_difficultyRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_noteJumpStartBeatOffset
// Il2CppName: get_noteJumpStartBeatOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_beatmapData
// Il2CppName: get_beatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_beatmapData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "get_beatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_level
// Il2CppName: get_level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevel* (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "get_level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_parentDifficultyBeatmapSet
// Il2CppName: get_parentDifficultyBeatmapSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmapSet* (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)()>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::get_parentDifficultyBeatmapSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "get_parentDifficultyBeatmapSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::SetParents
// Il2CppName: SetParents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::*)(GlobalNamespace::IBeatmapLevel*, GlobalNamespace::IDifficultyBeatmapSet*)>(&GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap::SetParents)> {
  static const MethodInfo* get() {
    static auto* parentLevel = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevel")->byval_arg;
    static auto* parentDifficultyBeatmapSet = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmapSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*), "SetParents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentLevel, parentDifficultyBeatmapSet});
  }
};
