// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/BundledAssetProvider.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IAssetBundleResource
  class IAssetBundleResource;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider/InternalOp");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/UnityEngine.ResourceManagement.ResourceProviders.InternalOp
  // [TokenAttribute] Offset: FFFFFFFF
  class BundledAssetProvider::InternalOp : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.AssetBundleRequest m_RequestOperation
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AssetBundleRequest* m_RequestOperation;
    // Field size check
    static_assert(sizeof(::UnityEngine::AssetBundleRequest*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    // Size: 0x18
    // Offset: 0x18
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    // private System.String subObjectName
    // Size: 0x8
    // Offset: 0x30
    ::StringW subObjectName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.AssetBundleRequest m_RequestOperation
    [[deprecated("Use field access instead!")]] ::UnityEngine::AssetBundleRequest*& dyn_m_RequestOperation();
    // Get instance field reference: private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& dyn_m_ProvideHandle();
    // Get instance field reference: private System.String subObjectName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_subObjectName();
    // public System.Void .ctor()
    // Offset: 0x1F7B730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BundledAssetProvider::InternalOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BundledAssetProvider::InternalOp*, creationType>()));
    }
    // static UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource LoadBundleFromDependecies(System.Collections.Generic.IList`1<System.Object> results)
    // Offset: 0x1F7BB84
    static ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource* LoadBundleFromDependecies(::System::Collections::Generic::IList_1<::Il2CppObject*>* results);
    // public System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0x1F7B738
    void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // private System.Boolean WaitForCompletionHandler()
    // Offset: 0x1F7C2C8
    bool WaitForCompletionHandler();
    // private System.Void ActionComplete(UnityEngine.AsyncOperation obj)
    // Offset: 0x1F7BF4C
    void ActionComplete(::UnityEngine::AsyncOperation* obj);
    // public System.Single ProgressCallback()
    // Offset: 0x1F7C718
    float ProgressCallback();
  }; // UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/UnityEngine.ResourceManagement.ResourceProviders.InternalOp
  #pragma pack(pop)
  static check_size<sizeof(BundledAssetProvider::InternalOp), 48 + sizeof(::StringW)> __UnityEngine_ResourceManagement_ResourceProviders_BundledAssetProvider_InternalOpSizeCheck;
  static_assert(sizeof(BundledAssetProvider::InternalOp) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::LoadBundleFromDependecies
// Il2CppName: LoadBundleFromDependecies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource* (*)(::System::Collections::Generic::IList_1<::Il2CppObject*>*)>(&UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::LoadBundleFromDependecies)> {
  static const MethodInfo* get() {
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp*), "LoadBundleFromDependecies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{results});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::Start)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::WaitForCompletionHandler
// Il2CppName: WaitForCompletionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::WaitForCompletionHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp*), "WaitForCompletionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::ActionComplete
// Il2CppName: ActionComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::ActionComplete)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp*), "ActionComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::ProgressCallback
// Il2CppName: ProgressCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::ProgressCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp*), "ProgressCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
