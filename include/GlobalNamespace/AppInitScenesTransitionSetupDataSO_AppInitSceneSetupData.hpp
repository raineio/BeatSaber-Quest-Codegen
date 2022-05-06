// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AppInitScenesTransitionSetupDataSO
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Including type: AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
#include "GlobalNamespace/AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayersModel
  class MockPlayersModel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*, "", "AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData
  // [TokenAttribute] Offset: FFFFFFFF
  class AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData : public ::GlobalNamespace::SceneSetupData {
    public:
    public:
    // private AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType <appInitOverrideStartType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType) == 0x4);
    // Padding between fields: appInitOverrideStartType and: overrideMockPlayersModel
    char __padding0[0x4] = {};
    // private MockPlayersModel <overrideMockPlayersModel>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MockPlayersModel* overrideMockPlayersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockPlayersModel*) == 0x8);
    public:
    // Get instance field reference: private AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType <appInitOverrideStartType>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType& dyn_$appInitOverrideStartType$k__BackingField();
    // Get instance field reference: private MockPlayersModel <overrideMockPlayersModel>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockPlayersModel*& dyn_$overrideMockPlayersModel$k__BackingField();
    // public AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType get_appInitOverrideStartType()
    // Offset: 0x14EE2B8
    ::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType get_appInitOverrideStartType();
    // private System.Void set_appInitOverrideStartType(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType value)
    // Offset: 0x14EE2C0
    void set_appInitOverrideStartType(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType value);
    // public MockPlayersModel get_overrideMockPlayersModel()
    // Offset: 0x14EE2C8
    ::GlobalNamespace::MockPlayersModel* get_overrideMockPlayersModel();
    // private System.Void set_overrideMockPlayersModel(MockPlayersModel value)
    // Offset: 0x14EE2D0
    void set_overrideMockPlayersModel(::GlobalNamespace::MockPlayersModel* value);
    // public System.Void .ctor(AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType appInitOverrideStartType, MockPlayersModel overrideMockPlayersModel)
    // Offset: 0x14EDE2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData* New_ctor(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType appInitOverrideStartType, ::GlobalNamespace::MockPlayersModel* overrideMockPlayersModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*, creationType>(appInitOverrideStartType, overrideMockPlayersModel)));
    }
  }; // AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData), 24 + sizeof(::GlobalNamespace::MockPlayersModel*)> __GlobalNamespace_AppInitScenesTransitionSetupDataSO_AppInitSceneSetupDataSizeCheck;
  static_assert(sizeof(AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::get_appInitOverrideStartType
// Il2CppName: get_appInitOverrideStartType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType (GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::get_appInitOverrideStartType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*), "get_appInitOverrideStartType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::set_appInitOverrideStartType
// Il2CppName: set_appInitOverrideStartType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::*)(::GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType)>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::set_appInitOverrideStartType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*), "set_appInitOverrideStartType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::get_overrideMockPlayersModel
// Il2CppName: get_overrideMockPlayersModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockPlayersModel* (GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::*)()>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::get_overrideMockPlayersModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*), "get_overrideMockPlayersModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::set_overrideMockPlayersModel
// Il2CppName: set_overrideMockPlayersModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::*)(::GlobalNamespace::MockPlayersModel*)>(&GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::set_overrideMockPlayersModel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MockPlayersModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*), "set_overrideMockPlayersModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
