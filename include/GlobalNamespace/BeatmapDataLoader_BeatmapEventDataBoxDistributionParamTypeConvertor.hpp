// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapEventDataBox
#include "GlobalNamespace/BeatmapEventDataBox.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EventBox.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor*, "", "BeatmapDataLoader/BeatmapEventDataBoxDistributionParamTypeConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader/BeatmapEventDataBoxDistributionParamTypeConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor : public ::Il2CppObject {
    public:
    // static public BeatmapEventDataBox/DistributionParamType Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType distributionParamType)
    // Offset: 0x1352FE0
    static ::GlobalNamespace::BeatmapEventDataBox::DistributionParamType Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType distributionParamType);
  }; // BeatmapDataLoader/BeatmapEventDataBoxDistributionParamTypeConvertor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBox::DistributionParamType (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType)>(&GlobalNamespace::BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* distributionParamType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/EventBox/DistributionParamType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::BeatmapEventDataBoxDistributionParamTypeConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distributionParamType});
  }
};
