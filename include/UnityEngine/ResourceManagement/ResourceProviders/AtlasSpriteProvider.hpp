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
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
  // [DisplayNameAttribute] Offset: DFABC4
  class AtlasSpriteProvider : public UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
    public:
    // Creating value type constructor for type: AtlasSpriteProvider
    AtlasSpriteProvider() noexcept {}
    // public override System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    // Offset: 0x19B2884
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);
    // public System.Void .ctor()
    // Offset: 0x19B2CA8
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AtlasSpriteProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AtlasSpriteProvider*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AtlasSpriteProvider");