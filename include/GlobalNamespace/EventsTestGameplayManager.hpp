// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapEventDataBoxGroupList
  class BeatmapEventDataBoxGroupList;
  // Forward declaring type: EnvironmentColorType
  struct EnvironmentColorType;
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
  // Forward declaring type: EventsTestGameplayManager
  class EventsTestGameplayManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager*, "", "EventsTestGameplayManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: EventsTestGameplayManager
  // [TokenAttribute] Offset: FFFFFFFF
  class EventsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::EventsTestGameplayManager::MockBeatToTimeConvertor
    class MockBeatToTimeConvertor;
    // Nested type: ::GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: ::GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: ::GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    public:
    // private System.Boolean _moveTime
    // Size: 0x1
    // Offset: 0x18
    bool moveTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _spawnTestBox
    // Size: 0x1
    // Offset: 0x19
    bool spawnTestBox;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: spawnTestBox and: beatmapCallbacksController
    char __padding1[0x6] = {};
    // [InjectAttribute] Offset: 0x10D7388
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // [InjectAttribute] Offset: 0x10D7398
    // private readonly BeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapData*) == 0x8);
    // [InjectAttribute] Offset: 0x10D73A8
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private BasicBeatmapEventType _basicBeatmapEventType
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // private System.Single _floatValue
    // Size: 0x4
    // Offset: 0x3C
    float floatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly BeatmapEventDataBoxGroupList[] _beatmapEventDataBoxGroupLists
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*> beatmapEventDataBoxGroupLists;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*>) == 0x8);
    // private System.Boolean[] groupState
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<bool> groupState;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,BasicBeatmapEventType> _beatmapEventTypeBindings
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* beatmapEventTypeBindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _intBindings
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int>* intBindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _beatmapValuesBindings
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int>* beatmapValuesBindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Single> _floatValuesBindings
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float>* floatValuesBindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float>*) == 0x8);
    // private System.Boolean _rotatingLasers
    // Size: 0x1
    // Offset: 0x70
    bool rotatingLasers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kNumberOfLightGroups
    static constexpr const int kNumberOfLightGroups = 20;
    // Get static field: static private System.Int32 kNumberOfLightGroups
    static int _get_kNumberOfLightGroups();
    // Set static field: static private System.Int32 kNumberOfLightGroups
    static void _set_kNumberOfLightGroups(int value);
    // Get instance field reference: private System.Boolean _moveTime
    [[deprecated("Use field access instead!")]] bool& dyn__moveTime();
    // Get instance field reference: private System.Boolean _spawnTestBox
    [[deprecated("Use field access instead!")]] bool& dyn__spawnTestBox();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly BeatmapData _beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapData*& dyn__beatmapData();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private BasicBeatmapEventType _basicBeatmapEventType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BasicBeatmapEventType& dyn__basicBeatmapEventType();
    // Get instance field reference: private System.Single _floatValue
    [[deprecated("Use field access instead!")]] float& dyn__floatValue();
    // Get instance field reference: private readonly BeatmapEventDataBoxGroupList[] _beatmapEventDataBoxGroupLists
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*>& dyn__beatmapEventDataBoxGroupLists();
    // Get instance field reference: private System.Boolean[] groupState
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_groupState();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,BasicBeatmapEventType> _beatmapEventTypeBindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*& dyn__beatmapEventTypeBindings();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _intBindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int>*& dyn__intBindings();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _beatmapValuesBindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int>*& dyn__beatmapValuesBindings();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Single> _floatValuesBindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float>*& dyn__floatValuesBindings();
    // Get instance field reference: private System.Boolean _rotatingLasers
    [[deprecated("Use field access instead!")]] bool& dyn__rotatingLasers();
    // public System.Void .ctor()
    // Offset: 0x1370ABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventsTestGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EventsTestGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventsTestGameplayManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x136E87C
    void Start();
    // protected System.Void Update()
    // Offset: 0x136E9C8
    void Update();
    // private System.Void AddEventsForLightGroup(System.Int32 lightGroupId)
    // Offset: 0x136F1C4
    void AddEventsForLightGroup(int lightGroupId);
    // private System.Void AddInstantToggleEventsForLightGroup(System.Int32 lightGroupId)
    // Offset: 0x136FE70
    void AddInstantToggleEventsForLightGroup(int lightGroupId);
    // private System.Void AddToggleEventsForLightGroup(System.Int32 lightGroupId, EnvironmentColorType color)
    // Offset: 0x136F990
    void AddToggleEventsForLightGroup(int lightGroupId, ::GlobalNamespace::EnvironmentColorType color);
    // private System.Void AddTestBox()
    // Offset: 0x1370210
    void AddTestBox();
  }; // EventsTestGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(EventsTestGameplayManager), 112 + sizeof(bool)> __GlobalNamespace_EventsTestGameplayManagerSizeCheck;
  static_assert(sizeof(EventsTestGameplayManager) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestGameplayManager::*)()>(&GlobalNamespace::EventsTestGameplayManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestGameplayManager::*)()>(&GlobalNamespace::EventsTestGameplayManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup
// Il2CppName: AddEventsForLightGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestGameplayManager::*)(int)>(&GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup)> {
  static const MethodInfo* get() {
    static auto* lightGroupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager*), "AddEventsForLightGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightGroupId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup
// Il2CppName: AddInstantToggleEventsForLightGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestGameplayManager::*)(int)>(&GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup)> {
  static const MethodInfo* get() {
    static auto* lightGroupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager*), "AddInstantToggleEventsForLightGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightGroupId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup
// Il2CppName: AddToggleEventsForLightGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestGameplayManager::*)(int, ::GlobalNamespace::EnvironmentColorType)>(&GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup)> {
  static const MethodInfo* get() {
    static auto* lightGroupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("", "EnvironmentColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager*), "AddToggleEventsForLightGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightGroupId, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::AddTestBox
// Il2CppName: AddTestBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EventsTestGameplayManager::*)()>(&GlobalNamespace::EventsTestGameplayManager::AddTestBox)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager*), "AddTestBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
