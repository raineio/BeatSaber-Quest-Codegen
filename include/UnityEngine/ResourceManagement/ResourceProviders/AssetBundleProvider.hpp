// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
#include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProvideHandle
  struct ProvideHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleProvider
  // [DisplayNameAttribute] Offset: DFAB8C
  class AssetBundleProvider : public UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
    public:
    // Creating value type constructor for type: AssetBundleProvider
    AssetBundleProvider() noexcept {}
    // public override System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    // Offset: 0x19B0950
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);
    // public override System.Type GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x19B0C0C
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Type ResourceProviderBase::GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    System::Type* GetDefaultType(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public override System.Void Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object asset)
    // Offset: 0x19B0C7C
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object asset)
    void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::Il2CppObject* asset);
    // public System.Void .ctor()
    // Offset: 0x19B0EA0
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundleProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundleProvider*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.AssetBundleProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleProvider");