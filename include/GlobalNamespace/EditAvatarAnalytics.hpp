// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: EditAvatarFlowCoordinator/EditAvatarType
#include "GlobalNamespace/EditAvatarFlowCoordinator.hpp"
// Including type: EditAvatarViewController
#include "GlobalNamespace/EditAvatarViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: EditAvatarFlowCoordinator because it is already included!
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: AvatarDataModel
  class AvatarDataModel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EditAvatarAnalytics
  class EditAvatarAnalytics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EditAvatarAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarAnalytics*, "", "EditAvatarAnalytics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: EditAvatarAnalytics
  // [TokenAttribute] Offset: FFFFFFFF
  class EditAvatarAnalytics : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private EditAvatarFlowCoordinator _editAvatarFlowCoordinator
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::EditAvatarFlowCoordinator* editAvatarFlowCoordinator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditAvatarFlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0x10D11C0
    // private readonly EditAvatarViewController _editAvatarViewController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::EditAvatarViewController* editAvatarViewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditAvatarViewController*) == 0x8);
    // [InjectAttribute] Offset: 0x10D11D0
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAnalyticsModel*) == 0x8);
    // [InjectAttribute] Offset: 0x10D11E0
    // private readonly AvatarDataModel _avatarDataModel
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::AvatarDataModel* avatarDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarDataModel*) == 0x8);
    // private EditAvatarFlowCoordinator/EditAvatarType _lastEditAvatarType
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType lastEditAvatarType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private EditAvatarFlowCoordinator _editAvatarFlowCoordinator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EditAvatarFlowCoordinator*& dyn__editAvatarFlowCoordinator();
    // Get instance field reference: private readonly EditAvatarViewController _editAvatarViewController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EditAvatarViewController*& dyn__editAvatarViewController();
    // Get instance field reference: private readonly IAnalyticsModel _analyticsModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAnalyticsModel*& dyn__analyticsModel();
    // Get instance field reference: private readonly AvatarDataModel _avatarDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarDataModel*& dyn__avatarDataModel();
    // Get instance field reference: private EditAvatarFlowCoordinator/EditAvatarType _lastEditAvatarType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType& dyn__lastEditAvatarType();
    // public System.Void .ctor()
    // Offset: 0x140C56C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditAvatarAnalytics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EditAvatarAnalytics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditAvatarAnalytics*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x140BA30
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x140BD3C
    void OnDestroy();
    // private System.Void HandleEditAvatarFlowCoordinatorWasSetup(EditAvatarFlowCoordinator/EditAvatarType editAvatarType)
    // Offset: 0x140C0C0
    void HandleEditAvatarFlowCoordinatorWasSetup(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType editAvatarType);
    // private System.Void HandleEditAvatarViewControllerDidFinish(EditAvatarViewController/FinishAction finishAction)
    // Offset: 0x140C3A0
    void HandleEditAvatarViewControllerDidFinish(::GlobalNamespace::EditAvatarViewController::FinishAction finishAction);
    // private System.Void HandleEditAvatarViewControllerRandomizeAllButtonWasPressed()
    // Offset: 0x140C490
    void HandleEditAvatarViewControllerRandomizeAllButtonWasPressed();
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> CreateEditAvatarEventData()
    // Offset: 0x140C1A4
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CreateEditAvatarEventData();
  }; // EditAvatarAnalytics
  #pragma pack(pop)
  static check_size<sizeof(EditAvatarAnalytics), 56 + sizeof(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType)> __GlobalNamespace_EditAvatarAnalyticsSizeCheck;
  static_assert(sizeof(EditAvatarAnalytics) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarAnalytics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarAnalytics::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarAnalytics::*)()>(&GlobalNamespace::EditAvatarAnalytics::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarAnalytics*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarAnalytics::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarAnalytics::*)()>(&GlobalNamespace::EditAvatarAnalytics::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarAnalytics*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarAnalytics::HandleEditAvatarFlowCoordinatorWasSetup
// Il2CppName: HandleEditAvatarFlowCoordinatorWasSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarAnalytics::*)(::GlobalNamespace::EditAvatarFlowCoordinator::EditAvatarType)>(&GlobalNamespace::EditAvatarAnalytics::HandleEditAvatarFlowCoordinatorWasSetup)> {
  static const MethodInfo* get() {
    static auto* editAvatarType = &::il2cpp_utils::GetClassFromName("", "EditAvatarFlowCoordinator/EditAvatarType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarAnalytics*), "HandleEditAvatarFlowCoordinatorWasSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{editAvatarType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarAnalytics::HandleEditAvatarViewControllerDidFinish
// Il2CppName: HandleEditAvatarViewControllerDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarAnalytics::*)(::GlobalNamespace::EditAvatarViewController::FinishAction)>(&GlobalNamespace::EditAvatarAnalytics::HandleEditAvatarViewControllerDidFinish)> {
  static const MethodInfo* get() {
    static auto* finishAction = &::il2cpp_utils::GetClassFromName("", "EditAvatarViewController/FinishAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarAnalytics*), "HandleEditAvatarViewControllerDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finishAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarAnalytics::HandleEditAvatarViewControllerRandomizeAllButtonWasPressed
// Il2CppName: HandleEditAvatarViewControllerRandomizeAllButtonWasPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EditAvatarAnalytics::*)()>(&GlobalNamespace::EditAvatarAnalytics::HandleEditAvatarViewControllerRandomizeAllButtonWasPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarAnalytics*), "HandleEditAvatarViewControllerRandomizeAllButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EditAvatarAnalytics::CreateEditAvatarEventData
// Il2CppName: CreateEditAvatarEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (GlobalNamespace::EditAvatarAnalytics::*)()>(&GlobalNamespace::EditAvatarAnalytics::CreateEditAvatarEventData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EditAvatarAnalytics*), "CreateEditAvatarEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
