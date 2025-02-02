// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: SceneInfo
  class SceneInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EventsTestScenesTransitionSetupDataSO
  class EventsTestScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestScenesTransitionSetupDataSO*, "", "EventsTestScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: EventsTestScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class EventsTestScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private SceneInfo _eventsTestSceneInfo
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SceneInfo* eventsTestSceneInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SceneInfo*) == 0x8);
    public:
    // Get instance field reference: private EnvironmentInfoSO _environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn__environmentInfo();
    // Get instance field reference: private SceneInfo _eventsTestSceneInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SceneInfo*& dyn__eventsTestSceneInfo();
    // Get instance field reference: private SceneInfo _gameCoreSceneInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SceneInfo*& dyn__gameCoreSceneInfo();
    // public System.Void .ctor()
    // Offset: 0x139A690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventsTestScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EventsTestScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventsTestScenesTransitionSetupDataSO*, creationType>()));
    }
    // public System.Void Init()
    // Offset: 0x139A4C0
    void Init();
  }; // EventsTestScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(EventsTestScenesTransitionSetupDataSO), 64 + sizeof(::GlobalNamespace::SceneInfo*)> __GlobalNamespace_EventsTestScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(EventsTestScenesTransitionSetupDataSO) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EventsTestScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EventsTestScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::EventsTestScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
