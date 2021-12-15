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
  // Forward declaring type: AudioPlayerBase
  class AudioPlayerBase;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FadeOutSongPreviewPlayerOnSceneTransitionStart
  class FadeOutSongPreviewPlayerOnSceneTransitionStart;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*, "", "FadeOutSongPreviewPlayerOnSceneTransitionStart");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FadeOutSongPreviewPlayerOnSceneTransitionStart
  // [TokenAttribute] Offset: FFFFFFFF
  class FadeOutSongPreviewPlayerOnSceneTransitionStart : public UnityEngine::MonoBehaviour {
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
    // private AudioPlayerBase _songPreviewPlayer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AudioPlayerBase* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPlayerBase*) == 0x8);
    // [InjectAttribute] Offset: 0xF351B8
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AudioPlayerBase _songPreviewPlayer
    GlobalNamespace::AudioPlayerBase*& dyn__songPreviewPlayer();
    // Get instance field reference: private GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // protected System.Void Start()
    // Offset: 0x11E18A8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11E193C
    void OnDestroy();
    // private System.Void HandleGameScenesManagerTransitionDidStart(System.Single duration)
    // Offset: 0x11E1A18
    void HandleGameScenesManagerTransitionDidStart(float duration);
    // public System.Void .ctor()
    // Offset: 0x11E1AB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeOutSongPreviewPlayerOnSceneTransitionStart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeOutSongPreviewPlayerOnSceneTransitionStart*, creationType>()));
    }
  }; // FadeOutSongPreviewPlayerOnSceneTransitionStart
  #pragma pack(pop)
  static check_size<sizeof(FadeOutSongPreviewPlayerOnSceneTransitionStart), 32 + sizeof(GlobalNamespace::GameScenesManager*)> __GlobalNamespace_FadeOutSongPreviewPlayerOnSceneTransitionStartSizeCheck;
  static_assert(sizeof(FadeOutSongPreviewPlayerOnSceneTransitionStart) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::*)()>(&GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::*)()>(&GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart
// Il2CppName: HandleGameScenesManagerTransitionDidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::*)(float)>(&GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::HandleGameScenesManagerTransitionDidStart)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart*), "HandleGameScenesManagerTransitionDidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeOutSongPreviewPlayerOnSceneTransitionStart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
