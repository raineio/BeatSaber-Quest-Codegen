// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RankModel
  class RankModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RankModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RankModel*, "", "RankModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RankModel
  // [TokenAttribute] Offset: FFFFFFFF
  class RankModel : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::RankModel::Rank
    struct Rank;
    // static public System.String GetRankName(RankModel/Rank rank)
    // Offset: 0x2A057B0
    static ::StringW GetRankName(::GlobalNamespace::RankModel::Rank rank);
    // static public RankModel/Rank GetRankForScore(System.Int32 multipliedScore, System.Int32 modifiedScore, System.Int32 maxMultipliedScore, System.Int32 maxModifiedScore)
    // Offset: 0x2A05814
    static ::GlobalNamespace::RankModel::Rank GetRankForScore(int multipliedScore, int modifiedScore, int maxMultipliedScore, int maxModifiedScore);
  }; // RankModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RankModel::GetRankName
// Il2CppName: GetRankName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::RankModel::Rank)>(&GlobalNamespace::RankModel::GetRankName)> {
  static const MethodInfo* get() {
    static auto* rank = &::il2cpp_utils::GetClassFromName("", "RankModel/Rank")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RankModel*), "GetRankName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rank});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RankModel::GetRankForScore
// Il2CppName: GetRankForScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RankModel::Rank (*)(int, int, int, int)>(&GlobalNamespace::RankModel::GetRankForScore)> {
  static const MethodInfo* get() {
    static auto* multipliedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxMultipliedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxModifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RankModel*), "GetRankForScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multipliedScore, modifiedScore, maxMultipliedScore, maxModifiedScore});
  }
};
