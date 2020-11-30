// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapIdentifierNetSerializableHelper
#include "GlobalNamespace/BeatmapIdentifierNetSerializableHelper.hpp"
// Including type: BeatmapIdentifierNetSerializable
#include "GlobalNamespace/BeatmapIdentifierNetSerializable.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapIdentifierNetSerializableHelper.GetIdentifier
GlobalNamespace::BeatmapIdentifierNetSerializable* GlobalNamespace::BeatmapIdentifierNetSerializableHelper::GetIdentifier(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapIdentifierNetSerializableHelper").WithContext("GetIdentifier");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "BeatmapIdentifierNetSerializableHelper", il2cpp_utils::NoArgClass<GlobalNamespace::BeatmapIdentifierNetSerializable*>(), "GetIdentifier", {}, ::il2cpp_utils::ExtractTypes(difficultyBeatmap)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::BeatmapIdentifierNetSerializable*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, difficultyBeatmap);
}
// Autogenerated method: BeatmapIdentifierNetSerializableHelper.HasIdentifier
bool GlobalNamespace::BeatmapIdentifierNetSerializableHelper::HasIdentifier(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapIdentifierNetSerializableHelper").WithContext("HasIdentifier");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "BeatmapIdentifierNetSerializableHelper", il2cpp_utils::NoArgClass<bool>(), "HasIdentifier", {}, ::il2cpp_utils::ExtractTypes(difficultyBeatmap, beatmapId)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, difficultyBeatmap, beatmapId);
}