// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelFilterParams
#include "GlobalNamespace/LevelFilterParams.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Single[] bpmValues
::Array<float>* GlobalNamespace::LevelFilterParams::_get_bpmValues() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("_get_bpmValues");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<float>*>("", "LevelFilterParams", "bpmValues"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Single[] bpmValues
void GlobalNamespace::LevelFilterParams::_set_bpmValues(::Array<float>* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("_set_bpmValues");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LevelFilterParams", "bpmValues", value));
}
// Autogenerated method: LevelFilterParams.get_filterByLevelIds
bool GlobalNamespace::LevelFilterParams::get_filterByLevelIds() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterByLevelIds");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterByLevelIds", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterByLevelIds
void GlobalNamespace::LevelFilterParams::set_filterByLevelIds(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterByLevelIds");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterByLevelIds", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_beatmapLevelIds
System::Collections::Generic::HashSet_1<::Il2CppString*>* GlobalNamespace::LevelFilterParams::get_beatmapLevelIds() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_beatmapLevelIds");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<System::Collections::Generic::HashSet_1<::Il2CppString*>*>(), "get_beatmapLevelIds", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::HashSet_1<::Il2CppString*>*, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_beatmapLevelIds
void GlobalNamespace::LevelFilterParams::set_beatmapLevelIds(System::Collections::Generic::HashSet_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_beatmapLevelIds");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_beatmapLevelIds", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filterByOwned
bool GlobalNamespace::LevelFilterParams::get_filterByOwned() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterByOwned");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterByOwned", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterByOwned
void GlobalNamespace::LevelFilterParams::set_filterByOwned(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterByOwned");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterByOwned", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_searchText
::Il2CppString* GlobalNamespace::LevelFilterParams::get_searchText() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_searchText");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<::Il2CppString*>(), "get_searchText", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_searchText
void GlobalNamespace::LevelFilterParams::set_searchText(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_searchText");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_searchText", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filterByDifficulty
bool GlobalNamespace::LevelFilterParams::get_filterByDifficulty() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterByDifficulty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterByDifficulty", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterByDifficulty
void GlobalNamespace::LevelFilterParams::set_filterByDifficulty(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterByDifficulty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterByDifficulty", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filteredDifficulty
GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::LevelFilterParams::get_filteredDifficulty() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filteredDifficulty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::BeatmapDifficultyMask>(), "get_filteredDifficulty", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::BeatmapDifficultyMask, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filteredDifficulty
void GlobalNamespace::LevelFilterParams::set_filteredDifficulty(GlobalNamespace::BeatmapDifficultyMask value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filteredDifficulty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filteredDifficulty", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filterBySongPacks
bool GlobalNamespace::LevelFilterParams::get_filterBySongPacks() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterBySongPacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterBySongPacks", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterBySongPacks
void GlobalNamespace::LevelFilterParams::set_filterBySongPacks(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterBySongPacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterBySongPacks", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filteredSongPacks
GlobalNamespace::SongPackMask GlobalNamespace::LevelFilterParams::get_filteredSongPacks() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filteredSongPacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::SongPackMask>(), "get_filteredSongPacks", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SongPackMask, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filteredSongPacks
void GlobalNamespace::LevelFilterParams::set_filteredSongPacks(GlobalNamespace::SongPackMask value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filteredSongPacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filteredSongPacks", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filterByCharacteristic
bool GlobalNamespace::LevelFilterParams::get_filterByCharacteristic() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterByCharacteristic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterByCharacteristic", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterByCharacteristic
void GlobalNamespace::LevelFilterParams::set_filterByCharacteristic(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterByCharacteristic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterByCharacteristic", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filteredCharacteristic
GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::LevelFilterParams::get_filteredCharacteristic() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filteredCharacteristic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<GlobalNamespace::BeatmapCharacteristicSO*>(), "get_filteredCharacteristic", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::BeatmapCharacteristicSO*, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filteredCharacteristic
void GlobalNamespace::LevelFilterParams::set_filteredCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filteredCharacteristic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filteredCharacteristic", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filterByNotPlayedYet
bool GlobalNamespace::LevelFilterParams::get_filterByNotPlayedYet() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterByNotPlayedYet");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterByNotPlayedYet", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterByNotPlayedYet
void GlobalNamespace::LevelFilterParams::set_filterByNotPlayedYet(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterByNotPlayedYet");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterByNotPlayedYet", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filterByMinBpm
bool GlobalNamespace::LevelFilterParams::get_filterByMinBpm() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterByMinBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterByMinBpm", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterByMinBpm
void GlobalNamespace::LevelFilterParams::set_filterByMinBpm(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterByMinBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterByMinBpm", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filteredMinBpm
float GlobalNamespace::LevelFilterParams::get_filteredMinBpm() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filteredMinBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_filteredMinBpm", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filteredMinBpm
void GlobalNamespace::LevelFilterParams::set_filteredMinBpm(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filteredMinBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filteredMinBpm", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filterByMaxBpm
bool GlobalNamespace::LevelFilterParams::get_filterByMaxBpm() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filterByMaxBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "get_filterByMaxBpm", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filterByMaxBpm
void GlobalNamespace::LevelFilterParams::set_filterByMaxBpm(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filterByMaxBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filterByMaxBpm", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams.get_filteredMaxBpm
float GlobalNamespace::LevelFilterParams::get_filteredMaxBpm() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("get_filteredMaxBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<float>(), "get_filteredMaxBpm", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
}
// Autogenerated method: LevelFilterParams.set_filteredMaxBpm
void GlobalNamespace::LevelFilterParams::set_filteredMaxBpm(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("set_filteredMaxBpm");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "set_filteredMaxBpm", {}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: LevelFilterParams..ctor
GlobalNamespace::LevelFilterParams* GlobalNamespace::LevelFilterParams::New_ctor(bool filterByLevelIds, System::Collections::Generic::HashSet_1<::Il2CppString*>* beatmapLevelIds, ::Il2CppString* searchText, bool filterByOwned, bool filterByDifficulty, GlobalNamespace::BeatmapDifficultyMask filteredDifficulty, bool filterByCharacteristic, GlobalNamespace::BeatmapCharacteristicSO* filteredCharacteristic, bool filterBySongPacks, GlobalNamespace::SongPackMask filteredSongPacks, bool filterByNotPlayedYet, bool filterByMinBpm, float filteredMinBpm, bool filterByMaxBpm, float filteredMaxBpm) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LevelFilterParams*>(filterByLevelIds, beatmapLevelIds, searchText, filterByOwned, filterByDifficulty, filteredDifficulty, filterByCharacteristic, filteredCharacteristic, filterBySongPacks, filteredSongPacks, filterByNotPlayedYet, filterByMinBpm, filteredMinBpm, filterByMaxBpm, filteredMaxBpm));
}
// Autogenerated method: LevelFilterParams.IsWithoutFilter
bool GlobalNamespace::LevelFilterParams::IsWithoutFilter(bool ignoreFilterBySongs) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("IsWithoutFilter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "IsWithoutFilter", {}, ::il2cpp_utils::ExtractTypes(ignoreFilterBySongs)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, ignoreFilterBySongs);
}
// Autogenerated method: LevelFilterParams..ctor
GlobalNamespace::LevelFilterParams* GlobalNamespace::LevelFilterParams::New_ctor(System::Collections::Generic::HashSet_1<::Il2CppString*>* beatmapLevelIds) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LevelFilterParams*>(beatmapLevelIds));
}
// Autogenerated method: LevelFilterParams..ctor
GlobalNamespace::LevelFilterParams* GlobalNamespace::LevelFilterParams::New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LevelFilterParams*>(beatmapCharacteristic));
}
// Autogenerated method: LevelFilterParams.NoFilter
GlobalNamespace::LevelFilterParams* GlobalNamespace::LevelFilterParams::NoFilter() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("NoFilter");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "LevelFilterParams", il2cpp_utils::NoArgClass<GlobalNamespace::LevelFilterParams*>(), "NoFilter", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::LevelFilterParams*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: LevelFilterParams.ByBeatmapLevelIds
GlobalNamespace::LevelFilterParams* GlobalNamespace::LevelFilterParams::ByBeatmapLevelIds(System::Collections::Generic::HashSet_1<::Il2CppString*>* beatmapLevelIds) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("ByBeatmapLevelIds");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "LevelFilterParams", il2cpp_utils::NoArgClass<GlobalNamespace::LevelFilterParams*>(), "ByBeatmapLevelIds", {}, ::il2cpp_utils::ExtractTypes(beatmapLevelIds)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::LevelFilterParams*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, beatmapLevelIds);
}
// Autogenerated method: LevelFilterParams.ByBeatmapCharacteristic
GlobalNamespace::LevelFilterParams* GlobalNamespace::LevelFilterParams::ByBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext("ByBeatmapCharacteristic");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "LevelFilterParams", il2cpp_utils::NoArgClass<GlobalNamespace::LevelFilterParams*>(), "ByBeatmapCharacteristic", {}, ::il2cpp_utils::ExtractTypes(beatmapCharacteristic)));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::LevelFilterParams*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, beatmapCharacteristic);
}
// Autogenerated method: LevelFilterParams..cctor
void GlobalNamespace::LevelFilterParams::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("", "LevelFilterParams", il2cpp_utils::NoArgClass<void>(), ".cctor", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: LevelFilterParams..ctor
GlobalNamespace::LevelFilterParams* GlobalNamespace::LevelFilterParams::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LevelFilterParams").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<LevelFilterParams*>());
}