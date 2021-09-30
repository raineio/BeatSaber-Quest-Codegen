// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformAdditionalContentModel
#include "GlobalNamespace/OculusPlatformAdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: AdditionalContentModel/UpdateEntitlementsResult
#include "GlobalNamespace/AdditionalContentModel_UpdateEntitlementsResult.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
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
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PurchaseList
  class PurchaseList;
  // Forward declaring type: AssetDetailsList
  class AssetDetailsList;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x10
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<AdditionalContentModel/UpdateEntitlementsResult> getViewerPurchasesTaskSource
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* getViewerPurchasesTaskSource;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>*) == 0x8);
    // public OculusPlatformAdditionalContentModel <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OculusPlatformAdditionalContentModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformAdditionalContentModel*) == 0x8);
    // public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.PurchaseList> <>9__1
    // Size: 0x8
    // Offset: 0x28
    typename Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>::Callback* $$9__1;
    // Field size check
    static_assert(sizeof(typename Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>::Callback*) == 0x8);
    public:
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<AdditionalContentModel/UpdateEntitlementsResult> getViewerPurchasesTaskSource
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>*& dyn_getViewerPurchasesTaskSource();
    // Get instance field reference: public OculusPlatformAdditionalContentModel <>4__this
    GlobalNamespace::OculusPlatformAdditionalContentModel*& dyn_$$4__this();
    // Get instance field reference: public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.PurchaseList> <>9__1
    typename Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>::Callback*& dyn_$$9__1();
    // System.Void <CheckForNewEntitlementsAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetDetailsList> getListMsg)
    // Offset: 0x1116E28
    void $CheckForNewEntitlementsAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList*>* getListMsg);
    // System.Void <CheckForNewEntitlementsAsync>b__1(Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList> getPurchasesMsg)
    // Offset: 0x1117264
    void $CheckForNewEntitlementsAsync$b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>* getPurchasesMsg);
    // public System.Void .ctor()
    // Offset: 0x1116E20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0), 40 + sizeof(typename Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>::Callback*)> __GlobalNamespace_OculusPlatformAdditionalContentModel_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass12_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::$CheckForNewEntitlementsAsync$b__0
// Il2CppName: <CheckForNewEntitlementsAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList*>*)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::$CheckForNewEntitlementsAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* getListMsg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "AssetDetailsList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0*), "<CheckForNewEntitlementsAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getListMsg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::$CheckForNewEntitlementsAsync$b__1
// Il2CppName: <CheckForNewEntitlementsAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::*)(Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList*>*)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::$CheckForNewEntitlementsAsync$b__1)> {
  static const MethodInfo* get() {
    static auto* getPurchasesMsg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "PurchaseList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0*), "<CheckForNewEntitlementsAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getPurchasesMsg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
