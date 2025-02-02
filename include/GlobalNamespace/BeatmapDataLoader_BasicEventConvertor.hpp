// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapDataLoader/BeatmapDataItemConvertor`3
#include "GlobalNamespace/BeatmapDataLoader_BeatmapDataItemConvertor_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
  // Forward declaring type: BasicBeatmapEventType
  struct BasicBeatmapEventType;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::BasicEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::BasicEventConvertor*, "", "BeatmapDataLoader/BasicEventConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/BasicEventConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::BasicEventConvertor : public ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData*, ::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*, ::GlobalNamespace::BasicBeatmapEventData*> {
    public:
    public:
    // private readonly BeatmapDataLoader/SpecialEventsFilter _specialEventsFilter
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter* specialEventsFilter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter*) == 0x8);
    public:
    // Deleting conversion operator: operator ::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor*
    constexpr operator ::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor*() const noexcept = delete;
    // Get instance field reference: private readonly BeatmapDataLoader/SpecialEventsFilter _specialEventsFilter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter*& dyn__specialEventsFilter();
    // public System.Void .ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor, BeatmapDataLoader/SpecialEventsFilter specialEventsFilter)
    // Offset: 0x13B6790
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::BasicEventConvertor* New_ctor(::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter* specialEventsFilter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::BasicEventConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::BasicEventConvertor*, creationType>(bpmTimeProcessor, specialEventsFilter)));
    }
    // protected BasicBeatmapEventData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventData basicEventSaveData)
    // Offset: 0x13B7164
    ::GlobalNamespace::BasicBeatmapEventData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData* basicEventSaveData);
    // static private BasicBeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType beatmapEventType)
    // Offset: 0x13B72A4
    static ::GlobalNamespace::BasicBeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType beatmapEventType);
  }; // BeatmapDataLoader/BasicEventConvertor
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::BasicEventConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::BasicEventConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventData* (GlobalNamespace::BeatmapDataLoader::BasicEventConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*)>(&GlobalNamespace::BeatmapDataLoader::BasicEventConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* basicEventSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::BasicEventConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicEventSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::BasicEventConvertor::ConvertFromBeatmapSaveDataBeatmapEventType
// Il2CppName: ConvertFromBeatmapSaveDataBeatmapEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType)>(&GlobalNamespace::BeatmapDataLoader::BasicEventConvertor::ConvertFromBeatmapSaveDataBeatmapEventType)> {
  static const MethodInfo* get() {
    static auto* beatmapEventType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/BeatmapEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::BasicEventConvertor*), "ConvertFromBeatmapSaveDataBeatmapEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventType});
  }
};
