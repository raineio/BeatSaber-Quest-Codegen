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
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelAnalytics
  class MissionLevelAnalytics : public UnityEngine::MonoBehaviour {
    public:
    // private MissionLevelScenesTransitionSetupDataSO _missionLevelScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE14360
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // Creating value type constructor for type: MissionLevelAnalytics
    MissionLevelAnalytics(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}) noexcept : missionLevelScenesTransitionSetupData{missionLevelScenesTransitionSetupData_}, analyticsModel{analyticsModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1094000
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1094134
    void OnDestroy();
    // private System.Void HandleMissionLevelDidFinishEvent(MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, MissionCompletionResults missionCompletionResults)
    // Offset: 0x1094268
    void HandleMissionLevelDidFinishEvent(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x1094458
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelAnalytics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelAnalytics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelAnalytics*, creationType>()));
    }
  }; // MissionLevelAnalytics
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelAnalytics), 32 + sizeof(GlobalNamespace::IAnalyticsModel*)> __GlobalNamespace_MissionLevelAnalyticsSizeCheck;
  static_assert(sizeof(MissionLevelAnalytics) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelAnalytics*, "", "MissionLevelAnalytics");
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelAnalytics::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelAnalytics::*)()>(&GlobalNamespace::MissionLevelAnalytics::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelAnalytics*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelAnalytics::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelAnalytics::*)()>(&GlobalNamespace::MissionLevelAnalytics::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelAnalytics*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelAnalytics::HandleMissionLevelDidFinishEvent
// Il2CppName: HandleMissionLevelDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelAnalytics::*)(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, GlobalNamespace::MissionCompletionResults*)>(&GlobalNamespace::MissionLevelAnalytics::HandleMissionLevelDidFinishEvent)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelAnalytics*), "HandleMissionLevelDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MissionCompletionResults*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelAnalytics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
