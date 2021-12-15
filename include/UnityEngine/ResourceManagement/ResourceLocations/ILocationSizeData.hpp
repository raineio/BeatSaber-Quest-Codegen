// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: ILocationSizeData
  class ILocationSizeData;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*, "UnityEngine.ResourceManagement.ResourceLocations", "ILocationSizeData");
// Type namespace: UnityEngine.ResourceManagement.ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceLocations.ILocationSizeData
  // [TokenAttribute] Offset: FFFFFFFF
  class ILocationSizeData {
    public:
    // public System.Int64 ComputeSize(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, UnityEngine.ResourceManagement.ResourceManager resourceManager)
    // Offset: 0xFFFFFFFF
    int64_t ComputeSize(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, UnityEngine::ResourceManagement::ResourceManager* resourceManager);
  }; // UnityEngine.ResourceManagement.ResourceLocations.ILocationSizeData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::ComputeSize
// Il2CppName: ComputeSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, UnityEngine::ResourceManagement::ResourceManager*)>(&UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData::ComputeSize)> {
  static const MethodInfo* get() {
    static auto* location = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    static auto* resourceManager = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement", "ResourceManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*), "ComputeSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{location, resourceManager});
  }
};
