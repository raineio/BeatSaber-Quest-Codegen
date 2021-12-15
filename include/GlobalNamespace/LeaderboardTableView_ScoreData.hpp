// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardTableView
#include "GlobalNamespace/LeaderboardTableView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::LeaderboardTableView::ScoreData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableView::ScoreData*, "", "LeaderboardTableView/ScoreData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardTableView/ScoreData
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardTableView::ScoreData : public ::Il2CppObject {
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
    // private System.Int32 <score>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: score and: playerName
    char __padding0[0x4] = {};
    // private System.String <playerName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 <rank>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <fullCombo>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool fullCombo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int32 <score>k__BackingField
    int& dyn_$score$k__BackingField();
    // Get instance field reference: private System.String <playerName>k__BackingField
    ::Il2CppString*& dyn_$playerName$k__BackingField();
    // Get instance field reference: private System.Int32 <rank>k__BackingField
    int& dyn_$rank$k__BackingField();
    // Get instance field reference: private System.Boolean <fullCombo>k__BackingField
    bool& dyn_$fullCombo$k__BackingField();
    // public System.Int32 get_score()
    // Offset: 0x11A3970
    int get_score();
    // private System.Void set_score(System.Int32 value)
    // Offset: 0x11A3978
    void set_score(int value);
    // public System.String get_playerName()
    // Offset: 0x11A3980
    ::Il2CppString* get_playerName();
    // private System.Void set_playerName(System.String value)
    // Offset: 0x11A3988
    void set_playerName(::Il2CppString* value);
    // public System.Int32 get_rank()
    // Offset: 0x11A3990
    int get_rank();
    // private System.Void set_rank(System.Int32 value)
    // Offset: 0x11A3998
    void set_rank(int value);
    // public System.Boolean get_fullCombo()
    // Offset: 0x11A39A0
    bool get_fullCombo();
    // private System.Void set_fullCombo(System.Boolean value)
    // Offset: 0x11A39A8
    void set_fullCombo(bool value);
    // public System.Void .ctor(System.Int32 score, System.String playerName, System.Int32 rank, System.Boolean fullCombo)
    // Offset: 0x11A39B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardTableView::ScoreData* New_ctor(int score, ::Il2CppString* playerName, int rank, bool fullCombo) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardTableView::ScoreData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardTableView::ScoreData*, creationType>(score, playerName, rank, fullCombo)));
    }
  }; // LeaderboardTableView/ScoreData
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardTableView::ScoreData), 36 + sizeof(bool)> __GlobalNamespace_LeaderboardTableView_ScoreDataSizeCheck;
  static_assert(sizeof(LeaderboardTableView::ScoreData) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::get_score
// Il2CppName: get_score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardTableView::ScoreData::*)()>(&GlobalNamespace::LeaderboardTableView::ScoreData::get_score)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "get_score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::set_score
// Il2CppName: set_score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableView::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardTableView::ScoreData::set_score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "set_score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::get_playerName
// Il2CppName: get_playerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::LeaderboardTableView::ScoreData::*)()>(&GlobalNamespace::LeaderboardTableView::ScoreData::get_playerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "get_playerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::set_playerName
// Il2CppName: set_playerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableView::ScoreData::*)(::Il2CppString*)>(&GlobalNamespace::LeaderboardTableView::ScoreData::set_playerName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "set_playerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::get_rank
// Il2CppName: get_rank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LeaderboardTableView::ScoreData::*)()>(&GlobalNamespace::LeaderboardTableView::ScoreData::get_rank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "get_rank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::set_rank
// Il2CppName: set_rank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableView::ScoreData::*)(int)>(&GlobalNamespace::LeaderboardTableView::ScoreData::set_rank)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "set_rank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::get_fullCombo
// Il2CppName: get_fullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LeaderboardTableView::ScoreData::*)()>(&GlobalNamespace::LeaderboardTableView::ScoreData::get_fullCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "get_fullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::set_fullCombo
// Il2CppName: set_fullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableView::ScoreData::*)(bool)>(&GlobalNamespace::LeaderboardTableView::ScoreData::set_fullCombo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableView::ScoreData*), "set_fullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableView::ScoreData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
