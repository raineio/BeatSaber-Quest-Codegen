// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: HandsMovementMissionObjectiveChecker
  class HandsMovementMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xE1C90C
    // private SaberActivityCounter _saberActivityCounter
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::SaberActivityCounter* saberActivityCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberActivityCounter*) == 0x8);
    // Creating value type constructor for type: HandsMovementMissionObjectiveChecker
    HandsMovementMissionObjectiveChecker(GlobalNamespace::SaberActivityCounter* saberActivityCounter_ = {}) noexcept : saberActivityCounter{saberActivityCounter_} {}
    // protected System.Void OnDestroy()
    // Offset: 0x10BB5C8
    void OnDestroy();
    // private System.Void HandleTotalDistanceDidChange(System.Single distance)
    // Offset: 0x10BB6A4
    void HandleTotalDistanceDidChange(float distance);
    // protected override System.Void Init()
    // Offset: 0x10BB6D4
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x10BB798
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandsMovementMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HandsMovementMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandsMovementMissionObjectiveChecker*, creationType>()));
    }
  }; // HandsMovementMissionObjectiveChecker
  #pragma pack(pop)
  static check_size<sizeof(HandsMovementMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::SaberActivityCounter*)> __GlobalNamespace_HandsMovementMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(HandsMovementMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HandsMovementMissionObjectiveChecker*, "", "HandsMovementMissionObjectiveChecker");
// Writing MetadataGetter for method: GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandsMovementMissionObjectiveChecker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange
// Il2CppName: HandleTotalDistanceDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandsMovementMissionObjectiveChecker::*)(float)>(&GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandsMovementMissionObjectiveChecker*), "HandleTotalDistanceDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandsMovementMissionObjectiveChecker::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&GlobalNamespace::HandsMovementMissionObjectiveChecker::Init)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandsMovementMissionObjectiveChecker*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandsMovementMissionObjectiveChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
