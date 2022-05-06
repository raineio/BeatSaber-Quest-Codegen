// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionClearedEnvironmentEffect
  class MissionClearedEnvironmentEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionClearedEnvironmentEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionClearedEnvironmentEffect*, "", "MissionClearedEnvironmentEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MissionClearedEnvironmentEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionClearedEnvironmentEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10D62B0
    // private BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionObjectiveCheckersManager*& dyn__missionObjectiveCheckersManager();
    // Get instance field reference: private BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // public System.Void .ctor()
    // Offset: 0x1300ACC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionClearedEnvironmentEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionClearedEnvironmentEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionClearedEnvironmentEffect*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x13007F4
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1300920
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectiveWasCleared()
    // Offset: 0x1300A4C
    void HandleMissionObjectiveCheckersManagerObjectiveWasCleared();
  }; // MissionClearedEnvironmentEffect
  #pragma pack(pop)
  static check_size<sizeof(MissionClearedEnvironmentEffect), 32 + sizeof(::GlobalNamespace::BeatmapCallbacksController*)> __GlobalNamespace_MissionClearedEnvironmentEffectSizeCheck;
  static_assert(sizeof(MissionClearedEnvironmentEffect) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(&GlobalNamespace::MissionClearedEnvironmentEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionClearedEnvironmentEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(&GlobalNamespace::MissionClearedEnvironmentEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionClearedEnvironmentEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionClearedEnvironmentEffect::HandleMissionObjectiveCheckersManagerObjectiveWasCleared
// Il2CppName: HandleMissionObjectiveCheckersManagerObjectiveWasCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionClearedEnvironmentEffect::*)()>(&GlobalNamespace::MissionClearedEnvironmentEffect::HandleMissionObjectiveCheckersManagerObjectiveWasCleared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionClearedEnvironmentEffect*), "HandleMissionObjectiveCheckersManagerObjectiveWasCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
