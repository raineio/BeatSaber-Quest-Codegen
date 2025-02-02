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
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor*, "", "BeatmapDataLoader/ColorNoteConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/ColorNoteConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::ColorNoteConvertor : public ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData*, ::GlobalNamespace::NoteData*> {
    public:
    // protected NoteData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorNoteData colorNoteSaveData)
    // Offset: 0x13B77B8
    ::GlobalNamespace::NoteData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData* colorNoteSaveData);
    // public System.Void .ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    // Offset: 0x13B6488
    // Implemented from: BeatmapDataLoader/BeatmapDataItemConvertor`3
    // Base method: System.Void BeatmapDataItemConvertor_3::.ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::ColorNoteConvertor* New_ctor(::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor* bpmTimeProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::ColorNoteConvertor*, creationType>(bpmTimeProcessor)));
    }
  }; // BeatmapDataLoader/ColorNoteConvertor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData* (GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::ColorNoteData*)>(&GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* colorNoteSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/ColorNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorNoteSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorNoteConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
