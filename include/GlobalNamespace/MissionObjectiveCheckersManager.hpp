// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveChecker
  class MissionObjectiveChecker;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: MissionObjectiveTypeSO
  class MissionObjectiveTypeSO;
  // Forward declaring type: MissionObjectiveResult
  class MissionObjectiveResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveCheckersManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionObjectiveCheckersManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionObjectiveCheckersManager::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private MissionObjectiveChecker[] _missionObjectiveCheckers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<GlobalNamespace::MissionObjectiveChecker*> missionObjectiveCheckers;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::MissionObjectiveChecker*>) == 0x8);
    // [InjectAttribute] Offset: 0xF08158
    // private MissionObjectiveCheckersManager/InitData _initData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionObjectiveCheckersManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xF08168
    // private ILevelEndActions _gameplayManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // private System.Action objectiveDidFailEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* objectiveDidFailEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action objectiveWasClearedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* objectiveWasClearedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action objectivesListDidChangeEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* objectivesListDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private MissionObjectiveChecker[] _activeMissionObjectiveCheckers
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<GlobalNamespace::MissionObjectiveChecker*> activeMissionObjectiveCheckers;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::MissionObjectiveChecker*>) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionObjectiveChecker[] _missionObjectiveCheckers
    ::ArrayW<GlobalNamespace::MissionObjectiveChecker*>& dyn__missionObjectiveCheckers();
    // Get instance field reference: private MissionObjectiveCheckersManager/InitData _initData
    GlobalNamespace::MissionObjectiveCheckersManager::InitData*& dyn__initData();
    // Get instance field reference: private ILevelEndActions _gameplayManager
    GlobalNamespace::ILevelEndActions*& dyn__gameplayManager();
    // Get instance field reference: private System.Action objectiveDidFailEvent
    System::Action*& dyn_objectiveDidFailEvent();
    // Get instance field reference: private System.Action objectiveWasClearedEvent
    System::Action*& dyn_objectiveWasClearedEvent();
    // Get instance field reference: private System.Action objectivesListDidChangeEvent
    System::Action*& dyn_objectivesListDidChangeEvent();
    // Get instance field reference: private MissionObjectiveChecker[] _activeMissionObjectiveCheckers
    ::ArrayW<GlobalNamespace::MissionObjectiveChecker*>& dyn__activeMissionObjectiveCheckers();
    // public MissionObjectiveChecker[] get_activeMissionObjectiveCheckers()
    // Offset: 0x118B6D0
    ::ArrayW<GlobalNamespace::MissionObjectiveChecker*> get_activeMissionObjectiveCheckers();
    // public System.Void add_objectiveDidFailEvent(System.Action value)
    // Offset: 0x11875B0
    void add_objectiveDidFailEvent(System::Action* value);
    // public System.Void remove_objectiveDidFailEvent(System.Action value)
    // Offset: 0x11870FC
    void remove_objectiveDidFailEvent(System::Action* value);
    // public System.Void add_objectiveWasClearedEvent(System.Action value)
    // Offset: 0x1184500
    void add_objectiveWasClearedEvent(System::Action* value);
    // public System.Void remove_objectiveWasClearedEvent(System.Action value)
    // Offset: 0x118462C
    void remove_objectiveWasClearedEvent(System::Action* value);
    // public System.Void add_objectivesListDidChangeEvent(System.Action value)
    // Offset: 0x118B588
    void add_objectivesListDidChangeEvent(System::Action* value);
    // public System.Void remove_objectivesListDidChangeEvent(System.Action value)
    // Offset: 0x118B62C
    void remove_objectivesListDidChangeEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0x118B6D8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x118BBC4
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckerStatusDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x118BD60
    void HandleMissionObjectiveCheckerStatusDidChange(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // public MissionObjectiveChecker GetMissionObjectiveChecker(MissionObjectiveTypeSO missionObjectiveType)
    // Offset: 0x118BDA0
    GlobalNamespace::MissionObjectiveChecker* GetMissionObjectiveChecker(GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType);
    // public MissionObjectiveResult[] GetResults()
    // Offset: 0x1186608
    ::ArrayW<GlobalNamespace::MissionObjectiveResult*> GetResults();
    // private System.Void HandleLevelFailed()
    // Offset: 0x118BEC8
    void HandleLevelFailed();
    // private System.Void HandleLevelFinished()
    // Offset: 0x118BFB4
    void HandleLevelFinished();
    // private System.Void StopChecking()
    // Offset: 0x118BECC
    void StopChecking();
    // public System.Void .ctor()
    // Offset: 0x118BFB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveCheckersManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectiveCheckersManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveCheckersManager*, creationType>()));
    }
  }; // MissionObjectiveCheckersManager
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveCheckersManager), 72 + sizeof(::ArrayW<GlobalNamespace::MissionObjectiveChecker*>)> __GlobalNamespace_MissionObjectiveCheckersManagerSizeCheck;
  static_assert(sizeof(MissionObjectiveCheckersManager) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveCheckersManager*, "", "MissionObjectiveCheckersManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers
// Il2CppName: get_activeMissionObjectiveCheckers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::MissionObjectiveChecker*> (GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&GlobalNamespace::MissionObjectiveCheckersManager::get_activeMissionObjectiveCheckers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "get_activeMissionObjectiveCheckers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent
// Il2CppName: add_objectiveDidFailEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)(System::Action*)>(&GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveDidFailEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "add_objectiveDidFailEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent
// Il2CppName: remove_objectiveDidFailEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)(System::Action*)>(&GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveDidFailEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "remove_objectiveDidFailEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent
// Il2CppName: add_objectiveWasClearedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)(System::Action*)>(&GlobalNamespace::MissionObjectiveCheckersManager::add_objectiveWasClearedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "add_objectiveWasClearedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent
// Il2CppName: remove_objectiveWasClearedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)(System::Action*)>(&GlobalNamespace::MissionObjectiveCheckersManager::remove_objectiveWasClearedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "remove_objectiveWasClearedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent
// Il2CppName: add_objectivesListDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)(System::Action*)>(&GlobalNamespace::MissionObjectiveCheckersManager::add_objectivesListDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "add_objectivesListDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent
// Il2CppName: remove_objectivesListDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)(System::Action*)>(&GlobalNamespace::MissionObjectiveCheckersManager::remove_objectivesListDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "remove_objectivesListDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&GlobalNamespace::MissionObjectiveCheckersManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&GlobalNamespace::MissionObjectiveCheckersManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange
// Il2CppName: HandleMissionObjectiveCheckerStatusDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)(GlobalNamespace::MissionObjectiveChecker*)>(&GlobalNamespace::MissionObjectiveCheckersManager::HandleMissionObjectiveCheckerStatusDidChange)> {
  static const MethodInfo* get() {
    static auto* missionObjectiveChecker = &::il2cpp_utils::GetClassFromName("", "MissionObjectiveChecker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "HandleMissionObjectiveCheckerStatusDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionObjectiveChecker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker
// Il2CppName: GetMissionObjectiveChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjectiveChecker* (GlobalNamespace::MissionObjectiveCheckersManager::*)(GlobalNamespace::MissionObjectiveTypeSO*)>(&GlobalNamespace::MissionObjectiveCheckersManager::GetMissionObjectiveChecker)> {
  static const MethodInfo* get() {
    static auto* missionObjectiveType = &::il2cpp_utils::GetClassFromName("", "MissionObjectiveTypeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "GetMissionObjectiveChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionObjectiveType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::GetResults
// Il2CppName: GetResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::MissionObjectiveResult*> (GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&GlobalNamespace::MissionObjectiveCheckersManager::GetResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "GetResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed
// Il2CppName: HandleLevelFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "HandleLevelFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished
// Il2CppName: HandleLevelFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&GlobalNamespace::MissionObjectiveCheckersManager::HandleLevelFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "HandleLevelFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::StopChecking
// Il2CppName: StopChecking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveCheckersManager::*)()>(&GlobalNamespace::MissionObjectiveCheckersManager::StopChecking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveCheckersManager*), "StopChecking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveCheckersManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
