// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass124_0
  // [CompilerGeneratedAttribute] Offset: E01748
  class AddressablesImpl::$$c__DisplayClass124_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Boolean autoReleaseHandle
    // Size: 0x1
    // Offset: 0x18
    bool autoReleaseHandle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass124_0
    $$c__DisplayClass124_0(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, bool autoReleaseHandle_ = {}) noexcept : $$4__this{$$4__this_}, autoReleaseHandle{autoReleaseHandle_} {}
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>> <UpdateCatalogs>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<System.String>> depOp)
    // Offset: 0x13D45EC
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> $UpdateCatalogs$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::Il2CppString*>*> depOp);
    // System.Void <UpdateCatalogs>b__1(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle o)
    // Offset: 0x13D4638
    void $UpdateCatalogs$b__1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle o);
    // public System.Void .ctor()
    // Offset: 0x13D3394
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass124_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass124_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass124_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass124_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass124_0), 24 + sizeof(bool)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass124_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass124_0) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass124_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass124_0");