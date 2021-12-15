// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelInfoSaveData
#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DifficultyBeatmap
  class DifficultyBeatmap;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*, "", "StandardLevelInfoSaveData/DifficultyBeatmap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData/DifficultyBeatmap
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelInfoSaveData::DifficultyBeatmap : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _difficulty
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* difficulty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _difficultyRank
    // Size: 0x4
    // Offset: 0x18
    int difficultyRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: difficultyRank and: beatmapFilename
    char __padding1[0x4] = {};
    // private System.String _beatmapFilename
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* beatmapFilename;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x28
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x2C
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.String _difficulty
    ::Il2CppString*& dyn__difficulty();
    // Get instance field reference: private System.Int32 _difficultyRank
    int& dyn__difficultyRank();
    // Get instance field reference: private System.String _beatmapFilename
    ::Il2CppString*& dyn__beatmapFilename();
    // Get instance field reference: private System.Single _noteJumpMovementSpeed
    float& dyn__noteJumpMovementSpeed();
    // Get instance field reference: private System.Single _noteJumpStartBeatOffset
    float& dyn__noteJumpStartBeatOffset();
    // public System.String get_difficulty()
    // Offset: 0x1222C74
    ::Il2CppString* get_difficulty();
    // public System.Int32 get_difficultyRank()
    // Offset: 0x1222C7C
    int get_difficultyRank();
    // public System.String get_beatmapFilename()
    // Offset: 0x1222C84
    ::Il2CppString* get_beatmapFilename();
    // public System.Single get_noteJumpMovementSpeed()
    // Offset: 0x1222C8C
    float get_noteJumpMovementSpeed();
    // public System.Single get_noteJumpStartBeatOffset()
    // Offset: 0x1222C94
    float get_noteJumpStartBeatOffset();
    // public System.Void .ctor(System.String difficultyName, System.Int32 difficultyRank, System.String beatmapFilename, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset)
    // Offset: 0x1222BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData::DifficultyBeatmap* New_ctor(::Il2CppString* difficultyName, int difficultyRank, ::Il2CppString* beatmapFilename, float noteJumpMovementSpeed, float noteJumpStartBeatOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData::DifficultyBeatmap*, creationType>(difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset)));
    }
  }; // StandardLevelInfoSaveData/DifficultyBeatmap
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData::DifficultyBeatmap), 44 + sizeof(float)> __GlobalNamespace_StandardLevelInfoSaveData_DifficultyBeatmapSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData::DifficultyBeatmap) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_difficulty
// Il2CppName: get_difficulty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_difficulty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*), "get_difficulty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_difficultyRank
// Il2CppName: get_difficultyRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_difficultyRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*), "get_difficultyRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_beatmapFilename
// Il2CppName: get_beatmapFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_beatmapFilename)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*), "get_beatmapFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_noteJumpMovementSpeed
// Il2CppName: get_noteJumpMovementSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_noteJumpMovementSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*), "get_noteJumpMovementSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_noteJumpStartBeatOffset
// Il2CppName: get_noteJumpStartBeatOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*), "get_noteJumpStartBeatOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
