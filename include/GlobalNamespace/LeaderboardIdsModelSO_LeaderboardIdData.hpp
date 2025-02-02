// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardIdsModelSO
#include "GlobalNamespace/LeaderboardIdsModelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData*, "", "LeaderboardIdsModelSO/LeaderboardIdData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardIdsModelSO/LeaderboardIdData
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardIdsModelSO::LeaderboardIdData : public ::Il2CppObject {
    public:
    public:
    // private System.String _difficultyBeatmapId
    // Size: 0x8
    // Offset: 0x10
    ::StringW difficultyBeatmapId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _platformLeaderboardId
    // Size: 0x8
    // Offset: 0x18
    ::StringW platformLeaderboardId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _difficultyBeatmapId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__difficultyBeatmapId();
    // Get instance field reference: private System.String _platformLeaderboardId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__platformLeaderboardId();
    // public System.String get_platformLeaderboardId()
    // Offset: 0x13D81E4
    ::StringW get_platformLeaderboardId();
    // public System.String get_difficultyBeatmapId()
    // Offset: 0x13D81EC
    ::StringW get_difficultyBeatmapId();
    // public System.Void .ctor(System.String difficultyBeatmapId, System.String platformLeaderboardId)
    // Offset: 0x13D81F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardIdsModelSO::LeaderboardIdData* New_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardIdsModelSO::LeaderboardIdData*, creationType>(difficultyBeatmapId, platformLeaderboardId)));
    }
  }; // LeaderboardIdsModelSO/LeaderboardIdData
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardIdsModelSO::LeaderboardIdData), 24 + sizeof(::StringW)> __GlobalNamespace_LeaderboardIdsModelSO_LeaderboardIdDataSizeCheck;
  static_assert(sizeof(LeaderboardIdsModelSO::LeaderboardIdData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::get_platformLeaderboardId
// Il2CppName: get_platformLeaderboardId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::*)()>(&GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::get_platformLeaderboardId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData*), "get_platformLeaderboardId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::get_difficultyBeatmapId
// Il2CppName: get_difficultyBeatmapId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::*)()>(&GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::get_difficultyBeatmapId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData*), "get_difficultyBeatmapId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
