// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.AnimationPlayableAsset
#include "UnityEngine/Timeline/AnimationPlayableAsset.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAssetUpgrade*, "UnityEngine.Timeline", "AnimationPlayableAsset/AnimationPlayableAssetUpgrade");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AnimationPlayableAsset/UnityEngine.Timeline.AnimationPlayableAssetUpgrade
  // [TokenAttribute] Offset: FFFFFFFF
  class AnimationPlayableAsset::AnimationPlayableAssetUpgrade : public ::Il2CppObject {
    public:
    // static public System.Void ConvertRotationToEuler(UnityEngine.Timeline.AnimationPlayableAsset asset)
    // Offset: 0x1DAE28C
    static void ConvertRotationToEuler(::UnityEngine::Timeline::AnimationPlayableAsset* asset);
  }; // UnityEngine.Timeline.AnimationPlayableAsset/UnityEngine.Timeline.AnimationPlayableAssetUpgrade
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAssetUpgrade::ConvertRotationToEuler
// Il2CppName: ConvertRotationToEuler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationPlayableAsset*)>(&UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAssetUpgrade::ConvertRotationToEuler)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "AnimationPlayableAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAssetUpgrade*), "ConvertRotationToEuler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset});
  }
};
