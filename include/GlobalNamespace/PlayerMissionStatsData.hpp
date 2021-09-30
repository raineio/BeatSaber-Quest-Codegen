// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: PlayerMissionStatsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerMissionStatsData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private System.String _missionId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* missionId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _cleared
    // Size: 0x1
    // Offset: 0x18
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String _missionId
    ::Il2CppString*& dyn__missionId();
    // Get instance field reference: private System.Boolean _cleared
    bool& dyn__cleared();
    // public System.String get_missionId()
    // Offset: 0x12B9FC4
    ::Il2CppString* get_missionId();
    // public System.Boolean get_cleared()
    // Offset: 0x12B9FCC
    bool get_cleared();
    // public System.Void set_cleared(System.Boolean value)
    // Offset: 0x12B9FD4
    void set_cleared(bool value);
    // public System.Void .ctor(System.String missionId, System.Boolean cleared)
    // Offset: 0x12B5768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerMissionStatsData* New_ctor(::Il2CppString* missionId, bool cleared) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerMissionStatsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerMissionStatsData*, creationType>(missionId, cleared)));
    }
  }; // PlayerMissionStatsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerMissionStatsData), 24 + sizeof(bool)> __GlobalNamespace_PlayerMissionStatsDataSizeCheck;
  static_assert(sizeof(PlayerMissionStatsData) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerMissionStatsData*, "", "PlayerMissionStatsData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerMissionStatsData::get_missionId
// Il2CppName: get_missionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayerMissionStatsData::*)()>(&GlobalNamespace::PlayerMissionStatsData::get_missionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerMissionStatsData*), "get_missionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerMissionStatsData::get_cleared
// Il2CppName: get_cleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerMissionStatsData::*)()>(&GlobalNamespace::PlayerMissionStatsData::get_cleared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerMissionStatsData*), "get_cleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerMissionStatsData::set_cleared
// Il2CppName: set_cleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerMissionStatsData::*)(bool)>(&GlobalNamespace::PlayerMissionStatsData::set_cleared)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerMissionStatsData*), "set_cleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerMissionStatsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
