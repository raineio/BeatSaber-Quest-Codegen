// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::PreviewDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewDifficultyBeatmapSet*, "", "PreviewDifficultyBeatmapSet");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PreviewDifficultyBeatmapSet
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviewDifficultyBeatmapSet : public ::Il2CppObject {
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
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty[] _beatmapDifficulties
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<GlobalNamespace::BeatmapDifficulty> beatmapDifficulties;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BeatmapDifficulty>) == 0x8);
    public:
    // Get instance field reference: private BeatmapCharacteristicSO _beatmapCharacteristic
    GlobalNamespace::BeatmapCharacteristicSO*& dyn__beatmapCharacteristic();
    // Get instance field reference: private BeatmapDifficulty[] _beatmapDifficulties
    ::ArrayW<GlobalNamespace::BeatmapDifficulty>& dyn__beatmapDifficulties();
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x11B1190
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public BeatmapDifficulty[] get_beatmapDifficulties()
    // Offset: 0x11B1198
    ::ArrayW<GlobalNamespace::BeatmapDifficulty> get_beatmapDifficulties();
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty[] beatmapDifficulties)
    // Offset: 0x11B11A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewDifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::ArrayW<GlobalNamespace::BeatmapDifficulty> beatmapDifficulties) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PreviewDifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewDifficultyBeatmapSet*, creationType>(beatmapCharacteristic, beatmapDifficulties)));
    }
  }; // PreviewDifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(PreviewDifficultyBeatmapSet), 24 + sizeof(::ArrayW<GlobalNamespace::BeatmapDifficulty>)> __GlobalNamespace_PreviewDifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(PreviewDifficultyBeatmapSet) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic
// Il2CppName: get_beatmapCharacteristic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO* (GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(&GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmapSet*), "get_beatmapCharacteristic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties
// Il2CppName: get_beatmapDifficulties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::BeatmapDifficulty> (GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(&GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewDifficultyBeatmapSet*), "get_beatmapDifficulties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewDifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
