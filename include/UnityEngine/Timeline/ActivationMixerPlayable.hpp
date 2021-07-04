// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Timeline.ActivationTrack/PostPlaybackState
#include "UnityEngine/Timeline/ActivationTrack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ActivationMixerPlayable
  class ActivationMixerPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // private UnityEngine.Timeline.ActivationTrack/PostPlaybackState m_PostPlaybackState
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::Timeline::ActivationTrack::PostPlaybackState m_PostPlaybackState;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::ActivationTrack::PostPlaybackState) == 0x4);
    // private System.Boolean m_BoundGameObjectInitialStateIsActive
    // Size: 0x1
    // Offset: 0x14
    bool m_BoundGameObjectInitialStateIsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_BoundGameObjectInitialStateIsActive and: m_BoundGameObject
    char __padding1[0x3] = {};
    // private UnityEngine.GameObject m_BoundGameObject
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* m_BoundGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: ActivationMixerPlayable
    ActivationMixerPlayable(UnityEngine::Timeline::ActivationTrack::PostPlaybackState m_PostPlaybackState_ = {}, bool m_BoundGameObjectInitialStateIsActive_ = {}, UnityEngine::GameObject* m_BoundGameObject_ = {}) noexcept : m_PostPlaybackState{m_PostPlaybackState_}, m_BoundGameObjectInitialStateIsActive{m_BoundGameObjectInitialStateIsActive_}, m_BoundGameObject{m_BoundGameObject_} {}
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.ActivationMixerPlayable> Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x17D57E8
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationMixerPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // public UnityEngine.Timeline.ActivationTrack/PostPlaybackState get_postPlaybackState()
    // Offset: 0x17D5870
    UnityEngine::Timeline::ActivationTrack::PostPlaybackState get_postPlaybackState();
    // public System.Void set_postPlaybackState(UnityEngine.Timeline.ActivationTrack/PostPlaybackState value)
    // Offset: 0x17D5878
    void set_postPlaybackState(UnityEngine::Timeline::ActivationTrack::PostPlaybackState value);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x17D5880
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x17D5950
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public System.Void .ctor()
    // Offset: 0x17D5B08
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivationMixerPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::ActivationMixerPlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivationMixerPlayable*, creationType>()));
    }
  }; // UnityEngine.Timeline.ActivationMixerPlayable
  #pragma pack(pop)
  static check_size<sizeof(ActivationMixerPlayable), 24 + sizeof(UnityEngine::GameObject*)> __UnityEngine_Timeline_ActivationMixerPlayableSizeCheck;
  static_assert(sizeof(ActivationMixerPlayable) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ActivationMixerPlayable*, "UnityEngine.Timeline", "ActivationMixerPlayable");
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationMixerPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationMixerPlayable*> (*)(UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Timeline::ActivationMixerPlayable::Create)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationMixerPlayable*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::PlayableGraph>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationMixerPlayable::get_postPlaybackState
// Il2CppName: get_postPlaybackState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ActivationTrack::PostPlaybackState (UnityEngine::Timeline::ActivationMixerPlayable::*)()>(&UnityEngine::Timeline::ActivationMixerPlayable::get_postPlaybackState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationMixerPlayable*), "get_postPlaybackState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationMixerPlayable::set_postPlaybackState
// Il2CppName: set_postPlaybackState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationMixerPlayable::*)(UnityEngine::Timeline::ActivationTrack::PostPlaybackState)>(&UnityEngine::Timeline::ActivationMixerPlayable::set_postPlaybackState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationMixerPlayable*), "set_postPlaybackState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::ActivationTrack::PostPlaybackState>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationMixerPlayable::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationMixerPlayable::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::ActivationMixerPlayable::OnPlayableDestroy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationMixerPlayable*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::Playable>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationMixerPlayable::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationMixerPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&UnityEngine::Timeline::ActivationMixerPlayable::ProcessFrame)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationMixerPlayable*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::Playable>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Playables::FrameData>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationMixerPlayable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
