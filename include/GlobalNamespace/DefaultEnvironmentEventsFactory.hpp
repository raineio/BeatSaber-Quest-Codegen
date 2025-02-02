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
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: BeatmapEventDataBoxGroupLists
  class BeatmapEventDataBoxGroupLists;
  // Forward declaring type: DefaultEnvironmentEvents
  class DefaultEnvironmentEvents;
  // Forward declaring type: EnvironmentLightGroups
  class EnvironmentLightGroups;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DefaultEnvironmentEventsFactory
  class DefaultEnvironmentEventsFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEventsFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEventsFactory*, "", "DefaultEnvironmentEventsFactory");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DefaultEnvironmentEventsFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultEnvironmentEventsFactory : public ::Il2CppObject {
    public:
    // static public System.Void InsertDefaultEnvironmentEvents(BeatmapData beatmapData, BeatmapEventDataBoxGroupLists beatmapEventDataBoxGroupLists, DefaultEnvironmentEvents defaultEnvironmentEvents, EnvironmentLightGroups environmentLightGroups)
    // Offset: 0x1446A38
    static void InsertDefaultEnvironmentEvents(::GlobalNamespace::BeatmapData* beatmapData, ::GlobalNamespace::BeatmapEventDataBoxGroupLists* beatmapEventDataBoxGroupLists, ::GlobalNamespace::DefaultEnvironmentEvents* defaultEnvironmentEvents, ::GlobalNamespace::EnvironmentLightGroups* environmentLightGroups);
  }; // DefaultEnvironmentEventsFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEnvironmentEvents
// Il2CppName: InsertDefaultEnvironmentEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::GlobalNamespace::BeatmapEventDataBoxGroupLists*, ::GlobalNamespace::DefaultEnvironmentEvents*, ::GlobalNamespace::EnvironmentLightGroups*)>(&GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEnvironmentEvents)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "BeatmapData")->byval_arg;
    static auto* beatmapEventDataBoxGroupLists = &::il2cpp_utils::GetClassFromName("", "BeatmapEventDataBoxGroupLists")->byval_arg;
    static auto* defaultEnvironmentEvents = &::il2cpp_utils::GetClassFromName("", "DefaultEnvironmentEvents")->byval_arg;
    static auto* environmentLightGroups = &::il2cpp_utils::GetClassFromName("", "EnvironmentLightGroups")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DefaultEnvironmentEventsFactory*), "InsertDefaultEnvironmentEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData, beatmapEventDataBoxGroupLists, defaultEnvironmentEvents, environmentLightGroups});
  }
};
