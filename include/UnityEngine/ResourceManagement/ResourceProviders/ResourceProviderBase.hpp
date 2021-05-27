// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/IResourceProvider.hpp"
// Including type: UnityEngine.ResourceManagement.Util.IInitializableObject
#include "UnityEngine/ResourceManagement/Util/IInitializableObject.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags
#include "UnityEngine/ResourceManagement/ResourceProviders/ProviderBehaviourFlags.hpp"
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
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
  class ResourceProviderBase : public ::Il2CppObject/*, public UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider, public UnityEngine::ResourceManagement::Util::IInitializableObject*/ {
    public:
    // Nested type: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp
    class BaseInitAsyncOp;
    // Nested type: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // protected System.String m_ProviderId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_ProviderId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags m_BehaviourFlags
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags m_BehaviourFlags;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags) == 0x4);
    // Creating value type constructor for type: ResourceProviderBase
    ResourceProviderBase(::Il2CppString* m_ProviderId_ = {}, UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags m_BehaviourFlags_ = {}) noexcept : m_ProviderId{m_ProviderId_}, m_BehaviourFlags{m_BehaviourFlags_} {}
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider
    operator UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ResourceManagement::Util::IInitializableObject
    operator UnityEngine::ResourceManagement::Util::IInitializableObject() noexcept {
      return *reinterpret_cast<UnityEngine::ResourceManagement::Util::IInitializableObject*>(this);
    }
    // public System.String get_ProviderId()
    // Offset: 0x19B4C2C
    ::Il2CppString* get_ProviderId();
    // public System.Boolean Initialize(System.String id, System.String data)
    // Offset: 0x19B4C88
    bool Initialize(::Il2CppString* id, ::Il2CppString* data);
    // public System.Boolean CanProvide(System.Type t, UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x19B4CB0
    bool CanProvide(System::Type* t, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public System.Void Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, System.Object obj)
    // Offset: 0x19B4D08
    void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::Il2CppObject* obj);
    // public System.Type GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location)
    // Offset: 0x19B4D0C
    System::Type* GetDefaultType(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);
    // public System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0xFFFFFFFF
    void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> InitializeAsync(UnityEngine.ResourceManagement.ResourceManager rm, System.String id, System.String data)
    // Offset: 0x19B4D7C
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(UnityEngine::ResourceManagement::ResourceManager* rm, ::Il2CppString* id, ::Il2CppString* data);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags()
    // Offset: 0x19B4EF8
    UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags();
    // public override System.String ToString()
    // Offset: 0x19B4CFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // protected System.Void .ctor()
    // Offset: 0x19B0EA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceProviderBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceProviderBase*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
  #pragma pack(pop)
  static check_size<sizeof(ResourceProviderBase), 24 + sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags)> __UnityEngine_ResourceManagement_ResourceProviders_ResourceProviderBaseSizeCheck;
  static_assert(sizeof(ResourceProviderBase) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase");