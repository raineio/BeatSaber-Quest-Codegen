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
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ObstacleController
  class ObstacleController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerHeadAndObstacleInteraction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeadAndObstacleInteraction*, "", "PlayerHeadAndObstacleInteraction");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeadAndObstacleInteraction
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerHeadAndObstacleInteraction : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x1124984
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0x1124994
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // private System.Action headDidEnterObstaclesEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* headDidEnterObstaclesEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<ObstacleController> headDidEnterObstacleEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::GlobalNamespace::ObstacleController*>* headDidEnterObstacleEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ObstacleController*>*) == 0x8);
    // private System.Int32 _lastFrameNumCheck
    // Size: 0x4
    // Offset: 0x38
    int lastFrameNumCheck;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastFrameNumCheck and: intersectingObstacles
    char __padding4[0x4] = {};
    // private readonly System.Collections.Generic.HashSet`1<ObstacleController> _intersectingObstacles
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>* intersectingObstacles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*) == 0x8);
    // private System.Int32 _prevFrameNumberOfIntersectingObstaclesCount
    // Size: 0x4
    // Offset: 0x48
    int prevFrameNumberOfIntersectingObstaclesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private System.Action headDidEnterObstaclesEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_headDidEnterObstaclesEvent();
    // Get instance field reference: private System.Action`1<ObstacleController> headDidEnterObstacleEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::ObstacleController*>*& dyn_headDidEnterObstacleEvent();
    // Get instance field reference: private System.Int32 _lastFrameNumCheck
    [[deprecated("Use field access instead!")]] int& dyn__lastFrameNumCheck();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<ObstacleController> _intersectingObstacles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*& dyn__intersectingObstacles();
    // Get instance field reference: private System.Int32 _prevFrameNumberOfIntersectingObstaclesCount
    [[deprecated("Use field access instead!")]] int& dyn__prevFrameNumberOfIntersectingObstaclesCount();
    // public System.Boolean get_playerHeadIsInObstacle()
    // Offset: 0x15888C4
    bool get_playerHeadIsInObstacle();
    // public System.Void add_headDidEnterObstaclesEvent(System.Action value)
    // Offset: 0x1588634
    void add_headDidEnterObstaclesEvent(::System::Action* value);
    // public System.Void remove_headDidEnterObstaclesEvent(System.Action value)
    // Offset: 0x15886D8
    void remove_headDidEnterObstaclesEvent(::System::Action* value);
    // public System.Void add_headDidEnterObstacleEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x158877C
    void add_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);
    // public System.Void remove_headDidEnterObstacleEvent(System.Action`1<ObstacleController> value)
    // Offset: 0x1588820
    void remove_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController*>* value);
    // public System.Void .ctor()
    // Offset: 0x1588C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeadAndObstacleInteraction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerHeadAndObstacleInteraction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeadAndObstacleInteraction*, creationType>()));
    }
    // private System.Void RefreshIntersectingObstacles(UnityEngine.Vector3 worldPos)
    // Offset: 0x158891C
    void RefreshIntersectingObstacles(::UnityEngine::Vector3 worldPos);
    // protected System.Void Update()
    // Offset: 0x1588BBC
    void Update();
  }; // PlayerHeadAndObstacleInteraction
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeadAndObstacleInteraction), 72 + sizeof(int)> __GlobalNamespace_PlayerHeadAndObstacleInteractionSizeCheck;
  static_assert(sizeof(PlayerHeadAndObstacleInteraction) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle
// Il2CppName: get_playerHeadIsInObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(&GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeadAndObstacleInteraction*), "get_playerHeadIsInObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent
// Il2CppName: add_headDidEnterObstaclesEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action*)>(&GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeadAndObstacleInteraction*), "add_headDidEnterObstaclesEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent
// Il2CppName: remove_headDidEnterObstaclesEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action*)>(&GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeadAndObstacleInteraction*), "remove_headDidEnterObstaclesEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent
// Il2CppName: add_headDidEnterObstacleEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeadAndObstacleInteraction*), "add_headDidEnterObstacleEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent
// Il2CppName: remove_headDidEnterObstacleEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::GlobalNamespace::ObstacleController*>*)>(&GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeadAndObstacleInteraction*), "remove_headDidEnterObstacleEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles
// Il2CppName: RefreshIntersectingObstacles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::UnityEngine::Vector3)>(&GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles)> {
  static const MethodInfo* get() {
    static auto* worldPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeadAndObstacleInteraction*), "RefreshIntersectingObstacles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldPos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerHeadAndObstacleInteraction::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(&GlobalNamespace::PlayerHeadAndObstacleInteraction::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerHeadAndObstacleInteraction*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
