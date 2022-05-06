// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleCreateRequest
  class AssetBundleCreateRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0*, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO/<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AssetBundleCreateRequest assetBundleCreateRequest
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::AssetBundleCreateRequest*) == 0x8);
    // public System.String levelDataAssetName
    // Size: 0x8
    // Offset: 0x18
    ::StringW levelDataAssetName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<BeatmapLevelDataSO> taskSource
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>* taskSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AssetBundleCreateRequest assetBundleCreateRequest
    [[deprecated("Use field access instead!")]] ::UnityEngine::AssetBundleCreateRequest*& dyn_assetBundleCreateRequest();
    // Get instance field reference: public System.String levelDataAssetName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_levelDataAssetName();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<BeatmapLevelDataSO> taskSource
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>*& dyn_taskSource();
    // public System.Void .ctor()
    // Offset: 0x1503550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0*, creationType>()));
    }
    // System.Void <LoadBeatmapLevelDataAsync>b__0(UnityEngine.AsyncOperation asyncOperation)
    // Offset: 0x1503558
    void $LoadBeatmapLevelDataAsync$b__0(::UnityEngine::AsyncOperation* asyncOperation);
  }; // BeatmapLevelDataLoaderSO/<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0), 32 + sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0::$LoadBeatmapLevelDataAsync$b__0
// Il2CppName: <LoadBeatmapLevelDataAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0::*)(::UnityEngine::AsyncOperation*)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0::$LoadBeatmapLevelDataAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* asyncOperation = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0*), "<LoadBeatmapLevelDataAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncOperation});
  }
};
