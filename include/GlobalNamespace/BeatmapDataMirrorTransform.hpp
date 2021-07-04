// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataMirrorTransform
  class BeatmapDataMirrorTransform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataMirrorTransform
    BeatmapDataMirrorTransform() noexcept {}
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x11C47FC
    static GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // static private System.Void MirrorTransformBeatmapObject(BeatmapObjectData beatmapObjectData, System.Int32 beatmapLineCount)
    // Offset: 0x11C51EC
    static void MirrorTransformBeatmapObject(GlobalNamespace::BeatmapObjectData* beatmapObjectData, int beatmapLineCount);
    // public System.Void .ctor()
    // Offset: 0x11C5208
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataMirrorTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataMirrorTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataMirrorTransform*, creationType>()));
    }
  }; // BeatmapDataMirrorTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataMirrorTransform*, "", "BeatmapDataMirrorTransform");
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataMirrorTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IReadonlyBeatmapData* (*)(GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::BeatmapDataMirrorTransform::CreateTransformedData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataMirrorTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IReadonlyBeatmapData*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataMirrorTransform::MirrorTransformBeatmapObject
// Il2CppName: MirrorTransformBeatmapObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::BeatmapObjectData*, int)>(&GlobalNamespace::BeatmapDataMirrorTransform::MirrorTransformBeatmapObject)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataMirrorTransform*), "MirrorTransformBeatmapObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapObjectData*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataMirrorTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
