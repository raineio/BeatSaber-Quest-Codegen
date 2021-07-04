// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectSpawnCenter
#include "GlobalNamespace/BeatmapObjectSpawnCenter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnCenter/PlayerCountToDistance
  class BeatmapObjectSpawnCenter::PlayerCountToDistance : public ::Il2CppObject {
    public:
    // private System.Int32 _playerCount
    // Size: 0x4
    // Offset: 0x10
    int playerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _distance
    // Size: 0x4
    // Offset: 0x14
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: PlayerCountToDistance
    PlayerCountToDistance(int playerCount_ = {}, float distance_ = {}) noexcept : playerCount{playerCount_}, distance{distance_} {}
    // public System.Int32 get_playerCount()
    // Offset: 0x110A0AC
    int get_playerCount();
    // public System.Single get_distance()
    // Offset: 0x110A0B4
    float get_distance();
    // public System.Void .ctor()
    // Offset: 0x110A0BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnCenter::PlayerCountToDistance* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnCenter::PlayerCountToDistance*, creationType>()));
    }
  }; // BeatmapObjectSpawnCenter/PlayerCountToDistance
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnCenter::PlayerCountToDistance), 20 + sizeof(float)> __GlobalNamespace_BeatmapObjectSpawnCenter_PlayerCountToDistanceSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnCenter::PlayerCountToDistance) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance*, "", "BeatmapObjectSpawnCenter/PlayerCountToDistance");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::get_playerCount
// Il2CppName: get_playerCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::*)()>(&GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::get_playerCount)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance*), "get_playerCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::*)()>(&GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::get_distance)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance*), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
