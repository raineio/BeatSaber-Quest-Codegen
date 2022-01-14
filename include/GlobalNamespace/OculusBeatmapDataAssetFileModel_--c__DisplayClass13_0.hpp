// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusBeatmapDataAssetFileModel*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x18
    ::StringW levelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
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
    public:
    // Get instance field reference: public OculusBeatmapDataAssetFileModel <>4__this
    GlobalNamespace::OculusBeatmapDataAssetFileModel*& dyn_$$4__this();
    // Get instance field reference: public System.String levelId
    ::StringW& dyn_levelId();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> taskSource
    System::Threading::Tasks::TaskCompletionSource_1<bool>*& dyn_taskSource();
    // System.Void <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetFileDeleteResult> msg)
    // Offset: 0x13493C8
    void $TryDeleteAssetBundleFileForPreviewLevelAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult*>* msg);
    // public System.Void .ctor()
    // Offset: 0x13493C0
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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::$TryDeleteAssetBundleFileForPreviewLevelAsync$b__0
// Il2CppName: <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult*>*)>(&GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::$TryDeleteAssetBundleFileForPreviewLevelAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "AssetFileDeleteResult")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0*), "<TryDeleteAssetBundleFileForPreviewLevelAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
