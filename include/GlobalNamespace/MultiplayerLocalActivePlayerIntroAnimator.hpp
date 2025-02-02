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
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalActivePlayerIntroAnimator
  class MultiplayerLocalActivePlayerIntroAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, "", "MultiplayerLocalActivePlayerIntroAnimator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerIntroAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerIntroAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Playables::PlayableDirector* introPlayableDirector;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableDirector*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Playables.PlayableDirector _introPlayableDirector
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableDirector*& dyn__introPlayableDirector();
    // public System.Void .ctor()
    // Offset: 0x13E9210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerIntroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerIntroAnimator*, creationType>()));
    }
    // public System.Void SetBeforeIntroValues()
    // Offset: 0x13E91A8
    void SetBeforeIntroValues();
    // public System.Void SetAfterIntroValues()
    // Offset: 0x13E91C4
    void SetAfterIntroValues();
  }; // MultiplayerLocalActivePlayerIntroAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerIntroAnimator), 24 + sizeof(::UnityEngine::Playables::PlayableDirector*)> __GlobalNamespace_MultiplayerLocalActivePlayerIntroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerIntroAnimator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues
// Il2CppName: SetBeforeIntroValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetBeforeIntroValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*), "SetBeforeIntroValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues
// Il2CppName: SetAfterIntroValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::*)()>(&GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator::SetAfterIntroValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*), "SetAfterIntroValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
