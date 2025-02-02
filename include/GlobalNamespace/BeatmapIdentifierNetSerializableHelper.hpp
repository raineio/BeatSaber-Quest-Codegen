// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: PreviewDifficultyBeatmap
  class PreviewDifficultyBeatmap;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializableHelper
  class BeatmapIdentifierNetSerializableHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*, "", "BeatmapIdentifierNetSerializableHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapIdentifierNetSerializableHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BeatmapIdentifierNetSerializableHelper : public ::Il2CppObject {
    public:
    // static public BeatmapIdentifierNetSerializable GetIdentifier(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x156D570
    static ::GlobalNamespace::BeatmapIdentifierNetSerializable* GetIdentifier(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // static public System.Boolean HasIdentifier(IDifficultyBeatmap difficultyBeatmap, BeatmapIdentifierNetSerializable beatmapId)
    // Offset: 0x156D810
    static bool HasIdentifier(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId);
    // static public PreviewDifficultyBeatmap ToPreviewDifficultyBeatmap(BeatmapIdentifierNetSerializable beatmapId, BeatmapLevelsModel beatmapLevelsModel, BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection)
    // Offset: 0x156DAB8
    static ::GlobalNamespace::PreviewDifficultyBeatmap* ToPreviewDifficultyBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection);
    // static public BeatmapIdentifierNetSerializable ToIdentifier(PreviewDifficultyBeatmap previewDifficultyBeatmapLevel)
    // Offset: 0x156DD80
    static ::GlobalNamespace::BeatmapIdentifierNetSerializable* ToIdentifier(::GlobalNamespace::PreviewDifficultyBeatmap* previewDifficultyBeatmapLevel);
  }; // BeatmapIdentifierNetSerializableHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializableHelper::GetIdentifier
// Il2CppName: GetIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapIdentifierNetSerializable* (*)(::GlobalNamespace::IDifficultyBeatmap*)>(&GlobalNamespace::BeatmapIdentifierNetSerializableHelper::GetIdentifier)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializableHelper*), "GetIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializableHelper::HasIdentifier
// Il2CppName: HasIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(&GlobalNamespace::BeatmapIdentifierNetSerializableHelper::HasIdentifier)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* beatmapId = &::il2cpp_utils::GetClassFromName("", "BeatmapIdentifierNetSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializableHelper*), "HasIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap, beatmapId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToPreviewDifficultyBeatmap
// Il2CppName: ToPreviewDifficultyBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PreviewDifficultyBeatmap* (*)(::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::BeatmapCharacteristicCollectionSO*)>(&GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToPreviewDifficultyBeatmap)> {
  static const MethodInfo* get() {
    static auto* beatmapId = &::il2cpp_utils::GetClassFromName("", "BeatmapIdentifierNetSerializable")->byval_arg;
    static auto* beatmapLevelsModel = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelsModel")->byval_arg;
    static auto* beatmapCharacteristicCollection = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicCollectionSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializableHelper*), "ToPreviewDifficultyBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapId, beatmapLevelsModel, beatmapCharacteristicCollection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier
// Il2CppName: ToIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapIdentifierNetSerializable* (*)(::GlobalNamespace::PreviewDifficultyBeatmap*)>(&GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier)> {
  static const MethodInfo* get() {
    static auto* previewDifficultyBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "PreviewDifficultyBeatmap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapIdentifierNetSerializableHelper*), "ToIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previewDifficultyBeatmapLevel});
  }
};
