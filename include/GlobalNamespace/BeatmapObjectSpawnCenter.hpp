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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnCenter
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectSpawnCenter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance
    class PlayerCountToDistance;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    private:
    #endif
    // private BeatmapObjectSpawnCenter/PlayerCountToDistance[] _distances
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance*> distances;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance*>) == 0x8);
    // private System.Single _defaultDistnace
    // Size: 0x4
    // Offset: 0x20
    float defaultDistnace;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultDistnace and: spawnCenterDistanceWasFoundEvent
    char __padding1[0x4] = {};
    // private System.Action`1<System.Single> spawnCenterDistanceWasFoundEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<float>* spawnCenterDistanceWasFoundEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // private System.Boolean _spawnCenterDistanceWasFound
    // Size: 0x1
    // Offset: 0x30
    bool spawnCenterDistanceWasFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: spawnCenterDistanceWasFound and: spawnCenterDistance
    char __padding3[0x3] = {};
    // private System.Single _spawnCenterDistance
    // Size: 0x4
    // Offset: 0x34
    float spawnCenterDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapObjectSpawnCenter/PlayerCountToDistance[] _distances
    ::ArrayW<GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance*>& dyn__distances();
    // Get instance field reference: private System.Single _defaultDistnace
    float& dyn__defaultDistnace();
    // Get instance field reference: private System.Action`1<System.Single> spawnCenterDistanceWasFoundEvent
    System::Action_1<float>*& dyn_spawnCenterDistanceWasFoundEvent();
    // Get instance field reference: private System.Boolean _spawnCenterDistanceWasFound
    bool& dyn__spawnCenterDistanceWasFound();
    // Get instance field reference: private System.Single _spawnCenterDistance
    float& dyn__spawnCenterDistance();
    // public System.Single get_spawnCenterDistance()
    // Offset: 0x12A39A0
    float get_spawnCenterDistance();
    // public System.Boolean get_spawnCenterDistanceWasFound()
    // Offset: 0x12A39A8
    bool get_spawnCenterDistanceWasFound();
    // public System.Void add_spawnCenterDistanceWasFoundEvent(System.Action`1<System.Single> value)
    // Offset: 0x12A39B0
    void add_spawnCenterDistanceWasFoundEvent(System::Action_1<float>* value);
    // public System.Void remove_spawnCenterDistanceWasFoundEvent(System.Action`1<System.Single> value)
    // Offset: 0x12A3A54
    void remove_spawnCenterDistanceWasFoundEvent(System::Action_1<float>* value);
    // public System.Single CalculateSpawnCenterPosition(System.Int32 numberOfPlayers)
    // Offset: 0x12A3AF8
    float CalculateSpawnCenterPosition(int numberOfPlayers);
    // private System.Void ReportAndSaveSpawnCenterDistance(System.Single distance)
    // Offset: 0x12A3C24
    void ReportAndSaveSpawnCenterDistance(float distance);
    // public System.Void .ctor()
    // Offset: 0x12A3CA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnCenter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnCenter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnCenter*, creationType>()));
    }
  }; // BeatmapObjectSpawnCenter
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnCenter), 52 + sizeof(float)> __GlobalNamespace_BeatmapObjectSpawnCenterSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnCenter) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnCenter*, "", "BeatmapObjectSpawnCenter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistance
// Il2CppName: get_spawnCenterDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnCenter::*)()>(&GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter*), "get_spawnCenterDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistanceWasFound
// Il2CppName: get_spawnCenterDistanceWasFound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapObjectSpawnCenter::*)()>(&GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistanceWasFound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter*), "get_spawnCenterDistanceWasFound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::add_spawnCenterDistanceWasFoundEvent
// Il2CppName: add_spawnCenterDistanceWasFoundEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnCenter::*)(System::Action_1<float>*)>(&GlobalNamespace::BeatmapObjectSpawnCenter::add_spawnCenterDistanceWasFoundEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter*), "add_spawnCenterDistanceWasFoundEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::remove_spawnCenterDistanceWasFoundEvent
// Il2CppName: remove_spawnCenterDistanceWasFoundEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnCenter::*)(System::Action_1<float>*)>(&GlobalNamespace::BeatmapObjectSpawnCenter::remove_spawnCenterDistanceWasFoundEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter*), "remove_spawnCenterDistanceWasFoundEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::CalculateSpawnCenterPosition
// Il2CppName: CalculateSpawnCenterPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapObjectSpawnCenter::*)(int)>(&GlobalNamespace::BeatmapObjectSpawnCenter::CalculateSpawnCenterPosition)> {
  static const MethodInfo* get() {
    static auto* numberOfPlayers = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter*), "CalculateSpawnCenterPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numberOfPlayers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::ReportAndSaveSpawnCenterDistance
// Il2CppName: ReportAndSaveSpawnCenterDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnCenter::*)(float)>(&GlobalNamespace::BeatmapObjectSpawnCenter::ReportAndSaveSpawnCenterDistance)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnCenter*), "ReportAndSaveSpawnCenterDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnCenter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
