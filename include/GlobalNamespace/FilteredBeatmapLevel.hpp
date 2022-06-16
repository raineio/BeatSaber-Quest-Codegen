// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: IAssetSongPreviewAudioClipProvider
#include "GlobalNamespace/IAssetSongPreviewAudioClipProvider.hpp"
// Including type: IFilePathSongPreviewAudioClipProvider
#include "GlobalNamespace/IFilePathSongPreviewAudioClipProvider.hpp"
// Including type: IAssetSongAudioClipProvider
#include "GlobalNamespace/IAssetSongAudioClipProvider.hpp"
// Including type: IFilePathSongAudioClipProvider
#include "GlobalNamespace/IFilePathSongAudioClipProvider.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FilteredBeatmapLevel
  class FilteredBeatmapLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FilteredBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FilteredBeatmapLevel*, "", "FilteredBeatmapLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FilteredBeatmapLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class FilteredBeatmapLevel : public ::Il2CppObject/*, public ::GlobalNamespace::IBeatmapLevel, public ::GlobalNamespace::IAssetSongPreviewAudioClipProvider, public ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider, public ::GlobalNamespace::IAssetSongAudioClipProvider, public ::GlobalNamespace::IFilePathSongAudioClipProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::FilteredBeatmapLevel::FilteredBeatmapLevelData
    class FilteredBeatmapLevelData;
    public:
    // private readonly System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> <previewDifficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // private readonly IBeatmapLevelData <beatmapLevelData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevelData*) == 0x8);
    // private readonly IBeatmapLevel _beatmapLevel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IBeatmapLevel* beatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapLevel*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevel
    operator ::GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Creating interface conversion operator: i_IBeatmapLevel
    inline ::GlobalNamespace::IBeatmapLevel* i_IBeatmapLevel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider
    operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: i_IAssetSongPreviewAudioClipProvider
    inline ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* i_IAssetSongPreviewAudioClipProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider
    operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: i_IFilePathSongPreviewAudioClipProvider
    inline ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* i_IFilePathSongPreviewAudioClipProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IAssetSongAudioClipProvider
    operator ::GlobalNamespace::IAssetSongAudioClipProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAssetSongAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: i_IAssetSongAudioClipProvider
    inline ::GlobalNamespace::IAssetSongAudioClipProvider* i_IAssetSongAudioClipProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IAssetSongAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IFilePathSongAudioClipProvider
    operator ::GlobalNamespace::IFilePathSongAudioClipProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: i_IFilePathSongAudioClipProvider
    inline ::GlobalNamespace::IFilePathSongAudioClipProvider* i_IFilePathSongAudioClipProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> <previewDifficultyBeatmapSets>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& dyn_$previewDifficultyBeatmapSets$k__BackingField();
    // Get instance field reference: private readonly IBeatmapLevelData <beatmapLevelData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapLevelData*& dyn_$beatmapLevelData$k__BackingField();
    // Get instance field reference: private readonly IBeatmapLevel _beatmapLevel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapLevel*& dyn__beatmapLevel();
    // public System.String get_levelID()
    // Offset: 0x139E0C8
    ::StringW get_levelID();
    // public System.String get_songName()
    // Offset: 0x139E178
    ::StringW get_songName();
    // public System.String get_songSubName()
    // Offset: 0x139E22C
    ::StringW get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x139E2E0
    ::StringW get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x139E394
    ::StringW get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x139E448
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x139E4FC
    float get_songTimeOffset();
    // public System.Single get_shuffle()
    // Offset: 0x139E5B0
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x139E664
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x139E718
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x139E7CC
    float get_previewDuration();
    // public System.Single get_songDuration()
    // Offset: 0x139E880
    float get_songDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x139E934
    ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x139E9E8
    ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets()
    // Offset: 0x139EA9C
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public UnityEngine.AudioClip get_songPreviewAudioClip()
    // Offset: 0x139EAA4
    ::UnityEngine::AudioClip* get_songPreviewAudioClip();
    // public UnityEngine.AudioClip get_songAudioClip()
    // Offset: 0x139EB68
    ::UnityEngine::AudioClip* get_songAudioClip();
    // public System.String get_songPreviewAudioClipPath()
    // Offset: 0x139EC2C
    ::StringW get_songPreviewAudioClipPath();
    // public System.String get_songAudioClipPath()
    // Offset: 0x139ED04
    ::StringW get_songAudioClipPath();
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x139EEA0
    ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.Boolean get_isEmpty()
    // Offset: 0x139EEA8
    bool get_isEmpty();
    // public System.Void .ctor(IBeatmapLevel beatmapLevel, BeatmapDifficultyMask allowedBeatmapDifficultyMask, System.Collections.Generic.HashSet`1<BeatmapCharacteristicSO> notAllowedCharacteristics)
    // Offset: 0x139EFD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FilteredBeatmapLevel* New_ctor(::GlobalNamespace::IBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FilteredBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FilteredBeatmapLevel*, creationType>(beatmapLevel, allowedBeatmapDifficultyMask, notAllowedCharacteristics)));
    }
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x139EDDC
    ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);
  }; // FilteredBeatmapLevel
  #pragma pack(pop)
  static check_size<sizeof(FilteredBeatmapLevel), 32 + sizeof(::GlobalNamespace::IBeatmapLevel*)> __GlobalNamespace_FilteredBeatmapLevelSizeCheck;
  static_assert(sizeof(FilteredBeatmapLevel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songSubName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_levelAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_shuffle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_shufflePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_previewStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_previewDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songDuration
// Il2CppName: get_songDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_environmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_allDirectionsEnvironmentInfo
// Il2CppName: get_allDirectionsEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_allDirectionsEnvironmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_previewDifficultyBeatmapSets
// Il2CppName: get_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_previewDifficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songPreviewAudioClip
// Il2CppName: get_songPreviewAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songPreviewAudioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songPreviewAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songAudioClip
// Il2CppName: get_songAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songAudioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songPreviewAudioClipPath
// Il2CppName: get_songPreviewAudioClipPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songPreviewAudioClipPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songPreviewAudioClipPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_songAudioClipPath
// Il2CppName: get_songAudioClipPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_songAudioClipPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_songAudioClipPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_beatmapLevelData
// Il2CppName: get_beatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_beatmapLevelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_beatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::get_isEmpty
// Il2CppName: get_isEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::FilteredBeatmapLevel::*)()>(&GlobalNamespace::FilteredBeatmapLevel::get_isEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FilteredBeatmapLevel::GetCoverImageAsync
// Il2CppName: GetCoverImageAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (GlobalNamespace::FilteredBeatmapLevel::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::FilteredBeatmapLevel::GetCoverImageAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FilteredBeatmapLevel*), "GetCoverImageAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
