// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FilteredBeatmapLevel
#include "GlobalNamespace/FilteredBeatmapLevel.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData*, "", "FilteredBeatmapLevel/FilteredBeatmapLevelData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FilteredBeatmapLevel/FilteredBeatmapLevelData
  // [TokenAttribute] Offset: FFFFFFFF
  class FilteredBeatmapLevel::FilteredBeatmapLevelData : public ::Il2CppObject/*, public ::GlobalNamespace::IBeatmapLevelData*/ {
    public:
    public:
    // private readonly System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmapSet> <difficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*) == 0x8);
    // private readonly IBeatmapLevelData _beatmapLevelData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevelData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevelData
    operator ::GlobalNamespace::IBeatmapLevelData() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // Creating interface conversion operator: i_IBeatmapLevelData
    inline ::GlobalNamespace::IBeatmapLevelData* i_IBeatmapLevelData() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatmapLevelData*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmapSet> <difficultyBeatmapSets>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*& dyn_$difficultyBeatmapSets$k__BackingField();
    // Get instance field reference: private readonly IBeatmapLevelData _beatmapLevelData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapLevelData*& dyn__beatmapLevelData();
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x139E24C
    ::UnityEngine::AudioClip* get_audioClip();
    // public System.Collections.Generic.IReadOnlyList`1<IDifficultyBeatmapSet> get_difficultyBeatmapSets()
    // Offset: 0x139E2FC
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
    // public System.Void .ctor(IBeatmapLevelData beatmapLevelData, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.Collections.Generic.HashSet`1<BeatmapCharacteristicSO> notAllowedCharacteristics)
    // Offset: 0x139D97C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredBeatmapLevel::FilteredBeatmapLevelData* New_ctor(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredBeatmapLevel::FilteredBeatmapLevelData*, creationType>(beatmapLevelData, allowedBeatmapDifficultyMask, notAllowedCharacteristics)));
    }
  }; // FilteredBeatmapLevel/FilteredBeatmapLevelData
  #pragma pack(pop)
  static check_size<sizeof(FilteredBeatmapLevel::FilteredBeatmapLevelData), 24 + sizeof(::GlobalNamespace::IBeatmapLevelData*)> __GlobalNamespace_FilteredBeatmapLevel_FilteredBeatmapLevelDataSizeCheck;
  static_assert(sizeof(FilteredBeatmapLevel::FilteredBeatmapLevelData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::get_audioClip
// Il2CppName: get_audioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::*)()>(&GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::get_audioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData*), "get_audioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::get_difficultyBeatmapSets
// Il2CppName: get_difficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* (GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::*)()>(&GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::get_difficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData*), "get_difficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
