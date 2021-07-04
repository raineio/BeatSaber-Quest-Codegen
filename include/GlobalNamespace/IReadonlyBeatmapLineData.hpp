// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IReadonlyBeatmapLineData
  class IReadonlyBeatmapLineData {
    public:
    // Creating value type constructor for type: IReadonlyBeatmapLineData
    IReadonlyBeatmapLineData() noexcept {}
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapObjectData> get_beatmapObjectsData()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();
  }; // IReadonlyBeatmapLineData
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IReadonlyBeatmapLineData*, "", "IReadonlyBeatmapLineData");
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyBeatmapLineData::get_beatmapObjectsData
// Il2CppName: get_beatmapObjectsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData*>* (GlobalNamespace::IReadonlyBeatmapLineData::*)()>(&GlobalNamespace::IReadonlyBeatmapLineData::get_beatmapObjectsData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyBeatmapLineData*), "get_beatmapObjectsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
