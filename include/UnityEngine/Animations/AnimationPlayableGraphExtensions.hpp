// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationPlayableGraphExtensions
  class AnimationPlayableGraphExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableGraphExtensions*, "UnityEngine.Animations", "AnimationPlayableGraphExtensions");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.AnimationPlayableGraphExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10A6B38
  // [NativeHeaderAttribute] Offset: 10A6B38
  // [NativeHeaderAttribute] Offset: 10A6B38
  // [StaticAccessorAttribute] Offset: 10A6B38
  // [NativeHeaderAttribute] Offset: 10A6B38
  class AnimationPlayableGraphExtensions : public ::Il2CppObject {
    public:
    // static System.Boolean InternalCreateAnimationOutput(ref UnityEngine.Playables.PlayableGraph graph, System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x2AF129C
    static bool InternalCreateAnimationOutput(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name, ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);
  }; // UnityEngine.Animations.AnimationPlayableGraphExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput
// Il2CppName: InternalCreateAnimationOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::Playables::PlayableGraph>, ::StringW, ByRef<::UnityEngine::Playables::PlayableOutputHandle>)>(&UnityEngine::Animations::AnimationPlayableGraphExtensions::InternalCreateAnimationOutput)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->this_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationPlayableGraphExtensions*), "InternalCreateAnimationOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name, handle});
  }
};
