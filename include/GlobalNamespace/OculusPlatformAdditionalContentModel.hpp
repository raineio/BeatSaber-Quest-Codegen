// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: AdditionalContentModel/UpdateEntitlementsResult
#include "GlobalNamespace/AdditionalContentModel_UpdateEntitlementsResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusPlatformAdditionalContentModel
  class OculusPlatformAdditionalContentModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel*, "", "OculusPlatformAdditionalContentModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformAdditionalContentModel
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
    public:
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__5
    struct $GetLevelEntitlementStatusInternalAsync$d__5;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$GetPackEntitlementStatusInternalAsync$d__6
    struct $GetPackEntitlementStatusInternalAsync$d__6;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$DataIsValidAsync$d__7
    struct $DataIsValidAsync$d__7;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8
    struct $OpenLevelProductStoreAsync$d__8;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__9
    struct $OpenLevelPackProductStoreAsync$d__9;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10
    struct $LaunchCheckoutFlow$d__10;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__11
    struct $IsPackBetterBuyThanLevelAsync$d__11;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: ::GlobalNamespace::OculusPlatformAdditionalContentModel::$CheckForNewEntitlementsAsync$d__12
    struct $CheckForNewEntitlementsAsync$d__12;
    public:
    // [InjectAttribute] Offset: 0x10D04D0
    // private OculusLevelProductsModelSO _oculusLevelProductsModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusLevelProductsModelSO*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _entitlementsSKU
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::HashSet_1<::StringW>* entitlementsSKU;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // private System.Threading.SemaphoreSlim _semaphoreSlim
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::SemaphoreSlim* semaphoreSlim;
    // Field size check
    static_assert(sizeof(::System::Threading::SemaphoreSlim*) == 0x8);
    // private System.Boolean _isDataValid
    // Size: 0x1
    // Offset: 0x40
    bool isDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private OculusLevelProductsModelSO _oculusLevelProductsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OculusLevelProductsModelSO*& dyn__oculusLevelProductsModel();
    // Get instance field reference: private System.Collections.Generic.HashSet`1<System.String> _entitlementsSKU
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::StringW>*& dyn__entitlementsSKU();
    // Get instance field reference: private System.Threading.SemaphoreSlim _semaphoreSlim
    [[deprecated("Use field access instead!")]] ::System::Threading::SemaphoreSlim*& dyn__semaphoreSlim();
    // Get instance field reference: private System.Boolean _isDataValid
    [[deprecated("Use field access instead!")]] bool& dyn__isDataValid();
    // private System.Threading.Tasks.Task`1<System.Boolean> DataIsValidAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154B700
    ::System::Threading::Tasks::Task_1<bool>* DataIsValidAsync(::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> LaunchCheckoutFlow(System.String sku)
    // Offset: 0x154BA3C
    ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* LaunchCheckoutFlow(::StringW sku);
    // private System.Threading.Tasks.Task`1<AdditionalContentModel/UpdateEntitlementsResult> CheckForNewEntitlementsAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154BC3C
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* CheckForNewEntitlementsAsync(::System::Threading::CancellationToken cancellationToken);
    // private System.Boolean HasLevelEntitlement(System.String levelId)
    // Offset: 0x154BD60
    bool HasLevelEntitlement(::StringW levelId);
    // private System.Boolean HasLevelPackEntitlement(System.String levelPackId)
    // Offset: 0x154BDE0
    bool HasLevelPackEntitlement(::StringW levelPackId);
    // public System.Void .ctor()
    // Offset: 0x154BEB8
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAdditionalContentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformAdditionalContentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAdditionalContentModel*, creationType>()));
    }
    // protected override System.Void InvalidateDataInternal()
    // Offset: 0x154B4D0
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::InvalidateDataInternal()
    void InvalidateDataInternal();
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154B4D8
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusInternalAsync(System.String packId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154B5EC
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetPackEntitlementStatusInternalAsync(System.String packId, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW packId, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154B80C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154B924
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x154BB3C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> AdditionalContentModel::IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);
  }; // OculusPlatformAdditionalContentModel
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformAdditionalContentModel), 64 + sizeof(bool)> __GlobalNamespace_OculusPlatformAdditionalContentModelSizeCheck;
  static_assert(sizeof(OculusPlatformAdditionalContentModel) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::DataIsValidAsync
// Il2CppName: DataIsValidAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::DataIsValidAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "DataIsValidAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow
// Il2CppName: LaunchCheckoutFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::LaunchCheckoutFlow)> {
  static const MethodInfo* get() {
    static auto* sku = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "LaunchCheckoutFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sku});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync
// Il2CppName: CheckForNewEntitlementsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::CheckForNewEntitlementsAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "CheckForNewEntitlementsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement
// Il2CppName: HasLevelEntitlement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelEntitlement)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "HasLevelEntitlement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement
// Il2CppName: HasLevelPackEntitlement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::HasLevelPackEntitlement)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "HasLevelPackEntitlement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal
// Il2CppName: InvalidateDataInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformAdditionalContentModel::*)()>(&GlobalNamespace::OculusPlatformAdditionalContentModel::InvalidateDataInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "InvalidateDataInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync
// Il2CppName: GetLevelEntitlementStatusInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "GetLevelEntitlementStatusInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync
// Il2CppName: GetPackEntitlementStatusInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  static const MethodInfo* get() {
    static auto* packId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "GetPackEntitlementStatusInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packId, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync
// Il2CppName: OpenLevelProductStoreAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "OpenLevelProductStoreAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync
// Il2CppName: OpenLevelPackProductStoreAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId, cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync
// Il2CppName: IsPackBetterBuyThanLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* (GlobalNamespace::OculusPlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::OculusPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformAdditionalContentModel*), "IsPackBetterBuyThanLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId, token});
  }
};
