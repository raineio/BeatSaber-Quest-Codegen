// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RankModel
  class RankModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::RankModel::Rank
    struct Rank;
    // Creating value type constructor for type: RankModel
    RankModel() noexcept {}
    // static public System.String GetRankName(RankModel/Rank rank)
    // Offset: 0x234B1E4
    static ::Il2CppString* GetRankName(GlobalNamespace::RankModel::Rank rank);
    // static public RankModel/Rank GetRankForScore(System.Int32 rawScore, System.Int32 modifiedScore, System.Int32 maxRawScore, System.Int32 maxModifiedScore)
    // Offset: 0x234B248
    static GlobalNamespace::RankModel::Rank GetRankForScore(int rawScore, int modifiedScore, int maxRawScore, int maxModifiedScore);
  }; // RankModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RankModel*, "", "RankModel");
// Writing MetadataGetter for method: GlobalNamespace::RankModel::GetRankName
// Il2CppName: GetRankName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::RankModel::Rank)>(&GlobalNamespace::RankModel::GetRankName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RankModel*), "GetRankName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::RankModel::Rank>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RankModel::GetRankForScore
// Il2CppName: GetRankForScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::RankModel::Rank (*)(int, int, int, int)>(&GlobalNamespace::RankModel::GetRankForScore)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RankModel*), "GetRankForScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
