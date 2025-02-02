// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataZenModeTransform
  class BeatmapDataZenModeTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataZenModeTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataZenModeTransform*, "", "BeatmapDataZenModeTransform");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataZenModeTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataZenModeTransform : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapDataZenModeTransform::$$c
    class $$c;
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x1567E38
    static ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);
  }; // BeatmapDataZenModeTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataZenModeTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(&GlobalNamespace::BeatmapDataZenModeTransform::CreateTransformedData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataZenModeTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData});
  }
};
