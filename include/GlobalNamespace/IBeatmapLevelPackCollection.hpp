// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IBeatmapLevelPackCollection
  class IBeatmapLevelPackCollection {
    public:
    // Creating value type constructor for type: IBeatmapLevelPackCollection
    IBeatmapLevelPackCollection() noexcept {}
    // public IBeatmapLevelPack[] get_beatmapLevelPacks()
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* get_beatmapLevelPacks();
  }; // IBeatmapLevelPackCollection
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapLevelPackCollection*, "", "IBeatmapLevelPackCollection");
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapLevelPackCollection::get_beatmapLevelPacks
// Il2CppName: get_beatmapLevelPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::IBeatmapLevelPack*>* (GlobalNamespace::IBeatmapLevelPackCollection::*)()>(&GlobalNamespace::IBeatmapLevelPackCollection::get_beatmapLevelPacks)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapLevelPackCollection*), "get_beatmapLevelPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
