// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionStageLockView
  class MissionStageLockView;
  // Forward declaring type: MissionStage
  class MissionStage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MissionStagesManager
  class MissionStagesManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionStagesManager::$$c
    class $$c;
    // private MissionStageLockView _missionStageLockView
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionStageLockView* missionStageLockView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionStageLockView*) == 0x8);
    // private MissionStage[] _missionStages
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::MissionStage*>* missionStages;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionStage*>*) == 0x8);
    // private MissionStage _firstLockedMissionStage
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionStage* firstLockedMissionStage;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionStage*) == 0x8);
    // Creating value type constructor for type: MissionStagesManager
    MissionStagesManager(GlobalNamespace::MissionStageLockView* missionStageLockView_ = {}, ::Array<GlobalNamespace::MissionStage*>* missionStages_ = {}, GlobalNamespace::MissionStage* firstLockedMissionStage_ = {}) noexcept : missionStageLockView{missionStageLockView_}, missionStages{missionStages_}, firstLockedMissionStage{firstLockedMissionStage_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MissionStage get_firstLockedMissionStage()
    // Offset: 0x109D20C
    GlobalNamespace::MissionStage* get_firstLockedMissionStage();
    // public System.Void UpdateFirtsLockedMissionStage(System.Int32 numberOfClearedMissions)
    // Offset: 0x1099AF0
    void UpdateFirtsLockedMissionStage(int numberOfClearedMissions);
    // public System.Void InitStages()
    // Offset: 0x109D214
    void InitStages();
    // public System.Void UpdateStageLockPosition()
    // Offset: 0x1099D9C
    void UpdateStageLockPosition();
    // public System.Void UpdateStageLockPositionAnimated(System.Boolean animated, System.Single animationDuration)
    // Offset: 0x1097D48
    void UpdateStageLockPositionAnimated(bool animated, float animationDuration);
    // public System.Void UpdateStageLockText(System.Int32 numberOfClearedMissions)
    // Offset: 0x1099B88
    void UpdateStageLockText(int numberOfClearedMissions);
    // public System.Void .ctor()
    // Offset: 0x109D33C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionStagesManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionStagesManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionStagesManager*, creationType>()));
    }
  }; // MissionStagesManager
  #pragma pack(pop)
  static check_size<sizeof(MissionStagesManager), 40 + sizeof(GlobalNamespace::MissionStage*)> __GlobalNamespace_MissionStagesManagerSizeCheck;
  static_assert(sizeof(MissionStagesManager) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStagesManager*, "", "MissionStagesManager");
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage
// Il2CppName: get_firstLockedMissionStage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionStage* (GlobalNamespace::MissionStagesManager::*)()>(&GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager*), "get_firstLockedMissionStage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage
// Il2CppName: UpdateFirtsLockedMissionStage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)(int)>(&GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager*), "UpdateFirtsLockedMissionStage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::InitStages
// Il2CppName: InitStages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)()>(&GlobalNamespace::MissionStagesManager::InitStages)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager*), "InitStages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::UpdateStageLockPosition
// Il2CppName: UpdateStageLockPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)()>(&GlobalNamespace::MissionStagesManager::UpdateStageLockPosition)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager*), "UpdateStageLockPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated
// Il2CppName: UpdateStageLockPositionAnimated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)(bool, float)>(&GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager*), "UpdateStageLockPositionAnimated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::UpdateStageLockText
// Il2CppName: UpdateStageLockText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionStagesManager::*)(int)>(&GlobalNamespace::MissionStagesManager::UpdateStageLockText)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionStagesManager*), "UpdateStageLockText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionStagesManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
