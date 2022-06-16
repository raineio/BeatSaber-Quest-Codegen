// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Including type: UnityEngine.ExposedReference`1
#include "UnityEngine/ExposedReference_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CustomTweenBehaviour
  class CustomTweenBehaviour;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SinglePositionTween
  class SinglePositionTween;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SinglePositionTween);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SinglePositionTween*, "", "SinglePositionTween");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SinglePositionTween
  // [TokenAttribute] Offset: FFFFFFFF
  class SinglePositionTween : public ::UnityEngine::Playables::PlayableAsset/*, public ::UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    public:
    // [NullAllowed] Offset: 0x10E7C14
    // public UnityEngine.ExposedReference`1<UnityEngine.Transform> transformReference
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> transformReference;
    // public CustomTweenBehaviour template
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::CustomTweenBehaviour* _template;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CustomTweenBehaviour*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Timeline::ITimelineClipAsset
    operator ::UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Creating interface conversion operator: i_ITimelineClipAsset
    inline ::UnityEngine::Timeline::ITimelineClipAsset* i_ITimelineClipAsset() noexcept {
      return reinterpret_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.ExposedReference`1<UnityEngine.Transform> transformReference
    [[deprecated("Use field access instead!")]] ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>& dyn_transformReference();
    // Get instance field reference: public CustomTweenBehaviour template
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::CustomTweenBehaviour*& dyn_template();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x13848CC
    ::UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1384A78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SinglePositionTween* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SinglePositionTween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SinglePositionTween*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x13848D4
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);
  }; // SinglePositionTween
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SinglePositionTween::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (GlobalNamespace::SinglePositionTween::*)()>(&GlobalNamespace::SinglePositionTween::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SinglePositionTween*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SinglePositionTween::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SinglePositionTween::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (GlobalNamespace::SinglePositionTween::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&GlobalNamespace::SinglePositionTween::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SinglePositionTween*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go});
  }
};
