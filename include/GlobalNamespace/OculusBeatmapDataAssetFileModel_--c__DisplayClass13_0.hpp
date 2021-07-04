// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDeleteResult
  class AssetFileDeleteResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0
  // [CompilerGeneratedAttribute] Offset: E11F78
  class OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusBeatmapDataAssetFileModel*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> taskSource
    // Size: 0x8
    // Offset: 0x28
    System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass13_0
    $$c__DisplayClass13_0(GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource_ = {}) noexcept : $$4__this{$$4__this_}, levelId{levelId_}, cancellationToken{cancellationToken_}, taskSource{taskSource_} {}
    // System.Void <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetFileDeleteResult> msg)
    // Offset: 0x11E0650
    void $TryDeleteAssetBundleFileForPreviewLevelAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult*>* msg);
    // public System.Void .ctor()
    // Offset: 0x11E0648
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0*, creationType>()));
    }
  }; // OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0), 40 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*)> __GlobalNamespace_OculusBeatmapDataAssetFileModel_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0");
// Writing MetadataGetter for method: GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::$TryDeleteAssetBundleFileForPreviewLevelAsync$b__0
// Il2CppName: <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult*>*)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::$TryDeleteAssetBundleFileForPreviewLevelAsync$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0*), "<TryDeleteAssetBundleFileForPreviewLevelAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult*>*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
