// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerScoreRingManager
  class MultiplayerScoreRingManager;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerTimelineMock
  class MultiplayerTimelineMock;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerIntroAnimationController
  class MultiplayerIntroAnimationController;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::MultiplayerIntroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroAnimationController*, "", "MultiplayerIntroAnimationController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8D
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerIntroAnimationController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerIntroAnimationController : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0xF3E640
    // private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Playables::PlayableDirector* introPlayableDirector;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.String[] _playerTimelineTrackNames
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppString*> playerTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // private System.String[] _ringTimelineTrackNames
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppString*> ringTimelineTrackNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppString*>) == 0x8);
    // private UnityEngine.PropertyName[] _playerTimelinePropertyNames
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<UnityEngine::PropertyName> playerTimelinePropertyNames;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::PropertyName>) == 0x8);
    // [HeaderAttribute] Offset: 0xF3E6E4
    // private System.String _localPlayerTrackName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* localPlayerTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _localPlayerRingTrackName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* localPlayerRingTrackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.PropertyName _localPlayerTimelinePropertyName
    // Size: 0x4
    // Offset: 0x48
    UnityEngine::PropertyName localPlayerTimelinePropertyName;
    // Field size check
    static_assert(sizeof(UnityEngine::PropertyName) == 0x4);
    // [HeaderAttribute] Offset: 0xF3E778
    // private System.Single _firstConnectedPlayerStart
    // Size: 0x4
    // Offset: 0x4C
    float firstConnectedPlayerStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _spawnDuration
    // Size: 0x4
    // Offset: 0x50
    float spawnDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: spawnDuration and: endMarkerName
    char __padding8[0x4] = {};
    // private System.String _endMarkerName
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* endMarkerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xF3E7E4
    // private MultiplayerScoreRingManager _scoreRingManager
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MultiplayerScoreRingManager* scoreRingManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerScoreRingManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF3E81C
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerPlayersManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF3E82C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF3E83C
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // private System.Action _onCompleted
    // Size: 0x8
    // Offset: 0x80
    System::Action* onCompleted;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Single _introDuration
    // Size: 0x4
    // Offset: 0x88
    float introDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _bindingFinished
    // Size: 0x1
    // Offset: 0x8C
    bool bindingFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    UnityEngine::Playables::PlayableDirector*& dyn__introPlayableDirector();
    // Get instance field reference: private System.String[] _playerTimelineTrackNames
    ::ArrayW<::Il2CppString*>& dyn__playerTimelineTrackNames();
    // Get instance field reference: private System.String[] _ringTimelineTrackNames
    ::ArrayW<::Il2CppString*>& dyn__ringTimelineTrackNames();
    // Get instance field reference: private UnityEngine.PropertyName[] _playerTimelinePropertyNames
    ::ArrayW<UnityEngine::PropertyName>& dyn__playerTimelinePropertyNames();
    // Get instance field reference: private System.String _localPlayerTrackName
    ::Il2CppString*& dyn__localPlayerTrackName();
    // Get instance field reference: private System.String _localPlayerRingTrackName
    ::Il2CppString*& dyn__localPlayerRingTrackName();
    // Get instance field reference: private UnityEngine.PropertyName _localPlayerTimelinePropertyName
    UnityEngine::PropertyName& dyn__localPlayerTimelinePropertyName();
    // Get instance field reference: private System.Single _firstConnectedPlayerStart
    float& dyn__firstConnectedPlayerStart();
    // Get instance field reference: private System.Single _spawnDuration
    float& dyn__spawnDuration();
    // Get instance field reference: private System.String _endMarkerName
    ::Il2CppString*& dyn__endMarkerName();
    // Get instance field reference: private MultiplayerScoreRingManager _scoreRingManager
    GlobalNamespace::MultiplayerScoreRingManager*& dyn__scoreRingManager();
    // Get instance field reference: private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    GlobalNamespace::MultiplayerPlayersManager*& dyn__multiplayerPlayersManager();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private readonly MultiplayerLayoutProvider _layoutProvider
    GlobalNamespace::MultiplayerLayoutProvider*& dyn__layoutProvider();
    // Get instance field reference: private System.Action _onCompleted
    System::Action*& dyn__onCompleted();
    // Get instance field reference: private System.Single _introDuration
    float& dyn__introDuration();
    // Get instance field reference: private System.Boolean _bindingFinished
    bool& dyn__bindingFinished();
    // protected System.Void OnValidate()
    // Offset: 0x1292B8C
    void OnValidate();
    // public System.Void SetBeforeIntroValue()
    // Offset: 0x1290CB8
    void SetBeforeIntroValue();
    // public System.Void PlayIntroAnimation(System.Single maxDesiredIntroAnimationDuration, System.Action onCompleted)
    // Offset: 0x129307C
    void PlayIntroAnimation(float maxDesiredIntroAnimationDuration, System::Action* onCompleted);
    // public System.Single GetFullIntroAnimationTime()
    // Offset: 0x1293928
    float GetFullIntroAnimationTime();
    // private System.Void BindTimeline()
    // Offset: 0x129317C
    void BindTimeline();
    // private System.Void BindRingsAndSetTiming(System.Int32 connectedPlayersCount, UnityEngine.GameObject[] connectedRings, UnityEngine.GameObject localRing)
    // Offset: 0x1294100
    void BindRingsAndSetTiming(int connectedPlayersCount, ::ArrayW<UnityEngine::GameObject*> connectedRings, UnityEngine::GameObject* localRing);
    // public System.Void TransitionToAfterIntroAnimationState()
    // Offset: 0x12948CC
    void TransitionToAfterIntroAnimationState();
    // private System.Collections.Generic.Queue`1<System.Int32> CalculatePlayerIndexSequence(System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> allActivePlayer)
    // Offset: 0x1293C58
    System::Collections::Generic::Queue_1<int>* CalculatePlayerIndexSequence(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* allActivePlayer);
    // public System.Void SetTimelineMock(MultiplayerTimelineMock multiplayerIntroTimelineMock, System.Boolean isDuel)
    // Offset: 0x12949F8
    void SetTimelineMock(GlobalNamespace::MultiplayerTimelineMock* multiplayerIntroTimelineMock, bool isDuel);
    // public System.Void Completed()
    // Offset: 0x1294B30
    void Completed();
    // public System.Void .ctor()
    // Offset: 0x1294B6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerIntroAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerIntroAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerIntroAnimationController*, creationType>()));
    }
  }; // MultiplayerIntroAnimationController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerIntroAnimationController), 140 + sizeof(bool)> __GlobalNamespace_MultiplayerIntroAnimationControllerSizeCheck;
  static_assert(sizeof(MultiplayerIntroAnimationController) == 0x8D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&GlobalNamespace::MultiplayerIntroAnimationController::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::SetBeforeIntroValue
// Il2CppName: SetBeforeIntroValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&GlobalNamespace::MultiplayerIntroAnimationController::SetBeforeIntroValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "SetBeforeIntroValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::PlayIntroAnimation
// Il2CppName: PlayIntroAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)(float, System::Action*)>(&GlobalNamespace::MultiplayerIntroAnimationController::PlayIntroAnimation)> {
  static const MethodInfo* get() {
    static auto* maxDesiredIntroAnimationDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* onCompleted = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "PlayIntroAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxDesiredIntroAnimationDuration, onCompleted});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::GetFullIntroAnimationTime
// Il2CppName: GetFullIntroAnimationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&GlobalNamespace::MultiplayerIntroAnimationController::GetFullIntroAnimationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "GetFullIntroAnimationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::BindTimeline
// Il2CppName: BindTimeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&GlobalNamespace::MultiplayerIntroAnimationController::BindTimeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "BindTimeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::BindRingsAndSetTiming
// Il2CppName: BindRingsAndSetTiming
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)(int, ::ArrayW<UnityEngine::GameObject*>, UnityEngine::GameObject*)>(&GlobalNamespace::MultiplayerIntroAnimationController::BindRingsAndSetTiming)> {
  static const MethodInfo* get() {
    static auto* connectedPlayersCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connectedRings = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    static auto* localRing = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "BindRingsAndSetTiming", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectedPlayersCount, connectedRings, localRing});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::TransitionToAfterIntroAnimationState
// Il2CppName: TransitionToAfterIntroAnimationState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&GlobalNamespace::MultiplayerIntroAnimationController::TransitionToAfterIntroAnimationState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "TransitionToAfterIntroAnimationState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::CalculatePlayerIndexSequence
// Il2CppName: CalculatePlayerIndexSequence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Queue_1<int>* (GlobalNamespace::MultiplayerIntroAnimationController::*)(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>*)>(&GlobalNamespace::MultiplayerIntroAnimationController::CalculatePlayerIndexSequence)> {
  static const MethodInfo* get() {
    static auto* allActivePlayer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "CalculatePlayerIndexSequence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allActivePlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::SetTimelineMock
// Il2CppName: SetTimelineMock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)(GlobalNamespace::MultiplayerTimelineMock*, bool)>(&GlobalNamespace::MultiplayerIntroAnimationController::SetTimelineMock)> {
  static const MethodInfo* get() {
    static auto* multiplayerIntroTimelineMock = &::il2cpp_utils::GetClassFromName("", "MultiplayerTimelineMock")->byval_arg;
    static auto* isDuel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "SetTimelineMock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplayerIntroTimelineMock, isDuel});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::Completed
// Il2CppName: Completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&GlobalNamespace::MultiplayerIntroAnimationController::Completed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerIntroAnimationController*), "Completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerIntroAnimationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
